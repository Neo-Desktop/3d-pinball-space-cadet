#include "pinball.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_01005579(int param_1,uint param_2)

{
  char cVar1;
  uint *_Memory;
  
  if (param_1 == 0) {
    _Memory = (uint *)FUN_010054c2(param_2);
  }
  else {
    _Memory = (uint *)(param_1 + -4);
    DAT_01024f00 = DAT_01024f00 - (*_Memory >> 8);
    if (((*(char *)_Memory == 'Z') || (*(char *)_Memory == -0x5b)) &&
       (_Memory = (uint *)realloc(_Memory,param_2 + 4), _Memory == (uint *)0x0)) {
      if ((_DAT_01024f04 != 0) && (DAT_01024f08 != (code *)0x0)) {
        (*DAT_01024f08)();
      }
      _Memory = (uint *)0x0;
    }
    else {
      cVar1 = *(char *)_Memory;
      *_Memory = param_2 << 8;
      DAT_01024f00 = DAT_01024f00 + param_2;
      *(char *)_Memory = cVar1;
      _Memory = _Memory + 1;
    }
  }
  return _Memory;
}



void FUN_010055f3(void)

{
  FUN_0100367c((HKEY)0x0,"Sounds");
  FUN_0100367c((HKEY)0x0,"Music");
  FUN_0100367c((HKEY)0x0,"FullScreen");
  FUN_0100367c((HKEY)0x0,"Players");
  FUN_0100367c((HKEY)0x0,"Left Flippper key");
  FUN_0100367c((HKEY)0x0,"Right Flipper key");
  FUN_0100367c((HKEY)0x0,"Plunger key");
  FUN_0100367c((HKEY)0x0,"Left Table Bump key");
  FUN_0100367c((HKEY)0x0,"Right Table Bump key");
  FUN_0100367c((HKEY)0x0,"Bottom Table Bump key");
  return;
}



void FUN_010056a9(UINT param_1,int param_2)

{
  if (DAT_01024f0c != (HMENU)0x0) {
    EnableMenuItem(DAT_01024f0c,param_1,(uint)(param_2 == 0));
  }
  return;
}



void FUN_010056d3(UINT param_1,int param_2)

{
  if (DAT_01024f0c != (HMENU)0x0) {
    CheckMenuItem(DAT_01024f0c,param_1,-(uint)(param_2 != 0) & 8);
  }
  return;
}



void FUN_010056ff(UINT param_1)

{
  uint uVar1;
  
  if (param_1 == 0xc9) {
    uVar1 = (uint)(DAT_01028220 == 0);
    DAT_01028220 = uVar1;
    FUN_01006d34(0,7,uVar1);
  }
  else {
    if (param_1 == 0xca) {
      uVar1 = (uint)(DAT_01028224 == 0);
      if (DAT_01028224 == 0) {
        DAT_01028224 = uVar1;
        FUN_0100afdc(0);
      }
      else {
        DAT_01028224 = uVar1;
        FUN_0100afb9();
      }
    }
    else {
      if (param_1 == 0x193) {
        uVar1 = (uint)(DAT_0102822c == 0);
        DAT_0102822c = uVar1;
        FUN_01003be4(uVar1);
      }
      else {
        if ((int)param_1 < 0x198) {
          return;
        }
        if (0x19b < (int)param_1) {
          return;
        }
        DAT_01028234 = param_1 - 0x197;
        FUN_010056d3(0x198,(uint)(DAT_01028234 == 1));
        FUN_010056d3(0x199,(uint)(DAT_01028234 == 2));
        FUN_010056d3(0x19a,(uint)(DAT_01028234 == 3));
        uVar1 = (uint)(DAT_01028234 == 4);
        param_1 = 0x19b;
      }
    }
  }
  FUN_010056d3(param_1,uVar1);
  return;
}



uint FUN_0100580c(ushort param_1,LPSTR param_2)

{
  UINT UVar1;
  uint lParam;
  int iVar2;
  
  UVar1 = MapVirtualKeyA((uint)param_1,0);
  lParam = UVar1 << 0x10;
  if ((0x20 < param_1) && (param_1 < 0x2f)) {
    lParam = lParam | 0x1000000;
  }
  iVar2 = GetKeyNameTextA(lParam,param_2,0x13);
  return -(uint)(iVar2 != 0) & (uint)param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_01005850(HWND param_1,int param_2,HWND param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint lParam;
  WPARAM wParam;
  LPSTR lpString2;
  uint *puVar9;
  ushort *puVar10;
  CHAR *lpCaption;
  LPARAM lParam_00;
  UINT uCommand;
  uint local_b0 [4];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  ushort *local_90;
  uint local_8c;
  uint local_88;
  HWND local_84;
  CHAR local_80 [100];
  CHAR local_1c;
  undefined local_1b;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_84 = param_1;
  if (param_2 == 0x53) {
    uCommand = 0xc;
    param_3 = *(HWND *)(param_4 + 0xc);
  }
  else {
    if (param_2 != 0x7b) {
      if (param_2 == 0x110) {
        local_90 = &DAT_01023508;
        if (DAT_01023508 != -1) {
          do {
            uVar1 = *local_90;
            local_94 = (uint)uVar1 & 0xff;
            if ((uVar1 & 0x4000) == 0) {
              lParam = local_94;
              if ((char)((uint)uVar1 >> 8) < '\0') {
                local_90 = local_90 + 1;
                local_98 = local_98 & 0xffff0000 | (uint)*local_90;
                lParam = local_98;
              }
              local_98 = lParam;
              if ((ushort)local_94 <= (ushort)local_98) goto LAB_01005cb1;
            }
            else {
              local_88 = 0x80;
              local_98 = local_94;
              do {
                uCommand = MapVirtualKeyA(local_88 & 0xffff,2);
                if (local_98 == uCommand) break;
                local_88 = local_88 + 1;
              } while ((ushort)local_88 < 0x100);
              if ((short)local_88 != 0x100) {
                local_1c = (CHAR)local_94;
                local_1b = 0;
                local_98 = local_88;
                local_94 = local_88;
LAB_01005cb1:
                local_8c = local_94 & 0xffff;
                do {
                  if (((uVar1 & 0x4000) != 0) ||
                     (lParam = FUN_0100580c((ushort)local_94,&local_1c), lParam != 0)) {
                    local_88 = SendDlgItemMessageA(local_84,0x191,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x191,0x151,local_88,local_8c);
                    if (local_8c == DAT_01028238) {
                      SendDlgItemMessageA(local_84,0x191,0x14e,local_88,0);
                    }
                    local_88 = SendDlgItemMessageA(local_84,0x192,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x192,0x151,local_88,local_8c);
                    if (local_8c == DAT_0102823c) {
                      SendDlgItemMessageA(local_84,0x192,0x14e,local_88,0);
                    }
                    local_88 = SendDlgItemMessageA(local_84,0x193,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x193,0x151,local_88,local_8c);
                    if (local_8c == DAT_01028240) {
                      SendDlgItemMessageA(local_84,0x193,0x14e,local_88,0);
                    }
                    local_88 = SendDlgItemMessageA(local_84,0x194,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x194,0x151,local_88,local_8c);
                    if (local_8c == DAT_01028244) {
                      SendDlgItemMessageA(local_84,0x194,0x14e,local_88,0);
                    }
                    local_88 = SendDlgItemMessageA(local_84,0x195,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x195,0x151,local_88,local_8c);
                    if (local_8c == DAT_01028248) {
                      SendDlgItemMessageA(local_84,0x195,0x14e,local_88,0);
                    }
                    local_88 = SendDlgItemMessageA(local_84,0x196,0x14a,0xffffffff,(LPARAM)&local_1c
                                                  );
                    local_88 = local_88 & 0xffff;
                    SendDlgItemMessageA(local_84,0x196,0x151,local_88,local_8c);
                    if (local_8c == DAT_0102824c) {
                      SendDlgItemMessageA(local_84,0x196,0x14e,local_88,0);
                    }
                  }
                  local_94 = local_94 + 1;
                  local_8c = local_8c + 1;
                } while ((ushort)local_94 <= (ushort)local_98);
              }
            }
            local_90 = local_90 + 1;
          } while (*local_90 != 0xffff);
        }
      }
      else {
        if (param_2 == 0x111) {
          local_98 = (uint)param_3 & 0xffff;
          if (local_98 == 1) {
            local_94 = 0;
            lParam = SendDlgItemMessageA(param_1,0x191,0x147,0,0);
            local_b0[0] = SendDlgItemMessageA(local_84,0x191,0x150,lParam & 0xffff,0);
            lParam = SendDlgItemMessageA(local_84,0x192,0x147,0,0);
            local_b0[1] = SendDlgItemMessageA(local_84,0x192,0x150,lParam & 0xffff,0);
            lParam = SendDlgItemMessageA(local_84,0x193,0x147,0,0);
            local_b0[2] = SendDlgItemMessageA(local_84,0x193,0x150,lParam & 0xffff,0);
            lParam = SendDlgItemMessageA(local_84,0x194,0x147,0,0);
            local_b0[3] = SendDlgItemMessageA(local_84,0x194,0x150,lParam & 0xffff,0);
            lParam = SendDlgItemMessageA(local_84,0x195,0x147,0,0);
            local_a0 = SendDlgItemMessageA(local_84,0x195,0x150,lParam & 0xffff,0);
            lParam = SendDlgItemMessageA(local_84,0x196,0x147,0,0);
            lParam = SendDlgItemMessageA(local_84,0x196,0x150,lParam & 0xffff,0);
            puVar9 = local_b0;
            puVar10 = (ushort *)0x1;
            local_9c = lParam;
            do {
              puVar8 = puVar10;
              if (local_94 != 0) goto LAB_01005f31;
              while ((local_90 = puVar8, (int)local_90 < 6 && (local_94 == 0))) {
                if (*puVar9 == local_b0[(int)local_90]) {
                  lpString2 = FUN_01003752(0x2b);
                  lstrcpyA(local_80,lpString2);
                  uCommand = 0x2000;
                  lpCaption = local_80;
                  lpString2 = FUN_01003752(0x27);
                  MessageBoxA(local_84,lpString2,lpCaption,uCommand);
                  local_94 = 1;
                }
                puVar8 = (ushort *)((int)local_90 + 1);
              }
              puVar9 = puVar9 + 1;
              bVar2 = (int)puVar10 < 5;
              puVar10 = (ushort *)((int)puVar10 + 1);
            } while (bVar2);
            uVar3 = local_b0[0];
            uVar4 = local_b0[1];
            uVar5 = local_b0[2];
            uVar6 = local_b0[3];
            uVar7 = local_a0;
            if (local_94 != 0) goto LAB_01005f31;
          }
          else {
            uVar3 = DAT_01028238;
            uVar4 = DAT_0102823c;
            uVar5 = DAT_01028240;
            uVar6 = DAT_01028244;
            uVar7 = DAT_01028248;
            lParam = DAT_0102824c;
            if (local_98 != 2) {
              if (local_98 == 0x1f5) {
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_01028250,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x191,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x191,0x14e,wParam,lParam_00);
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_01028254,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x192,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x192,0x14e,wParam,lParam_00);
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_01028258,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x193,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x193,0x14e,wParam,lParam_00);
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_0102825c,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x194,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x194,0x14e,wParam,lParam_00);
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_01028260,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x195,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x195,0x14e,wParam,lParam_00);
                lParam_00 = 0;
                lParam = FUN_0100580c(DAT_01028264,&local_1c);
                wParam = SendDlgItemMessageA(local_84,0x196,0x158,0,lParam);
                SendDlgItemMessageA(local_84,0x196,0x14e,wParam,lParam_00);
              }
              goto LAB_01005f31;
            }
          }
          DAT_0102824c = lParam;
          DAT_01028248 = uVar7;
          DAT_01028244 = uVar6;
          DAT_01028240 = uVar5;
          DAT_0102823c = uVar4;
          DAT_01028238 = uVar3;
          EndDialog(local_84,local_98);
        }
      }
      goto LAB_01005f31;
    }
    uCommand = 10;
  }
  WinHelpA(param_3,"pinball.hlp",uCommand,(ULONG_PTR)&DAT_01023540);
LAB_01005f31:
  FUN_0101cd9e();
  return;
}



void FUN_01005f45(void)

{
  DialogBoxParamA(DAT_01028204,"KEYMAPPER",DAT_010281fc,FUN_01005850,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01005f69(HMENU param_1)

{
  int *piVar1;
  
  DAT_01024f0c = param_1;
  DAT_01028220 = (HKEY)0x1;
  DAT_01028224 = (HKEY)0x0;
  DAT_0102822c = (HKEY)0x0;
  DAT_01028228 = (HKEY)&DAT_00000005;
  DAT_01028230 = (HKEY)0x2;
  _DAT_01028250 = (HKEY)0x5a;
  _DAT_01028254 = (HKEY)0xbf;
  _DAT_01028258 = (HKEY)0x20;
  _DAT_0102825c = (HKEY)0x58;
  _DAT_01028260 = (HKEY)0xbe;
  _DAT_01028264 = (HKEY)0x26;
  FUN_010037a6(0x9f,(int *)&DAT_01028250);
  FUN_010037a6(0xa0,(int *)&DAT_01028254);
  FUN_010037a6(0xa1,(int *)&DAT_01028258);
  FUN_010037a6(0xa2,(int *)&DAT_0102825c);
  FUN_010037a6(0xa3,(int *)&DAT_01028260);
  FUN_010037a6(0xa4,(int *)&DAT_01028264);
  DAT_01028238 = _DAT_01028250;
  DAT_0102823c = _DAT_01028254;
  DAT_01028240 = _DAT_01028258;
  DAT_01028244 = _DAT_0102825c;
  DAT_01028248 = _DAT_01028260;
  DAT_01028234 = (HKEY)0x1;
  DAT_0102824c = _DAT_01028264;
  DAT_01028220 = FUN_01003588((LPCSTR)0x0,"Sounds",DAT_01028220);
  DAT_01028224 = FUN_01003588((LPCSTR)0x0,"Music",DAT_01028224);
  DAT_01028228 = FUN_01003588((LPCSTR)0x0,"Average",DAT_01028228);
  DAT_0102822c = FUN_01003588((LPCSTR)0x0,"FullScreen",DAT_0102822c);
  DAT_01028230 = FUN_01003588((LPCSTR)0x0,"Priority_Adjustment",DAT_01028230);
  DAT_01028234 = FUN_01003588((LPCSTR)0x0,"Players",DAT_01028234);
  DAT_01028238 = FUN_01003588((LPCSTR)0x0,"Left Flippper key",DAT_01028238);
  DAT_0102823c = FUN_01003588((LPCSTR)0x0,"Right Flipper key",DAT_0102823c);
  DAT_01028240 = FUN_01003588((LPCSTR)0x0,"Plunger key",DAT_01028240);
  DAT_01028244 = FUN_01003588((LPCSTR)0x0,"Left Table Bump key",DAT_01028244);
  DAT_01028248 = FUN_01003588((LPCSTR)0x0,"Right Table Bump key",DAT_01028248);
  DAT_0102824c = FUN_01003588((LPCSTR)0x0,"Bottom Table Bump key",DAT_0102824c);
  FUN_010056d3(0xc9,(int)DAT_01028220);
  FUN_01006d34(0,7,(int)DAT_01028220);
  FUN_010056d3(0xca,(int)DAT_01028224);
  FUN_010056d3(0x193,(int)DAT_0102822c);
  FUN_010056d3(0x198,(uint)(DAT_01028234 == (HKEY)0x1));
  FUN_010056d3(0x199,(uint)(DAT_01028234 == (HKEY)0x2));
  FUN_010056d3(0x19a,(uint)(DAT_01028234 == (HKEY)0x3));
  FUN_010056d3(0x19b,(uint)(DAT_01028234 == (HKEY)0x4));
  piVar1 = FUN_010054c2(500);
  if (piVar1 != (int *)0x0) {
    FUN_01003601((LPCSTR)0x0,"Shell Exe",(LPBYTE)piVar1,(HKEY)&DAT_010013da,(HKEY)0x1f4);
    if ((*(char *)piVar1 == '\0') && (DAT_01024f0c != (HMENU)0x0)) {
      DeleteMenu(DAT_01024f0c,0x195,0);
      DrawMenuBar(DAT_010281fc);
    }
  }
  return;
}



undefined4 FUN_01006270(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = *(short **)(*(int *)(param_1 + 6) + param_2 * 4);
  iVar3 = (int)*psVar1;
  iVar4 = 0;
  if (0 < iVar3) {
    psVar1 = psVar1 + 1;
    do {
      iVar2 = (int)*psVar1;
      if (iVar2 == param_3) {
        return *(undefined4 *)(psVar1 + 3);
      }
      if (iVar2 != param_3 && param_3 <= iVar2) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      psVar1 = psVar1 + 5;
    } while (iVar4 < iVar3);
  }
  return 0;
}



undefined4 FUN_010062b1(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = *(short **)(*(int *)(param_1 + 6) + param_2 * 4);
  iVar2 = (int)*psVar1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    psVar1 = psVar1 + 1;
    do {
      if ((int)*psVar1 == param_3) {
        if (iVar4 == param_4) {
          return *(undefined4 *)(psVar1 + 1);
        }
        iVar4 = iVar4 + 1;
      }
      else {
        if (param_3 < (int)*psVar1) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      psVar1 = psVar1 + 5;
    } while (iVar3 < iVar2);
  }
  return 0;
}



void FUN_010062fe(int param_1,int param_2,int param_3)

{
  FUN_010062b1(param_1,param_2,param_3,0);
  return;
}



undefined4 FUN_0100631c(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = *(short **)(*(int *)(param_1 + 6) + param_2 * 4);
  iVar2 = (int)*psVar1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    psVar1 = psVar1 + 1;
    do {
      if ((int)*psVar1 == param_3) {
        if (param_4 == iVar4) {
          return *(undefined4 *)(psVar1 + 3);
        }
        iVar4 = iVar4 + 1;
      }
      else {
        if (param_3 < (int)*psVar1) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      psVar1 = psVar1 + 5;
    } while (iVar3 < iVar2);
  }
  return 0;
}



int FUN_01006369(short *param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPCSTR pCVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = lstrlenA(param_2);
  iVar5 = (int)*param_1;
  do {
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return -1;
      }
      iVar2 = FUN_01006270((int)param_1,iVar5,3);
      iVar3 = 0;
    } while (iVar2 == 0);
    bVar6 = iVar1 == 0;
    if (0 < iVar1) {
      pCVar4 = param_2;
      do {
        if (*pCVar4 != pCVar4[iVar2 - (int)param_2]) break;
        iVar3 = iVar3 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar3 < iVar1);
      bVar6 = iVar3 == iVar1;
    }
    if (((bVar6) && (param_2[iVar3] == '\0')) && (*(char *)(iVar3 + iVar2) == '\0')) {
      return iVar5;
    }
  } while( true );
}



undefined4 FUN_010063db(short *param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01006369(param_1,param_2);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01006270((int)param_1,iVar1,param_3);
  }
  return uVar2;
}



void FUN_01006408(short *param_1)

{
  short *psVar1;
  short *psVar2;
  LPCVOID *ppvVar3;
  int local_8;
  
  psVar2 = param_1;
  local_8 = 0;
  if (0 < *param_1) {
    do {
      psVar1 = *(short **)(*(int *)(psVar2 + 3) + local_8 * 4);
      if (psVar1 != (short *)0x0) {
        param_1 = (short *)0x0;
        if (0 < *psVar1) {
          ppvVar3 = (LPCVOID *)(psVar1 + 4);
          do {
            if ((LPCVOID *)*ppvVar3 != (LPCVOID *)0x0) {
              if (*(short *)((int)ppvVar3 + -6) == 1) {
                FUN_0100460c((LPCVOID *)*ppvVar3);
              }
              FUN_01005541((int)*ppvVar3);
            }
            param_1 = (short *)((int)param_1 + 1);
            ppvVar3 = (LPCVOID *)((int)ppvVar3 + 10);
          } while ((int)param_1 < (int)*psVar1);
        }
        FUN_01005541((int)psVar1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < (int)*psVar2);
  }
  if (*(int *)(psVar2 + 1) != 0) {
    FUN_01005541(*(int *)(psVar2 + 1));
  }
  FUN_01005541(*(int *)(psVar2 + 3));
  FUN_01005541((int)psVar2);
  return;
}



uint __thiscall FUN_01006498(uint3 param_1,HFILE param_2)

{
  UINT UVar1;
  uint uStack8;
  
  uStack8 = (uint)param_1;
  UVar1 = _lread(param_2,(LPVOID)((int)&uStack8 + 3),1);
  return UVar1 & 0xffffff00 | uStack8 >> 0x18;
}



undefined4 FUN_010064bd(HFILE param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  _lread(param_1,&local_8,4);
  return local_8;
}



void FUN_010064e2(LPCSTR param_1)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  HFILE hFile;
  int iVar4;
  int *piVar5;
  int *lpBuffer;
  uint uVar6;
  int **ppiVar7;
  int *extraout_ECX;
  int *piVar8;
  int *extraout_ECX_00;
  int *lBytes;
  int iVar9;
  int **ppiVar10;
  undefined local_164;
  short local_163;
  short local_161;
  short local_15f;
  short local_15d;
  long local_15b;
  byte local_157;
  int local_154;
  int local_150;
  HFILE local_14c;
  _OFSTRUCT local_148;
  CHAR local_c0 [71];
  CHAR local_79 [104];
  ushort local_11;
  ushort local_b;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  hFile = OpenFile(param_1,(LPOFSTRUCT)&local_148,0);
  local_14c = hFile;
  if (hFile == -1) goto LAB_010067e1;
  local_14c = hFile;
  _lread(hFile,local_c0,0xb7);
  iVar4 = lstrcmpA("PARTOUT(4.0)RESOURCE",local_c0);
  if (iVar4 != 0) {
    _lclose(hFile);
    goto LAB_010067e1;
  }
  piVar5 = FUN_010054c2(10);
  if (piVar5 == (int *)0x0) {
    _lclose(hFile);
    goto LAB_010067e1;
  }
  iVar4 = lstrlenA(local_79);
  if (iVar4 < 1) {
    *(undefined4 *)((int)piVar5 + 2) = 0;
LAB_010065b3:
    if (local_b == 0) {
LAB_010065e9:
      lpBuffer = FUN_010054c2((uint)local_11 << 2);
      *(int **)((int)piVar5 + 6) = lpBuffer;
      if (lpBuffer != (int *)0x0) {
        local_150 = 0;
        lpBuffer = extraout_ECX;
        if (local_11 != 0) {
          do {
            uVar6 = FUN_01006498((uint3)lpBuffer,local_14c);
            cVar2 = (char)uVar6;
            if (cVar2 < '\x01') {
              iVar4 = 0;
            }
            else {
              iVar4 = (int)cVar2 + -1;
            }
            iVar9 = local_150 * 4;
            lpBuffer = FUN_010054c2(iVar4 * 10 + 0xc);
            *(int **)(iVar9 + *(int *)((int)piVar5 + 6)) = lpBuffer;
            psVar1 = *(short **)(iVar9 + *(int *)((int)piVar5 + 6));
            if (psVar1 == (short *)0x0) break;
            local_154 = 0;
            *psVar1 = (short)cVar2;
            piVar8 = (int *)(int)cVar2;
            lpBuffer = piVar8;
            if (0 < (int)piVar8) {
              ppiVar10 = (int **)(psVar1 + 4);
              lpBuffer = piVar8;
              do {
                uVar6 = FUN_01006498((uint3)lpBuffer,local_14c);
                uVar3 = (ushort)uVar6 & 0xff;
                *(ushort *)((int)ppiVar10 + -6) = uVar3;
                lBytes = (int *)(int)*(short *)(&DAT_010235d0 + (int)(short)uVar3 * 2);
                if ((int)lBytes < 0) {
                  lBytes = (int *)FUN_010064bd(local_14c);
                }
                if ((int)(short)uVar3 == 1) {
                  _hread(local_14c,&local_164,0xe);
                  ppiVar7 = (int **)FUN_010054c2(0x25);
                  *(int ***)ppiVar10 = ppiVar7;
                  if (ppiVar7 == (int **)0x0) goto LAB_010067bb;
                  if ((local_157 & 2) == 0) {
                    iVar4 = FUN_010045aa(ppiVar7,(int)local_163,(int)local_161,(uint)local_157 & 1);
                  }
                  else {
                    iVar4 = FUN_0100459a(ppiVar7,(int *)(int)local_163,(int *)(int)local_161);
                  }
                  if (iVar4 != 0) goto LAB_010067bb;
                  _hread(local_14c,(LPVOID)(*ppiVar10)[2],local_15b);
                  *(int *)((int)*ppiVar10 + 0x1d) = (int)local_15f;
                  lpBuffer = *ppiVar10;
                  *(int *)((int)lpBuffer + 0x21) = (int)local_15d;
                }
                else {
                  lpBuffer = FUN_010054c2((uint)lBytes);
                  *ppiVar10 = lpBuffer;
                  if (lpBuffer == (int *)0x0) goto LAB_010067bb;
                  _hread(local_14c,lpBuffer,(long)lBytes);
                  lpBuffer = extraout_ECX_00;
                }
                local_154 = local_154 + 1;
                ppiVar10[-1] = lBytes;
                *(short *)piVar5 = (short)local_150 + 1;
                ppiVar10 = (int **)((int)ppiVar10 + 10);
              } while (local_154 < (int)piVar8);
            }
            local_150 = local_150 + 1;
          } while (local_150 < (int)(uint)local_11);
        }
LAB_010067bb:
        _lclose(local_14c);
        if ((int)*(short *)piVar5 != (uint)local_11) {
          FUN_01006408((short *)piVar5);
        }
        goto LAB_010067e1;
      }
    }
    else {
      lpBuffer = FUN_010054c2((uint)local_b);
      if (lpBuffer != (int *)0x0) {
        _lread(local_14c,lpBuffer,(uint)local_b);
        FUN_01005541((int)lpBuffer);
        goto LAB_010065e9;
      }
      _lclose(local_14c);
    }
    if (*(int *)((int)piVar5 + 2) != 0) {
      FUN_01005541(*(int *)((int)piVar5 + 2));
    }
  }
  else {
    iVar4 = lstrlenA(local_79);
    lpBuffer = FUN_010054c2(iVar4 + 1);
    *(int **)((int)piVar5 + 2) = lpBuffer;
    if (lpBuffer != (int *)0x0) {
      lstrcpyA((LPSTR)lpBuffer,local_79);
      goto LAB_010065b3;
    }
    _lclose(hFile);
  }
  FUN_01005541((int)piVar5);
LAB_010067e1:
  FUN_0101cd9e();
  return;
}



void FUN_010067f3(void)

{
  UINT UVar1;
  UINT UVar2;
  UINT UVar3;
  int iVar4;
  UINT uCode;
  CHAR local_1c [20];
  undefined4 local_8;
  
  DAT_010235f0 = 0xffffffff;
  DAT_010235ec = 0xffffffff;
  local_8 = DAT_01024778;
  uCode = 0;
  do {
    UVar2 = MapVirtualKeyA(uCode,1);
    UVar1 = uCode;
    if (UVar2 == 0x10) break;
    uCode = uCode + 1;
    UVar1 = DAT_010235ec;
  } while ((int)uCode < 0x100);
  do {
    DAT_010235ec = UVar1;
    uCode = uCode + 1;
    UVar2 = DAT_010235f0;
    if (0xff < (int)uCode) break;
    UVar3 = MapVirtualKeyA(uCode,1);
    UVar1 = DAT_010235ec;
    UVar2 = uCode;
  } while (UVar3 != 0x10);
  DAT_010235f0 = UVar2;
  iVar4 = GetKeyNameTextA(DAT_010235ec << 0x10,local_1c,0x13);
  if ((iVar4 != 0) && (iVar4 = _strnicmp(local_1c,"right",5), uCode = DAT_010235ec, iVar4 != 0)) {
    DAT_010235ec = DAT_010235f0;
    DAT_010235f0 = uCode;
  }
  iVar4 = GetKeyNameTextA(DAT_010235f0 << 0x10,local_1c,0x13);
  if ((iVar4 != 0) && (iVar4 = _strnicmp(local_1c,"left",4), uCode = DAT_010235ec, iVar4 != 0)) {
    DAT_010235ec = DAT_010235f0;
    DAT_010235f0 = uCode;
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT FUN_010068f7(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0x3bd) {
                    // WARNING: Could not recover jumptable at 0x01006906. Too many branches
                    // WARNING: Treating indirect jump as call
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar1;
  }
  iVar2 = -1;
  iVar3 = 0;
  if (0 < DAT_01028208) {
    iVar4 = 0;
    do {
      if ((*(int *)((int)&DAT_01024f3c + iVar4) == param_4) &&
         ((iVar2 < 0 || (*(uint *)((int)&DAT_01024f1c + iVar4) < (uint)(&DAT_01024f1c)[iVar2])))) {
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < DAT_01028208);
    if (-1 < iVar2) {
      (&DAT_01024f1c)[iVar2] = 0;
      (&DAT_01024f3c)[iVar2] = 0;
    }
  }
  (*_DAT_01024f68)(2,param_4,iVar2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01006973(HINSTANCE param_1,int param_2,undefined *param_3)

{
  int iVar1;
  FILE *_File;
  LPSTR lpText;
  LPCSTR lpCaption;
  UINT uType;
  WNDCLASSA local_15c;
  CHAR local_134 [300];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (8 < param_2) {
    param_2 = 8;
  }
  DAT_01028208 = param_2;
  if ((DAT_01024f64 == (HWND)0x0) && (DAT_01028208 = param_2, DAT_01024f5c == (short *)0x0)) {
    DAT_01024f18 = 0xffff;
    iVar1 = 0;
    DAT_01028208 = param_2;
    if (0 < param_2) {
      do {
        (&DAT_01024f1c)[iVar1] = 0;
        (&DAT_01024f3c)[iVar1] = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    _DAT_01024f68 = param_3;
    if (param_3 == (undefined *)0x0) {
      _DAT_01024f68 = &DAT_010068ef;
    }
    FUN_010076bf(local_134,"wavemix.inf",300);
    _File = fopen(local_134,"r");
    if (_File == (FILE *)0x0) {
      uType = 0x2000;
      lpCaption = "";
      lpText = FUN_01003752(0x2a);
      MessageBoxA(DAT_010281fc,lpText,lpCaption,uType);
    }
    else {
      fclose(_File);
    }
    local_15c.style = 0;
    local_15c.lpfnWndProc = FUN_010068f7;
    local_15c.cbClsExtra = 0;
    local_15c.cbWndExtra = 0;
    local_15c.hInstance = param_1;
    local_15c.hIcon = (HICON)0x0;
    local_15c.hCursor = (HCURSOR)0x0;
    local_15c.hbrBackground = (HBRUSH)0x0;
    local_15c.lpszMenuName = (LPCSTR)0x0;
    local_15c.lpszClassName = "WaveMixSoundGuy";
    RegisterClassA(&local_15c);
    DAT_01024f64 = CreateWindowExA(0,"WaveMixSoundGuy",(LPCSTR)0x0,0x80000000,-0x80000000,0,
                                   -0x80000000,0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
    if (DAT_01024f64 != (HWND)0x0) {
      DAT_01024f60 = param_1;
      DAT_01024f5c = (short *)FUN_01020f2d();
      if (DAT_01024f5c != (short *)0x0) {
        FUN_0101d918(DAT_01024f5c,DAT_01028208,2);
      }
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_01006af6(void)

{
  if (DAT_01024f64 != (HWND)0x0) {
    DestroyWindow(DAT_01024f64);
    DAT_01024f64 = (HWND)0x0;
  }
  if (DAT_01024f5c != (short *)0x0) {
    FUN_0101e434(DAT_01024f5c,0,1);
    FUN_01020f3a(DAT_01024f5c);
    DAT_01024f5c = (short *)0x0;
  }
  return;
}



short * FUN_01006b38(DWORD *param_1)

{
  short *psVar1;
  
  if (DAT_01024f5c == (short *)0x0) {
    psVar1 = (short *)0x0;
  }
  else {
    psVar1 = FUN_0101eb23(DAT_01024f5c,param_1,DAT_01024f60,1);
  }
  return psVar1;
}



void FUN_01006b64(int *param_1)

{
  if ((param_1 != (int *)0x0) && (DAT_01024f5c != (int **)0x0)) {
    FUN_0101e4a9(DAT_01024f5c,param_1);
  }
  return;
}



void FUN_01006b8a(void)

{
  if (DAT_01024f5c != (short *)0x0) {
    FUN_0102053b(DAT_01024f5c,0);
  }
  return;
}



void FUN_01006ba1(void)

{
  if (DAT_01024f5c != (short *)0x0) {
    FUN_0102053b(DAT_01024f5c,1);
  }
  return;
}



void FUN_01006bb8(void)

{
  if (DAT_01024f5c != 0) {
    FUN_0101dd5d();
    return;
  }
  return;
}



void FUN_01006bcc(int param_1,int param_2)

{
  if (DAT_01024f5c != (short *)0x0) {
    if (DAT_01028208 <= param_2) {
      param_2 = DAT_01028208 + -1;
    }
    if ((-1 < param_1) && (param_2 < DAT_01028208)) {
      while (param_1 <= param_2) {
        FUN_0101e373(DAT_01024f5c,param_1,0);
        (&DAT_01024f1c)[param_1] = 0;
        (&DAT_01024f3c)[param_1] = 0;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01006c26(int param_1,int param_2,int param_3,ushort param_4,undefined2 param_5)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined2 local_20;
  int local_1e;
  int local_1a;
  int local_16;
  undefined4 local_12;
  uint local_e;
  undefined2 local_a;
  
  iVar2 = 0;
  if (DAT_01024f5c != 0) {
    if (DAT_01028208 <= param_3) {
      param_3 = DAT_01028208 + -1;
    }
    if (((param_1 != 0) && (-1 < param_2)) && (param_3 < DAT_01028208)) {
      if (((param_4 & 0x8000) != 0) && (0 < DAT_01028208)) {
        do {
          if ((&DAT_01024f3c)[iVar2] == param_1) {
            return;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_01028208);
      }
      iVar2 = param_2;
      if (param_2 < param_3) {
        iVar3 = param_2 << 2;
        iVar2 = param_2;
        do {
          param_2 = param_2 + 1;
          if ((((uint)DAT_01024f18 & 1 << ((byte)param_2 & 0x1f)) != 0) &&
             ((uint)(&DAT_01024f1c)[param_2] < *(uint *)((int)&DAT_01024f1c + iVar3))) {
            iVar3 = param_2 * 4;
            iVar2 = param_2;
          }
        } while (param_2 < param_3);
      }
      if (((uint)DAT_01024f18 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
        local_1e = DAT_01024f5c;
        local_12 = DAT_01024f64;
        local_e = (uint)param_4;
        local_20 = 0x1c;
        local_a = param_5;
        local_16 = param_1;
        local_1a = iVar2;
        (*_DAT_01024f68)(1,param_1,iVar2);
        DVar1 = timeGetTime();
        (&DAT_01024f1c)[iVar2] = DVar1;
        (&DAT_01024f3c)[iVar2] = param_1;
        FUN_0101df3d((undefined4 *)&local_20);
      }
    }
  }
  return;
}



void FUN_01006d34(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  if (DAT_01024f5c != 0) {
    if (DAT_01028208 <= param_2) {
      param_2 = DAT_01028208 + -1;
    }
    if ((-1 < param_1) && (param_2 < DAT_01028208)) {
      while (param_1 <= param_2) {
        uVar1 = (ushort)(1 << ((byte)param_1 & 0x1f));
        if (param_3 == 0) {
          DAT_01024f18 = DAT_01024f18 & ~uVar1;
          FUN_01006bcc(param_1,param_1);
        }
        else {
          DAT_01024f18 = DAT_01024f18 | uVar1;
        }
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



HPALETTE FUN_01006d96(LOGPALETTE *param_1)

{
  HPALETTE hPal;
  HWND hWnd;
  HDC hdc;
  int iVar1;
  HPALETTE hPal_00;
  BYTE *pBVar2;
  BYTE BVar3;
  
  param_1->palVersion = 0x300;
  param_1->palNumEntries = 0x100;
  hPal = CreatePalette(param_1);
  hWnd = GetDesktopWindow();
  hdc = FUN_01003445(hWnd);
  GetDeviceCaps(hdc,0x26);
  iVar1 = GetDeviceCaps(hdc,0x68);
  if (iVar1 == 0x100) {
    SetSystemPaletteUse(hdc,2);
    SetSystemPaletteUse(hdc,1);
    hPal_00 = SelectPalette(hdc,hPal,0);
    RealizePalette(hdc);
    SelectPalette(hdc,hPal_00,0);
    RealizePalette(hdc);
    GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)param_1->palPalEntry);
    hWnd = GetDesktopWindow();
    ReleaseDC(hWnd,hdc);
    pBVar2 = &param_1->palPalEntry[0].peFlags;
    iVar1 = 0x100;
    do {
      *pBVar2 = '\0';
      pBVar2 = pBVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 10;
    pBVar2 = &param_1[5].palPalEntry[0].peGreen;
    do {
      BVar3 = (BYTE)iVar1;
      pBVar2[-1] = BVar3;
      *pBVar2 = BVar3;
      pBVar2[1] = BVar3;
      pBVar2[2] = '\x04';
      iVar1 = iVar1 + 1;
      pBVar2 = pBVar2 + 4;
    } while (iVar1 < 0xf6);
    ResizePalette(hPal,0x100);
    SetPaletteEntries(hPal,0,0x100,(PALETTEENTRY *)(LPPALETTEENTRY)param_1->palPalEntry);
  }
  else {
    if (hPal != (HPALETTE)0x0) {
      DeleteObject(hPal);
    }
    hWnd = GetDesktopWindow();
    ReleaseDC(hWnd,hdc);
    hPal = (HPALETTE)0x0;
  }
  return hPal;
}



HBITMAP FUN_01006eb9(HMODULE param_1,HDC param_2,LPCSTR param_3,UINT param_4,int param_5,
                    HPALETTE *param_6)

{
  HRSRC hResInfo;
  HBITMAP pHVar1;
  BITMAPINFOHEADER *pbmih;
  HPALETTE hpal;
  BYTE *pBVar2;
  BYTE *pBVar3;
  DWORD DVar4;
  LOGPALETTE local_410 [128];
  DWORD *local_c;
  HGLOBAL local_8;
  
  hResInfo = FindResourceA(param_1,param_3,(LPCSTR)0x2);
  if ((hResInfo == (HRSRC)0x0) ||
     (local_8 = LoadResource(param_1,hResInfo), local_8 == (HGLOBAL)0x0)) {
    pHVar1 = (HBITMAP)0x0;
  }
  else {
    pbmih = (BITMAPINFOHEADER *)LockResource(local_8);
    DVar4 = pbmih->biClrUsed;
    if (DVar4 == 0) {
      DVar4 = 1 << (*(byte *)&pbmih->biBitCount & 0x1f);
    }
    local_c = &pbmih[1].biSize + DVar4;
    if (4 < pbmih->biBitCount) {
      hpal = FUN_01006d96(local_410);
      *param_6 = hpal;
      if (hpal != (HPALETTE)0x0) {
        param_1 = (HMODULE)0x0;
        if (0 < param_5) {
          pBVar2 = &local_410[0].palPalEntry[param_4].peGreen;
          pBVar3 = (BYTE *)((int)&pbmih[1].biSize + 1);
          do {
            if ((int)DVar4 <= (int)param_1) break;
            param_1 = (HMODULE)((int)&param_1->unused + 1);
            pBVar2[-1] = pBVar3[1];
            *pBVar2 = *pBVar3;
            pBVar2[1] = pBVar3[-1];
            pBVar2[2] = '\x04';
            pBVar3 = pBVar3 + 4;
            pBVar2 = pBVar2 + 4;
          } while ((int)param_1 < param_5);
        }
        SetPaletteEntries(hpal,param_4,(UINT)param_1,local_410[0].palPalEntry + param_4);
        SelectPalette(param_2,*param_6,0);
        RealizePalette(param_2);
      }
    }
    pHVar1 = CreateDIBitmap(param_2,pbmih,4,local_c,(BITMAPINFO *)pbmih,0);
    FreeResource(local_8);
  }
  return pHVar1;
}



void FUN_01006fcb(HWND *param_1)

{
  HWND pHVar1;
  HDC hdc;
  HDC pHVar2;
  uint uVar3;
  int iVar4;
  HBITMAP h;
  undefined local_20 [4];
  HWND local_1c;
  HWND local_18;
  HBITMAP local_8;
  
  local_8 = (HBITMAP)0x0;
  pHVar1 = GetDesktopWindow();
  hdc = FUN_01003445(pHVar1);
  if (hdc != (HDC)0x0) {
    pHVar2 = CreateCompatibleDC(hdc);
    *(HDC *)(param_1 + 3) = pHVar2;
    local_8 = CreateCompatibleBitmap(hdc,10,10);
    ReleaseDC(*param_1,hdc);
    if (local_8 == (HBITMAP)0x0) {
      GetLastError();
    }
    else {
      if ((HDC)param_1[3] != (HDC)0x0) {
        SelectObject((HDC)param_1[3],local_8);
        uVar3 = GetDeviceCaps((HDC)param_1[3],0x26);
        if (((uVar3 & 0x100) == 0) && (iVar4 = GetDeviceCaps((HDC)param_1[3],0x18), iVar4 < 0x100))
        {
          h = LoadBitmapA(DAT_01024f6c,(LPCSTR)(param_1 + 0x3a));
        }
        else {
          h = FUN_01006eb9((HMODULE)DAT_01024f6c,(HDC)param_1[3],(LPCSTR)(param_1 + 8),10,0xec,
                           (HPALETTE *)(param_1 + 1));
        }
        *(HBITMAP *)(param_1 + 2) = h;
        if (h != (HBITMAP)0x0) {
          SelectObject((HDC)param_1[3],h);
          DeleteObject(local_8);
          GetObjectA(param_1[2],0x18,local_20);
          param_1[4] = local_1c;
          param_1[5] = local_18;
          return;
        }
      }
    }
  }
  if (param_1[1] != (HWND)0x0) {
    DeleteObject(param_1[1]);
  }
  if (*param_1 != (HWND)0x0) {
    DestroyWindow(*param_1);
  }
  if (local_8 != (HBITMAP)0x0) {
    DeleteObject(local_8);
  }
  if ((HDC)param_1[3] != (HDC)0x0) {
    DeleteDC((HDC)param_1[3]);
  }
  param_1[2] = (HWND)0x0;
  return;
}



void FUN_01007103(int param_1,HDC param_2)

{
  HWND hWnd;
  tagRECT *lpRect;
  tagRECT local_14;
  
  if (*(int *)(param_1 + 8) != 0) {
    lpRect = &local_14;
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,(LPRECT)lpRect);
    *(int *)(param_1 + 0x18) = ((local_14.right - local_14.left) - *(int *)(param_1 + 0x10)) / 2;
    *(int *)(param_1 + 0x1c) = ((local_14.bottom - local_14.top) - *(int *)(param_1 + 0x14)) / 2;
    SelectPalette(param_2,*(HPALETTE *)(param_1 + 4),0);
    RealizePalette(param_2);
    SelectPalette(*(HDC *)(param_1 + 0xc),*(HPALETTE *)(param_1 + 4),0);
    RealizePalette(*(HDC *)(param_1 + 0xc));
    BitBlt(param_2,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x10),
           *(int *)(param_1 + 0x14),*(HDC *)(param_1 + 0xc),0,0,0xcc0020);
  }
  return;
}



void FUN_010071a5(HWND *param_1)

{
  HDC hdc;
  
  if ((param_1 != (HWND *)0x0) && (*param_1 != (HWND)0x0)) {
    hdc = FUN_01003445(*param_1);
    BitBlt(hdc,0,0,(int)param_1[6],(int)param_1[7],hdc,0,0,0x42);
    ReleaseDC(*param_1,hdc);
  }
  return;
}



void FUN_010071ed(HWND *param_1)

{
  if (param_1 != (HWND *)0x0) {
    if (*param_1 != (HWND)0x0) {
      DestroyWindow(*param_1);
      *param_1 = (HWND)0x0;
      if (param_1[1] != (HWND)0x0) {
        DeleteObject(param_1[1]);
      }
      param_1[1] = (HWND)0x0;
      if ((HDC)param_1[3] != (HDC)0x0) {
        DeleteDC((HDC)param_1[3]);
      }
      if (param_1[2] != (HWND)0x0) {
        DeleteObject(param_1[2]);
      }
    }
    FUN_01005541((int)param_1);
  }
  if (DAT_01024f6c != (HINSTANCE)0x0) {
    UnregisterClassA("3DPB_SPLASH_CLASS",DAT_01024f6c);
    DAT_01024f6c = (HINSTANCE)0x0;
  }
  return;
}



void FUN_01007264(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LONG LVar1;
  HDC hdc;
  tagPAINTSTRUCT local_48;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_2 == 0xf) {
    LVar1 = GetWindowLongA(param_1,0);
    BeginPaint(param_1,(LPPAINTSTRUCT)&local_48);
    EndPaint(param_1,(PAINTSTRUCT *)&local_48);
    hdc = FUN_01003445(param_1);
    if ((hdc != (HDC)0x0) && (LVar1 != 0)) {
      BitBlt(hdc,0,0,10000,10000,hdc,0,0,0x42);
      FUN_01007103(LVar1,hdc);
    }
    ReleaseDC(param_1,hdc);
  }
  else {
    if (param_2 != 0x14) {
      DefWindowProcA(param_1,param_2,param_3,param_4);
    }
  }
  FUN_0101cd9e();
  return;
}



HWND * FUN_01007308(HINSTANCE param_1,LPCSTR param_2,LPCSTR param_3)

{
  HINSTANCE hInstance;
  HWND *dwNewLong;
  HWND hWnd;
  tagRECT *lpRect;
  WNDCLASSA local_3c;
  tagRECT local_14;
  
  dwNewLong = (HWND *)FUN_010054c2(0x1b0);
  if (dwNewLong != (HWND *)0x0) {
    lstrcpyA((LPSTR)(dwNewLong + 8),param_2);
    lstrcpyA((LPSTR)(dwNewLong + 0x3a),param_3);
    if (DAT_01024f6c == (HINSTANCE)0x0) {
      DAT_01024f6c = param_1;
      local_3c.style = 0;
      local_3c.lpfnWndProc = FUN_01007264;
      local_3c.cbClsExtra = 0;
      local_3c.cbWndExtra = 4;
      local_3c.hInstance = param_1;
      local_3c.hIcon = (HICON)0x0;
      local_3c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_3c.hbrBackground = (HBRUSH)0x0;
      local_3c.lpszMenuName = "";
      local_3c.lpszClassName = "3DPB_SPLASH_CLASS";
      RegisterClassA(&local_3c);
    }
    hInstance = DAT_01024f6c;
    dwNewLong[2] = (HWND)0x0;
    hWnd = CreateWindowExA(0,"3DPB_SPLASH_CLASS","",0x80000000,-10,-10,1,1,(HWND)0x0,(HMENU)0x0,
                           hInstance,(LPVOID)0x0);
    *dwNewLong = hWnd;
    if (hWnd != (HWND)0x0) {
      SetWindowLongA(hWnd,0,(LONG)dwNewLong);
      lpRect = &local_14;
      hWnd = GetDesktopWindow();
      GetWindowRect(hWnd,(LPRECT)lpRect);
      FUN_01006fcb(dwNewLong);
      MoveWindow(*dwNewLong,0,0,local_14.right - local_14.left,local_14.bottom - local_14.top,0);
      ShowWindow(*dwNewLong,8);
      SetFocus(*dwNewLong);
      UpdateWindow(*dwNewLong);
      return dwNewLong;
    }
    FUN_01005541((int)dwNewLong);
  }
  return (HWND *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0100742f(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = FUN_010054c2(param_1 * 0x14);
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
    DAT_01024f80 = piVar1;
  }
  else {
    DAT_01024f78 = 0;
    iVar4 = param_1 + -1;
    _DAT_01024f74 = param_1;
    DAT_010235f4 = 1;
    DAT_01024f80 = piVar1;
    if (0 < iVar4) {
      piVar3 = piVar1 + 3;
      DAT_01024f80 = piVar1;
      do {
        *(int **)piVar3 = piVar3 + 2;
        piVar3 = piVar3 + 5;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    piVar1[param_1 * 5 + -2] = 0;
    DAT_01024f70 = 0;
    uVar2 = 0;
    DAT_01024f7c = piVar1;
  }
  return uVar2;
}



void FUN_0100749b(void)

{
  if (DAT_01024f80 != 0) {
    FUN_01005541(DAT_01024f80);
  }
  DAT_01024f80 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_010074b7(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  int *local_8;
  
  iVar2 = _ftol();
  piVar1 = DAT_01024f7c;
  iVar2 = DAT_01024f84 - iVar2;
  if (_DAT_01024f74 <= DAT_01024f78) {
    return 0;
  }
  param_1 = 0;
  ppiVar3 = (int **)(DAT_01024f7c + 3);
  DAT_01024f7c = *ppiVar3;
  *ppiVar3 = (int *)0x0;
  local_8 = DAT_01024f70;
  piVar5 = DAT_01024f70;
  if (0 < DAT_01024f78) {
    do {
      piVar4 = piVar5;
      piVar5 = piVar4;
      if (iVar2 < *piVar4) break;
      param_1 = param_1 + 1;
      piVar5 = (int *)piVar4[3];
      local_8 = piVar4;
    } while (param_1 < DAT_01024f78);
    if (piVar5 != local_8) {
      *ppiVar3 = (int *)local_8[3];
      *(int **)(local_8 + 3) = piVar1;
      goto LAB_0100754d;
    }
  }
  *ppiVar3 = DAT_01024f70;
  DAT_01024f70 = piVar1;
LAB_0100754d:
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  DAT_01024f78 = DAT_01024f78 + 1;
  piVar1[4] = DAT_010235f4;
  DAT_010235f4 = DAT_010235f4 + 1;
  *piVar1 = iVar2;
  if (DAT_010235f4 < 1) {
    DAT_010235f4 = 1;
  }
  return piVar1[4];
}



int FUN_0100758d(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  undefined4 local_14;
  code *local_10;
  undefined4 local_8;
  
  iVar4 = 0;
  piVar2 = DAT_01024f70;
  if (DAT_01024f70 != (int *)0x0) {
    do {
      if (DAT_01024f84 < *piVar2) {
LAB_0100763c:
        while( true ) {
          if (piVar2 == (int *)0x0) {
            return iVar4;
          }
          if (DAT_01024f84 < *piVar2 + 100) break;
          DAT_01024f78 = DAT_01024f78 + -1;
          iVar3 = 5;
          piVar1 = piVar2;
          piVar5 = &local_18;
          while (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            *piVar5 = *piVar1;
            piVar1 = piVar1 + 1;
            piVar5 = piVar5 + 1;
          }
          piVar1 = (int *)piVar2[3];
          DAT_01024f70 = piVar1;
          *(int **)(piVar2 + 3) = DAT_01024f7c;
          DAT_01024f7c = piVar2;
          if (local_10 != (code *)0x0) {
            DAT_01024f7c = piVar2;
            (*local_10)(local_8,local_14);
            piVar1 = DAT_01024f70;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar1;
        }
        return iVar4;
      }
      DAT_01024f78 = DAT_01024f78 + -1;
      iVar3 = 5;
      piVar1 = piVar2;
      piVar5 = &local_18;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        *piVar5 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar5 = piVar5 + 1;
      }
      piVar1 = (int *)piVar2[3];
      iVar4 = iVar4 + 1;
      DAT_01024f70 = piVar1;
      *(int **)(piVar2 + 3) = DAT_01024f7c;
      DAT_01024f7c = piVar2;
      if (local_10 != (code *)0x0) {
        DAT_01024f7c = piVar2;
        (*local_10)(local_8,local_14);
        piVar1 = DAT_01024f70;
      }
      piVar2 = piVar1;
      if (1 < iVar4) goto LAB_0100763c;
    } while (piVar2 != (int *)0x0);
  }
  return iVar4;
}



int FUN_01007659(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = DAT_01024f70;
  if (0 < DAT_01024f78) {
    do {
      iVar2 = iVar1;
      if (param_1 == *(int *)(iVar2 + 0x10)) {
        if (iVar3 == 0) {
          DAT_01024f70 = *(int *)(iVar2 + 0xc);
        }
        else {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        }
        DAT_01024f78 = DAT_01024f78 + -1;
        *(undefined4 *)(iVar2 + 0xc) = DAT_01024f7c;
        DAT_01024f7c = iVar2;
        return param_1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(iVar2 + 0xc);
      iVar3 = iVar2;
    } while (iVar4 < DAT_01024f78);
  }
  return 0;
}



undefined4 FUN_010076bf(LPSTR param_1,LPCSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  char *pcVar2;
  
  DVar1 = GetModuleFileNameA(DAT_01028204,param_1,param_3);
  if ((DVar1 != 0) && (DVar1 != param_3)) {
    pcVar2 = param_1 + DVar1;
    while (param_1 < pcVar2) {
      if ((*pcVar2 == '\\') || (*pcVar2 == ':')) {
        pcVar2[1] = '\0';
        break;
      }
      DVar1 = DVar1 - 1;
      pcVar2 = pcVar2 + -1;
    }
    if ((int)(DVar1 + 0xd) < (int)param_3) {
      lstrcatA(param_1,param_2);
      return 0;
    }
    lstrcatA(param_1,"?");
  }
  return 1;
}



void FUN_0100772d(void)

{
  HKEY lpString2;
  int *lpString1;
  LPSTR pCVar1;
  HWND pHVar2;
  char *pcVar3;
  HKEY pHVar4;
  int *piVar5;
  undefined4 uVar6;
  HKEY pHVar7;
  HKEY pHVar8;
  undefined4 uVar9;
  
  lpString2 = (HKEY)FUN_010054c2(500);
  if (lpString2 != (HKEY)0x0) {
    lpString1 = FUN_010054c2(500);
    if (lpString1 == (int *)0x0) {
      FUN_01005541((int)lpString2);
    }
    else {
      pHVar7 = (HKEY)0x1f4;
      pHVar4 = (HKEY)FUN_01003752(0xb2);
      FUN_01003601((LPCSTR)0x0,"HelpFile",(LPBYTE)lpString2,pHVar4,pHVar7);
      pHVar8 = (HKEY)0x1f4;
      pcVar3 = "HelpFile";
      pHVar4 = lpString2;
      pHVar7 = lpString2;
      pCVar1 = FUN_01003752(0xa6);
      FUN_01003601(pCVar1,pcVar3,(LPBYTE)pHVar4,pHVar7,pHVar8);
      lstrcpyA((LPSTR)lpString1,(LPCSTR)lpString2);
      FUN_01005541((int)lpString2);
      uVar9 = 0;
      uVar6 = 0;
      piVar5 = lpString1;
      pHVar2 = GetDesktopWindow();
      _HtmlHelpA_16(pHVar2,piVar5,uVar6,uVar9);
      FUN_01005541((int)lpString1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010077c4(HWND param_1,HWND param_2)

{
  HWND hWnd;
  int Y;
  int X;
  int nWidth;
  int nHeight;
  tagRECT *lpRect;
  tagRECT local_34;
  tagRECT local_24;
  tagRECT local_14;
  
  GetWindowRect(param_1,(LPRECT)&local_24);
  GetWindowRect(param_2,(LPRECT)&local_34);
  lpRect = &local_14;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,(LPRECT)lpRect);
  if (_DAT_01024ef4 != 0) {
    local_14.bottom = 0x1e0;
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0x280;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0x280;
    local_24.bottom = 0x1e0;
  }
  nWidth = local_34.right - local_34.left;
  nHeight = local_34.bottom - local_34.top;
  X = (((local_34.left - local_34.right) - local_24.left) + local_24.right) / 2 + local_24.left;
  Y = (((local_34.top - local_34.bottom) - local_24.top) + local_24.bottom) / 2 + local_24.top;
  if (local_14.right < nWidth + X) {
    X = local_14.right - nWidth;
  }
  if (local_14.bottom < nHeight + Y) {
    Y = local_14.bottom - nHeight;
  }
  if (X < local_14.left) {
    X = local_14.left;
  }
  if (Y < local_14.top) {
    Y = local_14.top;
  }
  MoveWindow(param_2,X,Y,nWidth,nHeight,0);
  return;
}



void FUN_0100789a(HINSTANCE param_1,HWND param_2)

{
  LPSTR lpString2;
  HICON hIcon;
  CHAR local_198 [200];
  CHAR local_d0 [200];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  lpString2 = FUN_01003752(0x26);
  lstrcpyA(local_198,lpString2);
  lpString2 = FUN_01003752(0x66);
  lstrcpyA(local_d0,lpString2);
  hIcon = LoadIconA(param_1,"ICON_1");
  ShellAboutA(param_2,local_198,local_d0,hIcon);
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01007918(void)

{
  if (_DAT_01024ee4 != 0) {
    FUN_010039c5((uint)(_DAT_01024fd8 == 0));
  }
  FUN_010156e4();
  _DAT_01024ff4 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01007949(void)

{
  if (_DAT_01024fd8 != 0) {
    if (_DAT_01024ee4 != 0) {
      FUN_010039c5(0);
    }
    FUN_010156e4();
    _DAT_01024ff4 = 1;
  }
  return;
}



void FUN_01007976(void)

{
  HCURSOR hCursor;
  
  FUN_01007949();
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  hCursor = SetCursor(hCursor);
  FUN_010153ae(0);
  SetCursor(hCursor);
  return;
}



void FUN_010079ed(int param_1)

{
  HANDLE hThread;
  int nPriority;
  
  hThread = GetCurrentThread();
  if (param_1 == -2) {
    nPriority = -2;
  }
  else {
    if (param_1 == -1) {
      nPriority = -1;
    }
    else {
      if (param_1 == 0) {
        nPriority = 0;
      }
      else {
        if (param_1 == 1) {
          nPriority = 1;
        }
        else {
          if (param_1 == 2) {
            nPriority = 2;
          }
          else {
            if (param_1 != 3) {
              return;
            }
            nPriority = 0xf;
          }
        }
      }
    }
  }
  SetThreadPriority(hThread,nPriority);
  return;
}


