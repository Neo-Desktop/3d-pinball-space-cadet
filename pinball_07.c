
// Address range: 0x1e2895c - 0x1e28a6f
int32_t function_1e2895c(int32_t a1, int32_t a2, int32_t lpName, int32_t iStart, uint32_t a5, int32_t hPal) {
    int32_t * hModule = (int32_t *)a1; // 0x1e28970
    int32_t * hResInfo = FindResourceA(hModule, (char *)lpName, (char *)2); // 0x1e28970
    g2 = (int32_t)hResInfo;
    int32_t result; // 0x1e28a5c
    if (hResInfo != NULL) {
        int32_t * hResData = LoadResource(hModule, hResInfo); // 0x1e28985
        int32_t v1 = (int32_t)hResData; // 0x1e28985
        g2 = v1;
        if (hResData != NULL) {
            int32_t v2 = (int32_t)LockResource(hResData); // 0x1e2899c
            g2 = v2;
            g6 = v2;
            int32_t v3 = *(int32_t *)(v2 + 32); // 0x1e289a7
            g2 = v3;
            struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 * pbmih; // bp-8
            *(int32_t *)&pbmih = v3;
            int32_t v4;
            struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 * v5; // 0x1e289be
            if (v3 != 0) {
                // 0x1e28999
                v4 = v2 + 14;
                v5 = (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 *)v3;
            } else {
                // 0x1e289b1
                g2 = 1;
                int32_t v6 = v2 + 14; // 0x1e289b6
                int32_t v7 = (int32_t)*(char *)v6; // 0x1e289b6
                g5 = g5 & -256 | v7;
                uint32_t v8 = v7 & 31; // 0x1e289b9
                struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 * v9; // 0x1e289bb
                if (v8 != 0) {
                    int32_t v10 = 1 << v8; // 0x1e289b9
                    g2 = v10;
                    v9 = (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 *)v10;
                } else {
                    v9 = (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 *)1;
                }
                // bb61
                pbmih = v9;
                v4 = v6;
                v5 = v9;
            }
            int32_t v11 = (int32_t)v5; // 0x1e289be
            g2 = v11;
            int32_t hdc2 = 4 * v11 + v2 + 40; // 0x1e289c6
            g5 = hdc2;
            if (*(int16_t *)v4 >= 5) {
                // 0x1e289ce
                int32_t v12; // bp-1044
                g2 = &v12;
                int32_t v13 = function_1e28831(&v12); // 0x1e289d5
                g2 = v13;
                g5 = 0;
                *(int32_t *)hPal = v13;
                if (v13 != 0) {
                    int32_t v14 = g5; // 0x1e289e5
                    int32_t cEntries; // 0x1e28a27
                    int32_t v15;
                    if (v14 < a5) {
                        // 0x1e289ea
                        g2 = iStart;
                        int32_t v16 = g4 + 2; // ebx
                        int32_t v17 = 4 * iStart; // 0x1e289f0
                        int32_t v18 = v17 - 1036 + g3; // edx
                        int32_t v19 = v14; // 0x1e289fe
                        while (true) {
                            // 0x1e289f7
                            if (pbmih <= (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001 *)v19) {
                                v15 = v17;
                                cEntries = v19;
                                // break -> 0x1e28a1c
                                break;
                            }
                            int32_t v20 = v16; // 0x1e289fc
                            unsigned char v21 = *(char *)v20; // 0x1e289fc
                            g2 = g2 & -256 | (int32_t)v21;
                            g5 = v19 + 1;
                            v16 = v20 + 4;
                            *(char *)v18 = v21;
                            int32_t v22 = v18; // 0x1e28a04
                            v18 = v22 + 4;
                            unsigned char v23 = *(char *)(v16 - 5); // 0x1e28a07
                            g2 = g2 & -256 | (int32_t)v23;
                            *(char *)(v22 + 1) = v23;
                            unsigned char v24 = *(char *)(v16 - 6); // 0x1e28a10
                            g2 = g2 & -256 | (int32_t)v24;
                            *(char *)(v18 - 2) = v24;
                            *(char *)(v18 - 1) = 4;
                            int32_t v25 = g5;
                            if (g5 >= a5) {
                                v15 = v17;
                                cEntries = v25;
                                // break -> 0x1e28a1c
                                break;
                            }
                            v19 = v25;
                        }
                    } else {
                        // 0x1e289e5
                        v15 = 4 * iStart;
                        cEntries = v14;
                    }
                    // 0x1e28a1c
                    g2 = iStart;
                    int32_t pPalEntries = v15 - 1036 + g3; // 0x1e28a1f
                    g7 = pPalEntries;
                    int32_t hpal = *(int32_t *)hPal; // 0x1e28a29
                    g2 = SetPaletteEntries((int32_t *)hpal, iStart, cEntries, (struct tagPALETTEENTRY *)pPalEntries);
                    int32_t * hdc = (int32_t *)a2; // 0x1e28a38
                    g2 = (int32_t)SelectPalette(hdc, (int32_t *)*(int32_t *)hPal, false);
                    g2 = RealizePalette(hdc);
                }
            }
            // 0x1e28a47
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = g6;
            *(int32_t *)(g9 - 12) = hdc2;
            *(int32_t *)(g9 - 16) = 4;
            *(int32_t *)(g9 - 20) = g6;
            *(int32_t *)(g9 - 24) = a2;
            int32_t * v26 = CreateDIBitmap((int32_t *)hdc2, pbmih, (int32_t)&g708, &g708, (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0002 *)&g708, (int32_t)&g708); // 0x1e28a53
            g2 = (int32_t)v26;
            *(int32_t *)(g9 - 4) = v1;
            result = g2;
            FreeResource(&g708);
            g2 = result;
        } else {
            // 0x1e28992
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e2897a
        g2 = 0;
        result = 0;
    }
    // 0x1e28a66
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e28a6f - 0x1e28bb8
int32_t function_1e28a6f(int32_t a1) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-28
    int32_t v3 = &v2; // 0x1e28a72
    int32_t * hWnd = GetDesktopWindow(); // 0x1e28a78
    g2 = (int32_t)hWnd;
    g6 = 0;
    int32_t * hdc = GetDC(hWnd); // 0x1e28a81
    g2 = (int32_t)hdc;
    g8 = a1;
    if (hdc == NULL) {
        goto lab_0x1e28b74;
    } else {
        int32_t v4 = (int32_t)CreateCompatibleDC(hdc); // 0x1e28a95
        g2 = v4;
        *(int32_t *)(g8 + 12) = v4;
        int32_t v5 = (int32_t)CreateCompatibleBitmap(hdc, 10, 10); // 0x1e28aa3
        g2 = v5;
        g6 = v5;
        g2 = ReleaseDC((int32_t *)*(int32_t *)g8, hdc);
        int32_t h = g6; // 0x1e28ab4
        if (h != 0) {
            int32_t hdc2 = *(int32_t *)(g8 + 12); // 0x1e28ac3
            g2 = hdc2;
            if (hdc2 == 0) {
                goto lab_0x1e28b74;
            } else {
                // 0x1e28ace
                g2 = (int32_t)SelectObject((int32_t *)hdc2, (int32_t *)h);
                int32_t v6 = GetDeviceCaps((int32_t *)*(int32_t *)(g8 + 12), 38); // 0x1e28adb
                g2 = v6;
                int32_t v7;
                if ((v6 & 256) == 0) {
                    // 0x1e28aea
                    g2 = 0;
                    v7 = GetDeviceCaps((int32_t *)*(int32_t *)(g8 + 12), 24) < 256;
                } else {
                    v7 = 0;
                }
                // 0x1e28b06
                g2 = v7;
                int32_t v8 = g8; // 0x1e28b06
                g4 = v8 + 8;
                int32_t v9; // 0x1e28b3a
                if (v7 == 0) {
                    // 0x1e28b22
                    g5 = v8 + 32;
                    *(int32_t *)(g9 - 4) = v8 + 4;
                    *(int32_t *)(g9 - 8) = 236;
                    *(int32_t *)(g9 - 12) = 10;
                    g2 = g538;
                    *(int32_t *)(g9 - 16) = g5;
                    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 12);
                    *(int32_t *)(g9 - 24) = g2;
                    v9 = function_1e2895c((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                } else {
                    int32_t v10 = v8 + 232; // 0x1e28b0d
                    g2 = v10;
                    *(int32_t *)(g9 - 4) = v10;
                    *(int32_t *)(g9 - 8) = g538;
                    v9 = (int32_t)LoadBitmapA(&g708, (char *)&g708);
                }
                // 0x1e28b3f
                g2 = v9;
                *(int32_t *)g4 = v9;
                int32_t v11 = *(int32_t *)g4; // 0x1e28b41
                g2 = v11;
                if (v11 == 0) {
                    goto lab_0x1e28b74;
                } else {
                    // 0x1e28b47
                    *(int32_t *)(g9 - 4) = v11;
                    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 12);
                    g2 = (int32_t)SelectObject(&g708, &g708);
                    *(int32_t *)(g9 - 4) = g6;
                    g2 = DeleteObject(&g708);
                    g5 = v3;
                    *(int32_t *)(g9 - 4) = v3;
                    *(int32_t *)(g9 - 8) = 24;
                    *(int32_t *)(g9 - 12) = *(int32_t *)g4;
                    g2 = GetObjectA(&g708, (int32_t)&g708, &g708);
                    *(int32_t *)(g8 + 20) = g7;
                    goto lab_0x1e28baf;
                }
            }
        } else {
            // 0x1e28ab8
            g2 = GetLastError();
            goto lab_0x1e28b74;
        }
    }
  lab_0x1e28b74:;
    int32_t v12 = *(int32_t *)(g8 + 4); // 0x1e28b74
    g2 = v12;
    if (v12 != 0) {
        // 0x1e28b7b
        *(int32_t *)(g9 - 4) = v12;
        g2 = DeleteObject(&g708);
    }
    int32_t v13 = *(int32_t *)g8; // 0x1e28b82
    g2 = v13;
    if (v13 != 0) {
        // 0x1e28b88
        *(int32_t *)(g9 - 4) = v13;
        g2 = DestroyWindow(&g708);
    }
    // 0x1e28b8f
    if (g6 != 0) {
        // 0x1e28b93
        *(int32_t *)(g9 - 4) = g6;
        g2 = DeleteObject(&g708);
    }
    int32_t v14 = *(int32_t *)(g8 + 12); // 0x1e28b9a
    g2 = v14;
    if (v14 != 0) {
        // 0x1e28ba1
        *(int32_t *)(g9 - 4) = v14;
        g2 = DeleteDC(&g708);
    }
    // 0x1e28ba8
    *(int32_t *)(g8 + 8) = 0;
    goto lab_0x1e28baf;
  lab_0x1e28baf:
    // 0x1e28baf
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e28bb8 - 0x1e28c4f
int32_t function_1e28bb8(int32_t a1, int32_t hdc) {
    int32_t x1 = 0; // ebx
    int32_t result; // 0x1e28c4c
    if (*(int32_t *)(a1 + 8) == 0) {
        // 0x1e28bb8
        result = g2;
    } else {
        // 0x1e28bcb
        int32_t v1; // bp-20
        g2 = &v1;
        int32_t * hWnd = GetDesktopWindow(); // 0x1e28bcf
        g2 = (int32_t)hWnd;
        GetWindowRect(hWnd, (struct tagRECT *)&g708);
        int32_t v2;
        int32_t v3 = v2 - *(int32_t *)(a1 + 16) - v1; // 0x1e28be2
        *(int32_t *)(a1 + 24) = (v3 - (v3 >> 31)) / 2;
        int32_t v4;
        int32_t v5;
        int32_t v6 = v5 - *(int32_t *)(a1 + 20) - v4; // 0x1e28bf4
        g2 = v6;
        int32_t hPal = *(int32_t *)(a1 + 4); // 0x1e28bfb
        int32_t v7 = (v6 - (v6 >> 31)) / 2; // 0x1e28c01
        g2 = v7;
        *(int32_t *)(a1 + 28) = v7;
        g2 = (int32_t)SelectPalette((int32_t *)hdc, (int32_t *)hPal, (x1 & 1) != 0);
        g2 = RealizePalette((int32_t *)hdc);
        int32_t hPal2 = *(int32_t *)(a1 + 4); // 0x1e28c14
        int32_t hdc2 = *(int32_t *)(a1 + 12); // 0x1e28c17
        g2 = (int32_t)SelectPalette((int32_t *)hdc2, (int32_t *)hPal2, (x1 & 1) != 0);
        g2 = RealizePalette((int32_t *)*(int32_t *)(a1 + 12));
        int32_t hdcSrc = *(int32_t *)(a1 + 12); // 0x1e28c30
        int32_t cy = *(int32_t *)(a1 + 20); // 0x1e28c33
        int32_t cx = *(int32_t *)(a1 + 16); // 0x1e28c36
        int32_t y = *(int32_t *)(a1 + 28); // 0x1e28c39
        int32_t x = *(int32_t *)(a1 + 24); // 0x1e28c3c
        int32_t v8 = BitBlt((int32_t *)hdc, x, y, cx, cy, (int32_t *)hdcSrc, x1, x1, 0xcc0020); // 0x1e28c40
        g2 = v8;
        result = v8;
    }
    // 0x1e28c46
    return result;
}

// Address range: 0x1e28c4f - 0x1e28d7b
int32_t function_1e28c4f(int32_t a1, int32_t lpString2, int32_t lpString2_) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t lpWndClass; // bp-60
    int32_t v2 = &lpWndClass; // 0x1e28c52
    int32_t result = function_1e25371(432); // 0x1e28c5c
    g2 = result;
    g8 = result;
    if (result != 0) {
        int32_t lpString1 = result + 32; // 0x1e28c71
        g5 = lpString1;
        int32_t hInstance = 0; // edi
        g2 = (int32_t)lstrcpyA((char *)lpString1, (char *)lpString2);
        int32_t lpString1_ = result + 232; // 0x1e28c80
        g7 = lpString1_;
        g2 = (int32_t)lstrcpyA((char *)lpString1_, (char *)lpString2_);
        if (g538 == hInstance) {
            // 0x1e28c95
            g2 = a1;
            lpWndClass = hInstance;
            g538 = a1;
            LoadCursorA((int32_t *)hInstance, (char *)0x7f00);
            g2 = v2;
            g2 = RegisterClassA((struct tagWNDCLASSA *)&lpWndClass);
        }
        // 0x1e28ce1
        g6 = 0;
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(result + 8) = g6;
        g2 = g538;
        *(int32_t *)(g9 - 4) = g538;
        *(int32_t *)(g9 - 8) = g6;
        *(int32_t *)(g9 - 12) = g6;
        *(int32_t *)(g9 - 16) = 1;
        *(int32_t *)(g9 - 20) = 1;
        *(int32_t *)(g9 - 24) = -10;
        *(int32_t *)(g9 - 28) = -10;
        *(int32_t *)(g9 - 32) = -0x80000000;
        *(int32_t *)(g9 - 36) = (int32_t)&g25;
        *(int32_t *)(g9 - 40) = (int32_t)"3DPB_SPLASH_CLASS";
        *(int32_t *)(g9 - 44) = g6;
        int32_t * windowHandle = CreateWindowExA((int32_t)&g708, (char *)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708, &g708, &g708); // 0x1e28d07
        int32_t v3 = (int32_t)windowHandle; // 0x1e28d07
        g2 = v3;
        *(int32_t *)(g9 - 4) = result;
        int32_t * v4 = (int32_t *)result; // 0x1e28d0e
        *v4 = v3;
        if (windowHandle != NULL) {
            // 0x1e28d1d
            g6 = 0;
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = v3;
            SetWindowLongA(&g708, (int32_t)&g708, (int32_t)&g708);
            int32_t v5; // bp-20
            int32_t v6 = &v5; // 0x1e28d27
            g2 = v6;
            *(int32_t *)(g9 - 4) = v6;
            int32_t v7 = (int32_t)GetDesktopWindow(); // 0x1e28d2b
            g2 = v7;
            *(int32_t *)(g9 - 4) = v7;
            g2 = GetWindowRect(&g708, (struct tagRECT *)&g708);
            *(int32_t *)(g9 - 4) = result;
            function_1e28a6f((int32_t)&g708);
            *(int32_t *)(g9 - 4) = g6;
            int32_t v8;
            int32_t v9;
            *(int32_t *)(g9 - 8) = v9 - v8;
            int32_t v10;
            int32_t v11 = v10 - v5; // 0x1e28d49
            g2 = v11;
            *(int32_t *)(g9 - 12) = v11;
            *(int32_t *)(g9 - 16) = g6;
            *(int32_t *)(g9 - 20) = g6;
            *(int32_t *)(g9 - 24) = *v4;
            bool v12 = MoveWindow(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (bool)&g708); // 0x1e28d51
            g2 = v12;
            *(int32_t *)(g9 - 4) = 8;
            *(int32_t *)(g9 - 8) = *v4;
            g2 = ShowWindow(&g708, (int32_t)&g708);
            *(int32_t *)(g9 - 4) = *v4;
            g2 = (int32_t)SetFocus(&g708);
            *(int32_t *)(g9 - 4) = *v4;
            UpdateWindow(&g708);
            g2 = result;
        } else {
            // 0x1e28d14
            function_1e25401((int32_t)&g708);
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e28c67
        g2 = 0;
        result = 0;
    }
    // 0x1e28d73
    g6 = *(int32_t *)g9;
    g3 = v1;
    return result;
}

// Address range: 0x1e28d7b - 0x1e28dba
int32_t function_1e28d7b(int32_t a1) {
    int32_t v1 = g6; // bp-12
    int32_t v2 = &v1; // 0x1e28d81
    int32_t v3; // 0x1e28db4
    if (a1 == 0) {
        // 0x1e28d7b
        v3 = v2;
        // 0x1e28db4
        g6 = *(int32_t *)v3;
        g4 = *(int32_t *)(v3 + 8);
        return g2;
    }
    int32_t * hWnd2 = (int32_t *)a1; // 0x1e28d88
    int32_t hWnd = *hWnd2; // 0x1e28d88
    g2 = hWnd;
    int32_t result; // 0x1e28dae
    if (hWnd != 0) {
        int32_t * hdc = GetDC((int32_t *)hWnd); // 0x1e28d8f
        int32_t hDC = (int32_t)hdc; // 0x1e28d8f
        g2 = hDC;
        int32_t x = 0; // 0x1e28d99
        int32_t cy = *(int32_t *)(a1 + 28); // 0x1e28d9c
        int32_t cx = *(int32_t *)(a1 + 24); // 0x1e28d9f
        g2 = BitBlt(hdc, x, x, cx, cy, hdc, x, x, 66);
        result = ReleaseDC((int32_t *)*hWnd2, (int32_t *)hDC);
        g2 = result;
        v3 = g9;
    } else {
        result = 0;
        v3 = v2;
    }
    // 0x1e28db4
    g6 = *(int32_t *)v3;
    g4 = *(int32_t *)(v3 + 8);
    return result;
}

// Address range: 0x1e28dba - 0x1e28e32
int32_t function_1e28dba(int32_t a1) {
    // 0x1e28dba
    g8 = a1;
    g6 = 0;
    if (a1 != 0) {
        int32_t * v1 = (int32_t *)a1; // 0x1e28dc6
        int32_t hWnd = *v1; // 0x1e28dc6
        g2 = hWnd;
        if (hWnd != 0) {
            // 0x1e28dcc
            g2 = DestroyWindow((int32_t *)hWnd);
            *v1 = g6;
            int32_t * v2 = (int32_t *)(a1 + 4); // 0x1e28dd5
            int32_t ho = *v2; // 0x1e28dd5
            g2 = ho;
            if (ho != 0) {
                // 0x1e28ddc
                g2 = DeleteObject((int32_t *)ho);
            }
            // 0x1e28de3
            *v2 = 0;
            int32_t v3 = *(int32_t *)(a1 + 12); // 0x1e28dea
            g2 = v3;
            if (v3 != 0) {
                // 0x1e28df1
                *(int32_t *)(g9 - 4) = v3;
                g2 = DeleteDC(&g708);
            }
            int32_t v4 = *(int32_t *)(a1 + 8); // 0x1e28df8
            g2 = v4;
            if (v4 != 0) {
                // 0x1e28dff
                *(int32_t *)(g9 - 4) = v4;
                g2 = DeleteObject(&g708);
            }
        }
        // 0x1e28e06
        *(int32_t *)(g9 - 4) = a1;
        g2 = function_1e25401((int32_t)&g708);
    }
    int32_t v5 = g538; // 0x1e28e0e
    int32_t result; // 0x1e28e2f
    if (v5 == 0) {
        // 0x1e28e0c
        result = g2;
    } else {
        // 0x1e28e16
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        *(int32_t *)(g9 - 8) = (int32_t)"3DPB_SPLASH_CLASS";
        int32_t v6 = UnregisterClassA((char *)&g708, &g708); // 0x1e28e21
        g2 = v6;
        g538 = 0;
        result = v6;
    }
    // 0x1e28e2d
    g6 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e28e32 - 0x1e28ec7
int32_t function_1e28e32(int32_t hWnd2, int32_t Msg, int32_t wParam, int32_t lParam) {
    // 0x1e28e32
    g2 = Msg;
    int32_t lpPaint; // bp-68
    int32_t v1 = &lpPaint; // 0x1e28e39
    int32_t result;
    if (Msg == 15) {
        int32_t * hWnd = (int32_t *)hWnd2; // 0x1e28e61
        int32_t v2 = GetWindowLongA(hWnd, 0); // 0x1e28e61
        g6 = v2;
        g2 = v1;
        g2 = (int32_t)BeginPaint(hWnd, (struct tagPAINTSTRUCT *)&lpPaint);
        g5 = v1;
        g2 = EndPaint(hWnd, (struct tagPAINTSTRUCT *)&lpPaint);
        int32_t * hdc = GetDC(hWnd); // 0x1e28e86
        int32_t v3 = (int32_t)hdc; // 0x1e28e86
        g2 = v3;
        if (hdc != NULL) {
            if (v2 != 0) {
                // 0x1e28e96
                g2 = 0x2710;
                int32_t x = 0; // 0x1e28e9d
                g2 = BitBlt(hdc, x, x, 0x2710, 0x2710, hdc, x, x, 66);
                g2 = function_1e28bb8(v2, v3);
            }
        }
        // 0x1e28eb2
        *(int32_t *)(g9 - 4) = v3;
        *(int32_t *)(g9 - 8) = hWnd2;
        g2 = ReleaseDC(&g708, &g708);
    } else {
        if (Msg != 20) {
            // 0x1e28e49
            result = DefWindowProcA((int32_t *)hWnd2, Msg, wParam, lParam);
            // 0x1e28ebe
            g2 = result;
            return result;
        }
    }
    result = 0;
    // 0x1e28ebe
    g2 = result;
    return result;
}

// Address range: 0x1e28ec7 - 0x1e28fb7
int32_t function_1e28ec7(void) {
    // 0x1e28ec7
    g2 = -1;
    g192 = -1;
    int32_t v1; // bp-24
    int32_t v2 = &v1; // 0x1e28ed4
    g191 = -1;
    int32_t v3 = g8; // bp-28
    int32_t v4 = 0; // esi
    int32_t v5 = &v3; // 0x1e28edf
    int32_t v6; // 0x1e28ef8
    int32_t v7; // 0x1e28efe
    while (true) {
        // 0x1e28edf
        *(int32_t *)(v5 - 4) = 1;
        *(int32_t *)(v5 - 8) = v4;
        int32_t v8 = MapVirtualKeyA((int32_t)&g708, (int32_t)&g708); // 0x1e28ee2
        g2 = v8;
        v6 = v4;
        if (v8 == 16) {
            // break -> 0x1e28ef8
            break;
        }
        int32_t v9 = v6 + 1; // 0x1e28eed
        v4 = v9;
        if (v9 >= 256) {
            v7 = v9;
            goto lab_0x1e28efe;
        }
        // 0x1e28eed
        v5 = g9;
    }
    // 0x1e28ef8
    g191 = v6;
    v7 = v6;
  lab_0x1e28efe:;
    int32_t v10 = v7 + 1; // 0x1e28efe
    v4 = v10;
    if (v10 < 256) {
        int32_t v11; // 0x1e28f20
        while (true) {
            // 0x1e28f07
            *(int32_t *)(g9 - 4) = 1;
            *(int32_t *)(g9 - 8) = v4;
            int32_t v12 = MapVirtualKeyA((int32_t)&g708, (int32_t)&g708); // 0x1e28f0a
            g2 = v12;
            v11 = v4;
            if (v12 == 16) {
                // break -> 0x1e28f20
                break;
            }
            int32_t v13 = v11 + 1; // 0x1e28f15
            v4 = v13;
            if (v13 >= 256) {
                goto lab_0x1e28f26;
            }
        }
        // 0x1e28f20
        g192 = v11;
    }
  lab_0x1e28f26:
    // 0x1e28f26
    *(int32_t *)(g9 - 4) = 19;
    *(int32_t *)(g9 - 8) = v2;
    int32_t v14 = 0x10000 * g191; // 0x1e28f31
    g2 = v14;
    *(int32_t *)(g9 - 12) = v14;
    int32_t v15 = GetKeyNameTextA((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e28f35
    g2 = v15;
    int32_t v16; // 0x1e28f6c
    if (v15 != 0) {
        // 0x1e28f3f
        *(int32_t *)(g9 - 4) = 5;
        g2 = v2;
        *(int32_t *)(g9 - 8) = (int32_t)"right";
        *(int32_t *)(g9 - 12) = v2;
        int32_t v17 = function_1e3de10((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e28f4a
        g2 = v17;
        int32_t v18 = g9 + 12; // 0x1e28f4f
        if (v17 != 0) {
            int32_t v19 = g191; // 0x1e28f56
            g5 = v19;
            int32_t v20 = g192; // 0x1e28f5c
            g2 = v20;
            g191 = v20;
            g192 = v19;
            v16 = v18;
        } else {
            v16 = v18;
        }
    } else {
        v16 = g9;
    }
    // 0x1e28f6c
    *(int32_t *)(v16 - 4) = 19;
    *(int32_t *)(v16 - 8) = v2;
    int32_t v21 = 0x10000 * g192; // 0x1e28f77
    g2 = v21;
    *(int32_t *)(v16 - 12) = v21;
    int32_t v22 = GetKeyNameTextA((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e28f7b
    g2 = v22;
    if (v22 == 0) {
        // 0x1e28fb2
        return 0;
    }
    // 0x1e28f85
    *(int32_t *)(g9 - 4) = 4;
    g2 = v2;
    *(int32_t *)(g9 - 8) = (int32_t)"left";
    *(int32_t *)(g9 - 12) = v2;
    int32_t v23 = function_1e3de10((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e28f90
    g2 = v23;
    int32_t result; // 0x1e28f9c
    if (v23 != 0) {
        // 0x1e28f9c
        result = g191;
        g2 = result;
        int32_t v24 = g192; // 0x1e28fa1
        g5 = v24;
        g191 = v24;
        g192 = result;
    } else {
        result = 0;
    }
    // 0x1e28fb2
    return result;
}

// Address range: 0x1e28fb7 - 0x1e28fba
int32_t function_1e28fb7(void) {
    // 0x1e28fb7
    g2 = 0;
    return 0;
}

// Address range: 0x1e28fba - 0x1e290db
int32_t function_1e28fba(void) {
    // 0x1e28fba
    g159++;
    int32_t v1 = g558; // 0x1e28fc3
    g2 = v1;
    g8 = 0;
    int32_t result; // 0x1e290c9
    if (g546 > 0) {
        // 0x1e28fe2
        g4 = 0;
        int32_t v2 = v1;
        int32_t v3 = 0;
        int32_t v4; // 0x1e290ae
        int32_t v5; // 0x1e290b2
        while (true) {
            // 0x1e28fe4
            g2 = v2;
            int32_t v6 = *(int32_t *)v2; // 0x1e28fe7
            g6 = v6;
            int32_t v7 = *(int32_t *)(v6 + 68); // 0x1e28fe9
            g2 = v7;
            int32_t v8; // 0x1e29005
            if (v7 != 0) {
                // 0x1e28ff0
                *(int32_t *)(g9 - 4) = v7;
                g2 = function_1e25401(v2);
                *(int32_t *)(g6 + 68) = g4;
                *(int32_t *)(g6 + 72) = g4;
                v8 = g6;
            } else {
                v8 = v6;
            }
            int32_t v9 = g4; // 0x1e28ffc
            if (*(char *)(v8 + 24) == (char)v9) {
                // 0x1e29005
                if (*(int32_t *)(v8 + 84) != -1) {
                    int32_t v10 = g8; // 0x1e2900f
                    int32_t v11; // 0x1e29024
                    int32_t v12; // 0x1e29018
                    if (v10 == 0) {
                        // 0x1e29013
                        *(int32_t *)(g9 - 4) = 4000;
                        v12 = function_1e25371((int32_t)&g708);
                        g2 = v12;
                        g8 = v12;
                        v11 = g4;
                    } else {
                        v12 = v10;
                        v11 = v9;
                    }
                    int32_t v13 = g558; // 0x1e2901f
                    g2 = v13;
                    int32_t v14;
                    int32_t v15;
                    int32_t v16; // 0x1e29091
                    if (g546 > v11) {
                        int32_t v17 = v12;
                        int32_t v18 = v11; // 0x1e2904b
                        int32_t v19 = v11;
                        int32_t v20 = v11;
                        int32_t v21 = v13;
                        while (true) {
                            // 0x1e29038
                            g2 = v21;
                            int32_t v22 = *(int32_t *)v21; // 0x1e2903b
                            g5 = v22;
                            int32_t v23;
                            int32_t v24;
                            if (*(char *)(v22 + 24) == (char)v18) {
                                // 0x1e29045
                                if (*(int32_t *)(v22 + 84) != -1) {
                                    // 0x1e2904b
                                    *(int32_t *)(g9 - 4) = v18;
                                    int32_t v25 = g5 + 76; // 0x1e2904c
                                    g2 = v25;
                                    *(int32_t *)(g9 - 8) = v25;
                                    int32_t v26 = g6 + 76; // 0x1e29050
                                    g5 = v26;
                                    *(int32_t *)(g9 - 12) = v26;
                                    int32_t v27 = function_1e3a2a2(v21, (int32_t)&g708, (int32_t)&g708); // 0x1e29054
                                    g2 = v27;
                                    if (v27 != 0) {
                                        // 0x1e2905d
                                        g5 = v17;
                                        g2 = v22;
                                        *(int32_t *)v17 = v22;
                                        v23 = v17 + 4;
                                        v24 = v20 + 1;
                                    } else {
                                        v23 = v17;
                                        v24 = v20;
                                    }
                                } else {
                                    v23 = v17;
                                    v24 = v20;
                                }
                            } else {
                                v23 = v17;
                                v24 = v20;
                            }
                            int32_t v28 = v21 + 4; // 0x1e2906c
                            int32_t v29 = v19 + 1; // 0x1e29070
                            g2 = v29;
                            int32_t v30 = g4;
                            if (g546 <= v29) {
                                v15 = v24;
                                v16 = v30;
                                v14 = v28;
                                // break -> 0x1e2907e
                                break;
                            }
                            v17 = v23;
                            v18 = v30;
                            v19 = v29;
                            v20 = v24;
                            v21 = v28;
                        }
                    } else {
                        v15 = v11;
                        v16 = v11;
                        v14 = v13;
                    }
                    int32_t v31 = g6; // 0x1e2907e
                    int32_t v32;
                    if (*(char *)(v31 + 24) == (char)v16) {
                        // 0x1e29083
                        if (*(int32_t *)(v31 + 16) != v16) {
                            // 0x1e29088
                            v32 = v15 < 2 ? v16 : v15;
                        } else {
                            v32 = v15;
                        }
                    } else {
                        v32 = v15;
                    }
                    if (v32 != v16) {
                        int32_t v33 = 4 * v32; // 0x1e29099
                        g2 = v33;
                        *(int32_t *)(g9 - 4) = v33;
                        *(int32_t *)(g9 - 8) = g8;
                        g8 = 0;
                        int32_t v34 = function_1e2542e(v14, (int32_t)&g708); // 0x1e290a0
                        g2 = v34;
                        g5 = v32;
                        *(int32_t *)(g6 + 68) = v34;
                        *(int32_t *)(g6 + 72) = g5;
                    }
                }
            }
            // 0x1e290ae
            v4 = v2 + 4;
            v5 = v3 + 1;
            g2 = v5;
            if (g546 <= v5) {
                // break -> 0x1e290c4
                break;
            }
            v2 = v4;
            v3 = v5;
        }
        int32_t v35 = g8;
        if (v35 != 0) {
            // 0x1e290c8
            *(int32_t *)(g9 - 4) = v35;
            result = function_1e25401(v4);
            g2 = result;
        } else {
            result = v5;
        }
    } else {
        result = v1;
    }
    // 0x1e290ce
    g6 = *(int32_t *)g9;
    g159--;
    return result;
}

// Address range: 0x1e290db - 0x1e29172
int32_t function_1e290db(int32_t a1) {
    int32_t v1 = g3; // 0x1e290db
    int32_t v2 = v1; // bp-4
    g3 = &v2;
    int32_t v3; // bp-24
    int32_t v4 = &v3; // 0x1e290de
    int32_t v5 = g6; // bp-36
    int32_t v6 = &v5; // 0x1e290e3
    g8 = a1;
    int32_t v7; // 0x1e29169
    if (*(int32_t *)(a1 + 68) != 0) {
        // 0x1e290ed
        g6 = 0;
        if (*(int32_t *)(a1 + 72) > 0) {
            int32_t v8 = 0;
            while (true) {
                int32_t v9 = *(int32_t *)(a1 + 68); // 0x1e290f7
                g5 = v9;
                g2 = v8;
                int32_t v10 = *(int32_t *)(v9 + v8); // 0x1e290fd
                g4 = v10;
                if (*(char *)(v10 + 24) == 0) {
                    // 0x1e29106
                    if (*(int32_t *)(v10 + 16) != 0) {
                        // 0x1e2910c
                        g2 = v4;
                        g5 = a1 + 52;
                        *(int32_t *)(g9 - 4) = v4;
                        *(int32_t *)(g9 - 8) = g5;
                        *(int32_t *)(g9 - 12) = g4;
                        int32_t v11 = function_1e3a2a2(v8, (int32_t)&g708, (int32_t)&g708); // 0x1e29115
                        g2 = v11;
                        if (v11 != 0) {
                            // 0x1e2911e
                            g5 = v3;
                            int32_t v12 = g4; // 0x1e29124
                            int32_t v13 = *(int32_t *)(v12 + 48); // 0x1e29124
                            g2 = v13;
                            int32_t v14;
                            int32_t v15 = v13 - *(int32_t *)(v12 + 4) + v14; // 0x1e2912a
                            g2 = v15;
                            *(int32_t *)(g9 - 4) = v15;
                            int32_t v16 = g4; // 0x1e2912d
                            int32_t v17 = *(int32_t *)(v16 + 44); // 0x1e2912d
                            g2 = v17;
                            *(int32_t *)(g9 - 8) = v17 - *(int32_t *)v16 + g5;
                            int32_t v18; // edx
                            g2 = v18;
                            *(int32_t *)(g9 - 12) = *(int32_t *)(g4 + 20);
                            *(int32_t *)(g9 - 16) = g2 - *(int32_t *)(g4 + 4);
                            int32_t v19 = g5; // 0x1e2913e
                            g2 = v19;
                            int32_t v20 = v19 - *(int32_t *)g4; // 0x1e29140
                            g2 = v20;
                            *(int32_t *)(g9 - 20) = v20;
                            *(int32_t *)(g9 - 24) = *(int32_t *)(g4 + 16);
                            *(int32_t *)(g9 - 28) = v18;
                            *(int32_t *)(g9 - 32) = g5;
                            *(int32_t *)(g9 - 36) = (int32_t)&g555;
                            *(int32_t *)(g9 - 40) = v18;
                            *(int32_t *)(g9 - 44) = g5;
                            *(int32_t *)(g9 - 48) = (int32_t)&g549;
                            int32_t v21 = function_1e3a4d9((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2915a
                            g2 = v21;
                        }
                    }
                }
                int32_t v22 = g6 + 1; // 0x1e29163
                g6 = v22;
                int32_t v23 = g8; // 0x1e29164
                if (*(int32_t *)(v23 + 72) <= v22) {
                    // break -> 0x1e29169
                    break;
                }
                a1 = v23;
                v8 += 4;
            }
            v7 = g9;
        } else {
            v2 = v1;
            v7 = v6;
        }
    } else {
        v2 = v1;
        v7 = v6;
    }
    // 0x1e29169
    g6 = *(int32_t *)v7;
    g8 = *(int32_t *)(v7 + 4);
    g4 = *(int32_t *)(v7 + 8);
    g3 = v2;
    return g2;
}

// Address range: 0x1e29172 - 0x1e292ae
int32_t function_1e29172(void) {
    int32_t v1 = g559; // 0x1e29175
    int32_t v2;
    if (v1 > 1) {
        int32_t v3 = 0; // esi
        g4 = 0;
        int32_t v4 = 0; // 0x1e2919e
        int32_t v5 = v1;
        int32_t v6 = 0; // 0x1e2919a
        int32_t v7;
        while (true) {
            int32_t v8 = v6; // edi
            int32_t v9 = (v5 - (v5 >> 31)) / 2; // 0x1e29198
            g2 = v9;
            int32_t v10; // 0x1e291e4
            int32_t v11; // 0x1e291e7
            if (v9 > v6) {
                // 0x1e2919e
                g5 = v4;
                int32_t v12 = v5;
                int32_t v13 = v6; // 0x1e291d58
                int32_t v14 = v4; // 0x1e291c0
                int32_t v15 = v4; // 0x1e291c2
                int32_t v16;
                int32_t v17;
                while (true) {
                    // 0x1e291a0
                    g2 = g539;
                    int32_t * v18 = (int32_t *)(g539 + v15); // 0x1e291a5
                    int32_t v19 = g539 + v14; // 0x1e291a8
                    int32_t * v20 = (int32_t *)v19; // 0x1e291a8
                    uint16_t v21 = *(int16_t *)(*v20 + 26); // 0x1e291ab
                    g2 = (int32_t)v21 | g539 & -0x10000;
                    int32_t v22; // 0x1e291d2
                    int32_t v23; // 0x1e291d5
                    if (*(int16_t *)(*v18 + 26) < v21) {
                        // 0x1e291b5
                        g2 = v19;
                        *v20 = *v18;
                        g2 = g539;
                        *(int32_t *)(g5 + g539) = *v20;
                        v17 = g4;
                        v16 = g559;
                        v23 = v8;
                        v22 = g5;
                    } else {
                        v17 = v14;
                        v16 = v12;
                        v23 = v13;
                        v22 = v15;
                    }
                    int32_t v24 = v22 + 4; // 0x1e291d2
                    g5 = v24;
                    int32_t v25 = v23 + 1; // 0x1e291d5
                    v8 = v25;
                    int32_t v26 = (v16 - (v16 >> 31)) / 2; // 0x1e291de
                    g2 = v26;
                    if (v26 <= v25) {
                        // break -> 0x1e291e4
                        break;
                    }
                    v12 = v16;
                    v13 = v25;
                    v14 = v17;
                    v15 = v24;
                }
                // 0x1e291e4
                v7 = v16;
                v11 = v3;
                v10 = v17;
            } else {
                v7 = v5;
                v11 = v6;
                v10 = v4;
            }
            int32_t v27 = v10 + 4; // 0x1e291e4
            g4 = v27;
            int32_t v28 = v11 + 1; // 0x1e291e7
            v3 = v28;
            if (v7 <= v28) {
                // break -> 0x1e291f0
                break;
            }
            v4 = v27;
            v5 = v7;
            v6 = v28;
        }
        v2 = v7;
    } else {
        v2 = v1;
    }
    // 0x1e291f0
    g8 = 0;
    g2 = g539;
    int32_t result; // 0x1e292ad
    if (v2 > 0) {
        while (true) {
          lab_0x1e2920f:;
            int32_t v29 = *(int32_t *)(g9 + 24); // 0x1e2920f
            g2 = v29;
            int32_t v30 = *(int32_t *)v29; // 0x1e29213
            g3 = v30;
            int32_t v31 = v30 + 52; // 0x1e29219
            g6 = v31;
            if (*(int32_t *)(v30 + 16) == 0) {
                // 0x1e29288
                *(int32_t *)(v31 + 8) = -1;
                goto lab_0x1e2928f;
            } else {
                // 0x1e2921e
                *(int32_t *)(g9 - 4) = v31;
                *(int32_t *)(g9 - 8) = (int32_t)&g542;
                *(int32_t *)(g9 - 12) = g3;
                int32_t v32 = function_1e3a2a2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e29225
                g2 = v32;
                int32_t v33 = g6;
                if (v32 == 0) {
                    // 0x1e29288
                    *(int32_t *)(v33 + 8) = -1;
                    goto lab_0x1e2928f;
                } else {
                    // 0x1e2922e
                    g4 = *(int32_t *)v33;
                    int32_t v34 = *(int32_t *)(v33 + 4); // 0x1e29230
                    g2 = v34;
                    *(int32_t *)(g9 + 16) = v34;
                    *(int32_t *)(g9 - 4) = g2;
                    *(int32_t *)(g9 - 8) = g4;
                    *(int32_t *)(g9 - 12) = (int32_t)&g549;
                    *(int32_t *)(g9 - 16) = 0;
                    *(int32_t *)(g9 - 20) = 0;
                    *(int32_t *)(g9 - 24) = *(int32_t *)(g6 + 12);
                    *(int32_t *)(g9 - 28) = *(int32_t *)(g6 + 8);
                    *(int32_t *)(g9 - 32) = *(int32_t *)(g9 + 20);
                    int32_t v35 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2924c
                    g2 = v35;
                    int32_t v36 = g5 & -0x10000 | (int32_t)*(int16_t *)(g3 + 26); // 0x1e29251
                    g5 = v36;
                    int32_t * v37 = (int32_t *)(g9 + 16); // 0x1e29255
                    g2 = *v37;
                    *(int32_t *)(g9 - 4) = v36;
                    *(int32_t *)(g9 - 8) = g2 - *(int32_t *)(g3 + 4);
                    int32_t v38 = g4; // 0x1e2925e
                    g2 = v38;
                    int32_t v39 = v38 - *(int32_t *)g3; // 0x1e29260
                    g2 = v39;
                    *(int32_t *)(g9 - 12) = v39;
                    *(int32_t *)(g9 - 16) = *(int32_t *)(g3 + 16);
                    *(int32_t *)(g9 - 20) = *v37;
                    *(int32_t *)(g9 - 24) = g4;
                    *(int32_t *)(g9 - 28) = (int32_t)&g555;
                    *(int32_t *)(g9 - 32) = *v37;
                    *(int32_t *)(g9 - 36) = g4;
                    *(int32_t *)(g9 - 40) = (int32_t)&g549;
                    *(int32_t *)(g9 - 44) = *(int32_t *)(g6 + 12);
                    *(int32_t *)(g9 - 48) = *(int32_t *)(g6 + 8);
                    int32_t v40 = function_1e3a5e4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e29281
                    g2 = v40;
                    goto lab_0x1e2928f;
                }
            }
        }
      lab_0x1e292a6:
        // 0x1e292a6
        result = g2;
    } else {
        result = g539;
    }
    // 0x1e292a6
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e2928f:;
    int32_t * v41 = (int32_t *)(g9 + 20); // 0x1e2928f
    *v41 = *v41 + 37;
    int32_t * v42 = (int32_t *)(g9 + 24); // 0x1e29294
    *v42 = *v42 + 4;
    int32_t v43 = g8 + 1; // 0x1e29299
    g8 = v43;
    if ((int32_t)g559 <= v43) {
        // break -> 0x1e292a6
        goto lab_0x1e292a6;
    }
    goto lab_0x1e2920f;
}

// Address range: 0x1e292ae - 0x1e29311
int32_t function_1e292ae(void) {
    int32_t v1 = g559; // 0x1e292af
    int32_t v2 = v1 - 1; // 0x1e292b5
    g2 = v2;
    g5 = v1;
    int32_t v3 = g3; // bp-16
    g7 = g539;
    int32_t v4 = 4 * v1 - 4 + g539; // 0x1e292c4
    g4 = v4;
    int32_t v5; // 0x1e2930c
    int32_t result; // 0x1e29310
    if (v2 >= 0) {
        int32_t v6 = 37 * v2; // 0x1e292ca
        g2 = v6;
        int32_t v7 = v6 + (int32_t)&g557; // 0x1e292cd
        g3 = v7;
        while (true) {
            int32_t v8 = *(int32_t *)v4; // 0x1e292d3
            g6 = v8;
            uint32_t v9 = *(int32_t *)(v8 + 60); // 0x1e292d5
            g5 = v9;
            int32_t v10 = v8 + 52; // 0x1e292d8
            g8 = v10;
            int32_t v11; // 0x1e292f7
            int32_t v12; // 0x1e292fa
            int32_t v13; // 0x1e292fd
            if (v9 >= 1) {
                // 0x1e292df
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = 0;
                *(int32_t *)(g9 - 12) = g3;
                *(int32_t *)(g9 - 16) = *(int32_t *)(g8 + 4);
                *(int32_t *)(g9 - 20) = *(int32_t *)g8;
                *(int32_t *)(g9 - 24) = *(int32_t *)(g8 + 12);
                *(int32_t *)(g9 - 28) = v9;
                *(int32_t *)(g9 - 32) = (int32_t)&g549;
                int32_t v14 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e292f2
                g2 = v14;
                v13 = g8;
                v12 = g3;
                v11 = g6;
            } else {
                v13 = v10;
                v12 = v7;
                v11 = v8;
            }
            int32_t v15 = v11 + 28; // 0x1e292f7
            g3 = v12 - 37;
            *(int32_t *)v15 = *(int32_t *)v13;
            int32_t v16 = g1 ? -4 : 4; // 0x1e292fd
            int32_t v17 = v16 + v15; // 0x1e292fd
            int32_t v18 = v16 + g8; // 0x1e292fd
            *(int32_t *)v17 = *(int32_t *)v18;
            int32_t v19 = v17 + v16; // 0x1e292fe
            int32_t v20 = v18 + v16; // 0x1e292fe
            *(int32_t *)v19 = *(int32_t *)v20;
            *(int32_t *)(v19 + v16) = *(int32_t *)(v20 + v16);
            int32_t v21 = g4 - 4; // 0x1e29301
            g4 = v21;
            int32_t v22 = g3; // 0x1e29304
            if (v22 < (int32_t)&g557) {
                // break -> 0x1e2930c
                break;
            }
            v7 = v22;
            v4 = v21;
        }
        // 0x1e2930c
        result = g2;
        v5 = g9;
    } else {
        result = v2;
        v5 = &v3;
    }
    // 0x1e2930c
    g3 = *(int32_t *)v5;
    g8 = *(int32_t *)(v5 + 8);
    return result;
}

// Address range: 0x1e29311 - 0x1e29384
int32_t function_1e29311(int32_t a1) {
    int32_t v1 = g6; // bp-8
    g6 = 0;
    int32_t v2 = g546; // 0x1e29315
    int32_t result;
    int32_t v3; // 0x1e29338
    if (v2 > 0) {
        int32_t v4 = g558; // 0x1e2931d
        g2 = v4;
        g8 = a1;
        int32_t v5 = 0; // 0x1e29345
        int32_t v6 = v4; // 0x1e2932a
        while (true) {
            // 0x1e29326
            if (*(int32_t *)v6 == a1) {
                // break -> 0x1e2933d
                break;
            }
            int32_t v7 = v6 + 4; // 0x1e2932a
            g2 = v7;
            int32_t v8 = v5 + 1; // 0x1e2932d
            g6 = v8;
            if (v8 >= v2) {
                goto lab_0x1e29336_2;
            }
            v5 = v8;
            v6 = v7;
        }
        int32_t v9; // 0x1e29364
        int32_t v10; // 0x1e2936a
        if (v5 < v2) {
            int32_t v11 = 4 * v5; // 0x1e29345
            g6 = v5 + 1;
            int32_t v12 = v4 + v11; // 0x1e2935230
            g2 = v12;
            int32_t v13 = *(int32_t *)(v12 + 4); // 0x1e2935734
            g5 = v13;
            *(int32_t *)v12 = v13;
            int32_t v14 = g6; // 0x1e2935c36
            int32_t v15 = g546; // 0x1e2935c37
            int32_t v16; // 0x1e2935c
            if (v14 < v15) {
                int32_t v17 = v11 + 4;
                g6 = v14 + 1;
                int32_t v18 = g558 + v17; // 0x1e29352
                g2 = v18;
                int32_t v19 = *(int32_t *)(v18 + 4); // 0x1e29357
                g5 = v19;
                *(int32_t *)v18 = v19;
                int32_t v20 = g6; // 0x1e2935c
                v16 = g546;
                while (v20 < v16) {
                    // 0x1e2934c
                    v17 += 4;
                    g6 = v20 + 1;
                    v18 = g558 + v17;
                    g2 = v18;
                    v19 = *(int32_t *)(v18 + 4);
                    g5 = v19;
                    *(int32_t *)v18 = v19;
                    v20 = g6;
                    v16 = g546;
                }
            } else {
                v16 = v15;
            }
            // 0x1e29364
            v10 = g8;
            v9 = v16;
        } else {
            v10 = a1;
            v9 = v2;
        }
        // 0x1e29364
        g546 = v9 - 1;
        int32_t v21 = *(int32_t *)(v10 + 68); // 0x1e2936a
        g2 = v21;
        int32_t v22; // 0x1e29377
        if (v21 != 0) {
            // 0x1e29371
            g2 = function_1e25401(v21);
            v22 = g8;
        } else {
            v22 = v10;
        }
        // 0x1e29377
        *(int32_t *)(g9 - 4) = v22;
        function_1e25401((int32_t)&g708);
        v3 = g9;
        result = 1;
        goto lab_0x1e29338;
    } else {
        goto lab_0x1e29336_2;
    }
  lab_0x1e29336_2:
    v3 = &v1;
    result = 0;
    goto lab_0x1e29338;
  lab_0x1e29338:
    // 0x1e29338
    g2 = result;
    g6 = *(int32_t *)v3;
    g8 = *(int32_t *)(v3 + 4);
    return result;
}

// Address range: 0x1e29384 - 0x1e293ea
int32_t function_1e29384(int32_t a1) {
    int32_t v1 = g6; // bp-8
    g6 = 0;
    int32_t v2 = g559; // 0x1e29388
    int32_t result;
    int32_t v3; // 0x1e293ab
    if (v2 > 0) {
        // 0x1e29390
        g2 = g539;
        g8 = a1;
        int32_t v4 = 0; // 0x1e293b8
        int32_t v5 = g539; // 0x1e2939d
        while (true) {
            // 0x1e29399
            if (*(int32_t *)v5 == a1) {
                // break -> 0x1e293b0
                break;
            }
            int32_t v6 = v5 + 4; // 0x1e2939d
            g2 = v6;
            int32_t v7 = v4 + 1; // 0x1e293a0
            g6 = v7;
            if (v2 <= v7) {
                goto lab_0x1e293a9_2;
            }
            v4 = v7;
            v5 = v6;
        }
        int32_t v8; // 0x1e293d7
        int32_t v9;
        if (v2 > v4) {
            int32_t v10 = 4 * v4; // 0x1e293b8
            g6 = v4 + 1;
            int32_t v11 = g539 + v10; // 0x1e293c538
            g2 = v11;
            int32_t v12 = *(int32_t *)(v11 + 4); // 0x1e293ca42
            g5 = v12;
            *(int32_t *)v11 = v12;
            int32_t v13 = g559; // 0x1e293cf45
            int32_t v14 = g6; // 0x1e293cf46
            int32_t v15; // 0x1e293cf
            if (v13 > v14) {
                int32_t v16 = v10 + 4;
                g6 = v14 + 1;
                int32_t v17 = g539 + v16; // 0x1e293c5
                g2 = v17;
                int32_t v18 = *(int32_t *)(v17 + 4); // 0x1e293ca
                g5 = v18;
                *(int32_t *)v17 = v18;
                v15 = g559;
                while (v15 > g6) {
                    // 0x1e293bf
                    v16 += 4;
                    g6++;
                    v17 = g539 + v16;
                    g2 = v17;
                    v18 = *(int32_t *)(v17 + 4);
                    g5 = v18;
                    *(int32_t *)v17 = v18;
                    v15 = g559;
                }
            } else {
                v15 = v13;
            }
            // 0x1e293d7
            v9 = v15;
            v8 = g8;
        } else {
            v9 = v2;
            v8 = a1;
        }
        // 0x1e293d7
        g559 = v9 - 1;
        function_1e25401(v8);
        v3 = g9;
        result = 1;
        goto lab_0x1e293ab;
    } else {
        goto lab_0x1e293a9_2;
    }
  lab_0x1e293a9_2:
    v3 = &v1;
    result = 0;
    goto lab_0x1e293ab;
  lab_0x1e293ab:
    // 0x1e293ab
    g2 = result;
    g6 = *(int32_t *)v3;
    g8 = *(int32_t *)(v3 + 4);
    return result;
}

// Address range: 0x1e293ea - 0x1e29706
int32_t function_1e293ea(void) {
    // 0x1e293ea
    g2 = g554;
    int32_t v1;
    int32_t v2;
    int32_t v3; // 0x1e29459
    int32_t v4; // 0x1e29517
    if (g540 > 0) {
        v2 = g554;
        v1 = 0;
        while (true) {
          lab_0x1e2940f:
            // 0x1e2940f
            g2 = v2;
            int32_t v5 = *(int32_t *)v2; // 0x1e29412
            g8 = v5;
            unsigned char v6 = *(char *)(v5 + 25); // 0x1e29414
            g2 = v6;
            if (v6 == 0) {
                int32_t v7 = v5 + 52; // 0x1e29426
                g6 = v7;
                *(int32_t *)(g9 - 4) = v7;
                *(int32_t *)(g9 - 8) = (int32_t)&g542;
                *(int32_t *)(g9 - 12) = g8;
                int32_t v8 = function_1e3a2a2(v2, (int32_t)&g708, (int32_t)&g708); // 0x1e29430
                g2 = v8;
                if (v8 == 0) {
                    // 0x1e294f2
                    *(int32_t *)(g8 + 60) = -1;
                    goto lab_0x1e294f9;
                } else {
                    int32_t v9 = g8; // 0x1e2943d
                    if (*(int32_t *)(v9 + 16) != 0) {
                        goto lab_0x1e294f9;
                    } else {
                        // 0x1e29447
                        g4 = *(int32_t *)g6;
                        g2 = *(int32_t *)(v9 + 60);
                        g6 = *(int32_t *)(v9 + 56);
                        *(int32_t *)(g9 - 4) = 0xffff;
                        g8 += 64;
                        *(int32_t *)(g9 - 8) = g6;
                        *(int32_t *)(g9 - 12) = g4;
                        v3 = g2;
                        *(int32_t *)(g9 - 16) = g8;
                        *(int32_t *)(g9 - 20) = g2;
                        *(int32_t *)(g9 - 24) = (int32_t)&g555;
                        int32_t v10 = function_1e3a477(0x10000 * v3 / 0x10000, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e29463
                        g2 = v10;
                        if (g196 == 0) {
                            goto lab_0x1e294de;
                        } else {
                            goto lab_0x1e294c4;
                        }
                    }
                }
            } else {
                if (v6 == 1) {
                    // 0x1e29473
                    int32_t v11; // 0x1e29487
                    if (*(int32_t *)(v5 + 36) > 0) {
                        int32_t v12 = v5 + 52; // 0x1e29479
                        g2 = v12;
                        g5 = v5 + 28;
                        *(int32_t *)(g9 - 4) = v12;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = g5;
                        g2 = function_1e3a358(v2, (int32_t)&g708, (int32_t)&g708);
                        v11 = g8;
                    } else {
                        v11 = v5;
                    }
                    int32_t v13 = v11 + 52; // 0x1e29487
                    g6 = v13;
                    *(int32_t *)(g9 - 4) = v13;
                    *(int32_t *)(g9 - 8) = (int32_t)&g542;
                    *(int32_t *)(g9 - 12) = g6;
                    int32_t v14 = function_1e3a2a2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e29491
                    g2 = v14;
                    if (v14 == 0) {
                        // 0x1e294f2
                        *(int32_t *)(g8 + 60) = -1;
                        goto lab_0x1e294f9;
                    } else {
                        // 0x1e2949a
                        g4 = *(int32_t *)g6;
                        int32_t v15 = g8; // 0x1e2949c
                        g2 = *(int32_t *)(v15 + 60);
                        g6 = *(int32_t *)(v15 + 56);
                        *(int32_t *)(g9 - 4) = 0xffff;
                        g8 += 64;
                        *(int32_t *)(g9 - 8) = g6;
                        *(int32_t *)(g9 - 12) = g4;
                        int32_t v16 = g2; // 0x1e294ac
                        *(int32_t *)(g9 - 16) = g8;
                        *(int32_t *)(g9 - 20) = g2;
                        *(int32_t *)(g9 - 24) = (int32_t)&g555;
                        int32_t v17 = function_1e3a477(0x10000 * v16 / 0x10000, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e294b6
                        g2 = v17;
                        if (g196 == 0) {
                            v3 = v16;
                            goto lab_0x1e294de;
                        } else {
                            v3 = v16;
                            goto lab_0x1e294c4;
                        }
                    }
                } else {
                    goto lab_0x1e294f9;
                }
            }
        }
      lab_0x1e2950f:
        // 0x1e2950f
        v4 = g540;
    } else {
        v4 = g540;
    }
    // 0x1e2950f
    g6 = 0;
    int32_t v18; // 0x1e2951f
    int32_t v19; // 0x1e2953a
    int32_t v20; // 0x1e2953a20
    int32_t v21; // 0x1e2953b
    int32_t v22; // 0x1e2953e
    int32_t v23; // 0x1e2953e23
    int32_t v24; // 0x1e2951f
    if (v4 > 0) {
        v23 = v4;
        v20 = 0;
        v18 = g554;
        while (true) {
          lab_0x1e2951f:
            // 0x1e2951f
            v24 = *(int32_t *)v18;
            g5 = v24;
            if (*(int32_t *)(v24 + 60) > 0) {
                unsigned char v25 = *(char *)(v24 + 25); // 0x1e29527
                g2 = v25;
                if (v25 == 0) {
                    goto lab_0x1e29534;
                } else {
                    if (v25 != 1) {
                        v22 = v23;
                        v21 = v18;
                        v19 = v20;
                        goto lab_0x1e2953a;
                    } else {
                        goto lab_0x1e29534;
                    }
                }
            } else {
                v22 = v23;
                v21 = v18;
                v19 = v20;
                goto lab_0x1e2953a;
            }
        }
    }
  lab_0x1e29546:
    // 0x1e29546
    g2 = function_1e29172();
    int32_t v26; // edx
    int32_t v27; // esi
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33; // 0x1e29606
    int32_t * v34; // 0x1e29650
    int32_t v35; // 0x1e296bd
    int32_t v36; // 0x1e296c3
    int32_t v37; // 0x1e29681
    if (g195 != 0) {
        // 0x1e29558
        function_1e273ff();
        g5 = g554;
        int32_t v38 = (int32_t)g552 + g193; // 0x1e2956f
        int32_t v39 = (int32_t)g553 + g194; // 0x1e29580
        g2 = v39;
        if (g540 > 0) {
            int32_t v40 = 0x10000 * v39 / 0x10000; // 0x1e295aa
            int32_t v41 = 0x10000 * v38 / 0x10000; // 0x1e295b0
            int32_t v42 = g554;
            int32_t v43 = 0;
            while (true) {
                // 0x1e29592
                g2 = v42;
                int32_t v44 = *(int32_t *)v42; // 0x1e29595
                int32_t v45 = v44; // ebx
                uint32_t v46 = *(int32_t *)(v44 + 60); // 0x1e29597
                g2 = v46;
                int32_t v47 = v44 + 52; // 0x1e2959a
                v27 = v47;
                int32_t v48; // 0x1e295c5
                if (v46 >= 1) {
                    // 0x1e295a1
                    v26 = *(int32_t *)(v44 + 56);
                    g5 = *(int32_t *)v47;
                    *(int32_t *)(g9 - 4) = *(int32_t *)(v44 + 64);
                    *(int32_t *)(g9 - 8) = v46;
                    *(int32_t *)(g9 - 12) = v26 + v40;
                    int32_t v49 = g5 + v41; // 0x1e295b3
                    g2 = v49;
                    *(int32_t *)(g9 - 16) = v49;
                    *(int32_t *)(g9 - 20) = v26;
                    *(int32_t *)(g9 - 24) = g5;
                    *(int32_t *)(g9 - 28) = (int32_t)&g549;
                    int32_t v50 = function_1e27433(v42, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e295bd
                    g2 = v50;
                    v48 = v27;
                } else {
                    v48 = v47;
                    v45 = v44;
                }
                int32_t v51 = v45 + 28; // 0x1e295c2
                *(int32_t *)v51 = *(int32_t *)v48;
                int32_t v52 = g1 ? -4 : 4; // 0x1e295c5
                int32_t v53 = v52 + v51; // 0x1e295c5
                int32_t v54 = v52 + v27; // 0x1e295c5
                *(int32_t *)v53 = *(int32_t *)v54;
                int32_t v55 = v53 + v52; // 0x1e295c6
                int32_t v56 = v54 + v52; // 0x1e295c6
                *(int32_t *)v55 = *(int32_t *)v56;
                int32_t v57 = v55 + v52; // 0x1e295c7
                *(int32_t *)v57 = *(int32_t *)(v56 + v52);
                g6 = v57 + v52;
                if (*(char *)(v45 + 24) != 0) {
                    // 0x1e295cf
                    *(int32_t *)(g9 - 4) = v45;
                    g2 = function_1e29311((int32_t)&g708);
                }
                int32_t v58 = v42 + 4; // 0x1e295d5
                int32_t v59 = v43 + 1; // 0x1e295d9
                g2 = v59;
                if (v59 >= g540) {
                    // break -> 0x1e295e7
                    break;
                }
                v42 = v58;
                v43 = v59;
            }
        }
        // 0x1e295e7
        g2 = g539;
        if ((int32_t)g559 > 0) {
            // 0x1e29603
            v35 = 0x10000 * v39 / 0x10000;
            v36 = 0x10000 * v38 / 0x10000;
            v29 = g539;
            v28 = 0;
            while (true) {
              lab_0x1e29603:
                // 0x1e29603
                g2 = v29;
                v33 = *(int32_t *)v29;
                v27 = v33;
                int32_t v60 = *(int32_t *)(v33 + 28); // 0x1e29608
                int32_t v61 = *(int32_t *)(v33 + 52); // 0x1e2960b
                g5 = v61;
                int32_t v62; // 0x1e2966a
                if (v60 > v61) {
                    int32_t v63 = *(int32_t *)(v33 + 36) - v61; // 0x1e29618
                    g2 = v63;
                    v32 = v61;
                    v62 = v60 + 1 + v63;
                } else {
                    int32_t v64 = *(int32_t *)(v33 + 60) - v60; // 0x1e29626
                    g2 = v64;
                    v32 = v60;
                    v62 = v61 + 1 + v64;
                }
                int32_t v65 = v62; // edi
                int32_t v66 = *(int32_t *)(v33 + 56); // 0x1e2962c
                g2 = v66;
                int32_t v67 = *(int32_t *)(v33 + 32); // 0x1e2962f
                int32_t v68; // 0x1e2966e
                if (v66 < v67) {
                    // 0x1e29636
                    v31 = v66;
                    v68 = v67 + 1 + *(int32_t *)(v33 + 40) - v66;
                } else {
                    // 0x1e29644
                    v31 = v67;
                    v68 = v66 + 1 + *(int32_t *)(v33 + 64) - v67;
                }
                // 0x1e29650
                v34 = (int32_t *)(v33 + 60);
                int32_t v69 = *v34; // 0x1e29650
                g2 = v69;
                if (*(int32_t *)(v33 + 36) + v69 < v62) {
                    goto lab_0x1e29686;
                } else {
                    // 0x1e2965c
                    if (*(int32_t *)(v33 + 64) + *(int32_t *)(v33 + 40) < v68) {
                        goto lab_0x1e29686;
                    } else {
                        if (v69 < 1) {
                            goto lab_0x1e29686;
                        } else {
                            if (v62 < 1) {
                                goto lab_0x1e296d5;
                            } else {
                                // 0x1e2966e
                                *(int32_t *)(g9 - 4) = v68;
                                g2 = v35;
                                *(int32_t *)(g9 - 8) = v65;
                                *(int32_t *)(g9 - 12) = g2 + v31;
                                int32_t v70 = v32 + v36; // 0x1e2967a
                                g2 = v70;
                                *(int32_t *)(g9 - 16) = v70;
                                *(int32_t *)(g9 - 20) = v31;
                                v37 = g9 - 24;
                                *(int32_t *)v37 = v32;
                                goto lab_0x1e296cb;
                            }
                        }
                    }
                }
            }
        } else {
            v30 = g539;
        }
      lab_0x1e296eb:
        // 0x1e296eb
        g2 = function_1e2747b(v30);
    }
    // 0x1e296f0
    g540 = 0;
    int32_t result = function_1e292ae(); // 0x1e296fa
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e29686:;
    uint32_t v71 = *v34; // 0x1e29686
    g2 = v71;
    if (v71 >= 1) {
        // 0x1e2968d
        *(int32_t *)(g9 - 4) = *(int32_t *)(v33 + 64);
        *(int32_t *)(g9 - 8) = v71;
        int32_t v72 = *(int32_t *)(v27 + 56); // 0x1e29691
        *(int32_t *)(g9 - 12) = v72 + v35;
        int32_t v73 = g5 + v36; // 0x1e2969d
        g2 = v73;
        *(int32_t *)(g9 - 16) = v73;
        *(int32_t *)(g9 - 20) = v72;
        *(int32_t *)(g9 - 24) = g5;
        *(int32_t *)(g9 - 28) = (int32_t)&g549;
        int32_t v74 = function_1e27433(v32, v31, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e296a7
        g2 = v74;
    } else {
        v27 = v33;
    }
    int32_t v75 = *(int32_t *)(v27 + 36); // 0x1e296ac
    if (v75 < 1) {
        goto lab_0x1e296d5;
    } else {
        // 0x1e296b3
        g5 = *(int32_t *)(v27 + 32);
        v26 = *(int32_t *)(v27 + 28);
        *(int32_t *)(g9 - 4) = *(int32_t *)(v27 + 40);
        *(int32_t *)(g9 - 8) = v75;
        *(int32_t *)(g9 - 12) = g5 + v35;
        int32_t v76 = v26 + v36; // 0x1e296c6
        g2 = v76;
        *(int32_t *)(g9 - 16) = v76;
        *(int32_t *)(g9 - 20) = g5;
        int32_t v77 = g9 - 24; // 0x1e296ca
        *(int32_t *)v77 = v26;
        v37 = v77;
        goto lab_0x1e296cb;
    }
  lab_0x1e296d5:;
    int32_t v78 = v29 + 4; // 0x1e296d5
    int32_t v79 = v28 + 1; // 0x1e296d9
    g2 = v79;
    if (v79 >= (int32_t)g559) {
        v30 = v78;
        // break -> 0x1e296eb
        goto lab_0x1e296eb;
    }
    v29 = v78;
    v28 = v79;
    goto lab_0x1e29603;
  lab_0x1e296cb:
    // 0x1e296cb
    *(int32_t *)(v37 - 4) = (int32_t)&g549;
    int32_t v80 = function_1e27433((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e296d0
    g2 = v80;
    goto lab_0x1e296d5;
  lab_0x1e2953a:;
    int32_t v81 = v19 + 1; // 0x1e2953a
    g6 = v81;
    if (v81 >= v22) {
        // break -> 0x1e29546
        goto lab_0x1e29546;
    }
    v23 = v22;
    v20 = v81;
    v18 = v21 + 4;
    goto lab_0x1e2951f;
  lab_0x1e29534:
    // 0x1e29534
    *(int32_t *)(g9 - 4) = v24;
    g2 = function_1e290db((int32_t)&g708);
    v22 = g540;
    v21 = g8;
    v19 = g6;
    goto lab_0x1e2953a;
  lab_0x1e294f9:;
    int32_t v82 = v1 + 1; // 0x1e294fd
    g2 = v82;
    if (v82 >= g540) {
        // break -> 0x1e2950f
        goto lab_0x1e2950f;
    }
    v2 += 4;
    v1 = v82;
    goto lab_0x1e2940f;
  lab_0x1e294de:
    // 0x1e294de
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g9 - 12) = g4;
    *(int32_t *)(g9 - 16) = g8;
    *(int32_t *)(g9 - 20) = 0x10000 * v3 / 0x10000;
    *(int32_t *)(g9 - 24) = (int32_t)&g549;
    int32_t v83 = function_1e27576((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e294eb
    g2 = v83;
    goto lab_0x1e294f9;
  lab_0x1e294c4:
    // 0x1e294c4
    *(int32_t *)(g9 - 4) = g6;
    g2 = g196;
    *(int32_t *)(g9 - 8) = g4;
    *(int32_t *)(g9 - 12) = g2;
    *(int32_t *)(g9 - 16) = g6;
    *(int32_t *)(g9 - 20) = g4;
    *(int32_t *)(g9 - 24) = g8;
    *(int32_t *)(g9 - 28) = 0x10000 * v3 / 0x10000;
    *(int32_t *)(g9 - 32) = (int32_t)&g549;
    int32_t v84 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e294d7
    g2 = v84;
    goto lab_0x1e294f9;
}

// Address range: 0x1e29706 - 0x1e2979b
int32_t function_1e29706(void) {
    // 0x1e29706
    g8 = 0;
    g2 = function_1e273a9((int32_t)&g549);
    g2 = function_1e3a44f(&g555);
    if (g546 > g8) {
        // 0x1e29726
        g6 = 0;
        int32_t v1 = g558; // 0x1e29728
        g2 = v1;
        *(int32_t *)(g9 - 4) = *(int32_t *)v1;
        g2 = function_1e29311((int32_t)&g708);
        int32_t v2 = g6 + 4; // 0x1e29736
        g6 = v2;
        while (g546 > g8) {
            // 0x1e29728
            v1 = g558;
            g2 = v1;
            *(int32_t *)(g9 - 4) = *(int32_t *)(v1 + v2);
            g2 = function_1e29311((int32_t)&g708);
            v2 = g6 + 4;
            g6 = v2;
        }
    }
    // 0x1e29741
    g8 = 0;
    if ((int32_t)g559 > 0) {
        // 0x1e2974b
        g6 = 0;
        g2 = g539;
        *(int32_t *)(g9 - 4) = *(int32_t *)g539;
        g2 = function_1e29384((int32_t)&g708);
        int32_t v3 = g6 + 4; // 0x1e2975b
        g6 = v3;
        while ((int32_t)g559 > g8) {
            // 0x1e2974d
            g2 = g539;
            *(int32_t *)(g9 - 4) = *(int32_t *)(g539 + v3);
            g2 = function_1e29384((int32_t)&g708);
            v3 = g6 + 4;
            g6 = v3;
        }
    }
    // 0x1e29766
    g2 = g539;
    *(int32_t *)(g9 - 4) = g539;
    function_1e25401((int32_t)&g708);
    g2 = g554;
    *(int32_t *)(g9 - 4) = g554;
    function_1e25401((int32_t)&g708);
    int32_t v4 = g558; // 0x1e2977c
    g2 = v4;
    *(int32_t *)(g9 - 4) = v4;
    function_1e25401((int32_t)&g708);
    g2 = 0;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g546 = 0;
    g540 = 0;
    g559 = 0;
    return 0;
}

// Address range: 0x1e2979b - 0x1e298bd
int32_t function_1e2979b(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2979b
    g2 = a3;
    g5 = a2;
    g159++;
    g548 = a2;
    g541 = a3;
    g8 = 4000;
    g547 = (float80_t)(float32_t)a2 + 4294967296.0L / (float80_t)(float32_t)a3;
    int32_t v1 = function_1e25371(4000); // 0x1e297d2
    g2 = v1;
    g558 = v1;
    int32_t v2 = function_1e25371(g8); // 0x1e297dd
    g2 = v2;
    g554 = v2;
    int32_t v3 = function_1e25371(80); // 0x1e297e9
    g2 = v3;
    g6 = a2;
    g8 = a1;
    g539 = v3;
    g4 = &g555;
    g2 = function_1e27332((int32_t)&g549, a1, a2);
    g3 = 0;
    function_1e3a408(g4, g8, g6);
    int32_t v4 = g556; // 0x1e29816
    g2 = v4;
    int32_t v5 = (int32_t)*(int16_t *)&g555; // 0x1e2981d
    g5 = v5;
    int32_t v6 = g3; // 0x1e29829
    g2 = function_1e3a477(g4, v5, v4, v6, v6, 0xffff);
    int32_t v7 = g3; // 0x1e29833
    g543 = v7;
    g542 = v7;
    g4 = &g557;
    g544 = g8;
    g545 = g6;
    int16_t v8 = v7; // 0x1e29850
    g553 = v8;
    g552 = v8;
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = 64;
    *(int32_t *)(g9 - 12) = 64;
    *(int32_t *)(g9 - 16) = g4;
    g4 += 37;
    int32_t v9 = function_1e27346((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e29866
    g2 = v9;
    while (g4 < (int32_t)&g558) {
        // 0x1e2985c
        *(int32_t *)(g9 - 4) = 1;
        *(int32_t *)(g9 - 8) = 64;
        *(int32_t *)(g9 - 12) = 64;
        *(int32_t *)(g9 - 16) = g4;
        g4 += 37;
        v9 = function_1e27346((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = v9;
    }
    int32_t v10 = *(int32_t *)(g9 + 20); // 0x1e29873
    g2 = v10;
    g5 = 0;
    g196 = v10;
    int32_t result; // 0x1e298ab
    if (v10 == 0) {
        // 0x1e29895
        g2 = 0;
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = g2;
        *(int32_t *)(g9 - 12) = g2;
        *(int32_t *)(g9 - 16) = g551;
        *(int32_t *)(g9 - 20) = g550;
        *(int32_t *)(g9 - 24) = (int32_t)&g549;
        result = function_1e27576((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    } else {
        // 0x1e29882
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = v10;
        *(int32_t *)(g9 - 16) = g5;
        *(int32_t *)(g9 - 20) = g5;
        *(int32_t *)(g9 - 24) = g6;
        *(int32_t *)(g9 - 28) = g8;
        *(int32_t *)(g9 - 32) = (int32_t)&g549;
        int32_t v11 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2988e
        result = v11;
    }
    // 0x1e298b0
    g2 = result;
    g3 = *(int32_t *)g9;
    g159--;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e298bd - 0x1e298eb
int32_t function_1e298bd(int32_t result) {
    // 0x1e298bd
    g2 = result;
    if (*(char *)(result + 25) == 2) {
        // 0x1e298e8
        return result;
    }
    int32_t v1 = g540; // 0x1e298c7
    int32_t result2; // 0x1e298e8
    if (v1 < 999) {
        // 0x1e298d3
        g5 = v1;
        g7 = g554;
        *(int32_t *)(g554 + 4 * v1) = result;
        g540++;
        result2 = g2;
    } else {
        result2 = result;
    }
    // 0x1e298e8
    return result2;
}

// Address range: 0x1e298eb - 0x1e299e2
int32_t function_1e298eb(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = function_1e25371(92); // 0x1e298f3
    g2 = v1;
    int32_t result;
    if (v1 != 0) {
        // 0x1e29905
        g5 = a5;
        int32_t * v2 = (int32_t *)v1; // 0x1e2990e
        *v2 = a4;
        g2 = 0;
        *(int32_t *)(v1 + 4) = g5;
        g5 = a1;
        *(int32_t *)(v1 + 16) = a2;
        *(char *)(v1 + 25) = (char)g5;
        *(char *)(v1 + 24) = (char)g2;
        *(int32_t *)(v1 + 68) = g2;
        *(int32_t *)(v1 + 72) = g2;
        if (a6 == g2) {
            // 0x1e29937
            g2 = 0;
            *(int32_t *)(v1 + 76) = 0;
            *(int32_t *)(v1 + 80) = g2;
            g2 = -1;
            *(int32_t *)(v1 + 84) = -1;
            *(int32_t *)(v1 + 88) = g2;
        } else {
            int32_t v3 = v1 + 76; // 0x1e2992e
            *(int32_t *)v3 = *(int32_t *)a6;
            int32_t v4 = g1 ? -4 : 4; // 0x1e29931
            int32_t v5 = v4 + v3; // 0x1e29931
            int32_t v6 = v4 + a6; // 0x1e29931
            *(int32_t *)v5 = *(int32_t *)v6;
            int32_t v7 = v5 + v4; // 0x1e29932
            int32_t v8 = v6 + v4; // 0x1e29932
            *(int32_t *)v7 = *(int32_t *)v8;
            *(int32_t *)(v7 + v4) = *(int32_t *)(v8 + v4);
        }
        // 0x1e2994a
        if (a2 == 0) {
            // 0x1e2995c
            g2 = 0;
            *(int32_t *)(v1 + 8) = 0;
            *(int32_t *)(v1 + 12) = g2;
        } else {
            int32_t v9 = *(int32_t *)(a2 + 12); // 0x1e2994e
            g2 = v9;
            *(int32_t *)(v1 + 8) = v9;
            *(int32_t *)(v1 + 12) = *(int32_t *)(a2 + 16);
        }
        // 0x1e29964
        g2 = a3;
        g7 = 0;
        int32_t * v10 = (int32_t *)(v1 + 20); // 0x1e29969
        *v10 = a3;
        int32_t * v11 = (int32_t *)(v1 + 48); // 0x1e2996e
        *v11 = g7;
        int32_t * v12 = (int32_t *)(v1 + 44); // 0x1e29971
        *v12 = g7;
        if (a3 == 0) {
            // 0x1e29976
            if (g5 != 2) {
                // 0x1e2997b
                *v10 = g197;
                *v12 = a4 - g198;
                int32_t v13 = a5 - g199; // 0x1e29992
                g2 = v13;
                *v11 = v13;
            }
        }
        int32_t v14 = v1 + 28; // 0x1e2999b
        *(int32_t *)v14 = *v2;
        int32_t v15 = g1 ? -4 : 4; // 0x1e299a0
        int32_t v16 = v15 + v14; // 0x1e299a0
        int32_t v17 = v15 + v1; // 0x1e299a0
        *(int32_t *)v16 = *(int32_t *)v17;
        int32_t v18 = v16 + v15; // 0x1e299a1
        int32_t v19 = v17 + v15; // 0x1e299a1
        *(int32_t *)v18 = *(int32_t *)v19;
        *(int32_t *)(v18 + v15) = *(int32_t *)(v19 + v15);
        if (g5 != 2) {
            int32_t v20 = g546; // 0x1e299bf
            g2 = v20;
            int32_t v21 = g558; // 0x1e299c4
            g5 = v21;
            *(int32_t *)(v21 + 4 * v20) = v1;
            g546++;
            g2 = function_1e298bd(v1);
            result = v1;
        } else {
            int32_t v22 = g559; // 0x1e299a9
            g2 = v22;
            g5 = g539;
            *(int32_t *)(g539 + 4 * v22) = v1;
            g559 = (int32_t)g559 + 1;
            result = v1;
        }
    } else {
        // 0x1e298fe
        result = 0;
    }
    // 0x1e299db
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e299e2 - 0x1e29a04
int32_t function_1e299e2(int32_t result, int32_t a2, int32_t a3) {
    // 0x1e299e2
    g2 = result;
    g197 = result;
    g5 = a2;
    g198 = a2;
    g199 = a3;
    return result;
}

// Address range: 0x1e29a04 - 0x1e29a40
int32_t function_1e29a04(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g3; // bp-4
    g5 = a1;
    if (a1 == 0) {
        // 0x1e29a3c
        g3 = *(int32_t *)(int32_t)&v1;
        return g2;
    }
    // 0x1e29a0f
    *(int32_t *)a1 = a4;
    *(int32_t *)(a1 + 4) = a5;
    g2 = a2;
    *(int32_t *)(a1 + 16) = a2;
    if (a2 != 0) {
        // 0x1e29a24
        *(int32_t *)(a1 + 8) = *(int32_t *)(a2 + 12);
        int32_t v2 = *(int32_t *)(a2 + 16); // 0x1e29a2a
        g2 = v2;
        *(int32_t *)(a1 + 12) = v2;
    }
    // 0x1e29a30
    g2 = a3;
    *(int32_t *)(a1 + 20) = a3;
    int32_t result = function_1e298bd(a1); // 0x1e29a37
    g2 = result;
    // 0x1e29a3c
    g3 = *(int32_t *)g9;
    return result;
}

