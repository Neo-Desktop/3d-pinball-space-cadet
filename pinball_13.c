
// Address range: 0x1e2fbc7 - 0x1e2fd66
int32_t function_1e2fbc7(int32_t a1, int32_t a2) {
    int32_t v1 = g5; // 0x1e2fbcd
    g4 = v1;
    g8 = a1;
    int32_t v2;
    int32_t * v3; // 0x1e2fbeb
    if (a1 == 0) {
        goto lab_0x1e2fd5c;
    } else {
        // 0x1e2fbdc
        if (*(int32_t *)(v1 + 70) == 0) {
            goto lab_0x1e2fc86;
        } else {
            int32_t v4 = v1 + 74; // 0x1e2fbe6
            g6 = v4;
            g5 = a1;
            v3 = (int32_t *)v4;
            int32_t v5 = *v3; // 0x1e2fbeb
            g2 = v5;
            int32_t v6 = *(int32_t *)(v5 + 4); // 0x1e2fbed
            g7 = v6;
            uint32_t v7; // 0x1e2fc10
            bool v8; // 0x1e2fc10
            while (true) {
                unsigned char v9 = *(char *)a1; // 0x1e2fbf0
                int32_t v10 = v5 & -256; // 0x1e2fbf0
                int32_t v11 = (int32_t)v9 | v10; // 0x1e2fbf0
                g2 = v11;
                unsigned char v12 = *(char *)v6; // 0x1e2fbf2
                if (v9 != v12) {
                    v8 = v9 < v12;
                    v7 = v11;
                    // break -> 0x1e2fc10
                    break;
                }
                // 0x1e2fbf6
                g2 = v11;
                if (v9 == 0) {
                    v2 = 0;
                    goto lab_0x1e2fc15;
                }
                unsigned char v13 = *(char *)(a1 + 1); // 0x1e2fbfa
                int32_t v14 = (int32_t)v13 | v10; // 0x1e2fbfa
                g2 = v14;
                unsigned char v15 = *(char *)(v6 + 1); // 0x1e2fbfd
                if (v13 != v15) {
                    v8 = v13 < v15;
                    v7 = v14;
                    // break -> 0x1e2fc10
                    break;
                }
                int32_t v16 = a1 + 2; // 0x1e2fc02
                g5 = v16;
                int32_t v17 = v6 + 2; // 0x1e2fc05
                g7 = v17;
                g2 = v14;
                if (v13 == 0) {
                    v2 = 0;
                    goto lab_0x1e2fc15;
                }
                v6 = v17;
                v5 = v14;
                a1 = v16;
            }
            int32_t v18 = v8; // 0x1e2fc10
            uint32_t v19 = v18 + v7; // 0x1e2fc10
            int32_t v20 = v8; // 0x1e2fc10
            bool v21 = v8 ? v7 < v20 - v18 | v19 != -1 : v7 < v19; // 0x1e2fc10
            g2 = v20;
            v2 = v20 - (int32_t)!v21;
            goto lab_0x1e2fc15;
        }
    }
  lab_0x1e2fd5c:
    // 0x1e2fd5c
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return g2;
  lab_0x1e2fc86:
    // 0x1e2fc86
    if (*(int32_t *)(v1 + 58) == -1) {
        // 0x1e2fc8c
        g5 = v1;
        g2 = function_1e2f83c();
    }
    // 0x1e2fc93
    g6 = 0;
    int32_t v22 = function_1e3df20(16); // 0x1e2fc97
    g2 = v22;
    g3 = v22;
    if (v22 != 0) {
        // 0x1e2fca5
        g11--;
        g684 = 1000.0L * (float80_t)(float32_t)a2;
        g2 = a2;
        *(int32_t *)v22 = g6;
        *(int32_t *)(g3 + 8) = g2;
        *(int32_t *)(g3 + 12) = (int32_t)g204 + __ftol();
        g6 = a1;
        g5 = -1;
        g2 = 0;
        int32_t v23 = a1; // 0x1e2fcd6
        int32_t v24 = -1; // 0x1e2fcd6
        int32_t v25; // 0x1e2fcd8
        while (true) {
            if (v24 == 0) {
                v25 = 0;
                // break -> 0x1e2fcec
                break;
            }
            int32_t v26 = (g1 ? -1 : 1) + v23; // 0x1e2fcd6
            g6 = v26;
            int32_t v27 = v24 - 1; // 0x1e2fcd6
            g5 = v27;
            if (*(char *)v23 == 0) {
                v25 = v27;
                // break -> 0x1e2fcec
                break;
            }
            v23 = v26;
            v24 = v27;
        }
        int32_t v28 = -1 - v25; // 0x1e2fcd8
        g5 = v28;
        int32_t v29 = function_1e25371(v28); // 0x1e2fcdb
        g2 = v29;
        *(int32_t *)(g3 + 4) = v29;
        int32_t v30 = g3; // 0x1e2fcec
        int32_t v31 = *(int32_t *)(v30 + 4); // 0x1e2fcec
        g7 = v31;
        int32_t v32; // 0x1e2fd49
        if (v31 != 0) {
            // 0x1e2fcf3
            g5 = -1;
            g2 = 0;
            int32_t v33 = a1; // 0x1e2fcfc
            int32_t v34 = -1; // 0x1e2fcfc
            int32_t v35; // 0x1e2fcfe
            int32_t v36; // 0x1e2fd00
            while (true) {
                if (v34 == 0) {
                    v36 = v33;
                    v35 = 0;
                    // break -> bb48
                    break;
                }
                int32_t v37 = (g1 ? -1 : 1) + v33; // 0x1e2fcfc
                int32_t v38 = v34 - 1; // 0x1e2fcfc
                g5 = v38;
                if (*(char *)v33 == 0) {
                    v36 = v37;
                    v35 = v38;
                    // break -> bb48
                    break;
                }
                v33 = v37;
                v34 = v38;
            }
            int32_t v39 = -1 - v35; // 0x1e2fcfe
            g2 = v39;
            int32_t v40 = v39 / 4; // 0x1e2fd04
            g5 = v40;
            __asm_rep_movsd_memcpy((char *)v31, (char *)(v36 - v39), v40);
            int32_t v41 = (g1 ? -4 : 4) * v40 + v31; // 0x1e2fd0b
            char * v42 = (char *)v41; // 0x1e2fd0b
            int32_t v43 = g2 & 3; // 0x1e2fd0f
            g5 = v43;
            __asm_rep_movsb_memcpy(v42, v42, v43);
            int32_t v44 = (g1 ? -1 : 1) * v43 + v41; // 0x1e2fd12
            g6 = v44;
            g8 = v44;
            g5 = 0;
            v32 = g3;
        } else {
            v32 = v30;
        }
        if (v32 != 0) {
            int32_t v45 = *(int32_t *)(v32 + 4); // 0x1e2fd1c
            g2 = v45;
            if (v45 != 0) {
                int32_t v46 = g4; // 0x1e2fd3c
                int32_t * v47 = (int32_t *)(v46 + 70); // 0x1e2fd3c
                if (*v47 == 0) {
                    // 0x1e2fd49
                    *v47 = v32;
                } else {
                    int32_t v48 = *(int32_t *)(v46 + 74); // 0x1e2fd42
                    g2 = v48;
                    *(int32_t *)v48 = v32;
                }
                int32_t v49 = g4; // 0x1e2fd4c
                *(int32_t *)(v49 + 74) = g3;
                if (*(int32_t *)(v49 + 58) == 0) {
                    // 0x1e2fd55
                    g5 = g4;
                    g2 = function_1e2f8ff();
                }
            } else {
                // 0x1e2fd31
                *(int32_t *)(g9 - 4) = v32;
                g2 = function_1e3df60((int32_t)&g708);
            }
        }
    }
    goto lab_0x1e2fd5c;
  lab_0x1e2fc15:
    // 0x1e2fc15
    g2 = v2;
    if (v2 != 0) {
        goto lab_0x1e2fc86;
    } else {
        // 0x1e2fc19
        g11--;
        g684 = 1000.0L * (float80_t)(float32_t)a2;
        int32_t v50 = *v3; // 0x1e2fc23
        g2 = a2;
        *(int32_t *)(v50 + 8) = a2;
        int32_t v51 = __ftol(); // 0x1e2fc2c
        g2 = v51;
        int32_t v52 = (int32_t)g204 + v51; // 0x1e2fc37
        g5 = v52;
        *(int32_t *)(v50 + 12) = v52;
        if (*(int32_t *)(g4 + 70) == *(int32_t *)g6) {
            int32_t v53 = g4 + 58; // 0x1e2fc47
            g8 = v53;
            int32_t v54 = *(int32_t *)v53; // 0x1e2fc4a
            g2 = v54;
            if (v54 != 0) {
                if (v54 != -1) {
                    // 0x1e2fc55
                    g2 = function_1e32771(v54);
                }
            }
            int32_t * v55 = (int32_t *)(g9 + 28); // 0x1e2fc5b
            if (*v55 == -0x40800000) {
                // 0x1e2fc7b
                *(int32_t *)g8 = -1;
            } else {
                // 0x1e2fc65
                *(int32_t *)(g9 - 4) = 0x1e2fb84;
                *(int32_t *)(g9 - 8) = g4;
                *(int32_t *)(g9 - 12) = *v55;
                int32_t v56 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fc6f
                g2 = v56;
                *(int32_t *)g8 = v56;
            }
        }
        goto lab_0x1e2fd5c;
    }
}

// Address range: 0x1e2fd66 - 0x1e2fd6b
int32_t function_1e2fd66(void) {
    // 0x1e2fd66
    g2 = 0;
    return 0;
}

// Address range: 0x1e2fd6b - 0x1e2fda9
int32_t function_1e2fd6b(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g5 = 0x1e2fe0a;
    g2 = v1;
    g562 = 0x1e2fe0a;
    g629 = 0;
    g631 = 0;
    int32_t hInstance = *(int32_t *)&g660; // 0x1e2fd954
    g633 = v1;
    int32_t result = DialogBoxParamA((int32_t *)hInstance, "dlg_highscores", (int32_t *)g666, (int32_t (*)(int32_t *, int32_t, int32_t, int32_t))0x1e2fe0a, 0); // 0x1e2fda0
    g2 = result;
    return result;
}

// Address range: 0x1e2fda9 - 0x1e2fe0a
int32_t function_1e2fda9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e2fda9
    g561 = 0x1e2fe0a;
    int32_t v1 = g3; // bp-4
    g632 = (char *)a3;
    g629 = 1;
    g5 = a2;
    g7 = a1;
    g2 = a4;
    g631 = a2;
    g633 = a1;
    g630 = a4;
    int32_t v2 = &v1; // 0x1e2fde3
    *(int32_t *)(v2 - 4) = 0;
    g2 = g561;
    *(int32_t *)(v2 - 8) = g561;
    *(int32_t *)(v2 - 12) = g666;
    *(int32_t *)(v2 - 16) = (int32_t)"dlg_highscores";
    *(int32_t *)(v2 - 20) = (int32_t)g660;
    int32_t result = DialogBoxParamA(&g708, (char *)&g708, &g708, (int32_t (*)(int32_t *, int32_t, int32_t, int32_t))&g708, (int32_t)&g708); // 0x1e2fdfc
    g2 = result;
    while (result != 0) {
        // 0x1e2fde3
        v2 = g9;
        *(int32_t *)(v2 - 4) = 0;
        g2 = g561;
        *(int32_t *)(v2 - 8) = g561;
        *(int32_t *)(v2 - 12) = g666;
        *(int32_t *)(v2 - 16) = (int32_t)"dlg_highscores";
        *(int32_t *)(v2 - 20) = (int32_t)g660;
        result = DialogBoxParamA(&g708, (char *)&g708, &g708, (int32_t (*)(int32_t *, int32_t, int32_t, int32_t))&g708, (int32_t)&g708);
        g2 = result;
    }
    // 0x1e2fe06
    g3 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e2fe0a - 0x1e3002b
int32_t function_1e2fe0a(int32_t hWnd, uint16_t a2, uint16_t a3) {
    // 0x1e2fe0a
    g2 = a2;
    int32_t lpString1; // bp-460
    int32_t v1 = &lpString1; // 0x1e2fe12
    int32_t v2; // 0x1e2feab
    int32_t v3 = v2; // 0x1e2fe1c
    int32_t v4 = v3; // bp-468
    int32_t v5;
    int32_t result; // 0x1e2fe38
    if (a2 == 16) {
        // 0x1e2fe3b
        g2 = SendMessageA((int32_t *)hWnd, 273, 2, 0);
        // 0x1e2fe31
        g2 = 0;
        result = 0;
        return result;
    } else {
        if (a2 == 272) {
            // 0x1e2fe4f
            g2 = g633;
            int32_t v6; // ebx
            g2 = function_1e3015a(hWnd, g633, v3, v6);
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = g8;
            *(int32_t *)(g9 - 12) = hWnd;
            int32_t v7 = (int32_t)GetDlgItem(&g708, (int32_t)&g708); // 0x1e2fe68
            g2 = v7;
            *(int32_t *)(g9 - 4) = v7;
            g8++;
            g2 = ShowWindow(&g708, (int32_t)&g708);
            while (g8 < 611) {
                // 0x1e2fe62
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = g8;
                *(int32_t *)(g9 - 12) = hWnd;
                v7 = (int32_t)GetDlgItem(&g708, (int32_t)&g708);
                g2 = v7;
                *(int32_t *)(g9 - 4) = v7;
                g8++;
                g2 = ShowWindow(&g708, (int32_t)&g708);
            }
            // 0x1e2fe7e
            if (g629 != 1) {
                // 0x1e2feff
                *(int32_t *)(g9 - 4) = hWnd;
                v5 = (int32_t)SetFocus(&g708);
                goto lab_0x1e2ff08;
            } else {
                char * v8 = g632; // 0x1e2fe87
                int32_t v9 = (int32_t)v8; // 0x1e2fe87
                g2 = v9;
                if (v8 != (char *)-1) {
                    int32_t v10 = v9 + 601; // 0x1e2fea2
                    g2 = v10;
                    *(int32_t *)(g9 - 4) = v10;
                    *(int32_t *)(g9 - 8) = hWnd;
                    v2 = (int32_t)GetDlgItem(&g708, (int32_t)&g708);
                    g2 = v2;
                    *(int32_t *)(g9 - 4) = 5;
                    *(int32_t *)(g9 - 8) = v2;
                    g2 = ShowWindow(&g708, (int32_t)&g708);
                    *(int32_t *)(g9 - 4) = 1;
                    *(int32_t *)(g9 - 8) = v2;
                    g2 = EnableWindow(&g708, (bool)&g708);
                    *(int32_t *)(g9 - 4) = v2;
                    SetFocus(&g708);
                    g2 = g630;
                    if (g630 != 0) {
                        // 0x1e2fed5
                        *(int32_t *)(g9 - 4) = g630;
                        *(int32_t *)(g9 - 8) = v2;
                        g2 = SetWindowTextA(&g708, (char *)&g708);
                        *(int32_t *)(g9 - 4) = -1;
                        *(int32_t *)(g9 - 8) = 0;
                        *(int32_t *)(g9 - 12) = 177;
                        *(int32_t *)(g9 - 16) = v2;
                        int32_t v11 = SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fee7
                        g2 = v11;
                    }
                    // 0x1e2feed
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = 31;
                    *(int32_t *)(g9 - 12) = 197;
                    *(int32_t *)(g9 - 16) = v2;
                    int32_t v12 = SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fef7
                    v5 = v12;
                    goto lab_0x1e2ff08;
                } else {
                    // 0x1e2fe91
                    g629 = 0;
                    g2 = 1;
                    result = 1;
                    return result;
                }
            }
        } else {
            if (a2 == 273) {
                // 0x1e2ff27
                g2 = a3;
                if (a3 == 2) {
                    // 0x1e2ff43
                    g2 = 0;
                    g629 = 0;
                    EndDialog((int32_t *)hWnd, 0);
                    g2 = 1;
                    result = 1;
                    return result;
                } else {
                    if (a3 == 111) {
                        // 0x1e2ff5e
                        int32_t v13; // 0x1e2ffb0
                        if (g629 == 1) {
                            int32_t nIDDlgItem = (int32_t)g632 + 601; // 0x1e2ff77
                            g2 = nIDDlgItem;
                            int32_t lpString; // bp-260
                            GetDlgItemTextA((int32_t *)hWnd, nIDDlgItem, (char *)&lpString, 32);
                            g2 = &lpString;
                            int32_t v14 = *(int32_t *)&g632; // 0x1e2ff924
                            g2 = function_1e30257(g633, g631, &lpString, v14);
                            g629 = g4;
                            v13 = g9;
                        } else {
                            v13 = &v4;
                        }
                        // 0x1e2ffb0
                        *(int32_t *)(v13 - 4) = 0;
                        *(int32_t *)(v13 - 8) = hWnd;
                        EndDialog(&g708, (int32_t)&g708);
                        g2 = 1;
                        result = 1;
                        return result;
                    } else {
                        if (a3 == 112) {
                            int32_t lpString2 = function_1e25763(41); // 0x1e2ffca
                            g2 = lpString2;
                            g5 = v1;
                            g2 = (int32_t)lstrcpyA((char *)&lpString1, (char *)lpString2);
                            g5 = v1;
                            int32_t lpText = function_1e25763(40); // 0x1e2ffec
                            g2 = lpText;
                            int32_t * hWnd2 = (int32_t *)hWnd; // 0x1e2fff5
                            int32_t v15 = MessageBoxA(hWnd2, (char *)lpText, (char *)&g708, (int32_t)&g708); // 0x1e2fff5
                            g2 = v15;
                            if (v15 == 1) {
                                // 0x1e30004
                                g2 = g633;
                                g2 = function_1e30212(g633);
                                g2 = EndDialog(hWnd2, (int32_t)(g629 != g8));
                            }
                        }
                        // 0x1e2fe31
                        g2 = 0;
                        result = 0;
                        return result;
                    }
                }
            } else {
                // 0x1e2fe31
                g2 = 0;
                result = 0;
                return result;
            }
        }
    }
  lab_0x1e2fe33:
    // 0x1e2fe33
    return result;
  lab_0x1e2ff08:
    // 0x1e2ff08
    g2 = v5;
    *(int32_t *)(g9 - 4) = hWnd;
    int32_t * v16 = GetParent(&g708); // 0x1e2ff0b
    int32_t v17 = (int32_t)v16; // 0x1e2ff0b
    g2 = v17;
    if (v16 != NULL) {
        // 0x1e2ff19
        *(int32_t *)(g9 - 4) = hWnd;
        *(int32_t *)(g9 - 8) = v17;
        g2 = function_1e24068((int32_t)&g708, (int32_t)&g708);
    }
    // 0x1e2fe31
    g2 = 0;
    result = 0;
    return result;
}

// Address range: 0x1e3002b - 0x1e3015a
int32_t function_1e3002b(int32_t a1, int32_t * a2, int32_t a3) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g3; // 0x1e3002b
    int32_t v3 = v2; // bp-4
    g3 = &v3;
    g8 = a1;
    int32_t v4; // 0x1e30151
    int32_t result; // 0x1e30157
    int32_t v5; // 0x1e30156
    if (a1 != -999) {
        // 0x1e3004a
        int32_t lpString1; // bp-20
        int32_t v6 = &lpString1; // 0x1e3004f
        g2 = v6;
        lstrcpyA((char *)&lpString1, ",");
        int32_t lpdwDisposition; // bp-28
        g2 = &lpdwDisposition;
        int64_t phkResult; // bp-8
        g5 = &phkResult;
        int32_t v7 = RegCreateKeyExA(HKEY_CURRENT_USER, "Control Panel\\International", 0, NULL, 0, 0xf003f, NULL, (int32_t **)&phkResult, &lpdwDisposition); // 0x1e30076
        g2 = v7;
        if (v7 == 0) {
            // 0x1e30080
            int32_t lpcbData; // bp-24
            g2 = &lpcbData;
            g5 = v6;
            lpcbData = 10;
            int32_t * lpReserved = (int32_t *)0; // 0x1e30099
            int32_t v8 = RegQueryValueExA((int32_t *)(int32_t)phkResult, "sThousand", lpReserved, lpReserved, (char *)&lpString1, &lpcbData); // 0x1e30099
            g2 = v8;
            g2 = RegCloseKey((int32_t *)(int32_t)phkResult);
        }
        int32_t v9 = g8; // 0x1e300ad
        int64_t v10 = 0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9; // 0x1e300b0
        int32_t v11 = v10 / 0x3b9aca00; // 0x1e300b0
        int64_t v12 = v10 % 0x3b9aca00; // 0x1e300b0
        g4 = v11;
        int32_t v13 = (0x100000000 * (int64_t)((int32_t)v12 >> 31) | v12 & 0xffffffff) / 0xf4240; // 0x1e300c1
        g5 = v13;
        int64_t v14 = v10 % 0xf4240; // 0x1e300c8
        int32_t v15 = (0x100000000 * (int64_t)((int32_t)v14 >> 31) | v14 & 0xffffffff) / 1000; // 0x1e300d2
        phkResult = 1000;
        g6 = v15;
        g2 = v10 / 1000;
        int32_t v16 = v10 % 1000; // 0x1e300e0
        int32_t v17; // 0x1e3015112
        if (v11 < 1) {
            if (v13 < 1) {
                int32_t * v18 = (int32_t *)(g9 - 4); // 0x1e3013d
                if (v15 < 1) {
                    // 0x1e3013d
                    *v18 = v9;
                    *(int32_t *)(g9 - 8) = (int32_t)"%ld";
                    *(int32_t *)(g9 - 12) = v1;
                    g2 = function_1e3d7a0((int32_t)phkResult, (char *)&g708);
                    v17 = g9 + 12;
                } else {
                    // 0x1e30125
                    *v18 = v16;
                    g2 = v6;
                    *(int32_t *)(g9 - 8) = v6;
                    *(int32_t *)(g9 - 12) = v15;
                    *(int32_t *)(g9 - 16) = (int32_t)"%ld%s%03ld";
                    *(int32_t *)(g9 - 20) = v1;
                    g2 = function_1e3d7a0((int32_t)phkResult, (char *)&g708);
                    v17 = g9 + 20;
                }
            } else {
                // 0x1e30107
                *(int32_t *)(g9 - 4) = v16;
                g2 = v6;
                *(int32_t *)(g9 - 8) = v6;
                *(int32_t *)(g9 - 12) = v15;
                *(int32_t *)(g9 - 16) = v6;
                *(int32_t *)(g9 - 20) = v13;
                *(int32_t *)(g9 - 24) = (int32_t)"%ld%s%03ld%s%03ld";
                *(int32_t *)(g9 - 28) = v1;
                g2 = function_1e3d7a0((int32_t)phkResult, (char *)&g708);
                v17 = g9 + 28;
            }
        } else {
            // 0x1e300e7
            *(int32_t *)(g9 - 4) = v16;
            g2 = v6;
            *(int32_t *)(g9 - 8) = v6;
            *(int32_t *)(g9 - 12) = v15;
            *(int32_t *)(g9 - 16) = v6;
            *(int32_t *)(g9 - 20) = v13;
            *(int32_t *)(g9 - 24) = v6;
            *(int32_t *)(g9 - 28) = v11;
            *(int32_t *)(g9 - 32) = (int32_t)"%ld%s%03ld%s%03ld%s%03ld";
            *(int32_t *)(g9 - 36) = v1;
            g2 = function_1e3d7a0((int32_t)phkResult, (char *)&g708);
            v17 = g9 + 36;
        }
        // 0x1e3014e
        g2 = v1;
        result = v1;
        v5 = v3;
        v4 = v17;
    } else {
        // 0x1e3003f
        g2 = v1;
        *(char *)a2 = 0;
        result = g2;
        v5 = v2;
        v4 = g9;
    }
    // 0x1e30151
    g6 = *(int32_t *)v4;
    g8 = *(int32_t *)(v4 + 4);
    g4 = *(int32_t *)(v4 + 8);
    g3 = v5;
    return result;
}

// Address range: 0x1e3015a - 0x1e301b5
int32_t function_1e3015a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3015a
    g4 = 0;
    g8 = 0;
    int32_t v1 = a1 + 32; // 0x1e30165
    g6 = v1;
    int32_t v2 = 0; // 0x1e30179
    int32_t result; // 0x1e301a2
    while (true) {
        // 0x1e30168
        int32_t v3; // 0x1e30193
        int32_t v4; // 0x1e30196
        if (g629 == 1) {
            // 0x1e30171
            if (v2 == (int32_t)g632) {
                // 0x1e30179
                *(int32_t *)(g9 - 4) = v2;
                g2 = g631;
                *(int32_t *)(g9 - 8) = g631;
                g4 = 1;
                *(int32_t *)(g9 - 12) = (int32_t)&g58;
                *(int32_t *)(g9 - 16) = *(int32_t *)(g9 + 16);
                int32_t v5 = function_1e301b5((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3018e
                g2 = v5;
                v4 = g6;
                v3 = g8;
            } else {
                v4 = v1;
                v3 = v2;
            }
        } else {
            v4 = v1;
            v3 = v2;
        }
        int32_t v6 = g4 + v3; // 0x1e30193
        g2 = v6;
        *(int32_t *)(g9 - 4) = v6;
        g8++;
        *(int32_t *)(g9 - 8) = *(int32_t *)g6;
        *(int32_t *)(g9 - 12) = v4 - 32;
        *(int32_t *)(g9 - 16) = *(int32_t *)(g9 + 16);
        result = function_1e301b5((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = result;
        int32_t v7 = g6 + 36; // 0x1e301a7
        g6 = v7;
        int32_t v8 = g8; // 0x1e301aa
        if (v8 >= 5) {
            // break -> 0x1e301af
            break;
        }
        v1 = v7;
        v2 = v8;
    }
    // 0x1e301af
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e301b5 - 0x1e30212
int32_t function_1e301b5(int32_t a1, int32_t lpString, int32_t a3, uint32_t a4) {
    // 0x1e301b5
    char lpString2; // bp-40
    int32_t v1 = &lpString2; // 0x1e301b8
    int32_t v2 = g8; // 0x1e301bb
    if (a4 >= 5) {
        // 0x1e3020b
        g8 = *(int32_t *)g9;
        return g2;
    }
    // 0x1e301c4
    g2 = v1;
    int32_t v3 = function_1e3002b(a3, (int32_t *)&lpString2, v2); // 0x1e301cb
    g2 = v3;
    int32_t result; // 0x1e30205
    if (lpString2 != 0) {
        int32_t nIDDlgItem = g8 + 401; // 0x1e301d6
        g2 = nIDDlgItem;
        int32_t * hDlg = (int32_t *)a1; // 0x1e301e6
        int32_t * hWnd = GetDlgItem(hDlg, nIDDlgItem); // 0x1e301e6
        g2 = (int32_t)hWnd;
        g2 = SetWindowTextA(hWnd, (char *)lpString);
        int32_t * hWnd2 = GetDlgItem(hDlg, g8 + 501); // 0x1e301fa
        g2 = (int32_t)hWnd2;
        g5 = v1;
        result = SetWindowTextA(hWnd2, &lpString2);
        g2 = result;
    } else {
        result = v3;
    }
    // 0x1e3020b
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e30212 - 0x1e30231
int32_t function_1e30212(int32_t a1) {
    // 0x1e30212
    g2 = 5;
    int32_t v1 = a1 + 32; // 0x1e3021b
    g5 = v1;
    *(int32_t *)v1 = -999;
    int32_t v2 = g5; // 0x1e30224
    g5 = v2 + 36;
    int32_t v3 = g2 - 1; // 0x1e30227
    g2 = v3;
    *(char *)(v2 - 32) = 0;
    while (v3 != 0) {
        // 0x1e3021e
        *(int32_t *)g5 = -999;
        v2 = g5;
        g5 = v2 + 36;
        v3 = g2 - 1;
        g2 = v3;
        *(char *)(v2 - 32) = 0;
    }
    // 0x1e3022e
    return g2;
}

// Address range: 0x1e30231 - 0x1e30257
int32_t function_1e30231(int32_t a1, int32_t a2) {
    // 0x1e30231
    g7 = a2;
    if (a2 < 1) {
      lab_0x1e3024f_2:
        // 0x1e3024f
        g2 = -1;
        // 0x1e30254
        return -1;
    }
    // 0x1e30239
    g2 = 0;
    int32_t v1 = a1 + 32; // 0x1e3023f
    g5 = v1;
    int32_t result = 0; // 0x1e30249
    while (true) {
        // 0x1e30242
        if (*(int32_t *)v1 < a2) {
            // break -> 0x1e30254
            break;
        }
        int32_t v2 = v1 + 36; // 0x1e30246
        g5 = v2;
        int32_t v3 = result + 1; // 0x1e30249
        g2 = v3;
        if (v3 >= 5) {
            goto lab_0x1e3024f_2;
        }
        result = v3;
        v1 = v2;
    }
    // 0x1e30254
    return result;
}

// Address range: 0x1e30257 - 0x1e302c4
int32_t function_1e30257(int32_t a1, int32_t a2, int32_t * a3, int32_t result) {
    int32_t v1 = g3; // bp-16
    int32_t v2; // 0x1e302bd
    if (result >= 0) {
        // 0x1e30263
        if (result <= 4) {
            // 0x1e3026c
            g2 = 5 - result;
            int32_t v3 = a1 + 144; // 0x1e30283
            int32_t v4 = v3 - 36; // 0x1e3027b
            g5 = 9;
            __asm_rep_movsd_memcpy((char *)v3, (char *)v4, 9);
            g5 = 0;
            int32_t v5 = g2 - 1; // 0x1e30288
            g2 = v5;
            while (v5 != 0) {
                // 0x1e30279
                v3 = v4;
                v4 = v3 - 36;
                g5 = 9;
                __asm_rep_movsd_memcpy((char *)v3, (char *)v4, 9);
                g5 = 0;
                v5 = g2 - 1;
                g2 = v5;
            }
        }
        // 0x1e3028b
        g5 = a2;
        int32_t v6 = 36 * result; // 0x1e30291
        g2 = v6;
        int32_t lpString = (int32_t)a3; // esi
        *(int32_t *)(v6 + 32 + a1) = a2;
        int32_t v7 = g2; // 0x1e3029c
        int32_t v8 = lstrlenA((char *)lpString); // 0x1e302a0
        g2 = v8;
        if (v8 >= 31) {
            // 0x1e302ab
            *(char *)(lpString + 31) = 0;
        }
        int32_t lpString1 = a1 + v7; // 0x1e302b0
        g2 = (int32_t)lstrcpyA((char *)lpString1, (char *)lpString);
        *(char *)(lpString1 + 31) = 0;
        v2 = g9;
    } else {
        v2 = &v1;
    }
    // 0x1e302bb
    g2 = result;
    g4 = *(int32_t *)(v2 + 12);
    return result;
}

// Address range: 0x1e302c4 - 0x1e302d9
int32_t function_1e302c4(int32_t a1, int32_t a2) {
    int32_t result = function_1e3dd80(a1, (int32_t *)a2, 10); // 0x1e302ce
    g2 = result;
    return result;
}

// Address range: 0x1e302d9 - 0x1e30439
int32_t function_1e302d9(int32_t a1) {
    // 0x1e302d9
    int32_t v1; // bp-36
    int32_t v2 = &v1; // 0x1e302dc
    g6 = 0;
    g2 = function_1e30212(a1);
    int32_t v3 = function_1e25371(300); // 0x1e302f1
    g2 = v3;
    g8 = v3;
    int32_t result;
    if (v3 == 0) {
        result = 1;
        // 0x1e30430
        g2 = result;
        return result;
    }
    int32_t v4 = function_1e25371(300); // 0x1e3030b
    g2 = v4;
    int32_t v5 = function_1e25763(166); // 0x1e3032e
    g2 = v5;
    g4 = a1;
    for (int32_t i = 0; i < 5; i++) {
        // 0x1e30340
        *(int32_t *)(g9 - 4) = 10;
        g2 = v2;
        *(int32_t *)(g9 - 8) = v2;
        *(int32_t *)(g9 - 12) = i;
        g2 = function_1e3dce0((int32_t)&g708, &g708, (int32_t)&g708);
        g5 = v2;
        *(int32_t *)(g9 + 8) = (int32_t)".Name";
        *(int32_t *)(g9 + 4) = v2;
        g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 - 4) = 32;
        g5 = v2;
        *(int32_t *)(g9 - 8) = (int32_t)&g25;
        *(int32_t *)(g9 - 12) = v3;
        *(int32_t *)(g9 - 16) = v2;
        *(int32_t *)(g9 - 20) = v5;
        int32_t v6 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3036f
        g2 = v6;
        *(char *)(v3 + 32) = 0;
        *(int32_t *)(g9 - 4) = v3;
        *(int32_t *)(g9 - 8) = g4;
        lstrcpyA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 - 4) = 10;
        g2 = v2;
        *(int32_t *)(g9 - 8) = v2;
        *(int32_t *)(g9 - 12) = i;
        g2 = function_1e3dce0((int32_t)&g708, &g708, (int32_t)&g708);
        g5 = v2;
        *(int32_t *)(g9 + 8) = (int32_t)".Score";
        *(int32_t *)(g9 + 4) = v2;
        g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 - 4) = 300;
        g5 = v2;
        *(int32_t *)(g9 - 8) = (int32_t)&g25;
        *(int32_t *)(g9 - 12) = v3;
        *(int32_t *)(g9 - 16) = v2;
        *(int32_t *)(g9 - 20) = v5;
        int32_t v7 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e303b2
        g2 = v7;
        *(int32_t *)(g9 - 4) = v3;
        int32_t v8 = function_1e3dad0((int32_t)&g708); // 0x1e303b8
        g2 = v8;
        *(int32_t *)(g4 + 32) = v8;
        *(int32_t *)(g9 - 4) = g4;
        int32_t v9 = lstrlenA((char *)&g708) - 1; // 0x1e303ca
        g2 = v9;
        int32_t v10; // 0x1e303d6
        int32_t v11; // 0x1e303d9
        if (v9 < 0) {
            // 0x1e30340
            v11 = g4;
            v10 = g6;
        } else {
            int32_t v12 = g4;
            int32_t v13 = g6; // 0x1e303d1
            while (true) {
                int32_t v14 = (int32_t)*(char *)(v9 + v12); // 0x1e303cd
                g5 = v14;
                int32_t v15 = v14 + v13; // 0x1e303d1
                int32_t v16 = v9 - 1; // 0x1e303d3
                g2 = v16;
                if (v16 < 0) {
                    v11 = v12;
                    v10 = v15;
                    // break -> 0x1e303d6
                    break;
                }
                v13 = v15;
                v9 = v16;
            }
        }
        // 0x1e303d6
        g6 = *(int32_t *)(v11 + 32) + v10;
        g4 = v11 + 36;
    }
    // 0x1e303e9
    *(int32_t *)(g9 - 4) = v3;
    *(int32_t *)(g9 - 8) = g6;
    g2 = function_1e302c4((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 300;
    *(int32_t *)(g9 - 8) = (int32_t)&g25;
    *(int32_t *)(g9 - 12) = v4;
    *(int32_t *)(g9 - 16) = (int32_t)"Verification";
    *(int32_t *)(g9 - 20) = v5;
    int32_t v17 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e30405
    g2 = v17;
    *(int32_t *)(g9 - 4) = v4;
    *(int32_t *)(g9 - 8) = v3;
    int32_t v18 = lstrcmpA((char *)&g708, (char *)&g708); // 0x1e3040e
    g2 = v18;
    if (v18 != 0) {
        // 0x1e30418
        *(int32_t *)(g9 - 4) = a1;
        g2 = function_1e30212((int32_t)&g708);
    }
    // 0x1e30420
    *(int32_t *)(g9 - 4) = v3;
    g2 = function_1e25401((int32_t)&g708);
    *(int32_t *)(g9 - 4) = v4;
    g2 = function_1e25401((int32_t)&g708);
    result = 0;
    // 0x1e30430
    g2 = result;
    return result;
}

// Address range: 0x1e30439 - 0x1e3053c
int32_t function_1e30439(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2; // bp-36
    int32_t v3 = &v2; // 0x1e3043c
    g6 = 0;
    int32_t v4 = function_1e25371(300); // 0x1e30449
    g2 = v4;
    int32_t result;
    if (v4 != g6) {
        // 0x1e3045f
        g4 = 0;
        int32_t v5 = function_1e25763(166); // 0x1e30467
        g2 = v5;
        g8 = v1;
        int32_t v6 = g4;
        while (true) {
            // 0x1e30475
            *(int32_t *)(g9 - 4) = 10;
            g2 = v3;
            *(int32_t *)(g9 - 8) = v3;
            *(int32_t *)(g9 - 12) = g4;
            g2 = function_1e3dce0((int32_t)&g708, &g708, (int32_t)&g708);
            g5 = v3;
            *(int32_t *)(g9 + 8) = (int32_t)".Name";
            *(int32_t *)(g9 + 4) = v3;
            lstrcatA((char *)&g708, (char *)&g708);
            *(int32_t *)(g9 - 4) = g8;
            g2 = v3;
            *(int32_t *)(g9 - 8) = v3;
            *(int32_t *)(g9 - 12) = v5;
            int32_t v7 = function_1e256f7((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3049b
            g2 = v7;
            *(int32_t *)(g9 - 4) = 10;
            g5 = v3;
            *(int32_t *)(g9 - 8) = v3;
            *(int32_t *)(g9 - 12) = g4;
            g2 = function_1e3dce0((int32_t)&g708, &g708, (int32_t)&g708);
            g5 = v3;
            *(int32_t *)(g9 + 8) = (int32_t)".Score";
            *(int32_t *)(g9 + 4) = v3;
            g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
            *(int32_t *)(g9 - 4) = 10;
            *(int32_t *)(g9 - 8) = v4;
            *(int32_t *)(g9 - 12) = *(int32_t *)(g8 + 32);
            g2 = function_1e3dd80((int32_t)&g708, &g708, (int32_t)&g708);
            *(int32_t *)(g9 + 8) = v4;
            *(int32_t *)(g9 + 4) = v3;
            *(int32_t *)g9 = v5;
            int32_t v8 = function_1e256f7((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e304d8
            g2 = v8;
            *(int32_t *)(g9 - 4) = g8;
            int32_t v9 = lstrlenA((char *)&g708) - 1; // 0x1e304e4
            g2 = v9;
            int32_t v10 = g6;
            int32_t v11; // 0x1e304f8
            if (v9 >= 0) {
                g5 = v1;
                int32_t v12 = (int32_t)*(char *)(v9 + v6 + v1) + v10; // 0x1e304f3
                int32_t v13 = v9 - 1; // 0x1e304f5
                g2 = v13;
                v11 = v12;
                while (v13 >= 0) {
                    // 0x1e304e7
                    v9 = v13;
                    g5 = v1;
                    v12 += (int32_t)*(char *)(v9 + v6 + v1);
                    v13 = v9 - 1;
                    g2 = v13;
                    v11 = v12;
                }
            } else {
                v11 = v10;
            }
            int32_t v14 = g8; // 0x1e304f8
            g6 = *(int32_t *)(v14 + 32) + v11;
            g8 = v14 + 36;
            int32_t v15 = v6 + 36; // 0x1e304fe
            g4++;
            if (v15 >= 180) {
                // break -> 0x1e30510
                break;
            }
            v6 = v15;
        }
        // 0x1e30510
        *(int32_t *)(g9 - 4) = v4;
        *(int32_t *)(g9 - 8) = g6;
        g2 = function_1e302c4((int32_t)&g708, (int32_t)&g708);
        *(int32_t *)(g9 - 4) = v4;
        *(int32_t *)(g9 - 8) = (int32_t)"Verification";
        *(int32_t *)(g9 - 12) = v5;
        int32_t v16 = function_1e256f7((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e30524
        g2 = v16;
        *(int32_t *)(g9 - 4) = v4;
        g2 = function_1e25401((int32_t)&g708);
        result = 0;
    } else {
        result = 1;
    }
    // 0x1e30533
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e3053c - 0x1e30593
int32_t function_1e3053c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x1e3053c
    g2 = a1;
    *(int32_t *)g5 = (int32_t)&g28;
    *(int32_t *)(g5 + 4) = g2;
    *(int32_t *)g5 = (int32_t)&g59;
    *(int32_t *)(g5 + 17) = a3;
    *(int32_t *)(g5 + 69) = a4;
    int32_t v1 = g5; // 0x1e3055f
    g8 = v1;
    g2 = a7;
    *(int32_t *)(v1 + 8) = a2;
    g5 = a5;
    *(int32_t *)(g8 + 73) = a5;
    *(int32_t *)(g8 + 77) = a6;
    int32_t v2 = g8; // 0x1e30579
    g7 = v2 + 21;
    *(int32_t *)(v2 + 81) = g2;
    *(char *)(g8 + 12) = 0;
    function_1e3a8ce(g7, a4, g5, a6, g2);
    int32_t result = g8; // 0x1e3058c
    g2 = result;
    g8 = g7;
    g3 = a4;
    return result;
}

// Address range: 0x1e30593 - 0x1e30594
int32_t function_1e30593(void) {
    // 0x1e30593
    return g2;
}

// Address range: 0x1e30594 - 0x1e305a4
int32_t function_1e30594(int32_t a1) {
    int32_t v1 = g5 + 21; // 0x1e30594
    g5 = v1;
    int32_t result = function_1e3a97f(a1, v1); // 0x1e3059c
    g2 = result;
    return result;
}

// Address range: 0x1e305a4 - 0x1e30601
int32_t function_1e305a4(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5) {
    // 0x1e305a4
    g2 = a1;
    *(int32_t *)g5 = (int32_t)&g28;
    *(int32_t *)(g5 + 4) = g2;
    *(int32_t *)g5 = (int32_t)&g59;
    *(int32_t *)(g5 + 17) = a3;
    g2 = (int32_t)a4;
    *(char *)(g5 + 12) = 0;
    int32_t v1 = g5; // 0x1e305c8
    g8 = v1;
    g5 = a2;
    *(int32_t *)(v1 + 8) = a2;
    int32_t v2 = *(int32_t *)g2; // 0x1e305d0
    g5 = v2;
    *(int32_t *)(g8 + 69) = v2;
    int32_t v3 = *(int32_t *)(g2 + 4); // 0x1e305d5
    g2 = (int32_t)a5;
    *(int32_t *)(g8 + 73) = v3;
    int32_t v4 = *(int32_t *)g2; // 0x1e305de
    g5 = v4;
    *(int32_t *)(g8 + 77) = v4;
    int32_t v5 = *(int32_t *)(g2 + 4); // 0x1e305e3
    *(int32_t *)(g8 + 81) = v5;
    int32_t v6 = g5; // 0x1e305ea
    int32_t v7 = g8; // 0x1e305eb
    int32_t v8 = v7 + 21; // 0x1e305eb
    g5 = v8;
    int32_t v9 = *(int32_t *)(v7 + 69); // 0x1e305f1
    function_1e3a8ce(v8, v9, *(int32_t *)(v7 + 73), v6, v5);
    int32_t result = g8; // 0x1e305fa
    g2 = result;
    g8 = v8;
    g3 = v9;
    return result;
}

// Address range: 0x1e30601 - 0x1e3061f
int32_t function_1e30601(int32_t a1, int32_t a2) {
    int32_t v1 = g5; // 0x1e30601
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x1e30601
    g2 = v1 + 21;
    g5 = v1 + 57;
    int32_t result = *(int32_t *)v2; // 0x1e30611
    g2 = result;
    g5 = v2;
    return result;
}

// Address range: 0x1e3061f - 0x1e30662
int32_t function_1e3061f(int32_t a1) {
    int32_t v1 = g5; // 0x1e3061f
    int32_t v2 = v1 + 21; // 0x1e3061f
    float80_t v3 = a1; // 0x1e30624
    float80_t v4 = v3 * (float80_t)*(float32_t *)v2; // 0x1e30624
    float80_t v5 = v3 * (float80_t)*(float32_t *)(v1 + 25); // st6
    float32_t * v6 = (float32_t *)(v1 + 69); // 0x1e3062f
    *v6 = (float32_t)(v4 + (float80_t)*v6);
    float32_t * v7 = (float32_t *)(g5 + 73); // 0x1e30637
    *v7 = (float32_t)((float80_t)*v7 + v5);
    float32_t * v8 = (float32_t *)(g5 + 77); // 0x1e30641
    *v8 = (float32_t)(v4 + (float80_t)*v8);
    float32_t * v9 = (float32_t *)(g5 + 81); // 0x1e30647
    *v9 = (float32_t)(v5 + (float80_t)*v9);
    int32_t v10 = g5; // 0x1e3064d
    int32_t v11 = *(int32_t *)(v10 + 81); // 0x1e3064d
    int32_t v12 = *(int32_t *)(v10 + 77); // 0x1e30650
    int32_t v13 = *(int32_t *)(v10 + 73); // 0x1e30653
    int32_t v14 = *(int32_t *)(v10 + 69); // 0x1e30656
    int32_t result = function_1e3a8ce(v2, v14, v13, v12, v11); // 0x1e3065a
    g2 = result;
    return result;
}

// Address range: 0x1e30662 - 0x1e30c93
int32_t function_1e30662(void) {
    int32_t v1 = g5; // 0x1e30669
    int32_t v2 = v1 + 69; // 0x1e3066d
    g5 = v2;
    int32_t v3 = (int32_t)g563; // 0x1e30671
    int32_t v4 = *(int32_t *)v2; // 0x1e30677
    g2 = v4;
    int32_t v5 = v3 + 24; // 0x1e3067c
    g6 = v5;
    int32_t v6 = v3 + 8; // 0x1e3067f
    g8 = v6;
    g4 = v3 + 16;
    float80_t v7 = v4; // 0x1e3068b
    float80_t v8 = v7 - (float80_t)*(float32_t *)v5; // 0x1e3068e
    float80_t v9 = v8 * (float80_t)*(float32_t *)v6; // 0x1e30690
    int32_t v10; // edi
    int32_t v11; // esi
    g2 = function_1e3dbc0((int32_t)(float32_t)v9, v10, v11);
    g2 = *(int32_t *)g4 - 1;
    g11++;
    uint32_t v12 = (int32_t)__asm_fnstsw(g10); // 0x1e306a8
    g2 = g2 & -0x10000 | v12;
    int3_t v13; // 0x1e306cd
    if ((v12 / 256 & 65) == 0) {
        float80_t v14 = v7 - (float80_t)*(float32_t *)g6; // 0x1e306bb
        float80_t v15 = v14 * (float80_t)*(float32_t *)g8; // 0x1e306c0
        int32_t v16 = function_1e3dbc0((int32_t)(float32_t)v15, (int32_t)&g708, (int32_t)&g708); // 0x1e306c5
        g2 = v16;
        v13 = g11;
    } else {
        // 0x1e306ad
        g2 = *(int32_t *)g4 - 1;
        v13 = g11 - 1;
    }
    // 0x1e306cd
    g11 = v13 + 1;
    uint32_t v17 = (int32_t)__asm_fnstsw(g10); // 0x1e306d5
    g2 = g2 & -0x10000 | v17;
    int3_t v18; // 0x1e30738
    if ((v17 / 256 & 1) == 0) {
        // 0x1e30730
        g2 = 0;
        v18 = g11;
    } else {
        float80_t v19 = v7 - (float80_t)*(float32_t *)g6; // 0x1e306dd
        float80_t v20 = v19 * (float80_t)*(float32_t *)g8; // 0x1e306e2
        int32_t v21 = function_1e3dbc0((int32_t)(float32_t)v20, (int32_t)&g708, (int32_t)&g708); // 0x1e306e7
        g2 = v21;
        int32_t v22 = *(int32_t *)g4 - 1; // 0x1e306f1
        g2 = v22;
        g11++;
        uint32_t v23 = (int32_t)__asm_fnstsw(g10); // 0x1e306fa
        g2 = g2 & -0x10000 | v23;
        int3_t v24; // 0x1e3071f
        float80_t v25; // 0x1e3071f
        if ((v23 / 256 & 65) == 0) {
            float80_t v26 = v7 - (float80_t)*(float32_t *)g6; // 0x1e3070d
            float80_t v27 = v26 * (float80_t)*(float32_t *)g8; // 0x1e30712
            int32_t v28 = function_1e3dbc0((int32_t)(float32_t)v27, (int32_t)&g708, (int32_t)&g708); // 0x1e30717
            g2 = v28;
            v25 = g684;
            v24 = g11;
        } else {
            int32_t v29 = *(int32_t *)g4 - 1; // 0x1e30701
            g2 = v29;
            v25 = v29;
            v24 = g11 - 1;
        }
        // 0x1e3071f
        g2 = v22;
        g5 = (float32_t)v25;
        v18 = v24 + 1;
    }
    // 0x1e30738
    g11 = v18 - 1;
    int32_t v30 = __ftol(); // 0x1e3073b
    int32_t v31 = (int32_t)g563; // 0x1e30740
    int32_t v32 = v31 + 28; // 0x1e3074c
    g4 = v32;
    int32_t v33 = v31 + 12; // 0x1e3074f
    g6 = v33;
    int32_t v34 = v1 + 73; // 0x1e30752
    g2 = v34;
    g8 = v31 + 20;
    int32_t v35 = *(int32_t *)v34; // 0x1e3075b
    g5 = v35;
    float80_t v36 = v35; // 0x1e30763
    float80_t v37 = v36 - (float80_t)*(float32_t *)v32; // 0x1e30766
    float80_t v38 = v37 * (float80_t)*(float32_t *)v33; // 0x1e30768
    *(float64_t *)(g9 - 8) = (float64_t)v38;
    g2 = function_1e3dbc0(v34, v30, v35);
    g2 = *(int32_t *)g8 - 1;
    g11++;
    uint32_t v39 = (int32_t)__asm_fnstsw(g10); // 0x1e30780
    g2 = g2 & -0x10000 | v39;
    int3_t v40; // 0x1e307a5
    if ((v39 / 256 & 65) == 0) {
        float80_t v41 = v36 - (float80_t)*(float32_t *)g4; // 0x1e30793
        float80_t v42 = v41 * (float80_t)*(float32_t *)g6; // 0x1e30798
        *(float64_t *)(g9 - 8) = (float64_t)v42;
        int32_t v43 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3079d
        g2 = v43;
        v40 = g11;
    } else {
        // 0x1e30785
        g2 = *(int32_t *)g8 - 1;
        v40 = g11 - 1;
    }
    // 0x1e307a5
    g11 = v40 + 1;
    uint32_t v44 = (int32_t)__asm_fnstsw(g10); // 0x1e307ad
    g2 = g2 & -0x10000 | v44;
    int3_t v45; // 0x1e30810
    if ((v44 / 256 & 1) == 0) {
        // 0x1e30808
        g2 = 0;
        v45 = g11;
    } else {
        float80_t v46 = v36 - (float80_t)*(float32_t *)g4; // 0x1e307b5
        float80_t v47 = v46 * (float80_t)*(float32_t *)g6; // 0x1e307ba
        *(float64_t *)(g9 - 8) = (float64_t)v47;
        int32_t v48 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e307bf
        g2 = v48;
        int32_t v49 = *(int32_t *)g8 - 1; // 0x1e307c9
        g2 = v49;
        g11++;
        uint32_t v50 = (int32_t)__asm_fnstsw(g10); // 0x1e307d2
        g2 = g2 & -0x10000 | v50;
        int3_t v51; // 0x1e307f7
        float80_t v52; // 0x1e307f7
        if ((v50 / 256 & 65) == 0) {
            float80_t v53 = v36 - (float80_t)*(float32_t *)g4; // 0x1e307e5
            float80_t v54 = v53 * (float80_t)*(float32_t *)g6; // 0x1e307ea
            *(float64_t *)(g9 - 8) = (float64_t)v54;
            int32_t v55 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e307ef
            g2 = v55;
            v52 = g684;
            v51 = g11;
        } else {
            int32_t v56 = *(int32_t *)g8 - 1; // 0x1e307d9
            g2 = v56;
            v52 = v56;
            v51 = g11 - 1;
        }
        // 0x1e307f7
        g2 = v49;
        g5 = (float32_t)v52;
        v45 = v51 + 1;
    }
    // 0x1e30810
    g11 = v45 - 1;
    g8 = __ftol();
    int32_t v57 = (int32_t)g563; // 0x1e3081a
    g4 = v57;
    int32_t v58 = v57 + 8; // 0x1e30823
    g6 = v58;
    int32_t v59 = v1 + 77; // 0x1e30826
    g2 = v59;
    int32_t v60 = *(int32_t *)v59; // 0x1e3082f
    g5 = v60;
    float80_t v61 = v60; // 0x1e30834
    float80_t v62 = v61 - (float80_t)*(float32_t *)(v57 + 24); // 0x1e30837
    float80_t v63 = v62 * (float80_t)*(float32_t *)v58; // 0x1e3083a
    *(float64_t *)(g9 - 8) = (float64_t)v63;
    g2 = function_1e3dbc0(v59, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g4 + 16) - 1;
    g11++;
    uint32_t v64 = (int32_t)__asm_fnstsw(g10); // 0x1e30853
    g2 = g2 & -0x10000 | v64;
    int3_t v65; // 0x1e3087a
    if ((v64 / 256 & 65) == 0) {
        float80_t v66 = v61 - (float80_t)*(float32_t *)(g4 + 24); // 0x1e30867
        float80_t v67 = v66 * (float80_t)*(float32_t *)g6; // 0x1e3086d
        *(float64_t *)(g9 - 8) = (float64_t)v67;
        int32_t v68 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e30872
        g2 = v68;
        v65 = g11;
    } else {
        // 0x1e30858
        g2 = *(int32_t *)(g4 + 16) - 1;
        v65 = g11 - 1;
    }
    // 0x1e3087a
    g11 = v65 + 1;
    uint32_t v69 = (int32_t)__asm_fnstsw(g10); // 0x1e30882
    g2 = g2 & -0x10000 | v69;
    int3_t v70; // 0x1e308e9
    if ((v69 / 256 & 1) == 0) {
        // 0x1e308e1
        g2 = 0;
        v70 = g11;
    } else {
        float80_t v71 = v61 - (float80_t)*(float32_t *)(g4 + 24); // 0x1e3088a
        float80_t v72 = v71 * (float80_t)*(float32_t *)g6; // 0x1e30890
        *(float64_t *)(g9 - 8) = (float64_t)v72;
        int32_t v73 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e30895
        g2 = v73;
        int32_t v74 = *(int32_t *)(g4 + 16) - 1; // 0x1e308a0
        g2 = v74;
        g11++;
        uint32_t v75 = (int32_t)__asm_fnstsw(g10); // 0x1e308a9
        g2 = g2 & -0x10000 | v75;
        int3_t v76; // 0x1e308d0
        float80_t v77; // 0x1e308d0
        if ((v75 / 256 & 65) == 0) {
            float80_t v78 = v61 - (float80_t)*(float32_t *)(g4 + 24); // 0x1e308bd
            float80_t v79 = v78 * (float80_t)*(float32_t *)g6; // 0x1e308c3
            *(float64_t *)(g9 - 8) = (float64_t)v79;
            int32_t v80 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e308c8
            g2 = v80;
            v77 = g684;
            v76 = g11;
        } else {
            int32_t v81 = *(int32_t *)(g4 + 16) - 1; // 0x1e308b1
            g2 = v81;
            v77 = v81;
            v76 = g11 - 1;
        }
        // 0x1e308d0
        g2 = v74;
        g5 = (float32_t)v77;
        v70 = v76 + 1;
    }
    // 0x1e308e9
    g11 = v70 - 1;
    int32_t v82 = __ftol(); // 0x1e308ec
    int32_t v83 = (int32_t)g563; // 0x1e308f1
    g4 = v83;
    g6 = v83 + 20;
    int32_t v84 = v1 + 81; // 0x1e30900
    g2 = v84;
    int32_t v85 = *(int32_t *)v84; // 0x1e30909
    g5 = v85;
    float80_t v86 = v85; // 0x1e3090e
    float80_t v87 = v86 - (float80_t)*(float32_t *)(v83 + 28); // 0x1e30911
    float80_t v88 = v87 * (float80_t)*(float32_t *)(v83 + 12); // 0x1e30914
    *(float64_t *)(g9 - 8) = (float64_t)v88;
    g2 = function_1e3dbc0(v84, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)g6 - 1;
    g11++;
    uint32_t v89 = (int32_t)__asm_fnstsw(g10); // 0x1e3092d
    g2 = g2 & -0x10000 | v89;
    int3_t v90; // 0x1e30954
    if ((v89 / 256 & 65) == 0) {
        int32_t v91 = g4; // 0x1e30940
        float80_t v92 = v86 - (float80_t)*(float32_t *)(v91 + 28); // 0x1e30940
        float80_t v93 = v92 * (float80_t)*(float32_t *)(v91 + 12); // 0x1e30946
        *(float64_t *)(g9 - 8) = (float64_t)v93;
        int32_t v94 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3094c
        g2 = v94;
        v90 = g11;
    } else {
        // 0x1e30932
        g2 = *(int32_t *)g6 - 1;
        v90 = g11 - 1;
    }
    // 0x1e30954
    g11 = v90 + 1;
    uint32_t v95 = (int32_t)__asm_fnstsw(g10); // 0x1e3095c
    g2 = g2 & -0x10000 | v95;
    if ((v95 / 256 & 1) == 0) {
        // 0x1e309bb
        g2 = 0;
    } else {
        int32_t v96 = g4; // 0x1e30964
        float80_t v97 = v86 - (float80_t)*(float32_t *)(v96 + 28); // 0x1e30964
        float80_t v98 = v97 * (float80_t)*(float32_t *)(v96 + 12); // 0x1e3096a
        *(float64_t *)(g9 - 8) = (float64_t)v98;
        int32_t v99 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e30970
        g2 = v99;
        int32_t v100 = *(int32_t *)g6 - 1; // 0x1e3097a
        g2 = v100;
        g11++;
        uint32_t v101 = (int32_t)__asm_fnstsw(g10); // 0x1e30983
        g2 = g2 & -0x10000 | v101;
        float80_t v102; // 0x1e309aa
        if ((v101 / 256 & 65) == 0) {
            int32_t v103 = g4; // 0x1e30996
            float80_t v104 = v86 - (float80_t)*(float32_t *)(v103 + 28); // 0x1e30996
            float80_t v105 = v104 * (float80_t)*(float32_t *)(v103 + 12); // 0x1e3099c
            *(float64_t *)(g9 - 8) = (float64_t)v105;
            int32_t v106 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e309a2
            g2 = v106;
            v102 = g684;
        } else {
            int32_t v107 = *(int32_t *)g6 - 1; // 0x1e3098a
            g2 = v107;
            v102 = v107;
        }
        // 0x1e309aa
        g2 = v100;
        g5 = (float32_t)v102;
    }
    int32_t v108 = __ftol(); // 0x1e309c6
    g5 = v2;
    float32_t * v109 = (float32_t *)v108; // 0x1e309ce
    g2 = v59;
    int16_t v110 = __asm_fnstsw(g10); // 0x1e309d8
    g5 = v84;
    g2 = v34;
    int16_t v111 = __asm_fnstsw(g10); // 0x1e309f4
    int32_t v112 = (v111 & 256) == 0 ? -1 : 1;
    g2 = v112;
    int32_t v113 = g8; // 0x1e30a06
    int32_t result; // 0x1e30c7d
    if (v108 != v113) {
        // 0x1e30a5c
        g2 = v30;
        if (v82 != v30) {
            // 0x1e30ab6
            g2 = v34;
            g5 = v84;
            float32_t v114 = *(float32_t *)v84; // 0x1e30ac1
            float80_t v115 = (float80_t)*(float32_t *)v2; // 0x1e30ac3
            g2 = v59;
            g5 = v34;
            g6 = v30;
            *(int32_t *)(g9 - 4) = v1;
            *(int32_t *)(g9 - 8) = g8;
            float80_t v116 = (float80_t)*(float32_t *)v34 - (float80_t)v114; // 0x1e30ad4
            *(int32_t *)(g9 - 12) = g6;
            float80_t v117 = v116 / (v115 - (float80_t)*(float32_t *)v59); // 0x1e30ad7
            g5 = (int32_t)g563;
            g2 = function_1e30f1c(v112, (int32_t)(float32_t)v117);
            int32_t v118 = g6;
            if (((int32_t)v110 / 256 & 65) != 0) {
                if ((v111 & 256) == 0) {
                    while (true) {
                        // 0x1e30c32
                        g2 = (int32_t)g563;
                        uint32_t v119 = (int32_t)__asm_fnstsw(g10); // 0x1e30c5d
                        g2 = g2 & -0x10000 | v119;
                        if ((v119 / 256 & 65) == 0) {
                            // 0x1e30c62
                            g6--;
                        } else {
                            uint32_t v120 = (int32_t)__asm_fnstsw(g10); // 0x1e30c6b
                            g2 = g2 & -0x10000 | v120;
                            if ((v120 / 256 & 64) != 0) {
                                // 0x1e30c70
                                g6--;
                            }
                            // 0x1e30c71
                            g8--;
                        }
                        // 0x1e30c72
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = g6;
                        g5 = (int32_t)g563;
                        result = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                        g2 = result;
                        if (v82 != g6) {
                            // continue -> 0x1e30c32
                            continue;
                        }
                        // 0x1e30c87
                        if (v108 == g8) {
                            // break -> 0x1e30c8c
                            break;
                        }
                    }
                } else {
                    while (true) {
                        // 0x1e30bd0
                        g5 = g8 + 1;
                        g2 = (int32_t)g563;
                        uint32_t v121 = (int32_t)__asm_fnstsw(g10); // 0x1e30bfe
                        g2 = g2 & -0x10000 | v121;
                        if ((v121 / 256 & 1) == 0) {
                            // 0x1e30c06
                            g8 = g5;
                            uint32_t v122 = (int32_t)__asm_fnstsw(g10); // 0x1e30c0e
                            g2 = g2 & -0x10000 | v122;
                            if ((v122 / 256 & 64) != 0) {
                                // 0x1e30c13
                                g6--;
                                g8 = g5;
                            }
                        } else {
                            // 0x1e30c03
                            g6--;
                        }
                        // 0x1e30c16
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = g6;
                        g5 = (int32_t)g563;
                        int32_t v123 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30c21
                        g2 = v123;
                        if (v82 != g6) {
                            // continue -> 0x1e30bd0
                            continue;
                        }
                        // 0x1e30c2b
                        if (v108 == g8) {
                            result = v123;
                            // break -> 0x1e30c8c
                            break;
                        }
                    }
                }
            } else {
                if ((v111 & 256) == 0) {
                    while (true) {
                        // 0x1e30b66
                        g2 = (int32_t)g563;
                        g5 = v118 + 1;
                        uint32_t v124 = (int32_t)__asm_fnstsw(g10); // 0x1e30b94
                        g2 = g2 & -0x10000 | v124;
                        if ((v124 / 256 & 65) == 0) {
                            // 0x1e30b99
                            g6 = g5;
                        } else {
                            uint32_t v125 = (int32_t)__asm_fnstsw(g10); // 0x1e30ba3
                            g2 = g2 & -0x10000 | v125;
                            if ((v125 / 256 & 64) != 0) {
                                // 0x1e30ba8
                                g6 = g5;
                            }
                            // 0x1e30baa
                            g8--;
                        }
                        // 0x1e30bab
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = g6;
                        g5 = (int32_t)g563;
                        int32_t v126 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30bb6
                        g2 = v126;
                        int32_t v127 = g6; // 0x1e30bbb
                        if (v82 != v127) {
                            v118 = v127;
                            // continue -> 0x1e30b66
                            continue;
                        }
                        // 0x1e30bc0
                        if (v108 == g8) {
                            result = v126;
                            // break -> 0x1e30c8c
                            break;
                        }
                        v118 = v127;
                    }
                } else {
                    while (true) {
                        // 0x1e30afc
                        g5 = g8 + 1;
                        g2 = (int32_t)g563;
                        int32_t v128 = v118 + 1; // edx
                        uint32_t v129 = (int32_t)__asm_fnstsw(g10); // 0x1e30b2d
                        g2 = g2 & -0x10000 | v129;
                        if ((v129 / 256 & 1) == 0) {
                            // 0x1e30b36
                            g8 = g5;
                            uint32_t v130 = (int32_t)__asm_fnstsw(g10); // 0x1e30b3e
                            g2 = g2 & -0x10000 | v130;
                            if ((v130 / 256 & 64) != 0) {
                                // 0x1e30b43
                                g6 = v128;
                                g8 = g5;
                            }
                        } else {
                            // 0x1e30b32
                            g6 = v128;
                        }
                        // 0x1e30b47
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = g6;
                        g5 = (int32_t)g563;
                        int32_t v131 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30b52
                        g2 = v131;
                        int32_t v132 = g6; // 0x1e30b57
                        if (v82 != v132) {
                            v118 = v132;
                            // continue -> 0x1e30afc
                            continue;
                        }
                        // 0x1e30b5c
                        if (v108 == g8) {
                            result = v131;
                            // break -> 0x1e30c8c
                            break;
                        }
                        v118 = v132;
                    }
                }
            }
        } else {
            float32_t * v133 = (float32_t *)v113; // 0x1e30a90
            if ((v111 & 256) == 0) {
                if (v109 <= v133) {
                    *(int32_t *)(g9 - 4) = v1;
                    *(int32_t *)(g9 - 8) = g8;
                    g5 = (int32_t)g563;
                    g8--;
                    *(int32_t *)(g9 - 12) = v30;
                    int32_t v134 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30aa7
                    g2 = v134;
                    result = v134;
                    while (v109 <= (float32_t *)g8) {
                        // 0x1e30a99
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        g5 = (int32_t)g563;
                        g8--;
                        *(int32_t *)(g9 - 12) = v30;
                        v134 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                        g2 = v134;
                        result = v134;
                    }
                } else {
                    result = v30;
                }
            } else {
                if (v109 >= v133) {
                    *(int32_t *)(g9 - 4) = v1;
                    *(int32_t *)(g9 - 8) = g8;
                    g5 = (int32_t)g563;
                    g8++;
                    *(int32_t *)(g9 - 12) = v30;
                    int32_t v135 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30a81
                    g2 = v135;
                    result = v135;
                    while (v109 >= (float32_t *)g8) {
                        // 0x1e30a73
                        *(int32_t *)(g9 - 4) = v1;
                        *(int32_t *)(g9 - 8) = g8;
                        g5 = (int32_t)g563;
                        g8++;
                        *(int32_t *)(g9 - 12) = v30;
                        v135 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                        g2 = v135;
                        result = v135;
                    }
                } else {
                    result = v30;
                }
            }
        }
    } else {
        // 0x1e30a0b
        g6 = v30;
        float32_t * v136 = (float32_t *)v82; // 0x1e30a38
        float32_t * v137 = (float32_t *)v30; // 0x1e30a38
        if (((int32_t)v110 / 256 & 65) != 0) {
            if (v136 <= v137) {
                *(int32_t *)(g9 - 4) = v1;
                *(int32_t *)(g9 - 8) = g8;
                *(int32_t *)(g9 - 12) = g6;
                g5 = (int32_t)g563;
                g6--;
                int32_t v138 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30a4d
                g2 = v138;
                result = v138;
                while (v136 <= (float32_t *)g6) {
                    // 0x1e30a41
                    *(int32_t *)(g9 - 4) = v1;
                    *(int32_t *)(g9 - 8) = g8;
                    *(int32_t *)(g9 - 12) = g6;
                    g5 = (int32_t)g563;
                    g6--;
                    v138 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                    g2 = v138;
                    result = v138;
                }
            } else {
                result = v112;
            }
        } else {
            if (v136 >= v137) {
                *(int32_t *)(g9 - 4) = v1;
                *(int32_t *)(g9 - 8) = g8;
                *(int32_t *)(g9 - 12) = g6;
                g5 = (int32_t)g563;
                g6++;
                int32_t v139 = function_1e30f1c((int32_t)&g708, (int32_t)&g708); // 0x1e30a29
                g2 = v139;
                result = v139;
                while (v136 >= (float32_t *)g6) {
                    // 0x1e30a1d
                    *(int32_t *)(g9 - 4) = v1;
                    *(int32_t *)(g9 - 8) = g8;
                    *(int32_t *)(g9 - 12) = g6;
                    g5 = (int32_t)g563;
                    g6++;
                    v139 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                    g2 = v139;
                    result = v139;
                }
            } else {
                result = v112;
            }
        }
    }
    // 0x1e30c8c
    return result;
}

// Address range: 0x1e30c93 - 0x1e30cf2
int32_t function_1e30c93(int32_t a1, float32_t a2) {
    int32_t v1; // ebp
    g3 = &v1;
    int32_t v2; // bp-28
    int32_t v3 = &v2; // 0x1e30c96
    int32_t v4 = g5; // 0x1e30c9b
    float32_t v5 = *(float32_t *)(a1 + 54); // 0x1e30ca0
    float32_t v6 = *(float32_t *)(a1 + 42); // 0x1e30ca6
    float32_t v7 = (float80_t)a2 * (float80_t)v5 + (float80_t)v6; // 0x1e30ca9
    g2 = v3;
    v2 = (int32_t)(v7 - *(float32_t *)(v4 + 21));
    g2 = (float32_t)function_1e30d19(v3);
    int32_t v8 = *(int32_t *)(v4 + 4); // 0x1e30cd5
    g5 = v8;
    int32_t result = *(int32_t *)v8; // 0x1e30ce4
    g2 = result;
    return result;
}

// Address range: 0x1e30cf2 - 0x1e30cff
int32_t function_1e30cf2(void) {
    int32_t v1 = g5; // 0x1e30cf4
    int32_t v2 = v1 + 21; // 0x1e30cf5
    g5 = v2;
    int32_t result = function_1e319ad(v2, v1, 0); // 0x1e30cf9
    g2 = result;
    return result;
}

// Address range: 0x1e30cff - 0x1e30d19
int32_t function_1e30cff(int32_t a1, int32_t * a2) {
    // 0x1e30cff
    g2 = (int32_t)a2;
    g5 = a1;
    float32_t * v1 = (float32_t *)a1; // 0x1e30d09
    *v1 = *(float32_t *)a2 + *v1;
    float32_t * v2 = (float32_t *)(g5 + 4); // 0x1e30d10
    *v2 = *(float32_t *)(g2 + 4) + *v2;
    return g2;
}

// Address range: 0x1e30d19 - 0x1e30d5c
float80_t function_1e30d19(int32_t a1) {
    // 0x1e30d19
    g2 = a1;
    float32_t * v1 = (float32_t *)a1; // 0x1e30d23
    float80_t v2 = (float80_t)*v1 * (float80_t)*v1; // 0x1e30d25
    int32_t v3 = a1 + 4; // 0x1e30d27
    g5 = v3;
    float32_t v4 = *(float32_t *)v3; // 0x1e30d2a
    float80_t result = sqrtl(v2 + (float80_t)v4 * (float80_t)v4); // 0x1e30d30
    if (((int32_t)(float32_t)result & 0x7fffffff) != 0) {
        float80_t v5 = 1.0L / result; // 0x1e30d46
        *v1 = (float32_t)(v5 * (float80_t)*v1);
        float32_t * v6 = (float32_t *)g5; // 0x1e30d4f
        *v6 = (float32_t)(v5 * (float80_t)*v6);
    }
    // 0x1e30d53
    g11--;
    return result;
}

// Address range: 0x1e30d5c - 0x1e30da5
int32_t function_1e30d5c(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e30d5c
    g2 = a1;
    float32_t * v1 = (float32_t *)a1; // 0x1e30d66
    g5 = a4;
    float32_t * v2 = (float32_t *)a4; // 0x1e30d6b
    float80_t v3 = (float80_t)*v1 - (float80_t)*v2; // 0x1e30d6b
    float80_t v4 = a3; // 0x1e30d7c
    float80_t v5 = (float80_t)(*(float32_t *)(a1 + 4) - *(float32_t *)(a4 + 4)); // 0x1e30d7f
    float80_t v6 = a2; // 0x1e30d82
    float32_t v7 = *v2; // 0x1e30d87
    *v1 = (float32_t)(v4 * v3 - v6 * v5 + (float80_t)v7);
    float32_t v8 = *(float32_t *)(g5 + 4); // 0x1e30d99
    *(float32_t *)(g2 + 4) = (float32_t)(v4 * v5 + v6 * (float80_t)(float32_t)v3 + (float80_t)v8);
    return g2;
}

// Address range: 0x1e30da5 - 0x1e30de3
int32_t function_1e30da5(int32_t a1, float80_t a2) {
    // 0x1e30da5
    float32_t v1; // bp-12
    g2 = &v1;
    float32_t v2; // bp-8
    g5 = &v2;
    function_1e30e36((int32_t)(float32_t)a2, (int32_t *)&v2, (int32_t *)&v1);
    g2 = a1;
    float32_t * v3 = (float32_t *)a1; // 0x1e30dbe
    float32_t v4 = *v3; // 0x1e30dbe
    int32_t v5 = a1 + 4; // 0x1e30dc3
    g5 = v5;
    float32_t v6 = *(float32_t *)v5; // 0x1e30dc6
    *v3 = (float32_t)((float80_t)v4 * (float80_t)v1 - (float80_t)v6 * (float80_t)v2);
    float32_t * v7 = (float32_t *)g5; // 0x1e30dcf
    float32_t v8 = *v7; // 0x1e30dcf
    float32_t v9 = *(float32_t *)g2; // 0x1e30dd4
    *v7 = (float32_t)((float80_t)v8 * (float80_t)v1 + (float80_t)v9 * (float80_t)v2);
    return g2;
}

// Address range: 0x1e30de3 - 0x1e30e04
float80_t function_1e30de3(int32_t a1, int32_t a2) {
    // 0x1e30de3
    g2 = a1;
    g5 = a2;
    float80_t v1 = (float80_t)*(float32_t *)a1 - (float80_t)*(float32_t *)a2; // 0x1e30ded
    float32_t v2 = *(float32_t *)(a2 + 4); // 0x1e30df2
    float80_t v3 = (float80_t)*(float32_t *)(a1 + 4) - (float80_t)v2; // 0x1e30df2
    g11--;
    return sqrtl(v1 * v1 + v3 * v3);
}

// Address range: 0x1e30e04 - 0x1e30e1f
float80_t function_1e30e04(float32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    float80_t v1 = (float80_t)a1 - (float80_t)(float32_t)a3; // 0x1e30e0a
    float80_t v2 = (float80_t)(float32_t)a2 - (float80_t)(float32_t)a4; // 0x1e30e10
    g11--;
    return v1 * v1 + v2 * v2;
}

// Address range: 0x1e30e1f - 0x1e30e36
float80_t function_1e30e1f(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = (int32_t)a1;
    g5 = v1;
    g2 = v2;
    float32_t v3 = *(float32_t *)(v1 + 4); // 0x1e30e27
    float32_t v4 = *(float32_t *)(v2 + 4); // 0x1e30e2a
    float32_t v5 = *(float32_t *)a2; // 0x1e30e2d
    float32_t v6 = *(float32_t *)a1; // 0x1e30e2f
    g11--;
    return (float80_t)v3 * (float80_t)v4 + (float80_t)v5 * (float80_t)v6;
}

// Address range: 0x1e30e36 - 0x1e30e52
int32_t function_1e30e36(int32_t a1, int32_t * a2, int32_t * a3) {
    int32_t v1 = (int32_t)a3;
    g2 = (int32_t)a2;
    float80_t v2 = a1; // 0x1e30e3d
    float80_t v3;
    if (fabsl(v2) < 9223372036854775808.0L) {
        float80_t v4 = sinl(v2); // 0x1e30e40
        g5 = v1;
        *(float32_t *)a2 = (float32_t)v4;
        v3 = cosl(v2);
    } else {
        // .critedge
        g5 = v1;
        *(float32_t *)a2 = (float32_t)a1;
        v3 = v2;
    }
    // bb10
    *(float32_t *)g5 = (float32_t)v3;
    return g2;
}

// Address range: 0x1e30e52 - 0x1e30edf
int32_t function_1e30e52(int32_t a1, int32_t a2, float80_t a3, float80_t a4) {
    // 0x1e30e52
    g2 = a1;
    int32_t v1 = g8; // 0x1e30e57
    int32_t v2 = g6; // 0x1e30e58
    *(int32_t *)(g5 + 24) = a1;
    *(int32_t *)(g5 + 16) = 10;
    *(int32_t *)(g5 + 20) = 15;
    int32_t v3 = g5; // 0x1e30e75
    g8 = v3;
    g5 = a2;
    *(float32_t *)v3 = (float32_t)(0.1L * a3);
    *(int32_t *)(g8 + 28) = g5;
    *(float32_t *)(g8 + 4) = (float32_t)(0.0666666701436042785645L * a4);
    *(float32_t *)(g8 + 8) = 1.0f / *(float32_t *)&g5;
    int32_t v4 = g8; // 0x1e30e9b
    float80_t v5 = 1.0L / (float80_t)*(float32_t *)(v4 + 4); // 0x1e30e9b
    *(float32_t *)(v4 + 12) = (float32_t)v5;
    int32_t v6 = function_1e3df20(2404); // 0x1e30ea1
    g2 = v6;
    int32_t result; // 0x1e30ed6
    if (v6 == 0) {
        // 0x1e30ecf
        *(int32_t *)(g8 + 32) = 0;
        // 0x1e30ed6
        result = g8;
        g2 = result;
        g6 = v2;
        g8 = v1;
        return result;
    }
    int32_t v7 = v6 + 4; // 0x1e30ead
    g3 = v7;
    g6 = 149;
    g4 = v7;
    *(int32_t *)v6 = 150;
    int32_t v8 = g4; // 0x1e30ebd
    g5 = v8;
    g4 = v8 + 16;
    g2 = function_1e30edf();
    int32_t v9 = g6 - 1; // 0x1e30ec7
    g6 = v9;
    while (v9 >= 0) {
        // 0x1e30ebd
        v8 = g4;
        g5 = v8;
        g4 = v8 + 16;
        g2 = function_1e30edf();
        v9 = g6 - 1;
        g6 = v9;
    }
    // 0x1e30eca
    *(int32_t *)(g8 + 32) = g3;
    // 0x1e30ed6
    result = g8;
    g2 = result;
    g6 = v2;
    g8 = v1;
    return result;
}

// Address range: 0x1e30edf - 0x1e30f07
int32_t function_1e30edf(void) {
    // 0x1e30edf
    g8 = g5;
    int32_t v1 = function_1e3a705(0); // 0x1e30ee4
    g2 = v1;
    int32_t v2 = 0; // bp-12
    *(int32_t *)(g8 + 4) = v1;
    *(int32_t *)g8 = 4;
    g2 = function_1e3a705(v2);
    *(int32_t *)(g8 + 8) = 1;
    *(int32_t *)(g8 + 12) = g2;
    int32_t result = g8; // 0x1e30f03
    g2 = result;
    g8 = v2;
    return result;
}

// Address range: 0x1e30f07 - 0x1e30f1c
int32_t function_1e30f07(void) {
    int32_t v1 = g5; // 0x1e30f08
    g8 = v1;
    g2 = function_1e3a728(*(int32_t *)(v1 + 12));
    int32_t v2 = *(int32_t *)(g8 + 4); // 0x1e30f12
    int32_t result = function_1e3a728(v2); // 0x1e30f15
    g2 = result;
    g8 = v2;
    return result;
}

// Address range: 0x1e30f1c - 0x1e30f54
int32_t function_1e30f1c(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // bp-4
    int32_t v2 = g5; // 0x1e30f1d
    int32_t v3 = *(int32_t *)(v2 + 32); // 0x1e30f2c
    int32_t v4 = 16 * (*(int32_t *)(v2 + 16) * a2 + a1) + v3; // 0x1e30f2c
    g7 = v4;
    int32_t v5 = v4 + 4; // 0x1e30f2f
    g8 = v5;
    int32_t v6 = *(int32_t *)v5; // 0x1e30f32
    g5 = v6;
    int32_t v7 = *(int32_t *)v6; // 0x1e30f34
    g2 = v7;
    int32_t v8; // 0x1e30f45
    if (*(int32_t *)(v6 + 4) == v7) {
        int32_t v9 = function_1e3a739(v6, *(int32_t *)v4); // 0x1e30f3e
        g2 = v9;
        *(int32_t *)g8 = v9;
        v8 = g9;
    } else {
        v8 = &v1;
    }
    // 0x1e30f45
    *(int32_t *)(v8 - 4) = *(int32_t *)(v8 + 16);
    *(int32_t *)(v8 - 8) = *(int32_t *)g8;
    int32_t result = function_1e3a6a7((int32_t)&g708, (int32_t)&g708); // 0x1e30f4b
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e30f54 - 0x1e30f8d
int32_t function_1e30f54(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // bp-4
    int32_t v2 = g5; // 0x1e30f55
    int32_t v3 = *(int32_t *)(v2 + 32); // 0x1e30f64
    int32_t v4 = 16 * (*(int32_t *)(v2 + 16) * a2 + a1) + v3; // 0x1e30f64
    g7 = v4;
    int32_t v5 = v4 + 12; // 0x1e30f67
    g8 = v5;
    int32_t v6 = *(int32_t *)v5; // 0x1e30f6a
    g5 = v6;
    int32_t v7 = *(int32_t *)v6; // 0x1e30f6c
    g2 = v7;
    int32_t v8; // 0x1e30f7e
    if (*(int32_t *)(v6 + 4) == v7) {
        int32_t v9 = function_1e3a739(v6, *(int32_t *)(v4 + 8)); // 0x1e30f77
        g2 = v9;
        *(int32_t *)g8 = v9;
        v8 = g9;
    } else {
        v8 = &v1;
    }
    // 0x1e30f7e
    *(int32_t *)(v8 - 4) = *(int32_t *)(v8 + 16);
    *(int32_t *)(v8 - 8) = *(int32_t *)g8;
    int32_t result = function_1e3a6a7((int32_t)&g708, (int32_t)&g708); // 0x1e30f84
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

