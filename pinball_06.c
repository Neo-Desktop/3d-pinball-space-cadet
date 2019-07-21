#include "pinball.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100f381(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  short sVar2;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (((_DAT_01023be0 == param_2) || (_DAT_01023be8 == param_2)) || (_DAT_01023bf0 == param_2)) {
      if (*(int *)(DAT_01023c10 + 6) == 7) {
        (**(code **)*DAT_01023e64)(0x14,0);
        (**(code **)*DAT_01023e54)(7,0);
        *(undefined4 *)(DAT_01023c10 + 6) = 0xf;
        FUN_01011bb5(0x43,(undefined **)param_2);
      }
    }
    else {
      if ((DAT_01023980 == param_2) && (*(int *)(DAT_01023c10 + 6) == 0xf)) {
        (**(code **)*DAT_01023e54)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x77);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(1000000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar1 = FUN_0100e50b(8);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023c30)(0x14,0);
      *(undefined4 *)(DAT_01023c10 + 6) = 0;
      (**(code **)*DAT_01023e64)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0100f527;
    }
    local_50 = 0xbf800000;
    if (*(int *)(DAT_01023c10 + 6) == 0xf) {
      sVar2 = 0x76;
    }
    else {
      sVar2 = 0x75;
    }
    _Format = FUN_01003752(sVar2);
    FUN_010144b7(_Format,local_50);
  }
LAB_0100f527:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100f539(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  short sVar2;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (((_DAT_01023bc8 == param_2) || (_DAT_01023bd0 == param_2)) || (_DAT_01023bd8 == param_2)) {
      if (*(int *)(DAT_01023bf8 + 6) == 7) {
        *(undefined4 *)(DAT_01023bf8 + 6) = 0xf;
        (**(code **)*DAT_01023a3c)(7,0);
        (**(code **)*DAT_01023e9c)(0x14,0);
        FUN_01011bb5(0x43,(undefined **)param_2);
        FUN_0100c397(1);
      }
    }
    else {
      if ((((DAT_010239ec == param_2) || (DAT_010239f4 == param_2)) || (DAT_010239fc == param_2)) &&
         (*(int *)(DAT_01023bf8 + 6) == 0xf)) {
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x79);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(1000000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar1 = FUN_0100e50b(8);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023c28)(0x14,0);
      *(undefined4 *)(DAT_01023bf8 + 6) = 0;
      (**(code **)*DAT_01023e9c)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0100f6e2;
    }
    local_50 = 0xbf800000;
    if (*(int *)(DAT_01023bf8 + 6) == 0xf) {
      sVar2 = 0x78;
    }
    else {
      sVar2 = 0xb0;
    }
    _Format = FUN_01003752(sVar2);
    FUN_010144b7(_Format,local_50);
  }
LAB_0100f6e2:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100f6f4(int param_1,int param_2)

{
  code **ppcVar1;
  LPSTR _Format;
  int iVar2;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0xb) {
    if (DAT_01023758 == param_2) {
      FUN_01011bb5(0x43,(undefined **)param_2);
    }
  }
  else {
    if (param_1 == 0x3f) {
      if ((_DAT_01023c5c == param_2) && (*(int *)(DAT_01023758 + 0x4e) != 0)) {
        iVar2 = FUN_0100c092((int)&PTR_s_lite316_01023eb0);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023eb4)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite314_01023ea0);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ea4)(0x14,0);
        }
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x7c);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(1000000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar2 = FUN_0100e50b(8);
        if (iVar2 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
    }
    else {
      if (param_1 == 0x42) {
        (**(code **)*DAT_01023770)(0xb,0);
      }
      else {
        if (param_1 != 0x43) goto LAB_0100f8ee;
      }
      local_50 = 0xbf800000;
      if (*(int *)(DAT_01023758 + 0x4e) == 0) {
        _Format = FUN_01003752(0x7a);
        FUN_010144b7(_Format,local_50);
        iVar2 = FUN_0100c092((int)&PTR_s_lite314_01023ea0);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023ea4)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite316_01023eb0);
        ppcVar1 = DAT_01023eb4;
      }
      else {
        _Format = FUN_01003752(0x7b);
        FUN_010144b7(_Format,local_50);
        iVar2 = FUN_0100c092((int)&PTR_s_lite316_01023eb0);
        if (iVar2 != 0) {
          (**(code **)*DAT_01023eb4)(0x14,0);
        }
        iVar2 = FUN_0100c092((int)&PTR_s_lite314_01023ea0);
        ppcVar1 = DAT_01023ea4;
      }
      if (iVar2 == 0) {
        (**(code **)*ppcVar1)(7,0);
      }
    }
  }
LAB_0100f8ee:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100f900(int param_1,undefined **param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_54;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (((((((DAT_01023a9c == (code **)param_2) || (DAT_01023aa4 == (code **)param_2)) ||
           (DAT_01023aac == (code **)param_2)) ||
          (((DAT_01023adc == (code **)param_2 || (DAT_01023ae4 == (code **)param_2)) ||
           ((DAT_01023aec == (code **)param_2 ||
            ((DAT_01023b20 == (code **)param_2 || (DAT_01023b28 == (code **)param_2)))))))) ||
         ((DAT_01023b30 == (code **)param_2 ||
          (((_DAT_01023b48 == param_2 || (_DAT_01023b50 == param_2)) || (_DAT_01023b58 == param_2)))
          ))) || (((_DAT_01023b84 == param_2 || (_DAT_01023b8c == param_2)) ||
                  (((_DAT_01023b94 == param_2 ||
                    ((_DAT_01023bc8 == param_2 || (_DAT_01023bd0 == param_2)))) ||
                   (_DAT_01023bd8 == param_2)))))) ||
       ((((_DAT_01023be0 == param_2 || (_DAT_01023be8 == param_2)) || (_DAT_01023bf0 == param_2)) ||
        (_DAT_01023c3c == param_2)))) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e64)(0x14,0);
        (**(code **)*DAT_01023e74)(0x14,0);
        (**(code **)*DAT_01023e84)(0x14,0);
        (**(code **)*DAT_01023e9c)(0x14,0);
        (**(code **)*DAT_01023ecc)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_54 = 0x40800000;
        _Format = FUN_01003752(0x7e);
        FUN_010144b7(_Format,local_54);
        local_54 = FUN_0100c335(750000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_54);
        iVar1 = FUN_0100e50b(7);
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
      *(undefined4 *)(DAT_01023888 + 6) = 0xf;
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
      (**(code **)*DAT_01023b78)(0x14,0);
      (**(code **)*DAT_01023bb4)(0x14,0);
      (**(code **)*DAT_01023c28)(0x14,0);
      (**(code **)*DAT_01023c30)(0x14,0);
      (**(code **)*DAT_01023e64)(7,0);
      (**(code **)*DAT_01023e74)(7,0);
      uVar4 = 0;
      uVar3 = 7;
      (**(code **)*DAT_01023e84)();
      uVar2 = 0;
      local_54 = 7;
      (**(code **)*DAT_01023e9c)();
      (**(code **)*DAT_01023ecc)(7,0,local_54,uVar2,uVar3,uVar4);
    }
    else {
      if (param_1 != 0x43) goto LAB_0100fcc6;
    }
    local_54 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x7d);
    sprintf(local_48,_Format,local_54);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0100fcc6:
  FUN_0101cd9e();
  return;
}



void FUN_0100fcd9(int param_1,int param_2)

{
  code **ppcVar1;
  int iVar2;
  LPSTR _Format;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 != 0x3f) {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023940)(0x14,0);
      (**(code **)*DAT_010239d0)(0x14,0);
      *(undefined4 *)(DAT_01023888 + 6) = 1;
    }
    else {
      if (param_1 != 0x43) goto LAB_0100ff23;
    }
    iVar2 = FUN_0100c092((int)&PTR_s_lite20_0102393c);
    local_50 = 0xbf800000;
    if (iVar2 == 0) {
      _Format = FUN_01003752(0x7f);
      FUN_010144b7(_Format,local_50);
      iVar2 = FUN_0100c092((int)&PTR_s_lite304_01023e50);
      if (iVar2 != 0) {
        (**(code **)*DAT_01023e54)(0x14,0);
      }
      iVar2 = FUN_0100c092((int)&PTR_s_lite303_01023e48);
      ppcVar1 = DAT_01023e4c;
    }
    else {
      _Format = FUN_01003752(0x80);
      FUN_010144b7(_Format,local_50);
      iVar2 = FUN_0100c092((int)&PTR_s_lite303_01023e48);
      if (iVar2 != 0) {
        (**(code **)*DAT_01023e4c)(0x14,0);
      }
      iVar2 = FUN_0100c092((int)&PTR_s_lite304_01023e50);
      ppcVar1 = DAT_01023e54;
    }
    if (iVar2 == 0) {
      (**(code **)*ppcVar1)(7,0);
    }
    goto LAB_0100ff23;
  }
  if (((DAT_01023a9c != param_2) && (DAT_01023aa4 != param_2)) && (DAT_01023aac != param_2)) {
    if ((DAT_01023980 != param_2) || (iVar2 = FUN_0100c092((int)&PTR_s_lite20_0102393c), iVar2 == 0)
       ) goto LAB_0100ff23;
    iVar2 = *(int *)(DAT_01023888 + 6) + -1;
    *(int *)(DAT_01023888 + 6) = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_0100c092((int)&PTR_s_lite303_01023e48);
      if (iVar2 != 0) {
        (**(code **)*DAT_01023e4c)(0x14,0);
      }
      iVar2 = FUN_0100c092((int)&PTR_s_lite304_01023e50);
      if (iVar2 != 0) {
        (**(code **)*DAT_01023e54)(0x14,0);
      }
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
      local_50 = 0x40800000;
      _Format = FUN_01003752(0x81);
      FUN_010144b7(_Format,local_50);
      local_50 = FUN_0100c335(750000);
      _Format = FUN_01003752(0x4e);
      sprintf(local_48,_Format,local_50);
      iVar2 = FUN_0100e50b(7);
      if (iVar2 == 0) {
        FUN_010144b7(local_48,0x41000000);
        (**(code **)(*DAT_01023d14 + 0x14))();
      }
      goto LAB_0100ff23;
    }
  }
  FUN_01011bb5(0x43,(undefined **)param_2);
LAB_0100ff23:
  FUN_0101cd9e();
  return;
}



void FUN_0100ff35(int param_1,int param_2)

{
  code **ppcVar1;
  LPSTR pCVar2;
  undefined4 local_8;
  
  if (param_1 == 0xb) {
    if ((DAT_010236e4 == param_2) && (*(int *)(DAT_010236e4 + 0x4e) != 0)) {
      (**(code **)*DAT_01023e6c)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 0x14;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023704)(0xb,0);
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
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar2 = FUN_01003752(0xaf);
    FUN_010144b7(pCVar2,local_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01010051(int param_1,int param_2)

{
  code **ppcVar1;
  LPSTR _Format;
  int iVar2;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((DAT_010236e4 == param_2) || (_DAT_010236ec == param_2)) || (_DAT_010236f4 == param_2)) ||
       (_DAT_010236fc == param_2)) {
      iVar2 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar2;
      if (iVar2 == 0) {
        (**(code **)*DAT_01023e74)(0x14,0);
        (**(code **)*DAT_01023e8c)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x82);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(750000);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar2 = FUN_0100e50b(7);
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
      *(undefined4 *)(DAT_01023888 + 6) = 8;
      ppcVar1 = DAT_01023a8c;
      (**(code **)*DAT_01023a8c)(0x22,0);
      (**(code **)*ppcVar1)(0x14,0);
      ppcVar1 = DAT_01023a94;
      (**(code **)*DAT_01023a94)(0x22,0);
      (**(code **)*ppcVar1)(0x14,0);
      (**(code **)*DAT_01023e74)(7,0);
      (**(code **)*DAT_01023e8c)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0101021b;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x6b);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0101021b:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0101022d(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (_DAT_010236fc == param_2) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e74)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_4c = 0x40800000;
        _Format = FUN_01003752(0x85);
        FUN_010144b7(_Format,local_4c);
        local_4c = FUN_0100c335(0x1312d0);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_4c);
        iVar1 = FUN_0100e50b(9);
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
      *(undefined4 *)(DAT_01023888 + 6) = 3;
      (**(code **)*DAT_01023e74)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01010374;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x84);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_01010374:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01010385(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((((_DAT_0102372c == param_2) || (_DAT_01023734 == param_2)) || (_DAT_0102373c == param_2))
         || ((_DAT_01023798 == param_2 || (_DAT_010237a0 == param_2)))) ||
        ((_DAT_010237a8 == param_2 || ((_DAT_0102389c == param_2 || (_DAT_010238a4 == param_2))))))
       || ((_DAT_010238c0 == param_2 || ((_DAT_010238c8 == param_2 || (_DAT_010238e8 == param_2)))))
       ) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e3c)(0x14,0);
        (**(code **)*DAT_01023e44)(0x14,0);
        (**(code **)*DAT_01023e6c)(0x14,0);
        (**(code **)*DAT_01023eb4)(0x14,0);
        (**(code **)*DAT_01023ed4)(0x14,0);
        (**(code **)*DAT_01023edc)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_50 = 0x40800000;
        _Format = FUN_01003752(0x88);
        FUN_010144b7(_Format,local_50);
        local_50 = FUN_0100c335(0x1312d0);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_50);
        iVar1 = FUN_0100e50b(9);
        if (iVar1 == 0) {
          FUN_010144b7(local_48,0x41000000);
          (**(code **)(*DAT_01023d14 + 0x14))();
        }
      }
      else {
        FUN_01011bb5(0x43,(undefined **)0x0);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 0xf;
      (**(code **)*DAT_01023e3c)(7,0);
      (**(code **)*DAT_01023e44)(7,0);
      (**(code **)*DAT_01023e6c)(7,0);
      (**(code **)*DAT_01023eb4)(7,0);
      (**(code **)*DAT_01023ed4)(7,0);
      (**(code **)*DAT_01023edc)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_010105d1;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x86);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_010105d1:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010105e3(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((_DAT_0102389c == param_2) || (_DAT_010238a4 == param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e3c)(0x14,0);
        (**(code **)*DAT_01023ed4)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 1;
        FUN_01011bb5(0x42,(undefined **)0x0);
        local_4c = 0x40800000;
        _Format = FUN_01003752(0x8a);
        FUN_010144b7(_Format,local_4c);
        local_4c = FUN_0100c335(0x1312d0);
        _Format = FUN_01003752(0x4e);
        sprintf(local_48,_Format,local_4c);
        iVar1 = FUN_0100e50b(9);
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
      *(undefined4 *)(DAT_01023888 + 6) = 3;
      (**(code **)*DAT_01023e3c)(7,0);
      (**(code **)*DAT_01023ed4)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01010756;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x89);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_01010756:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01010767(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((_DAT_01023930 == param_2) || (_DAT_010239c8 == param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e5c)(0x14,0);
        (**(code **)*DAT_01023e94)(0x14,0);
        *(undefined4 *)(DAT_01023bbc + 6) = 0x15;
        FUN_01011bb5(0x42,(undefined **)0x0);
        (**(code **)*DAT_01023940)(0x14,0);
        (**(code **)*DAT_010239d0)(0x14,0);
      }
      else {
        FUN_01011bb5(0x43,(undefined **)param_2);
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 0x4b;
      (**(code **)*DAT_01023940)(0x13,0);
      (**(code **)*DAT_010239d0)(0x13,0);
      (**(code **)*DAT_01023e5c)(7,0);
      (**(code **)*DAT_01023e94)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_010108ab;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x8b);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_010108ab:
  FUN_0101cd9e();
  return;
}



void FUN_010108bc(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (DAT_01023c50 == param_2) {
      (**(code **)*DAT_01023e84)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
      local_4c = 0x40800000;
      _Format = FUN_01003752(0x8d);
      FUN_010144b7(_Format,local_4c);
      local_4c = FUN_0100c335(0x1ab3f0);
      _Format = FUN_01003752(0x4e);
      sprintf(local_48,_Format,local_4c);
      iVar1 = FUN_0100e50b(0xb);
      if (iVar1 == 0) {
        FUN_010144b7(local_48,0x41000000);
        (**(code **)(*DAT_01023d14 + 0x14))();
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023e84)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_010109c4;
    }
    local_4c = 0xbf800000;
    _Format = FUN_01003752(0x8c);
    FUN_010144b7(_Format,local_4c);
  }
LAB_010109c4:
  FUN_0101cd9e();
  return;
}



void FUN_010109d5(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if (DAT_010239fc == param_2) {
      *(undefined4 *)(DAT_01023bbc + 6) = 0x16;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023a1c)(0x14,0);
      (**(code **)*DAT_01023a3c)(0x14,0);
      (**(code **)*DAT_01023a3c)(0x17,0);
      (**(code **)*DAT_01023c44)(0x14,0);
      (**(code **)*DAT_01023a14)(0x13,0);
      (**(code **)*DAT_01023a34)(0xb,0);
      (**(code **)*DAT_01023a34)(0x13,0);
      (**(code **)*DAT_01023a34)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x8e);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



void FUN_01010ad3(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if (DAT_010239ec == param_2) {
      *(undefined4 *)(DAT_01023bbc + 6) = 0x17;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023a04)(0x13,0);
      (**(code **)*DAT_01023a24)(0xb,0x40000000);
      (**(code **)*DAT_01023a24)(0x13,0);
      (**(code **)*DAT_01023a24)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x8f);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



void FUN_01010b85(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (DAT_010239f4 == param_2) {
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
      local_4c = 0x40800000;
      _Format = FUN_01003752(0x91);
      FUN_010144b7(_Format,local_4c);
      local_4c = FUN_0100c335(1500000);
      _Format = FUN_01003752(0x4e);
      sprintf(local_48,_Format,local_4c);
      iVar1 = FUN_0100e50b(10);
      if (iVar1 == 0) {
        FUN_010144b7(local_48,0x41000000);
        (**(code **)(*DAT_01023d14 + 0x14))();
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023a0c)(0x13,0);
      (**(code **)*DAT_01023a2c)(0xb,0x3f800000);
      (**(code **)*DAT_01023a2c)(0x13,0);
      (**(code **)*DAT_01023a2c)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01010cb1;
    }
    local_4c = 0xbf800000;
    _Format = FUN_01003752(0x90);
    FUN_010144b7(_Format,local_4c);
  }
LAB_01010cb1:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01010cc2(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((_DAT_010237c4 == param_2) || (_DAT_010237cc == param_2)) || (_DAT_010237e8 == param_2))
       || (_DAT_010237f0 == param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e34)(0x14,0);
        (**(code **)*DAT_01023ee4)(0x14,0);
        param_2 = 0;
        *(undefined4 *)(DAT_01023bbc + 6) = 0x18;
        iVar1 = 0x42;
      }
      else {
        iVar1 = 0x43;
      }
      FUN_01011bb5(iVar1,(undefined **)param_2);
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 0x19;
      (**(code **)*DAT_01023e34)(7,0);
      (**(code **)*DAT_01023ee4)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01010dc2;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x92);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_01010dc2:
  FUN_0101cd9e();
  return;
}



void FUN_01010dd3(int param_1,int param_2)

{
  LPSTR pCVar1;
  int iVar2;
  LPSTR _Format;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (DAT_01023980 == param_2) {
      local_50 = 0x40800000;
      pCVar1 = FUN_01003752(0x2f);
      FUN_010144b7(pCVar1,local_50);
      iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
      if (1 < iVar2) {
        (**(code **)*DAT_01023cf4)(0x21,0x40a00000);
        iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
        pCVar1 = FUN_01003752(*(short *)(&DAT_010246ec + (iVar2 + -1) * 4));
        _Format = FUN_01003752(0xae);
        sprintf(local_48,_Format,pCVar1);
        FUN_010144b7(local_48,0x41000000);
      }
    }
    else {
      if (DAT_01023870 != param_2) goto LAB_0101105d;
      local_50 = 0x40800000;
      pCVar1 = FUN_01003752(0x2e);
      FUN_010144b7(pCVar1,local_50);
      iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
      if (iVar2 < 9) {
        iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
        (**(code **)*DAT_01023cf4)(0x29,0x40a00000);
        pCVar1 = FUN_01003752(*(short *)(&DAT_010246ec + iVar2 * 4));
        _Format = FUN_01003752(0xad);
        sprintf(local_48,_Format,pCVar1);
      }
      iVar2 = FUN_0100e50b(0xc);
      if (iVar2 == 0) {
        FUN_010144b7(local_48,0x41000000);
        (**(code **)(*DAT_01023d1c + 0x14))();
      }
    }
    FUN_0100c335(2000000);
    (**(code **)*DAT_01023880)(0x14,0);
    (**(code **)*DAT_010239b8)(0x14,0);
    (**(code **)*DAT_01023e54)(0x14,0);
    (**(code **)*DAT_01023ebc)(0x14,0);
    *(undefined4 *)(DAT_01023bbc + 6) = 1;
    FUN_01011bb5(0x42,(undefined **)0x0);
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023880)(7,0xbf800000);
      (**(code **)*DAT_010239b8)(7,0xbf800000);
      (**(code **)*DAT_01023e54)(7,0);
      (**(code **)*DAT_01023ebc)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0101105d;
    }
    local_50 = 0xbf800000;
    pCVar1 = FUN_01003752(0x93);
    FUN_010144b7(pCVar1,local_50);
  }
LAB_0101105d:
  FUN_0101cd9e();
  return;
}



void FUN_0101106f(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((((DAT_01023a9c == param_2) || (DAT_01023aa4 == param_2)) || (DAT_01023aac == param_2)) ||
         ((DAT_01023adc == param_2 || (DAT_01023ae4 == param_2)))) ||
        ((DAT_01023aec == param_2 || ((DAT_01023b20 == param_2 || (DAT_01023b28 == param_2)))))) ||
       (DAT_01023b30 == param_2)) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e4c)(0x14,0);
        (**(code **)*DAT_01023e7c)(0x14,0);
        (**(code **)*DAT_01023eac)(0x14,0);
        param_2 = 0;
        *(undefined4 *)(DAT_01023bbc + 6) = 0x19;
        iVar1 = 0x42;
      }
      else {
        iVar1 = 0x43;
      }
      FUN_01011bb5(iVar1,(undefined **)param_2);
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 3;
      (**(code **)*DAT_01023e4c)(7,0);
      (**(code **)*DAT_01023e7c)(7,0);
      (**(code **)*DAT_01023eac)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_010111c2;
    }
    local_4c = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x94);
    sprintf(local_48,_Format,local_4c);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_010111c2:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010111d3(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (((((_DAT_01023b48 == param_2) || (_DAT_01023b50 == param_2)) || (_DAT_01023b58 == param_2))
        || (((_DAT_01023b84 == param_2 || (_DAT_01023b8c == param_2)) ||
            ((_DAT_01023b94 == param_2 || ((_DAT_01023bc8 == param_2 || (_DAT_01023bd0 == param_2)))
             ))))) ||
       ((_DAT_01023bd8 == param_2 ||
        ((((_DAT_01023be0 == param_2 || (_DAT_01023be8 == param_2)) || (_DAT_01023bf0 == param_2))
         || (_DAT_01023c3c == param_2)))))) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e64)(0x14,0);
        (**(code **)*DAT_01023e74)(0x14,0);
        (**(code **)*DAT_01023e84)(0x14,0);
        (**(code **)*DAT_01023e9c)(0x14,0);
        (**(code **)*DAT_01023ecc)(0x14,0);
        param_2 = 0;
        *(undefined4 *)(DAT_01023bbc + 6) = 0x1a;
        iVar1 = 0x42;
      }
      else {
        iVar1 = 0x43;
      }
      FUN_01011bb5(iVar1,(undefined **)param_2);
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 3;
      (**(code **)*DAT_01023e64)(7,0);
      (**(code **)*DAT_01023e74)(7,0);
      (**(code **)*DAT_01023e84)(7,0);
      (**(code **)*DAT_01023e9c)(7,0);
      (**(code **)*DAT_01023ecc)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_0101138f;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x95);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_0101138f:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010113a1(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_50;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if ((((((_DAT_0102372c == param_2) || (_DAT_01023734 == param_2)) || (_DAT_0102373c == param_2))
         || ((_DAT_01023798 == param_2 || (_DAT_010237a0 == param_2)))) ||
        ((_DAT_010237a8 == param_2 || ((_DAT_0102389c == param_2 || (_DAT_010238a4 == param_2))))))
       || ((_DAT_010238c0 == param_2 || ((_DAT_010238c8 == param_2 || (_DAT_010238e8 == param_2)))))
       ) {
      iVar1 = *(int *)(DAT_01023888 + 6) + -1;
      *(int *)(DAT_01023888 + 6) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*DAT_01023e3c)(0x14,0);
        (**(code **)*DAT_01023e44)(0x14,0);
        (**(code **)*DAT_01023e6c)(0x14,0);
        (**(code **)*DAT_01023eb4)(0x14,0);
        (**(code **)*DAT_01023ed4)(0x14,0);
        (**(code **)*DAT_01023edc)(0x14,0);
        param_2 = 0;
        *(undefined4 *)(DAT_01023bbc + 6) = 0x1b;
        iVar1 = 0x42;
      }
      else {
        iVar1 = 0x43;
      }
      FUN_01011bb5(iVar1,(undefined **)param_2);
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 5;
      (**(code **)*DAT_01023e3c)(7,0);
      (**(code **)*DAT_01023e44)(7,0);
      (**(code **)*DAT_01023e6c)(7,0);
      (**(code **)*DAT_01023eb4)(7,0);
      (**(code **)*DAT_01023ed4)(7,0);
      (**(code **)*DAT_01023edc)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01011570;
    }
    local_50 = *(undefined4 *)(DAT_01023888 + 6);
    _Format = FUN_01003752(0x96);
    sprintf(local_48,_Format,local_50);
    FUN_010144b7(local_48,0xbf800000);
  }
LAB_01011570:
  FUN_0101cd9e();
  return;
}



void FUN_01011582(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if (DAT_01023924 == param_2) {
      (**(code **)*DAT_01023ec4)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 0x1c;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      *(undefined4 *)(DAT_01023888 + 6) = 0;
      (**(code **)*DAT_01023ec4)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x97);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



void FUN_01011612(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if (DAT_01023870 == param_2) {
      (**(code **)*DAT_01023ebc)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 0x1d;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023ebc)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x98);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01011699(int param_1,int param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if ((_DAT_01023930 == param_2) || (_DAT_010239c8 == param_2)) {
      (**(code **)*DAT_01023e5c)(0x14,0);
      (**(code **)*DAT_01023e94)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 0x1e;
      FUN_01011bb5(0x42,(undefined **)0x0);
      (**(code **)*DAT_01023940)(0x14,0);
      (**(code **)*DAT_010239d0)(0x14,0);
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_01023940)(0x13,0);
      (**(code **)*DAT_010239d0)(0x13,0);
      (**(code **)*DAT_01023e5c)(7,0);
      (**(code **)*DAT_01023e94)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x99);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



void FUN_01011798(int param_1,undefined **param_2)

{
  LPSTR pCVar1;
  undefined4 local_8;
  
  if (param_1 == 0x3f) {
    if (((DAT_010239ec == (code **)param_2) || (DAT_010239f4 == (code **)param_2)) ||
       (DAT_010239fc == (code **)param_2)) {
      *(undefined4 *)(DAT_01023bbc + 6) = 0x1f;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
  }
  else {
    if (param_1 == 0x42) {
      FUN_0100c397(1);
      (**(code **)*DAT_010239ec)(7,0);
      (**(code **)*DAT_010239f4)(7,0);
      (**(code **)*DAT_010239fc)(7,0);
    }
    else {
      if (param_1 != 0x43) {
        return;
      }
    }
    local_8 = 0xbf800000;
    pCVar1 = FUN_01003752(0x9a);
    FUN_010144b7(pCVar1,local_8);
  }
  return;
}



void FUN_0101184c(int param_1,int param_2)

{
  LPSTR _Format;
  int iVar1;
  undefined4 local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3f) {
    if (DAT_01023980 == param_2) {
      (**(code **)*DAT_01023e54)(0x14,0);
      (**(code **)*DAT_010239c0)(0x14,0);
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
      local_4c = FUN_0100c335(5000000);
      _Format = FUN_01003752(0x4e);
      sprintf(local_48,_Format,local_4c);
      local_4c = 0x40800000;
      _Format = FUN_01003752(0x30);
      FUN_010144b7(_Format,local_4c);
      iVar1 = FUN_0100e50b(0x12);
      if (iVar1 == 0) {
        FUN_010144b7(local_48,0x41000000);
        (**(code **)(*DAT_01023d14 + 0x14))();
      }
    }
  }
  else {
    if (param_1 == 0x42) {
      (**(code **)*DAT_010239c0)(0x13,0);
      (**(code **)*DAT_01023e54)(7,0);
    }
    else {
      if (param_1 != 0x43) goto LAB_01011974;
    }
    local_4c = 0xbf800000;
    _Format = FUN_01003752(0x9b);
    FUN_010144b7(_Format,local_4c);
  }
LAB_01011974:
  FUN_0101cd9e();
  return;
}



void FUN_01011985(int param_1)

{
  LPSTR _Format;
  uint uVar1;
  uint uVar2;
  short sVar3;
  int local_98;
  undefined4 uVar4;
  char local_88 [128];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x42) {
    (**(code **)*DAT_01023eec)(0x14,0);
    FUN_0101461a(2);
    (**(code **)*DAT_01023a74)(0x3fe,0);
    (**(code **)*DAT_01023a7c)(0x3fe,0);
    *(undefined4 *)(DAT_01023e24 + 6) = 0;
    goto LAB_01011b84;
  }
  if (param_1 != 0x43) goto LAB_01011b84;
  uVar2 = *(uint *)(DAT_01023e24 + 6);
  if ((uVar2 & 0x100) == 0) {
    if ((uVar2 & 0x200) != 0) goto LAB_01011a78;
LAB_01011b15:
    uVar4 = 0x41200000;
    *(undefined4 *)(DAT_01023e24 + 6) = 0x100;
    _Format = FUN_01003752(0xac);
    FUN_010144b7(_Format,uVar4);
  }
  else {
    uVar1 = uVar2 & 0xf;
    local_98 = **(int **)(uVar1 * 0x1c + 0x66 + DAT_01025040);
    uVar2 = uVar1 + 1;
    if (local_98 < 0) {
LAB_010119ec:
      *(undefined4 *)(DAT_01023e24 + 6) = 0x200;
LAB_01011a78:
      uVar2 = uVar2 & 0xf;
      local_98 = *(int *)(&DAT_01025598 + uVar2 * 0x24);
      if (local_98 < 1) goto LAB_01011b15;
      if (uVar2 == 0) {
        sVar3 = 0xb8;
      }
      else {
        if (uVar2 == 1) {
          sVar3 = 0xb9;
        }
        else {
          if (uVar2 == 2) {
            sVar3 = 0xba;
          }
          else {
            if (uVar2 == 3) {
              sVar3 = 0xbb;
            }
            else {
              if (uVar2 != 4) goto LAB_01011b15;
              sVar3 = 0xbc;
            }
          }
        }
      }
      _Format = FUN_01003752(sVar3);
      sprintf(local_88,_Format,local_98);
      FUN_010144b7(local_88,0x40400000);
      if (uVar2 + 1 == 5) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + 1 | 0x200;
      }
    }
    else {
      if (uVar1 == 0) {
        sVar3 = 0xb4;
      }
      else {
        if (uVar1 == 1) {
          sVar3 = 0xb5;
        }
        else {
          if (uVar1 == 2) {
            sVar3 = 0xb6;
          }
          else {
            if (uVar1 != 3) goto LAB_010119ec;
            sVar3 = 0xb7;
          }
        }
      }
      _Format = FUN_01003752(sVar3);
      sprintf(local_88,_Format,local_98);
      FUN_010144b7(local_88,0x40400000);
      if (uVar2 == *(uint *)(DAT_01025040 + 0xd6)) {
        uVar2 = 0x200;
      }
      else {
        uVar2 = uVar2 | 0x100;
      }
    }
    *(uint *)(DAT_01023e24 + 6) = uVar2;
  }
LAB_01011b84:
  FUN_0101cd9e();
  return;
}



void FUN_01011b98(void)

{
  *(undefined4 *)(DAT_01023bbc + 6) = 1;
  FUN_01011bb5(0x42,(undefined **)0x0);
  return;
}



void FUN_01011bb5(int param_1,undefined **param_2)

{
  int iVar1;
  code **ppcVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 local_18;
  
  ppcVar2 = DAT_01023a8c;
  if (DAT_01023bbc == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_01023bbc + 6);
  if (param_1 == 0x2f) {
    if ((DAT_01023978 == (code **)param_2) && (1 < iVar1)) {
      (**(code **)*DAT_01023a8c)(0x22,0);
      (**(code **)*ppcVar2)(0x14,0);
      ppcVar2 = DAT_01023a94;
      (**(code **)*DAT_01023a94)(0x22,0);
      (**(code **)*ppcVar2)(0x14,0);
      local_18 = 0x40800000;
      pCVar3 = FUN_01003752(0x6d);
      FUN_010144b7(pCVar3,local_18);
      *(undefined4 *)(DAT_01023bbc + 6) = 1;
      FUN_01011bb5(0x42,(undefined **)0x0);
    }
    goto LAB_01011ccc;
  }
  if (param_1 == 0x3c) {
    if ((DAT_01023978 == (code **)param_2) && (iVar1 != 0)) {
      iVar4 = (**(code **)*DAT_01023978)(0x25,0);
      if (iVar4 == 1) {
        local_18 = 0x40800000;
        pCVar3 = FUN_01003752(0x74);
        FUN_010144b7(pCVar3,local_18);
      }
      goto LAB_01011ccc;
    }
    if (DAT_01023e24 != param_2) goto LAB_01011ccc;
  }
  else {
    if (param_1 != 0x3f1) goto LAB_01011ccc;
  }
  param_1 = 0x43;
LAB_01011ccc:
  switch(iVar1) {
  case 0:
    FUN_0100e657(param_1,(int)param_2);
    break;
  case 1:
    FUN_0100e6d2(param_1,param_2);
    break;
  case 2:
    FUN_0100ebf3(param_1,(int)param_2);
    break;
  case 3:
    FUN_0100ed83(param_1,(int)param_2);
    break;
  case 4:
    FUN_0100eed7(param_1,(int)param_2);
    break;
  case 5:
    FUN_0100f0b3(param_1,param_2);
    break;
  case 6:
    FUN_0100f381(param_1,(int)param_2);
    break;
  case 7:
    FUN_0100f6f4(param_1,(int)param_2);
    break;
  case 8:
    FUN_0100f539(param_1,(int)param_2);
    break;
  case 9:
    FUN_0100f900(param_1,param_2);
    break;
  case 10:
    FUN_0100ff35(param_1,(int)param_2);
    break;
  case 0xb:
    FUN_0100fcd9(param_1,(int)param_2);
    break;
  case 0xc:
    FUN_0101022d(param_1,(int)param_2);
    break;
  case 0xd:
    FUN_01010385(param_1,(int)param_2);
    break;
  case 0xe:
    FUN_010105e3(param_1,(int)param_2);
    break;
  case 0xf:
    FUN_01010767(param_1,(int)param_2);
    break;
  case 0x10:
    FUN_010109d5(param_1,(int)param_2);
    break;
  case 0x11:
    FUN_01010cc2(param_1,(int)param_2);
    break;
  case 0x12:
    FUN_0101106f(param_1,(int)param_2);
    break;
  default:
    FUN_01011b98();
    break;
  case 0x14:
    FUN_01010051(param_1,(int)param_2);
    break;
  case 0x15:
    FUN_010108bc(param_1,(int)param_2);
    break;
  case 0x16:
    FUN_01010ad3(param_1,(int)param_2);
    break;
  case 0x17:
    FUN_01010b85(param_1,(int)param_2);
    break;
  case 0x18:
    FUN_01010dd3(param_1,(int)param_2);
    break;
  case 0x19:
    FUN_010111d3(param_1,(int)param_2);
    break;
  case 0x1a:
    FUN_010113a1(param_1,(int)param_2);
    break;
  case 0x1b:
    FUN_01011582(param_1,(int)param_2);
    break;
  case 0x1c:
    FUN_01011612(param_1,(int)param_2);
    break;
  case 0x1d:
    FUN_01011699(param_1,(int)param_2);
    break;
  case 0x1e:
    FUN_01011798(param_1,param_2);
    break;
  case 0x1f:
    FUN_0101184c(param_1,(int)param_2);
    break;
  case 0x20:
    FUN_01011985(param_1);
  }
  return;
}



void FUN_01011ec9(int param_1,undefined **param_2)

{
  code **ppcVar1;
  int iVar2;
  
  ppcVar1 = *(code ***)((int)param_2 + 0x12);
  iVar2 = 0;
  if (ppcVar1 != (code **)0x0) {
    if ((param_1 == 0x3fb) && (0 < (int)ppcVar1[1])) {
      do {
        (**(code **)(*param_2 + 0xc))(iVar2,*(undefined4 *)(ppcVar1[2] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)ppcVar1[1]);
    }
    (**ppcVar1)(param_1,param_2);
  }
  FUN_01011bb5(param_1,param_2);
  return;
}



void FUN_01011f1a(int param_1,undefined **param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  LPSTR _Format;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  short sVar9;
  float local_4c;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 != 0x3f) goto LAB_01012272;
  iVar2 = (**(code **)*DAT_010239a8)(0x25,0);
  FUN_0100d286(0x29,DAT_010239a8);
  if (iVar2 == 0) {
    iVar3 = (**(code **)(*param_2 + 8))(0);
    iVar3 = FUN_01017526(DAT_01025040,iVar3);
    sVar9 = 0xc;
LAB_0101206b:
    _Format = FUN_01003752(sVar9);
    sprintf(local_48,_Format,iVar3);
    FUN_010144b7(local_48,0x40000000);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_0100c764(0x34,DAT_01023860);
        iVar3 = (**(code **)(*param_2 + 8))(2);
        iVar3 = FUN_01017526(DAT_01025040,iVar3);
        sVar9 = 2;
      }
      else {
        if (iVar2 != 3) {
          if (iVar2 == 4) {
            (**(code **)*DAT_010239a8)(0,0);
            iVar3 = (**(code **)(*param_2 + 8))(4);
            ppuVar4 = (undefined **)FUN_01017526(DAT_01025040,iVar3);
            FUN_0100dd7a(0x40,ppuVar4);
          }
          goto LAB_01012092;
        }
        FUN_0100cd12(0x13);
        iVar3 = (**(code **)(*param_2 + 8))(3);
        iVar3 = FUN_01017526(DAT_01025040,iVar3);
        sVar9 = 8;
      }
      goto LAB_0101206b;
    }
    uVar5 = FUN_0100c335(*(int *)((int)DAT_01025040 + 0x13a));
    _Format = FUN_01003752(0xe);
    sprintf(local_48,_Format,uVar5);
    FUN_010144b7(local_48,0x40000000);
    *(undefined4 *)((int)DAT_01025040 + 0x13a) = 20000;
  }
LAB_01012092:
  iVar3 = FUN_0100c092((int)&PTR_s_lite25_010239ac);
  bVar7 = iVar3 != 0;
  if (bVar7) {
    uVar5 = FUN_0100c335(*(int *)((int)DAT_01025040 + 0x12e));
    _Format = FUN_01003752(10);
    sprintf(local_48,_Format,uVar5);
    FUN_010144b7(local_48,0x40000000);
  }
  iVar3 = FUN_0100c092((int)&PTR_s_lite26_010239b4);
  if (iVar3 != 0) {
    bVar7 = (bool)(bVar7 | 2);
  }
  iVar3 = FUN_0100c092((int)&PTR_s_lite130_010239bc);
  if (iVar3 != 0) {
    bVar7 = (bool)(bVar7 | 4);
    (**(code **)*DAT_010239c0)(0x14,0);
    FUN_0100d7bb(0x40,DAT_01023b38);
    (**(code **)*DAT_01023b0c)(0x13,0);
    FUN_0100c14f();
    FUN_0100c199();
    FUN_0100c1e3();
    FUN_0100c24a();
    (**(code **)*DAT_010238d0)(0x13,0);
    (**(code **)*DAT_010238d8)(0x13,0);
    FUN_0100cd12(0x13);
    FUN_0100c764(0x34,DAT_01023860);
    if (*(int *)((int)DAT_01025040 + 0x15a) != 0) {
      FUN_0100c12a();
    }
    pvVar1 = DAT_01025040;
    if (*(int *)((int)DAT_01025040 + 0x13a) < 100000) {
      *(int *)((int)DAT_01025040 + 0x13a) = 100000;
    }
    if (*(int *)((int)pvVar1 + 0x132) < 100000) {
      *(int *)((int)pvVar1 + 0x132) = 100000;
    }
    FUN_0100dd7a(0x40,(undefined **)0x0);
  }
  if (bVar7 == false) {
    piVar6 = DAT_01023d8c;
    if ((((iVar2 != 1) && (piVar6 = DAT_01023d94, iVar2 != 2)) &&
        (piVar6 = DAT_01023d9c, iVar2 != 3)) && (piVar6 = DAT_01023da4, iVar2 != 4)) {
      piVar6 = DAT_01023d84;
    }
LAB_01012245:
    fVar8 = (float10)(**(code **)(*piVar6 + 0x14))();
  }
  else {
    piVar6 = DAT_01023d24;
    if ((bVar7 == true) || ((1 < bVar7 && (piVar6 = DAT_01023d64, bVar7 < 4)))) goto LAB_01012245;
    fVar8 = (float10)(**(code **)(*DAT_01023d6c + 0x14))();
    (**(code **)(*DAT_01023d74 + 0x14))();
    (**(code **)(*DAT_01023d7c + 0x14))();
  }
  local_4c = (float)fVar8;
  (**(code **)*DAT_010239b0)(7,0x40a00000);
  (**(code **)*param_2)(0x37,local_4c);
LAB_01012272:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01012285(int param_1)

{
  code **ppcVar1;
  int iVar2;
  
  if (param_1 == 0x3f7) {
    FUN_01011bb5(0x43,(undefined **)0x0);
  }
  else {
    if (param_1 == 0x3f8) {
      _DAT_01025044 = 0;
      iVar2 = (**(code **)*DAT_01023cf4)(0x25,0);
      if (iVar2 == 0) {
        (**(code **)*DAT_01023cf4)(0x20,0);
      }
      iVar2 = FUN_0100c092((int)&PTR_s_lite200_01023d00);
      if (iVar2 == 0) {
        (**(code **)*DAT_01023ce4)(0x14,0);
        (**(code **)*DAT_01023cb4)(0x13,0);
        (**(code **)*DAT_01023ce4)(0x1a,0x3e800000);
        ppcVar1 = DAT_01023a8c;
        (**(code **)*DAT_01023a8c)(0x14,0);
        (**(code **)*ppcVar1)(0x20,0x3e4ccccd);
        (**(code **)*ppcVar1)(0x1a,0x3e4ccccd);
        ppcVar1 = DAT_01023a94;
        (**(code **)*DAT_01023a94)(0x14,0);
        (**(code **)*ppcVar1)(0x20,0x3e4ccccd);
        (**(code **)*ppcVar1)(0x1a,0x3e4ccccd);
        *(undefined4 *)(DAT_01025040 + 0x12e) = 25000;
        FUN_0100d7bb(0x41,DAT_01023b38);
        (**(code **)*DAT_01023978)(0x13,0);
        (**(code **)*DAT_01023d04)(0x13,0);
        (**(code **)*DAT_01023808)(0x35,0);
        (**(code **)*DAT_01023810)(0x35,0);
      }
      *(undefined4 *)((int)DAT_01023d04 + 6) = 0;
    }
  }
  return;
}



void FUN_0101240d(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (param_1 != 0x3f) {
    return;
  }
  if (*(int *)((int)param_2 + 6) != 0) {
    return;
  }
  *(undefined4 *)((int)param_2 + 6) = 1;
  if (*(int *)((int)DAT_01023aec + 6) + *(int *)((int)DAT_01023ae4 + 6) +
      *(int *)((int)DAT_01023adc + 6) != 3) {
    iVar1 = (**(code **)(*param_2 + 8))(0);
    FUN_01017526(DAT_01025040,iVar1);
    return;
  }
  FUN_0100d73e(0x29,DAT_01023b0c);
  iVar1 = (**(code **)*DAT_01023b0c)(0x25,0);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_2 + 8))(1);
    FUN_01017526(DAT_01025040,iVar1);
    sVar3 = 0x35;
  }
  else {
    if (iVar1 != 2) {
      uVar4 = 0x40000000;
      pCVar2 = FUN_01003752(0x37);
      FUN_010144b7(pCVar2,uVar4);
      FUN_0100c2f3(0x40800000);
      goto LAB_01012501;
    }
    iVar1 = (**(code **)(*param_2 + 8))(2);
    FUN_01017526(DAT_01025040,iVar1);
    sVar3 = 0x36;
  }
  uVar4 = 0x40000000;
  pCVar2 = FUN_01003752(sVar3);
  FUN_010144b7(pCVar2,uVar4);
LAB_01012501:
  *(undefined4 *)((int)DAT_01023adc + 6) = 0;
  (**(code **)*DAT_01023adc)(0x32,0);
  *(undefined4 *)((int)DAT_01023ae4 + 6) = 0;
  (**(code **)*DAT_01023ae4)(0x32,0);
  *(undefined4 *)((int)DAT_01023aec + 6) = 0;
  (**(code **)*DAT_01023aec)(0x32,0);
  return;
}



void FUN_01012570(int param_1,int *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  short sVar3;
  undefined4 uVar4;
  
  if ((param_1 == 0x3f) && (*(int *)((int)param_2 + 6) == 0)) {
    *(undefined4 *)((int)param_2 + 6) = 1;
    if (*(int *)((int)DAT_01023b30 + 6) + *(int *)((int)DAT_01023b28 + 6) +
        *(int *)((int)DAT_01023b20 + 6) == 3) {
      iVar1 = (**(code **)(*param_2 + 8))(1);
      FUN_01017526(DAT_01025040,iVar1);
      FUN_0100d7bb(0x29,DAT_01023b38);
      iVar1 = (**(code **)*DAT_01023b38)(0x25,0);
      uVar4 = 0x40000000;
      if (iVar1 == 1) {
        *(undefined4 *)((int)DAT_01025040 + 0x126) = 1;
        sVar3 = 0x38;
      }
      else {
        if (iVar1 == 2) {
          *(undefined4 *)((int)DAT_01025040 + 0x126) = 2;
          sVar3 = 0x39;
        }
        else {
          if (iVar1 == 3) {
            *(undefined4 *)((int)DAT_01025040 + 0x126) = 3;
            sVar3 = 0x3a;
          }
          else {
            *(undefined4 *)((int)DAT_01025040 + 0x126) = 4;
            sVar3 = 0x3b;
          }
        }
      }
      pCVar2 = FUN_01003752(sVar3);
      FUN_010144b7(pCVar2,uVar4);
      *(undefined4 *)((int)DAT_01023b20 + 6) = 0;
      (**(code **)*DAT_01023b20)(0x32,0);
      *(undefined4 *)((int)DAT_01023b28 + 6) = 0;
      (**(code **)*DAT_01023b28)(0x32,0);
      *(undefined4 *)((int)DAT_01023b30 + 6) = 0;
      (**(code **)*DAT_01023b30)(0x32,0);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 8))(0);
      FUN_01017526(DAT_01025040,iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010126ba(int param_1)

{
  int iVar1;
  LPSTR _Format;
  code **this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short sVar11;
  undefined4 local_58;
  char local_48 [64];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 == 0x3c) {
    if (*(int *)((int)DAT_01023d0c + 6) != 0) {
      (**(code **)*DAT_01025040)(0x3fe,0);
      iVar1 = FUN_01014908();
      if (iVar1 != 0) {
        (**(code **)(*DAT_01023dfc + 0x14))();
        (**(code **)**(code ***)((int)DAT_01025040 + 0x10a))(0x10,0x40400000);
        local_58 = 0xbf800000;
        _Format = FUN_01003752(0xb1);
        FUN_010144b7(_Format,local_58);
      }
      goto LAB_01012e3d;
    }
    local_58 = 0x3f8;
    this = DAT_01023a84;
  }
  else {
    if (param_1 != 0x3f) goto LAB_01012e3d;
    if (_DAT_01025044 == 0) {
      if (*(int *)((int)DAT_01025040 + 0x172) != 0) {
        (**(code **)*DAT_01023d04)(0x14,0);
        (**(code **)*DAT_01023d0c)(0x14,0);
      }
      this = DAT_01025040;
      iVar1 = FUN_0100c092((int)&PTR_s_lite200_01023d00);
      if (iVar1 != 0) {
        (**(code **)(*DAT_01023dec + 0x14))();
        (**(code **)*DAT_01023d04)(0x13,0);
        local_58 = 0xbf800000;
        _Format = FUN_01003752(0x60);
        FUN_010144b7(_Format,local_58);
        (**(code **)(*DAT_01023de4 + 0x14))();
        goto LAB_01012e3d;
      }
      iVar1 = FUN_0100c092((int)&PTR_s_lite199_01023d08);
      if (iVar1 != 0) {
        (**(code **)(*DAT_01023dec + 0x14))();
        (**(code **)*DAT_01023d0c)(0x14,0);
        (**(code **)*DAT_01023d04)(0x13,0);
        local_58 = 0x40000000;
        _Format = FUN_01003752(0x5f);
        FUN_010144b7(_Format,local_58);
        (**(code **)(*DAT_01023de4 + 0x14))();
        *(int *)((int)DAT_01025040 + 0x15e) = *(int *)((int)DAT_01025040 + 0x15e) + -1;
        goto LAB_01012e3d;
      }
      if (*(int *)((int)this + 0x152) != 0) {
        (**(code **)(*DAT_01023dec + 0x14))();
        *(int *)((int)DAT_01025040 + 0x152) = *(int *)((int)DAT_01025040 + 0x152) + -1;
        goto LAB_01012e3d;
      }
      if (*(int *)((int)this + 0x172) == 0) {
        local_58 = FUN_0100c335(*(int *)((int)this + 0x132));
        _Format = FUN_01003752(0x5e);
        sprintf(local_48,_Format,local_58);
        FUN_010144b7(local_48,0x40000000);
        this = DAT_01025040;
      }
      iVar1 = *(int *)((int)this + 0x14e);
      if (iVar1 == 0) {
        FUN_010175aa(this,*(int *)((int)this + 0x146) + -1);
        if ((*(int *)((int)DAT_01025040 + 0xda) + 1 == *(int *)((int)DAT_01025040 + 0xd6)) &&
           (*(int *)((int)DAT_01025040 + 0x146) == 0)) {
          *(undefined4 *)((int)DAT_01023d0c + 6) = 1;
        }
        else {
          (**(code **)*DAT_01025040)(0x3fd,0);
          *(undefined4 *)((int)DAT_01023d0c + 6) = 0;
        }
        (**(code **)(*DAT_01023dec + 0x14))();
      }
      else {
        *(int *)((int)this + 0x14e) = iVar1 + -1;
        (**(code **)(*DAT_01023de4 + 0x14))();
        iVar1 = *(int *)((int)DAT_01025040 + 0xda);
        local_58 = 0xbf800000;
        if (iVar1 == 0) {
          sVar11 = 0x61;
        }
        else {
          if (iVar1 == 1) {
            sVar11 = 0x62;
          }
          else {
            if (iVar1 == 2) {
              sVar11 = 99;
            }
            else {
              sVar11 = 100;
            }
          }
        }
        _Format = FUN_01003752(sVar11);
        FUN_010144b7(_Format,local_58);
      }
      (**(code **)*DAT_01023724)(0x14,0);
      (**(code **)*DAT_01023790)(0x14,0);
      (**(code **)*DAT_01023818)(0x14,0);
      (**(code **)*DAT_01023820)(0x14,0);
      (**(code **)*DAT_01023868)(0x14,0);
      (**(code **)*DAT_01023878)(0x14,0);
      (**(code **)*DAT_01023880)(0x14,0);
      (**(code **)*DAT_01023888)(0x14,0);
      (**(code **)*DAT_010238ac)(0x14,0);
      (**(code **)*DAT_010238b4)(0x14,0);
      (**(code **)*DAT_010238d0)(0x14,0);
      (**(code **)*DAT_010238d8)(0x14,0);
      (**(code **)*DAT_010238f0)(0x14,0);
      (**(code **)*DAT_01023940)(0x14,0);
      (**(code **)*DAT_010239a8)(0x14,0);
      (**(code **)*DAT_010239b0)(0x14,0);
      (**(code **)*DAT_010239b8)(0x14,0);
      (**(code **)*DAT_010239c0)(0x14,0);
      (**(code **)*DAT_010239d0)(0x14,0);
      (**(code **)*DAT_01023a1c)(0x14,0);
      (**(code **)*DAT_01023a3c)(0x14,0);
      (**(code **)*DAT_01023a8c)(0x14,0);
      (**(code **)*DAT_01023a94)(0x14,0);
      (**(code **)*DAT_01023abc)(0x14,0);
      (**(code **)*DAT_01023ac4)(0x14,0);
      (**(code **)*DAT_01023ab4)(0x14,0);
      (**(code **)*DAT_01023b0c)(0x14,0);
      (**(code **)*DAT_01023b38)(0x14,0);
      (**(code **)*DAT_01023b78)(0x14,0);
      (**(code **)*DAT_01023bb4)(0x14,0);
      (**(code **)*DAT_01023c28)(0x14,0);
      (**(code **)*DAT_01023c30)(0x14,0);
      (**(code **)*DAT_01023c44)(0x14,0);
      uVar10 = 0;
      uVar9 = 0x14;
      (**(code **)*DAT_01023ce4)();
      uVar8 = 0;
      uVar7 = 0x14;
      (**(code **)*DAT_01023cec)();
      uVar6 = 0;
      uVar5 = 0x14;
      (**(code **)*DAT_01023bbc)();
      uVar4 = 0;
      local_58 = 0x14;
      (**(code **)*DAT_01023828)();
      uVar3 = 0;
      uVar2 = 0x14;
      (**(code **)*DAT_01023830)(0x14,0,local_58,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
      uVar6 = 0;
      uVar5 = 0x14;
      (**(code **)*DAT_01023978)();
      uVar4 = 0;
      local_58 = 0x400;
      (**(code **)*DAT_01023978)();
      FUN_0100dd7a(0x400,(undefined **)0x0);
      (**(code **)*DAT_01023c70)(0x14,0,local_58,uVar4,uVar5,uVar6,uVar2,uVar3);
      *(undefined4 *)(DAT_01023a24 + 6) = 0;
      *(undefined4 *)(DAT_01023b9c + 6) = 0;
      *(undefined4 *)(DAT_01023ba4 + 6) = 0;
      *(undefined4 *)(DAT_01023bac + 6) = 0;
      *(undefined4 *)((int)DAT_01023bb4 + 6) = 0;
      (**(code **)*DAT_01023cfc)(0x22,0);
      (**(code **)*DAT_01023cf4)(0x22,0);
      (**(code **)*DAT_01023704)(0x400,0);
      (**(code **)*DAT_01023770)(0x400,0);
      (**(code **)*DAT_01023808)(0x400,0);
      (**(code **)*DAT_01023810)(0x400,0);
      (**(code **)*DAT_01023860)(0x400,0);
      (**(code **)*DAT_01023a9c)(0x400,0);
      (**(code **)*DAT_01023aa4)(0x400,0);
      (**(code **)*DAT_01023aac)(0x400,0);
      uVar4 = 0;
      local_58 = 0x400;
      (**(code **)*DAT_01023adc)();
      uVar8 = 0;
      uVar7 = 0x400;
      (**(code **)*DAT_01023ae4)(0x400,0,local_58,uVar4);
      uVar3 = 0;
      uVar2 = 0x400;
      (**(code **)*DAT_01023aec)();
      uVar6 = 0;
      uVar5 = 0x400;
      (**(code **)*DAT_01023b20)();
      uVar4 = 0;
      local_58 = 0x400;
      (**(code **)*DAT_01023b28)();
      (**(code **)*DAT_01023b30)(0x400,0,local_58,uVar4,uVar5,uVar6,uVar2,uVar3,uVar7,uVar8);
      if (*(int *)((int)DAT_01023d0c + 6) == 0) {
        *(undefined4 *)((int)DAT_01023bbc + 6) = 0;
      }
      else {
        *(undefined4 *)((int)DAT_01023bbc + 6) = 0x20;
      }
      FUN_01011bb5(0x42,(undefined **)0x0);
      (**(code **)*DAT_01025040)(0x3f4,0);
      iVar1 = FUN_0100c092((int)&PTR_s_lite58_01023ac8);
      if (iVar1 == 0) {
        *(undefined4 *)((int)DAT_01025040 + 0x132) = 25000;
        goto LAB_01012e3d;
      }
      local_58 = 0x14;
      this = DAT_01023acc;
    }
    else {
      (**(code **)*DAT_01023c7c)(0x400,0);
      local_58 = 0x38;
      this = DAT_010239fc;
    }
  }
  (**(code **)*this)(local_58,0);
LAB_01012e3d:
  FUN_0101cd9e();
  return;
}


