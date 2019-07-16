#include "pinball.h"

// Address range: 0x1e273a9 - 0x1e273ff
int32_t function_1e273a9(int32_t a1) {
    int32_t v1 = g6; // bp-4
    g6 = a1;
    if (a1 == 0) {
        // 0x1e273b2
        g2 = -1;
        // 0x1e273fb
        g6 = *(int32_t *)(int32_t)&v1;
        return -1;
    }
    char v2 = *(char *)(a1 + 24); // 0x1e273b9
    g2 = v2;
    if (v2 == 1) {
        // 0x1e273c9
        g2 = function_1e25401(*(int32_t *)(a1 + 8));
    } else {
        if (v2 == 2) {
            int32_t * pMem = (int32_t *)a1; // 0x1e273d3
            int32_t * hMem = GlobalHandle((int32_t *)*pMem); // 0x1e273d5
            g2 = (int32_t)hMem;
            g2 = GlobalUnlock(hMem);
            int32_t * hMem2 = GlobalHandle((int32_t *)*pMem); // 0x1e273e4
            g2 = (int32_t)hMem2;
            g2 = (int32_t)GlobalFree(hMem2);
        }
    }
    // 0x1e273f1
    g2 = 0;
    g5 = 9;
    __asm_rep_stosd_memset((char *)a1, 0, 9);
    g5 = 0;
    *(char *)((g1 ? -36 : 36) + a1) = (char)g2;
    // 0x1e273fb
    g6 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e273ff - 0x1e27433
int32_t function_1e273ff(void) {
    // 0x1e273ff
    g2 = g657;
    int32_t * hdc = GetDC((int32_t *)g657); // 0x1e27405
    int32_t v1 = (int32_t)hdc; // 0x1e27405
    g2 = v1;
    g5 = 0;
    g654 = v1;
    g653 = 0;
    g2 = (int32_t)SelectPalette(hdc, (int32_t *)g656, false);
    int32_t result = RealizePalette((int32_t *)g654); // 0x1e2742c
    g2 = result;
    return result;
}

// Address range: 0x1e27433 - 0x1e2747b
int32_t function_1e27433(int32_t a1, int32_t xSrc, int32_t a3, int32_t xDest, int32_t yDest, int32_t DestWidth, int32_t DestHeight) {
    int32_t v1 = g3; // bp-4
    int32_t v2; // 0x1e27477
    int32_t result; // 0x1e27478
    if (g188 != 0) {
        // 0x1e27433
        result = g2;
        v2 = v1;
    } else {
        // 0x1e2743f
        g5 = a1;
        int32_t lpbmi = *(int32_t *)a1; // 0x1e2744c
        int32_t lpBits = *(int32_t *)(a1 + 8); // 0x1e2744e
        int32_t v3 = *(int32_t *)(a1 + 16); // 0x1e27455
        g2 = g654;
        int32_t v4 = StretchDIBits((int32_t *)g654, xDest, yDest, DestWidth, DestHeight, xSrc, v3 - DestHeight - a3, DestWidth, DestHeight, (int32_t *)lpBits, (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0002 *)lpbmi, 1, 0xcc0020); // 0x1e27471
        g2 = v4;
        result = v4;
        v2 = g9;
    }
    // 0x1e27477
    g3 = *(int32_t *)v2;
    return result;
}

// Address range: 0x1e2747b - 0x1e2748e
int32_t function_1e2747b(int32_t a1) {
    // 0x1e2747b
    g2 = g654;
    int32_t result = ReleaseDC((int32_t *)g657, (int32_t *)g654); // 0x1e27487
    g2 = result;
    return result;
}

// Address range: 0x1e2748e - 0x1e27508
int32_t function_1e2748e(int32_t a1, int32_t xSrc, int32_t a3, int32_t xDest, int32_t yDest, int32_t DestWidth, int32_t DestHeight) {
    // 0x1e2748e
    g2 = g657;
    int32_t * hdc = GetDC((int32_t *)g657); // 0x1e27498
    int32_t v1 = (int32_t)hdc; // 0x1e27498
    g2 = v1;
    int32_t result; // 0x1e274fd
    if (hdc != NULL) {
        // 0x1e274a4
        g2 = g656;
        g2 = (int32_t)SelectPalette(hdc, (int32_t *)g656, false);
        g2 = RealizePalette(hdc);
        if (g188 == 0) {
            // 0x1e274c3
            g5 = a1;
            g7 = DestHeight;
            int32_t lpbmi = *(int32_t *)a1; // 0x1e274d0
            int32_t lpBits = *(int32_t *)(a1 + 8); // 0x1e274d2
            int32_t ySrc = *(int32_t *)(a1 + 16) - a3 - DestHeight; // 0x1e274df
            g2 = ySrc;
            g2 = StretchDIBits(hdc, xDest, yDest, DestWidth, DestHeight, xSrc, ySrc, DestWidth, DestHeight, (int32_t *)lpBits, (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0002 *)lpbmi, 1, 0xcc0020);
        }
        // 0x1e274f6
        *(int32_t *)(g9 - 4) = v1;
        g2 = g657;
        *(int32_t *)(g9 - 8) = g657;
        result = ReleaseDC(&g708, &g708);
        g2 = result;
    } else {
        result = v1;
    }
    // 0x1e27503
    g8 = *(int32_t *)g9;
    g3 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e27508 - 0x1e27576
int32_t function_1e27508(int32_t * a1, int32_t a2, int32_t a3) {
    // 0x1e27508
    g2 = g657;
    int32_t * hdc = GetDC((int32_t *)g657); // 0x1e27513
    int32_t hdc2 = (int32_t)hdc; // esi
    g2 = g656;
    g2 = (int32_t)SelectPalette(hdc, (int32_t *)g656, false);
    g2 = RealizePalette((int32_t *)hdc2);
    int32_t xSrc = 0; // 0x1e27530
    if (g188 == xSrc) {
        // 0x1e27538
        g2 = g657;
        int32_t DestHeight = *(int32_t *)(g657 + 16); // 0x1e27543
        int32_t lpbmi = *(int32_t *)g657; // 0x1e27546
        int32_t lpBits = *(int32_t *)(g657 + 8); // 0x1e27548
        int32_t DestWidth = *(int32_t *)(g657 + 12); // 0x1e2754c
        g2 = StretchDIBits((int32_t *)hdc2, g6, g8, DestWidth, DestHeight, xSrc, xSrc, DestWidth, DestHeight, (int32_t *)lpBits, (struct __MIDL___MIDL_itf_mfobjects_0000_0008_0002 *)lpbmi, 1, 0xcc0020);
    }
    // 0x1e27563
    *(int32_t *)(g9 - 4) = hdc2;
    g2 = g657;
    *(int32_t *)(g9 - 8) = g657;
    int32_t result = ReleaseDC(&g708, &g708); // 0x1e2756a
    g2 = result;
    return result;
}

// Address range: 0x1e27576 - 0x1e275f0
int32_t function_1e27576(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g3; // bp-4
    g7 = a1;
    int32_t v2 = *(int32_t *)(a1 + 16); // 0x1e27580
    g2 = v2;
    int32_t v3 = g6; // bp-24
    int32_t v4; // 0x1e2758a
    if (v2 < 0) {
        // 0x1e2758a
        v4 = -v2;
        g2 = v4;
    } else {
        v4 = v2;
    }
    int32_t result = v4 - a3 - a5; // 0x1e27597
    g2 = result;
    int32_t v5 = *(int32_t *)(a1 + 12) * result; // 0x1e2759a
    g5 = v5;
    int32_t v6 = *(int32_t *)(a1 + 8) + v5; // 0x1e2759d
    g5 = v6;
    int32_t v7 = v6 + a4; // 0x1e275a0
    if (a3 < 1) {
        // 0x1e275e7
        return result;
    }
    int32_t v8 = 256 * a6; // 0x1e275bd
    int32_t v9 = a6 & 255; // 0x1e275c1
    int32_t v10 = (v8 & 0xff00) | v9 | 0x10000 * (v9 | v8); // 0x1e275c8
    int32_t v11 = a2 / 4; // 0x1e275cd
    while (true) {
        int32_t v12; // 0x1e275dc
        int32_t v13; // 0x1e275df
        if (a2 > 0) {
            // 0x1e275af
            g2 = v10;
            g5 = v11;
            __asm_rep_stosd_memset((char *)v7, v10, v11);
            int32_t v14 = g1 ? -4 : 4; // 0x1e275d0
            int32_t v15 = a2 & 3; // 0x1e275d4
            g5 = v15;
            __asm_rep_stosb_memset((char *)(v14 * v11 + v7), (char)g2, v15);
            g5 = 0;
            v13 = g7;
            v12 = v7 + a2;
        } else {
            v13 = a1;
            v12 = v7;
        }
        int32_t v16 = a3 - 1; // 0x1e275e2
        if (v16 == 0) {
            // break -> 0x1e275e7
            break;
        }
        a3 = v16;
        a1 = v13;
        v7 = *(int32_t *)(v13 + 20) + v12 - a2;
    }
    // 0x1e275e7
    g6 = v3;
    g3 = v1;
    return g2;
}

// Address range: 0x1e275f0 - 0x1e2766e
int32_t function_1e275f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = g3; // bp-4
    g7 = a1;
    g5 = a6;
    int32_t v2 = g6; // bp-20
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x1e27600
    int32_t v4 = *(int32_t *)(a6 + 16); // 0x1e27603
    int32_t v5; // 0x1e2760a
    if (v4 < 0) {
        // 0x1e2760a
        v5 = -v4;
    } else {
        v5 = v4;
    }
    // 0x1e2760c
    g2 = v5;
    int32_t v6; // 0x1e27612
    if (v3 < 0) {
        // 0x1e27610
        v6 = -v3;
    } else {
        v6 = v3;
    }
    int32_t v7 = a3; // esi
    int32_t v8 = v5 - a8 - a3; // 0x1e2761d
    g2 = v8;
    int32_t result = *(int32_t *)(a6 + 8) + *(int32_t *)(a6 + 20) * v8 + a7; // 0x1e2762b
    g2 = result;
    int32_t v9 = *(int32_t *)(a1 + 20) * (v6 - a5 - a3); // 0x1e27630
    int32_t v10 = *(int32_t *)(a1 + 8) + v9 + a4; // 0x1e27639
    if (a3 < 1) {
        // 0x1e27665
        return result;
    }
    int32_t result2; // 0x1e2765c
    while (true) {
        int32_t v11; // 0x1e27656
        int32_t v12; // 0x1e27659
        int32_t v13; // 0x1e27662
        int32_t v14; // 0x1e2765c
        int32_t v15; // 0x1e2765f
        if (a2 > 0) {
            int32_t v16 = a2; // 0x1e2764b
            int32_t v17 = result; // 0x1e2764d
            unsigned char v18 = *(char *)v17; // 0x1e2764b
            g2 = v17 + 1;
            *(char *)v10 = v18;
            int32_t v19 = v10 + 1; // 0x1e27650
            int32_t v20 = a2 - 1; // 0x1e27651
            int32_t v21 = g2;
            while (v20 != 0) {
                // 0x1e2764b
                v16 = (int32_t)v18 | (v16 & -256);
                v17 = v21;
                v18 = *(char *)v17;
                g2 = v17 + 1;
                *(char *)v19 = v18;
                v19++;
                v20--;
                v21 = g2;
            }
            // 0x1e27656
            v15 = g7;
            v14 = g5;
            v13 = v7;
            v12 = v19;
            v11 = v21;
        } else {
            v15 = a1;
            v14 = a6;
            v13 = a3;
            v12 = v10;
            v11 = result;
        }
        int32_t v22 = v11 - a2; // 0x1e27656
        g2 = v22;
        result2 = *(int32_t *)(v14 + 20) + v22;
        g2 = result2;
        int32_t v23 = v13 - 1; // 0x1e27662
        v7 = v23;
        if (v23 == 0) {
            // break -> 0x1e27665
            break;
        }
        a1 = v15;
        a6 = v14;
        a3 = v23;
        v10 = *(int32_t *)(v15 + 20) + v12 - a2;
        result = result2;
    }
    // 0x1e27665
    g6 = v2;
    g3 = v1;
    return result2;
}

// Address range: 0x1e2766e - 0x1e276f0
int32_t function_1e2766e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = g3; // bp-4
    g5 = a1;
    int32_t v2 = g6; // bp-20
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x1e2767e
    int32_t v4 = *(int32_t *)(a6 + 16); // 0x1e27681
    int32_t v5; // 0x1e27688
    if (v4 < 0) {
        // 0x1e27688
        v5 = -v4;
    } else {
        v5 = v4;
    }
    // 0x1e2768a
    g2 = v5;
    int32_t v6; // 0x1e27690
    if (v3 < 0) {
        // 0x1e2768e
        v6 = -v3;
    } else {
        v6 = v3;
    }
    int32_t v7 = a3; // edx
    int32_t v8 = v5 - a8 - a3; // 0x1e2769b
    g2 = v8;
    int32_t result = *(int32_t *)(a6 + 8) + *(int32_t *)(a6 + 20) * v8 + a7; // 0x1e276a9
    g2 = result;
    int32_t v9 = *(int32_t *)(a1 + 20) * (v6 - a5 - a3); // 0x1e276ae
    int32_t v10 = *(int32_t *)(a1 + 8) + v9 + a4; // 0x1e276b7
    if (a3 < 1) {
        // 0x1e276e7
        return result;
    }
    int32_t result2; // 0x1e276de
    while (true) {
        int32_t v11; // 0x1e276d8
        int32_t v12; // 0x1e276db
        int32_t v13; // 0x1e276e4
        int32_t v14; // 0x1e276e1
        if (a2 > 0) {
            int32_t v15 = a2;
            int32_t v16 = a2; // 0x1e276c9
            int32_t v17 = v10; // 0x1e276cf
            int32_t v18 = result; // 0x1e276c9
            int32_t v19; // 0x1e276d1
            int32_t v20; // 0x1e276d2
            while (true) {
                unsigned char v21 = *(char *)v18; // 0x1e276c9
                int32_t v22 = (int32_t)v21 | (v16 & -256); // ebx
                int32_t v23; // 0x1e276d1
                int32_t v24; // 0x1e276d2
                if (v21 != 0) {
                    // 0x1e276cf
                    *(char *)v17 = v21;
                    v24 = v10;
                    v23 = g2;
                } else {
                    v24 = v17;
                    v23 = v18;
                }
                // 0x1e276d1
                v19 = v23 + 1;
                g2 = v19;
                v20 = v24 + 1;
                v10 = v20;
                int32_t v25 = v15 - 1; // 0x1e276d3
                if (v25 == 0) {
                    // break -> 0x1e276d8
                    break;
                }
                // 0x1e276d1
                v15 = v25;
                v16 = v22;
                v17 = v20;
                v18 = v19;
            }
            // 0x1e276d8
            v14 = g5;
            v13 = v7;
            v12 = v20;
            v11 = v19;
        } else {
            v14 = a1;
            v13 = a3;
            v12 = v10;
            v11 = result;
        }
        int32_t v26 = v11 - a2; // 0x1e276d8
        g2 = v26;
        result2 = *(int32_t *)(a6 + 20) + v26;
        g2 = result2;
        int32_t v27 = v13 - 1; // 0x1e276e4
        v7 = v27;
        if (v27 == 0) {
            // break -> 0x1e276e7
            break;
        }
        a1 = v14;
        a3 = v27;
        v10 = *(int32_t *)(v14 + 20) + v12 - a2;
        result = result2;
    }
    // 0x1e276e7
    g6 = v2;
    g3 = v1;
    return result2;
}

// Address range: 0x1e276f0 - 0x1e27775
int32_t function_1e276f0(int32_t hWnd, int32_t Msg, uint16_t wParam, int32_t lParam) {
    int32_t result;
    if (Msg != 957) {
        // 0x1e276ff
        g5 = wParam;
        result = DefWindowProcA((int32_t *)hWnd, Msg, (int32_t)wParam, lParam);
        // 0x1e2776e
        g2 = result;
        return result;
    }
    int32_t v1 = -1; // edi
    g2 = 0;
    int32_t v2; // 0x1e277324
    int32_t v3; // 0x1e27739
    int32_t v4; // 0x1e27744
    int32_t v5; // 0x1e27747
    int32_t v6; // 0x1e27752
    if (g652 > 0) {
        // 0x1e27726
        g5 = lParam;
        v5 = 0;
        v3 = -1;
        v4 = g524;
        while (true) {
          lab_0x1e2772e:
            // 0x1e2772e
            if (*(int32_t *)v4 != lParam) {
                v2 = v3;
                goto lab_0x1e27744;
            } else {
                if (v3 >= 0) {
                    uint32_t v7 = *(int32_t *)(4 * v3 + (int32_t)&g523); // 0x1e27739
                    if (v7 > *(int32_t *)(v4 - 32)) {
                        // 0x1e27742
                        v1 = v5;
                        v2 = v5;
                        goto lab_0x1e27744;
                    } else {
                        v2 = v3;
                        goto lab_0x1e27744;
                    }
                } else {
                    // 0x1e27742
                    v1 = v5;
                    v2 = v5;
                    goto lab_0x1e27744;
                }
            }
        }
      lab_0x1e2774c:
        v6 = v2;
    } else {
        v6 = -1;
    }
    // 0x1e2774c
    g2 = 0;
    if (v6 >= 0) {
        // 0x1e27752
        *(int32_t *)(4 * v6 + (int32_t)&g523) = 0;
        *(int32_t *)(4 * v1 + (int32_t)&g524) = g2;
    }
    // 0x1e27760
    result = 0;
    // 0x1e2776e
    g2 = result;
    return result;
  lab_0x1e27744:;
    int32_t v8 = v5 + 1; // 0x1e27747
    g2 = v8;
    if (v8 == g652) {
        // break -> 0x1e2774c
        goto lab_0x1e2774c;
    }
    v5 = v8;
    v3 = v2;
    v4 += 4;
    goto lab_0x1e2772e;
}

// Address range: 0x1e27775 - 0x1e278cd
int32_t function_1e27775(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e27775
    int32_t v1; // bp-344
    int32_t v2 = v1; // 0x1e2777c
    int32_t v3;
    int32_t v4; // 0x1e277c556
    if (a2 > 8) {
        v3 = 8;
        v4 = 8;
    } else {
        v3 = a2;
        v4 = a2;
    }
    // 0x1e2778f
    g2 = v3;
    g7 = 0;
    g652 = v4;
    int32_t result;
    int32_t v5; // 0x1e27835
    int32_t v6; // 0x1e2785d
    int32_t v7; // 0x1e27803
    if (g527 != 0) {
        result = 0;
        goto lab_0x1e278c4;
    } else {
        // 0x1e277a2
        if (g525 != 0) {
            result = 0;
            goto lab_0x1e278c4;
        } else {
            // 0x1e277ae
            g522 = -1;
            if (v4 >= 1) {
                // 0x1e277bb
                g523 = 0;
                g5 = (int32_t)&g523 + 4;
                int32_t v8 = v4 - 1; // 0x1e277c557
                g2 = v8;
                *(int32_t *)((int32_t)&g523 + 32) = 0;
                if (v8 != 0) {
                    *(int32_t *)g5 = g7;
                    int32_t v9 = g5; // 0x1e277c2
                    g5 = v9 + 4;
                    int32_t v10 = g2 - 1; // 0x1e277c5
                    g2 = v10;
                    *(int32_t *)(v9 + 32) = g7;
                    while (v10 != 0) {
                        // 0x1e277c0
                        *(int32_t *)g5 = g7;
                        v9 = g5;
                        g5 = v9 + 4;
                        v10 = g2 - 1;
                        g2 = v10;
                        *(int32_t *)(v9 + 32) = g7;
                    }
                }
            }
            // 0x1e277cb
            g528 = a3 != 0 ? a3 : 0x1e278cd;
            g2 = v2;
            int32_t v11 = v2; // bp-368
            function_1e23f78(v2, (int32_t)"wavemix.inf", 300);
            g2 = v2;
            v7 = function_1e3ddf0(&v1, &g27);
            g2 = v7;
            g8 = v7;
            if (v7 != 0) {
                v5 = v11;
                goto lab_0x1e27835;
            } else {
                int32_t lpText = function_1e25763(42); // 0x1e2781f
                g2 = lpText;
                int32_t v12 = MessageBoxA((int32_t *)g666, (char *)lpText, (char *)&g708, (int32_t)&g708); // 0x1e2782b
                g2 = v12;
                if (v7 == 0) {
                    v6 = g9;
                    goto lab_0x1e2783e;
                } else {
                    v5 = g9;
                    goto lab_0x1e27835;
                }
            }
        }
    }
  lab_0x1e278c4:
    // 0x1e278c4
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e27835:
    // 0x1e27835
    *(int32_t *)(v5 - 4) = v7;
    g2 = function_1e23540((int32_t)&g708);
    v6 = g9 + 4;
    goto lab_0x1e2783e;
  lab_0x1e2783e:
    // 0x1e2783e
    g6 = 0;
    struct tagWNDCLASSA * lpWndClass = NULL; // bp-44
    g4 = (int32_t)"WaveMixSoundGuy";
    int32_t v13 = (int32_t)&lpWndClass; // 0x1e2785a
    g2 = v13;
    *(int32_t *)(v6 - 4) = v13;
    RegisterClassA(lpWndClass);
    *(int32_t *)(g9 - 4) = g6;
    g2 = -0x80000000;
    *(int32_t *)(g9 - 8) = a1;
    *(int32_t *)(g9 - 12) = g6;
    *(int32_t *)(g9 - 16) = g6;
    *(int32_t *)(g9 - 20) = g6;
    *(int32_t *)(g9 - 24) = g2;
    *(int32_t *)(g9 - 28) = g6;
    *(int32_t *)(g9 - 32) = g2;
    *(int32_t *)(g9 - 36) = g2;
    *(int32_t *)(g9 - 40) = g6;
    *(int32_t *)(g9 - 44) = g4;
    *(int32_t *)(g9 - 48) = g6;
    int32_t * windowHandle = CreateWindowExA((int32_t)&g708, (char *)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708, &g708, &g708); // 0x1e27885
    int32_t v14 = (int32_t)windowHandle; // 0x1e27885
    g2 = v14;
    g527 = v14;
    if (v14 == g6) {
        result = 0;
        goto lab_0x1e278c4;
    } else {
        // 0x1e27894
        g526 = a1;
        int32_t v15 = function_1e4a1e5(); // 0x1e2789a
        g2 = v15;
        g525 = v15;
        if (v15 == 0) {
            result = 0;
            goto lab_0x1e278c4;
        } else {
            // 0x1e278a8
            *(int32_t *)(g9 - 4) = 2;
            g2 = g652;
            *(int32_t *)(g9 - 8) = g652;
            *(int32_t *)(g9 - 12) = g525;
            function_1e46531((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            result = 1;
            goto lab_0x1e278c4;
        }
    }
}

// Address range: 0x1e278cd - 0x1e278d0
int32_t function_1e278cd(void) {
    // 0x1e278cd
    return g2;
}

// Address range: 0x1e278d0 - 0x1e27918
int32_t function_1e278d0(void) {
    int32_t hWnd = g527; // 0x1e278d3
    if (hWnd != 0) {
        // 0x1e278db
        g2 = hWnd;
        g2 = DestroyWindow((int32_t *)hWnd);
        g527 = 0;
    }
    // 0x1e278ed
    int32_t result; // 0x1e27917
    if (g525 == 0) {
        // 0x1e278ed
        result = g2;
    } else {
        // 0x1e278f7
        *(int32_t *)(g9 - 4) = 1;
        g2 = g525;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = g2;
        function_1e47480((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        int32_t v1 = g525; // 0x1e27905
        g2 = v1;
        *(int32_t *)(g9 - 4) = v1;
        int32_t v2 = function_1e4a1ed((int32_t)&g708); // 0x1e2790b
        g2 = v2;
        g525 = g8;
        result = v2;
    }
    // 0x1e27916
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e27918 - 0x1e27940
int32_t function_1e27918(int32_t a1) {
    // 0x1e27918
    g2 = 0;
    int32_t result; // 0x1e27938
    if (g525 != 0) {
        // 0x1e27926
        g2 = g526;
        result = function_1e47cbc(g525, a1, g526, 1);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e2793d
    return result;
}

// Address range: 0x1e27940 - 0x1e27960
int32_t function_1e27940(int32_t a1) {
    // 0x1e27940
    g2 = a1;
    if (a1 == 0) {
        // 0x1e2795d
        return 0;
    }
    // 0x1e27948
    int32_t result; // 0x1e27958
    if (g525 != 0) {
        // 0x1e27951
        result = function_1e4754b(g525, a1);
        g2 = result;
    } else {
        result = a1;
    }
    // 0x1e2795d
    return result;
}

// Address range: 0x1e27960 - 0x1e27977
int32_t function_1e27960(void) {
    // 0x1e27960
    int32_t result; // 0x1e27976
    if (g525 == 0) {
        // 0x1e27960
        result = g2;
    } else {
        // 0x1e27969
        g2 = g525;
        int32_t v1 = function_1e46389(g525); // 0x1e27971
        g2 = v1;
        result = v1;
    }
    // 0x1e27976
    return result;
}

// Address range: 0x1e27977 - 0x1e2798e
int32_t function_1e27977(void) {
    // 0x1e27977
    int32_t result; // 0x1e2798d
    if (g525 == 0) {
        // 0x1e27977
        result = g2;
    } else {
        // 0x1e27980
        g2 = g525;
        int32_t v1 = function_1e46389(g525); // 0x1e27988
        g2 = v1;
        result = v1;
    }
    // 0x1e2798d
    return result;
}

// Address range: 0x1e2798e - 0x1e279f0
int32_t function_1e2798e(int32_t a1, uint32_t a2, int32_t a3) {
    int32_t v1 = g8; // bp-8
    int32_t v2 = v1; // 0x1e27996
    int32_t v3; // 0x1e279eb
    if (g525 == 0) {
        // 0x1e2798e
        v3 = v2;
        // 0x1e279eb
        g8 = *(int32_t *)v3;
        g4 = *(int32_t *)(v3 + 4);
        return g2;
    }
    // 0x1e27999
    g2 = g652;
    int32_t v4; // 0x1e279b5
    if (g652 <= a2) {
        // 0x1e279a6
        v4 = g652 - 1;
    } else {
        v4 = a2;
    }
    int32_t v5 = a1; // ebx
    if (a1 < 0) {
        v3 = v2;
        // 0x1e279eb
        g8 = *(int32_t *)v3;
        g4 = *(int32_t *)(v3 + 4);
        return g652;
    }
    if (v4 >= g652) {
        v3 = v2;
        // 0x1e279eb
        g8 = *(int32_t *)v3;
        g4 = *(int32_t *)(v3 + 4);
        return g652;
    }
    if (v4 < a1) {
        v3 = v2;
        // 0x1e279eb
        g8 = *(int32_t *)v3;
        g4 = *(int32_t *)(v3 + 4);
        return g652;
    }
    int32_t v6 = v4; // 0x1e279e79
    int32_t v7 = g652; // 0x1e279be
    int32_t result; // 0x1e279e1
    while (true) {
        int32_t v8 = v7 & -0x10000; // 0x1e279be
        int32_t v9 = v8 | 1; // 0x1e279be
        g2 = v9;
        g5 = (g5 & -256) | (a1 & 255);
        uint16_t v10 = (int16_t)a1 & 31; // 0x1e279d2
        int32_t v11; // 0x1e279e6
        int32_t v12; // 0x1e279e7
        int32_t v13;
        if (*(int32_t *)(v2 + 20) == 0) {
            int32_t v14; // 0x1e279d2
            if (v10 != 0) {
                // bb25
                v14 = (int32_t)(1 << v10) | v8;
                g2 = v14;
            } else {
                v14 = v9;
            }
            int32_t v15 = v14 ^ 0xffff; // 0x1e279d5
            g2 = v15;
            g522 &= (int16_t)v15;
            *(int32_t *)(v2 - 4) = a1;
            *(int32_t *)(v2 - 8) = v5;
            result = function_1e279ff((int32_t)&g708, (int32_t)&g708);
            g2 = result;
            v13 = g9;
            v12 = g8;
            v11 = g4;
        } else {
            int32_t v16; // 0x1e279c6
            if (v10 != 0) {
                // bb
                v16 = (int32_t)(1 << v10) | v8;
                g2 = v16;
            } else {
                v16 = v9;
            }
            // bb24
            g522 |= (int16_t)v16;
            v13 = v2;
            v12 = v6;
            v11 = a1;
            result = v16;
        }
        int32_t v17 = v11 + 1; // 0x1e279e6
        v5 = v17;
        if (v12 < v17) {
            v3 = v13;
            // break -> 0x1e279eb
            break;
        }
        v6 = v12;
        a1 = v17;
        v7 = result;
        v2 = v13;
    }
    // 0x1e279eb
    g8 = *(int32_t *)v3;
    g4 = *(int32_t *)(v3 + 4);
    return result;
}

// Address range: 0x1e279f0 - 0x1e279ff
int32_t function_1e279f0(void) {
    // 0x1e279f0
    if (g525 == 0) {
        // 0x1e279fe
        return g2;
    }
    int32_t result = function_1e46a56(); // 0x1e279f9
    g2 = result;
    return result;
}

// Address range: 0x1e279ff - 0x1e27a56
int32_t function_1e279ff(int32_t a1, uint32_t a2) {
    int32_t v1 = g3; // bp-16
    int32_t v2 = v1; // 0x1e27a09
    int32_t v3; // 0x1e27a4f
    if (g525 != 0) {
        // 0x1e27a0c
        g2 = g652;
        int32_t v4; // 0x1e27a28
        if (g652 <= a2) {
            // 0x1e27a19
            v4 = g652 - 1;
        } else {
            v4 = a2;
        }
        // 0x1e27a1c
        g4 = a1;
        if (a1 >= 0) {
            if (v4 < g652) {
                if (v4 >= a1) {
                    // 0x1e27a2c
                    g3 = 0;
                    int32_t v5 = v2; // 0x1e27a35
                    *(int32_t *)(v5 - 4) = 0;
                    g2 = g525;
                    *(int32_t *)(v5 - 8) = g4;
                    *(int32_t *)(v5 - 12) = g2;
                    g2 = function_1e47347((int32_t)&g708);
                    *(int32_t *)g8 = g3;
                    *(int32_t *)(g8 + 32) = g3;
                    while (g4 <= g6) {
                        // 0x1e27a35
                        v5 = g9;
                        *(int32_t *)(v5 - 4) = g3;
                        g2 = g525;
                        *(int32_t *)(v5 - 8) = g4;
                        *(int32_t *)(v5 - 12) = g2;
                        g2 = function_1e47347((int32_t)&g708);
                        *(int32_t *)g8 = g3;
                        *(int32_t *)(g8 + 32) = g3;
                    }
                    // 0x1e27a4f
                    v3 = g9;
                } else {
                    v3 = v2;
                }
            } else {
                v3 = v2;
            }
        } else {
            v3 = v2;
        }
    } else {
        v3 = v2;
    }
    // 0x1e27a4f
    g3 = *(int32_t *)v3;
    g6 = *(int32_t *)(v3 + 4);
    g8 = *(int32_t *)(v3 + 8);
    g4 = *(int32_t *)(v3 + 12);
    return g2;
}

// Address range: 0x1e27a56 - 0x1e27b5f
int32_t function_1e27a56(int32_t a1, int32_t a2, uint32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g3; // 0x1e27a56
    int32_t v2 = v1; // bp-4
    g5 = a2;
    g3 = v2;
    int32_t v3; // bp-32
    int32_t v4 = v3; // 0x1e27a5d
    int32_t v5 = g6; // bp-44
    int32_t v6 = v5; // 0x1e27a69
    int32_t v7 = a2; // ebx
    int32_t v8; // 0x1e27b56
    int32_t v9; // 0x1e27a7d
    int32_t v10; // 0x1e27b5b
    if (g525 == 0) {
        v10 = v1;
        v8 = v6;
        goto lab_0x1e27b56;
    } else {
        // 0x1e27a72
        g7 = g652;
        if (g652 <= a3) {
            // 0x1e27a7d
            v9 = g652 - 1;
            g2 = v9;
        } else {
            v9 = a3;
        }
        if (a1 == 0) {
            v10 = v1;
            v8 = v6;
            goto lab_0x1e27b56;
        } else {
            if (a2 >= 0) {
                if (v9 < g652) {
                    if ((char)a5 > -1) {
                        goto lab_0x1e27ac0_2;
                    } else {
                        // 0x1e27aa5
                        g2 = 0;
                        if (g652 < 1) {
                            goto lab_0x1e27ac0_2;
                        } else {
                            int32_t v11 = 0; // 0x1e27abb
                            int32_t v12 = g524; // 0x1e27ab8
                            while (true) {
                                // 0x1e27ab0
                                if (*(int32_t *)v12 == a1) {
                                    // break -> 0x1e27b56
                                    break;
                                }
                                int32_t v13 = v12 + 4; // 0x1e27ab8
                                g6 = v13;
                                int32_t v14 = v11 + 1; // 0x1e27abb
                                g2 = v14;
                                if (g652 <= v14) {
                                    goto lab_0x1e27ac0_2;
                                }
                                v11 = v14;
                                v12 = v13;
                            }
                            v10 = v1;
                            v8 = v6;
                            goto lab_0x1e27b56;
                        }
                    }
                } else {
                    v10 = v1;
                    v8 = v6;
                    goto lab_0x1e27b56;
                }
            } else {
                v10 = v1;
                v8 = v6;
                goto lab_0x1e27b56;
            }
        }
    }
  lab_0x1e27b56:
    // 0x1e27b56
    g6 = *(int32_t *)v8;
    g8 = *(int32_t *)(v8 + 4);
    g4 = *(int32_t *)(v8 + 8);
    g3 = v10;
    return g2;
  lab_0x1e27ac0_2:;
    int32_t v15; // 0x1e27b1f
    int32_t v16; // 0x1e27af4
    if (v9 > a2) {
        int32_t v17 = a2; // 0x1e27ad8
        int32_t v18 = a2; // 0x1e27acc
        int32_t v19; // 0x1e27ad811
        while (true) {
            int32_t v20 = v18 + 1; // 0x1e27acc
            g5 = v20;
            int32_t v21 = 1 << (v20 & 31); // 0x1e27ad2
            g2 = v21;
            if ((v21 & (int32_t)g522) != 0) {
                uint32_t v22 = *(int32_t *)(4 * v17 + (int32_t)&g523); // 0x1e27ad8
                g2 = v22;
                uint32_t v23 = *(int32_t *)(4 * v20 + (int32_t)&g523); // 0x1e27adf
                if (v23 < v22) {
                    // 0x1e27ae8
                    v7 = v20;
                    v19 = v20;
                } else {
                    v19 = v17;
                }
            } else {
                v19 = v17;
            }
            if (v20 == v9) {
                // break -> 0x1e27aef
                break;
            }
            v17 = v19;
            v18 = v20;
        }
        v16 = v9;
        v15 = v19;
    } else {
        v16 = a2;
        v15 = a2;
    }
    // 0x1e27aef
    g7 = 1;
    g5 = (v15 & 255) | (v16 & -256);
    uint32_t v24 = v15 & 31; // 0x1e27af6
    int32_t v25; // 0x1e27af6
    if (v24 != 0) {
        // bb
        v25 = 1 << v24;
        g7 = v25;
    } else {
        v25 = 1;
    }
    int32_t v26 = g522; // 0x1e27af8
    g2 = v26;
    if ((v26 & v25) != 0) {
        // 0x1e27b03
        g5 = g527;
        g2 = (g525 & -0x10000) | (a6 & 0xffff);
        g7 = a4 & 0xffff;
        v3 = 28;
        int32_t v27 = timeGetTime(); // 0x1e27b39
        *(int32_t *)(4 * v7 + (int32_t)&g523) = v27;
        g2 = v4;
        *(int32_t *)(4 * v7 + (int32_t)&g524) = a1;
        g2 = function_1e46d55((int32_t *)v4);
        v10 = v2;
        v8 = g9;
    } else {
        v10 = v1;
        v8 = v6;
    }
    goto lab_0x1e27b56;
}

// Address range: 0x1e27b5f - 0x1e27bc4
int32_t function_1e27b5f(int32_t a1) {
    // 0x1e27b5f
    g2 = a1;
    g534 = a1;
    g530 = 0;
    int32_t lpString2 = function_1e25763(156); // 0x1e27b7d
    g2 = lpString2;
    g2 = (int32_t)lstrcpyA((char *)&g536, (char *)lpString2);
    g531 = (char *)(int32_t)&g536;
    g532 = g8;
    int32_t v1 = mciSendCommandA(g8, 2051, 0x2002, (int32_t)&g529); // 0x1e27ba6
    g2 = v1;
    int32_t result; // 0x1e27bba
    if (v1 != 0) {
        // 0x1e27b5f
        result = g535;
    } else {
        // 0x1e27bb0
        g535 = 1;
        result = 1;
    }
    // 0x1e27bba
    g2 = result;
    g6 = g8;
    g8 = 2051;
    return result;
}

// Address range: 0x1e27bc4 - 0x1e27bec
int32_t function_1e27bc4(void) {
    // 0x1e27bc4
    g2 = 0;
    int32_t result; // 0x1e27bdb
    if (g535 != 0) {
        // 0x1e27bce
        g2 = g530;
        result = mciSendCommandA(g530, 2052, 0, 0);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e27be1
    g535 = 0;
    return result;
}

// Address range: 0x1e27bec - 0x1e27c0a
int32_t function_1e27bec(void) {
    // 0x1e27bec
    g2 = 0;
    int32_t result; // 0x1e27c03
    if (g533 != 0) {
        // 0x1e27bf6
        g2 = g530;
        result = mciSendCommandA(g530, 2056, 0, 0);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e27c09
    return result;
}

// Address range: 0x1e27c0a - 0x1e27c5e
int32_t function_1e27c0a(int32_t a1) {
    int32_t v1 = g3; // 0x1e27c0a
    int32_t v2; // bp-16
    int32_t v3 = v2; // 0x1e27c0d
    function_1e27bec();
    g5 = 0;
    g2 = g534;
    v2 = g534;
    int32_t result;
    int32_t v4;
    if (a1 != 0) {
        result = v4;
        // 0x1e27c55
        g2 = result;
        g3 = v1;
        return result;
    }
    // 0x1e27c27
    if (g535 != 0) {
        // 0x1e27c2f
        g2 = v3;
        int32_t v5 = mciSendCommandA(g530, 2054, 5, v3); // 0x1e27c40
        int32_t v6 = v5 == 0; // 0x1e27c4c
        g2 = v6;
        g533 = v6;
        result = v5;
    } else {
        result = v4;
    }
    // 0x1e27c55
    g2 = result;
    g3 = v1;
    return result;
}

// Address range: 0x1e27c5e - 0x1e27c96
int32_t function_1e27c5e(void) {
    // 0x1e27c5e
    int32_t v1; // bp-12
    int32_t v2 = v1; // 0x1e27c5e
    g5 = 0;
    g2 = g534;
    v1 = g534;
    int32_t result; // 0x1e27c8a
    if (g533 != 0) {
        // 0x1e27c78
        g2 = v2;
        result = mciSendCommandA(g530, 2054, 5, v2);
        g2 = result;
    } else {
        result = g534;
    }
    // 0x1e27c90
    return result;
}

// Address range: 0x1e27c96 - 0x1e27faa
int32_t function_1e27c96(int32_t a1) {
    // 0x1e27c96
    g2 = a1;
    g4 = 0;
    g8 = 1;
    g537 = a1;
    g634 = 1;
    g635 = 0;
    g637 = 0;
    g636 = 5;
    g638 = 2;
    g646 = 90;
    g647 = 191;
    g648 = 32;
    g649 = 88;
    g650 = 190;
    g651 = 38;
    g2 = function_1e257b0(159, &g646);
    g2 = function_1e257b0(160, &g647);
    g2 = function_1e257b0(161, &g648);
    g2 = function_1e257b0(162, &g649);
    g2 = function_1e257b0(163, &g650);
    function_1e257b0(164, &g651);
    g639 = g8;
    g640 = g646;
    g641 = g647;
    int32_t v1 = g650; // 0x1e27d8c
    g5 = v1;
    g642 = g648;
    g643 = g649;
    int32_t v2 = g634; // 0x1e27da3
    g2 = v2;
    g644 = v1;
    g645 = g651;
    int32_t v3 = function_1e255a3(g4, "Sounds", v2); // 0x1e27dbb
    g2 = v3;
    g634 = v3;
    int32_t v4 = function_1e255a3(g4, "Music", g635); // 0x1e27dd1
    g2 = v4;
    g635 = v4;
    int32_t v5 = function_1e255a3(g4, "Average", g636); // 0x1e27de7
    g2 = v5;
    g636 = v5;
    int32_t v6 = function_1e255a3(g4, "FullScreen", g637); // 0x1e27dfd
    g2 = v6;
    g637 = v6;
    int32_t v7 = function_1e255a3(g4, "Priority_Adjustment", g638); // 0x1e27e13
    g2 = v7;
    g638 = v7;
    int32_t v8 = function_1e255a3(g4, "Players", g639); // 0x1e27e29
    g2 = v8;
    g639 = v8;
    int32_t v9 = function_1e255a3(g4, "Left Flippper key", g640); // 0x1e27e3f
    g2 = v9;
    g640 = v9;
    int32_t v10 = function_1e255a3(g4, "Right Flipper key", g641); // 0x1e27e55
    g2 = v10;
    g641 = v10;
    int32_t v11 = function_1e255a3(g4, "Plunger key", g642); // 0x1e27e6b
    g2 = v11;
    g642 = v11;
    int32_t v12 = function_1e255a3(g4, "Left Table Bump key", g643); // 0x1e27e81
    g2 = v12;
    g643 = v12;
    int32_t v13 = function_1e255a3(g4, "Right Table Bump key", g644); // 0x1e27e97
    g2 = v13;
    g644 = v13;
    int32_t v14 = function_1e255a3(g4, "Bottom Table Bump key", g645); // 0x1e27ead
    g2 = v14;
    g645 = v14;
    g2 = function_1e2807b(201, g634);
    g2 = function_1e2798e(g4, 7, g634);
    g2 = function_1e2807b(202, g635);
    function_1e2807b(403, g637);
    int32_t v15 = g639 - 1 < g8; // 0x1e27efd
    g2 = v15;
    function_1e2807b(408, v15);
    int32_t v16 = g639 - 2 < g8; // 0x1e27f16
    g2 = v16;
    function_1e2807b(409, v16);
    int32_t v17 = g639 - 3 < g8; // 0x1e27f2f
    g2 = v17;
    function_1e2807b(410, v17);
    g6 = 500;
    int32_t v18 = g639 - 4 < g8; // 0x1e27f4d
    g2 = v18;
    g2 = function_1e2807b(411, v18);
    int32_t v19 = function_1e25371(g6); // 0x1e27f5d
    g2 = v19;
    int32_t result; // 0x1e27f9e
    if (v19 != 0) {
        int32_t v20 = function_1e2561a(g4, (int32_t)"Shell Exe", v19, (int32_t)&g25, g6); // 0x1e27f75
        g2 = v20;
        if (*(char *)v19 == (char)g4) {
            // 0x1e27f7e
            if (g537 != g4) {
                // 0x1e27f86
                g2 = g537;
                DeleteMenu((int32_t *)g537, 405, g4);
                g2 = g666;
                result = DrawMenuBar((int32_t *)g666);
                g2 = result;
            } else {
                result = v20;
            }
        } else {
            result = v20;
        }
    } else {
        result = 0;
    }
    // 0x1e27fa4
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e27faa - 0x1e28059
int32_t function_1e27faa(void) {
    // 0x1e27faa
    g2 = g634;
    g8 = 0;
    g2 = function_1e25693(0, (int32_t)"Sounds");
    function_1e25693(g8, (int32_t)"Music");
    g2 = g637;
    function_1e25693(g8, (int32_t)"FullScreen");
    g2 = g639;
    function_1e25693(g8, (int32_t)"Players");
    g2 = g640;
    function_1e25693(g8, (int32_t)"Left Flippper key");
    g2 = g641;
    function_1e25693(g8, (int32_t)"Right Flipper key");
    g2 = g642;
    function_1e25693(g8, (int32_t)"Plunger key");
    g2 = g643;
    function_1e25693(g8, (int32_t)"Left Table Bump key");
    g2 = g644;
    function_1e25693(g8, (int32_t)"Right Table Bump key");
    g2 = g645;
    int32_t v1 = g8; // 0x1e28051
    int32_t result = function_1e25693(v1, (int32_t)"Bottom Table Bump key"); // 0x1e28052
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e28059 - 0x1e2807b
int32_t function_1e28059(int32_t uIDEnableItem, int32_t a2) {
    // 0x1e28059
    g5 = g537;
    int32_t result; // 0x1e28078
    if (g537 == 0) {
        // 0x1e28059
        result = g2;
    } else {
        int32_t uEnable = a2 == 0; // 0x1e28068
        g2 = uEnable;
        int32_t v1 = EnableMenuItem((int32_t *)g537, uIDEnableItem, uEnable); // 0x1e28072
        g2 = v1;
        result = v1;
    }
    // 0x1e28078
    return result;
}

// Address range: 0x1e2807b - 0x1e280a4
int32_t function_1e2807b(int32_t uIDCheckItem, int32_t a2) {
    // 0x1e2807b
    g5 = g537;
    int32_t result; // 0x1e280a1
    if (g537 == 0) {
        // 0x1e2807b
        result = g2;
    } else {
        int32_t uCheck = a2 == 0 ? 0 : 8; // 0x1e28092
        g2 = uCheck;
        int32_t v1 = CheckMenuItem((int32_t *)g537, uIDCheckItem, uCheck); // 0x1e2809b
        g2 = v1;
        result = v1;
    }
    // 0x1e280a1
    return result;
}

// Address range: 0x1e280a4 - 0x1e281b2
int32_t function_1e280a4(int32_t a1) {
    int32_t v1 = g6; // bp-8
    int32_t v2 = v1; // 0x1e280a5
    g8 = a1;
    int32_t v3; // 0x1e281ad
    if (a1 == 201) {
        int32_t v4 = g634 == 0; // 0x1e280e2
        g2 = v4;
        g6 = v4;
        g634 = v4;
        g2 = function_1e2798e(0, 7, v4);
        goto lab_0x1e28137;
    } else {
        if (a1 == 202) {
            int32_t v5 = g635; // 0x1e280f9
            int32_t v6 = v5 == 0; // 0x1e28100
            g2 = v6;
            g6 = v6;
            g635 = v6;
            if (v5 != 0) {
                // 0x1e28118
                g2 = function_1e27bec();
            } else {
                // 0x1e2810f
                g2 = function_1e27c0a(0);
            }
            goto lab_0x1e28137;
        } else {
            if (a1 == 403) {
                int32_t v7 = g637 == 0; // 0x1e28126
                g2 = v7;
                g6 = v7;
                g637 = v7;
                g2 = function_1e259f5(v7);
                goto lab_0x1e28137;
            } else {
                if (a1 < 408) {
                    v3 = v2;
                    goto lab_0x1e281ad;
                } else {
                    if (a1 > 411) {
                        v3 = v2;
                        goto lab_0x1e281ad;
                    } else {
                        // 0x1e2813b
                        g639 = a1 - 407;
                        int32_t v8 = a1 == 408; // 0x1e28150
                        g2 = v8;
                        function_1e2807b(408, v8);
                        int32_t v9 = g639 == 2; // 0x1e2816a
                        g2 = v9;
                        function_1e2807b(409, v9);
                        int32_t v10 = g639 == 3; // 0x1e28184
                        g2 = v10;
                        function_1e2807b(410, v10);
                        g2 = g639 == 4;
                        goto lab_0x1e281a8;
                    }
                }
            }
        }
    }
  lab_0x1e28137:
    // 0x1e28137
    *(int32_t *)(g9 - 4) = g6;
    *(int32_t *)(g9 - 8) = g8;
    goto lab_0x1e281a8;
  lab_0x1e281a8:
    // 0x1e281a8
    g2 = function_1e2807b((int32_t)&g708, (int32_t)&g708);
    v3 = g9;
    goto lab_0x1e281ad;
  lab_0x1e281ad:
    // 0x1e281ad
    g6 = *(int32_t *)v3;
    g8 = *(int32_t *)(v3 + 4);
    return g2;
}

// Address range: 0x1e281b2 - 0x1e281f8
int32_t function_1e281b2(int16_t lpString, int32_t a2) {
    int32_t uCode = a2 & 0xffff; // 0x1e281b5
    g2 = uCode;
    int32_t v1 = 0x10000 * MapVirtualKeyA(uCode, 0); // 0x1e281c4
    g2 = v1;
    uint16_t v2 = (int16_t)a2; // 0x1e281c7
    int32_t lParam; // 0x1e281de
    if (v2 >= 33) {
        if (v2 < 47) {
            int32_t v3 = v1 | 0x1000000; // 0x1e281d3
            g2 = v3;
            lParam = v3;
        } else {
            lParam = v1;
        }
    } else {
        lParam = v1;
    }
    int32_t result = GetKeyNameTextA(lParam, (char *)(int32_t)lpString, 19) == 0 ? 0 : uCode; // 0x1e281f0
    g2 = result;
    g8 = lParam;
    return result;
}

// Address range: 0x1e281f8 - 0x1e28812
int32_t function_1e281f8(int32_t a1, int32_t a2, uint16_t a3) {
    // 0x1e281f8
    int32_t v1; // ebp
    int32_t v2 = v1; // bp-4
    g2 = a2;
    v1 = v2;
    int32_t v3; // bp-160
    int32_t v4 = v3; // 0x1e281ff
    int32_t Msg2; // edi
    int32_t v5 = Msg2; // bp-172
    int32_t Msg; // ebx
    int32_t v6;
    char v7; // bp-60
    int16_t * v8;
    int16_t * v9;
    int32_t v10;
    int32_t result; // 0x1e286db
    int32_t v11; // 0x1e286c6
    int16_t v12; // 0x1e28240
    uint16_t v13; // 0x1e2824b
    int32_t v14; // 0x1e284e5
    if (a2 == 272) {
        // 0x1e28221
        if (*(int16_t *)&g190 != -1) {
            // 0x1e28237
            v8 = (int16_t *)&g190;
            while (true) {
              lab_0x1e28237:;
                int32_t v15 = (int32_t)v8; // 0x1e28237
                g2 = v15;
                uint16_t v16 = *v8; // 0x1e2823a
                g5 = (g5 & -0x10000) | (int32_t)v16;
                v12 = v16 & 255;
                int32_t v17 = v15 & -0x10000; // 0x1e28240
                v13 = v16 & 0x4000;
                g2 = (int32_t)v13 | v17;
                if (v13 == 0) {
                    if (v16 > -1) {
                        // 0x1e282a6
                        v9 = v8;
                        v10 = (int32_t)v12 | v17;
                    } else {
                        int32_t v18 = v15 + 2; // 0x1e2829a
                        int16_t * v19 = (int16_t *)v18; // 0x1e2829a
                        g2 = v18;
                        v9 = v19;
                        v10 = (int32_t)*v19 | (v18 & -0x10000);
                    }
                    // 0x1e282aa
                    g2 = v10;
                    v6 = v10;
                    goto lab_0x1e282ae;
                } else {
                    // 0x1e28255
                    g8 = (g8 & -0x10000) | 128;
                    int32_t v20; // 0x1e28281
                    int32_t v21; // 0x1e28263
                    while (true) {
                        // 0x1e2825d
                        int32_t v22; // 0x1e2825d
                        g2 = v22 & 0xffff;
                        int32_t v23 = g9; // 0x1e28260
                        *(int32_t *)(v23 - 4) = 2;
                        int32_t v24 = g2; // 0x1e28262
                        *(int32_t *)(v23 - 8) = v24;
                        v21 = MapVirtualKeyA((int32_t)&g708, (int32_t)&g708);
                        g2 = v21;
                        int32_t v25 = Msg2; // 0x1e28269
                        int32_t v26 = g8;
                        if (v21 == v25) {
                            v20 = v26;
                            // break -> 0x1e28276
                            break;
                        }
                        uint16_t v27 = (int16_t)v26 + 1; // 0x1e2826d
                        int32_t v28 = (int32_t)v27 | (v26 & -0x10000); // 0x1e2826d
                        g8 = v28;
                        if (v27 >= 256) {
                            v20 = v28;
                            // break -> 0x1e28276
                            break;
                        }
                        v22 = v28;
                    }
                    int16_t v29 = v20; // 0x1e28276
                    if (v29 == 256) {
                        goto lab_0x1e284ce_2;
                    } else {
                        // 0x1e28281
                        int32_t v30; // 0x1e28240
                        int32_t v31 = (v21 & -256) | v30; // 0x1e28285
                        g2 = v31;
                        v7 = v16;
                        v6 = v20;
                        goto lab_0x1e282ae;
                    }
                }
            }
        }
        goto lab_0x1e286d0_2;
    } else {
        if (a2 == 273) {
            // 0x1e284e5
            v14 = a3;
            g2 = v14;
            if (a3 == 1) {
                int32_t lParam = 0; // esi
                Msg2 = 327;
                Msg = 336;
                int32_t * hDlg = (int32_t *)a1; // 0x1e2852a
                int32_t wParam = SendDlgItemMessageA(hDlg, 401, 327, 0, 0) & 0xffff; // 0x1e28530
                g2 = wParam;
                int32_t v32 = SendDlgItemMessageA(hDlg, 401, Msg, wParam, lParam); // 0x1e2853e
                g2 = v32;
                int32_t wParam2 = SendDlgItemMessageA(hDlg, 402, Msg2, lParam, lParam) & 0xffff; // 0x1e28558
                g2 = wParam2;
                int32_t v33 = SendDlgItemMessageA(hDlg, 402, Msg, wParam2, lParam); // 0x1e28566
                g2 = v33;
                int32_t v34 = SendDlgItemMessageA(hDlg, 403, Msg2, lParam, lParam); // 0x1e2857a
                g2 = v34;
                int32_t wParam3 = v34 & 0xffff; // 0x1e28580
                g5 = wParam3;
                int32_t v35 = SendDlgItemMessageA(hDlg, 403, Msg, wParam3, lParam); // 0x1e2858e
                g2 = v35;
                int32_t v36 = SendDlgItemMessageA(hDlg, 404, Msg2, lParam, lParam); // 0x1e285a2
                g2 = v36;
                int32_t wParam4 = v36 & 0xffff; // 0x1e285a8
                g5 = wParam4;
                int32_t v37 = SendDlgItemMessageA(hDlg, 404, Msg, wParam4, lParam); // 0x1e285b6
                g2 = v37;
                int32_t v38 = SendDlgItemMessageA(hDlg, 405, Msg2, lParam, lParam); // 0x1e285ca
                g2 = v38;
                int32_t wParam5 = v38 & 0xffff; // 0x1e285d0
                g5 = wParam5;
                int32_t v39 = SendDlgItemMessageA(hDlg, 405, Msg, wParam5, lParam); // 0x1e285de
                g2 = v39;
                int32_t wParam6 = SendDlgItemMessageA(hDlg, 406, Msg2, lParam, lParam) & 0xffff; // 0x1e285f9
                g2 = wParam6;
                int32_t v40 = SendDlgItemMessageA(hDlg, 406, Msg, wParam6, lParam); // 0x1e28603
                g2 = v40;
                Msg = 0;
                int32_t v41; // 0x1e28620
                int32_t v42 = v41; // 0x1e28679
                int32_t v43 = 0; // 0x1e28618
                int32_t v44 = 0;
                while (true) {
                    if (v44 != 0) {
                        // break -> 0x1e286d0
                        break;
                    }
                    int32_t v45 = v43 + 1; // 0x1e28618
                    int32_t v46;
                    int32_t v47; // 0x1e28681
                    if (v45 < 6) {
                        // 0x1e28620
                        v41 = 4 * v45 - 36 + v1;
                        g2 = v41;
                        int32_t v48 = v44;
                        int32_t v49;
                        while (true) {
                            if (v48 != 0) {
                                v49 = v48;
                                // break -> 0x1e28681
                                break;
                            }
                            // 0x1e2862d
                            g2 = v41;
                            int32_t v50 = *(int32_t *)v41; // 0x1e28630
                            g5 = v50;
                            int32_t v51;
                            if (*(int32_t *)(v1 - 36 + 4 * Msg) == v50) {
                                // 0x1e28638
                                *(int32_t *)(g9 - 4) = 0;
                                *(int32_t *)(g9 - 8) = 43;
                                int32_t v52 = function_1e25763(v41); // 0x1e2863c
                                g2 = v52;
                                *(int32_t *)(g9 - 4) = v52;
                                g5 = v4;
                                *(int32_t *)(g9 - 8) = v4;
                                g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
                                *(int32_t *)(g9 - 4) = 0x2000;
                                g5 = v4;
                                *(int32_t *)(g9 - 8) = v4;
                                *(int32_t *)(g9 - 12) = 0;
                                *(int32_t *)(g9 - 16) = 39;
                                int32_t v53 = function_1e25763((int32_t)&g708); // 0x1e2865f
                                g2 = v53;
                                *(int32_t *)(g9 - 4) = v53;
                                *(int32_t *)(g9 - 8) = a1;
                                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                                v51 = 1;
                            } else {
                                v51 = v48;
                            }
                            int32_t v54 = v41 + 4; // 0x1e28675
                            v41 = v54;
                            g2 = v42;
                            if (v54 >= v42) {
                                v49 = v51;
                                // break -> 0x1e28681
                                break;
                            }
                            v41 = v54;
                            v48 = v51;
                        }
                        // 0x1e28681
                        v47 = v45;
                        v46 = v49;
                    } else {
                        v47 = v45;
                        v46 = v44;
                    }
                    // 0x1e28681
                    Msg = v47;
                    if (v47 >= 5) {
                        if (v46 != 0) {
                            goto lab_0x1e286d0_2;
                        } else {
                            // 0x1e2868e
                            g640 = v32;
                            g2 = v37;
                            g641 = v33;
                            g5 = v39;
                            g642 = v35;
                            g643 = v37;
                            g644 = v39;
                            g645 = v40;
                            v11 = g9;
                            goto lab_0x1e286c2;
                        }
                    }
                    v43 = v47;
                    v44 = v46;
                }
                goto lab_0x1e286d0_2;
            } else {
                if (a3 == 2) {
                    v11 = v5;
                    goto lab_0x1e286c2;
                } else {
                    if (a3 == 501) {
                        // 0x1e286de
                        g8 = 0;
                        int32_t v55 = &v7; // 0x1e286e0
                        g2 = v55;
                        Msg = 344;
                        int32_t lParam2 = function_1e281b2((int16_t)g646, v55); // 0x1e286f0
                        g2 = lParam2;
                        Msg2 = 334;
                        int32_t * hDlg2 = (int32_t *)a1; // 0x1e28705
                        int32_t wParam7 = SendDlgItemMessageA(hDlg2, 401, Msg, g8, lParam2); // 0x1e28705
                        g2 = wParam7;
                        SendDlgItemMessageA(hDlg2, 401, Msg2, wParam7, (int32_t)&g708);
                        g2 = v55;
                        int32_t lParam3 = function_1e281b2((int16_t)g647, v55); // 0x1e28726
                        g2 = lParam3;
                        int32_t wParam8 = SendDlgItemMessageA(hDlg2, 402, Msg, g8, lParam3); // 0x1e28736
                        g2 = wParam8;
                        g2 = SendDlgItemMessageA(hDlg2, 402, Msg2, wParam8, (int32_t)&g708);
                        g5 = v55;
                        int32_t lParam4 = function_1e281b2((int16_t)g648, v55); // 0x1e28757
                        g2 = lParam4;
                        int32_t wParam9 = SendDlgItemMessageA(hDlg2, 403, Msg, g8, lParam4); // 0x1e28767
                        g2 = wParam9;
                        g2 = SendDlgItemMessageA(hDlg2, 403, Msg2, wParam9, (int32_t)&g708);
                        g5 = v55;
                        int32_t lParam5 = function_1e281b2((int16_t)g649, v55); // 0x1e28788
                        g2 = lParam5;
                        int32_t wParam10 = SendDlgItemMessageA(hDlg2, 404, Msg, g8, lParam5); // 0x1e28798
                        g2 = wParam10;
                        g2 = SendDlgItemMessageA(hDlg2, 404, Msg2, wParam10, (int32_t)&g708);
                        g5 = v55;
                        int32_t lParam6 = function_1e281b2((int16_t)g650, v55); // 0x1e287b9
                        g2 = lParam6;
                        int32_t wParam11 = SendDlgItemMessageA(hDlg2, 405, Msg, g8, lParam6); // 0x1e287c9
                        g2 = wParam11;
                        g2 = SendDlgItemMessageA(hDlg2, 405, Msg2, wParam11, (int32_t)&g708);
                        g5 = v55;
                        int32_t lParam7 = function_1e281b2((int16_t)g651, v55); // 0x1e287ea
                        g2 = lParam7;
                        int32_t wParam12 = SendDlgItemMessageA(hDlg2, 406, Msg, g8, lParam7); // 0x1e287fb
                        g2 = wParam12;
                        g2 = SendDlgItemMessageA(hDlg2, 406, Msg2, wParam12, (int32_t)&g708);
                        goto lab_0x1e286d0_2;
                    } else {
                        // 0x1e28509
                        g2 = 0;
                        result = 0;
                        return result;
                    }
                }
            }
        } else {
            // 0x1e2821a
            g2 = 0;
            result = 0;
            return result;
        }
    }
  lab_0x1e282dc:;
    // 0x1e282dc
    int32_t v56; // 0x1e282dc
    Msg2 = v56;
    int32_t v57 = g9; // 0x1e282df
    *(int32_t *)(v57 - 4) = v56;
    *(int32_t *)(v57 - 8) = -1;
    int32_t v58 = g8; // 0x1e282e2
    *(int32_t *)(v57 - 12) = v58;
    *(int32_t *)(v57 - 16) = 401;
    *(int32_t *)(v57 - 20) = a1;
    int32_t v59 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e282eb
    g2 = v59;
    int16_t v60;
    int32_t v61 = v60; // 0x1e282f1
    Msg = v61;
    int32_t hDlg3 = v59 & 0xffff;
    int32_t v62 = g9; // 0x1e282f9
    *(int32_t *)(v62 - 4) = v61;
    int32_t v63 = g2; // 0x1e282fa
    int32_t v64 = v63 & 0xffff; // 0x1e282fa
    g2 = v64;
    *(int32_t *)(v62 - 8) = v64;
    *(int32_t *)(v62 - 12) = 337;
    *(int32_t *)(v62 - 16) = 401;
    *(int32_t *)(v62 - 20) = a1;
    int32_t v65 = SendDlgItemMessageA((int32_t *)hDlg3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2830b
    g2 = v65;
    int32_t v66 = Msg; // 0x1e28311
    int32_t v67 = g640; // 0x1e28311
    if (v66 == v67) {
        // 0x1e28319
        g2 = hDlg3;
        int32_t v68 = g9; // 0x1e2831d
        *(int32_t *)(v68 - 4) = 0;
        int32_t v69 = g2; // 0x1e2831f
        *(int32_t *)(v68 - 8) = v69;
        *(int32_t *)(v68 - 12) = 334;
        *(int32_t *)(v68 - 16) = 401;
        *(int32_t *)(v68 - 20) = a1;
        int32_t v70 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2832d
        g2 = v70;
    }
    int32_t v71 = g9; // 0x1e28333
    *(int32_t *)(v71 - 4) = v56;
    *(int32_t *)(v71 - 8) = -1;
    int32_t v72 = g8; // 0x1e28336
    *(int32_t *)(v71 - 12) = v72;
    *(int32_t *)(v71 - 16) = 402;
    *(int32_t *)(v71 - 20) = a1;
    int32_t v73 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2833f
    g2 = v73;
    int32_t hDlg4 = v73 & 0xffff;
    int32_t v74 = Msg; // 0x1e28349
    int32_t v75 = g9; // 0x1e28349
    *(int32_t *)(v75 - 4) = v74;
    int32_t v76 = g2; // 0x1e2834a
    int32_t v77 = v76 & 0xffff; // 0x1e2834a
    g2 = v77;
    *(int32_t *)(v75 - 8) = v77;
    *(int32_t *)(v75 - 12) = 337;
    *(int32_t *)(v75 - 16) = 402;
    *(int32_t *)(v75 - 20) = a1;
    int32_t v78 = SendDlgItemMessageA((int32_t *)hDlg4, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2835b
    g2 = v78;
    int32_t v79 = Msg; // 0x1e28361
    int32_t v80 = g641; // 0x1e28361
    if (v79 == v80) {
        // 0x1e28369
        g2 = hDlg4;
        int32_t v81 = g9; // 0x1e2836d
        *(int32_t *)(v81 - 4) = 0;
        int32_t v82 = g2; // 0x1e2836f
        *(int32_t *)(v81 - 8) = v82;
        *(int32_t *)(v81 - 12) = 334;
        *(int32_t *)(v81 - 16) = 402;
        *(int32_t *)(v81 - 20) = a1;
        int32_t v83 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2837d
        g2 = v83;
    }
    int32_t v84 = g9; // 0x1e28383
    *(int32_t *)(v84 - 4) = v56;
    *(int32_t *)(v84 - 8) = -1;
    int32_t v85 = g8; // 0x1e28386
    *(int32_t *)(v84 - 12) = v85;
    *(int32_t *)(v84 - 16) = 403;
    *(int32_t *)(v84 - 20) = a1;
    int32_t v86 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2838f
    g2 = v86;
    int32_t hDlg5 = v86 & 0xffff;
    int32_t v87 = Msg; // 0x1e28399
    int32_t v88 = g9; // 0x1e28399
    *(int32_t *)(v88 - 4) = v87;
    int32_t v89 = g2; // 0x1e2839a
    int32_t v90 = v89 & 0xffff; // 0x1e2839a
    g2 = v90;
    *(int32_t *)(v88 - 8) = v90;
    *(int32_t *)(v88 - 12) = 337;
    *(int32_t *)(v88 - 16) = 403;
    *(int32_t *)(v88 - 20) = a1;
    int32_t v91 = SendDlgItemMessageA((int32_t *)hDlg5, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e283ab
    g2 = v91;
    int32_t v92 = Msg; // 0x1e283b1
    int32_t v93 = g642; // 0x1e283b1
    if (v92 == v93) {
        // 0x1e283b9
        g2 = hDlg5;
        int32_t v94 = g9; // 0x1e283bd
        *(int32_t *)(v94 - 4) = 0;
        int32_t v95 = g2; // 0x1e283bf
        *(int32_t *)(v94 - 8) = v95;
        *(int32_t *)(v94 - 12) = 334;
        *(int32_t *)(v94 - 16) = 403;
        *(int32_t *)(v94 - 20) = a1;
        int32_t v96 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e283cd
        g2 = v96;
    }
    int32_t v97 = g9; // 0x1e283d3
    *(int32_t *)(v97 - 4) = v56;
    *(int32_t *)(v97 - 8) = -1;
    int32_t v98 = g8; // 0x1e283d6
    *(int32_t *)(v97 - 12) = v98;
    *(int32_t *)(v97 - 16) = 404;
    *(int32_t *)(v97 - 20) = a1;
    int32_t v99 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e283df
    g2 = v99;
    int32_t hDlg6 = v99 & 0xffff;
    int32_t v100 = Msg; // 0x1e283e9
    int32_t v101 = g9; // 0x1e283e9
    *(int32_t *)(v101 - 4) = v100;
    int32_t v102 = g2; // 0x1e283ea
    int32_t v103 = v102 & 0xffff; // 0x1e283ea
    g2 = v103;
    *(int32_t *)(v101 - 8) = v103;
    *(int32_t *)(v101 - 12) = 337;
    *(int32_t *)(v101 - 16) = 404;
    *(int32_t *)(v101 - 20) = a1;
    int32_t v104 = SendDlgItemMessageA((int32_t *)hDlg6, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e283fb
    g2 = v104;
    int32_t v105 = Msg; // 0x1e28401
    int32_t v106 = g643; // 0x1e28401
    if (v105 == v106) {
        // 0x1e28409
        g2 = hDlg6;
        int32_t v107 = g9; // 0x1e2840d
        *(int32_t *)(v107 - 4) = 0;
        int32_t v108 = g2; // 0x1e2840f
        *(int32_t *)(v107 - 8) = v108;
        *(int32_t *)(v107 - 12) = 334;
        *(int32_t *)(v107 - 16) = 404;
        *(int32_t *)(v107 - 20) = a1;
        int32_t v109 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2841d
        g2 = v109;
    }
    int32_t v110 = g9; // 0x1e28423
    *(int32_t *)(v110 - 4) = v56;
    *(int32_t *)(v110 - 8) = -1;
    int32_t v111 = g8; // 0x1e28426
    *(int32_t *)(v110 - 12) = v111;
    *(int32_t *)(v110 - 16) = 405;
    *(int32_t *)(v110 - 20) = a1;
    int32_t v112 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2842f
    g2 = v112;
    int32_t hDlg7 = v112 & 0xffff;
    int32_t v113 = Msg; // 0x1e28439
    int32_t v114 = g9; // 0x1e28439
    *(int32_t *)(v114 - 4) = v113;
    int32_t v115 = g2; // 0x1e2843a
    int32_t v116 = v115 & 0xffff; // 0x1e2843a
    g2 = v116;
    *(int32_t *)(v114 - 8) = v116;
    *(int32_t *)(v114 - 12) = 337;
    *(int32_t *)(v114 - 16) = 405;
    *(int32_t *)(v114 - 20) = a1;
    int32_t v117 = SendDlgItemMessageA((int32_t *)hDlg7, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2844b
    g2 = v117;
    int32_t v118 = Msg; // 0x1e28451
    int32_t v119 = g644; // 0x1e28451
    if (v118 == v119) {
        // 0x1e28459
        g2 = hDlg7;
        int32_t v120 = g9; // 0x1e2845d
        *(int32_t *)(v120 - 4) = 0;
        int32_t v121 = g2; // 0x1e2845f
        *(int32_t *)(v120 - 8) = v121;
        *(int32_t *)(v120 - 12) = 334;
        *(int32_t *)(v120 - 16) = 405;
        *(int32_t *)(v120 - 20) = a1;
        int32_t v122 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2846d
        g2 = v122;
    }
    int32_t v123 = g9; // 0x1e28473
    *(int32_t *)(v123 - 4) = v56;
    *(int32_t *)(v123 - 8) = -1;
    int32_t v124 = g8; // 0x1e28476
    *(int32_t *)(v123 - 12) = v124;
    Msg2 = 406;
    *(int32_t *)(v123 - 16) = 406;
    *(int32_t *)(v123 - 20) = a1;
    int32_t v125 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e28480
    g2 = v125;
    int32_t hDlg8 = v125 & 0xffff;
    int32_t v126 = Msg; // 0x1e2848a
    int32_t v127 = g9; // 0x1e2848a
    *(int32_t *)(v127 - 4) = v126;
    int32_t v128 = g2; // 0x1e2848b
    int32_t v129 = v128 & 0xffff; // 0x1e2848b
    g2 = v129;
    *(int32_t *)(v127 - 8) = v129;
    *(int32_t *)(v127 - 12) = 337;
    int32_t v130 = Msg2; // 0x1e28494
    *(int32_t *)(v127 - 16) = v130;
    *(int32_t *)(v127 - 20) = a1;
    int32_t v131 = SendDlgItemMessageA((int32_t *)hDlg8, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e28498
    g2 = v131;
    int32_t v132 = Msg; // 0x1e2849e
    int32_t v133 = g645; // 0x1e2849e
    int32_t v134; // 0x1e284bc
    if (v132 == v133) {
        // 0x1e284a6
        g2 = hDlg8;
        int32_t v135 = g9; // 0x1e284aa
        *(int32_t *)(v135 - 4) = 0;
        int32_t v136 = g2; // 0x1e284ac
        *(int32_t *)(v135 - 8) = v136;
        *(int32_t *)(v135 - 12) = 334;
        int32_t v137 = Msg2; // 0x1e284b2
        *(int32_t *)(v135 - 16) = v137;
        *(int32_t *)(v135 - 20) = a1;
        int32_t v138 = SendDlgItemMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e284b6
        g2 = v138;
        v134 = v138;
    } else {
        v134 = v131;
    }
    goto lab_0x1e284bc;
  lab_0x1e284bc:;
    // 0x1e284bc
    int32_t v139; // 0x1e282ae
    g2 = (v134 & -0x10000) | v139;
    int16_t v140 = v60 + 1; // 0x1e284c0
    uint16_t v141;
    if (v141 < v140) {
        // break -> 0x1e284ce
        goto lab_0x1e284ce_2;
    }
    v60 = v140;
    goto lab_0x1e282c1;
  lab_0x1e282ae:
    // 0x1e282ae
    g2 = (v6 & 0xffff) | (v10 & -0x10000);
    if ((int16_t)v6 >= v12) {
        // 0x1e282bc
        g8 = 330;
        while (true) {
          lab_0x1e282c1:
            if (v13 != 0) {
                goto lab_0x1e282dc;
            } else {
                // 0x1e282c8
                g2 = v56;
                int32_t v142 = g9; // 0x1e282cb
                *(int32_t *)(v142 - 4) = v56;
                *(int32_t *)(v142 - 8) = (int32_t)v60;
                int32_t v143 = function_1e281b2(v60, (int32_t)&g708); // 0x1e282cf
                g2 = v143;
                if (v143 == 0) {
                    v134 = 0;
                    goto lab_0x1e284bc;
                } else {
                    goto lab_0x1e282dc;
                }
            }
        }
    }
    goto lab_0x1e284ce_2;
  lab_0x1e284ce_2:;
    int32_t v144 = (int32_t)v9 + 2; // 0x1e284ce
    int16_t * v145 = (int16_t *)v144; // 0x1e284ce
    g2 = v144;
    if (*v145 == -1) {
        // break -> 0x1e286d0
        goto lab_0x1e286d0_2;
    }
    v8 = v145;
    goto lab_0x1e28237;
  lab_0x1e286d0_2:
    // 0x1e286d0
    g2 = 1;
    result = 1;
    goto lab_0x1e286d5;
  lab_0x1e286d5:
    // 0x1e286d5
    return result;
  lab_0x1e286c2:
    // 0x1e286c2
    g2 = v14;
    *(int32_t *)(v11 - 4) = v14;
    *(int32_t *)(v11 - 8) = a1;
    g2 = EndDialog(&g708, (int32_t)&g708);
    goto lab_0x1e286d0_2;
}

// Address range: 0x1e28812 - 0x1e28831
int32_t function_1e28812(void) {
    // 0x1e28812
    g2 = g666;
    int32_t hInstance = *(int32_t *)&g660; // 0x1e288244
    int32_t result = DialogBoxParamA((int32_t *)hInstance, "KEYMAPPER", (int32_t *)g666, (int32_t (*)(int32_t *, int32_t, int32_t, int32_t))0x1e281f8, 0); // 0x1e2882a
    g2 = result;
    return result;
}

// Address range: 0x1e28831 - 0x1e2895c
int32_t function_1e28831(int32_t * a1) {
    int32_t plpal = (int32_t)a1;
    int32_t cEntries = 0; // ebx
    *(int16_t *)a1 = 768;
    *(int16_t *)(plpal + 2) = 256;
    int32_t * hPal = CreatePalette((struct tagLOGPALETTE *)plpal); // 0x1e28847
    int32_t v1 = (int32_t)hPal; // 0x1e28847
    g2 = v1;
    int32_t * hWnd = GetDesktopWindow(); // 0x1e2884f
    g2 = (int32_t)hWnd;
    int32_t * hdc = GetDC(hWnd); // 0x1e28856
    int32_t hdc2 = (int32_t)hdc; // 0x1e28856
    g2 = hdc2;
    g2 = GetDeviceCaps(hdc, 38) == 0;
    int32_t result;
    if (cEntries != 0) {
        goto lab_0x1e28895;
    } else {
        int32_t v2 = GetDeviceCaps((int32_t *)hdc2, 104); // 0x1e2887f
        g2 = v2;
        if (v2 == 256) {
            // 0x1e28891
            if (cEntries == 0) {
                // 0x1e288b5
                g2 = SetSystemPaletteUse((int32_t *)hdc2, 2);
                g2 = SetSystemPaletteUse((int32_t *)hdc2, 1);
                int32_t * hPal2 = SelectPalette((int32_t *)hdc2, hPal, false); // 0x1e288cb
                g2 = (int32_t)hPal2;
                g2 = RealizePalette((int32_t *)hdc2);
                cEntries = 256;
                g2 = (int32_t)SelectPalette((int32_t *)hdc2, hPal2, false);
                RealizePalette((int32_t *)hdc2);
                int32_t pPalEntries = plpal + 4; // 0x1e288f0
                g2 = pPalEntries;
                g2 = GetSystemPaletteEntries((int32_t *)hdc2, 0, cEntries, (struct tagPALETTEENTRY *)pPalEntries);
                int32_t * hWnd2 = GetDesktopWindow(); // 0x1e288ff
                g2 = (int32_t)hWnd2;
                ReleaseDC(hWnd2, &g708);
                int32_t v3 = plpal + 7; // 0x1e2890c
                g2 = v3;
                *(char *)v3 = 0;
                int32_t v4 = g2 + 4; // 0x1e28912
                g2 = v4;
                int32_t v5 = cEntries - 1; // 0x1e28915
                while (v5 != 0) {
                    // 0x1e2890f
                    *(char *)v4 = 0;
                    v4 = g2 + 4;
                    g2 = v4;
                    v5--;
                }
                // 0x1e28918
                g5 = 10;
                int32_t v6 = plpal + 44; // 0x1e2891d
                g2 = v6;
                *(char *)v6 = (char)10;
                *(char *)(g2 + 1) = (char)g5;
                *(char *)(g2 + 2) = (char)g5;
                int32_t v7 = g2; // 0x1e28928
                g2 = v7 + 4;
                g5++;
                *(char *)(v7 + 3) = 4;
                int32_t v8 = g5; // 0x1e28930
                while (v8 < 246) {
                    // 0x1e28920
                    *(char *)g2 = (char)v8;
                    *(char *)(g2 + 1) = (char)g5;
                    *(char *)(g2 + 2) = (char)g5;
                    v7 = g2;
                    g2 = v7 + 4;
                    g5++;
                    *(char *)(v7 + 3) = 4;
                    v8 = g5;
                }
                // 0x1e28938
                g2 = ResizePalette(hPal, 256);
                SetPaletteEntries(hPal, 0, 256, (struct tagPALETTEENTRY *)(plpal + 4));
                result = v1;
                goto lab_0x1e28955;
            } else {
                goto lab_0x1e28895;
            }
        } else {
            // 0x1e28891
            goto lab_0x1e28895;
        }
    }
  lab_0x1e28895:
    if (hPal != NULL) {
        // 0x1e28899
        *(int32_t *)(g9 - 4) = v1;
        g2 = DeleteObject(&g708);
    }
    // 0x1e288a0
    *(int32_t *)(g9 - 4) = hdc2;
    int32_t v9 = (int32_t)GetDesktopWindow(); // 0x1e288a1
    g2 = v9;
    *(int32_t *)(g9 - 4) = v9;
    ReleaseDC(&g708, &g708);
    result = 0;
    goto lab_0x1e28955;
  lab_0x1e28955:
    // 0x1e28955
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

