#include "pinball.h"


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


