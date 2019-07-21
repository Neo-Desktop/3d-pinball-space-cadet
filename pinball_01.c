#include "pinball.h"



HDC FUN_01003445(HWND param_1)

{
  HDC hdc;
  DWORD DVar1;
  
  hdc = GetDC(param_1);
  if (param_1 != (HWND)0x0) {
    DVar1 = GetLayout(hdc);
    if ((DVar1 & 1) != 0) {
      SetLayout(hdc,0);
    }
  }
  return hdc;
}



HDC FUN_0100347c(HWND param_1,LPPAINTSTRUCT param_2)

{
  HDC hdc;
  DWORD DVar1;
  
  hdc = BeginPaint(param_1,param_2);
  if (param_1 != (HWND)0x0) {
    DVar1 = GetLayout(hdc);
    if ((DVar1 & 1) != 0) {
      SetLayout(hdc,0);
    }
  }
  return hdc;
}



void FUN_010034b6(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrlenA(param_1);
  DAT_010248a0 = FUN_010054c2(iVar1 + 1);
  if (DAT_010248a0 != (int *)0x0) {
    lstrcpyA((LPSTR)DAT_010248a0,param_1);
  }
  return;
}



void FUN_010034e7(void)

{
  if (DAT_010248a0 != 0) {
    FUN_01005541(DAT_010248a0);
  }
  DAT_010248a0 = 0;
  return;
}



int * FUN_01003503(LPCSTR param_1)

{
  int *piVar1;
  
  if (((DAT_010248a4 != (int *)0x0) ||
      (DAT_010248a4 = FUN_010054c2(2000), piVar1 = DAT_010248a0, DAT_010248a4 != (int *)0x0)) &&
     (lstrcpyA((LPSTR)DAT_010248a4,(LPCSTR)DAT_010248a0), piVar1 = DAT_010248a4,
     param_1 != (LPCSTR)0x0)) {
    lstrcatA((LPSTR)DAT_010248a4,"\\");
    lstrcatA((LPSTR)DAT_010248a4,param_1);
    piVar1 = DAT_010248a4;
  }
  return piVar1;
}



void FUN_0100356c(void)

{
  if (DAT_010248a4 != 0) {
    FUN_01005541(DAT_010248a4);
  }
  DAT_010248a4 = 0;
  return;
}



HKEY FUN_01003588(LPCSTR param_1,LPCSTR param_2,HKEY param_3)

{
  int *lpSubKey;
  LSTATUS LVar1;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  DWORD *lpdwDisposition;
  DWORD local_c;
  HKEY local_8;
  
  local_8 = param_3;
  if (DAT_010248a0 != 0) {
    lpdwDisposition = &local_c;
    phkResult = &param_3;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    samDesired = 0xf003f;
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    Reserved = 0;
    lpSubKey = FUN_01003503(param_1);
    LVar1 = RegCreateKeyExA((HKEY)0x80000001,(LPCSTR)lpSubKey,Reserved,lpClass,dwOptions,samDesired,
                            lpSecurityAttributes,(PHKEY)phkResult,lpdwDisposition);
    if (LVar1 == 0) {
      param_1 = (LPCSTR)0x4;
      RegQueryValueExA(param_3,param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_8,(LPDWORD)&param_1)
      ;
      RegCloseKey(param_3);
    }
    FUN_0100356c();
    param_3 = local_8;
  }
  return param_3;
}



void FUN_01003601(LPCSTR param_1,LPCSTR param_2,LPBYTE param_3,HKEY param_4,HKEY param_5)

{
  HKEY pHVar1;
  int *lpSubKey;
  LSTATUS LVar2;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  LPCSTR *lpdwDisposition;
  
  pHVar1 = param_5;
  lstrcpynA((LPSTR)param_3,(LPCSTR)param_4,(int)param_5);
  if (DAT_010248a0 != 0) {
    lpdwDisposition = &param_1;
    phkResult = &param_5;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    samDesired = 0xf003f;
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    Reserved = 0;
    lpSubKey = FUN_01003503(param_1);
    LVar2 = RegCreateKeyExA((HKEY)0x80000001,(LPCSTR)lpSubKey,Reserved,lpClass,dwOptions,samDesired,
                            lpSecurityAttributes,(PHKEY)phkResult,(LPDWORD)lpdwDisposition);
    if (LVar2 == 0) {
      param_4 = pHVar1;
      RegQueryValueExA(param_5,param_2,(LPDWORD)0x0,(LPDWORD)0x0,param_3,(LPDWORD)&param_4);
      RegCloseKey(param_5);
    }
    FUN_0100356c();
  }
  return;
}



void FUN_0100367c(HKEY param_1,LPCSTR param_2)

{
  int *lpSubKey;
  LSTATUS LVar1;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  DWORD *lpdwDisposition;
  DWORD local_8;
  
  if (DAT_010248a0 != 0) {
    lpdwDisposition = &local_8;
    phkResult = &param_1;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    samDesired = 0xf003f;
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    Reserved = 0;
    lpSubKey = FUN_01003503((LPCSTR)param_1);
    LVar1 = RegCreateKeyExA((HKEY)0x80000001,(LPCSTR)lpSubKey,Reserved,lpClass,dwOptions,samDesired,
                            lpSecurityAttributes,(PHKEY)phkResult,lpdwDisposition);
    if (LVar1 == 0) {
      RegSetValueExA(param_1,param_2,0,4,&stack0x0000000c,4);
      RegCloseKey(param_1);
    }
    FUN_0100356c();
  }
  return;
}



void FUN_010036e3(HKEY param_1,LPCSTR param_2,BYTE *param_3)

{
  int *lpSubKey;
  LSTATUS LVar1;
  int iVar2;
  DWORD Reserved;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  DWORD *lpdwDisposition;
  DWORD local_8;
  
  if (DAT_010248a0 != 0) {
    lpdwDisposition = &local_8;
    phkResult = &param_1;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    samDesired = 0xf003f;
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    Reserved = 0;
    lpSubKey = FUN_01003503((LPCSTR)param_1);
    LVar1 = RegCreateKeyExA((HKEY)0x80000001,(LPCSTR)lpSubKey,Reserved,lpClass,dwOptions,samDesired,
                            lpSecurityAttributes,(PHKEY)phkResult,lpdwDisposition);
    if (LVar1 == 0) {
      iVar2 = lstrlenA((LPCSTR)param_3);
      RegSetValueExA(param_1,param_2,0,1,param_3,iVar2 + 1);
      RegCloseKey(param_1);
    }
    FUN_0100356c();
  }
  return;
}



LPSTR FUN_01003752(short param_1)

{
  int iVar1;
  LPSTR lpBuffer;
  
  lpBuffer = &DAT_010248a8 + DAT_01024ea8 * 0x100;
  iVar1 = LoadStringA(DAT_01028204,(int)param_1,lpBuffer,0xff);
  if (iVar1 == 0) {
    *lpBuffer = '\0';
  }
  DAT_01024ea8 = DAT_01024ea8 + 1;
  if (5 < DAT_01024ea8) {
    DAT_01024ea8 = 0;
  }
  return lpBuffer;
}



void FUN_010037a6(short param_1,int *param_2)

{
  int iVar1;
  CHAR local_108 [256];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  iVar1 = LoadStringA(DAT_01028204,(int)param_1,local_108,0xff);
  if (iVar1 != 0) {
    iVar1 = atoi(local_108);
    *param_2 = iVar1;
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003803(LPCSTR param_1,int param_2,int param_3,int param_4,int param_5)

{
  HDC hdc;
  LPSTR _Src;
  int mode;
  COLORREF color;
  int cchText;
  tagRECT *lprc;
  UINT format;
  tagRECT local_14;
  
  hdc = FUN_01003445(DAT_01028288);
  local_14.left = param_2;
  local_14.right = param_2 + param_4;
  local_14.top = param_3;
  local_14.bottom = param_3 + param_5;
  if ((int)_DAT_01023050 < 0) {
    _DAT_01028290 = 0xff;
    _DAT_01028294 = 0xff;
    _DAT_01023050 = 0xff;
    _Src = FUN_01003752(0xbd);
    if (_Src != (LPSTR)0x0) {
      sscanf(_Src,"%d %d %d",&DAT_01023050,&DAT_01028294,&DAT_01028290);
    }
  }
  mode = SetBkMode(hdc,1);
  color = SetTextColor(hdc,(uint)CONCAT11(DAT_01028290,DAT_01028294) << 8 | _DAT_01023050 & 0xff);
  format = 0x810;
  lprc = &local_14;
  cchText = lstrlenA(param_1);
  DrawTextA(hdc,param_1,cchText,(LPRECT)lprc,format);
  SetBkMode(hdc,mode);
  SetTextColor(hdc,color);
  ReleaseDC(DAT_01028288,hdc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010038f8(void)

{
  HWND hWnd;
  int iVar1;
  tagRECT *lpRect;
  tagRECT local_14;
  
  if (_DAT_01024ee4 == 0) {
    DAT_010250a5 = 0;
    DAT_010250a9 = GetSystemMetrics(0xf);
  }
  else {
    lpRect = &local_14;
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,(LPRECT)lpRect);
    DAT_010250a5 = ((local_14.right - DAT_01025094) - local_14.left) / 2;
    DAT_010250a9 = ((local_14.bottom - DAT_01025098) - local_14.top) / 2;
  }
  if (_DAT_01024ee8 != 0) {
    iVar1 = GetSystemMetrics(0xf);
    DAT_010250a9 = DAT_010250a9 - iVar1;
  }
  return;
}



void FUN_01003975(void)

{
  uint uVar1;
  
  uVar1 = GetWindowLongA(DAT_01024ebc,-0x10);
  SetWindowLongA(DAT_01024ebc,-0x10,uVar1 | 0xc00000);
  return;
}



void FUN_0100399d(void)

{
  uint uVar1;
  
  uVar1 = GetWindowLongA(DAT_01024ebc,-0x10);
  SetWindowLongA(DAT_01024ebc,-0x10,uVar1 & 0xff3fffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010039c5(int param_1)

{
  HMENU hMenu;
  
  _DAT_01024ee8 = param_1;
  FUN_010038f8();
  if (_DAT_01024ee8 == 0) {
    DAT_01024eec = DAT_01024eec | 1;
    InvalidateRect(DAT_01024ebc,(RECT *)0x0,1);
    hMenu = (HMENU)0x0;
  }
  else {
    DAT_01024eec = DAT_01024eec | 2;
    InvalidateRect(DAT_01024ebc,(RECT *)0x0,1);
    hMenu = DAT_01024ec0;
  }
  SetMenu(DAT_01024ebc,hMenu);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003a23(void)

{
  HWND hWnd;
  int iVar1;
  tagRECT *lpRect;
  tagRECT local_b4;
  DEVMODEA local_a4;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if ((_DAT_01024ef8 != 0) && (_DAT_01024ef4 == 0)) {
    local_a4.dmSize = 0x9c;
    local_a4.dmFields = 0x1c0000;
    local_a4.dmPelsWidth = 0x280;
    local_a4.dmPelsHeight = 0x1e0;
    local_a4.dmBitsPerPel = 8;
    FUN_0100399d();
    if (_DAT_01023054 != 0) {
      lpRect = &local_b4;
      hWnd = GetDesktopWindow();
      GetWindowRect(hWnd,(LPRECT)lpRect);
      SetWindowPos(DAT_01024ebc,(HWND)0xffffffff,0,0,(local_b4.right - local_b4.left) + 1,
                   (local_b4.bottom - local_b4.top) + 1,8);
    }
    _DAT_01024ef0 = 1;
    iVar1 = ChangeDisplaySettingsA(&local_a4,4);
    if (iVar1 == 1) {
      local_a4.dmFields = local_a4.dmFields & 0xfffbffff;
      _DAT_01024ef0 = 1;
      iVar1 = ChangeDisplaySettingsA(&local_a4,4);
    }
    _DAT_01024ef4 = (uint)(iVar1 == 0);
    if (iVar1 == 0) goto LAB_01003b54;
  }
  lpRect = &local_b4;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,(LPRECT)lpRect);
  FUN_0100399d();
  SetWindowPos(DAT_01024ebc,(HWND)0xfffffffe,0,0,(local_b4.right - local_b4.left) + 1,
               (local_b4.bottom - local_b4.top) + 1,8);
LAB_01003b54:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01003b66(void)

{
  if (_DAT_01024ef4 != 0) {
    _DAT_01024ef4 = 0;
    _DAT_01024ef0 = 1;
    ChangeDisplaySettingsA((DEVMODEA *)0x0,4);
    if (_DAT_01023054 != 0) {
      SetWindowPos(DAT_01024ebc,(HWND)0xfffffffe,0,0,0,0,0x13);
    }
  }
  FUN_01003975();
  SetWindowPos(DAT_01024ebc,(HWND)0x0,DAT_01024ec4,DAT_01024ec8,DAT_01024ecc - DAT_01024ec4,
               DAT_01024ed0 - DAT_01024ec8,0x14);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003be4(int param_1)

{
  BOOL BVar1;
  
  if (param_1 != _DAT_01024ee4) {
    _DAT_01024ee4 = param_1;
    if (param_1 == 0) {
      FUN_01003b66();
      DAT_01024eec._1_1_ = DAT_01024eec._1_1_ | 0x80;
      InvalidateRect(DAT_01024ebc,(RECT *)0x0,1);
      FUN_010039c5(1);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x185);
    }
    else {
      BVar1 = IsWindowVisible(DAT_01024ebc);
      if (BVar1 != 0) {
        GetWindowRect(DAT_01024ebc,(LPRECT)&DAT_01024ec4);
      }
      FUN_01003a23();
      DAT_01024eec._1_1_ = DAT_01024eec._1_1_ | 0x80;
      InvalidateRect(DAT_01024ebc,(RECT *)0x0,1);
      FUN_010039c5(0);
      FUN_0100399d();
    }
  }
  return;
}



void FUN_01003c87(void)

{
  DAT_01024eec._1_1_ = DAT_01024eec._1_1_ | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01003c94(void)

{
  HWND pHVar1;
  undefined4 uVar2;
  HWND pHVar3;
  
  uVar2 = 0;
  if (_DAT_01024ef0 != 0) {
    _DAT_01024ef0 = 0;
    return 0;
  }
  if ((_DAT_01024ee4 == 0) || (_DAT_01024ef4 == 0)) {
    SetWindowPos(DAT_01024ebc,(HWND)0x0,DAT_01024ec4,DAT_01024ec8,DAT_01024ecc - DAT_01024ec4,
                 DAT_01024ed0 - DAT_01024ec8,0x14);
  }
  else {
    _DAT_01024ef4 = 0;
    _DAT_01024ee4 = 0;
    FUN_01003975();
    DAT_01024eec._1_1_ = DAT_01024eec._1_1_ | 0x80;
    InvalidateRect(DAT_01024ebc,(RECT *)0x0,1);
    FUN_010039c5(1);
    SetWindowPos(DAT_01024ebc,(HWND)0x0,DAT_01024ec4,DAT_01024ec8,DAT_01024ecc - DAT_01024ec4,
                 DAT_01024ed0 - DAT_01024ec8,0x1c);
    uVar2 = 1;
  }
  pHVar3 = DAT_01024ebc;
  pHVar1 = GetDesktopWindow();
  FUN_010077c4(pHVar1,pHVar3);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003d65(int param_1,int param_2,undefined4 param_3,HWND param_4,undefined4 param_5,
                 undefined4 param_6)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  int iVar3;
  LPRECT lpRect;
  
  _DAT_01024ed4 = 0;
  _DAT_01024ed8 = 0;
  _DAT_01024ef8 = param_6;
  DAT_01024ebc = param_4;
  lpRect = (LPRECT)&DAT_01024eac;
  DAT_01024ec0 = param_5;
  _DAT_01024edc = param_1;
  _DAT_01024ee0 = param_2;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  iVar1 = GetSystemMetrics(5);
  param_1 = param_1 + iVar1 * 2;
  iVar1 = GetSystemMetrics(6);
  param_2 = param_2 + iVar1 * 2;
  iVar1 = GetSystemMetrics(0xf);
  iVar2 = GetSystemMetrics(4);
  iVar3 = ((DAT_01024eb4 - _DAT_01024eac) - param_1) / 2;
  DAT_01024ec4 = iVar3 + -2;
  DAT_01024ec8 = (((DAT_01024eb8 - _DAT_01024eb0) - param_2) / 2 - (iVar1 + iVar2)) + -2;
  DAT_01024ed0 = iVar1 + iVar2 + DAT_01024ec8 + 4 + param_2;
  DAT_01024ecc = iVar3 + 2 + param_1;
  MoveWindow(DAT_01024ebc,DAT_01024ec4,DAT_01024ec8,DAT_01024ecc - DAT_01024ec4,
             DAT_01024ed0 - DAT_01024ec8,0);
  DAT_01024eec = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003e53(void)

{
  if (_DAT_01024ef4 != 0) {
    FUN_01003be4(0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003e69(int param_1)

{
  if ((_DAT_01024ee4 != 0) && (param_1 == 0)) {
    FUN_01003be4(0);
    SetWindowPos(DAT_01024ebc,(HWND)0x1,0,0,0,0,0x13);
  }
  return;
}



uint FUN_01003ea2(uint param_1)

{
  return ((param_1 >> 0x10) - DAT_010250a9) * 0x10000 | param_1 - DAT_010250a5 & 0xffff;
}



void FUN_01003ecf(int param_1)

{
  *(int *)(param_1 + 8) = DAT_01024ecc - DAT_01024ec4;
  *(int *)(param_1 + 0xc) = DAT_01024ed0 - DAT_01024ec8;
  *(int *)(param_1 + 0x10) = DAT_01024ec4;
  *(int *)(param_1 + 0x14) = DAT_01024ec8;
  return;
}



void FUN_01003f10(int param_1,int param_2)

{
  HDC hdc;
  int unaff_EBX;
  int unaff_EDI;
  int local_14;
  int local_10;
  HGDIOBJ local_c;
  HBRUSH local_8;
  
  local_8 = CreateSolidBrush(0);
  if (local_8 != (HBRUSH)0x0) {
    hdc = FUN_01003445(DAT_01024ebc);
    local_c = SelectObject(hdc,local_8);
    if (hdc != (HDC)0x0) {
      local_14 = param_1 + 1 + unaff_EBX;
      local_10 = param_2 + 1 + unaff_EDI;
      FillRect(hdc,(RECT *)&stack0xffffffe4,local_8);
      ReleaseDC(DAT_01024ebc,hdc);
    }
    SelectObject(hdc,local_c);
    DeleteObject(local_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01003f98(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01024ee4 != 0) {
    if (((char)(DAT_01024eec >> 8) < '\0') || (DAT_01024eec == 0)) {
      if (_DAT_01024ee8 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetSystemMetrics(0xf);
      }
      iVar1 = DAT_01024eb8 + iVar1;
      iVar2 = DAT_01024eb4;
    }
    else {
      if ((DAT_01024eec & 1) == 0) goto LAB_01003ff7;
      iVar1 = GetSystemMetrics(0xf);
      iVar2 = DAT_01024eb4 + -1;
    }
    FUN_01003f10(iVar2,iVar1);
  }
LAB_01003ff7:
  FUN_01013a6a();
  DAT_01024eec = 0;
  return;
}



undefined4 FUN_0100400b(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_1[1];
  piVar2 = (int *)param_1[2];
  iVar7 = *param_1;
  iVar5 = param_1[3];
  iVar4 = param_2[2] + *param_2;
  iVar6 = param_2[3] + param_2[1];
  if ((((*param_2 <= (int)piVar2 + iVar7) && (iVar7 < iVar4)) && (param_2[1] <= iVar5 + iVar1)) &&
     (iVar1 < iVar6)) {
    iVar3 = *param_2;
    param_1 = piVar2;
    if (iVar7 < iVar3) {
      param_1 = (int *)((int)piVar2 + (iVar7 - iVar3));
      iVar7 = iVar3;
    }
    if (iVar4 < (int)param_1 + iVar7) {
      param_1 = (int *)(iVar4 - iVar7);
    }
    iVar4 = iVar1;
    if (iVar1 < param_2[1]) {
      iVar4 = param_2[1];
      iVar5 = iVar5 + (iVar1 - iVar4);
    }
    if (iVar6 < iVar5 + iVar4) {
      iVar5 = iVar6 - iVar4;
    }
    if ((param_1 != (int *)0x0) && (iVar5 != 0)) {
      if (param_3 != (int *)0x0) {
        *param_3 = iVar7;
        param_3[1] = iVar4;
        *(int **)(param_3 + 2) = param_1;
        param_3[3] = iVar5;
      }
      return 1;
    }
  }
  return 0;
}



void FUN_010040c2(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_8 = param_1[2];
  iVar3 = *param_1;
  iVar4 = param_1[1];
  local_c = param_1[3];
  iVar1 = param_2[1];
  iVar2 = *param_2;
  if (iVar2 < iVar3) {
    local_8 = local_8 + (iVar3 - iVar2);
    iVar3 = iVar2;
  }
  if (iVar1 < iVar4) {
    local_c = local_c + (iVar4 - iVar1);
    iVar4 = iVar1;
  }
  if (local_8 + iVar3 < iVar2 + param_2[2]) {
    local_8 = (param_2[2] - iVar3) + iVar2;
  }
  if (local_c + iVar4 < param_2[3] + iVar1) {
    local_c = (param_2[3] - iVar4) + iVar1;
  }
  param_3[1] = iVar4;
  param_3[3] = local_c;
  *param_3 = iVar3;
  param_3[2] = local_8;
  return;
}



undefined4 FUN_01004154(int *param_1,HPALETTE param_2,uint param_3)

{
  tagPALETTEENTRY *ptVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  UINT cEntries;
  tagPALETTEENTRY local_404 [256];
  
  if (param_2 == (HPALETTE)0x0) {
    param_2 = (HPALETTE)GetStockObject(0xf);
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  cEntries = param_1[8];
  if ((cEntries == 0) && (*(ushort *)((int)param_1 + 0xe) < 9)) {
    cEntries = 1 << ((byte)*(ushort *)((int)param_1 + 0xe) & 0x1f);
  }
  if (cEntries == 3) {
    if (param_1[4] != 3) goto LAB_010041ab;
    cEntries = 0;
  }
  if ((int)cEntries < 1) {
    return 1;
  }
LAB_010041ab:
  puVar4 = (undefined2 *)(*param_1 + (int)param_1);
  if ((param_3 == 0) || (2 < param_3)) {
    if (0xff < (int)cEntries) {
      cEntries = 0x100;
    }
    GetPaletteEntries(param_2,0,cEntries,(LPPALETTEENTRY)local_404);
    param_2 = (HPALETTE)0x0;
    if (0 < (int)cEntries) {
      puVar3 = (undefined *)((int)puVar4 + 1);
      do {
        ptVar1 = local_404 + (int)param_2;
        param_2 = (HPALETTE)((int)&param_2->unused + 1);
        puVar3[1] = ptVar1->peRed;
        *puVar3 = puVar3[(int)((int)local_404 - (int)puVar4)];
        puVar3[-1] = puVar3[(int)local_404 + (1 - (int)puVar4)];
        puVar3[2] = 0;
        puVar3 = puVar3 + 4;
      } while ((int)param_2 < (int)cEntries);
    }
  }
  else {
    iVar2 = 0;
    if (0 < (int)cEntries) {
      do {
        *puVar4 = (short)iVar2;
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < (int)cEntries);
    }
  }
  return 1;
}



undefined4 * FUN_0100423a(int param_1,int param_2,int param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = ((param_1 * param_2) / 8 + 3U & 0xfffffffc) * param_3;
  hMem = GlobalAlloc(0x42,iVar4 + 0x428);
  puVar1 = (undefined4 *)GlobalLock(hMem);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = iVar4;
    puVar1[1] = param_2;
    *puVar1 = 0x28;
    puVar1[2] = param_3;
    *(undefined2 *)(puVar1 + 3) = 1;
    *(undefined2 *)((int)puVar1 + 0xe) = (short)param_1;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    if (param_1 == 4) {
      puVar1[8] = 0x10;
    }
    else {
      if (param_1 == 8) {
        puVar1[8] = 0x100;
      }
    }
    param_2 = 0;
    puVar3 = puVar1 + 10;
    puVar2 = puVar1;
    if (0 < (int)puVar1[8] / 0x10) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0x800000;
        puVar3[2] = 0x8000;
        puVar3[3] = 0x808000;
        puVar3[4] = 0x80;
        puVar3[5] = 0x800080;
        puVar3[6] = 0x8080;
        puVar3[7] = 0xc0c0c0;
        puVar3[8] = 0x808080;
        puVar3[9] = 0xff0000;
        puVar3[10] = 0xff00;
        puVar3[0xb] = 0xffff00;
        puVar3[0xc] = 0xff;
        puVar3[0xd] = 0xff00ff;
        puVar3[0xe] = 0xffff;
        puVar3[0xf] = 0xffffff;
        puVar3 = puVar3 + 0x10;
        param_2 = param_2 + 1;
        puVar2 = puVar1;
      } while (param_2 < (int)puVar1[8] / 0x10);
    }
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01004380(undefined4 param_1,undefined4 param_2)

{
  _DAT_01028284 = param_1;
  DAT_01028288 = param_2;
  if (DAT_0102827c == (HPALETTE)0x0) {
    DAT_0102827c = CreatePalette((LOGPALETTE *)&DAT_01023058);
  }
  return 0;
}



undefined4 FUN_010043b9(int param_1)

{
  HWND hWnd;
  HDC hdc;
  HPALETTE hPal;
  undefined *puVar1;
  uint uVar2;
  int local_14;
  
  if (DAT_0102827c != (HPALETTE)0x0) {
    DeleteObject(DAT_0102827c);
  }
  DAT_0102827c = CreatePalette((LOGPALETTE *)&DAT_01023058);
  hWnd = GetDesktopWindow();
  hdc = FUN_01003445(hWnd);
  SetSystemPaletteUse(hdc,2);
  SetSystemPaletteUse(hdc,1);
  hPal = SelectPalette(hdc,DAT_0102827c,0);
  RealizePalette(hdc);
  SelectPalette(hdc,hPal,0);
  GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&DAT_0102305c);
  puVar1 = &DAT_0102305f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x102345f);
  puVar1 = (undefined *)(param_1 + 0x29);
  local_14 = 0xec;
  do {
    if (param_1 != 0) {
      puVar1[(int)(&DAT_0102305b + -param_1)] = puVar1[1];
      puVar1[(int)(&DAT_0102305c + -param_1)] = *puVar1;
      puVar1[(int)(&DAT_0102305d + -param_1)] = puVar1[-1];
    }
    puVar1[(int)(&DAT_0102305e + -param_1)] = 4;
    puVar1 = puVar1 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  uVar2 = GetDeviceCaps(hdc,0x26);
  if ((uVar2 & 0x100) == 0) {
    DAT_0102345a = 0xff;
    DAT_01023459 = 0xff;
    DAT_01023458 = 0xff;
  }
  ResizePalette(DAT_0102827c,0x100);
  SetPaletteEntries(DAT_0102827c,0,0x100,(PALETTEENTRY *)&DAT_0102305c);
  hWnd = GetDesktopWindow();
  ReleaseDC(hWnd,hdc);
  return 0;
}



undefined4 FUN_01004508(void)

{
  if (DAT_0102827c != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0102827c);
  }
  return 0;
}



undefined4 FUN_0100459a(int **param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_0100423a(8,(int)param_2,(int)param_3);
  *param_1 = piVar2;
  FUN_01004154(piVar2,DAT_0102827c,1);
  param_1[3] = param_2;
  param_1[5] = param_2;
  if ((int)param_2 % 4 != 0) {
    param_2 = (int *)((int)param_2 + (4 - (int)param_2 % 4));
  }
  piVar2 = *param_1;
  param_1[5] = param_2;
  param_1[4] = param_3;
  *(undefined *)(param_1 + 6) = 2;
  if (piVar2[4] == 3) {
    iVar1 = *piVar2 + 0xc;
  }
  else {
    iVar1 = *piVar2 + piVar2[8] * 4;
  }
  param_1[2] = (int *)(iVar1 + (int)piVar2);
  param_1[1] = (int *)(iVar1 + (int)piVar2);
  return 0;
}



undefined4 FUN_010045aa(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[3] = param_2;
  param_1[5] = param_2;
  if (param_4 != 0) {
    if (param_2 % 4 != 0) {
      param_1[5] = (param_2 - param_2 % 4) + 4;
    }
  }
  param_1[4] = param_3;
  *(undefined *)(param_1 + 6) = 1;
  piVar1 = FUN_010054c2(param_1[5] * param_3);
  *(int **)(param_1 + 2) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int **)(param_1 + 1) = piVar1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0100460c(LPCVOID *param_1)

{
  undefined4 uVar1;
  HGLOBAL hMem;
  int iVar2;
  
  if (param_1 == (LPCVOID *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(char *)(param_1 + 6) == '\x01') {
      FUN_01005541((int)param_1[2]);
    }
    else {
      if (*(char *)(param_1 + 6) == '\x02') {
        hMem = GlobalHandle(*param_1);
        GlobalUnlock(hMem);
        hMem = GlobalHandle(*param_1);
        GlobalFree(hMem);
      }
    }
    iVar2 = 9;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *param_1 = (LPCVOID)0x0;
      param_1 = param_1 + 1;
    }
    *(undefined *)param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01004664(void)

{
  DAT_01028280 = FUN_01003445(DAT_01028288);
  _DAT_0102828c = 0;
  SelectPalette(DAT_01028280,DAT_0102827c,0);
  RealizePalette(DAT_01028280);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100469c(BITMAPINFO **param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  if (_DAT_01024efc == 0) {
    StretchDIBits(DAT_01028280,param_4,param_5,param_6,param_7,param_2,
                  (int)param_1[4] + (-param_7 - param_3),param_6,param_7,param_1[2],*param_1,1,
                  0xcc0020);
  }
  return;
}



void FUN_010046ed(void)

{
  ReleaseDC(DAT_01028288,DAT_01028280);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01004705(BITMAPINFO **param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  HDC hdc;
  
  hdc = FUN_01003445(DAT_01028288);
  if (hdc != (HDC)0x0) {
    SelectPalette(hdc,DAT_0102827c,0);
    RealizePalette(hdc);
    if (_DAT_01024efc == 0) {
      StretchDIBits(hdc,param_4,param_5,param_6,param_7,param_2,
                    (int)param_1[4] + (-param_7 - param_3),param_6,param_7,param_1[2],*param_1,1,
                    0xcc0020);
    }
    ReleaseDC(DAT_01028288,hdc);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01004787(BITMAPINFO **param_1,int param_2,int param_3)

{
  HDC hdc;
  
  hdc = FUN_01003445(DAT_01028288);
  SelectPalette(hdc,DAT_0102827c,0);
  RealizePalette(hdc);
  if (_DAT_01024efc == 0) {
    StretchDIBits(hdc,param_2,param_3,(int)param_1[3],(int)param_1[4],0,0,(int)param_1[3],
                  (int)param_1[4],param_1[2],*param_1,1,0xcc0020);
  }
  ReleaseDC(DAT_01028288,hdc);
  return;
}



void FUN_010047fa(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5,
                 undefined param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = param_1;
  iVar2 = param_1[4];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  param_1 = (undefined4 *)(((iVar2 - param_3) - param_5) * param_1[3] + param_1[2] + param_4);
  if (0 < param_3) {
    do {
      if (0 < (int)param_2) {
        uVar3 = param_2 >> 2;
        puVar4 = param_1;
        while (uVar3 != 0) {
          uVar3 = uVar3 - 1;
          *puVar4 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          puVar4 = puVar4 + 1;
        }
        uVar3 = param_2 & 3;
        while (uVar3 != 0) {
          uVar3 = uVar3 - 1;
          *(undefined *)puVar4 = param_6;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_2);
      }
      param_1 = (undefined4 *)((int)param_1 + (puVar1[5] - param_2));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_01004870(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar3 = param_6;
  iVar2 = param_1;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_6 + 0x10);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  puVar5 = (undefined *)
           (((iVar4 - param_3) - param_8) * *(int *)(param_6 + 0x14) + *(int *)(param_6 + 8) +
           param_7);
  puVar7 = (undefined *)
           (((iVar6 - param_3) - param_5) * *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8) +
           param_4);
  if (0 < param_3) {
    param_6 = param_3;
    do {
      if (0 < param_2) {
        param_1 = param_2;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      puVar5 = puVar5 + (*(int *)(iVar3 + 0x14) - param_2);
      puVar7 = puVar7 + (*(int *)(iVar2 + 0x14) - param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



void FUN_010048ec(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_6;
  iVar1 = param_1;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_6 + 0x10);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  pcVar4 = (char *)(((iVar3 - param_3) - param_8) * *(int *)(param_6 + 0x14) + *(int *)(param_6 + 8)
                   + param_7);
  pcVar6 = (char *)(((iVar5 - param_3) - param_5) * *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)
                   + param_4);
  if (0 < param_3) {
    param_6 = param_3;
    do {
      if (0 < param_2) {
        param_1 = param_2;
        do {
          if (*pcVar4 != '\0') {
            *pcVar6 = *pcVar4;
          }
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      pcVar4 = pcVar4 + (*(int *)(iVar2 + 0x14) - param_2);
      pcVar6 = pcVar6 + (*(int *)(iVar1 + 0x14) - param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



uint FUN_0100496c(uint param_1)

{
  if ((param_1 & 3) != 0) {
    param_1 = (param_1 - (param_1 & 3)) + 4;
  }
  return param_1;
}



undefined4 FUN_01004989(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0100496c(param_2);
  param_1[2] = (short)uVar1;
  piVar2 = FUN_010054c2((int)(short)uVar1 * param_3 * 2);
  *(int **)(param_1 + 3) = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int **)(param_1 + 5) = piVar2;
    *param_1 = (short)param_2;
    param_1[1] = (short)param_3;
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_010049d6(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)((int)param_1 + 6) != 0) {
      FUN_01005541(*(int *)((int)param_1 + 6));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_01004a08(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + 6) +
                   ((((int)*(short *)(param_1 + 2) - param_3) - param_5) *
                    (int)*(short *)(param_1 + 4) + param_4) * 2);
  if (0 < param_3) {
    param_1 = param_3;
    do {
      if (0 < (int)param_2) {
        uVar2 = param_2 >> 1;
        puVar4 = puVar3;
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          *puVar4 = param_6 & 0xffff | param_6 << 0x10;
          puVar4 = puVar4 + 1;
        }
        uVar2 = (uint)((param_2 & 1) != 0);
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          *(short *)puVar4 = (short)(param_6 & 0xffff);
          puVar4 = (uint *)((int)puVar4 + 2);
        }
        puVar3 = (uint *)((int)puVar3 + param_2 * 2);
      }
      param_1 = param_1 + -1;
      puVar3 = (uint *)((int)puVar3 + ((int)*(short *)(iVar1 + 4) - param_2) * 2);
    } while (param_1 != 0);
  }
  return;
}



void FUN_01004a76(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,undefined *param_10,undefined *param_11,
                 int param_12,int param_13,int param_14)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = *(int *)(param_3 + 0x10);
  iVar1 = *(int *)(param_9 + 0x10);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  param_11 = param_10 +
             ((iVar1 - param_2) - (int)param_11) * *(int *)(param_9 + 0x14) + *(int *)(param_9 + 8);
  param_10 = (undefined *)
             (((iVar3 - param_2) - param_5) * *(int *)(param_3 + 0x14) + *(int *)(param_3 + 8) +
             param_4);
  puVar4 = (ushort *)
           (*(int *)(param_12 + 6) +
           ((((int)*(short *)(param_12 + 2) - param_2) - param_14) * (int)*(short *)(param_12 + 4) +
           param_13) * 2);
  puVar2 = (ushort *)
           (*(int *)(param_6 + 6) +
           ((((int)*(short *)(param_6 + 2) - param_2) - param_8) * (int)*(short *)(param_6 + 4) +
           param_7) * 2);
  if (param_2 != 0) {
    param_5 = param_2;
    do {
      if (param_1 != 0) {
        param_2 = param_1;
        do {
          if (*puVar4 <= *puVar2) {
            *param_10 = *param_11;
            *puVar2 = *puVar4;
          }
          param_11 = param_11 + 1;
          param_10 = param_10 + 1;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      param_11 = param_11 + (*(int *)(param_9 + 0x14) - param_1);
      param_10 = param_10 + (*(int *)(param_3 + 0x14) - param_1);
      puVar4 = puVar4 + ((int)*(short *)(param_12 + 4) - param_1);
      param_5 = param_5 + -1;
      puVar2 = puVar2 + ((int)*(short *)(param_6 + 4) - param_1);
    } while (param_5 != 0);
  }
  return;
}



void FUN_01004b75(int param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,char *param_9,int param_10,int param_11,ushort param_12)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  pcVar4 = param_9;
  pcVar3 = param_3;
  iVar7 = *(int *)(param_3 + 0x10);
  iVar5 = *(int *)(param_9 + 0x10);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  iVar5 = (iVar5 - param_2) - param_11;
  piVar1 = (int *)(param_9 + 0x14);
  piVar2 = (int *)(param_9 + 8);
  param_9 = (char *)(((iVar7 - param_2) - param_5) * *(int *)(param_3 + 0x14) +
                     *(int *)(param_3 + 8) + param_4);
  puVar6 = (ushort *)
           (*(int *)(param_6 + 6) +
           ((((int)*(short *)(param_6 + 2) - param_2) - param_8) * (int)*(short *)(param_6 + 4) +
           param_7) * 2);
  if (0 < param_2) {
    param_11 = param_2;
    param_3 = (char *)(iVar5 * *piVar1 + *piVar2 + param_10);
    do {
      if (0 < param_1) {
        param_2 = param_1;
        do {
          if ((*param_3 != '\0') && (param_12 < *puVar6)) {
            *param_9 = *param_3;
          }
          param_3 = param_3 + 1;
          param_9 = param_9 + 1;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      param_3 = param_3 + (*(int *)(pcVar4 + 0x14) - param_1);
      param_9 = param_9 + (*(int *)(pcVar3 + 0x14) - param_1);
      param_11 = param_11 + -1;
      puVar6 = puVar6 + ((int)*(short *)(param_6 + 4) - param_1);
    } while (param_11 != 0);
  }
  return;
}



void FUN_01004c3c(undefined *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  do {
    *(undefined4 *)(param_1 + 0x20) = 0xfffffc19;
    *param_1 = 0;
    param_1 = param_1 + 0x24;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



int FUN_01004c60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_2) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x20);
    do {
      if (*piVar2 < param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar1 < 5);
  }
  return -1;
}



int FUN_01004c8d(int param_1,undefined4 param_2,LPCSTR param_3,int param_4)

{
  LPSTR lpString1;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (-1 < param_4) {
    if (param_4 < 5) {
      iVar1 = 5 - param_4;
      puVar4 = (undefined4 *)(param_1 + 0x90);
      do {
        iVar1 = iVar1 + -1;
        iVar2 = 9;
        puVar3 = puVar4 + -9;
        puVar5 = puVar4;
        while (iVar2 != 0) {
          iVar2 = iVar2 + -1;
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = puVar4 + -9;
      } while (iVar1 != 0);
    }
    lpString1 = (LPSTR)(param_1 + param_4 * 0x24);
    *(undefined4 *)(lpString1 + 0x20) = param_2;
    iVar1 = lstrlenA(param_3);
    if (0x1e < iVar1) {
      param_3[0x1f] = '\0';
    }
    lstrcpyA(lpString1,param_3);
    lpString1[0x1f] = '\0';
  }
  return param_4;
}



void FUN_01004cf9(long param_1,char *param_2)

{
  _ltoa(param_1,param_2,10);
  return;
}



void FUN_01004d18(LPSTR param_1)

{
  int *lpString2;
  int *lpString2_00;
  LPSTR pCVar1;
  long lVar2;
  int iVar3;
  int local_2c;
  int local_28;
  LPSTR local_24;
  char local_1c [20];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_28 = 0;
  FUN_01004c3c(param_1);
  lpString2 = FUN_010054c2(300);
  if (lpString2 != (int *)0x0) {
    lpString2_00 = FUN_010054c2(300);
    pCVar1 = FUN_01003752(0xa6);
    local_2c = 0;
    local_24 = param_1;
    do {
      _itoa(local_2c,local_1c,10);
      lstrcatA(local_1c,".Name");
      FUN_01003601(pCVar1,local_1c,(LPBYTE)lpString2,(HKEY)&DAT_010013da,(HKEY)0x20);
      *(undefined *)(lpString2 + 8) = 0;
      lstrcpyA(local_24,(LPCSTR)lpString2);
      _itoa(local_2c,local_1c,10);
      lstrcatA(local_1c,".Score");
      FUN_01003601(pCVar1,local_1c,(LPBYTE)lpString2,(HKEY)&DAT_010013da,(HKEY)0x12c);
      lVar2 = atol((char *)lpString2);
      *(long *)(local_24 + 0x20) = lVar2;
      iVar3 = lstrlenA(local_24);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        local_28 = local_28 + (int)local_24[iVar3];
      }
      local_28 = local_28 + *(int *)(local_24 + 0x20);
      local_2c = local_2c + 1;
      local_24 = local_24 + 0x24;
    } while (local_2c < 5);
    FUN_01004cf9(local_28,(char *)lpString2);
    FUN_01003601(pCVar1,"Verification",(LPBYTE)lpString2_00,(HKEY)&DAT_010013da,(HKEY)0x12c);
    iVar3 = lstrcmpA((LPCSTR)lpString2,(LPCSTR)lpString2_00);
    if (iVar3 != 0) {
      FUN_01004c3c(param_1);
    }
    FUN_01005541((int)lpString2);
    FUN_01005541((int)lpString2_00);
  }
  FUN_0101cd9e();
  return;
}



void FUN_01004e87(BYTE *param_1)

{
  int *_Dest;
  HKEY pHVar1;
  int iVar2;
  int local_28;
  int local_24;
  char local_1c [20];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_24 = 0;
  _Dest = FUN_010054c2(300);
  if (_Dest != (int *)0x0) {
    pHVar1 = (HKEY)FUN_01003752(0xa6);
    local_28 = 0;
    do {
      _itoa(local_28,local_1c,10);
      lstrcatA(local_1c,".Name");
      FUN_010036e3(pHVar1,local_1c,param_1);
      _itoa(local_28,local_1c,10);
      lstrcatA(local_1c,".Score");
      _ltoa(*(long *)(param_1 + 0x20),(char *)_Dest,10);
      FUN_010036e3(pHVar1,local_1c,(BYTE *)_Dest);
      iVar2 = lstrlenA((LPCSTR)param_1);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        local_24 = local_24 + (int)(char)param_1[iVar2];
      }
      local_24 = local_24 + *(int *)(param_1 + 0x20);
      local_28 = local_28 + 1;
      param_1 = param_1 + 0x24;
    } while (local_28 < 5);
    FUN_01004cf9(local_24,(char *)_Dest);
    FUN_010036e3(pHVar1,"Verification",(BYTE *)_Dest);
    FUN_01005541((int)_Dest);
  }
  FUN_0101cd9e();
  return;
}



void FUN_01004f99(int param_1,char *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  DWORD local_24;
  DWORD local_20;
  char *local_1c;
  HKEY local_18;
  BYTE local_14 [12];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_1c = param_2;
  if (param_1 == -999) {
    *param_2 = '\0';
  }
  else {
    lstrcpyA((LPSTR)local_14,",");
    LVar1 = RegCreateKeyExA((HKEY)0x80000001,"Control Panel\\International",0,(LPSTR)0x0,0,0xf003f,
                            (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)&local_18,&local_24);
    if (LVar1 == 0) {
      local_20 = 10;
      RegQueryValueExA(local_18,"sThousand",(LPDWORD)0x0,(LPDWORD)0x0,local_14,&local_20);
      RegCloseKey(local_18);
    }
    local_18 = (HKEY)((param_1 % 1000000000) / 1000000);
    iVar2 = (param_1 % 1000000) / 1000;
    iVar3 = param_1 % 1000;
    if (param_1 / 1000000000 < 1) {
      if ((int)local_18 < 1) {
        if (iVar2 < 1) {
          sprintf(local_1c,"%ld",param_1);
        }
        else {
          sprintf(local_1c,"%ld%s%03ld",iVar2,local_14,iVar3);
        }
      }
      else {
        sprintf(local_1c,"%ld%s%03ld%s%03ld",local_18,local_14,iVar2,local_14,iVar3);
      }
    }
    else {
      sprintf(local_1c,"%ld%s%03ld%s%03ld%s%03ld",param_1 / 1000000000,local_14,local_18,local_14,
              iVar2,local_14,iVar3);
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_010050e2(HWND param_1,LPCSTR param_2,int param_3,int param_4)

{
  HWND hWnd;
  char local_2c [36];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_4 < 5) {
    FUN_01004f99(param_3,local_2c);
    if (local_2c[0] != '\0') {
      hWnd = GetDlgItem(param_1,param_4 + 0x191);
      SetWindowTextA(hWnd,param_2);
      hWnd = GetDlgItem(param_1,param_4 + 0x1f5);
      SetWindowTextA(hWnd,local_2c);
    }
  }
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01005159(HWND param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((_DAT_01028270 == 1) && (DAT_01028274 == iVar2)) {
      FUN_010050e2(param_1," ",DAT_01028268,iVar2);
      iVar1 = 1;
    }
    FUN_010050e2(param_1,param_2,*(int *)(param_2 + 0x20),iVar2 + iVar1);
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0x24;
  } while (iVar2 < 5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_010051b5(HWND param_1,int param_2,HWND param_3,int param_4)

{
  LPSTR lpString2;
  int nCmdShow;
  HWND hWnd;
  CHAR *lpCaption;
  UINT uCommand;
  int local_1d8;
  CHAR local_1d0 [200];
  CHAR local_108 [31];
  undefined local_e9;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_2 == 0x10) {
    SendMessageA(param_1,0x111,2,0);
    goto LAB_010053fe;
  }
  if (param_2 == 0x53) {
    uCommand = 0xc;
    param_3 = *(HWND *)(param_4 + 0xc);
  }
  else {
    if (param_2 != 0x7b) {
      if (param_2 == 0x110) {
        FUN_01005159(param_1,DAT_0102826c);
        local_1d8 = 0x259;
        do {
          nCmdShow = 0;
          hWnd = GetDlgItem(param_1,local_1d8);
          ShowWindow(hWnd,nCmdShow);
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < 0x263);
        if (_DAT_01028270 == 1) {
          if (DAT_01028274 == -1) {
            _DAT_01028270 = 0;
            goto LAB_010053fe;
          }
          hWnd = GetDlgItem(param_1,DAT_01028274 + 0x259);
          ShowWindow(hWnd,5);
          EnableWindow(hWnd,1);
          SetFocus(hWnd);
          if (DAT_01028278 != (LPCSTR)0x0) {
            SetWindowTextA(hWnd,DAT_01028278);
            SendMessageA(hWnd,0xb1,0,-1);
          }
          SendMessageA(hWnd,0xc5,0x1f,0);
        }
        else {
          SetFocus(param_1);
        }
        hWnd = GetParent(param_1);
        if (hWnd != (HWND)0x0) {
          FUN_010077c4(hWnd,param_1);
        }
        goto LAB_010053fe;
      }
      if (param_2 != 0x111) goto LAB_010053fe;
      if (param_3 == (HWND)0x1) {
        if (_DAT_01028270 == 1) {
          GetDlgItemTextA(param_1,DAT_01028274 + 0x259,local_108,0x20);
          local_e9 = 0;
          FUN_01004c8d((int)DAT_0102826c,DAT_01028268,local_108,DAT_01028274);
          goto LAB_01005280;
        }
      }
      else {
        if (param_3 != (HWND)0x2) {
          if (param_3 == (HWND)0x70) {
            lpString2 = FUN_01003752(0x29);
            lstrcpyA(local_1d0,lpString2);
            uCommand = 0x101;
            lpCaption = local_1d0;
            lpString2 = FUN_01003752(0x28);
            nCmdShow = MessageBoxA(param_1,lpString2,lpCaption,uCommand);
            if (nCmdShow == 1) {
              FUN_01004c3c(DAT_0102826c);
              EndDialog(param_1,(uint)(_DAT_01028270 != 0));
            }
          }
          goto LAB_010053fe;
        }
LAB_01005280:
        _DAT_01028270 = 0;
      }
      EndDialog(param_1,0);
      goto LAB_010053fe;
    }
    uCommand = 10;
  }
  WinHelpA(param_3,"pinball.hlp",uCommand,(ULONG_PTR)&DAT_01023460);
LAB_010053fe:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01005412(undefined4 param_1)

{
  _DAT_01028270 = 0;
  DAT_01028268 = 0;
  DAT_0102826c = param_1;
  DialogBoxParamA(DAT_01028204,"dlg_highscores",DAT_010281fc,FUN_010051b5,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01005452(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  INT_PTR IVar1;
  
  DAT_01028274 = param_3;
  DAT_01028268 = param_2;
  DAT_0102826c = param_1;
  _DAT_01028270 = 1;
  DAT_01028278 = param_4;
  do {
    IVar1 = DialogBoxParamA(DAT_01028204,"dlg_highscores",DAT_010281fc,FUN_010051b5,0);
  } while (IVar1 != 0);
  return;
}



void FUN_010054ac(undefined4 param_1)

{
  DAT_01024f08 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_010054c2(uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)malloc(param_1 + 4);
  if (param_1 < 0xffdc) {
    if (piVar1 == (int *)0x0) {
LAB_01005502:
      if ((_DAT_01024f04 != 0) && (DAT_01024f08 != (code *)0x0)) {
        (*DAT_01024f08)();
      }
      return (int *)0x0;
    }
    *piVar1 = param_1 << 8;
    DAT_01024f00 = DAT_01024f00 + 4 + param_1;
    *(undefined *)piVar1 = 0x5a;
  }
  else {
    if (piVar1 == (int *)0x0) goto LAB_01005502;
    *piVar1 = param_1 << 8;
    DAT_01024f00 = DAT_01024f00 + 4 + param_1;
    *(undefined *)piVar1 = 0xa5;
  }
  return piVar1 + 1;
}



void FUN_01005541(int param_1)

{
  uint *_Memory;
  
  _Memory = (uint *)(param_1 + -4);
  DAT_01024f00 = DAT_01024f00 + (-4 - (*_Memory >> 8));
  if ((*(char *)_Memory == 'Z') || (*(char *)_Memory == -0x5b)) {
    free(_Memory);
  }
  return;
}


