#include "pinball.exe.h"



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01007a3e(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  HWND hWnd;
  HCURSOR hCursor;
  HKEY pHVar2;
  int iVar3;
  HMENU pHVar4;
  HANDLE hThread;
  uint uVar5;
  int *_Dest;
  UINT uType;
  LPSTR lpCaption;
  LPSTR lpText;
  bool bVar6;
  tagRECT *lpRect;
  undefined *puVar7;
  int *piVar8;
  tagRECT local_68;
  int local_58;
  uint local_54;
  int *local_50;
  HWND local_4c;
  tagPAINTSTRUCT local_48;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_4c = param_1;
  local_54 = param_4;
  if (param_2 == DAT_010281e8) {
    BVar1 = IsIconic(param_1);
    if (BVar1 != 0) {
      ShowWindow(param_1,9);
    }
    SetForegroundWindow(param_1);
    goto LAB_0100826a;
  }
  if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
      if (param_3 == 0) {
        _DAT_01024ff0 = 0;
        FUN_01003e69(0);
        FUN_010056d3(0x193,0);
        DAT_0102822c = 0;
        hThread = GetCurrentThread();
        SetThreadPriority(hThread,0);
        FUN_01006b8a();
        FUN_0100afb9();
      }
      else {
        _DAT_01024ff0 = 1;
        FUN_01006ba1();
        if ((DAT_01028224 != 0) && (_DAT_01024fd8 == 0)) {
          FUN_0100afdc(0);
        }
        _DAT_01024ff4 = 1;
        FUN_010079ed(DAT_01028230);
      }
    }
    else {
      if (param_2 < 9) {
        if (param_2 == 8) {
          _DAT_01024fec = 0;
          FUN_01015892();
          FUN_010156c1();
        }
        else {
          if (param_2 == 1) {
            _DAT_01024f04 = _DAT_01024f04 + 1;
            lpRect = &local_68;
            hWnd = GetDesktopWindow();
            GetWindowRect(hWnd,(LPRECT)lpRect);
            local_58 = local_68.right - local_68.left;
            local_50 = (int *)(local_68.bottom - local_68.top);
            FUN_01015404(&local_58,&local_50);
            hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
            hCursor = SetCursor(hCursor);
            FUN_01004380(DAT_01028204,local_4c);
            puVar7 = (undefined *)0x0;
            pHVar2 = FUN_01003588((LPCSTR)0x0,"Voices",(HKEY)0x8);
            iVar3 = FUN_01006973(DAT_01028204,(int)pHVar2,puVar7);
            if (iVar3 == 0) {
              FUN_010056a9(0xc9,0);
            }
            FUN_01006ba1();
            if ((_DAT_0102556c == 0) && (iVar3 = FUN_0100af1f(local_4c), iVar3 == 0)) {
              FUN_010056a9(0xca,0);
            }
            iVar3 = FUN_01015424();
            if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
              exit(0);
            }
            SetCursor(hCursor);
            pHVar2 = FUN_01003588((LPCSTR)0x0,"Change Display",(HKEY)0x1);
            pHVar4 = GetMenu(local_4c);
            FUN_01003d65(local_58,(int)local_50,DAT_0102822c,local_4c,pHVar4,pHVar2);
            _DAT_01024f04 = _DAT_01024f04 + -1;
          }
          else {
            if (param_2 == 2) goto LAB_01007c12;
            if (param_2 == 3) {
LAB_01007de8:
              _DAT_01024ff4 = 1;
            }
            else {
              if (param_2 == 7) {
                _DAT_01024fec = 1;
                _DAT_01024ff4 = 1;
                FUN_01015892();
                FUN_01003c87();
                thunk_FUN_01013a6a();
              }
            }
          }
        }
      }
      else {
        if (param_2 == 0xf) {
          FUN_0100347c(param_1,(LPPAINTSTRUCT)&local_48);
          FUN_01003f98();
          EndPaint(param_1,(PAINTSTRUCT *)&local_48);
          goto LAB_0100826a;
        }
        if ((param_2 == 0x10) || (param_2 == 0x12)) {
LAB_01007c12:
          FUN_01007949();
          _DAT_01024fdc = 1;
          PostQuitMessage(0);
          FUN_01003e53();
        }
        else {
          if (param_2 == 0x14) goto LAB_0100826a;
        }
      }
    }
  }
  else {
    if (param_2 < 0x120) {
      if (param_2 == 0x11f) {
        if (param_4 == 0) {
          if (_DAT_01024ee4 != 0) {
            FUN_010039c5(0);
          }
          goto LAB_0100826a;
        }
      }
      else {
        if (param_2 < 0x105) {
          if (param_2 == 0x104) {
            _DAT_01024ff4 = 1;
            if (_DAT_01024ee4 != 0) {
              FUN_010039c5(1);
            }
          }
          else {
            if (param_2 == 0x24) {
              FUN_01003ecf(param_4);
            }
            else {
              if (param_2 == 0x7e) {
                iVar3 = FUN_01003c94();
                if (iVar3 != 0) {
                  DAT_0102822c = 0;
                  FUN_010056d3(0x193,0);
                }
              }
              else {
                if (param_2 == 0x100) {
                  if ((param_4 & 0x40000000) == 0) {
                    FUN_01015072(param_3);
                  }
                  if (param_3 == 0x1b) {
                    if (DAT_0102822c != 0) {
                      FUN_010056ff(0x193);
                    }
                    SendMessageA(DAT_010281fc,0x112,0xf020,0);
                  }
                  else {
                    if (param_3 == 0x70) {
                      FUN_0100772d();
                    }
                    else {
                      if (param_3 == 0x71) {
                        FUN_01007976();
                      }
                      else {
                        if (param_3 == 0x72) {
                          FUN_01007918();
                        }
                        else {
                          if (param_3 == 0x73) {
                            FUN_010056ff(0x193);
                          }
                          else {
                            if (param_3 == 0x77) {
                              if (_DAT_01024fd8 == 0) {
                                FUN_01007918();
                              }
                              FUN_01005f45();
                            }
                          }
                        }
                      }
                    }
                  }
                  if (_DAT_01024ff8 != 0) {
                    if (param_3 == 0x48) {
                      _DAT_01024fe4 = 1;
                    }
                    else {
                      if (param_3 == 0x59) {
                        SetWindowTextA(local_4c,"Pinball");
                        _DAT_01024fe0 = (uint)(_DAT_01024fe0 == 0);
                      }
                      else {
                        if (param_3 == 0x70) {
                          FUN_01014bf9(10);
                        }
                        else {
                          if (param_3 == 0x7e) {
                            bVar6 = _DAT_01024fd8 == 0;
                            _DAT_01024fd8 = (uint)bVar6;
                            bVar6 = !bVar6;
                            goto LAB_01007de2;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (param_2 == 0x101) {
                    FUN_010152e4(param_3);
                  }
                }
              }
            }
          }
        }
        else {
          if (param_2 == 0x111) {
            _DAT_01024ff4 = 1;
            if (param_3 < 0x12e) {
              if (param_3 == 0x12d) {
                if (_DAT_01024fd8 == 0) {
                  FUN_01007918();
                }
                FUN_0100772d();
              }
              else {
                if (param_3 < 0x6a) {
                  if (param_3 == 0x69) {
                    PostMessageA(param_1,0x12,0,0);
                  }
                  else {
                    if (param_3 == 0x65) {
                      FUN_01007976();
                    }
                    else {
                      if (param_3 == 0x66) {
                        if (_DAT_01024fd8 == 0) {
                          FUN_01007918();
                        }
                        FUN_0100789a(DAT_01028204,param_1);
                      }
                      else {
                        if (param_3 != 0x67) goto switchD_01007ffe_caseD_197;
                        if (_DAT_01024fd8 == 0) {
                          FUN_01007918();
                        }
                        FUN_010153f4();
                      }
                    }
                  }
                }
                else {
                  if (param_3 != 0x6a) {
                    if (200 < param_3) {
                      if (param_3 < 0xcb) goto switchD_01007ffe_caseD_193;
                      if (param_3 == 0xcc) goto switchD_01007ffe_caseD_196;
                    }
                    goto switchD_01007ffe_caseD_197;
                  }
                  FUN_0101479b();
                }
              }
            }
            else {
              switch(param_3) {
              case 0x191:
                FUN_01007949();
                FUN_010157c3();
                break;
              case 0x192:
                FUN_01007918();
                break;
              case 0x193:
switchD_01007ffe_caseD_193:
                if (_DAT_01024fd8 == 0) {
                  FUN_01007918();
                }
                FUN_010056ff(param_3);
                break;
              case 0x194:
                FUN_01007949();
                FUN_01015802();
                break;
              case 0x195:
                if (_DAT_01024fd8 == 0) {
                  FUN_01007918();
                }
                local_50 = FUN_010054c2(500);
                if (local_50 != (int *)0x0) {
                  _Dest = FUN_010054c2(500);
                  piVar8 = local_50;
                  if (_Dest != (int *)0x0) {
                    FUN_01003601((LPCSTR)0x0,"Shell Exe",(LPBYTE)local_50,(HKEY)&DAT_010013da,
                                 (HKEY)0x1f4);
                    sprintf((char *)_Dest,"%s %s%lX  %s%lX",local_50,"select=",DAT_010281fc,
                            "confirm=",
                            (int)DAT_010281fc * (int)DAT_010281fc * (int)DAT_010281fc *
                            (int)DAT_010281fc * (int)DAT_010281fc * (int)DAT_010281fc *
                            (int)DAT_010281fc);
                    uType = WinExec((LPCSTR)_Dest,5);
                    if ((int)uType < 0x20) {
                      uType = 0x2010;
                      lpCaption = FUN_01003752(0xaa);
                      lpText = FUN_01003752(0xab);
                      MessageBoxA(DAT_010281fc,lpText,lpCaption,uType);
                    }
                    FUN_01005541((int)local_50);
                    piVar8 = _Dest;
                  }
                  FUN_01005541((int)piVar8);
                }
                break;
              case 0x196:
switchD_01007ffe_caseD_196:
                if (_DAT_01024fd8 == 0) {
                  FUN_01007918();
                }
                FUN_01005f45();
                break;
              case 0x198:
              case 0x199:
              case 0x19a:
              case 0x19b:
                FUN_010056ff(param_3);
                FUN_01007976();
              }
switchD_01007ffe_caseD_197:
              if (param_3 == 1) {
                FUN_0100b035();
              }
            }
          }
          else {
            if (param_2 == 0x112) {
              uVar5 = param_3 & 0xfff0;
              if (uVar5 == 0xf010) {
                if (_DAT_01024ee4 != 0) goto LAB_0100826a;
LAB_01007eec:
                FUN_01007949();
              }
              else {
                if (uVar5 == 0xf020) {
                  if (_DAT_01024fd8 == 0) {
                    FUN_01007918();
                  }
                }
                else {
                  if (uVar5 == 0xf120) goto LAB_01007eec;
                  if (uVar5 == 0xf140) {
                    FUN_01003e69(0);
                  }
                }
              }
            }
            else {
              bVar6 = param_2 == 0x116;
LAB_01007de2:
              if (bVar6) goto LAB_01007de8;
            }
          }
        }
      }
    }
    else {
      if (param_2 == 0x201) {
        if (DAT_01025568 == 0) {
LAB_0100820f:
          FUN_01014743(-1);
        }
        else {
          if (_DAT_01024ff8 != 0) {
            _DAT_01024fe8 = 1;
            DAT_010281f4 = SetCursor((HCURSOR)0x0);
            local_54 = FUN_01003ea2(param_4);
            DAT_010281f8 = local_54 & 0xffff;
            DAT_010281ec = local_54 >> 0x10;
            SetCapture(local_4c);
          }
        }
      }
      else {
        if (param_2 == 0x202) {
          if (_DAT_01024fe8 != 0) {
            _DAT_01024fe8 = 0;
            SetCursor(DAT_010281f4);
            ReleaseCapture();
          }
        }
        else {
          if ((param_2 == 0x204) || (param_2 == 0x207)) {
            if (DAT_01025568 == 0) goto LAB_0100820f;
          }
          else {
            if (param_2 == 0x218) {
              if ((param_3 == 4) && (DAT_0102822c != 0)) {
                DAT_0102822c = 0;
                FUN_010056d3(0x193,0);
                FUN_01003be4(DAT_0102822c);
              }
            }
            else {
              if (param_2 == 0x311) {
                InvalidateRect(param_1,(RECT *)0x0,0);
              }
              else {
                if (param_2 == 0x3b9) goto switchD_01007ffe_caseD_197;
              }
            }
          }
        }
      }
    }
  }
  DefWindowProcA(local_4c,param_2,param_3,local_54);
LAB_0100826a:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_010082a9(void)

{
  BOOL BVar1;
  MSG local_20;
  
  if ((_DAT_01024fec == 0) || (_DAT_01024fd8 != 0)) {
    GetMessageA((LPMSG)&local_20,DAT_010281fc,0,0);
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
    if (local_20.message != 0x12) {
      return 1;
    }
  }
  else {
    do {
      BVar1 = PeekMessageA((LPMSG)&local_20,(HWND)0x0,0,0,1);
      if (BVar1 == 0) {
        return 1;
      }
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    } while (local_20.message != 0x12);
  }
  DAT_01028200 = local_20.wParam;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100833a(HINSTANCE param_1,undefined4 param_2,HINSTANCE param_3,int param_4)

{
  LPSTR lpString2;
  HKEY pHVar1;
  UINT UVar2;
  char *pcVar3;
  HWND hWndParent;
  int X;
  void *_Memory;
  undefined *puVar4;
  undefined uVar5;
  undefined uVar6;
  code *pcVar7;
  CHAR *lpWindowName;
  DWORD dwStyle;
  int Y;
  int nWidth;
  int nHeight;
  HWND *ppHVar8;
  LPBYTE pBVar9;
  HMENU hMenu;
  HINSTANCE hInstance;
  HKEY pHVar10;
  BYTE *pBVar11;
  LPCSTR lpWindowName_00;
  LPVOID lpParam;
  HMODULE hInstance_00;
  WNDCLASSA local_140;
  INITCOMMONCONTROLSEX local_118;
  HINSTANCE local_110;
  int *local_10c;
  int local_108;
  HINSTANCE local_104;
  HINSTANCE local_100;
  int local_fc;
  tagPOINT local_f8;
  CHAR local_f0 [200];
  tagMSG local_28;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_110 = param_1;
  local_100 = param_3;
  local_fc = 300;
  local_104 = (HINSTANCE)0x0;
  FUN_010054ac(&LAB_010079a9);
  _DAT_01024f04 = _DAT_01024f04 + 1;
  lpString2 = FUN_01003752(0xa5);
  FUN_010034b6(lpString2);
  pHVar1 = (HKEY)0x1;
  pcVar3 = "Table Version";
  lpString2 = FUN_01003752(0xa6);
  pHVar1 = FUN_01003588(lpString2,pcVar3,pHVar1);
  if ((int)pHVar1 < 2) {
    local_f8.y = (HWND *)FUN_010054c2(500);
    if (local_f8.y != (HWND *)0x0) {
      pcVar3 = "Table Version";
      pHVar1 = (HKEY)FUN_01003752(0xa6);
      FUN_0100367c(pHVar1,pcVar3);
      GetModuleFileNameA(DAT_01028204,(LPSTR)local_f8.y,500);
      pcVar3 = "Table Exe";
      ppHVar8 = local_f8.y;
      pHVar1 = (HKEY)FUN_01003752(0xa6);
      FUN_010036e3(pHVar1,pcVar3,(BYTE *)ppHVar8);
      pBVar11 = (BYTE *)FUN_01003752(0xa9);
      pcVar3 = "Table Name";
      pHVar1 = (HKEY)FUN_01003752(0xa6);
      FUN_010036e3(pHVar1,pcVar3,pBVar11);
      pBVar11 = (BYTE *)FUN_01003752(0xa6);
      FUN_010036e3((HKEY)0x0,"Last Table Played",pBVar11);
      FUN_01005541((int)local_f8.y);
      local_f8.y = (HWND *)FUN_010054c2(500);
      if (local_f8.y != (HWND *)0x0) {
        local_10c = FUN_010054c2(500);
        if (local_10c != (int *)0x0) {
          local_108 = 0;
          while( true ) {
            sprintf((char *)&local_28,"Table%d");
            FUN_01003601((LPCSTR)0x0,(LPCSTR)&local_28,(LPBYTE)local_f8.y,(HKEY)&DAT_010013da,
                         (HKEY)0x1f4);
            if (*(char *)local_f8.y == '\0') break;
            FUN_01003601((LPCSTR)local_f8.y,"Table Name",(LPBYTE)local_10c,(HKEY)&DAT_010013da,
                         (HKEY)0x1f4);
            lpString2 = FUN_01003752(0xa9);
            X = lstrcmpA((LPCSTR)local_10c,lpString2);
            if (X == 0) goto LAB_01008566;
            if ((*(char *)local_10c == '\0') || (local_108 = local_108 + 1, 0x7fbb < local_108))
            break;
          }
          pBVar11 = (BYTE *)FUN_01003752(0xa6);
          FUN_010036e3((HKEY)0x0,(LPCSTR)&local_28,pBVar11);
LAB_01008566:
          FUN_01005541((int)local_10c);
        }
        FUN_01005541((int)local_f8.y);
      }
LAB_0100857c:
      _DAT_01024f04 = _DAT_01024f04 + -1;
      pcVar3 = strstr((char *)local_100,"-quick");
      hInstance = local_110;
      _DAT_0102556c = (uint)(pcVar3 != (char *)0x0);
      pHVar10 = (HKEY)0x12c;
      DAT_01028204 = (HMODULE)local_110;
      pHVar1 = (HKEY)FUN_01003752(0xa8);
      pBVar9 = &DAT_0102543c;
      pcVar3 = "Pinball Data";
      lpString2 = FUN_01003752(0xa6);
      FUN_01003601(lpString2,pcVar3,pBVar9,pHVar1,pHVar10);
      DAT_010281e8 = RegisterWindowMessageA("PinballThemeSwitcherUniqueMsgString");
      lpWindowName_00 = (LPCSTR)0x0;
      lpString2 = FUN_01003752(0xa7);
      hWndParent = FindWindowA(lpString2,lpWindowName_00);
      if (hWndParent == (HWND)0x0) {
        X = FUN_010211d0();
        if (X == 0) {
          local_118.dwSize = 8;
          local_118.dwICC = 0x16fd;
          InitCommonControlsEx(&local_118);
          local_140.style = 0x1008;
          local_140.lpfnWndProc = FUN_01007a3e;
          local_140.cbClsExtra = 0;
          local_140.cbWndExtra = 0;
          local_140.hInstance = hInstance;
          local_140.hIcon = LoadIconA(hInstance,"ICON_1");
          local_140.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
          local_140.hbrBackground = (HBRUSH)0x10;
          local_140.lpszMenuName = "MENU_1";
          local_140.lpszClassName = FUN_01003752(0xa7);
          local_f8.y = FUN_01007308(hInstance,"splash_bitmap","splash_bitmap");
          RegisterClassA(&local_140);
          FUN_010067f3();
          lpString2 = FUN_01003752(0x26);
          lstrcpyA(local_f0,lpString2);
          lpParam = (LPVOID)0x0;
          hMenu = (HMENU)0x0;
          hWndParent = (HWND)0x0;
          nHeight = 0x1e0;
          nWidth = 0x280;
          Y = 0;
          X = 0;
          dwStyle = 0x3ca0000;
          lpWindowName = local_f0;
          lpString2 = FUN_01003752(0xa7);
          DAT_010281fc = CreateWindowExA(0,lpString2,lpWindowName,dwStyle,X,Y,nWidth,nHeight,
                                         hWndParent,hMenu,hInstance,lpParam);
          if (DAT_010281fc != (HWND)0x0) {
            hMenu = GetMenu(DAT_010281fc);
            FUN_01005f69(hMenu);
            FUN_010157e3();
            FUN_01014d3d();
            pcVar3 = strstr((char *)local_100,"-fullscreen");
            if (pcVar3 != (char *)0x0) {
              DAT_0102822c = 1;
              FUN_010056d3(0x193,1);
            }
            ShowWindow(DAT_010281fc,param_4);
            FUN_01003be4(DAT_0102822c);
            UpdateWindow(DAT_010281fc);
            if (local_f8.y != (HWND *)0x0) {
              FUN_010071a5(local_f8.y);
              FUN_010071ed(local_f8.y);
            }
            FUN_010079ed(DAT_01028230);
            pcVar7 = timeGetTime_exref;
            local_f8.y = (HWND *)timeGetTime();
            while ((ppHVar8 = (HWND *)timeGetTime(), local_f8.y <= ppHVar8 &&
                   (dwStyle = timeGetTime(), dwStyle - (int)local_f8.y < 2000))) {
              PeekMessageA((LPMSG)&local_28,DAT_010281fc,0,0,1);
            }
            pcVar3 = strstr((char *)local_100,"-demo");
            if (pcVar3 == (char *)0x0) {
              FUN_010153ae(0);
            }
            else {
              FUN_01015802();
            }
            DAT_010281a0 = timeGetTime();
            do {
              if (local_fc == 0) {
                local_fc = 300;
                if (_DAT_01024fe0 == 0) {
                  local_104 = (HINSTANCE)0x0;
                }
                else {
                  local_110 = (HINSTANCE)(*pcVar7)();
                  if (local_104 != (HINSTANCE)0x0) {
                    local_100 = (HINSTANCE)((int)local_110 - (int)local_104);
                    sprintf(&DAT_01024f88,"Frames/sec = %02.02f");
                    SetWindowTextA(DAT_010281fc,&DAT_01024f88);
                    if (_DAT_01024fe4 != 0) {
                      if (_DAT_010281c8 == 0) {
                        _Memory = malloc(0x400);
                        X = 0;
                        Y = 0;
                        puVar4 = (undefined *)((int)_Memory + 0x29);
                        do {
                          uVar6 = (undefined)Y;
                          if (0xff < X + 10) break;
                          uVar5 = uVar6;
                          if (0xff < Y) {
                            uVar5 = 0xff;
                          }
                          puVar4[1] = uVar5;
                          if (0xff < Y) {
                            uVar6 = (undefined)X;
                          }
                          *puVar4 = uVar6;
                          puVar4[-1] = uVar6;
                          Y = Y + 8;
                          puVar4 = puVar4 + 4;
                          X = X + 1;
                        } while (X < 0x100);
                        FUN_010043b9((int)_Memory);
                        free(_Memory);
                        FUN_0100459a((int **)&DAT_010281c0,(int *)0x190,(int *)0xf);
                        pcVar7 = timeGetTime_exref;
                      }
                      FUN_01004705((BITMAPINFO **)&DAT_010281c0,0,0,0,0,300,10);
                      FUN_010047fa((undefined4 *)&DAT_010281c0,300,10,0,0,0);
                    }
                  }
                  local_104 = local_110;
                }
              }
              FUN_01006bb8();
              X = FUN_010082a9();
              if ((X == 0) || (_DAT_01024fdc != 0)) goto LAB_01008a88;
              if (_DAT_01024fec != 0) {
                if ((_DAT_01024fe8 != 0) &&
                   (DAT_010281f0 = (*pcVar7)(), 1 < (int)(DAT_010281f0 - DAT_010281a0))) {
                  GetCursorPos((LPPOINT)&local_f8);
                  FUN_01014d8e(DAT_010281f8 - local_f8.x,(int)((int)local_f8.y - DAT_010281ec));
                  SetCursorPos(DAT_010281f8,DAT_010281ec);
                }
                if (_DAT_01024fd8 == 0) {
                  DAT_010281f0 = (*pcVar7)();
                  if (_DAT_01024ff4 != 0) {
                    _DAT_01024ff4 = 0;
                    DAT_010281a0 = DAT_010281f0;
                  }
                  if (DAT_010281f0 == DAT_010281a0) {
                    Sleep(8);
                  }
                  else {
                    X = FUN_01014bf9(DAT_010281f0 - DAT_010281a0);
                    if (X != 0) {
                      if (_DAT_010281c8 != 0) {
                        X = (DAT_010281f0 - DAT_010281a0) + 10;
                        uVar6 = (undefined)X;
                        if (0xec < X) {
                          uVar6 = 0xf9;
                        }
                        FUN_010047fa((undefined4 *)&DAT_010281c0,1,10,299 - local_fc,0,uVar6);
                      }
                      local_fc = local_fc + -1;
                      DAT_010281a0 = DAT_010281f0;
                    }
                  }
                }
              }
            } while( true );
          }
          PostQuitMessage(0);
        }
      }
      else {
        SendMessageA(hWndParent,DAT_010281e8,0,0);
      }
      goto LAB_01008ad5;
    }
  }
  else {
    ppHVar8 = (HWND *)FUN_010054c2(500);
    local_f8.y = ppHVar8;
    if (ppHVar8 != (HWND *)0x0) {
      pHVar10 = (HKEY)0x1f4;
      pHVar1 = (HKEY)&DAT_010013da;
      pcVar3 = "Shell Exe";
      local_f8.y = ppHVar8;
      lpString2 = FUN_01003752(0xa6);
      FUN_01003601(lpString2,pcVar3,(LPBYTE)ppHVar8,pHVar1,pHVar10);
      UVar2 = WinExec((LPCSTR)local_f8.y,5);
      FUN_01005541((int)local_f8.y);
      if ((int)UVar2 < 0x20) goto LAB_0100857c;
    }
  }
  FUN_010034e7();
LAB_01008ad5:
  FUN_0101cd9e();
  return;
LAB_01008a88:
  FUN_0100460c((LPCVOID *)&DAT_010281c0);
  FUN_010055f3();
  FUN_0100af8e();
  FUN_0101566e();
  FUN_01006af6();
  FUN_01004508();
  DestroyWindow(DAT_010281fc);
  FUN_010034e7();
  hInstance_00 = DAT_01028204;
  lpString2 = FUN_01003752(0xa7);
  UnregisterClassA(lpString2,(HINSTANCE)hInstance_00);
  goto LAB_01008ad5;
}



ushort FUN_01008ae9(float *param_1)

{
  float fVar1;
  bool in_PF;
  
  fVar1 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1);
  if (in_PF) {
    *param_1 = (1.00000000 / fVar1) * *param_1;
    param_1[1] = (1.00000000 / fVar1) * param_1[1];
  }
  return (ushort)(0.00000000 < fVar1) << 8 | (ushort)(fVar1 == 0.00000000) << 0xe;
}



ushort FUN_01008b34(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool in_PF;
  ushort uVar4;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = fVar1 * param_1[3] + fVar2 * param_1[4];
  uVar4 = (ushort)(fVar3 < 0.00000000) << 8 | (ushort)(fVar3 == 0.00000000) << 0xe;
  if (in_PF) {
    fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
    uVar4 = (ushort)(fVar1 < param_2[3]) << 8 | (ushort)(fVar1 == param_2[3]) << 0xe;
    if (in_PF) {
      fVar1 = fVar3 * fVar3 + (param_2[3] - fVar1);
      uVar4 = (ushort)(fVar1 < 0.00000000) << 8 | (ushort)(fVar1 == 0.00000000) << 0xe;
      if (fVar1 >= 0.00000000) {
        fVar3 = fVar3 - SQRT(fVar1);
        uVar4 = (ushort)(fVar3 < 0.00000000) << 8 | (ushort)(fVar3 == 0.00000000) << 0xe;
        if (fVar3 >= 0.00000000) {
          uVar4 = (ushort)(fVar3 < param_1[6]) << 8 | (ushort)(fVar3 == param_1[6]) << 0xe;
        }
      }
    }
  }
  return uVar4;
}



void FUN_01008beb(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float *extraout_EDX;
  bool in_PF;
  
  pfVar1 = (float *)(param_1 + 0xc);
  *pfVar1 = param_4 - param_2;
  *(float *)(param_1 + 0x10) = param_5 - param_3;
  FUN_01008ae9(pfVar1);
  *extraout_EDX = extraout_EDX[4];
  fVar2 = *pfVar1;
  extraout_EDX[1] = -fVar2;
  extraout_EDX[6] = -(extraout_EDX[4] * param_2) - -fVar2 * param_3;
  if ((!in_PF) &&
     ((ushort)((ushort)(*pfVar1 < -0.00000000) << 8 | (ushort)(*pfVar1 == -0.00000000) << 0xe) == 0)
     ) {
    *pfVar1 = 0.00000000;
    param_2 = param_3;
    param_4 = param_5;
  }
  if (in_PF) {
    extraout_EDX[7] = param_4;
    extraout_EDX[8] = param_2;
  }
  else {
    extraout_EDX[8] = param_4;
    extraout_EDX[7] = param_2;
  }
  return;
}



ushort FUN_01008c8f(float *param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  bool in_PF;
  ushort uVar5;
  
  fVar4 = param_1[3] * *param_2 + param_2[1] * param_1[4];
  uVar5 = (ushort)(fVar4 < 0.00000000) << 8 | (ushort)(fVar4 == 0.00000000) << 0xe;
  if (fVar4 < 0.00000000) {
    fVar4 = -((param_1[1] * param_2[1] + *param_1 * *param_2 + param_2[6]) / fVar4);
    uVar5 = (ushort)(fVar4 < -param_1[7]) << 8 | (ushort)(fVar4 == -param_1[7]) << 0xe;
    if ((in_PF) &&
       (uVar2 = (ushort)(fVar4 < param_1[6]) << 8, uVar3 = (ushort)(fVar4 == param_1[6]) << 0xe,
       uVar5 = uVar2 | uVar3, (uVar2 | uVar3) != 0)) {
      param_2[9] = fVar4 * param_1[3] + *param_1;
      fVar4 = fVar4 * param_1[4] + param_1[1];
      param_2[10] = fVar4;
      if (in_PF) {
        uVar5 = (ushort)(param_2[7] < param_2[9]) << 8 | (ushort)(param_2[7] == param_2[9]) << 0xe;
        if (!in_PF) {
          uVar5 = (ushort)(param_2[9] < param_2[8]) << 8 | (ushort)(param_2[9] == param_2[8]) << 0xe
          ;
        }
      }
      else {
        fVar1 = param_2[7];
        uVar5 = (ushort)(fVar4 < fVar1) << 8 | (ushort)(fVar4 == fVar1) << 0xe;
        if (fVar4 >= fVar1) {
          uVar5 = (ushort)(fVar4 < param_2[8]) << 8 | (ushort)(fVar4 == param_2[8]) << 0xe;
        }
      }
    }
  }
  return uVar5;
}



void FUN_01008d4e(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_3 = fVar1 * *param_1 + fVar2 * param_1[1] + fVar3 * param_1[2] + param_1[3];
  param_3[1] = fVar1 * param_1[4] + fVar2 * param_1[5] + fVar3 * param_1[6] + param_1[7];
  param_3[2] = fVar1 * param_1[8] + fVar2 * param_1[9] + fVar3 * param_1[10] + param_1[0xb];
  return;
}



void FUN_01008db8(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[2] * param_1[1] - param_2[1] * param_1[2];
  param_3[1] = -(*param_1 * param_2[2] - *param_2 * param_1[2]);
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}



uint FUN_01008dff(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  return (uint)param_1 & 0xffff0000 |
         (uint)(ushort)((ushort)(fVar1 < 0.00000000) << 8 | (ushort)(fVar1 == 0.00000000) << 0xe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01008e4b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_01028160;
  do {
    iVar3 = 4;
    puVar1 = puVar2;
    do {
      *puVar1 = *(undefined4 *)(param_1 + -0x1028160 + (int)puVar1);
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1028170);
  _DAT_01028138 = param_4;
  _DAT_0102813c = param_3;
  _DAT_01028140 = param_2;
  _DAT_01028190 = 0;
  _DAT_01028194 = 0;
  _DAT_01028198 = 0;
  _DAT_0102819c = 0x3f800000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01008eba(undefined4 param_1,undefined4 param_2)

{
  _DAT_01028138 = param_2;
  _DAT_0102813c = param_1;
  return;
}



void FUN_01008ed8(float *param_1)

{
  float local_10 [3];
  
  FUN_01008d4e((float *)&DAT_01028160,param_1,local_10);
  FUN_01008dff(local_10);
  return;
}



float10 FUN_01008f03(float *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float local_10 [3];
  
  FUN_01008d4e((float *)&DAT_01028160,param_1,local_10);
  uVar1 = _ftol();
  *param_2 = uVar1;
  uVar1 = _ftol();
  param_2[1] = uVar1;
  return (float10)1.00000000;
}



undefined4 FUN_01008f7a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPCSTR lpText;
  LPCSTR lpCaption;
  
  lpText = (LPCSTR)0x0;
  lpCaption = (LPCSTR)0x0;
  iVar3 = 0;
  if (-1 < DAT_010235f8) {
    iVar2 = 0;
    iVar1 = DAT_010235f8;
    do {
      if (param_1 == iVar1) {
        lpText = *(LPCSTR *)((int)&PTR_s_Bad_Handle_010235fc + iVar2);
      }
      if (param_2 == iVar1) {
        lpCaption = *(LPCSTR *)((int)&PTR_s_Bad_Handle_010235fc + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 8;
      iVar1 = (&DAT_010235f8)[iVar3 * 2];
    } while (-1 < iVar1);
    if (lpText != (LPCSTR)0x0) goto LAB_01008fc3;
  }
  lpText = (&PTR_s_Bad_Handle_010235fc)[iVar3 * 2];
LAB_01008fc3:
  MessageBoxA((HWND)0x0,lpText,lpCaption,0x2000);
  return 0xffffffff;
}



void FUN_01008fe0(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[5] = 0x51a7a358;
  param_1[0xc] = 0;
  *param_1 = 0x3f733333;
  param_1[1] = 0x3f19999a;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0100901f(int param_1)

{
  int iVar1;
  DWORD *lpPathName;
  HFILE hFile;
  LONG LVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  iVar5 = iVar4;
  if (1 < DAT_010236d8) {
    do {
      if (*(int *)(iVar4 * 0x14 + 0x1027c24) == param_1) {
        iVar4 = (int)(short)iVar5 * 0x14;
        if ((*(int *)(iVar4 + 0x1027c28) == 0) && (*(int *)(&DAT_01027c20 + iVar4) == 0)) {
          iVar1 = *(int *)(iVar4 + 0x1027c24);
          *(undefined4 *)(&DAT_01027c2c + iVar4) = 0;
          if ((0 < iVar1) &&
             (((_DAT_0102556c == 0 &&
               (psVar3 = (short *)FUN_01006270(DAT_01027c0c,iVar1,0), psVar3 != (short *)0x0)) &&
              (*psVar3 == 0xca)))) {
            lpPathName = (DWORD *)FUN_01006270(DAT_01027c0c,iVar1,9);
            hFile = _lopen((LPCSTR)lpPathName,0);
            LVar2 = _llseek(hFile,0,2);
            *(float *)(&DAT_01027c2c + iVar4) = (float)LVar2 * 0.00009091;
            _lclose(hFile);
            psVar3 = FUN_01006b38(lpPathName);
            *(short **)(&DAT_01027c20 + iVar4) = psVar3;
          }
        }
        *(int *)(iVar4 + 0x1027c28) = *(int *)(iVar4 + 0x1027c28) + 1;
        return (int)(short)iVar5;
      }
      iVar4 = (int)(short)(iVar5 + 1);
      iVar5 = iVar5 + 1;
    } while (iVar4 < DAT_010236d8);
  }
  FUN_01008f7a(0x19,0x1a);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __fastcall FUN_0100905c(undefined4 param_1,short param_2)

{
  int iVar1;
  LPCSTR lpPathName;
  HFILE hFile;
  LONG LVar2;
  short *psVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar4 = (int)param_2 * 0x14;
  if ((*(int *)(iVar4 + 0x1027c28) == 0) && (*(int *)(&DAT_01027c20 + iVar4) == 0)) {
    iVar1 = *(int *)(iVar4 + 0x1027c24);
    *(undefined4 *)(&DAT_01027c2c + iVar4) = 0;
    *(int *)(unaff_EBP + 8) = iVar1;
    if ((0 < iVar1) && (_DAT_0102556c == 0)) {
      psVar3 = (short *)FUN_01006270(DAT_01027c0c,iVar1,0);
      if ((psVar3 != (short *)0x0) && (*psVar3 == 0xca)) {
        lpPathName = (LPCSTR)FUN_01006270(DAT_01027c0c,*(int *)(unaff_EBP + 8),9);
        *(LPCSTR *)(unaff_EBP + -8) = lpPathName;
        hFile = _lopen(lpPathName,0);
        *(HFILE *)(unaff_EBP + -4) = hFile;
        LVar2 = _llseek(hFile,0,2);
        hFile = *(HFILE *)(unaff_EBP + -4);
        *(LONG *)(unaff_EBP + 8) = LVar2;
        *(float *)(&DAT_01027c2c + iVar4) = (float)*(int *)(unaff_EBP + 8) * 0.00009091;
        _lclose(hFile);
        psVar3 = FUN_01006b38(*(DWORD **)(unaff_EBP + -8));
        *(short **)(&DAT_01027c20 + iVar4) = psVar3;
      }
    }
  }
  *(int *)(iVar4 + 0x1027c28) = *(int *)(iVar4 + 0x1027c28) + 1;
  return (int)param_2;
}



void FUN_0100911d(void)

{
  int iVar1;
  int **ppiVar2;
  
  iVar1 = 1;
  if (1 < DAT_010236d8) {
    ppiVar2 = (int **)&DAT_01027c34;
    do {
      FUN_01006b64(*ppiVar2);
      iVar1 = iVar1 + 1;
      ppiVar2 = ppiVar2 + 5;
    } while (iVar1 < DAT_010236d8);
  }
  iVar1 = *(int *)(iVar1 * 0x14 + 0x1027c30);
  if (iVar1 != 0) {
    FUN_01005541(iVar1);
  }
  DAT_010236d8 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0100916a(short *param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  DAT_01027c0c = param_1;
  if (0 < *param_1) {
    do {
      psVar1 = (short *)FUN_01006270((int)param_1,(int)sVar3,0);
      param_1 = DAT_01027c0c;
      if (((psVar1 != (short *)0x0) && (*psVar1 == 0xca)) &&
         (_DAT_01027c10 = DAT_01027c0c, DAT_010236d8 < 0x41)) {
        iVar2 = DAT_010236d8 * 0x14;
        *(undefined4 *)(&DAT_01027c20 + iVar2) = 0;
        DAT_010236d8 = DAT_010236d8 + 1;
        *(int *)(iVar2 + 0x1027c24) = (int)sVar3;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < *param_1);
  }
  _DAT_01028134 = DAT_010236d8;
  return;
}



void FUN_010091eb(LPCSTR param_1)

{
  FUN_01006369(DAT_01027c0c,param_1);
  return;
}



int FUN_01009207(int param_1)

{
  int iVar1;
  short *psVar2;
  
  if (param_1 < 0) {
    iVar1 = FUN_01008f7a(0,0x11);
  }
  else {
    psVar2 = (short *)FUN_01006270(DAT_01027c0c,param_1,10);
    if ((psVar2 == (short *)0x0) || (*psVar2 != 100)) {
      iVar1 = 1;
    }
    else {
      iVar1 = (int)psVar2[1];
    }
  }
  return iVar1;
}



undefined4 FUN_01009249(int param_1,float *param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  if (param_1 < 0) {
    iVar9 = 0;
  }
  else {
    psVar2 = (short *)FUN_01006270(DAT_01027c0c,param_1,0);
    if (psVar2 == (short *)0x0) {
      iVar9 = 1;
    }
    else {
      if (*psVar2 == 300) {
        pfVar7 = (float *)FUN_01006270(DAT_01027c0c,param_1,0xb);
        if (pfVar7 == (float *)0x0) {
          uVar3 = FUN_01008f7a(0xb,0x15);
          return uVar3;
        }
        uVar4 = FUN_010062fe(DAT_01027c0c,param_1,0xb);
        param_1 = 0;
        sVar6 = (short)(uVar4 >> 2);
        if (0 < sVar6) {
          do {
            pfVar8 = pfVar7 + 1;
            floor((double)*pfVar7);
            sVar1 = _ftol();
            if (sVar1 == 0x12d) {
              *param_2 = *pfVar8;
            }
            else {
              if (sVar1 == 0x12e) {
                param_2[1] = *pfVar8;
              }
              else {
                if (sVar1 != 0x130) {
                  uVar3 = FUN_01008f7a(9,0x15);
                  return uVar3;
                }
                floor((double)*pfVar8);
                sVar1 = _ftol();
                fVar5 = (float)FUN_0100901f((int)sVar1);
                param_2[4] = fVar5;
              }
            }
            pfVar7 = pfVar7 + 2;
            param_1 = param_1 + 2;
          } while ((short)param_1 < sVar6);
        }
        return 0;
      }
      iVar9 = 3;
    }
  }
  uVar3 = FUN_01008f7a(iVar9,0x15);
  return uVar3;
}



undefined4 FUN_01009349(int param_1,float *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  if (param_1 < 0) {
    iVar9 = 0;
LAB_01009381:
    uVar4 = FUN_01008f7a(iVar9,0x14);
    return uVar4;
  }
  psVar3 = (short *)FUN_01006270(DAT_01027c0c,param_1,0);
  if (psVar3 == (short *)0x0) {
    iVar9 = 1;
    goto LAB_01009381;
  }
  if (*psVar3 != 400) {
    iVar9 = 4;
    goto LAB_01009381;
  }
  pfVar7 = (float *)FUN_01006270(DAT_01027c0c,param_1,0xb);
  if (pfVar7 == (float *)0x0) {
    iVar9 = 0xb;
LAB_010093a4:
    uVar4 = FUN_01008f7a(iVar9,0x14);
    return uVar4;
  }
  uVar5 = FUN_010062fe(DAT_01027c0c,param_1,0xb);
  sVar1 = (short)(uVar5 >> 2);
  param_1 = 0;
  if (sVar1 < 1) {
    return 0;
  }
LAB_010093d4:
  pfVar8 = pfVar7 + 1;
  floor((double)*pfVar7);
  sVar2 = _ftol();
  if (sVar2 == 0x191) {
    *param_2 = *pfVar8;
  }
  else {
    if (sVar2 == 0x192) {
      param_2[1] = *pfVar8;
      goto LAB_0100945c;
    }
    if (sVar2 == 0x193) {
      param_2[2] = *pfVar8;
      goto LAB_0100945c;
    }
    if (sVar2 == 0x194) {
      param_2[3] = *pfVar8;
      pfVar8 = pfVar7 + 3;
      param_2[4] = pfVar7[2];
      param_1 = param_1 + 4;
      param_2[5] = *pfVar8;
      goto LAB_01009461;
    }
    if (sVar2 == 0x195) {
      param_2[6] = *pfVar8;
      goto LAB_0100945c;
    }
    if (sVar2 != 0x196) {
      iVar9 = 10;
      goto LAB_010093a4;
    }
    floor((double)*pfVar8);
    sVar2 = _ftol();
    fVar6 = (float)FUN_0100901f((int)sVar2);
    param_2[7] = fVar6;
  }
LAB_0100945c:
  param_1 = param_1 + 2;
LAB_01009461:
  pfVar7 = pfVar8 + 1;
  if (sVar1 <= (short)param_1) {
    return 0;
  }
  goto LAB_010093d4;
}



int FUN_01009486(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = FUN_01009207(param_1);
  if ((short)iVar1 < 1) {
LAB_0100949d:
    iVar1 = 0xc;
  }
  else {
    psVar2 = (short *)FUN_01006270(DAT_01027c0c,param_1,0);
    if (psVar2 != (short *)0x0) {
      if (*psVar2 != 200) {
        iVar1 = 5;
        goto LAB_010094f6;
      }
      if ((int)(short)iVar1 < param_2) goto LAB_0100949d;
      if (param_2 == 0) {
        return param_1;
      }
      psVar2 = (short *)FUN_01006270(DAT_01027c0c,param_1 + param_2,0);
      if (psVar2 != (short *)0x0) {
        if (*psVar2 == 0xc9) {
          return param_1 + param_2;
        }
        iVar1 = 6;
        goto LAB_010094f6;
      }
    }
    iVar1 = 1;
  }
LAB_010094f6:
  iVar1 = FUN_01008f7a(iVar1,0x18);
  return iVar1;
}



undefined4 FUN_0100950a(int param_1,int param_2,float *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  bool in_PF;
  
  FUN_01008fe0(param_3);
  if (param_1 < 0) {
    uVar3 = FUN_01008f7a(0,0x12);
  }
  else {
    iVar4 = FUN_01009486(param_1,param_2);
    if (iVar4 < 0) {
      uVar3 = FUN_01008f7a(0x10,0x12);
    }
    else {
      fVar5 = (float)FUN_01006270(DAT_01027c0c,iVar4,1);
      param_3[0x10] = fVar5;
      fVar5 = (float)FUN_01006270(DAT_01027c0c,iVar4,0xc);
      param_3[0x11] = fVar5;
      if (fVar5 != 0.00000000) {
        *(int *)((int)fVar5 + 6) = (int)fVar5 + 0xe;
        *(undefined4 *)((int)param_3[0x11] + 10) = *(undefined4 *)((int)param_3[0x11] + 6);
      }
      psVar10 = (short *)FUN_01006270(DAT_01027c0c,iVar4,10);
      if (psVar10 != (short *)0x0) {
        uVar6 = FUN_010062fe(DAT_01027c0c,iVar4,10);
        sVar8 = 0;
        sVar2 = (short)(uVar6 >> 1);
        if (0 < sVar2) {
          do {
            sVar1 = *psVar10;
            psVar9 = psVar10 + 1;
            if (sVar1 < 0x197) {
              if (sVar1 == 0x196) {
                fVar5 = (float)FUN_0100901f((int)*psVar9);
                param_3[0xc] = fVar5;
              }
              else {
                if (sVar1 == 100) {
                  if (param_2 != 0) {
                    iVar4 = 7;
                    goto LAB_01009604;
                  }
                }
                else {
                  if (sVar1 == 300) {
                    iVar7 = FUN_01009249((int)*psVar9,param_3);
                    if (iVar7 != 0) {
                      iVar4 = 0xf;
                      goto LAB_01009604;
                    }
                  }
                  else {
                    if (sVar1 == 0x130) {
                      fVar5 = (float)FUN_0100901f((int)*psVar9);
                      param_3[4] = fVar5;
                    }
                    else {
                      if (sVar1 != 400) goto LAB_01009733;
                      iVar7 = FUN_01009349((int)*psVar9,param_3 + 5);
                      if (iVar7 != 0) {
                        iVar4 = 0xe;
                        goto LAB_01009604;
                      }
                    }
                  }
                }
              }
LAB_01009697:
              psVar10 = psVar10 + 2;
              sVar8 = sVar8 + 2;
            }
            else {
              if (sVar1 == 0x25a) {
                *(uint *)(param_3 + 0xd) = (uint)param_3[0xd] | 1 << (*(byte *)psVar9 & 0x1f);
                goto LAB_01009697;
              }
              if (sVar1 == 0x44c) {
                fVar5 = (float)FUN_0100901f((int)*psVar9);
                param_3[0xe] = fVar5;
                goto LAB_01009697;
              }
              if (sVar1 == 0x44d) {
                fVar5 = (float)FUN_0100901f((int)*psVar9);
                param_3[0xf] = fVar5;
                goto LAB_01009697;
              }
              if (sVar1 != 0x5dc) {
LAB_01009733:
                iVar4 = 9;
                goto LAB_01009604;
              }
              psVar10 = psVar10 + 9;
              sVar8 = sVar8 + 9;
            }
          } while (sVar8 < sVar2);
        }
      }
      if (param_3[0xd] == 0.00000000) {
        param_3[0xd] = 0.00000000;
      }
      iVar7 = FUN_01006270(DAT_01027c0c,iVar4,0xb);
      if ((iVar7 != 0) && (!in_PF)) {
        uVar6 = FUN_010062fe(DAT_01027c0c,iVar4,0xb);
        *(int *)(param_3 + 2) = (int)(short)(uVar6 >> 2) / 2 + -2;
        floor((double)*(float *)(iVar7 + 4));
        sVar2 = _ftol();
        if (sVar2 == 0) {
          param_3[2] = 0.00000000;
        }
        else {
          if (sVar2 == 1) {
            param_3[2] = 0.00000000;
          }
          else {
            if ((float)(int)sVar2 != param_3[2]) {
              iVar4 = 8;
LAB_01009604:
              uVar3 = FUN_01008f7a(iVar4,0x12);
              return uVar3;
            }
          }
        }
        *(int *)(param_3 + 3) = iVar7 + 8;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



undefined4 FUN_0100975d(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    FUN_01008f7a(0,0x13);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01006270(DAT_01027c0c,param_1,3);
  }
  return uVar1;
}



float * FUN_0100978e(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  short sVar4;
  
  sVar4 = 0;
  if (param_1 < 0) {
    FUN_01008f7a(0,0x16);
  }
  else {
    iVar2 = FUN_01009486(param_1,param_2);
    if (iVar2 < 0) {
      FUN_01008f7a(0x10,0x16);
    }
    else {
      while (pfVar3 = (float *)FUN_0100631c(DAT_01027c0c,iVar2,0xb,(int)sVar4),
            pfVar3 != (float *)0x0) {
        floor((double)*pfVar3);
        sVar1 = _ftol();
        if ((int)sVar1 == param_3) {
          return pfVar3 + 1;
        }
        sVar4 = sVar4 + 1;
      }
      FUN_01008f7a(0xd,0x16);
    }
  }
  return (float *)0x0;
}



short * FUN_0100981a(int param_1,int param_2,int *param_3)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (param_1 < 0) {
    FUN_01008f7a(0,0x16);
  }
  else {
    while (psVar1 = (short *)FUN_0100631c(DAT_01027c0c,param_1,10,(int)sVar3),
          psVar1 != (short *)0x0) {
      if ((int)*psVar1 == param_2) {
        iVar2 = FUN_010062fe(DAT_01027c0c,param_1,10);
        *param_3 = iVar2 / 2 + -1;
        return psVar1 + 1;
      }
      sVar3 = sVar3 + 1;
    }
    FUN_01008f7a(2,0x17);
    *param_3 = 0;
  }
  return (short *)0x0;
}



float10 FUN_01009895(int param_1)

{
  float10 fVar1;
  
  if (param_1 < 1) {
    fVar1 = (float10)0.00000000;
  }
  else {
    FUN_01006c26(*(int *)(&DAT_01027c20 + param_1 * 0x14),0,7,5,0);
    fVar1 = (float10)*(float *)(&DAT_01027c2c + param_1 * 0x14);
  }
  return fVar1;
}



undefined4 * __thiscall FUN_010098d3(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01012ebe(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)this = param_2;
  return (undefined4 *)this;
}



void __fastcall FUN_010098f7(int *param_1)

{
  uint *puVar1;
  
  puVar1 = FUN_01012ee8((uint *)param_1[1],*param_1);
  *(uint **)(param_1 + 1) = puVar1;
  return;
}



void FUN_01009910(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[8];
  param_2[8] = -iVar1 + 1;
  FUN_010139b6(*param_2,param_2[-iVar1 + 2]);
  iVar1 = FUN_010074b7(param_2[param_2[8] + 5],(int)param_2,(int)FUN_01009910);
  param_2[7] = iVar1;
  return;
}



void FUN_01009950(int *param_1,int param_2)

{
  param_1[8] = param_2;
  FUN_01009910(0,param_1);
  return;
}



void FUN_0100996f(int *param_1,int param_2)

{
  if (param_1[7] != 0) {
    FUN_01007659(param_1[7]);
  }
  param_1[7] = 0;
  if (-1 < param_2) {
    param_1[8] = param_2;
    FUN_010139b6(*param_1,param_1[param_2 + 1]);
  }
  return;
}



void __fastcall FUN_010099a8(int param_1)

{
  if (*(int *)(param_1 + 0x6e) != 0) {
    FUN_01007659(*(int *)(param_1 + 0x6e));
  }
  if (*(int *)(param_1 + 0x72) != 0) {
    FUN_01007659(*(int *)(param_1 + 0x72));
  }
  if (*(int *)(param_1 + 0x52) != 0) {
    FUN_0100996f((int *)(param_1 + 0x2a),-1);
  }
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  FUN_010139b6(*(int *)(param_1 + 0x1a),0);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (*(int *)(param_1 + 0x22) != 0) {
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x22) + 4) + 8);
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



void FUN_01009a2a(undefined4 param_1,undefined **param_2)

{
  if (*(int *)((int)param_2 + 0x52) != 0) {
    FUN_0100996f((int *)((int)param_2 + 0x2a),-1);
  }
  FUN_010139b6(*(int *)((int)param_2 + 0x1a),
               *(int *)((int)param_2 + *(int *)((int)param_2 + 0x4e) * 4 + 0x2e));
  *(undefined4 *)((int)param_2 + 0x56) = 0;
  *(undefined4 *)((int)param_2 + 0x5a) = 0;
  *(undefined4 *)((int)param_2 + 0x52) = 0;
  *(undefined4 *)((int)param_2 + 0x6e) = 0;
  if (*(int *)((int)param_2 + 0x5e) != 0) {
    *(undefined4 *)((int)param_2 + 0x5e) = 0;
    (**(code **)*param_2)(0x14,0);
  }
  if (*(int *)((int)param_2 + 0x12) != 0) {
    FUN_01011ec9(0x3c,param_2);
  }
  return;
}



int __thiscall FUN_01009a8f(int iParm1,float param_1)

{
  int iVar1;
  bool in_PF;
  
  *(undefined4 *)(iParm1 + 0x3e) = *(undefined4 *)(iParm1 + 0x66);
  *(undefined4 *)(iParm1 + 0x42) = *(undefined4 *)(iParm1 + 0x6a);
  iVar1 = *(int *)(iParm1 + 0x6e);
  iVar1._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_01007659(iVar1);
    iVar1._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  }
  *(undefined4 *)(iParm1 + 0x6e) = 0;
  iVar1 = CONCAT22(iVar1._2_2_,
                   (ushort)(param_1 < 0.00000000) << 8 | (ushort)(param_1 == 0.00000000) << 0xe);
  if (in_PF) {
    iVar1 = FUN_010074b7(param_1,iParm1,(int)FUN_01009a2a);
    *(int *)(iParm1 + 0x6e) = iVar1;
  }
  return iVar1;
}



undefined4 __thiscall FUN_01009ae3(void *this,int param_1,float param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int param_1_00;
  undefined4 *puVar4;
  uint param_1_01;
  float param_2_00;
  
  if (0x3fc < param_1) {
    if (param_1 != 0x400) {
      return 0;
    }
    (**(code **)(*(int *)this + 0x14))();
    param_1_00 = 0;
    if (*(int *)(*(int *)((int)this + 0x1e) + 0xd6) < 1) {
      return 0;
    }
    puVar4 = (undefined4 *)((int)this + 0x92);
    do {
      puVar4[-3] = *(undefined4 *)((int)this + 0x52);
      *puVar4 = *(undefined4 *)((int)this + 0x62);
      puVar4[-4] = *(undefined4 *)((int)this + 0x4e);
      puVar4[-5] = *(undefined4 *)((int)this + 6);
      param_1_00 = param_1_00 + 1;
      puVar4 = puVar4 + 6;
    } while (param_1_00 < *(int *)(*(int *)((int)this + 0x1e) + 0xd6));
    return 0;
  }
  switch(param_1) {
  case 0:
    *(undefined4 *)((int)this + 0x4e) = 0;
    if (*(int *)((int)this + 0x52) != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x56) != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x5a) != 0) {
      return 0;
    }
    param_1_00 = *(int *)((int)this + 0x2e);
    goto LAB_01009d06;
  case 1:
    *(undefined4 *)((int)this + 0x4e) = 1;
    if (*(int *)((int)this + 0x52) != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x56) != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x5a) != 0) {
      return 0;
    }
    param_1_00 = *(int *)((int)this + 0x32);
    goto LAB_01009d06;
  case 2:
    goto switchD_01009b0b_caseD_2;
  case 3:
    return *(undefined4 *)((int)this + 0x52);
  case 4:
    FUN_01009a8f();
    if ((*(int *)((int)this + 0x52) == 0) || (*(int *)((int)this + 0x46) == 0)) {
      *(undefined4 *)((int)this + 0x52) = 1;
      *(undefined4 *)((int)this + 0x5a) = 0;
      *(undefined4 *)((int)this + 0x56) = 0;
      *(undefined4 *)((int)this + 0x5e) = 0;
      FUN_01009950((int *)((int)this + 0x2a),*(int *)((int)this + 0x4e));
    }
    break;
  case 5:
    *(float *)((int)this + 0x3e) = param_2 * *(float *)((int)this + 0x66);
    *(float *)((int)this + 0x42) = param_2 * *(float *)((int)this + 0x6a);
    break;
  case 6:
    *(undefined4 *)((int)this + 0x3e) = *(undefined4 *)((int)this + 0x66);
    *(undefined4 *)((int)this + 0x42) = *(undefined4 *)((int)this + 0x6a);
    break;
  case 7:
    if (*(int *)((int)this + 0x52) == 0) {
      FUN_01009950((int *)((int)this + 0x2a),*(int *)((int)this + 0x4e));
    }
    *(undefined4 *)((int)this + 0x52) = 1;
    *(undefined4 *)((int)this + 0x5a) = 0;
    *(undefined4 *)((int)this + 0x5e) = 0;
LAB_01009c26:
    *(undefined4 *)((int)this + 0x56) = 0;
    goto LAB_01009c29;
  case 8:
    if (*(int *)((int)this + 0x56) == 0) {
      if (*(int *)((int)this + 0x52) == 0) {
        FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)((int)this + 0x2e));
      }
      else {
        FUN_0100996f((int *)((int)this + 0x2a),0);
        *(undefined4 *)((int)this + 0x52) = 0;
      }
      *(undefined4 *)((int)this + 0x56) = 1;
      *(undefined4 *)((int)this + 0x5a) = 0;
    }
    goto LAB_01009c29;
  case 9:
    if (*(int *)((int)this + 0x5a) == 0) {
      if (*(int *)((int)this + 0x52) == 0) {
        FUN_010139b6(*(int *)((int)this + 0x1a),*(int *)((int)this + 0x32));
      }
      else {
        FUN_0100996f((int *)((int)this + 0x2a),1);
        *(undefined4 *)((int)this + 0x52) = 0;
      }
      *(undefined4 *)((int)this + 0x5a) = 1;
      goto LAB_01009c26;
    }
LAB_01009c29:
    FUN_01009a8f();
    break;
  case 10:
    break;
  case 0xb:
    floor((double)param_2);
    iVar2 = _ftol();
    *(int *)((int)this + 0x62) = iVar2;
    param_1_00 = *(int *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4);
    if (param_1_00 < iVar2) {
      *(int *)((int)this + 0x62) = param_1_00;
    }
    param_1_00 = 0;
    if (*(int *)((int)this + 0x62) < 0) {
      *(undefined4 *)((int)this + 0x62) = 0;
    }
    *(undefined4 *)((int)this + 0x2e) = 0;
    *(undefined4 *)((int)this + 0x32) =
         *(undefined4 *)
          (*(int *)(*(int *)((int)this + 0x22) + 4) + 8 + *(int *)((int)this + 0x62) * 4);
    if (*(int *)((int)this + 0x52) == 0) {
      if (*(int *)((int)this + 0x56) == 0) {
        if (*(int *)((int)this + 0x5a) == 0) {
          param_1_00 = *(int *)((int)this + 0x4e);
        }
        else {
          param_1_00 = 1;
        }
      }
    }
    else {
      param_1_00 = *(int *)((int)this + 0x4a);
    }
    param_1_00 = *(int *)((int)this + param_1_00 * 4 + 0x2e);
    goto LAB_01009d06;
  case 0xc:
    param_2_00 = *(float *)(*(int *)(*(int *)((int)this + 0x22) + 4) + 4);
    param_2 = (float)(*(int *)((int)this + 0x62) + 1);
    if ((int)param_2_00 < (int)param_2) {
      param_2 = param_2_00;
    }
    goto LAB_01009c53;
  case 0xd:
    param_2 = (float)(*(int *)((int)this + 0x62) + -1);
    if ((int)param_2 < 0) {
      param_2 = 0.00000000;
    }
LAB_01009c53:
    param_2 = (float)(int)param_2;
    param_1_00 = 0xb;
    goto LAB_01009db8;
  case 0xe:
    if (*(int *)((int)this + 0x6e) != 0) {
      FUN_01007659(*(int *)((int)this + 0x6e));
    }
    *(undefined4 *)((int)this + 0x6e) = 0;
    if (*(int *)((int)this + 0x52) != 0) {
      FUN_0100996f((int *)((int)this + 0x2a),-1);
    }
    *(undefined4 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this + 0x56) = 0;
    *(undefined4 *)((int)this + 0x5a) = 0;
    param_1_00 = *(int *)((int)this + *(int *)((int)this + 0x4e) * 4 + 0x2e);
LAB_01009d06:
    FUN_010139b6(*(int *)((int)this + 0x1a),param_1_00);
    break;
  case 0xf:
    *(undefined4 *)((int)this + 0x5e) = 0;
    if (*(int *)((int)this + 0x72) != 0) {
      FUN_01007659(*(int *)((int)this + 0x72));
    }
    *(undefined4 *)((int)this + 0x72) = 0;
    FUN_01009ae3(this,1,0.00000000);
    param_1_00 = 7;
    goto LAB_01009db8;
  case 0x10:
    if (*(int *)((int)this + 0x72) != 0) {
      FUN_01007659(*(int *)((int)this + 0x72));
    }
    *(undefined4 *)((int)this + 0x72) = 0;
    FUN_01009ae3(this,7,param_2);
    *(undefined4 *)((int)this + 0x5e) = 1;
    break;
  case 0x11:
    floor((double)param_2);
    param_1_00 = _ftol();
    param_1_01 = (uint)(param_1_00 != 0);
    param_2_00 = 0.00000000;
    goto LAB_01009d88;
  case 0x12:
    FUN_01009ae3(this,0x11,param_2);
    param_1_01 = 0xe;
    param_2_00 = 0.00000000;
    goto LAB_01009d88;
  case 0x13:
    param_1_00 = 1;
    goto LAB_01009da9;
  case 0x14:
    param_1_00 = 0;
LAB_01009da9:
    FUN_01009ae3(this,param_1_00,0.00000000);
    param_1_00 = 0xe;
    param_2 = 0.00000000;
    goto LAB_01009db8;
  case 0x15:
    param_2_00 = (float)(uint)(*(int *)((int)this + 0x4e) == 0);
    param_1_01 = 0x11;
    goto LAB_01009d88;
  case 0x16:
    param_2_00 = (float)(uint)(*(int *)((int)this + 0x4e) == 0);
    param_1_01 = 0x12;
LAB_01009d88:
    FUN_01009ae3(this,param_1_01,param_2_00);
switchD_01009b0b_caseD_2:
    return *(undefined4 *)((int)this + 0x4e);
  case 0x17:
    floor((double)param_2);
    uVar3 = _ftol();
    *(undefined4 *)((int)this + 6) = uVar3;
    break;
  default:
    pvVar1 = (void *)((int)this + *(int *)(*(int *)((int)this + 0x1e) + 0xda) * 0x18);
    *(undefined4 *)((int)pvVar1 + 0x86) = *(undefined4 *)((int)this + 0x52);
    *(undefined4 *)((int)pvVar1 + 0x92) = *(undefined4 *)((int)this + 0x62);
    *(undefined4 *)((int)pvVar1 + 0x82) = *(undefined4 *)((int)this + 0x4e);
    *(undefined4 *)((int)pvVar1 + 0x7e) = *(undefined4 *)((int)this + 6);
    (**(code **)(*(int *)this + 0x14))();
    floor((double)param_2);
    param_1_00 = _ftol();
    pvVar1 = (void *)((int)this + param_1_00 * 0x18);
    *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)pvVar1 + 0x86);
    *(undefined4 *)((int)this + 0x62) = *(undefined4 *)((int)pvVar1 + 0x92);
    *(undefined4 *)((int)this + 0x4e) = *(undefined4 *)((int)pvVar1 + 0x82);
    *(undefined4 *)((int)this + 6) = *(undefined4 *)((int)pvVar1 + 0x7e);
    if (*(int *)((int)this + 0x62) != 0) {
      FUN_01009ae3(this,0xb,(float)*(int *)((int)this + 0x62));
    }
    if (*(int *)((int)this + 0x4e) != 0) {
      FUN_01009ae3(this,1,0.00000000);
    }
    if (*(int *)((int)this + 0x52) == 0) {
      return 0;
    }
    param_2 = 0.00000000;
    param_1_00 = 4;
LAB_01009db8:
    FUN_01009ae3(this,param_1_00,param_2);
  }
  return 0;
}



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



undefined4 FUN_0101e373(short *param_1,int param_2,byte param_3)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_8;
  
  piVar5 = (int *)0x0;
  local_8 = (int *)0x0;
  psVar1 = FUN_0101cfd0(param_1);
  if (psVar1 == (short *)0x0) {
LAB_0101e3b7:
    uVar4 = 5;
    DAT_01027be0 = psVar1;
  }
  else {
    if ((param_3 & 1) == 0) {
      if ((param_2 < 0) || (0xf < param_2)) {
        DAT_01027be0 = psVar1;
        return 0xb;
      }
      if (*(int *)(psVar1 + param_2 * 2 + 0x7a) == -1) goto LAB_0101e3b7;
      iVar2 = param_2 + 1;
      DAT_01027be0 = psVar1;
      if (param_2 < iVar2) goto LAB_0101e3c2;
    }
    else {
      param_2 = 0;
      iVar2 = 0x10;
LAB_0101e3c2:
      param_1 = (short *)(iVar2 - param_2);
      ppiVar6 = (int **)(psVar1 + param_2 * 2 + 0x7a);
      DAT_01027be0 = psVar1;
      do {
        piVar3 = *ppiVar6;
        if ((piVar3 != (int *)0xffffffff) && (*ppiVar6 = piVar5, piVar3 != piVar5)) {
          local_8 = (int *)0x1;
          do {
            piVar5 = (int *)*piVar3;
            FUN_0101d4d4(piVar3);
            piVar3 = piVar5;
          } while (piVar5 != (int *)0x0);
        }
        ppiVar6 = ppiVar6 + 1;
        param_1 = (short *)((int)param_1 + -1);
      } while (param_1 != (short *)0x0);
      if (((local_8 != piVar5) && ((param_3 & 2) == 0)) && (*(int **)(psVar1 + 8) != piVar5)) {
        uVar4 = FUN_0101d0fc(*(HWAVEOUT *)(psVar1 + 6),*(int *)(psVar1 + 0xd2));
        (**(code **)(psVar1 + 0xd8))(uVar4,piVar5);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



int FUN_0101e434(short *param_1,int param_2,byte param_3)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  
  DAT_01027be0 = FUN_0101cfd0(param_1);
  if (DAT_01027be0 == (short *)0x0) {
    return 5;
  }
  iVar2 = FUN_0101e373(param_1,param_2,param_3 | 2);
  psVar1 = DAT_01027be0;
  if (iVar2 == 0) {
    if ((param_3 & 1) == 0) {
      iVar2 = param_2 + 1;
      if (iVar2 <= param_2) {
        return 0;
      }
    }
    else {
      param_2 = 0;
      iVar2 = 0x10;
    }
    piVar3 = (int *)(DAT_01027be0 + param_2 * 2 + 0x7a);
    iVar2 = iVar2 - param_2;
    do {
      if (*piVar3 != -1) {
        *piVar3 = -1;
        *(int *)(psVar1 + 0x9a) = *(int *)(psVar1 + 0x9a) + -1;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0;
  }
  return iVar2;
}



undefined4 FUN_0101e4a9(int **param_1,int *param_2)

{
  int *pMem;
  int **ppiVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  HGLOBAL hMem;
  int **ppiVar5;
  int **ppiVar6;
  
  pMem = param_2;
  psVar2 = FUN_0101cfd0((short *)param_1);
  if (psVar2 == (short *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar4 = FUN_0101d02c((uint)param_2);
    if (uVar4 == 0) {
      uVar3 = 5;
    }
    else {
      ppiVar5 = (int **)(psVar2 + 0x7a);
      param_2 = (int *)0x10;
      do {
        if ((int **)*ppiVar5 != (int **)0xffffffff) {
          param_1 = (int **)0x0;
          ppiVar1 = (int **)*ppiVar5;
          while (ppiVar6 = ppiVar1, ppiVar6 != (int **)0x0) {
            if (ppiVar6[8] == pMem) {
              if (param_1 == (int **)0x0) {
                ppiVar1 = (int **)*ppiVar6;
                FUN_0101d4d4(*ppiVar5);
                *(int ***)ppiVar5 = ppiVar1;
              }
              else {
                *param_1 = *ppiVar6;
                FUN_0101d4d4(ppiVar6);
                ppiVar1 = (int **)*param_1;
              }
            }
            else {
              ppiVar1 = (int **)*ppiVar6;
              param_1 = ppiVar6;
            }
          }
        }
        ppiVar5 = ppiVar5 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
      if ((LPCVOID)pMem[4] != (LPCVOID)0x0) {
        hMem = GlobalHandle((LPCVOID)pMem[4]);
        GlobalUnlock(hMem);
        hMem = GlobalHandle((LPCVOID)pMem[4]);
        GlobalFree(hMem);
      }
      *(undefined2 *)(pMem + 0x10) = 0;
      hMem = GlobalHandle(pMem);
      GlobalUnlock(hMem);
      hMem = GlobalHandle(pMem);
      GlobalFree(hMem);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short * FUN_0101e579(short *param_1,ushort param_2,ushort param_3,uint *param_4)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  short *psVar4;
  
  if (param_2 != param_3) {
    if (((param_2 == 8) || (param_2 == 0x10)) && ((param_3 == 8 || (param_3 == 0x10)))) {
      uVar3 = *param_4 / (uint)(param_2 >> 3);
      dwBytes = (uint)(param_3 >> 3) * uVar3;
      *param_4 = dwBytes;
      hMem = GlobalAlloc(0x2002,dwBytes);
      psVar4 = (short *)GlobalLock(hMem);
      if (psVar4 == (short *)0x0) {
        if (_DAT_01027be4 != 0) {
          MessageBoxA((HWND)0x0,
                                            
                      "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                      ,"WavMix32",0x40);
        }
        psVar4 = (short *)0x0;
      }
      else {
        psVar1 = param_1;
        psVar2 = psVar4;
        if (param_3 >> 3 < param_2 >> 3) {
          while (uVar3 != 0) {
            *(char *)psVar2 = (char)((int)*psVar1 / 0x100) + -0x80;
            uVar3 = uVar3 - 1;
            psVar1 = psVar1 + 1;
            psVar2 = (short *)((int)psVar2 + 1);
          }
        }
        else {
          while (uVar3 != 0) {
            *psVar2 = ((short)*(char *)psVar1 + -0x80) * 0x100;
            uVar3 = uVar3 - 1;
            psVar1 = (short *)((int)psVar1 + 1);
            psVar2 = psVar2 + 1;
          }
        }
      }
    }
    else {
      psVar4 = (short *)0x0;
    }
    hMem = GlobalHandle(param_1);
    GlobalUnlock(hMem);
    hMem = GlobalHandle(param_1);
    GlobalFree(hMem);
    param_1 = psVar4;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short * FUN_0101e686(short *param_1,ushort param_2,ushort param_3,ushort param_4,uint *param_5)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  short *psVar4;
  
  if (param_2 != param_3) {
    iVar3 = (int)(((ulonglong)*param_5 / (ulonglong)(uint)param_4) / (ulonglong)param_2);
    dwBytes = (uint)param_3 * (uint)param_4 * iVar3;
    *param_5 = dwBytes;
    hMem = GlobalAlloc(0x2002,dwBytes);
    psVar4 = (short *)GlobalLock(hMem);
    if (psVar4 == (short *)0x0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,
                                        
                    "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                    ,"WavMix32",0x40);
      }
      psVar4 = (short *)0x0;
    }
    else {
      if (param_2 < param_3) {
        psVar1 = param_1;
        psVar2 = psVar4;
        if (param_4 == 1) {
          while (iVar3 != 0) {
            *(undefined *)psVar2 = *(undefined *)psVar1;
            *(undefined *)((int)psVar2 + 1) = *(undefined *)psVar1;
            iVar3 = iVar3 + -1;
            psVar1 = (short *)((int)psVar1 + 1);
            psVar2 = psVar2 + 1;
          }
        }
        else {
          while (iVar3 != 0) {
            *psVar2 = *psVar1;
            psVar2[1] = *psVar1;
            iVar3 = iVar3 + -1;
            psVar1 = psVar1 + 1;
            psVar2 = psVar2 + 2;
          }
        }
      }
      else {
        psVar1 = param_1;
        psVar2 = psVar4;
        if (param_4 == 1) {
          while (iVar3 != 0) {
            *(char *)psVar2 =
                 (char)((int)((uint)*(byte *)((int)psVar1 + 1) + (uint)*(byte *)psVar1) / 2);
            iVar3 = iVar3 + -1;
            psVar1 = psVar1 + 1;
            psVar2 = (short *)((int)psVar2 + 1);
          }
        }
        else {
          while (iVar3 != 0) {
            *psVar2 = (short)(((int)psVar1[1] + (int)*psVar1) / 2);
            iVar3 = iVar3 + -1;
            psVar1 = psVar1 + 2;
            psVar2 = psVar2 + 1;
          }
        }
      }
    }
    hMem = GlobalHandle(param_1);
    GlobalUnlock(hMem);
    hMem = GlobalHandle(param_1);
    GlobalFree(hMem);
    param_1 = psVar4;
  }
  return param_1;
}



void FUN_0101e7b0(undefined2 *param_1,short *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  psVar3 = param_2;
  if (param_4 == 1) {
    iVar5 = param_5;
    if (0 < param_5) {
      do {
        psVar3 = (short *)((int)param_2 + 1);
        iVar2 = 0;
        iVar4 = param_3;
        if (0 < param_3) {
          do {
            bVar1 = *(byte *)param_2;
            param_2 = (short *)((int)param_2 + param_5);
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + -0x80 + (uint)bVar1;
          } while (iVar4 != 0);
        }
        *(char *)param_1 = (char)(iVar2 / param_3) + -0x80;
        param_1 = (undefined2 *)((int)param_1 + 1);
        iVar5 = iVar5 + -1;
        param_2 = psVar3;
      } while (iVar5 != 0);
    }
  }
  else {
    if (0 < param_5) {
      param_2 = (short *)param_5;
      do {
        iVar2 = 0;
        psVar6 = psVar3 + 1;
        iVar5 = param_3;
        if (0 < param_3) {
          do {
            iVar2 = iVar2 + (int)*psVar3;
            psVar3 = psVar3 + param_5;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_2 = (short *)((int)param_2 + -1);
        *param_1 = (short)(iVar2 / param_3);
        psVar3 = psVar6;
      } while (param_2 != (short *)0x0);
    }
  }
  return;
}



void FUN_0101e83a(short *param_1,short *param_2,int param_3,short *param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  
  iVar5 = param_5;
  if (param_4 == (short *)0x1) {
    if (0 < param_5) {
      do {
        bVar4 = *(byte *)param_2;
        bVar1 = *(byte *)((int)param_2 + iVar5);
        psVar8 = (short *)((int)param_1 + 1);
        uVar6 = (uint)bVar4;
        *(byte *)param_1 = bVar4;
        if (1 < param_3) {
          iVar7 = param_3 + -1;
          do {
            param_1 = (short *)((int)param_1 + iVar5);
            bVar4 = bVar4 + (char)((int)((uint)bVar1 - uVar6) / param_3);
            *(byte *)param_1 = bVar4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        param_2 = (short *)((int)param_2 + 1);
        param_5 = param_5 + -1;
        param_1 = psVar8;
      } while (param_5 != 0);
    }
  }
  else {
    param_4 = param_2;
    param_2 = param_1;
    if (0 < param_5) {
      param_1 = (short *)param_5;
      do {
        sVar2 = *param_4;
        psVar8 = param_2 + param_5;
        sVar3 = *psVar8;
        *param_2 = sVar2;
        iVar5 = (int)sVar2;
        if (1 < param_3) {
          iVar7 = param_3 + -1;
          do {
            iVar5 = iVar5 + ((int)sVar3 - (int)sVar2) / param_3;
            *psVar8 = (short)iVar5;
            psVar8 = psVar8 + param_5;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        param_4 = param_4 + 1;
        param_1 = (short *)((int)param_1 + -1);
        param_2 = param_2 + 1;
      } while (param_1 != (short *)0x0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short * FUN_0101e8f5(short *param_1,uint param_2,uint param_3,ushort param_4,ushort param_5,
                    uint *param_6)

{
  short *pMem;
  uint uVar1;
  HGLOBAL hMem;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  
  pMem = param_1;
  if (param_2 != param_3) {
    uVar6 = (uint)param_5 * (uint)param_4;
    uVar1 = *param_6 / uVar6;
    if (param_2 < param_3) {
      param_2 = param_3 / param_2;
      param_3 = 0;
      uVar5 = param_2 * uVar1;
    }
    else {
      param_3 = param_2 / param_3;
      param_2 = 0;
      uVar5 = uVar1 / param_3;
    }
    *param_6 = uVar5 * uVar6;
    hMem = GlobalAlloc(0x2002,uVar5 * uVar6);
    psVar2 = (short *)GlobalLock(hMem);
    if (psVar2 == (short *)0x0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,
                                        
                    "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                    ,"WavMix32",0x40);
      }
      hMem = GlobalHandle(param_1);
      GlobalUnlock(hMem);
      hMem = GlobalHandle(param_1);
      GlobalFree(hMem);
      param_1 = (short *)0x0;
    }
    else {
      if ((int)param_2 < 1) {
        param_2 = uVar5 - 1;
        psVar4 = psVar2;
        if (param_2 != 0) {
          psVar4 = psVar2;
          do {
            FUN_0101e7b0(psVar4,param_1,param_3,(uint)param_4,(uint)param_5);
            param_1 = (short *)((int)param_1 + param_3 * uVar6);
            psVar4 = (short *)((int)psVar4 + uVar6);
            param_2 = param_2 - 1;
          } while (param_2 != 0);
        }
        if (0 < (int)uVar6) {
          do {
            *(undefined *)psVar4 = *(undefined *)param_1;
            psVar4 = (short *)((int)psVar4 + 1);
            param_1 = (short *)((int)param_1 + 1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        param_3 = uVar1 - 1;
        psVar4 = psVar2;
        if (param_3 != 0) {
          psVar4 = psVar2;
          do {
            FUN_0101e83a(psVar4,param_1,param_2,(short *)(uint)param_4,(uint)param_5);
            param_1 = (short *)((int)param_1 + uVar6);
            psVar4 = (short *)((int)psVar4 + param_2 * uVar6);
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        if (0 < (int)param_2) {
          do {
            psVar3 = param_1;
            uVar1 = uVar6;
            if (0 < (int)uVar6) {
              do {
                *(undefined *)psVar4 = *(undefined *)psVar3;
                psVar4 = (short *)((int)psVar4 + 1);
                uVar1 = uVar1 - 1;
                psVar3 = (short *)((int)psVar3 + 1);
              } while (uVar1 != 0);
            }
            param_2 = param_2 - 1;
          } while (param_2 != 0);
        }
      }
      hMem = GlobalHandle(pMem);
      GlobalUnlock(hMem);
      hMem = GlobalHandle(pMem);
      GlobalFree(hMem);
      param_1 = psVar2;
    }
  }
  return param_1;
}



short * FUN_0101ea82(int param_1,int param_2,short *param_3,uint *param_4)

{
  short *psVar1;
  
  if (((*(short *)(param_2 + 2) != *(short *)(param_1 + 2)) ||
      (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) ||
     (*(short *)(param_2 + 0xe) != *(short *)(param_1 + 0xe))) {
    psVar1 = FUN_0101e579(param_3,*(ushort *)(param_2 + 0xe),*(ushort *)(param_1 + 0xe),param_4);
    if ((psVar1 == (short *)0x0) ||
       (psVar1 = FUN_0101e686(psVar1,*(ushort *)(param_2 + 2),*(ushort *)(param_1 + 2),
                              *(ushort *)(param_1 + 0xe) >> 3,param_4), psVar1 == (short *)0x0)) {
      param_3 = (short *)0x0;
    }
    else {
      param_3 = FUN_0101e8f5(psVar1,*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                             *(ushort *)(param_1 + 0xe) >> 3,*(ushort *)(param_1 + 2),param_4);
    }
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short * FUN_0101eb23(short *param_1,DWORD *param_2,HMMIO param_3,uint param_4)

{
  short sVar1;
  MMRESULT MVar2;
  HGLOBAL hMem;
  short *_Dst;
  HRSRC hResInfo;
  LONG LVar3;
  uint uVar4;
  short *pch;
  short *_Src;
  int iVar5;
  DWORD *pDVar6;
  _MMIOINFO *p_Var7;
  char *lpText;
  UINT uType;
  _MMIOINFO local_94;
  _MMCKINFO local_4c;
  HWAVEOUT local_38;
  _MMCKINFO local_34;
  WAVEFORMATEX local_20;
  short *local_c;
  HGLOBAL local_8;
  
  local_8 = (HGLOBAL)0x0;
  local_c = (short *)0x0;
  DAT_01027be0 = FUN_0101cfd0(param_1);
  local_20.wFormatTag = DAT_01027be0[0xbe];
  local_20.nChannels = DAT_01027be0[0xbf];
  local_20.nSamplesPerSec = *(DWORD *)(DAT_01027be0 + 0xc0);
  local_20.nAvgBytesPerSec = *(DWORD *)(DAT_01027be0 + 0xc2);
  local_20.nBlockAlign = DAT_01027be0[0xc4];
  local_20.wBitsPerSample = DAT_01027be0[0xc5];
  local_20.cbSize = 0;
  MVar2 = waveOutOpen((LPHWAVEOUT)&local_38,0xffffffff,(LPCWAVEFORMATEX)&local_20,0,0,1);
  if (MVar2 != 0) {
    if (_DAT_01027be4 != 0) {
      MessageBoxA((HWND)0x0,"The waveform device can\'t play this format.","WavMix32",0x30);
    }
    return (short *)0x0;
  }
  hMem = GlobalAlloc(0x2040,0x42);
  _Dst = (short *)GlobalLock(hMem);
  if (_Dst == (short *)0x0) {
    if (_DAT_01027be4 != 0) {
      MessageBoxA((HWND)0x0,
                                    
                  "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                  ,"WavMix32",0x40);
    }
    return (short *)0x0;
  }
  sVar1 = (short)((uint)param_2 >> 0x10);
  if ((param_4 & 2) == 0) {
    if ((param_4 & 4) == 0) {
      param_3 = mmioOpenA((LPSTR)param_2,(LPMMIOINFO)0x0,0x10000);
      if (param_3 != (HMMIO)0x0) goto LAB_0101ee26;
      if (_DAT_01027be4 == 0) goto LAB_0101ed88;
      wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"Failed to open wave file %s.",param_2)
      ;
      uType = 0x30;
      lpText = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      goto LAB_0101efed;
    }
    iVar5 = 0x12;
    pDVar6 = param_2;
    p_Var7 = &local_94;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      p_Var7->dwFlags = *pDVar6;
      pDVar6 = pDVar6 + 1;
      p_Var7 = (_MMIOINFO *)&p_Var7->fccIOProc;
    }
    param_3 = mmioOpenA((LPSTR)0x0,(LPMMIOINFO)&local_94,0);
    if (param_3 == (HMMIO)0x0) {
      if (_DAT_01027be4 != 0) {
        lpText = 
        "Failed to open memory file, mmioOpen error=%u.\nMay need to make sure memory is read-write"
        ;
LAB_0101ed67:
        wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,lpText,local_94.wErrorRet);
        MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x30);
      }
    }
    else {
LAB_0101ee26:
      local_4c.fccType = 0x45564157;
      MVar2 = mmioDescend(param_3,(LPMMCKINFO)&local_4c,(MMCKINFO *)0x0,0x20);
      if (MVar2 == 0) {
        local_34.ckid = 0x20746d66;
        MVar2 = mmioDescend(param_3,(LPMMCKINFO)&local_34,(MMCKINFO *)&local_4c,0x10);
        if (MVar2 == 0) {
          LVar3 = mmioRead(param_3,(HPSTR)_Dst,0x10);
          if (LVar3 == 0x10) {
            if (*_Dst == 1) {
              mmioAscend(param_3,(LPMMCKINFO)&local_34,0);
              local_34.ckid = 0x61746164;
              MVar2 = mmioDescend(param_3,(LPMMCKINFO)&local_34,(MMCKINFO *)&local_4c,0x10);
              if (MVar2 == 0) {
                param_4 = local_34.cksize;
                if (local_34.cksize == 0) {
                  if (_DAT_01027be4 != 0) {
                    uType = 0x30;
                    lpText = "The data chunk has no data.";
                    goto LAB_0101efed;
                  }
                }
                else {
                  hMem = GlobalAlloc(0x2002,local_34.cksize);
                  pch = (short *)GlobalLock(hMem);
                  if (pch == (short *)0x0) {
                    local_c = pch;
                    if (_DAT_01027be4 != 0) {
                      uType = 0x40;
                      lpText = 
                      "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications."
                      ;
                      local_c = pch;
                      goto LAB_0101efed;
                    }
                  }
                  else {
                    local_c = pch;
                    uVar4 = mmioRead(param_3,(HPSTR)pch,param_4);
                    if (uVar4 == param_4) {
                      pch = FUN_0101ea82((int)(DAT_01027be0 + 0xbe),(int)_Dst,pch,&param_4);
                      if (pch != (short *)0x0) {
                        local_c = pch;
                        mmioClose(param_3,0);
                        if (local_8 != (HGLOBAL)0x0) {
                          FreeResource(local_8);
                        }
                        *(uint *)(_Dst + 10) = param_4;
                        _Src = DAT_01027be0 + 0xbe;
                        *(short **)(_Dst + 8) = pch;
                        *(undefined4 *)(_Dst + 0x10) = 0;
                        *(undefined4 *)(_Dst + 0x12) = 0;
                        *(undefined4 *)(_Dst + 0xe) = 0;
                        _Dst[0x20] = 0x5432;
                        memmove(_Dst,_Src,0x10);
                        if (sVar1 == 0) {
                          wsprintfA((LPSTR)(_Dst + 0x18),"res#%u",(uint)param_2 & 0xffff);
                          return _Dst;
                        }
                        iVar5 = lstrlenA((LPCSTR)param_2);
                        if (iVar5 < 0x10) {
                          iVar5 = 0;
                        }
                        else {
                          iVar5 = iVar5 + -0xf;
                        }
                        lstrcpyA((LPSTR)(_Dst + 0x18),(LPCSTR)(iVar5 + (int)param_2));
                        return _Dst;
                      }
                      local_c = pch;
                      if (_DAT_01027be4 != 0) {
                        uType = 0x30;
                        lpText = "Failed to convert wave format.";
                        local_c = pch;
LAB_0101efed:
                        MessageBoxA((HWND)0x0,lpText,"WavMix32",uType);
                      }
                    }
                    else {
                      if (_DAT_01027be4 != 0) {
                        uType = 0x30;
                        lpText = "Failed to read data chunk.";
                        goto LAB_0101efed;
                      }
                    }
                  }
                }
              }
              else {
                if (_DAT_01027be4 != 0) {
                  uType = 0x30;
                  lpText = "WAVE file has no data chunk.";
                  goto LAB_0101efed;
                }
              }
            }
            else {
              if (_DAT_01027be4 != 0) {
                uType = 0x30;
                lpText = "The file is not a PCM file.";
                goto LAB_0101efed;
              }
            }
          }
          else {
            if (_DAT_01027be4 != 0) {
              uType = 0x30;
              lpText = "Failed to read format chunk.";
              goto LAB_0101efed;
            }
          }
        }
        else {
          if (_DAT_01027be4 != 0) {
            uType = 0x30;
            lpText = "WAVE file is corrupted.";
            goto LAB_0101efed;
          }
        }
      }
      else {
        if (_DAT_01027be4 != 0) {
          uType = 0x30;
          lpText = "This is not a WAVE file.";
          goto LAB_0101efed;
        }
      }
    }
  }
  else {
    hResInfo = FindResourceA((HMODULE)param_3,(LPCSTR)param_2,"WAVE");
    if ((hResInfo == (HRSRC)0x0) ||
       (local_8 = LoadResource((HMODULE)param_3,hResInfo), local_8 == (HGLOBAL)0x0)) {
      if (sVar1 == 0) {
        param_2 = (DWORD *)((uint)param_2 & 0xffff);
        lpText = "Failed to open \'WAVE\' resource %u.";
      }
      else {
        lpText = "Failed to open \'WAVE\' resource \'%s\'.";
      }
      wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,lpText,param_2);
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x30);
      }
      goto LAB_0101ed97;
    }
    iVar5 = 0x12;
    p_Var7 = &local_94;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      p_Var7->dwFlags = 0;
      p_Var7 = (_MMIOINFO *)&p_Var7->fccIOProc;
    }
    local_94.pchBuffer = (HPSTR)LockResource(local_8);
    if (local_94.pchBuffer == (HPSTR)0x0) {
      if (_DAT_01027be4 != 0) {
        MessageBoxA((HWND)0x0,"Failed to lock \'WAVE\' resource","WavMix32",0x30);
      }
      FreeResource(local_8);
      local_8 = (HGLOBAL)0x0;
      goto LAB_0101ed97;
    }
    local_94.cchBuffer = SizeofResource((HMODULE)param_3,hResInfo);
    local_94.fccIOProc = 0x204d454d;
    local_94.adwInfo[0] = 0;
    param_3 = mmioOpenA((LPSTR)0x0,(LPMMIOINFO)&local_94,0);
    if (param_3 != (HMMIO)0x0) goto LAB_0101ee26;
    if (_DAT_01027be4 != 0) {
      lpText = 
      "Failed to open resource, mmioOpen error=%u.\nMay need to make sure resource is marked read-write"
      ;
      goto LAB_0101ed67;
    }
  }
LAB_0101ed88:
  if (param_3 != (HMMIO)0x0) {
    mmioClose(param_3,0);
  }
LAB_0101ed97:
  hMem = GlobalHandle(_Dst);
  GlobalUnlock(hMem);
  hMem = GlobalHandle(_Dst);
  GlobalFree(hMem);
  if (local_c != (short *)0x0) {
    hMem = GlobalHandle(local_c);
    GlobalUnlock(hMem);
    hMem = GlobalHandle(local_c);
    GlobalFree(hMem);
  }
  if (local_8 != (HGLOBAL)0x0) {
    FreeResource(local_8);
  }
  return (short *)0x0;
}



uint FUN_0101f093(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = (uint)(*(ushort *)(param_2 + 0xe) >> 3) * (uint)*(ushort *)(param_2 + 2) *
              *(int *)(param_2 + 4) >> 4;
  }
  uVar1 = 0x158;
  if ((param_1 < 0x158) || (uVar1 = 0x2b11, 0x2b11 < param_1)) {
    param_1 = uVar1;
  }
  return param_1;
}



int FUN_0101f0d4(LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if ((param_1 == (LPCSTR)0x0) || (pCVar2 = param_1, *param_1 == '\0')) {
    iVar1 = 0;
  }
  else {
    do {
      iVar1 = isalnum((int)*pCVar2);
      if ((iVar1 == 0) && (iVar1 = isspace((int)*pCVar2), iVar1 == 0)) break;
      pCVar2 = pCVar2 + 1;
    } while (*pCVar2 != '\0');
    do {
      *pCVar2 = '\0';
      pCVar2 = pCVar2 + -1;
      if (pCVar2 < param_1) break;
      iVar1 = isspace((int)*pCVar2);
    } while (iVar1 != 0);
    iVar1 = lstrlenA(param_1);
  }
  return iVar1;
}



void FUN_0101f13d(void)

{
  UINT UVar1;
  MMRESULT MVar2;
  int iVar3;
  UINT_PTR local_40;
  tagWAVEOUTCAPSA local_3c;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  UVar1 = waveOutGetNumDevs();
  if (UVar1 != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
              "%d waveOut Devices have been detected on your system.",UVar1);
    MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
    local_40 = 0;
    if (0 < (int)UVar1) {
      do {
        MVar2 = waveOutGetDevCapsA(local_40,(LPWAVEOUTCAPSA)&local_3c,0x34);
        if ((MVar2 == 0) && (iVar3 = FUN_0101f0d4(local_3c.szPname), iVar3 != 0)) {
          wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"Device %i: %s\n\tVersion %u.%u",
                    local_40,local_3c.szPname,local_3c.vDriverVersion >> 8 & 0xff,
                    local_3c.vDriverVersion & 0xff);
        }
        else {
          wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
                    "waveOutGetDevCaps failed (err %u) for device %d",1,local_40);
        }
        MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
        local_40 = local_40 + 1;
      } while ((int)local_40 < (int)UVar1);
    }
  }
  FUN_0101cd9e();
  return;
}



char * FUN_0101f20f(void)

{
  DWORD DVar1;
  char *pcVar2;
  
  DVar1 = GetVersion();
  if (DVar1 < 0x80000000) {
    pcVar2 = "WinNT:";
  }
  else {
    DVar1 = GetVersion();
    if ((0x7fffffff < DVar1) && (DVar1 = GetVersion(), 3 < (byte)DVar1)) {
      return "Win95:";
    }
    DVar1 = GetVersion();
    if ((0x7fffffff < DVar1) && (DVar1 = GetVersion(), (byte)DVar1 < 4)) {
      return "Win31:";
    }
    pcVar2 = "OS_X:";
  }
  return pcVar2;
}



void FUN_0101f25c(undefined4 param_1,LPSTR param_2,int param_3)

{
  char *lpString;
  int iVar1;
  LSTATUS LVar2;
  int local_48;
  undefined4 local_44;
  HKEY local_40;
  CHAR local_3c [52];
  undefined4 local_8;
  
  local_44 = 0;
  local_8 = DAT_01024778;
  lpString = FUN_0101f20f();
  iVar1 = lstrlenA(lpString);
  if (iVar1 + 10 <= param_3) {
    wsprintfA(local_3c,"Device%u",param_1);
    LVar2 = RegOpenKeyA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\WaveMix",(PHKEY)&local_40);
    if (LVar2 == 0) {
      lpString = FUN_0101f20f();
      lstrcpyA(param_2,lpString);
      local_48 = param_3 - iVar1;
      LVar2 = RegQueryValueA(local_40,local_3c,param_2 + iVar1,&local_48);
      if ((LVar2 == 0) && (0 < local_48)) {
        local_44 = 1;
      }
      RegCloseKey(local_40);
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_0101f315(HKEY param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  LONG local_18;
  CHAR local_14 [12];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  if (param_1 != (HKEY)0x0) {
    local_18 = 10;
    LVar1 = RegQueryValueA(param_1,param_2,local_14,&local_18);
    if (LVar1 == 0) {
      atol(local_14);
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_0101f36b(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  UINT UVar4;
  LSTATUS LVar5;
  LPWAVEOUTCAPSA pwoc;
  HKEY local_40;
  CHAR local_3c [52];
  undefined4 local_8;
  
  uVar1 = *(uint *)(param_1 + 2);
  local_8 = DAT_01024778;
  if (((uVar1 & 0x400) != 0) && (*(int *)(param_1 + 0x1a) != 0)) {
    if ((char)uVar1 < '\0') {
      UVar4 = waveOutGetNumDevs();
      if (UVar4 <= (uint)*(ushort *)(param_1 + 0x14)) {
        *(undefined2 *)(param_1 + 0x14) = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(DAT_01027be0 + 0x18);
    }
    wsprintfA(local_3c,"WaveMix\\Device%u",(uint)*(ushort *)(param_1 + 0x14));
    LVar5 = RegOpenKeyA(*(HKEY *)(param_1 + 0x1a),local_3c,(PHKEY)&local_40);
    if (LVar5 == 0) {
      if ((uVar1 & 1) == 0) {
        uVar2 = FUN_0101f315(local_40,"Channels");
        *(undefined2 *)(param_1 + 6) = uVar2;
      }
      if ((uVar1 & 2) == 0) {
        uVar2 = FUN_0101f315(local_40,"SamplesPerSec");
        *(undefined2 *)(param_1 + 8) = uVar2;
      }
      if ((uVar1 & 4) == 0) {
        uVar2 = FUN_0101f315(local_40,"WaveBlocks");
        *(undefined2 *)(param_1 + 10) = uVar2;
      }
      if ((uVar1 & 8) == 0) {
        uVar2 = FUN_0101f315(local_40,"WaveBlockLen");
        *(undefined2 *)(param_1 + 0xc) = uVar2;
      }
      *(undefined2 *)(param_1 + 0xe) = 1;
      if ((uVar1 & 0x20) == 0) {
        sVar3 = FUN_0101f315(local_40,"Remix");
        *(ushort *)(param_1 + 0x10) = (ushort)(sVar3 != 2);
      }
      if ((uVar1 & 0x40) == 0) {
        FUN_0101d0a5((uint)*(ushort *)(param_1 + 0x14));
        sVar3 = FUN_0101f315(local_40,"GoodWavePos");
        *(ushort *)(param_1 + 0x12) = (ushort)(sVar3 != 0);
      }
      if ((uVar1 & 0x100) == 0) {
        uVar2 = FUN_0101f315(local_40,"ShowDebugDialogs");
        *(undefined2 *)(param_1 + 0x18) = uVar2;
      }
      if ((uVar1 & 0x200) == 0) {
        FUN_0101d079((uint)*(ushort *)(param_1 + 10));
        uVar2 = FUN_0101f315(local_40,"PauseBlocks");
        *(undefined2 *)(param_1 + 0x16) = uVar2;
      }
      pwoc = (LPWAVEOUTCAPSA)(DAT_01027be0 + 0x7c);
      *(undefined4 *)(param_1 + 2) = 0x3ff;
      waveOutGetDevCapsA((uint)*(ushort *)(param_1 + 0x14),pwoc,0x34);
      RegCloseKey(local_40);
    }
  }
  FUN_0101cd9e();
  return;
}



void FUN_0101f50b(void)

{
  MMRESULT MVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  tagWAVEOUTCAPSA local_3c;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  MVar1 = waveOutGetDevCapsA(*(UINT_PTR *)(DAT_01027be0 + 0x18),(LPWAVEOUTCAPSA)&local_3c,0x34);
  if (MVar1 == 0) {
    iVar2 = FUN_0101f0d4(local_3c.szPname);
    if (iVar2 != 0) goto LAB_0101f54f;
  }
  lstrcpyA(local_3c.szPname,"Unknown Device");
LAB_0101f54f:
  pcVar5 = "cmixit";
  if (*(code **)(DAT_01027be0 + 0x1ac) != FUN_0101d285) {
    pcVar5 = "386 mixit";
  }
  pcVar4 = "TRUE";
  if (*(int *)(DAT_01027be0 + 0x1a4) == 0) {
    pcVar4 = "FALSE";
  }
  pcVar3 = "Reset";
  if (*(code **)(DAT_01027be0 + 0x1b0) != FUN_0101dde8) {
    pcVar3 = "NoReset";
  }
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
                        
            "Using:\t%s.\n\tRemix = %s\n\tGoodGetPos=%s\n\t%d ping pong wave blocks\n\tWave block len = %lu bytes\n\tpfnMixit=%s\n\tSamplesPerSec=%lu,\n\tChannels=%d\n\tPauseBlocks=%d"
            ,local_3c.szPname,pcVar3,pcVar4,*(undefined4 *)(DAT_01027be0 + 400),
            *(undefined4 *)(DAT_01027be0 + 0x18c),pcVar5,*(undefined4 *)(DAT_01027be0 + 0x180),
            (uint)*(ushort *)(DAT_01027be0 + 0x17e),*(undefined4 *)(DAT_01027be0 + 0x194));
  MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
  FUN_0101cd9e();
  return;
}



void FUN_0101f5f1(HWND param_1,undefined4 param_2,int param_3)

{
  HWND hWnd;
  MMRESULT MVar1;
  uint wParam;
  UINT Msg;
  UINT Msg_00;
  WPARAM wParam_00;
  CHAR *lpString;
  LPARAM lParam;
  BOOL bEnable;
  int nMaxCount;
  char *lpString_00;
  UINT_PTR local_148;
  tagWAVEOUTCAPSA local_13c;
  CHAR local_108 [256];
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  GetWindowTextA(param_1,local_108,0x100);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,local_108,2,0x51);
  SetWindowTextA(param_1,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
  SetWindowLongA(param_1,-0x15,param_3);
  lParam = 0;
  wParam = (uint)(1 < *(ushort *)(param_3 + 6));
  Msg = 0xf1;
  hWnd = GetDlgItem(param_1,1000);
  SendMessageA(hWnd,Msg,wParam,lParam);
  lParam = 0;
  wParam = (uint)(*(short *)(param_3 + 0x10) != 0);
  Msg = 0xf1;
  hWnd = GetDlgItem(param_1,0x3e9);
  SendMessageA(hWnd,Msg,wParam,lParam);
  lParam = 0;
  wParam = (uint)(*(short *)(param_3 + 0x12) != 0);
  Msg = 0xf1;
  hWnd = GetDlgItem(param_1,0x3ec);
  SendMessageA(hWnd,Msg,wParam,lParam);
  lParam = 0;
  wParam = (uint)(*(short *)(param_3 + 0xe) != 0);
  Msg = 0xf1;
  hWnd = GetDlgItem(param_1,0x3ed);
  SendMessageA(hWnd,Msg,wParam,lParam);
  lParam = 0;
  wParam = (uint)(*(short *)(param_3 + 0x18) != 0);
  Msg = 0xf1;
  hWnd = GetDlgItem(param_1,0x3f2);
  SendMessageA(hWnd,Msg,wParam,lParam);
  bEnable = 0;
  hWnd = GetDlgItem(param_1,0x3ed);
  EnableWindow(hWnd,bEnable);
  lParam = 0;
  wParam_00 = 2;
  Msg = 0xc5;
  hWnd = GetDlgItem(param_1,0x3eb);
  SendMessageA(hWnd,Msg,wParam_00,lParam);
  lParam = 0;
  wParam_00 = 4;
  Msg = 0xc5;
  hWnd = GetDlgItem(param_1,0x3ef);
  SendMessageA(hWnd,Msg,wParam_00,lParam);
  lParam = 0;
  wParam_00 = 2;
  Msg = 0xc5;
  hWnd = GetDlgItem(param_1,0x3f0);
  SendMessageA(hWnd,Msg,wParam_00,lParam);
  lParam = 0;
  wParam_00 = 2;
  Msg = 0xc5;
  hWnd = GetDlgItem(param_1,0x3f3);
  SendMessageA(hWnd,Msg,wParam_00,lParam);
  nMaxCount = 100;
  lpString = local_108;
  hWnd = GetDlgItem(param_1,0x3f4);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,local_108,2,10);
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f4);
  SetWindowTextA(hWnd,lpString_00);
  nMaxCount = 100;
  lpString = local_108;
  hWnd = GetDlgItem(param_1,0x3f5);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,local_108,0x158,0x2b11);
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f5);
  SetWindowTextA(hWnd,lpString_00);
  nMaxCount = 100;
  lpString = local_108;
  hWnd = GetDlgItem(param_1,0x3f6);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,local_108,0,10);
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f6);
  SetWindowTextA(hWnd,lpString_00);
  nMaxCount = 100;
  lpString = local_108;
  hWnd = GetDlgItem(param_1,0x3f7);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,local_108,0x10);
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f7);
  SetWindowTextA(hWnd,lpString_00);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",(uint)*(ushort *)(param_3 + 10));
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3eb);
  SetWindowTextA(hWnd,lpString_00);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",(uint)*(ushort *)(param_3 + 0xc));
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3ef);
  SetWindowTextA(hWnd,lpString_00);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",(uint)*(ushort *)(param_3 + 8));
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f0);
  SetWindowTextA(hWnd,lpString_00);
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",(uint)*(ushort *)(param_3 + 0x16));
  lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
  hWnd = GetDlgItem(param_1,0x3f3);
  SetWindowTextA(hWnd,lpString_00);
  Msg = waveOutGetNumDevs();
  local_148 = 0;
  if (0 < (int)Msg) {
    do {
      MVar1 = waveOutGetDevCapsA(local_148,(LPWAVEOUTCAPSA)&local_13c,0x34);
      if (MVar1 == 0) {
        wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d: %s",local_148,local_13c.szPname)
        ;
        lpString_00 = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
        wParam_00 = 0;
        Msg_00 = 0x143;
        hWnd = GetDlgItem(param_1,0x3f1);
        SendMessageA(hWnd,Msg_00,wParam_00,(LPARAM)lpString_00);
      }
      else {
        wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
                  "waveOutGetDevCaps failed (err %u) for device %d",MVar1,local_148);
        MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
      }
      local_148 = local_148 + 1;
    } while ((int)local_148 < (int)Msg);
  }
  wParam = (uint)*(ushort *)(param_3 + 0x14);
  lParam = 0;
  Msg = 0x14e;
  hWnd = GetDlgItem(param_1,0x3f1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_0101cd9e();
  return;
}



undefined4 FUN_0101fa63(HWND param_1,int param_2)

{
  undefined2 uVar1;
  LONG LVar2;
  HWND hWnd;
  LRESULT LVar3;
  UINT Msg;
  WPARAM wParam;
  char *lpString;
  LPARAM lParam;
  int nMaxCount;
  int nMaxCount_00;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  if (param_2 == 1) {
    if (LVar2 != 0) {
      lParam = 0;
      wParam = 0;
      Msg = 0xf0;
      hWnd = GetDlgItem(param_1,1000);
      LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
      lParam = 0;
      wParam = 0;
      Msg = 0xf0;
      *(short *)(LVar2 + 6) = (ushort)(LVar3 != 0) + 1;
      hWnd = GetDlgItem(param_1,0x3e9);
      LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
      lParam = 0;
      wParam = 0;
      Msg = 0xf0;
      *(ushort *)(LVar2 + 0x10) = (ushort)(LVar3 != 0);
      hWnd = GetDlgItem(param_1,0x3ec);
      LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
      lParam = 0;
      wParam = 0;
      Msg = 0xf0;
      *(ushort *)(LVar2 + 0x12) = (ushort)(LVar3 != 0);
      hWnd = GetDlgItem(param_1,0x3f2);
      LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
      lParam = 0;
      wParam = 0;
      Msg = 0xf0;
      *(ushort *)(LVar2 + 0x18) = (ushort)(LVar3 != 0);
      hWnd = GetDlgItem(param_1,0x3ed);
      LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
      nMaxCount = 10;
      lpString = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      *(ushort *)(LVar2 + 0xe) = (ushort)(LVar3 != 0);
      hWnd = GetDlgItem(param_1,0x3eb);
      GetWindowTextA(hWnd,lpString,nMaxCount);
      nMaxCount = atoi(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
      nMaxCount_00 = 10;
      lpString = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      *(undefined2 *)(LVar2 + 10) = (short)nMaxCount;
      hWnd = GetDlgItem(param_1,0x3ef);
      GetWindowTextA(hWnd,lpString,nMaxCount_00);
      nMaxCount = atoi(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
      nMaxCount_00 = 10;
      lpString = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      *(undefined2 *)(LVar2 + 0xc) = (short)nMaxCount;
      hWnd = GetDlgItem(param_1,0x3f0);
      GetWindowTextA(hWnd,lpString,nMaxCount_00);
      nMaxCount = atoi(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
      nMaxCount_00 = 10;
      lpString = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      *(undefined2 *)(LVar2 + 8) = (short)nMaxCount;
      hWnd = GetDlgItem(param_1,0x3f3);
      GetWindowTextA(hWnd,lpString,nMaxCount_00);
      nMaxCount = atoi(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
      nMaxCount_00 = 10;
      lpString = s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780;
      *(undefined2 *)(LVar2 + 0x16) = (short)nMaxCount;
      hWnd = GetDlgItem(param_1,0x3f1);
      GetWindowTextA(hWnd,lpString,nMaxCount_00);
      nMaxCount = isdigit((int)s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780[0]);
      if (nMaxCount == 0) {
        uVar1 = 0;
      }
      else {
        nMaxCount = atoi(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780);
        uVar1 = (undefined2)nMaxCount;
      }
      *(undefined2 *)(LVar2 + 0x14) = uVar1;
      EndDialog(param_1,1);
    }
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    EndDialog(param_1,0);
  }
  return 1;
}



undefined4 FUN_0101fc24(HWND param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0x110) {
    uVar1 = FUN_0101f5f1(param_1,param_3,param_4);
  }
  else {
    if (param_2 == 0x111) {
      FUN_0101fa63(param_1,param_3 & 0xffff);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint * FUN_0101fc6d(uint *param_1,uint param_2,undefined2 param_3,undefined2 param_4,
                   undefined2 param_5,undefined2 param_6,undefined4 *param_7)

{
  size_t sVar1;
  HGLOBAL hMem;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  sVar1 = wcslen((wchar_t *)param_7);
  uVar4 = sVar1 * 2 + 0x18;
  *param_1 = uVar4;
  if ((uVar4 & 3) != 0) {
    *param_1 = (uVar4 - (uVar4 & 3)) + 4;
  }
  hMem = GlobalAlloc(0x42,*param_1);
  puVar2 = (uint *)GlobalLock(hMem);
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *puVar2 = param_2 | 0x10000000;
    *(undefined2 *)((int)puVar2 + 10) = param_3;
    *(undefined2 *)(puVar2 + 3) = param_4;
    *(undefined2 *)((int)puVar2 + 0xe) = param_5;
    *(undefined2 *)(puVar2 + 4) = param_6;
    sVar1 = wcslen((wchar_t *)param_7);
    uVar4 = sVar1 * 2 + 2;
    uVar3 = uVar4 >> 2;
    puVar5 = (undefined4 *)((int)puVar2 + 0x16);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *puVar5 = *param_7;
      param_7 = param_7 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar4 = uVar4 & 3;
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *(undefined *)puVar5 = *(undefined *)param_7;
      param_7 = (undefined4 *)((int)param_7 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return puVar2;
}



LPVOID FUN_0101fd0e(uint *param_1,LPVOID param_2,ushort param_3,uint param_4,undefined2 param_5,
                   undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
                   wchar_t *param_10)

{
  uint uVar1;
  size_t sVar2;
  HGLOBAL hMem;
  uint *puVar3;
  uint dwBytes;
  UINT uFlags;
  
  if (param_2 != (LPVOID)0x0) {
    uVar1 = *param_1;
    sVar2 = wcslen(param_10);
    *param_1 = *param_1 + sVar2 * 2 + 0x19;
    dwBytes = *param_1 & 3;
    if (dwBytes != 0) {
      *param_1 = (*param_1 - dwBytes) + 4;
    }
    hMem = GlobalHandle(param_2);
    GlobalUnlock(hMem);
    uFlags = 0x42;
    dwBytes = *param_1;
    hMem = GlobalHandle(param_2);
    hMem = GlobalReAlloc(hMem,dwBytes,uFlags);
    param_2 = GlobalLock(hMem);
    if (param_2 != (LPVOID)0x0) {
      puVar3 = (uint *)(uVar1 + (int)param_2);
      puVar3[1] = 0;
      *puVar3 = param_4 | 0x50000000;
      *(undefined2 *)(puVar3 + 2) = param_6;
      *(undefined2 *)((int)puVar3 + 10) = param_7;
      *(undefined2 *)(puVar3 + 3) = param_8;
      *(undefined2 *)((int)puVar3 + 0xe) = param_9;
      *(undefined2 *)(puVar3 + 4) = param_5;
      *(uint *)((int)puVar3 + 0x12) = (uint)param_3 << 0x10 | 0xffff;
      wcscpy((wchar_t *)((int)puVar3 + 0x16),param_10);
      *(short *)((int)param_2 + 8) = *(short *)((int)param_2 + 8) + 1;
    }
  }
  return param_2;
}



void FUN_0101fde1(void)

{
  uint *puVar1;
  LPVOID pvVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = FUN_0101fc6d(&local_8,0x80c80080,0,0,0xd4,0x84,
                        (undefined4 *)L"WavMix32 Settings (Ver %X.%X Static)");
  pvVar2 = FUN_0101fd0e(&local_8,puVar1,0x80,0x10001,1,0x9b,5,0x32,0xe,L"&Ok");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x80,0x10000,2,0x9b,0x19,0x32,0xe,L"&Cancel");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0x3f4,5,5,0x73,8,L"Number of WaveBlocks (%d-%d):");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0x3f5,5,0x14,0x73,8,L"Size of WaveBlocks (%d-%d):");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0xffff,5,0x23,0x66,8,
                        L"Playback Frequency (11,22,44):");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0xffff,5,0x50,0x39,8,L"Playback Device:");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0x3f6,5,0x32,0x73,8,
                        L"Number of Pause Blocks (%d-%d):");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x82,0,0x3f7,5,0x41,0x3f,8,L"Max Channels = %d");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x81,0x810080,0x3eb,0x7d,5,0x19,0xc,L"-1");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x81,0x810080,0x3ef,0x7d,0x14,0x19,0xc,L"-1");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x81,0x810080,0x3f0,0x7d,0x23,0x19,0xc,L"-1");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x81,0x810080,0x3f3,0x7d,0x32,0x19,0xc,L"-1");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x85,0x210102,0x3f1,0x41,0x50,0x8c,0x3c,L"No Devices");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x80,0x10003,1000,5,0x65,0x28,10,L"Stereo");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x80,0x10003,0x3e9,0x37,0x65,0x3c,10,L"Reset Remix");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x80,0x10003,0x3f2,0x7d,0x65,0x4e,10,L"Show Debug Dialogs");
  pvVar2 = FUN_0101fd0e(&local_8,pvVar2,0x80,0x10003,0x3ed,5,0x75,0x28,10,L"CMixit");
  FUN_0101fd0e(&local_8,pvVar2,0x80,0x10003,0x3ec,0x37,0x75,0x4b,10,L"Good Get Position");
  return;
}



void FUN_01020059(LPCVOID param_1)

{
  HGLOBAL hMem;
  
  if (param_1 != (LPCVOID)0x0) {
    hMem = GlobalHandle(param_1);
    GlobalUnlock(hMem);
    hMem = GlobalHandle(param_1);
    GlobalFree(hMem);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0102008d(short *param_1,int param_2)

{
  uint uVar1;
  short *psVar2;
  undefined4 uVar3;
  
  psVar2 = FUN_0101cfd0(param_1);
  if (psVar2 == (short *)0x0) {
    uVar3 = 5;
    DAT_01027be0 = psVar2;
  }
  else {
    if (param_2 == 0) {
      uVar3 = 0xb;
      DAT_01027be0 = psVar2;
    }
    else {
      uVar1 = *(uint *)(param_2 + 2);
      DAT_01027be0 = psVar2;
      if ((uVar1 & 1) != 0) {
        DAT_01027be0 = psVar2;
        *(short *)(param_2 + 6) = psVar2[0xbf];
      }
      if ((uVar1 & 2) != 0) {
        *(short *)(param_2 + 8) = (short)(*(uint *)(psVar2 + 0xc0) / 0x2b11) * 0xb;
      }
      if ((uVar1 & 4) != 0) {
        *(short *)(param_2 + 10) = psVar2[200];
      }
      if ((uVar1 & 8) != 0) {
        *(short *)(param_2 + 0xc) = psVar2[0xc6];
      }
      if ((uVar1 & 0x10) != 0) {
        *(ushort *)(param_2 + 0xe) = (ushort)(*(code **)(psVar2 + 0xd6) == FUN_0101d285);
      }
      if ((uVar1 & 0x20) != 0) {
        *(ushort *)(param_2 + 0x10) = (ushort)(*(code **)(psVar2 + 0xd8) == FUN_0101dde8);
      }
      if ((uVar1 & 0x40) != 0) {
        *(short *)(param_2 + 0x12) = psVar2[0xd2];
      }
      if ((char)uVar1 < '\0') {
        *(short *)(param_2 + 0x14) = psVar2[0xc];
      }
      if ((uVar1 & 0x100) != 0) {
        *(ushort *)(param_2 + 0x18) = (ushort)(_DAT_01027be4 != 0);
      }
      if ((uVar1 & 0x200) != 0) {
        *(short *)(param_2 + 0x16) = psVar2[0xca];
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0102018c(uint param_1)

{
  if ((param_1 & 0x80) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",*(undefined4 *)(DAT_01027be0 + 0x18)
             );
    WritePrivateProfileStringA
              ("general","WaveOutDevice",s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850)
    ;
  }
  if ((param_1 & 1) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (uint)*(ushort *)(DAT_01027be0 + 0x17e));
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"Channels",s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780
               ,&DAT_01025850);
  }
  if ((param_1 & 2) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (*(uint *)(DAT_01027be0 + 0x180) / 0x2b11) * 0xb & 0xffff);
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"SamplesPerSec",
               s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850);
  }
  if ((param_1 & 4) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",*(undefined4 *)(DAT_01027be0 + 400))
    ;
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"WaveBlocks",
               s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850);
  }
  if ((param_1 & 8) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (uint)*(ushort *)(DAT_01027be0 + 0x18c));
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"WaveBlockLen",
               s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850);
  }
  if ((param_1 & 0x10) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (uint)(*(code **)(DAT_01027be0 + 0x1ac) == FUN_0101d285));
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"CMixit",s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
               &DAT_01025850);
  }
  if ((param_1 & 0x20) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (uint)(*(code **)(DAT_01027be0 + 0x1b0) != FUN_0101dde8) + 1);
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"Remix",s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
               &DAT_01025850);
  }
  if ((param_1 & 0x40) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              (uint)(*(int *)(DAT_01027be0 + 0x1a4) == 0));
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"GoodWavePos",
               s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850);
  }
  if ((param_1 & 0x100) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",(uint)(_DAT_01027be4 != 0));
    WritePrivateProfileStringA
              ("general","ShowDebugDialogs",s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
               &DAT_01025850);
  }
  if ((param_1 & 0x200) != 0) {
    wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"%d",
              *(undefined4 *)(DAT_01027be0 + 0x194));
    WritePrivateProfileStringA
              ((LPCSTR)(DAT_01027be0 + 0x1c),"PauseBlocks",
               s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,&DAT_01025850);
  }
  return;
}



DWORD FUN_010203cd(HMODULE param_1)

{
  DWORD DVar1;
  LPSTR lpString1;
  
  DVar1 = GetModuleFileNameA(param_1,&DAT_01025850,0x104);
  if (DVar1 != 0) {
    lpString1 = &DAT_01025850 + DVar1;
    while (*lpString1 != '\\') {
      lpString1 = lpString1 + -1;
    }
    *lpString1 = '\0';
    lstrcpyA(lpString1,"\\WAVEMIX.INF");
    DVar1 = 1;
  }
  return DVar1;
}



void FUN_01020412(void)

{
  int iVar1;
  undefined *puVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  puVar2 = &DAT_010259f0;
  do {
    iVar1 = -0x80;
    local_8 = local_10;
    do {
      puVar2[iVar1] = (char)(local_8 / 10) + -0x80;
      local_8 = local_8 + local_c;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
    local_c = local_c + 1;
    local_10 = local_10 + -0x80;
    puVar2 = puVar2 + 0x100;
  } while ((int)puVar2 < 0x10263f1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0102046f(HMODULE param_1)

{
  ATOM AVar1;
  undefined4 uVar2;
  DWORD DVar3;
  WNDCLASSA local_2c;
  
  if (_DAT_01027bf4 == 0) {
    DVar3 = FUN_010203cd(param_1);
    if (DVar3 != 0) {
      FUN_01020412();
      _DAT_01027be8 = GetPrivateProfileIntA("general","debug",0,&DAT_01025850);
      DAT_01025968 = FUN_0101d285;
      DAT_010257e0 = param_1;
      local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_2c.hIcon = (HICON)0x0;
      local_2c.lpszMenuName = (LPCSTR)0x0;
      local_2c.lpszClassName = "WavMix32";
      local_2c.hbrBackground = (HBRUSH)GetStockObject(1);
      local_2c.hInstance = DAT_010257e0;
      local_2c.style = 0;
      local_2c.lpfnWndProc = FUN_0101ddad;
      local_2c.cbWndExtra = 0;
      local_2c.cbClsExtra = 0;
      AVar1 = RegisterClassA(&local_2c);
      if (AVar1 != 0) {
        FUN_0101d491();
        _DAT_01027bf4 = 1;
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



MMRESULT FUN_0102053b(short *param_1,int param_2)

{
  uint *puVar1;
  short *psVar2;
  MMRESULT MVar3;
  LPWAVEHDR pwVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  
  psVar2 = FUN_0101cfd0(param_1);
  if (psVar2 == (short *)0x0) {
    DAT_01027be0 = psVar2;
    return 5;
  }
  if (param_2 == 0) {
    DAT_01027be0 = psVar2;
    if (*(int *)(psVar2 + 8) != 0) {
      DAT_01027be0 = psVar2;
      uVar5 = FUN_0101d0fc(*(HWAVEOUT *)(psVar2 + 6),*(int *)(psVar2 + 0xd2));
      psVar2 = DAT_01027be0;
      *(undefined4 *)(DAT_01027be0 + 0xce) = uVar5;
    }
    FUN_0101d752((int)psVar2);
    bVar6 = DAT_01027be0 == DAT_01025798;
    *(undefined4 *)(DAT_01027be0 + 8) = 0;
    if (bVar6) {
      DAT_01025798 = (short *)0x0;
    }
  }
  else {
    if (DAT_01025798 != (short *)0x0) {
      DAT_01027be0 = psVar2;
      return -(uint)(psVar2 != DAT_01025798) & 4;
    }
    if (*(int *)(psVar2 + 10) != 0) {
      DAT_01027be0 = psVar2;
      return 0xc;
    }
    DAT_01025798 = psVar2;
    DAT_01027be0 = psVar2;
    sndPlaySoundA((LPCSTR)0x0,0);
    MVar3 = FUN_0101d7b1();
    if (MVar3 != 0) {
      DAT_01025798 = (short *)0x0;
      return MVar3;
    }
    puVar1 = (uint *)(DAT_01027be0 + 0xce);
    *(undefined4 *)(DAT_01027be0 + 8) = 1;
    FUN_0101d1a2(*puVar1);
    do {
      iVar7 = 1;
      pwVar4 = (LPWAVEHDR)FUN_0101d66b();
      iVar7 = FUN_0101da1d(pwVar4,iVar7);
    } while (iVar7 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_01020615(short *param_1,HWND param_2,undefined2 *param_3,int *param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  short *psVar4;
  undefined2 *puVar5;
  LPCDLGTEMPLATEA hDialogTemplate;
  INT_PTR IVar6;
  MMRESULT MVar7;
  char *lpString2;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  tagWAVEOUTCAPSA *ptVar13;
  undefined4 *puVar14;
  undefined2 local_70;
  uint local_6e;
  ushort local_64;
  int *local_50;
  short *local_4c;
  uint local_48;
  undefined2 *local_44;
  int local_40;
  tagWAVEOUTCAPSA local_3c;
  undefined4 local_8;
  
  local_8 = DAT_01024778;
  local_44 = param_3;
  local_4c = param_1;
  local_50 = param_4;
  local_40 = 0;
  DAT_01027be0 = FUN_0101cfd0(param_1);
  if (((DAT_01027be0 == (short *)0x0) || (*(int *)(DAT_01027be0 + 8) != 0)) ||
     (*(int *)(DAT_01027be0 + 10) != 0)) goto LAB_01020a22;
  FUN_0101e373(param_1,-1,1);
  if (local_44 == (undefined2 *)0x0) {
    local_70 = 0x1e;
    local_6e = 0x3ff;
    FUN_0102008d(param_1,(int)&local_70);
    hDialogTemplate = (LPCDLGTEMPLATEA)FUN_0101fde1();
    if (hDialogTemplate == (LPCDLGTEMPLATEA)0x0) goto LAB_01020a22;
    *(undefined4 *)(DAT_01027be0 + 10) = 1;
    IVar6 = DialogBoxIndirectParamA
                      (DAT_010257e0,hDialogTemplate,param_2,FUN_0101fc24,(LPARAM)&local_70);
    FUN_01020059(hDialogTemplate);
    psVar4 = DAT_01027be0;
    *(undefined4 *)(DAT_01027be0 + 10) = 0;
    if (IVar6 != 1) goto LAB_01020a22;
    if (*(uint *)(psVar4 + 0xc6) == (uint)local_64) {
      local_6e = local_6e & 0xfffffff7;
    }
    local_44 = &local_70;
    param_1 = local_4c;
  }
  if ((*(int *)(local_44 + 1) == 0) ||
     (DAT_01027be0 = FUN_0101cfd0(param_1), DAT_01027be0 == (short *)0x0)) goto LAB_01020a22;
  local_48 = *(uint *)(local_44 + 1);
  if ((local_48 & 0x100) != 0) {
    _DAT_01027be4 = (uint)(local_44[0xc] != 0);
  }
  if (((char)local_48 < '\0') && ((uint)(ushort)local_44[10] != *(uint *)(DAT_01027be0 + 0xc))) {
    MVar7 = waveOutGetDevCapsA((uint)(ushort)local_44[10],(LPWAVEOUTCAPSA)&local_3c,0x34);
    psVar4 = DAT_01027be0;
    if (MVar7 != 0) goto LAB_01020a22;
    iVar10 = 0xd;
    ptVar13 = &local_3c;
    puVar14 = (undefined4 *)(DAT_01027be0 + 0x3e);
    while (iVar10 != 0) {
      iVar10 = iVar10 + -1;
      *puVar14 = *(undefined4 *)ptVar13;
      ptVar13 = (tagWAVEOUTCAPSA *)&ptVar13->vDriverVersion;
      puVar14 = puVar14 + 1;
    }
    *(uint *)(psVar4 + 0xc) = (uint)(ushort)local_44[10];
    if ((psVar4[0x54] == 1) && (psVar4[0xbf] == 2)) {
      psVar4[0xbf] = 1;
      local_40 = 1;
      psVar4[0xc4] = 1;
      *(undefined4 *)(psVar4 + 0xc2) = *(undefined4 *)(psVar4 + 0xc0);
    }
    lstrcpyA((LPSTR)(psVar4 + 0xe),local_3c.szPname);
    iVar10 = FUN_0101f0d4((LPCSTR)(DAT_01027be0 + 0xe));
    if (iVar10 == 0) {
      lstrcpyA((LPSTR)(DAT_01027be0 + 0xe),"Unkown Device");
    }
    iVar10 = FUN_0101f25c(*(undefined4 *)(DAT_01027be0 + 0xc),(LPSTR)(DAT_01027be0 + 0xe),0x60);
    if (iVar10 == 0) {
      lpString2 = FUN_0101f20f();
      lstrcpyA((LPSTR)(DAT_01027be0 + 0xe),lpString2);
      lstrcatA((LPSTR)(DAT_01027be0 + 0xe),(LPCSTR)(DAT_01027be0 + 0x42));
    }
  }
  puVar5 = local_44;
  psVar4 = DAT_01027be0;
  if ((local_48 & 1) != 0) {
    if ((ushort)local_44[3] < 2) {
      if (DAT_01027be0[0xbf] == 2) {
        local_40 = 1;
      }
      DAT_01027be0[0xbf] = 1;
      iVar10 = *(int *)(psVar4 + 0xc0);
      psVar4[0xc4] = 1;
    }
    else {
      if ((ushort)DAT_01027be0[0x54] < 2) goto LAB_0102087f;
      if (DAT_01027be0[0xbf] == 1) {
        local_40 = 1;
      }
      DAT_01027be0[0xbf] = 2;
      psVar4[0xc4] = 2;
      iVar10 = *(int *)(psVar4 + 0xc0) << 1;
    }
    *(int *)(psVar4 + 0xc2) = iVar10;
  }
LAB_0102087f:
  if ((local_48 & 2) != 0) {
    if (local_44[4] == 0x16) {
      if (*(int *)(psVar4 + 0xc0) != 0x5622) {
        local_40 = 1;
      }
      *(int *)(psVar4 + 0xc0) = 0x5622;
      iVar10 = (uint)(ushort)psVar4[0xbf] * 0x5622;
    }
    else {
      piVar1 = (int *)(psVar4 + 0xc0);
      if (local_44[4] == 0x2c) {
        if (*piVar1 != 0xac44) {
          local_40 = 1;
        }
        *piVar1 = 0xac44;
        iVar10 = (uint)(ushort)psVar4[0xbf] * 0xac44;
      }
      else {
        if (*piVar1 != 0x2b11) {
          local_40 = 1;
        }
        *piVar1 = 0x2b11;
        iVar10 = (uint)(ushort)psVar4[0xbf] * 0x2b11;
      }
    }
    *(int *)(psVar4 + 0xc2) = iVar10;
  }
  if ((local_48 & 4) != 0) {
    uVar3 = local_44[5];
    uVar11 = 2;
    *(uint *)(psVar4 + 200) = (uint)uVar3;
    if ((uVar3 < 2) || (uVar11 = 10, 10 < uVar3)) {
      *(undefined4 *)(psVar4 + 200) = uVar11;
    }
    piVar1 = (int *)(psVar4 + 0xca);
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
    else {
      if (*(int *)(psVar4 + 200) < *piVar1) {
        *piVar1 = *(int *)(psVar4 + 200);
      }
    }
  }
  if (local_40 != 0) {
    uVar8 = FUN_0101f093(0,(int)(psVar4 + 0xbe));
    *(uint *)(psVar4 + 0xc6) = uVar8;
  }
  if (((local_48 & 8) != 0) && (puVar5[6] != 0)) {
    *(uint *)(psVar4 + 0xc6) = (uint)(ushort)puVar5[6];
  }
  uVar8 = *(uint *)(psVar4 + 0xc6);
  uVar12 = 0x158;
  if ((uVar8 < 0x158) || (uVar12 = 0x2b11, 0x2b11 < uVar8)) {
    *(uint *)(psVar4 + 0xc6) = uVar12;
  }
  if ((local_48 & 0x10) != 0) {
    *(undefined4 *)(psVar4 + 0xd6) = 0x101d285;
  }
  if ((local_48 & 0x20) != 0) {
    pcVar9 = FUN_0101dde8;
    if (puVar5[8] == 0) {
      pcVar9 = (code *)&LAB_0101ddd8;
    }
    *(code **)(psVar4 + 0xd8) = pcVar9;
  }
  if ((local_48 & 0x40) != 0) {
    *(uint *)(psVar4 + 0xd2) = (uint)(puVar5[9] != 0);
  }
  if ((local_48 & 0x200) != 0) {
    uVar8 = (uint)(ushort)puVar5[0xb];
    puVar2 = (uint *)(psVar4 + 0xca);
    *puVar2 = uVar8;
    if ((int)uVar8 < 0) {
      *puVar2 = 0;
    }
    else {
      if ((int)*(uint *)(psVar4 + 200) < (int)uVar8) {
        *puVar2 = *(uint *)(psVar4 + 200);
      }
    }
  }
  FUN_0102008d(local_4c,(int)puVar5);
  if (local_50 != (int *)0x0) {
    *local_50 = local_40;
  }
  if (param_5 != 0) {
    FUN_0102018c(local_48);
  }
  if (_DAT_01027be4 != 0) {
    FUN_0101f50b();
  }
LAB_01020a22:
  FUN_0101cd9e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_01020a36(undefined2 *param_1)

{
  ushort extraout_AX;
  UINT nDefault;
  int iVar1;
  uint uVar2;
  MMRESULT MVar3;
  char *lpString2;
  INT nDefault_00;
  UINT nDefault_01;
  UINT nDefault_02;
  UINT nDefault_03;
  UINT UVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  LPCSTR lpFileName;
  short *psVar8;
  
  nDefault = waveOutGetNumDevs();
  if (nDefault == 0) {
    return 0;
  }
  if (((*(byte *)((int)param_1 + 3) & 4) != 0) && (iVar1 = FUN_0101f36b((int)param_1), iVar1 != 0))
  {
    FUN_01020615(DAT_01027be0,(HWND)0x0,param_1,(int *)0x0,0);
    return 1;
  }
  psVar8 = DAT_01027be0;
  if ((*(byte *)(param_1 + 1) & 0x80) == 0) {
    uVar2 = GetPrivateProfileIntA("general","WaveOutDevice",0,&DAT_01025850);
  }
  else {
    uVar2 = (uint)(ushort)param_1[10];
  }
  puVar7 = (uint *)(psVar8 + 0xc);
  *puVar7 = uVar2;
  if (nDefault <= *puVar7) {
    *puVar7 = 0;
  }
  MVar3 = waveOutGetDevCapsA(*puVar7,(LPWAVEOUTCAPSA)(DAT_01027be0 + 0x3e),0x34);
  if ((MVar3 != 0) || (iVar1 = FUN_0101f0d4((LPCSTR)(DAT_01027be0 + 0x42)), iVar1 == 0)) {
    lstrcpyA((LPSTR)(DAT_01027be0 + 0x42),"Unkown Device");
  }
  iVar1 = FUN_0101f25c(*(undefined4 *)(DAT_01027be0 + 0xc),(LPSTR)(DAT_01027be0 + 0xe),0x60);
  if (iVar1 == 0) {
    lpString2 = FUN_0101f20f();
    lstrcpyA((LPSTR)(DAT_01027be0 + 0xe),lpString2);
    lstrcatA((LPSTR)(DAT_01027be0 + 0xe),(LPCSTR)(DAT_01027be0 + 0x42));
  }
  nDefault = GetPrivateProfileIntA("default","Remix",1,&DAT_01025850);
  lpFileName = &DAT_01025850;
  nDefault_00 = FUN_0101d0a5(*(UINT_PTR *)(DAT_01027be0 + 0xc));
  nDefault_01 = GetPrivateProfileIntA("default","GoodWavePos",nDefault_00,lpFileName);
  nDefault_02 = GetPrivateProfileIntA("default","WaveBlocks",3,&DAT_01025850);
  nDefault_03 = GetPrivateProfileIntA("default","SamplesPerSec",0xb,&DAT_01025850);
  if ((*(byte *)(DAT_01027be0 + 0x56) & 0x10) == 0) {
    UVar4 = GetPrivateProfileIntA("not compatible",(LPCSTR)(DAT_01027be0 + 0xe),0,&DAT_01025850);
    if (UVar4 == 0) {
      nDefault = GetPrivateProfileIntA((LPCSTR)(DAT_01027be0 + 0xe),"Remix",nDefault,&DAT_01025850);
      psVar8 = DAT_01027be0;
      pcVar5 = (code *)&LAB_0101ddd8;
      if (nDefault != 2) {
        pcVar5 = FUN_0101dde8;
      }
      *(code **)(DAT_01027be0 + 0xd8) = pcVar5;
      nDefault = GetPrivateProfileIntA
                           ((LPCSTR)(psVar8 + 0xe),"GoodWavePos",nDefault_01,&DAT_01025850);
      psVar8 = DAT_01027be0;
      *(uint *)(DAT_01027be0 + 0xd2) = (uint)(nDefault != 0);
      nDefault = GetPrivateProfileIntA
                           ((LPCSTR)(psVar8 + 0xe),"WaveBlocks",nDefault_02,&DAT_01025850);
      psVar8 = DAT_01027be0;
      uVar6 = 2;
      *(UINT *)(DAT_01027be0 + 200) = nDefault;
      if (((int)nDefault < 2) || (uVar6 = 10, 10 < (int)nDefault)) {
        *(undefined4 *)(psVar8 + 200) = uVar6;
      }
      lpFileName = &DAT_01025850;
      nDefault_00 = FUN_0101d079(*(undefined4 *)(psVar8 + 200));
      nDefault = GetPrivateProfileIntA
                           ((LPCSTR)(DAT_01027be0 + 0xe),"PauseBlocks",nDefault_00,lpFileName);
      psVar8 = DAT_01027be0;
      *(UINT *)(DAT_01027be0 + 0xca) = nDefault;
      if ((int)nDefault < 0) {
        *(undefined4 *)(psVar8 + 0xca) = 0;
      }
      else {
        if (*(int *)(psVar8 + 200) < (int)nDefault) {
          *(int *)(psVar8 + 0xca) = *(int *)(psVar8 + 200);
        }
      }
      nDefault = GetPrivateProfileIntA
                           ((LPCSTR)(psVar8 + 0xe),"SamplesPerSec",nDefault_03,&DAT_01025850);
      nDefault_01 = GetPrivateProfileIntA((LPCSTR)(DAT_01027be0 + 0xe),"Channels",1,&DAT_01025850);
      psVar8 = DAT_01027be0;
      extraout_AX = (ushort)nDefault_01;
      DAT_01027be0[0xbf] = extraout_AX;
      if (extraout_AX == 0) {
        psVar8[0xbf] = 1;
      }
      else {
        if (2 < extraout_AX) {
          psVar8[0xbf] = 2;
        }
      }
      uVar2 = (uint)(ushort)psVar8[0xbf];
      if (nDefault == 0x16) {
        *(undefined4 *)(psVar8 + 0xc0) = 0x5622;
        iVar1 = uVar2 * 0x5622;
      }
      else {
        if (nDefault == 0x2c) {
          *(undefined4 *)(psVar8 + 0xc0) = 0xac44;
          iVar1 = uVar2 * 0xac44;
        }
        else {
          iVar1 = uVar2 * 0x2b11;
        }
      }
      *(int *)(psVar8 + 0xc2) = iVar1;
      nDefault = GetPrivateProfileIntA("default","WaveBlockLen",0,&DAT_01025850);
      psVar8 = DAT_01027be0;
      uVar2 = FUN_0101f093(nDefault,(int)(DAT_01027be0 + 0xbe));
      *(uint *)(psVar8 + 0xc6) = uVar2;
      FUN_01020615(psVar8,(HWND)0x0,param_1,(int *)0x0,0);
      return 1;
    }
    if (_DAT_01027be4 == 0) {
      return 0;
    }
    psVar8 = DAT_01027be0 + 0xe;
    lpString2 = "%s is not compatible with the realtime wavemixer.";
  }
  else {
    if (_DAT_01027be4 == 0) {
      return 0;
    }
    psVar8 = DAT_01027be0 + 0x42;
    lpString2 = 
    "%s is a syncronous (blocking) wave output device.  This will not permit audio to play while other applications are running."
    ;
  }
  wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,lpString2,psVar8);
  MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 * FUN_01020d99(undefined4 *param_1)

{
  HMODULE pHVar1;
  UINT UVar2;
  undefined2 *hMem;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined2 local_24;
  byte local_21;
  short local_c;
  
  iVar3 = 7;
  puVar6 = (undefined4 *)&local_24;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar4 = 0x1e;
  *(undefined2 *)puVar6 = 0;
  local_24 = 0x1e;
  if (param_1 != (undefined4 *)0x0) {
    if (*(ushort *)param_1 < 0x1e) {
      uVar4 = (uint)*(ushort *)param_1;
    }
    uVar5 = uVar4 >> 2;
    puVar6 = (undefined4 *)&local_24;
    while (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = uVar4 & 3;
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *(undefined *)puVar6 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (_DAT_01027bf4 == 0) {
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    iVar3 = FUN_0102046f(pHVar1);
    if (iVar3 == 0) {
      return (undefined2 *)0x0;
    }
  }
  if ((local_21 & 1) == 0) {
    UVar2 = GetPrivateProfileIntA("general","ShowDebugDialogs",0,&DAT_01025850);
    bVar7 = UVar2 != 0;
  }
  else {
    bVar7 = local_c != 0;
  }
  _DAT_01027be4 = (uint)bVar7;
  UVar2 = waveOutGetNumDevs();
  if (UVar2 == 0) {
    if (_DAT_01027be4 != 0) {
      wsprintfA(s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,
                "This system does not have a valid wave output device.");
      MessageBoxA((HWND)0x0,s_WaveMix_V_2_3_by_Angel_M__Diaz__J_01024780,"WavMix32",0x40);
    }
  }
  else {
    UVar2 = GetPrivateProfileIntA("general","ShowDevices",0,&DAT_01025850);
    if (UVar2 != 0) {
      FUN_0101f13d();
    }
    hMem = (undefined2 *)LocalAlloc(0x40,0x1c0);
    DAT_01027be0 = hMem;
    if (hMem != (undefined2 *)0x0) {
      iVar3 = 0x10;
      DAT_01027be0 = hMem;
      *(undefined4 *)(hMem + 0xd6) = DAT_01025968;
      hMem[0xde] = 0x5432;
      *hMem = 0x5432;
      *(undefined4 *)(hMem + 0xcc) = 0;
      *(undefined4 *)(hMem + 10) = 0;
      hMem[0x58] = 10;
      hMem[0x59] = 10;
      puVar6 = (undefined4 *)(hMem + 0x7a);
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      memmove(hMem + 0xbe,&DAT_010028c0,0x10);
      iVar3 = FUN_01020a36(&local_24);
      hMem = DAT_01027be0;
      if (iVar3 != 0) {
        return DAT_01027be0;
      }
      DAT_01027be0[0xde] = 0;
      *hMem = 0;
      LocalFree(hMem);
      DAT_01027be0 = (undefined2 *)0x0;
      return (undefined2 *)0x0;
    }
  }
  return (undefined2 *)0x0;
}



void FUN_01020f2d(void)

{
  FUN_01020d99((undefined4 *)0x0);
  return;
}



undefined4 FUN_01020f3a(short *param_1)

{
  HLOCAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_01027be0 = (undefined4 *)FUN_0101cfd0(param_1);
  if (DAT_01027be0 != (undefined4 *)0x0) {
    FUN_0102053b(param_1,0);
    FUN_0101e434(param_1,0,1);
    puVar3 = DAT_01027be0;
    DAT_01027be0 = (undefined4 *)0x0;
    iVar2 = 0x70;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if ((param_1 != (short *)0x0) && (pvVar1 = LocalFree(param_1), pvVar1 == (HLOCAL)0x0)) {
      return 0;
    }
  }
  return 5;
}



// WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog
// WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  HMODULE pHVar1;
  undefined4 *puVar2;
  uint uVar3;
  int _Code;
  int *piVar4;
  undefined4 uVar5;
  HINSTANCE pHVar6;
  _STARTUPINFOA local_84;
  int local_40;
  int local_3c;
  int local_38;
  char **local_34;
  char **local_30 [2];
  _startupinfo local_28;
  HINSTANCE local_24;
  uint local_20;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_010033b0;
  uStack12 = 0x1020fa1;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if ((*(short *)&pHVar1->unused == 0x5a4d) &&
     (piVar4 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar4 == 0x4550)) {
    if (*(short *)(piVar4 + 6) == 0x10b) {
      if (0xe < (uint)piVar4[0x1d]) {
        _Code = piVar4[0x3a];
        goto LAB_01020ff8;
      }
    }
    else {
      if ((*(short *)(piVar4 + 6) == 0x20b) && (0xe < (uint)piVar4[0x21])) {
        _Code = piVar4[0x3e];
LAB_01020ff8:
        local_20 = (uint)(_Code != 0);
        goto LAB_01020ffe;
      }
    }
  }
  local_20 = 0;
LAB_01020ffe:
  local_8 = (undefined *)0x0;
  __set_app_type(2);
  _DAT_01028298 = 0xffffffff;
  _DAT_0102829c = 0xffffffff;
  puVar2 = (undefined4 *)__p__fmode();
  *puVar2 = DAT_01027c08;
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = DAT_01027c04;
  _DAT_010282a0 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_010211d0();
  if (_DAT_01024890 == 0) {
    __setusermatherr(FUN_010211d0);
  }
  FUN_010211b9();
  _initterm(&DAT_0102300c,&DAT_01023010);
  local_28 = DAT_01027c00;
  local_3c = __getmainargs(&local_38,&local_34,local_30,DAT_01027bfc,&local_28);
  _initterm(&DAT_01023000,&DAT_01023008);
  local_24 = *(HINSTANCE *)_acmdln_exref;
  if (*(char *)&local_24->unused != '\"') {
    do {
      if (*(byte *)&local_24->unused < 0x21) goto LAB_010210cc;
      local_24 = (HINSTANCE)((int)&local_24->unused + 1);
    } while( true );
  }
  do {
    local_24 = (HINSTANCE)((int)&local_24->unused + 1);
    if (*(char *)&local_24->unused == '\0') break;
  } while (*(char *)&local_24->unused != '\"');
  if (*(char *)&local_24->unused != '\"') goto LAB_010210cc;
  do {
    local_24 = (HINSTANCE)((int)&local_24->unused + 1);
LAB_010210cc:
    pHVar6 = local_24;
  } while ((*(byte *)&local_24->unused != 0) && (*(byte *)&local_24->unused < 0x21));
  local_84.dwFlags = 0;
  GetStartupInfoA((LPSTARTUPINFOA)&local_84);
  if ((local_84.dwFlags & 1) == 0) {
    uVar3 = 10;
  }
  else {
    uVar3 = (uint)local_84.wShowWindow;
  }
  uVar5 = 0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  _Code = FUN_0100833a((HINSTANCE)pHVar1,uVar5,pHVar6,uVar3);
  if (local_20 == 0) {
    local_40 = _Code;
                    // WARNING: Subroutine does not return
    exit(_Code);
  }
  local_40 = _Code;
  _cexit();
  return _Code;
}



void _ftol(void)

{
                    // WARNING: Could not recover jumptable at 0x01021166. Too many branches
                    // WARNING: Treating indirect jump as call
  _ftol();
  return;
}



void _CIacos(void)

{
                    // WARNING: Could not recover jumptable at 0x01021172. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIacos();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0102117e. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0102118a. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)operator_new();
  return pvVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x010211ae. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void FUN_010211b9(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



undefined4 FUN_010211d0(void)

{
  return 0;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
// Name: __SEH_prolog
// Library: Visual Studio

void __cdecl __SEH_prolog(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_res0;
  undefined4 auStack24 [4];
  undefined local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack24 + param_2 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack24 + param_2 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack24 + param_2 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack24 + param_2) = local_res0;
  *(undefined **)in_FS_OFFSET = local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
// Name: __SEH_epilog
// Library: Visual Studio

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



// WARNING: Exceeded maximum restarts with more pending

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x01021236. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp();
  return uVar1;
}


