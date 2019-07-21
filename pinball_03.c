#include "pinball.h"


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


