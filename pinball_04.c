#include "pinball.h"

// Address range: 0x1e24359 - 0x1e24b5e
int32_t function_1e24359(int32_t hWnd4, uint32_t a2, uint32_t a3, int32_t a4, char a5) {
    // 0x1e24359
    int32_t lpPaint; // bp-88
    int32_t v1 = &lpPaint; // 0x1e2435c
    int32_t v2 = g4; // 0x1e2435f
    int32_t v3 = g6; // 0x1e24361
    g8 = a2;
    if (g664 == a2) {
        int32_t * hWnd = (int32_t *)hWnd4;
        bool v4 = IsIconic(hWnd); // 0x1e24370
        g2 = v4;
        if (v4) {
            // 0x1e2437a
            g2 = ShowWindow(hWnd, 9);
        }
        // 0x1e24385
        *(int32_t *)(g9 - 4) = hWnd4;
        SetForegroundWindow(&g708);
        g2 = 0;
        // 0x1e24b55
        return 0;
    }
    // 0x1e24395
    g2 = a2;
    int32_t v5; // esi
    int32_t v6;
    if (a2 < 29) {
        if (a2 == 28) {
            // 0x1e245ef
            g6 = 0;
            if (a3 == 0) {
                // 0x1e24635
                g6 = 0;
                g155 = 0;
                g2 = function_1e25f24(0, v3, v5, v2);
                g2 = function_1e2807b(403, g6);
                int32_t v7 = g6; // 0x1e2464e
                g637 = v7;
                g2 = function_1e24310(v7);
                g2 = function_1e27960();
                g2 = function_1e27bec();
                v6 = a4;
            } else {
                // 0x1e245f6
                g155 = 1;
                g2 = function_1e27977();
                if (g635 != g6) {
                    // 0x1e2460d
                    if ((int32_t)g150 == g6) {
                        // 0x1e24615
                        g2 = function_1e27c0a(g6);
                    }
                }
                // 0x1e2461b
                g156 = 1;
                g2 = g638;
                *(int32_t *)(g9 - 4) = g638;
                g2 = function_1e24310((int32_t)&g708);
                v6 = a4;
            }
        } else {
            int32_t v8 = a2 - 1; // 0x1e243a2
            g686 = v8;
            g2 = v8;
            g5 = (int32_t)*(char *)(a2 + (int32_t)&g13 - 1);
            switch (a2) {
                case 1: {
                    // 0x1e24475
                    int32_t v9; // bp-24
                    g2 = &v9;
                    g159++;
                    int32_t * hWnd2 = GetDesktopWindow(); // 0x1e2447f
                    g2 = (int32_t)hWnd2;
                    GetWindowRect(hWnd2, (struct tagRECT *)&g708);
                    int32_t v10; // bp-28
                    g5 = &v10;
                    int32_t v11;
                    v10 = v11 - v9;
                    g6 = 0;
                    int32_t v12;
                    int32_t v13;
                    int32_t v14 = v13 - v12; // bp-8
                    g2 = &v14;
                    g2 = function_1e26dbd(&v10, &v14);
                    int32_t * cursorHandle = LoadCursorA((int32_t *)g6, (char *)0x7f02); // 0x1e244b3
                    g2 = (int32_t)cursorHandle;
                    g2 = (int32_t)SetCursor(cursorHandle);
                    g2 = function_1e27151(*(int32_t *)&g660, hWnd4);
                    int32_t v15 = function_1e255a3(g6, "Voices", 8); // 0x1e244d9
                    g2 = v15;
                    int32_t v16 = *(int32_t *)&g660; // 0x1e244df13
                    int32_t v17 = function_1e27775(v16, v15, (int32_t)&g708); // 0x1e244e5
                    g2 = v17;
                    if (v17 == 0) {
                        // 0x1e244ee
                        g2 = function_1e28059(201, g6);
                    }
                    // 0x1e244f9
                    g2 = function_1e27977();
                    if (g517 == 0) {
                        // 0x1e24507
                        *(int32_t *)(g9 - 4) = hWnd4;
                        int32_t v18 = function_1e27b5f((int32_t)&g708); // 0x1e2450a
                        g2 = v18;
                        if (v18 == 0) {
                            // 0x1e24513
                            *(int32_t *)(g9 - 4) = 0;
                            *(int32_t *)(g9 - 8) = 202;
                            g2 = function_1e28059((int32_t)&g708, (int32_t)&g708);
                        }
                    }
                    // 0x1e2451f
                    g2 = function_1e26dd4();
                    *(int32_t *)(g9 - 4) = g4;
                    g2 = (int32_t)SetCursor(&g708);
                    *(int32_t *)(g9 - 4) = 1;
                    *(int32_t *)(g9 - 8) = (int32_t)"Change Display";
                    *(int32_t *)(g9 - 12) = 0;
                    int32_t v19 = function_1e255a3((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e24534
                    g2 = v19;
                    *(int32_t *)(g9 - 4) = v19;
                    *(int32_t *)(g9 - 8) = hWnd4;
                    int32_t v20 = (int32_t)GetMenu(&g708); // 0x1e2453d
                    g2 = v20;
                    *(int32_t *)(g9 - 4) = v20;
                    *(int32_t *)(g9 - 8) = hWnd4;
                    *(int32_t *)(g9 - 12) = g637;
                    *(int32_t *)(g9 - 16) = v14;
                    *(int32_t *)(g9 - 20) = v10;
                    int32_t v21 = function_1e25d5e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24553
                    g2 = v21;
                    g159--;
                    // break -> 0x1e24b45
                    break;
                }
                case 2: {
                }
                case 16: {
                }
                case 18: {
                    // 0x1e24563
                    PostQuitMessage(0);
                    g2 = &g708;
                    function_1e25f13();
                    g2 = 0;
                    // 0x1e24b55
                    return 0;
                }
                case 3: {
                    // 0x1e24577
                    g156 = 1;
                    // break -> 0x1e24b45
                    break;
                }
                case 7: {
                    // 0x1e24586
                    g2 = 1;
                    g154 = 1;
                    g156 = 1;
                    g2 = function_1e272a2(v3, v5, v2);
                    g2 = function_1e25c67();
                    g2 = function_1e26030();
                    // break -> 0x1e24b45
                    break;
                }
                case 8: {
                    // 0x1e245a9
                    g154 = 0;
                    g2 = function_1e272a3(v3, v5, v2);
                    g2 = function_1e2701e();
                    // break -> 0x1e24b45
                    break;
                }
                case 15: {
                    // 0x1e245c2
                    g2 = v1;
                    int32_t * hWnd3 = (int32_t *)hWnd4;
                    g2 = (int32_t)BeginPaint(hWnd3, (struct tagPAINTSTRUCT *)&lpPaint);
                    g2 = function_1e25e71();
                    g5 = v1;
                    EndPaint(hWnd3, (struct tagPAINTSTRUCT *)&lpPaint);
                    g2 = 0;
                    // 0x1e24b55
                    return 0;
                }
                case 20: {
                    // 0x1e245e8
                    g2 = 0;
                    // 0x1e24b55
                    return 0;
                }
            }
            v6 = a4;
        }
        goto lab_0x1e24b45;
    } else {
        if (a2 < 127) {
            if (a2 == 126) {
                int32_t v22 = function_1e25c6f(v3, v5, v2); // 0x1e24676
                g2 = v22;
                if (v22 != 0) {
                    // 0x1e24683
                    g2 = 0;
                    g637 = 0;
                    g2 = function_1e2807b(403, 0);
                    v6 = a4;
                } else {
                    v6 = a4;
                }
            } else {
                if (a2 == 36) {
                    // 0x1e24669
                    g2 = function_1e25f7a(a4, v3, v5, v2);
                    v6 = a4;
                } else {
                    v6 = a4;
                }
            }
            goto lab_0x1e24b45;
        } else {
            if (a2 < 274) {
                if (a2 == 273) {
                    // 0x1e247de
                    g156 = 1;
                    g2 = a3;
                    if (a3 < 203) {
                        if (a3 >= 201) {
                            goto lab_0x1e248c0;
                        } else {
                            if (a3 == 101) {
                                // 0x1e24860
                                g2 = function_1e242a3();
                            } else {
                                if (a3 == 102) {
                                    // 0x1e24867
                                    if (!g150) {
                                        // 0x1e24870
                                        g2 = function_1e2424f();
                                    }
                                    // 0x1e24875
                                    g2 = function_1e24136(*(int32_t *)&g660, hWnd4, "DIALOG_1");
                                } else {
                                    if (a3 == 103) {
                                        // 0x1e2488a
                                        if (!g150) {
                                            // 0x1e24893
                                            g2 = function_1e2424f();
                                        }
                                        // 0x1e24898
                                        g2 = function_1e26db2();
                                    } else {
                                        if (a3 == 105) {
                                            // 0x1e248a2
                                            g2 = PostMessageA((int32_t *)hWnd4, 18, 0, 0);
                                        } else {
                                            if (a3 == 106) {
                                                // 0x1e248b6
                                                g2 = function_1e26224(v3, v5, v2);
                                            }
                                        }
                                    }
                                }
                            }
                            goto lab_0x1e2481e;
                        }
                    } else {
                        if (a3 < 302) {
                            if (a3 == 301) {
                                // 0x1e248f3
                                if (!g150) {
                                    // 0x1e248fc
                                    g2 = function_1e2424f();
                                }
                                // 0x1e24901
                                g2 = function_1e23fe3(*(int32_t *)&g660, hWnd4);
                                goto lab_0x1e2481e;
                            } else {
                                if (a3 == 204) {
                                    goto lab_0x1e248db;
                                } else {
                                    goto lab_0x1e2481e;
                                }
                            }
                        } else {
                            int32_t v23 = a3 - 401; // 0x1e2484f
                            g2 = v23;
                            g687 = v23;
                            switch (a3) {
                                case 401: {
                                    // 0x1e24914
                                    g2 = function_1e2427b(v3);
                                    g2 = function_1e2711a();
                                    goto lab_0x1e2481e;
                                }
                                case 402: {
                                    // 0x1e24923
                                    g2 = function_1e2424f();
                                    goto lab_0x1e2481e;
                                }
                                case 403: {
                                    goto lab_0x1e248c0;
                                }
                                case 404: {
                                    // 0x1e2492d
                                    g2 = function_1e2427b(v3);
                                    g2 = function_1e261c8();
                                    goto lab_0x1e2481e;
                                }
                                case 405: {
                                    // 0x1e2493c
                                    if (!g150) {
                                        // 0x1e24945
                                        g2 = function_1e2424f();
                                    }
                                    // 0x1e2494a
                                    g4 = 500;
                                    int32_t v24 = function_1e25371(500); // 0x1e24950
                                    g2 = v24;
                                    g6 = v24;
                                    if (v24 != 0) {
                                        int32_t lpCmdLine = function_1e25371(g4); // 0x1e24960
                                        g2 = lpCmdLine;
                                        g4 = lpCmdLine;
                                        if (lpCmdLine != 0) {
                                            // 0x1e24976
                                            function_1e2561a(0, (int32_t)"Shell Exe", v24, (int32_t)&g25, 500);
                                            g5 = g666;
                                            g2 = g666 * g666;
                                            g2 = function_1e3d7a0(lpCmdLine, "%s %s%lX  %s%lX");
                                            int32_t v25 = WinExec((char *)lpCmdLine, 5); // 0x1e249c1
                                            g2 = v25;
                                            if (v25 < 32) {
                                                // 0x1e249cc
                                                g2 = function_1e25763(170);
                                                int32_t lpText = function_1e25763(171); // 0x1e249e5
                                                g2 = lpText;
                                                int32_t v26 = MessageBoxA((int32_t *)g666, (char *)lpText, (char *)&g708, (int32_t)&g708); // 0x1e249f1
                                                g2 = v26;
                                            }
                                            // 0x1e249f7
                                            *(int32_t *)(g9 - 4) = v24;
                                            g2 = function_1e25401((int32_t)&g708);
                                            *(int32_t *)(g9 - 4) = lpCmdLine;
                                            g2 = function_1e25401((int32_t)&g708);
                                        } else {
                                            // 0x1e2496b
                                            g2 = function_1e25401(v24);
                                        }
                                    }
                                    goto lab_0x1e2481e;
                                }
                                case 406: {
                                    goto lab_0x1e248db;
                                }
                                case 408: {
                                    goto lab_0x1e24a08;
                                }
                                case 409: {
                                    goto lab_0x1e24a08;
                                }
                                case 410: {
                                    goto lab_0x1e24a08;
                                }
                                case 411: {
                                    goto lab_0x1e24a08;
                                }
                                default: {
                                    goto lab_0x1e2481e;
                                }
                            }
                        }
                    }
                } else {
                    if (a2 == 256) {
                        if ((a5 & 64) == 0) {
                            // 0x1e246a0
                            g2 = function_1e26a34(a3, v3, v5, v2);
                        }
                        // 0x1e246a8
                        g2 = a3;
                        if (a3 == 27) {
                            // 0x1e246c6
                            if (g637 != 0) {
                                // 0x1e246cf
                                *(int32_t *)(g9 - 4) = 403;
                                g2 = function_1e280a4((int32_t)&g708);
                            }
                            // 0x1e246d9
                            *(int32_t *)(g9 - 4) = 0;
                            g2 = g666;
                            *(int32_t *)(g9 - 8) = 0xf020;
                            *(int32_t *)(g9 - 12) = 274;
                            *(int32_t *)(g9 - 16) = g2;
                            int32_t v27 = SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e246eb
                            g2 = v27;
                        } else {
                            if (a3 == 113) {
                                // 0x1e246f3
                                g2 = function_1e242a3();
                            } else {
                                if (a3 == 114) {
                                    // 0x1e246fa
                                    g2 = function_1e2424f();
                                } else {
                                    if (a3 == 115) {
                                        // 0x1e24701
                                        *(int32_t *)(g9 - 4) = 403;
                                        g2 = function_1e280a4((int32_t)&g708);
                                    } else {
                                        if (a3 == 119) {
                                            // 0x1e2470d
                                            if (!g150) {
                                                // 0x1e24716
                                                g2 = function_1e2424f();
                                            }
                                            // 0x1e2471b
                                            g2 = function_1e28812();
                                        }
                                    }
                                }
                            }
                        }
                        // 0x1e24720
                        if (g157 != 0) {
                            // 0x1e2472d
                            g2 = a3;
                            if (a3 == 72) {
                                // 0x1e24749
                                g152 = 1;
                                v6 = a4;
                            } else {
                                if (a3 == 89) {
                                    // 0x1e24758
                                    *(int32_t *)(g9 - 4) = (int32_t)"Pinball";
                                    *(int32_t *)(g9 - 8) = hWnd4;
                                    SetWindowTextA(&g708, (char *)&g708);
                                    int32_t v28 = g151 == 0; // 0x1e2476d
                                    g2 = v28;
                                    g151 = v28;
                                    v6 = a4;
                                } else {
                                    if (a3 == 112) {
                                        // 0x1e2477b
                                        *(int32_t *)(g9 - 4) = 10;
                                        g2 = function_1e26621((int32_t)&g708);
                                        v6 = a4;
                                    } else {
                                        if (a3 == 126) {
                                            bool v29 = g150; // 0x1e24787
                                            g2 = !v29;
                                            g150 = !v29;
                                            if (v29) {
                                                // 0x1e2479f
                                                g156 = 1;
                                                v6 = a4;
                                            } else {
                                                v6 = a4;
                                            }
                                        } else {
                                            v6 = a4;
                                        }
                                    }
                                }
                            }
                        } else {
                            v6 = a4;
                        }
                    } else {
                        if (a2 == 257) {
                            // 0x1e247ae
                            g2 = function_1e26cac(a3, v3, v5, v2);
                            v6 = a4;
                        } else {
                            if (a2 == 260) {
                                // 0x1e247bb
                                g156 = 1;
                                if (g165 != 0) {
                                    // 0x1e247d2
                                    g2 = function_1e258ef(1);
                                    v6 = a4;
                                } else {
                                    v6 = a4;
                                }
                            } else {
                                v6 = a4;
                            }
                        }
                    }
                    goto lab_0x1e24b45;
                }
            } else {
                if (a2 < 279) {
                    if (a2 == 278) {
                        // 0x1e24a6f
                        g156 = 1;
                        v6 = a4;
                        goto lab_0x1e24b45;
                    } else {
                        if (a2 == 274) {
                            int32_t v30 = a3 & 0xfff0; // 0x1e24a1d
                            g2 = v30;
                            if (v30 == 0xf010) {
                                // 0x1e24a3c
                                if (g165 != 0) {
                                    // 0x1e24a45
                                    g2 = 0;
                                    // 0x1e24b55
                                    return 0;
                                }
                                goto lab_0x1e24a63;
                            } else {
                                if (v30 == 0xf020) {
                                    // 0x1e24a4c
                                    if (!g150) {
                                        // 0x1e24a59
                                        g2 = function_1e2424f();
                                        v6 = a4;
                                    } else {
                                        v6 = a4;
                                    }
                                    goto lab_0x1e24b45;
                                } else {
                                    if (v30 == 0xf140) {
                                        goto lab_0x1e24a63;
                                    } else {
                                        v6 = a4;
                                        goto lab_0x1e24b45;
                                    }
                                }
                            }
                        } else {
                            v6 = a4;
                            goto lab_0x1e24b45;
                        }
                    }
                } else {
                    if (a2 == 287) {
                        // 0x1e24a7e
                        g2 = 0;
                        if (a4 == 0) {
                            // 0x1e24a89
                            if (g165 != 0) {
                                // 0x1e24a91
                                g2 = function_1e258ef(0);
                            }
                            // 0x1e24a97
                            g2 = 0;
                            // 0x1e24b55
                            return 0;
                        }
                        v6 = a4;
                        goto lab_0x1e24b45;
                    } else {
                        if (a2 == 513) {
                            // 0x1e24a9e
                            if (g516 != 0) {
                                // 0x1e24ab3
                                if (g157 != 0) {
                                    // 0x1e24ac0
                                    g153 = 1;
                                    int32_t v31 = (int32_t)SetCursor(NULL); // 0x1e24acc
                                    g2 = v31;
                                    g667 = v31;
                                    int32_t v32 = function_1e25f53(a4); // 0x1e24ada
                                    g661 = v32 & 0xffff;
                                    int32_t v33 = v32 / 0x10000; // 0x1e24aed
                                    g2 = v33;
                                    g662 = v33;
                                    g2 = (int32_t)SetCapture((int32_t *)hWnd4);
                                    v6 = v32;
                                } else {
                                    v6 = a4;
                                }
                            } else {
                                // 0x1e24aa7
                                g2 = function_1e26172(-1, v3, v5, v2);
                                v6 = a4;
                            }
                            goto lab_0x1e24b45;
                        } else {
                            if (a2 == 514) {
                                // 0x1e24b03
                                g2 = 0;
                                if (g153 != 0) {
                                    // 0x1e24b0d
                                    g153 = 0;
                                    g2 = g667;
                                    g2 = (int32_t)SetCursor((int32_t *)g667);
                                    g2 = ReleaseCapture();
                                    v6 = a4;
                                } else {
                                    v6 = a4;
                                }
                                goto lab_0x1e24b45;
                            } else {
                                if (a2 == 516) {
                                    goto lab_0x1e24b26;
                                } else {
                                    if (a2 == 519) {
                                        goto lab_0x1e24b26;
                                    } else {
                                        if (a2 == 785) {
                                            // 0x1e24b38
                                            g2 = InvalidateRect((int32_t *)hWnd4, NULL, false);
                                            v6 = a4;
                                            goto lab_0x1e24b45;
                                        } else {
                                            if (a2 == 953) {
                                                goto lab_0x1e2481e;
                                            } else {
                                                v6 = a4;
                                                goto lab_0x1e24b45;
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
  lab_0x1e24b45:
    // 0x1e24b45
    *(int32_t *)(g9 - 4) = v6;
    *(int32_t *)(g9 - 8) = a3;
    *(int32_t *)(g9 - 12) = g8;
    *(int32_t *)(g9 - 16) = hWnd4;
    int32_t result = DefWindowProcA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24b4f
    g2 = result;
    // 0x1e24b55
    return result;
  lab_0x1e248c0:
    // 0x1e248c0
    if (!g150) {
        // 0x1e248c9
        g2 = function_1e2424f();
    }
    // 0x1e248ce
    g2 = function_1e280a4(a3);
    goto lab_0x1e2481e;
  lab_0x1e2481e:
    if (a3 == 1) {
        // 0x1e24828
        *(int32_t *)(g9 - 4) = a4;
        g2 = function_1e27c5e();
        v6 = a4;
    } else {
        v6 = a4;
    }
    goto lab_0x1e24b45;
  lab_0x1e248db:
    // 0x1e248db
    if (!g150) {
        // 0x1e248e4
        g2 = function_1e2424f();
    }
    // 0x1e248e9
    g2 = function_1e28812();
    goto lab_0x1e2481e;
  lab_0x1e24a08:
    // 0x1e24a08
    g2 = function_1e280a4(a3);
    g2 = function_1e242a3();
    goto lab_0x1e2481e;
  lab_0x1e24a63:
    // 0x1e24a63
    g2 = function_1e25f24(0, v3, v5, v2);
    v6 = a4;
    goto lab_0x1e24b45;
  lab_0x1e24b26:
    // 0x1e24b26
    if (g516 == 0) {
        // 0x1e24b2f
        g2 = function_1e26172(-1, v3, v5, v2);
        v6 = a4;
    } else {
        v6 = a4;
    }
    goto lab_0x1e24b45;
}

// Address range: 0x1e24bc6 - 0x1e252d8
int32_t function_1e24bc6(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e24bc6
    int32_t v1; // bp-304
    int32_t v2 = &v1; // 0x1e24bc9
    g2 = function_1e25365(0x1e242cf, g6, g8, g4);
    g159++;
    int32_t v3 = function_1e25763(165); // 0x1e24bf4
    g2 = v3;
    g2 = function_1e254dd(v3);
    int32_t v4 = function_1e25763(166); // 0x1e24c0c
    g2 = v4;
    int32_t v5 = function_1e255a3(v4, (char *)&g708, (int32_t)&g708); // 0x1e24c12
    g2 = v5;
    int32_t lpCmdLine = function_1e25371(500); // 0x1e24c21
    g2 = lpCmdLine;
    int32_t result; // 0x1e252d5
    int32_t v6; // 0x1e24d14
    int32_t v7; // 0x1e24d24
    if (v5 > 1) {
        // 0x1e24c21
        g6 = lpCmdLine;
        if (lpCmdLine != 0) {
            int32_t v8 = function_1e25763(166); // 0x1e24c4f
            g2 = v8;
            int32_t v9 = function_1e2561a(v8, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24c55
            g2 = v9;
            int32_t v10 = WinExec((char *)lpCmdLine, 5); // 0x1e24c5d
            g2 = v10;
            g8 = v10;
            g2 = function_1e25401(lpCmdLine);
            if (g8 < 32) {
                goto lab_0x1e24dd5;
            } else {
                // 0x1e24c74
                function_1e25505();
                g2 = 0;
                result = 0;
                goto lab_0x1e252cf;
            }
        } else {
            // 0x1e24c2c
            function_1e25505();
            g2 = 0;
            result = 0;
            goto lab_0x1e252cf;
        }
    } else {
        // 0x1e24c80
        g4 = lpCmdLine;
        if (lpCmdLine != 0) {
            // 0x1e24c97
            g6 = 500;
            int32_t v11 = function_1e25763(166); // 0x1e24cab
            g2 = v11;
            function_1e25693(v11, (int32_t)&g708);
            struct tagPAINTSTRUCT * hModule = g660; // 0x1e24cb7
            g2 = (int32_t)hModule;
            g2 = GetModuleFileNameA((int32_t *)hModule, (char *)lpCmdLine, g6);
            int32_t v12 = function_1e25763(g8); // 0x1e24ccd
            g2 = v12;
            g2 = function_1e256f7(v12, (int32_t)&g708, (int32_t)&g708);
            g2 = function_1e25763(169);
            int32_t v13 = function_1e25763(g8); // 0x1e24ced
            g2 = v13;
            g2 = function_1e256f7(v13, (int32_t)&g708, (int32_t)&g708);
            int32_t v14 = function_1e25763(g8); // 0x1e24cfb
            g2 = v14;
            g2 = function_1e256f7(0, (int32_t)"Last Table Played", v14);
            g2 = function_1e25401(lpCmdLine);
            v6 = function_1e25371(g6);
            g2 = v6;
            g8 = v6;
            if (v6 == 0) {
                goto lab_0x1e24dd5;
            } else {
                // 0x1e24d23
                v7 = function_1e25371(g6);
                g2 = v7;
                g6 = v7;
                if (v7 == 0) {
                    goto lab_0x1e24dcf;
                } else {
                    // 0x1e24d33
                    g4 = 0;
                    int32_t v15; // bp-104
                    int32_t v16 = &v15; // 0x1e24d40
                    int32_t v17 = 0;
                    while (true) {
                        // 0x1e24d38
                        *(int32_t *)(g9 - 4) = v17;
                        *(int32_t *)(g9 - 8) = (int32_t)"Table%d";
                        g5 = v16;
                        *(int32_t *)(g9 - 12) = v16;
                        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
                        g5 = v16;
                        *(int32_t *)(g9 + 8) = 500;
                        *(int32_t *)(g9 + 4) = (int32_t)&g25;
                        *(int32_t *)g9 = v6;
                        *(int32_t *)(g9 - 4) = v16;
                        *(int32_t *)(g9 - 8) = 0;
                        int32_t v18 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24d5d
                        g2 = v18;
                        if (*(char *)v6 == 0) {
                            // break -> 0x1e24dad
                            break;
                        }
                        // 0x1e24d67
                        *(int32_t *)(g9 - 4) = 500;
                        *(int32_t *)(g9 - 8) = (int32_t)&g25;
                        *(int32_t *)(g9 - 12) = v7;
                        *(int32_t *)(g9 - 16) = (int32_t)"Table Name";
                        *(int32_t *)(g9 - 20) = v6;
                        int32_t v19 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24d78
                        g2 = v19;
                        *(int32_t *)(g9 - 4) = 0;
                        *(int32_t *)(g9 - 8) = 169;
                        int32_t v20 = function_1e25763((int32_t)&g708); // 0x1e24d84
                        g2 = v20;
                        *(int32_t *)(g9 - 4) = v20;
                        *(int32_t *)(g9 - 8) = v7;
                        int32_t v21 = lstrcmpA((char *)&g708, (char *)&g708); // 0x1e24d8b
                        g2 = v21;
                        if (v21 == 0) {
                            // 0x1e24dad
                            g4 = 1;
                            goto lab_0x1e24dc9;
                        }
                        // 0x1e24d95
                        if (*(char *)v7 == 0) {
                            // break -> 0x1e24dad
                            break;
                        }
                        int32_t v22 = v17 + 1; // 0x1e24d9a
                        if (v22 >= 0x7fbc) {
                            // break -> 0x1e24dad
                            break;
                        }
                        v17 = v22;
                    }
                    // 0x1e24dad
                    if (g4 == 0) {
                        // 0x1e24db1
                        *(int32_t *)(g9 - 4) = 0;
                        *(int32_t *)(g9 - 8) = 166;
                        int32_t v23 = function_1e25763((int32_t)&g708); // 0x1e24db8
                        g2 = v23;
                        *(int32_t *)(g9 - 4) = v23;
                        g5 = v16;
                        *(int32_t *)(g9 - 8) = v16;
                        *(int32_t *)(g9 - 12) = 0;
                        int32_t v24 = function_1e256f7((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24dc4
                        g2 = v24;
                    }
                    goto lab_0x1e24dc9;
                }
            }
        } else {
            // 0x1e24c8b
            function_1e25505();
            g2 = 0;
            result = 0;
            goto lab_0x1e252cf;
        }
    }
  lab_0x1e24dd5:
    // 0x1e24dd5
    *(int32_t *)(g9 - 4) = (int32_t)"-quick";
    g159--;
    *(int32_t *)(g9 - 8) = a2;
    int32_t v25 = function_1e3d810((int32_t)&g708, (int32_t)&g708); // 0x1e24de3
    g2 = v25;
    g517 = 1;
    if (v25 == 0) {
        // 0x1e24df9
        g517 = 0;
    }
    // 0x1e24e03
    *(int32_t *)(g9 + 4) = 300;
    g660 = (struct tagPAINTSTRUCT *)a1;
    *(int32_t *)g9 = 0;
    *(int32_t *)(g9 - 4) = 168;
    int32_t v26 = function_1e25763((int32_t)&g708); // 0x1e24e19
    g2 = v26;
    *(int32_t *)(g9 - 4) = v26;
    *(int32_t *)(g9 - 8) = (int32_t)&g515;
    *(int32_t *)(g9 - 12) = (int32_t)"Pinball Data";
    *(int32_t *)(g9 - 16) = g8;
    *(int32_t *)(g9 - 20) = 166;
    int32_t v27 = function_1e25763((int32_t)&g708); // 0x1e24e2f
    g2 = v27;
    *(int32_t *)(g9 - 4) = v27;
    int32_t v28 = function_1e2561a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24e35
    g2 = v28;
    *(int32_t *)(g9 - 4) = (int32_t)"PinballThemeSwitcherUniqueMsgString";
    g2 = RegisterWindowMessageA((char *)&g708);
    *(int32_t *)(g9 - 4) = g8;
    g664 = g2;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 167;
    int32_t v29 = function_1e25763((int32_t)&g708); // 0x1e24e51
    g2 = v29;
    *(int32_t *)(g9 - 4) = v29;
    int32_t * v30 = FindWindowA((char *)&g708, (char *)&g708); // 0x1e24e57
    int32_t v31 = (int32_t)v30; // 0x1e24e57
    g2 = v31;
    if (v30 == NULL) {
        int32_t v32 = function_1e28fb7(); // 0x1e24e77
        g2 = v32;
        if (v32 == 0) {
            // 0x1e24e87
            g4 = 0;
            *(int32_t *)(g9 - 4) = (int32_t)"ICON_1";
            *(int32_t *)(g9 - 8) = g6;
            int32_t v33 = 0x1008; // bp-72
            g2 = (int32_t)LoadIconA((int32_t *)0x1008, (char *)0x1e24359);
            *(int32_t *)(g9 - 4) = 0x7f00;
            *(int32_t *)(g9 - 8) = g4;
            g2 = (int32_t)LoadCursorA((int32_t *)g2, (char *)&g708);
            *(int32_t *)(g9 - 4) = g4;
            *(int32_t *)(g9 - 8) = 167;
            int32_t v34 = function_1e25763(g2); // 0x1e24ed2
            g2 = (int32_t)"splash_bitmap";
            *(int32_t *)(g9 - 4) = (int32_t)"splash_bitmap";
            *(int32_t *)(g9 - 8) = g2;
            *(int32_t *)(g9 - 12) = g6;
            int32_t v35 = function_1e28c4f(v34, (int32_t)&g708, (int32_t)&g708); // 0x1e24ee2
            g8 = v35;
            int32_t v36 = &v33; // 0x1e24ee9
            g2 = v36;
            *(int32_t *)(g9 - 4) = v36;
            g2 = RegisterClassA((struct tagWNDCLASSA *)&g708);
            g2 = function_1e28ec7();
            *(int32_t *)(g9 - 4) = g4;
            *(int32_t *)(g9 - 8) = 38;
            int32_t v37 = function_1e25763((int32_t)&g708); // 0x1e24efb
            g2 = v37;
            *(int32_t *)(g9 - 4) = v37;
            g5 = v2;
            *(int32_t *)(g9 - 8) = v2;
            g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
            *(int32_t *)(g9 - 4) = g4;
            *(int32_t *)(g9 - 8) = g6;
            *(int32_t *)(g9 - 12) = g4;
            *(int32_t *)(g9 - 16) = g4;
            *(int32_t *)(g9 - 20) = 480;
            g5 = v2;
            *(int32_t *)(g9 - 24) = 640;
            *(int32_t *)(g9 - 28) = g4;
            *(int32_t *)(g9 - 32) = g4;
            *(int32_t *)(g9 - 36) = 0x3ca0000;
            *(int32_t *)(g9 - 40) = v2;
            *(int32_t *)(g9 - 44) = g4;
            *(int32_t *)(g9 - 48) = 167;
            int32_t v38 = function_1e25763((int32_t)&g708); // 0x1e24f30
            g2 = v38;
            *(int32_t *)(g9 - 4) = v38;
            *(int32_t *)(g9 - 8) = g4;
            int32_t * windowHandle = CreateWindowExA((int32_t)&g708, (char *)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708, &g708, &g708); // 0x1e24f37
            int32_t v39 = (int32_t)windowHandle; // 0x1e24f37
            g2 = v39;
            g666 = v39;
            int32_t v40 = g4; // 0x1e24f42
            if (v39 != v40) {
                // 0x1e24f54
                g2 = v39;
                *(int32_t *)(g9 - 4) = v39;
                int32_t v41 = (int32_t)GetMenu(&g708); // 0x1e24f5a
                g2 = v41;
                *(int32_t *)(g9 - 4) = v41;
                g2 = function_1e27c96((int32_t)&g708);
                g2 = function_1e27131();
                g2 = function_1e26743();
                *(int32_t *)(g9 - 4) = (int32_t)"-fullscreen";
                *(int32_t *)(g9 - 8) = a2;
                int32_t v42 = function_1e3d810((int32_t)&g708, (int32_t)&g708); // 0x1e24f78
                g2 = v42;
                int32_t v43; // 0x1e24f9a
                if (v42 != 0) {
                    // 0x1e24f84
                    g637 = 1;
                    *(int32_t *)(g9 + 4) = 1;
                    *(int32_t *)g9 = 403;
                    g2 = function_1e2807b((int32_t)&g708, (int32_t)&g708);
                    v43 = g9;
                } else {
                    v43 = g9 + 8;
                }
                // 0x1e24f9a
                *(int32_t *)(v43 - 4) = a3;
                *(int32_t *)(v43 - 8) = g666;
                g2 = ShowWindow(&g708, (int32_t)&g708);
                *(int32_t *)(g9 - 4) = g637;
                g2 = function_1e259f5((int32_t)&g708);
                *(int32_t *)(g9 - 4) = g666;
                g2 = UpdateWindow(&g708);
                if (v35 != 0) {
                    // 0x1e24fc4
                    *(int32_t *)(g9 - 4) = v35;
                    g2 = function_1e28d7b((int32_t)&g708);
                    *(int32_t *)(g9 - 4) = v35;
                    g2 = function_1e28dba((int32_t)&g708);
                }
                // 0x1e24fd4
                g2 = g638;
                *(int32_t *)(g9 - 4) = g638;
                g2 = function_1e24310((int32_t)&g708);
                int32_t v44 = timeGetTime(); // 0x1e24fdf
                g2 = v44;
                g8 = v44;
                int32_t v45 = timeGetTime(); // 0x1e24fe7
                g2 = v45;
                if (v45 >= g8) {
                    // 0x1e24ff1
                    int32_t v46; // bp-132
                    int32_t v47 = &v46; // 0x1e25009
                    while (true) {
                        int32_t v48 = timeGetTime() - g8; // 0x1e24ff7
                        g2 = v48;
                        if (v48 >= 2000) {
                            // break -> 0x1e25020
                            break;
                        }
                        // 0x1e25000
                        *(int32_t *)(g9 - 4) = 1;
                        g2 = g666;
                        *(int32_t *)(g9 - 8) = 0;
                        g5 = v47;
                        *(int32_t *)(g9 - 12) = 0;
                        *(int32_t *)(g9 - 16) = g2;
                        *(int32_t *)(g9 - 20) = v47;
                        bool v49 = PeekMessageA((struct tagMSG *)&g708, &g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25010
                        g2 = v49;
                        int32_t v50 = timeGetTime(); // 0x1e25016
                        g2 = v50;
                        if (v50 < g8) {
                            // break -> 0x1e25020
                            break;
                        }
                    }
                }
                // 0x1e25020
                *(int32_t *)(g9 - 4) = (int32_t)"-demo";
                *(int32_t *)(g9 - 8) = a2;
                int32_t v51 = function_1e3d810((int32_t)&g708, (int32_t)&g708); // 0x1e25028
                g2 = v51;
                int32_t v52;
                if (v51 == 0) {
                    // 0x1e2503b
                    *(int32_t *)(g9 + 4) = 0;
                    v52 = function_1e26d6e((int32_t)&g708);
                } else {
                    // 0x1e25034
                    v52 = function_1e261c8();
                }
                // 0x1e25042
                g2 = v52;
                g8 = 0;
                int32_t v53 = timeGetTime(); // 0x1e25044
                g2 = v53;
                g4 = &g669;
                g665 = v53;
                int32_t v54; // bp-32
                int32_t v55 = &v54; // 0x1e251bd
                int32_t v56 = 300;
                int32_t v57 = 0;
                while (true) {
                    int32_t v58 = g8; // 0x1e25054
                    int32_t v59;
                    int32_t v60; // 0x1e25070
                    if (v56 == v58) {
                        // 0x1e2505d
                        if (g151 != v58) {
                            // 0x1e25070
                            v60 = timeGetTime();
                            g2 = v60;
                            if (v57 != g8) {
                                int32_t v61 = v60 - v57; // 0x1e25082
                                g2 = v61;
                                *(float64_t *)(g9 - 8) = (float64_t)(300.0L / (0.001L * (float80_t)v61));
                                *(int32_t *)(g9 - 12) = (int32_t)"Frames/sec = %02.02f";
                                *(int32_t *)(g9 - 16) = (int32_t)&g496;
                                g2 = function_1e3d7a0(v60, (char *)&g708);
                                *(int32_t *)(g9 + 12) = (int32_t)&g496;
                                *(int32_t *)(g9 + 8) = g666;
                                g2 = SetWindowTextA(&g708, (char *)&g708);
                                int32_t v62 = g8; // 0x1e250c3
                                if (g152 != v62) {
                                    // 0x1e250cf
                                    if (g670 == v62) {
                                        // 0x1e250d7
                                        *(int32_t *)(g9 - 4) = 1024;
                                        int32_t v63 = function_1e22670((int32_t)&g708); // 0x1e250dc
                                        int32_t v64 = v63 + 42; // 0x1e250e4
                                        g6 = v64;
                                        g5 = 255;
                                        g2 = 0;
                                        int32_t v65 = 0; // 0x1e25111
                                        int32_t v66 = g8;
                                        int32_t v67 = 10;
                                        while (true) {
                                            if (v67 >= 256) {
                                                // break -> 0x1e25135
                                                break;
                                            }
                                            int32_t v68 = g5; // 0x1e25107
                                            *(char *)v64 = (char)(v65 > v68 ? v68 : v65);
                                            int32_t v69 = 0x1000000 * v66 / 0x1000000; // 0x1e25119
                                            int32_t v70 = v65 > v68 ? v69 : g2;
                                            g7 = v70;
                                            *(char *)(g6 - 1) = (char)v70;
                                            g2 += 8;
                                            *(char *)(g6 - 2) = (char)g7;
                                            int32_t v71 = g6 + 4; // 0x1e25125
                                            g6 = v71;
                                            int32_t v72 = v67 + 1; // 0x1e2512b
                                            int32_t v73 = g2; // 0x1e2512e
                                            if (v73 >= 2048) {
                                                // break -> 0x1e25135
                                                break;
                                            }
                                            v64 = v71;
                                            v65 = v73;
                                            v66 = v69 + 1;
                                            v67 = v72;
                                        }
                                        // 0x1e25135
                                        *(int32_t *)(g9 - 4) = v63;
                                        g2 = function_1e27182();
                                        *(int32_t *)(g9 - 4) = v63;
                                        g2 = function_1e22600((int32_t)&g708);
                                        *(int32_t *)g9 = 15;
                                        *(int32_t *)(g9 - 4) = 400;
                                        *(int32_t *)(g9 - 8) = g4;
                                        int32_t v74 = function_1e27332((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25150
                                        g2 = v74;
                                    }
                                    // 0x1e25155
                                    *(int32_t *)(g9 - 4) = 10;
                                    *(int32_t *)(g9 - 8) = 300;
                                    *(int32_t *)(g9 - 12) = g8;
                                    *(int32_t *)(g9 - 16) = g8;
                                    *(int32_t *)(g9 - 20) = g8;
                                    *(int32_t *)(g9 - 24) = g8;
                                    *(int32_t *)(g9 - 28) = g4;
                                    int32_t v75 = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25161
                                    g2 = v75;
                                    *(int32_t *)(g9 - 4) = g8;
                                    *(int32_t *)(g9 - 8) = g8;
                                    *(int32_t *)(g9 - 12) = g8;
                                    *(int32_t *)(g9 - 16) = 10;
                                    *(int32_t *)(g9 - 20) = 300;
                                    *(int32_t *)(g9 - 24) = g4;
                                    int32_t v76 = function_1e27576((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25171
                                    g2 = v76;
                                }
                            }
                            // 0x1e25176
                            g2 = v60;
                            v59 = 300;
                        } else {
                            v59 = 300;
                            v60 = v58;
                        }
                    } else {
                        v59 = v56;
                        v60 = v57;
                    }
                    // 0x1e25181
                    g2 = function_1e279f0();
                    int32_t v77 = function_1e252d8(); // 0x1e25186
                    g2 = v77;
                    if (v77 == 0) {
                        // break -> 0x1e2527d
                        break;
                    }
                    int32_t v78 = g8; // 0x1e25193
                    if (g154 == v78) {
                        v56 = v59;
                        v57 = v60;
                        // continue -> 0x1e25054
                        continue;
                    }
                    // 0x1e2519f
                    if (g153 != v78) {
                        int32_t v79 = timeGetTime(); // 0x1e251a7
                        g663 = v79;
                        int32_t v80 = v79 - g665; // 0x1e251b2
                        g2 = v80;
                        if (v80 >= 2) {
                            // 0x1e251bd
                            g2 = v55;
                            *(int32_t *)(g9 - 4) = v55;
                            GetCursorPos((struct tagPOINT *)&g708);
                            int32_t v81;
                            *(int32_t *)(g9 - 4) = v81 - g662;
                            int32_t v82 = g661 - v54; // 0x1e251d6
                            g2 = v82;
                            *(int32_t *)(g9 - 8) = v82;
                            g2 = function_1e26791((int32_t)&g708, (int32_t)&g708);
                            *(int32_t *)(g9 - 4) = g662;
                            *(int32_t *)(g9 - 8) = g661;
                            g2 = SetCursorPos((int32_t)&g708, (int32_t)&g708);
                        }
                    }
                    // 0x1e251f1
                    if ((int32_t)g150 != g8) {
                        v56 = v59;
                        v57 = v60;
                        // continue -> 0x1e25054
                        continue;
                    }
                    int32_t v83 = timeGetTime(); // 0x1e251fd
                    g2 = v83;
                    g663 = v83;
                    int32_t v84 = g8; // 0x1e25208
                    int32_t v85; // 0x1e25220
                    if (g156 == v84) {
                        // 0x1e251fd
                        v85 = g665;
                    } else {
                        // 0x1e25210
                        g665 = v83;
                        g156 = v84;
                        v85 = v83;
                    }
                    int32_t v86 = v83 - v85; // 0x1e25220
                    g2 = v86;
                    *(int32_t *)(g9 - 4) = v86;
                    int32_t v87 = function_1e26621((int32_t)&g708); // 0x1e25227
                    g2 = v87;
                    if (v87 == 0) {
                        v56 = v59;
                        v57 = v60;
                        // continue -> 0x1e25054
                        continue;
                    }
                    // 0x1e25234
                    if (g670 != g8) {
                        int32_t v88 = g663 - g665 + 10; // 0x1e25247
                        int32_t v89;
                        int32_t v90; // 0x1e25256
                        if (v88 > 236) {
                            v89 = 249;
                            v90 = 249;
                        } else {
                            v89 = v88;
                            v90 = v88;
                        }
                        // 0x1e25256
                        g2 = v89;
                        *(int32_t *)(g9 - 4) = v90;
                        *(int32_t *)(g9 - 8) = g8;
                        int32_t v91 = 299 - v59; // 0x1e2525d
                        g2 = v91;
                        *(int32_t *)(g9 - 12) = v91;
                        *(int32_t *)(g9 - 16) = 10;
                        *(int32_t *)(g9 - 20) = 1;
                        *(int32_t *)(g9 - 24) = g4;
                        int32_t v92 = function_1e27576((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25266
                        g2 = v92;
                    }
                    int32_t v93 = g663; // 0x1e2526b
                    g2 = v93;
                    g665 = v93;
                    v56 = v59 - 1;
                    v57 = v60;
                }
                // 0x1e2527d
                *(int32_t *)(g9 - 4) = (int32_t)&g669;
                g2 = function_1e273a9((int32_t)&g708);
                g2 = function_1e27faa();
                g2 = function_1e27bc4();
                g2 = function_1e26fcd();
                g2 = function_1e278d0();
                function_1e272a4();
                g2 = g666;
                *(int32_t *)(g9 - 4) = g666;
                g2 = DestroyWindow(&g708);
                function_1e25505();
                int32_t v94 = (int32_t)g660; // 0x1e252b1
                g2 = v94;
                *(int32_t *)(g9 - 4) = v94;
                *(int32_t *)(g9 - 8) = 0;
                *(int32_t *)(g9 - 12) = 167;
                int32_t v95 = function_1e25763((int32_t)&g708); // 0x1e252be
                g2 = v95;
                *(int32_t *)(g9 - 4) = v95;
                UnregisterClassA((char *)&g708, &g708);
                g2 = g668;
                result = g668;
            } else {
                // 0x1e24f46
                *(int32_t *)(g9 - 4) = v40;
                PostQuitMessage((int32_t)&g708);
                g2 = 0;
                result = 0;
            }
        } else {
            // 0x1e24e80
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e24e61
        *(int32_t *)(g9 - 4) = g8;
        *(int32_t *)(g9 - 8) = g8;
        *(int32_t *)(g9 - 12) = g664;
        *(int32_t *)(g9 - 16) = v31;
        SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = 0;
        result = 0;
    }
    goto lab_0x1e252cf;
  lab_0x1e252cf:
    // 0x1e252cf
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e24dcf:
    // 0x1e24dcf
    *(int32_t *)(g9 - 4) = v6;
    g2 = function_1e25401((int32_t)&g708);
    goto lab_0x1e24dd5;
  lab_0x1e24dc9:
    // 0x1e24dc9
    *(int32_t *)(g9 - 4) = v7;
    g2 = function_1e25401((int32_t)&g708);
    goto lab_0x1e24dcf;
}

// Address range: 0x1e252d8 - 0x1e25365
int32_t function_1e252d8(void) {
    // 0x1e252d8
    g2 = 0;
    int32_t lpMsg; // bp-32
    int32_t v1 = &lpMsg; // 0x1e252dd
    int32_t v2;
    if (g154 != 0) {
        int32_t v3 = v1; // 0x1e25320
        while (true) {
            // 0x1e25320
            *(int32_t *)(v3 - 4) = 1;
            g2 = v1;
            *(int32_t *)(v3 - 8) = 0;
            *(int32_t *)(v3 - 12) = 0;
            *(int32_t *)(v3 - 16) = 0;
            *(int32_t *)(v3 - 20) = v1;
            bool v4 = PeekMessageA((struct tagMSG *)&g708, &g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2532c
            g2 = v4;
            if (!v4) {
                // break -> 0x1e2535c
                break;
            }
            // 0x1e25336
            g2 = v1;
            *(int32_t *)(g9 - 4) = v1;
            TranslateMessage((struct tagMSG *)&g708);
            g2 = v1;
            *(int32_t *)(g9 - 4) = v1;
            g2 = DispatchMessageA((struct tagMSG *)&g708);
            if (v2 == 18) {
                // 0x1e25350
                g2 = 0;
                return 0;
            }
            // 0x1e25336
            v3 = g9;
        }
    } else {
        // 0x1e252e8
        g5 = v1;
        g2 = g666;
        bool v5 = GetMessageA((struct tagMSG *)&lpMsg, (int32_t *)g666, 0, 0); // 0x1e252f4
        g2 = v5;
        g5 = v1;
        g2 = TranslateMessage((struct tagMSG *)&lpMsg);
        g5 = v1;
        g2 = DispatchMessageA((struct tagMSG *)&lpMsg);
        if (v2 == 18) {
            // 0x1e25314
            g2 = 0;
            // 0x1e25361
            return 0;
        }
    }
    // 0x1e2535c
    g2 = 1;
    // 0x1e25361
    return 1;
}

// Address range: 0x1e25365 - 0x1e25371
int32_t function_1e25365(int32_t result, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e25365
    g2 = result;
    g160 = result;
    return result;
}

// Address range: 0x1e25371 - 0x1e25401
int32_t function_1e25371(uint32_t a1) {
    int32_t v1 = g8; // 0x1e25371
    g8 = a1;
    int32_t v2 = a1 + 4; // 0x1e2537c
    g2 = v2;
    int32_t v3 = function_1e22670(v2); // 0x1e253bf
    g2 = v3;
    if (a1 >= 0xffdc) {
        if (v3 == 0) {
            // 0x1e253e3
            g2 = 0;
            // 0x1e253fd
            g8 = v1;
            return 0;
        }
        int32_t v4 = 256 * g8; // 0x1e253ec
        g5 = v4;
        *(int32_t *)v3 = v4;
        g158 += g8 + 4;
        *(char *)g2 = -91;
    } else {
        if (v3 == 0) {
            // 0x1e253a6
            g2 = 0;
            // 0x1e253fd
            g8 = v1;
            return 0;
        }
        int32_t v5 = 256 * g8; // 0x1e253af
        g5 = v5;
        *(int32_t *)v3 = v5;
        g158 += g8 + 4;
        *(char *)g2 = 90;
    }
    int32_t result = g2 + 4; // 0x1e253fa
    g2 = result;
    // 0x1e253fd
    g8 = v1;
    return result;
}

// Address range: 0x1e25401 - 0x1e2542e
int32_t function_1e25401(int32_t a1) {
    int32_t result = a1 - 4; // 0x1e25405
    g2 = result;
    int32_t v1 = *(int32_t *)result / 256 + 4; // 0x1e2540d
    g5 = v1;
    g158 -= v1;
    unsigned char v2 = *(char *)result; // 0x1e25416
    g5 = (int32_t)v2 | v1 & 0x1ffff00;
    if (v2 != 90) {
        char v3 = v2 + 91; // 0x1e2541d
        g683 = ((v3 ^ v2) & (v2 ^ -128)) < 0;
        if (v3 != 0) {
            // 0x1e2542b
            return result;
        }
    }
    int32_t result2 = function_1e22600(result); // 0x1e25423
    g2 = result2;
    g683 = (g9 + 4 & (g9 ^ -0x80000000)) < 0;
    // 0x1e2542b
    return result2;
}

// Address range: 0x1e2542e - 0x1e254dd
int32_t function_1e2542e(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // 0x1e2542e
    g2 = a1;
    int32_t v2 = g4; // 0x1e25437
    int32_t result; // 0x1e2543d
    int32_t v3; // 0x1e25447
    if (a1 != 0) {
        // 0x1e25447
        v3 = a1 - 4;
        g2 = v3;
        int32_t v4 = *(int32_t *)v3 / 256; // 0x1e2544c
        g5 = v4;
        g158 -= v4;
        unsigned char v5 = *(char *)v3; // 0x1e25455
        g5 = (int32_t)v5 | v4 & 0xffff00;
        if (v5 != 90) {
            if (v5 != -91) {
                goto lab_0x1e254c1;
            } else {
                int32_t v6 = a2 + 4; // 0x1e25494
                g5 = v6;
                int32_t v7 = function_1e3d900(v3, v6, v2, v1); // 0x1e25499
                g2 = v7;
                if (v7 != 0) {
                    v3 = v7;
                    goto lab_0x1e254c1;
                } else {
                    // 0x1e254bd
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e254d8;
                }
            }
        } else {
            int32_t v8 = a2 + 4; // 0x1e2545f
            g5 = v8;
            int32_t v9 = function_1e3d900(v3, v8, v2, v1); // 0x1e25464
            g2 = v9;
            if (v9 != 0) {
                v3 = v9;
                goto lab_0x1e254c1;
            } else {
                // 0x1e25488
                g2 = 0;
                result = 0;
                goto lab_0x1e254d8;
            }
        }
    } else {
        // 0x1e2543a
        result = function_1e25371(a2);
        g2 = result;
        goto lab_0x1e254d8;
    }
  lab_0x1e254d8:
    // 0x1e254d8
    g4 = *(int32_t *)g9;
    g3 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e254c1:;
    unsigned char v10 = *(char *)v3; // 0x1e254c1
    g5 = a2;
    int32_t v11 = 256 * a2; // 0x1e254c8
    g7 = v11;
    *(int32_t *)v3 = v11;
    g158 += g5;
    *(char *)g2 = (char)(g4 & -256 | (int32_t)v10);
    int32_t v12 = g2 + 4; // 0x1e254d5
    g2 = v12;
    result = v12;
    goto lab_0x1e254d8;
}

// Address range: 0x1e254dd - 0x1e25505
int32_t function_1e254dd(int32_t lpString) {
    int32_t v1 = lstrlenA((char *)lpString) + 1; // 0x1e254e7
    g2 = v1;
    int32_t lpString1 = function_1e25371(v1); // 0x1e254e9
    g2 = lpString1;
    g497 = lpString1;
    int32_t result; // 0x1e254fc
    if (lpString1 != 0) {
        // 0x1e254f7
        result = (int32_t)lstrcpyA((char *)lpString1, (char *)lpString);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e25502
    return result;
}

// Address range: 0x1e25505 - 0x1e2551f
int32_t function_1e25505(void) {
    int32_t v1 = g497; // 0x1e25505
    g2 = v1;
    int32_t result; // 0x1e2550f
    if (v1 != 0) {
        // 0x1e2550e
        result = function_1e25401(v1);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e25514
    g497 = 0;
    return result;
}

// Address range: 0x1e2551f - 0x1e25589
int32_t function_1e2551f(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t * a7, int32_t * a8) {
    int32_t v1 = g8; // bp-4
    int32_t * v2;
    int32_t v3; // 0x1e2554d
    if (g161 != 0) {
        v3 = &v1;
        goto lab_0x1e25548;
    } else {
        int32_t v4 = function_1e25371(2000); // 0x1e2552e
        g2 = v4;
        g161 = v4;
        if (v4 != 0) {
            // 0x1e25529
            v3 = g9;
            goto lab_0x1e25548;
        } else {
            v2 = &g497;
            goto lab_0x1e25585;
        }
    }
  lab_0x1e25548:;
    int32_t v5 = g497; // 0x1e25548
    g2 = v5;
    *(int32_t *)(v3 - 4) = v5;
    *(int32_t *)(v3 - 8) = g161;
    g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
    int32_t v6 = *(int32_t *)(g9 + 8); // 0x1e2555a
    if (v6 != 0) {
        // 0x1e25562
        *(int32_t *)(g9 - 4) = (int32_t)&g26;
        int32_t v7 = g161; // 0x1e25567
        g2 = v7;
        *(int32_t *)(g9 - 8) = v7;
        lstrcatA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 - 4) = v6;
        int32_t v8 = g161; // 0x1e25574
        g2 = v8;
        *(int32_t *)(g9 - 8) = v8;
        g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
        v2 = &g161;
    } else {
        v2 = &g161;
    }
    goto lab_0x1e25585;
  lab_0x1e25585:;
    int32_t result = *v2;
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e25589 - 0x1e255a3
int32_t function_1e25589(void) {
    int32_t v1 = g161; // 0x1e25589
    g2 = v1;
    int32_t result; // 0x1e25593
    if (v1 != 0) {
        // 0x1e25592
        result = function_1e25401(v1);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e25598
    g161 = 0;
    return result;
}

// Address range: 0x1e255a3 - 0x1e2561a
int32_t function_1e255a3(int32_t a1, char * lpValueName, int32_t result) {
    int32_t v1 = g3; // 0x1e255a3
    int32_t v2 = v1; // bp-4
    g2 = result;
    g3 = &v2;
    int32_t v3 = g8; // bp-24
    int32_t lpData = result; // bp-8
    if (g497 == 0) {
        // 0x1e25613
        g8 = *(int32_t *)(int32_t)&v3;
        g3 = v1;
        return result;
    }
    // 0x1e255ba
    int32_t v4; // bp-20
    g2 = &v4;
    int32_t hKey; // bp-12
    g5 = &hKey;
    g8 = 0;
    int32_t lpSubKey = function_1e2551f(a1, 0, 0, 0, 0xf003f, 0, &hKey, &v4); // 0x1e255d0
    g2 = lpSubKey;
    int32_t v5 = RegCreateKeyExA(HKEY_CURRENT_USER, (char *)lpSubKey, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (struct _SECURITY_ATTRIBUTES *)&g708, (int32_t **)&g708, &g708); // 0x1e255db
    g2 = v5;
    if (v5 == 0) {
        // 0x1e255e5
        int32_t lpcbData; // bp-16
        g2 = &lpcbData;
        g5 = &lpData;
        lpcbData = 4;
        int32_t * lpReserved = (int32_t *)g8; // 0x1e255fc
        int32_t v6 = RegQueryValueExA((int32_t *)hKey, lpValueName, lpReserved, lpReserved, (char *)&lpData, &lpcbData); // 0x1e255fc
        g2 = v6;
        g2 = RegCloseKey((int32_t *)hKey);
    }
    // 0x1e2560b
    function_1e25589();
    g2 = lpData;
    // 0x1e25613
    g8 = *(int32_t *)g9;
    g3 = v2;
    return lpData;
}

// Address range: 0x1e2561a - 0x1e25693
int32_t function_1e2561a(int32_t a1, int32_t lpValueName, int32_t a3, int32_t lpString2, int32_t iMaxLength) {
    // 0x1e2561a
    g8 = iMaxLength;
    g6 = 0;
    char * lpString1 = (char *)a3; // 0x1e2562e
    int32_t v1 = (int32_t)lstrcpynA(lpString1, (char *)lpString2, iMaxLength); // 0x1e2562e
    g2 = v1;
    int32_t v2 = g6; // 0x1e25634
    int32_t result; // 0x1e25686
    if (g497 != v2) {
        // 0x1e2563c
        int32_t v3; // bp-16
        g2 = &v3;
        int32_t hKey; // bp-8
        g5 = &hKey;
        int32_t lpSubKey = function_1e2551f(a1, v2, v2, v2, 0xf003f, v2, &hKey, &v3); // 0x1e25650
        g2 = lpSubKey;
        int32_t v4 = RegCreateKeyExA(HKEY_CURRENT_USER, (char *)lpSubKey, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (struct _SECURITY_ATTRIBUTES *)&g708, (int32_t **)&g708, &g708); // 0x1e2565b
        g2 = v4;
        if (v4 == 0) {
            int32_t lpcbData = g8; // bp-12
            g8 = &lpcbData;
            int32_t * lpReserved = (int32_t *)g6; // 0x1e25677
            int32_t v5 = RegQueryValueExA((int32_t *)hKey, (char *)lpValueName, lpReserved, lpReserved, lpString1, &lpcbData); // 0x1e25677
            g2 = v5;
            g2 = RegCloseKey((int32_t *)hKey);
        }
        // 0x1e25686
        result = function_1e25589();
        g2 = result;
    } else {
        result = v1;
    }
    // 0x1e2568b
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e25693 - 0x1e256f7
int32_t function_1e25693(int32_t a1, int32_t lpValueName) {
    int32_t v1 = g3; // 0x1e25693
    int32_t v2 = v1; // bp-4
    g3 = &v2;
    int32_t v3 = g8; // bp-16
    g8 = 0;
    if (g497 == 0) {
        // 0x1e256f0
        g8 = *(int32_t *)(int32_t)&v3;
        g3 = v1;
        return g2;
    }
    // 0x1e256a4
    int32_t v4; // bp-12
    g2 = &v4;
    int32_t hKey; // bp-8
    g5 = &hKey;
    int32_t lpSubKey = function_1e2551f(a1, 0, 0, 0, 0xf003f, 0, &hKey, &v4); // 0x1e256b8
    g2 = lpSubKey;
    int32_t v5 = RegCreateKeyExA(HKEY_CURRENT_USER, (char *)lpSubKey, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (struct _SECURITY_ATTRIBUTES *)&g708, (int32_t **)&g708, &g708); // 0x1e256c3
    g2 = v5;
    if (v5 == 0) {
        // 0x1e256cd
        int32_t lpData; // bp+12
        g2 = &lpData;
        int32_t v6 = RegSetValueExA((int32_t *)hKey, (char *)lpValueName, g8, 4, (char *)&lpData, 4); // 0x1e256dc
        g2 = v6;
        g2 = RegCloseKey((int32_t *)hKey);
    }
    int32_t result = function_1e25589(); // 0x1e256eb
    g2 = result;
    // 0x1e256f0
    g8 = *(int32_t *)g9;
    g3 = v2;
    return result;
}

// Address range: 0x1e256f7 - 0x1e25763
int32_t function_1e256f7(int32_t a1, int32_t lpValueName, int32_t a3) {
    int32_t v1 = g3; // 0x1e256f7
    int32_t v2 = v1; // bp-4
    g3 = &v2;
    int32_t v3 = g8; // bp-16
    g8 = 0;
    if (g497 == 0) {
        // 0x1e2575c
        g8 = *(int32_t *)(int32_t)&v3;
        g3 = v1;
        return g2;
    }
    // 0x1e25708
    int32_t v4; // bp-12
    g2 = &v4;
    int32_t hKey; // bp-8
    g5 = &hKey;
    int32_t lpSubKey = function_1e2551f(a1, 0, 0, 0, 0xf003f, 0, &hKey, &v4); // 0x1e2571c
    g2 = lpSubKey;
    int32_t v5 = RegCreateKeyExA(HKEY_CURRENT_USER, (char *)lpSubKey, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int32_t)&g708, (struct _SECURITY_ATTRIBUTES *)&g708, (int32_t **)&g708, &g708); // 0x1e25727
    g2 = v5;
    if (v5 == 0) {
        char * lpString = (char *)a3; // 0x1e25734
        int32_t cbData = lstrlenA(lpString) + 1; // 0x1e2573a
        g2 = cbData;
        g2 = RegSetValueExA((int32_t *)hKey, (char *)lpValueName, g8, 1, lpString, cbData);
        g2 = RegCloseKey((int32_t *)hKey);
    }
    int32_t result = function_1e25589(); // 0x1e25757
    g2 = result;
    // 0x1e2575c
    g8 = *(int32_t *)g9;
    g3 = v2;
    return result;
}

// Address range: 0x1e25763 - 0x1e257b0
int32_t function_1e25763(int32_t uID) {
    int32_t lpBuffer = 256 * g163 + (int32_t)&g498; // 0x1e25771
    g2 = uID;
    int32_t hInstance = *(int32_t *)&g660; // 0x1e2577e4
    struct tagPAINTSTRUCT * v1; // bp-20
    *(int32_t *)&v1 = hInstance;
    int32_t v2 = LoadStringA((int32_t *)hInstance, uID, (char *)lpBuffer, 255); // 0x1e25784
    g2 = v2;
    if (v2 == 0) {
        // 0x1e2578e
        *(char *)lpBuffer = 0;
    }
    int32_t v3 = g163 + 1; // 0x1e25791
    int32_t v4;
    if (v3 >= 6) {
        v4 = 0;
    } else {
        v4 = v3;
    }
    // 0x1e257aa
    g163 = v4;
    g2 = lpBuffer;
    g8 = (int32_t)v1;
    return lpBuffer;
}

// Address range: 0x1e257b0 - 0x1e257ff
int32_t function_1e257b0(int32_t uID, int32_t * a2) {
    int32_t v1 = g3; // bp-4
    g5 = uID;
    g3 = &v1;
    int32_t lpBuffer; // bp-260
    int32_t v2 = &lpBuffer; // 0x1e257b8
    g2 = v2;
    int32_t hInstance = *(int32_t *)&g660; // 0x1e257cb4
    int32_t v3 = LoadStringA((int32_t *)hInstance, uID, (char *)&lpBuffer, 255); // 0x1e257d1
    g2 = 0;
    int32_t result; // 0x1e257fc
    if (v3 != 0) {
        // 0x1e257e0
        g2 = v2;
        int32_t v4 = function_1e3db80(&lpBuffer); // 0x1e257e7
        g5 = (int32_t)a2;
        *a2 = v4;
        g2 = 1;
        result = 1;
    } else {
        result = 0;
    }
    // 0x1e257f9
    g3 = v1;
    return result;
}

// Address range: 0x1e257ff - 0x1e258ef
int32_t function_1e257ff(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g3; // bp-4
    g2 = g657;
    g3 = &v1;
    int32_t v2 = &a2; // 0x1e25807
    g8 = (int32_t)GetDC((int32_t *)g657);
    g2 = a5 + a3;
    if (g162 < 0) {
        // 0x1e25837
        g2 = 255;
        g659 = -1;
        g658 = -1;
        g162 = -1;
        int32_t v3 = function_1e25763(189); // 0x1e25852
        g2 = v3;
        if (v3 != 0) {
            // 0x1e2585b
            g2 = function_1e3d750(v3, (int32_t)"%d %d %d");
        }
    }
    // 0x1e25878
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g8;
    int32_t v4 = SetBkMode(&g708, (int32_t)&g708); // 0x1e2587b
    int32_t v5 = g162; // 0x1e2588d
    g7 = v5;
    int32_t v6 = 0x10000 * (int32_t)g659; // 0x1e2589b
    g2 = v6;
    int32_t v7 = v5 | 256 * (int32_t)g658 | v6; // 0x1e258a0
    g5 = v7;
    *(int32_t *)(g9 - 4) = v7;
    *(int32_t *)(g9 - 8) = g8;
    int32_t v8 = SetTextColor(&g708, (int32_t)&g708); // 0x1e258a4
    *(int32_t *)(g9 - 4) = 2064;
    g2 = v2;
    *(int32_t *)(g9 - 8) = v2;
    *(int32_t *)(g9 - 12) = a1;
    int32_t v9 = lstrlenA((char *)&g708); // 0x1e258b8
    g2 = v9;
    *(int32_t *)(g9 - 4) = v9;
    *(int32_t *)(g9 - 8) = a1;
    *(int32_t *)(g9 - 12) = g8;
    int32_t v10 = DrawTextA(&g708, (char *)&g708, (int32_t)&g708, (struct tagRECT *)&g708, (int32_t)&g708); // 0x1e258c3
    g2 = v10;
    *(int32_t *)(g9 - 4) = v4;
    *(int32_t *)(g9 - 8) = g8;
    g2 = SetBkMode(&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = v8;
    *(int32_t *)(g9 - 8) = g8;
    SetTextColor(&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    g2 = g657;
    *(int32_t *)(g9 - 8) = g657;
    int32_t result = ReleaseDC(&g708, &g708); // 0x1e258e0
    g2 = result;
    g3 = v1;
    return result;
}

// Address range: 0x1e258ef - 0x1e25953
int32_t function_1e258ef(int32_t a1) {
    // 0x1e258ef
    g2 = a1;
    g166 = a1;
    function_1e25953();
    g2 = g499;
    char v1 = g167; // 0x1e25932
    int32_t * hMenu; // 0x1e2594a
    if (g166 == 0) {
        // 0x1e2592b
        g167 = v1 | 1;
        InvalidateRect((int32_t *)g499, NULL, true);
        g2 = g499;
        hMenu = NULL;
    } else {
        // 0x1e25906
        g167 = v1 | 2;
        InvalidateRect((int32_t *)g499, NULL, true);
        g2 = g500;
        hMenu = (int32_t *)g500;
    }
    int32_t result = SetMenu((int32_t *)g499, hMenu); // 0x1e2594a
    g2 = result;
    return result;
}

// Address range: 0x1e25953 - 0x1e259ef
int32_t function_1e25953(void) {
    // 0x1e25953
    g2 = 0;
    int32_t v1; // 0x1e259b8
    if (g165 != 0) {
        // 0x1e25982
        int32_t v2; // bp-20
        g2 = &v2;
        int32_t * hWnd = GetDesktopWindow(); // 0x1e25986
        g2 = (int32_t)hWnd;
        GetWindowRect(hWnd, (struct tagRECT *)&g708);
        int32_t v3;
        int32_t v4 = v3 - v2 - g550; // 0x1e25999
        g552 = (v4 - (v4 >> 31)) / 2;
        int32_t v5;
        int32_t v6;
        int32_t v7 = v6 - v5 - g551; // 0x1e259af
        int32_t v8 = v7 >> 31; // 0x1e259b5
        g7 = v8;
        v1 = (v7 - v8) / 2;
        g2 = v1;
    } else {
        // 0x1e25964
        g552 = 0;
        g2 = GetSystemMetrics(15);
        int32_t v9 = function_1e259f2(); // 0x1e25973
        g2 = v9;
        v1 = v9;
    }
    // 0x1e259bf
    g553 = v1;
    int32_t result; // 0x1e259df
    if (g166 != 0) {
        // 0x1e259c8
        *(int32_t *)(g9 - 4) = 15;
        int32_t v10 = GetSystemMetrics((int32_t)&g708); // 0x1e259ca
        g2 = v10;
        int32_t v11 = function_1e259f2(); // 0x1e259d2
        g2 = v11;
        g553 = (int32_t)g553 - (v10 + v11);
        result = function_1e259ef();
        g2 = result;
        g552 = (int32_t)g552 - result;
    } else {
        result = v1;
    }
    // 0x1e259ea
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e259ef - 0x1e259f2
int32_t function_1e259ef(void) {
    // 0x1e259ef
    g2 = 0;
    return 0;
}

// Address range: 0x1e259f2 - 0x1e259f5
int32_t function_1e259f2(void) {
    // 0x1e259f2
    g2 = 0;
    return 0;
}

// Address range: 0x1e259f5 - 0x1e25a90
int32_t function_1e259f5(int32_t result) {
    // 0x1e259f5
    g2 = result;
    int32_t v1 = g8; // 0x1e259f9
    if (g165 == result) {
        // 0x1e25a8c
        g8 = *(int32_t *)g9;
        return result;
    }
    // 0x1e25a06
    g165 = result;
    if (result == 0) {
        // 0x1e25a5a
        g8 = 0;
        function_1e25bc7(v1);
        g2 = g499;
        g168 |= -128;
        g2 = InvalidateRect((int32_t *)g499, (struct tagRECT *)g8, true);
        g2 = function_1e258ef(1);
        int32_t * hWnd = (int32_t *)g8; // 0x1e25a86
        int32_t result2 = RedrawWindow(hWnd, (struct tagRECT *)g8, hWnd, 389); // 0x1e25a86
        g2 = result2;
        // 0x1e25a8c
        g8 = *(int32_t *)g9;
        return result2;
    }
    // 0x1e25a0f
    g2 = g499;
    bool isVisible = IsWindowVisible((int32_t *)g499); // 0x1e25a15
    g2 = isVisible;
    if (isVisible) {
        // 0x1e25a1f
        g2 = g499;
        bool v2 = GetWindowRect((int32_t *)g499, (struct tagRECT *)&g509); // 0x1e25a2a
        g2 = v2;
    }
    // 0x1e25a30
    function_1e25ab3();
    *(int32_t *)(g9 - 4) = 1;
    g2 = g499;
    g168 |= -128;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = g2;
    g2 = InvalidateRect(&g708, (struct tagRECT *)&g708, (bool)&g708);
    *(int32_t *)(g9 - 4) = 0;
    g2 = function_1e258ef((int32_t)&g708);
    int32_t result3 = function_1e25a90(); // 0x1e25a53
    g2 = result3;
    // 0x1e25a8c
    g8 = *(int32_t *)g9;
    return result3;
}

// Address range: 0x1e25a90 - 0x1e25ab3
int32_t function_1e25a90(void) {
    // 0x1e25a90
    g2 = g499;
    int32_t dwNewLong = GetWindowLongA((int32_t *)g499, -16) & -0xc00001; // 0x1e25a9e
    g2 = dwNewLong;
    int32_t result = SetWindowLongA((int32_t *)g499, -16, dwNewLong); // 0x1e25aac
    g2 = result;
    return result;
}

// Address range: 0x1e25ab3 - 0x1e25bc7
int32_t function_1e25ab3(void) {
    // 0x1e25ab3
    int32_t v1; // bp-176
    int32_t v2 = &v1; // 0x1e25ab6
    int32_t v3 = g8; // bp-180
    int32_t v4 = &v3; // 0x1e25abc
    int32_t result = 0; // esi
    int32_t v5; // bp-20
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9; // 0x1e25b89
    if (g171 != 0) {
        // 0x1e25acb
        if (g170 == 0) {
            // 0x1e25ad7
            g2 = function_1e25a90();
            if (g164 != result) {
                // 0x1e25b0c
                g2 = &v5;
                int32_t * hWnd = GetDesktopWindow(); // 0x1e25b10
                g2 = (int32_t)hWnd;
                GetWindowRect(hWnd, (struct tagRECT *)&g708);
                int32_t cx = v6 - v5 + 1; // 0x1e25b2d
                g2 = cx;
                int32_t X = result; // 0x1e25b2f
                g2 = SetWindowPos((int32_t *)g499, (int32_t *)-1, X, X, cx, 1 - v7 + v8, 8);
            }
            // 0x1e25b3f
            result = 1;
            *(int32_t *)(g9 - 4) = 4;
            g2 = v2;
            g169 = result;
            *(int32_t *)(g9 - 8) = v2;
            ChangeDisplaySettingsA((struct _devicemodeA *)&g708, (int32_t)&g708);
            *(int32_t *)(g9 - 4) = 4;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            g169 = result;
            struct _devicemodeA * v10;
            uint32_t v11 = ChangeDisplaySettingsA((struct _devicemodeA *)((int32_t)v10 & 251), (int32_t)&g708); // 0x1e25b6f
            g170 = v11 < result;
            g2 = result;
            if (v11 < result) {
                // 0x1e25bc2
                g8 = *(int32_t *)g9;
                return result;
            }
            // 0x1e25b3f
            v9 = g9;
        } else {
            v9 = v4;
        }
    } else {
        v9 = v4;
    }
    int32_t v12 = &v5; // 0x1e25b86
    g2 = v12;
    *(int32_t *)(v9 - 4) = v12;
    int32_t v13 = (int32_t)GetDesktopWindow(); // 0x1e25b8a
    g2 = v13;
    *(int32_t *)(g9 - 4) = v13;
    g2 = GetWindowRect(&g708, (struct tagRECT *)&g708);
    function_1e25a90();
    *(int32_t *)(g9 - 4) = 8;
    *(int32_t *)(g9 - 8) = 1 - v7 + v8;
    int32_t v14 = v6 - v5 + 1; // 0x1e25bac
    g2 = v14;
    *(int32_t *)(g9 - 12) = v14;
    *(int32_t *)(g9 - 16) = 0;
    *(int32_t *)(g9 - 20) = 0;
    *(int32_t *)(g9 - 24) = -2;
    *(int32_t *)(g9 - 28) = g499;
    SetWindowPos(&g708, &g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = 0;
    // 0x1e25bc2
    g8 = *(int32_t *)g9;
    return 0;
}

// Address range: 0x1e25bc7 - 0x1e25c44
int32_t function_1e25bc7(int32_t a1) {
    // 0x1e25bc7
    if (g170 != 0) {
        // 0x1e25bd2
        g170 = 0;
        g169 = 1;
        g2 = ChangeDisplaySettingsA(NULL, 4);
        int32_t X = 0; // 0x1e25beb
        if (g164 != X) {
            // 0x1e25bf3
            g2 = g499;
            g2 = SetWindowPos((int32_t *)g499, (int32_t *)-2, X, X, X, X, 19);
        }
    }
    // 0x1e25c07
    function_1e25c44();
    *(int32_t *)(g9 - 4) = 20;
    *(int32_t *)(g9 - 8) = (int32_t)g512 - g510;
    *(int32_t *)(g9 - 12) = g511 - (int32_t)g509;
    g2 = g499;
    *(int32_t *)(g9 - 16) = g510;
    *(int32_t *)(g9 - 20) = (int32_t)g509;
    *(int32_t *)(g9 - 24) = 0;
    *(int32_t *)(g9 - 28) = g2;
    SetWindowPos(&g708, &g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = 0;
    g8 = *(int32_t *)g9;
    return 0;
}

// Address range: 0x1e25c44 - 0x1e25c67
int32_t function_1e25c44(void) {
    // 0x1e25c44
    g2 = g499;
    int32_t dwNewLong = GetWindowLongA((int32_t *)g499, -16) | 0xc00000; // 0x1e25c52
    g2 = dwNewLong;
    int32_t result = SetWindowLongA((int32_t *)g499, -16, dwNewLong); // 0x1e25c60
    g2 = result;
    return result;
}

// Address range: 0x1e25c67 - 0x1e25c6f
int32_t function_1e25c67(void) {
    // 0x1e25c67
    g168 |= -128;
    return g2;
}

// Address range: 0x1e25c6f - 0x1e25d5e
int32_t function_1e25c6f(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e25c6f
    g2 = 0;
    if (g169 != 0) {
        // 0x1e25c7a
        g169 = 0;
        // 0x1e25d5c
        return 0;
    }
    // 0x1e25c84
    g6 = 0;
    if (g165 != 0) {
        // 0x1e25c92
        if (g170 != 0) {
            // 0x1e25c9a
            g170 = 0;
            g165 = 0;
            function_1e25c44();
            g2 = g499;
            g168 |= -128;
            g2 = InvalidateRect((int32_t *)g499, (struct tagRECT *)g6, true);
            function_1e258ef(1);
            int32_t X = (int32_t)g509; // 0x1e25cdb
            g2 = g499;
            g2 = SetWindowPos((int32_t *)g499, (int32_t *)g6, X, g510, g511 - X, (int32_t)g512 - g510, 28);
            int32_t v1 = (int32_t)GetDesktopWindow(); // 0x1e25d01
            g2 = v1;
            function_1e24068(v1, (int32_t)&g708);
            g2 = 1;
            // 0x1e25d5c
            return 1;
        }
    }
    int32_t X2 = (int32_t)g509; // 0x1e25d27
    g2 = g499;
    g2 = SetWindowPos((int32_t *)g499, NULL, X2, g510, g511 - X2, (int32_t)g512 - g510, 0);
    int32_t v2 = (int32_t)GetDesktopWindow(); // 0x1e25d4e
    g2 = v2;
    function_1e24068(v2, (int32_t)&g708);
    g2 = 0;
    // 0x1e25d5c
    return 0;
}

