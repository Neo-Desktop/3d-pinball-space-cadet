#include "pinball.h"

// Address range: 0x1e25d5e - 0x1e25e71
int32_t function_1e25d5e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e25d5e
    g2 = a5;
    g171 = a5;
    g5 = a3;
    g499 = a3;
    int32_t v1 = 0; // esi
    g500 = a4;
    g505 = 0;
    g506 = 0;
    g507 = a1;
    g508 = a2;
    int32_t * hWnd = GetDesktopWindow(); // 0x1e25da7
    g2 = (int32_t)hWnd;
    g2 = GetWindowRect(hWnd, (struct tagRECT *)&g708);
    int32_t v2 = GetSystemMetrics(5); // 0x1e25db6
    g2 = v2;
    int32_t v3 = a1 + 2 * v2; // edi
    int32_t v4 = GetSystemMetrics(6); // 0x1e25dc1
    g2 = v4;
    int32_t v5 = a2 + 2 * v4; // ebx
    int32_t v6 = GetSystemMetrics(15); // 0x1e25dcc
    g2 = v6;
    int32_t v7 = g504 - g502 - v5; // 0x1e25ded
    int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1e25df2
    int32_t Y = v8 - (GetSystemMetrics(4) + v6) - 2; // 0x1e25e06
    g510 = Y;
    int32_t v9 = g503 - g501 - v3; // 0x1e25e0d
    int32_t v10 = (v9 - (v9 >> 31)) / 2; // 0x1e25e12
    int32_t X = v10 - 2; // 0x1e25e14
    g509 = (struct tagRECT *)X;
    int32_t v11 = v3 + 2 + v10; // 0x1e25e1c
    g511 = v11;
    int32_t v12 = v8 + 2 + v5; // 0x1e25e2e
    g5 = v12;
    g512 = (struct tagRECT *)v12;
    g2 = g499;
    int32_t result = MoveWindow((int32_t *)g499, X, Y, v11 - X, v12 - Y, (v1 & 1) != 0); // 0x1e25e5c
    g2 = result;
    g167 = v1;
    g8 = X;
    return result;
}

// Address range: 0x1e25e71 - 0x1e25f13
int32_t function_1e25e71(void) {
    int32_t v1 = g6; // bp-8
    if (g165 == 0) {
        goto lab_0x1e25f01;
    } else {
        // 0x1e25e80
        g2 = g167;
        if (g167 <= -1) {
            goto lab_0x1e25eba;
        } else {
            if (g167 == 0) {
                goto lab_0x1e25eba;
            } else {
                if ((g167 & 1) != 0) {
                    // 0x1e25e92
                    g2 = function_1e259ef();
                    int32_t v2 = GetSystemMetrics(15); // 0x1e25e9c
                    g2 = v2;
                    int32_t v3 = v2 + function_1e259f2(); // 0x1e25ea9
                    int32_t v4 = g503 - 1; // 0x1e25eb1
                    g2 = v4;
                    g2 = function_1e25fae(v4, v3, (int32_t)&g708, (int32_t)&g708);
                }
                goto lab_0x1e25f01;
            }
        }
    }
  lab_0x1e25f01:;
    int32_t result = function_1e29aea(); // 0x1e25f01
    g2 = result;
    g167 = 0;
    return result;
  lab_0x1e25eba:;
    // 0x1e25eba
    int32_t v5; // esi
    int32_t v6; // 0x1e25ee2
    int32_t v7; // 0x1e25ee6
    if (g166 == 0) {
        // 0x1e25ede
        g5 = 0;
        v5 = 0;
        v7 = v1;
        v6 = 0;
    } else {
        int32_t v8 = function_1e259ef(); // 0x1e25ec3
        g2 = v8;
        v5 = v8;
        int32_t v9 = GetSystemMetrics(15); // 0x1e25ecc
        g2 = v9;
        int32_t v10 = function_1e259f2(); // 0x1e25ed4
        g2 = v10;
        int32_t v11 = v9 + v10; // 0x1e25ed9
        g5 = v11;
        v7 = g9;
        v6 = v11;
    }
    // 0x1e25ee2
    *(int32_t *)(v7 - 4) = -v6;
    *(int32_t *)(v7 - 8) = -v5;
    *(int32_t *)(v7 - 12) = g5 + g504;
    int32_t v12 = v5 + g503; // 0x1e25ef9
    g2 = v12;
    *(int32_t *)(v7 - 16) = v12;
    int32_t v13 = function_1e25fae((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e25efc
    g2 = v13;
    goto lab_0x1e25f01;
}

// Address range: 0x1e25f13 - 0x1e25f24
int32_t function_1e25f13(void) {
    // 0x1e25f13
    int32_t result; // 0x1e25f23
    if (g170 == 0) {
        // 0x1e25f13
        result = g2;
    } else {
        int32_t v1 = function_1e259f5(0); // 0x1e25f1e
        g2 = v1;
        result = v1;
    }
    // 0x1e25f23
    return result;
}

// Address range: 0x1e25f24 - 0x1e25f53
int32_t function_1e25f24(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g8; // bp-4
    int32_t v2 = v1; // 0x1e25f24
    g8 = 0;
    if (g165 == 0) {
        // 0x1e25f4f
        g8 = *(int32_t *)v2;
        return g2;
    }
    int32_t v3; // 0x1e25f4f
    if (a1 == 0) {
        // 0x1e25f35
        function_1e259f5(0);
        g2 = g499;
        g2 = SetWindowPos((int32_t *)g499, (int32_t *)1, g8, g8, g8, g8, 19);
        v3 = g9;
    } else {
        v3 = v2;
    }
    // 0x1e25f4f
    g8 = *(int32_t *)v3;
    return g2;
}

// Address range: 0x1e25f53 - 0x1e25f7a
int32_t function_1e25f53(uint32_t a1) {
    int32_t v1 = (int16_t)a1 - g552; // 0x1e25f68
    g5 = v1 | (a1 & -0x10000);
    int32_t result = v1 | 0x10000 * (int32_t)((int16_t)(a1 / 0x10000) - g553); // 0x1e25f75
    g2 = result;
    return result;
}

// Address range: 0x1e25f7a - 0x1e25fae
int32_t function_1e25f7a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e25f7a
    g5 = a1;
    *(int32_t *)(a1 + 8) = g511 - (int32_t)g509;
    *(int32_t *)(g5 + 12) = (int32_t)g512 - g510;
    *(int32_t *)(g5 + 16) = (int32_t)g509;
    g2 = g510;
    *(int32_t *)(g5 + 20) = g510;
    return g2;
}

// Address range: 0x1e25fae - 0x1e26030
int32_t function_1e25fae(int32_t a1, int32_t a2, int32_t lprc, int32_t a4) {
    int32_t * h = CreateSolidBrush(0); // 0x1e25fb9
    int32_t v1 = (int32_t)h; // 0x1e25fb9
    g2 = v1;
    int32_t result; // 0x1e26021
    if (h != NULL) {
        // 0x1e25fc5
        g2 = g499;
        int32_t * hdc = GetDC((int32_t *)g499); // 0x1e25fcb
        int32_t v2 = (int32_t)hdc; // 0x1e25fcb
        g2 = v2;
        int32_t v3 = (int32_t)SelectObject(hdc, h); // 0x1e25fd5
        g2 = v3;
        if (hdc != NULL) {
            // 0x1e25fe1
            g5 = a4;
            g2 = a4 + a2 + 1;
            FillRect(hdc, (struct tagRECT *)&lprc, h);
            g2 = g499;
            g2 = ReleaseDC((int32_t *)g499, hdc);
        }
        // 0x1e26018
        *(int32_t *)(g9 - 4) = v3;
        *(int32_t *)(g9 - 8) = v2;
        g2 = (int32_t)SelectObject(&g708, &g708);
        *(int32_t *)(g9 - 4) = v1;
        result = DeleteObject(&g708);
        g2 = result;
    } else {
        result = v1;
    }
    // 0x1e26027
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e26030 - 0x1e26035
int32_t function_1e26030(void) {
    int32_t result = function_1e29aea(); // 0x1e26030
    g2 = result;
    return result;
}

// Address range: 0x1e26035 - 0x1e26172
int32_t function_1e26035(int32_t a1) {
    // 0x1e26035
    if (a1 == 1) {
        // 0x1e26061
        if (g518 != 0) {
            // 0x1e260b2
            g2 = function_1e28059(401, 0);
            g2 = function_1e28059(103, 0);
            g2 = function_1e2807b(404, 1);
            if (g202 != 0) {
                // 0x1e260df
                g2 = g202;
                int32_t v1 = *(int32_t *)(g202 + 230); // 0x1e260e4
                g2 = v1;
                if (v1 != 0) {
                    // 0x1e260ee
                    *(char *)(v1 + 5) = 1;
                }
            }
        } else {
            // 0x1e2606b
            g2 = function_1e28059(103, 1);
            g2 = function_1e28059(401, 1);
            int32_t v2 = 0; // 0x1e26080
            g2 = function_1e2807b(404, v2);
            if (g202 != v2) {
                // 0x1e26097
                g2 = g202;
                int32_t v3 = *(int32_t *)(g202 + 230); // 0x1e2609c
                g2 = v3;
                if (v3 != 0) {
                    // 0x1e260aa
                    *(char *)(v3 + 5) = (char)v2;
                }
            }
        }
        goto lab_0x1e26161;
    } else {
        if (a1 == 2) {
            // 0x1e260f4
            g2 = function_1e28059(401, 0);
            if (g518 == 0) {
                // 0x1e26109
                g2 = function_1e28059(103, 1);
                g2 = function_1e2807b(404, 0);
            }
            // 0x1e2611d
            if (g202 != 0) {
                // 0x1e26126
                g2 = g202;
                int32_t v4 = *(int32_t *)(g202 + 266); // 0x1e2612b
                g5 = v4;
                if (v4 != 0) {
                    // 0x1e26135
                    *(int32_t *)(g9 - 4) = 0x3fb33333;
                    g2 = *(int32_t *)v4;
                    *(int32_t *)(g9 - 8) = 29;
                }
            }
            goto lab_0x1e26161;
        } else {
            if (a1 == 3) {
                goto lab_0x1e26142;
            } else {
                if (a1 == 4) {
                    goto lab_0x1e26142;
                } else {
                    goto lab_0x1e26161;
                }
            }
        }
    }
  lab_0x1e26161:
    // 0x1e26161
    g2 = 1;
    g6 = *(int32_t *)g9;
    g516 = a1;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return 1;
  lab_0x1e26142:
    // 0x1e26142
    g2 = function_1e28059(401, 0);
    g2 = function_1e28059(103, 0);
    g519 = 0x1388;
    goto lab_0x1e26161;
}

// Address range: 0x1e26172 - 0x1e261c8
int32_t function_1e26172(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g516; // 0x1e26172
    g2 = v1;
    int32_t result;
    if (v1 == 0) {
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    if (v1 < 1) {
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    if (v1 <= 2) {
        result = 0;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    if (v1 == 3) {
        // 0x1e26195
        g2 = a1;
        int32_t v2 = g519 - a1; // 0x1e26199
        g519 = v2;
        if (v2 >= 0) {
            if (a1 >= 0) {
                result = 1;
                // 0x1e261c5
                g2 = result;
                return result;
            }
        }
        // 0x1e261bb
        g2 = function_1e26035(4);
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    if (v1 != 4) {
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    // 0x1e261a9
    g2 = a1;
    int32_t v3 = g519 - a1; // 0x1e261ad
    g519 = v3;
    if (v3 < 0) {
        // 0x1e261bb
        g2 = function_1e26035(1);
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    if (a1 >= 0) {
        result = 1;
        // 0x1e261c5
        g2 = result;
        return result;
    }
    // 0x1e261bb
    g2 = function_1e26035(1);
    result = 1;
    // 0x1e261c5
    g2 = result;
    return result;
}

// Address range: 0x1e261c8 - 0x1e26224
int32_t function_1e261c8(void) {
    // 0x1e261c8
    int32_t result;
    if (g518 == 0) {
        // 0x1e2621b
        result = function_1e26d6e(1);
    } else {
        // 0x1e261d3
        g2 = g202;
        g2 = *(int32_t *)g202;
        g518 = 0;
        g5 = g202;
        g2 = function_1e26035(2);
        g5 = g201;
        g2 = function_1e2f83c();
        int32_t v1 = function_1e25763(24); // 0x1e26208
        g2 = v1;
        g5 = g200;
        result = function_1e2fbc7(v1, (int32_t)&g708);
    }
    // 0x1e26222
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e26224 - 0x1e26339
int32_t function_1e26224(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g3; // bp-4
    g3 = v1;
    function_1e26035(2);
    g2 = g202;
    g7 = 0;
    int32_t v2 = *(int32_t *)(g202 + 214); // 0x1e2623b
    g8 = v2;
    if (v2 < 1) {
        // 0x1e26261
        g5 = 0;
    } else {
        // 0x1e26245
        g5 = 0;
        *(int32_t *)(g3 - 44) = 0;
        int32_t v3 = g202 + 102; // 0x1e2624e
        int32_t v4 = *(int32_t *)v3; // 0x1e2624e
        g2 = v4;
        int32_t v5 = g5; // 0x1e26250
        g5 = v5 + 4;
        g7++;
        *(int32_t *)(v5 - 28 + g3) = *(int32_t *)v4;
        int32_t v6 = g7; // 0x1e2625d
        int32_t v7 = g8; // 0x1e2625d
        while (v6 < v7) {
            // 0x1e2624a
            *(int32_t *)(g5 - 44 + g3) = v6;
            v3 += 28;
            v4 = *(int32_t *)v3;
            g2 = v4;
            v5 = g5;
            g5 = v5 + 4;
            g7++;
            *(int32_t *)(v5 - 28 + g3) = *(int32_t *)v4;
            v6 = g7;
            v7 = g8;
        }
        // 0x1e26261
        g5 = 0;
        if (v7 >= 1) {
            // 0x1e26267
            g7 = 0;
            int32_t v8 = 0; // 0x1e26271
            int32_t v9 = v7; // 0x1e2626f
            int32_t v10 = 0; // 0x1e2626d
            int32_t v11;
            while (true) {
                int32_t v12 = v10; // edi
                int32_t v13 = v9 - v8; // 0x1e26271
                g2 = v13;
                int32_t v14 = v10; // 0x1e26287
                int32_t v15 = v10; // 0x1e2628b
                int32_t v16;
                while (true) {
                    int32_t v17 = g3; // 0x1e26276
                    int32_t v18 = v17 - 28; // 0x1e26276
                    int32_t * v19 = (int32_t *)(v18 + v15); // 0x1e26276
                    uint32_t v20 = *v19; // 0x1e26276
                    g2 = v20;
                    int32_t * v21 = (int32_t *)(v18 + v14); // 0x1e2627a
                    int32_t v22; // 0x1e262a2
                    if (v20 > *v21) {
                        // 0x1e26280
                        *v19 = *v21;
                        *(int32_t *)(g3 - 28 + g7) = g2;
                        int32_t v23 = g3 - 44; // 0x1e26293
                        int32_t v24 = v23 + g7; // 0x1e26293
                        g2 = v24;
                        *(int32_t *)(v12 + v23) = *(int32_t *)v24;
                        *(int32_t *)g2 = *(int32_t *)(v15 - 44 + v17);
                        v16 = g7;
                        v22 = v12;
                    } else {
                        v16 = v14;
                        v22 = v15;
                    }
                    int32_t v25 = v22 + 4; // 0x1e262a2
                    v12 = v25;
                    int32_t v26 = v13 - 1; // 0x1e262a5
                    if (v26 == 0) {
                        // break -> 0x1e262aa
                        break;
                    }
                    v14 = v16;
                    v15 = v25;
                    v13 = v26;
                }
                // 0x1e262aa
                v11 = g8;
                int32_t v27 = v16 + 4; // 0x1e262aa
                g7 = v27;
                int32_t v28 = g5 + 1; // 0x1e262ad
                g5 = v28;
                if (v28 >= v11) {
                    // break -> 0x1e262b2
                    break;
                }
                v8 = v28;
                v9 = v11;
                v10 = v27;
            }
            v2 = v11;
        } else {
            v2 = v7;
        }
    }
    // 0x1e262b2
    int32_t result; // 0x1e26338
    if (g518 != 0) {
        // 0x1e262b2
        result = g2;
    } else {
        // 0x1e262bb
        g2 = g202;
        if (*(int32_t *)(g202 + 62) == 0) {
            if (v2 >= 1) {
                // 0x1e262ca
                g6 = 0;
                int32_t v29 = 0; // 0x1e262cc
                while (true) {
                    int32_t v30 = *(int32_t *)(v29 - 28 + g3); // 0x1e262cc
                    g4 = v30;
                    *(int32_t *)(g9 - 4) = v30;
                    *(int32_t *)(g9 - 8) = (int32_t)&g520;
                    int32_t v31 = function_1e30231((int32_t)&g708, (int32_t)&g708); // 0x1e262d6
                    g2 = v31;
                    int32_t v32; // 0x1e26327
                    if (v31 >= 0) {
                        // 0x1e262e2
                        *(int32_t *)(g9 - 4) = 200;
                        int32_t v33 = function_1e25371(v31); // 0x1e262e7
                        g2 = v33;
                        if (v33 != 0) {
                            // 0x1e262f3
                            *(int32_t *)(g9 - 4) = 0;
                            int32_t v34 = *(int32_t *)(g3 - 44 + g6); // 0x1e262f5
                            int32_t v35 = (v34 + 26 & 0xffff) | (v34 & -0x10000); // 0x1e262f9
                            g2 = v35;
                            *(int32_t *)(g9 - 8) = v35;
                            int32_t v36 = function_1e25763(v33); // 0x1e262fe
                            g2 = v36;
                            *(int32_t *)(g9 - 4) = v36;
                            *(int32_t *)(g9 - 8) = v33;
                            g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
                        }
                        // 0x1e2630d
                        *(int32_t *)(g9 - 4) = v33;
                        *(int32_t *)(g9 - 8) = v31;
                        *(int32_t *)(g9 - 12) = g4;
                        *(int32_t *)(g9 - 16) = (int32_t)&g520;
                        int32_t v37 = function_1e2fda9((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26319
                        g2 = v37;
                        if (v33 != 0) {
                            // 0x1e26324
                            *(int32_t *)(g9 - 4) = v33;
                            v32 = function_1e25401((int32_t)&g708);
                            g2 = v32;
                        } else {
                            v32 = v37;
                        }
                    } else {
                        v32 = v31;
                    }
                    int32_t v38 = g6 + 4; // 0x1e2632c
                    g6 = v38;
                    int32_t v39 = g8 - 1; // 0x1e2632f
                    g8 = v39;
                    if (v39 == 0) {
                        result = v32;
                        // break -> 0x1e26332
                        break;
                    }
                    v29 = v38;
                }
            } else {
                result = g202;
            }
        } else {
            result = g202;
        }
    }
    // 0x1e26332
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e26339 - 0x1e2637d
int32_t function_1e26339(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g8; // bp-4
    int32_t result;
    if (g518 == 0) {
        // 0x1e26343
        g2 = g202;
        int32_t v2 = *(int32_t *)(g202 + 214) - 1; // 0x1e2634e
        if (v2 >= 0) {
            int32_t v3 = 28 * v2; // 0x1e26351
            int32_t v4 = v1; // 0x1e2635d
            int32_t v5 = g202; // 0x1e26354
            while (true) {
                // 0x1e26354
                g2 = v5;
                int32_t v6 = *(int32_t *)(v3 + 102 + v5); // 0x1e26359
                g5 = v6;
                *(int32_t *)(v4 - 4) = *(int32_t *)v6;
                *(int32_t *)(v4 - 8) = (int32_t)&g520;
                int32_t v7 = function_1e30231((int32_t)&g708, (int32_t)&g708); // 0x1e26364
                g2 = v7;
                if (v7 >= 0) {
                    result = 1;
                    // break -> 0x1e26374
                    break;
                }
                int32_t v8 = v3 - 28; // 0x1e2636d
                if (v8 < 0) {
                    goto lab_0x1e26372;
                }
                // 0x1e2636d
                v4 = g9;
                v3 = v8;
                v5 = g202;
            }
            // 0x1e26374
            g2 = result;
            return result;
        }
    }
  lab_0x1e26372:
    result = 0;
    // 0x1e26374
    g2 = result;
    return result;
}

// Address range: 0x1e2637d - 0x1e26489
int32_t function_1e2637d(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g3; // bp-4
    g3 = v1;
    int32_t v2; // bp-68
    int32_t v3 = v2; // 0x1e26380
    g4 = a3;
    int32_t result; // 0x1e26486
    if (*(char *)(a3 + 5) == 0) {
        goto lab_0x1e2647d;
    } else {
        // 0x1e26393
        if (*(int32_t *)(a3 + 106) != 0) {
            goto lab_0x1e2647d;
        } else {
            uint32_t v4 = (int32_t)__asm_fnstsw(g10); // 0x1e263a6
            g2 = (g2 & -0x10000) | v4;
            if ((v4 / 256 & 65) == 0) {
                // 0x1e263ab
                g2 = g513;
                *(int32_t *)(g4 + 66) = (int32_t)g513;
            }
            int32_t v5 = g4; // 0x1e263b3
            int32_t v6 = v5 + 66; // 0x1e263b3
            float80_t v7 = a2; // 0x1e263b6
            float80_t v8 = v7 * (float80_t)*(float32_t *)v6; // 0x1e263b6
            int32_t v9 = *(int32_t *)v6; // 0x1e263b9
            g2 = v9;
            g5 = a2;
            *(float32_t *)(v5 + 70) = (float32_t)v8;
            *(int32_t *)(g4 + 74) = g5;
            *(int32_t *)(g4 + 78) = a1;
            int32_t v10 = v5 + 42; // 0x1e263d4
            v2 = *(int32_t *)v10;
            int32_t v11 = g1 ? -4 : 4; // 0x1e263d4
            int32_t v12 = v11 + v3; // 0x1e263d4
            int32_t v13 = v11 + v10; // 0x1e263d4
            *(int32_t *)v12 = *(int32_t *)v13;
            *(int32_t *)(v12 + v11) = *(int32_t *)(v13 + v11);
            int32_t v14; // bp-56
            int32_t v15 = v14; // 0x1e263d7
            int32_t v16 = g4 + 54; // 0x1e263da
            v14 = *(int32_t *)v16;
            int32_t v17 = v11 + v15; // 0x1e263dd
            int32_t v18 = v16 + v11; // 0x1e263dd
            *(int32_t *)v17 = *(int32_t *)v18;
            int32_t v19 = v17 + v11; // 0x1e263de
            int32_t v20 = v18 + v11; // 0x1e263de
            *(int32_t *)v19 = *(int32_t *)v20;
            g6 = v19 + v11;
            g8 = v20 + v11;
            g2 = a1;
            g5 = a2;
            int32_t v21; // bp-12
            g2 = v21;
            g5 = (int32_t)g563;
            float80_t v22 = function_1e31324(&v2, g4, &v21); // 0x1e2640e
            g2 = (float32_t)v22;
            *(int32_t *)(g4 + 134) = 0;
            g11++;
            uint32_t v23 = (int32_t)__asm_fnstsw(g10); // 0x1e26426
            g2 = (g2 & -0x10000) | v23;
            if ((v23 / 256 & 1) == 0) {
                float80_t v24 = v7 * (float80_t)*(float32_t *)(g4 + 66); // 0x1e26451
                *(float32_t *)(g4 + 70) = (float32_t)v24;
                float32_t * v25 = (float32_t *)(g4 + 70); // 0x1e26457
                float80_t v26 = (float80_t)*v25 * (float80_t)*(float32_t *)(g4 + 54); // 0x1e2645a
                int32_t v27; // bp-24
                g5 = v27;
                v27 = (float32_t)v26;
                g2 = function_1e30cff(g4 + 42, &v27);
                goto lab_0x1e2647d;
            } else {
                g5 = v21;
                g2 = *(int32_t *)v21;
                uint32_t v28 = (int32_t)__asm_fnstsw(g10); // 0x1e2643f
                int32_t v29 = (g2 & -0x10000) | v28; // 0x1e2643f
                g2 = v29;
                if ((v28 / 256 & 65) == 0) {
                    // 0x1e26444
                    g11--;
                    result = v29;
                    fabsl(v22 / (float80_t)(float32_t)v9);
                    goto lab_0x1e26480;
                } else {
                    goto lab_0x1e2647d;
                }
            }
        }
    }
  lab_0x1e2647d:
    // 0x1e2647d
    g11--;
    result = g2;
    goto lab_0x1e26480;
  lab_0x1e26480:
    // 0x1e26480
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return result;
}

// Address range: 0x1e26489 - 0x1e26621
int32_t function_1e26489(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e26489
    g2 = g202;
    int32_t v1; // bp-52
    int32_t v2 = v1; // 0x1e26491
    int32_t v3 = *(int32_t *)(g202 + 262); // 0x1e26497
    int32_t v4 = *(int32_t *)(v3 + 4); // 0x1e2649d
    g5 = v4;
    int32_t v5 = v3 + 8; // 0x1e264a0
    g8 = v5;
    int32_t v6; // 0x1e2661e18
    if (v4 >= 1) {
        // 0x1e264ae
        g4 = 0;
        float32_t v7; // bp-32
        int32_t v8 = &v7; // 0x1e264ec
        int32_t v9 = 0; // 0x1e264e3
        int32_t v10 = v4;
        while (true) {
            // 0x1e264b3
            g2 = a2;
            int32_t v11 = *(int32_t *)v5; // 0x1e264b6
            g6 = v11;
            char v12 = v9; // 0x1e264bb
            int32_t v13; // 0x1e2661e21
            if (*(char *)(v11 + 5) != v12) {
                // 0x1e264c4
                if (*(int32_t *)(v11 + 106) == v9) {
                    // 0x1e264de
                    g2 = g202;
                    int3_t v14; // 0x1e26590
                    if (*(char *)(g202 + 5) == v12) {
                        // 0x1e264de
                        v14 = g11;
                    } else {
                        // 0x1e264ec
                        g2 = v8;
                        g5 = (int32_t)g563;
                        *(int32_t *)(g9 - 4) = v8;
                        v7 = g4;
                        *(int32_t *)(g9 - 8) = g6;
                        int32_t v15 = g4; // 0x1e264fa
                        g2 = function_1e30fc1(v10, (int32_t)v7, v15, v15, a2);
                        v7 *= (float32_t)a2;
                        float80_t v16 = (float80_t)(float32_t)a2 * (float80_t)(float32_t)v15; // 0x1e26511
                        int32_t v17 = g6; // 0x1e26517
                        int32_t v18 = v17 + 54; // 0x1e26517
                        float80_t v19 = (float80_t)*(float32_t *)v18; // 0x1e26517
                        float32_t v20 = *(float32_t *)(v17 + 66); // 0x1e2651a
                        g5 = v8;
                        g2 = v18;
                        *(int32_t *)(g9 - 4) = v8;
                        *(int32_t *)(g9 - 8) = g2;
                        *(float32_t *)(g6 + 54) = (float32_t)(v19 * (float80_t)v20);
                        int32_t v21 = g6; // 0x1e26528
                        float32_t * v22 = (float32_t *)(v21 + 58); // 0x1e26528
                        float80_t v23 = (float80_t)*v22 * (float80_t)*(float32_t *)(v21 + 66); // 0x1e2652b
                        *v22 = (float32_t)v23;
                        function_1e30cff((int32_t)v7, (int32_t *)(int32_t)(float32_t)v16);
                        int32_t v24 = g6 + 54; // 0x1e26536
                        g2 = v24;
                        *(int32_t *)(g9 - 4) = v24;
                        float32_t v25 = function_1e30d19((int32_t)&g708); // 0x1e2653a
                        g2 = v25;
                        *(float32_t *)(g6 + 66) = v25;
                        int32_t v26 = g6; // 0x1e26542
                        int32_t v27 = v26 + 54; // 0x1e26542
                        float64_t v28;
                        if ((*(int32_t *)v27 & 0x7fffffff) != 0) {
                            // 0x1e26557
                            v28 = 1.0L / (float80_t)*(float32_t *)v27;
                        } else {
                            // 0x1e2654b
                            v28 = (int64_t)g4;
                        }
                        // 0x1e26563
                        *(float32_t *)(v26 + 82) = (float32_t)v28;
                        int32_t v29 = g6; // 0x1e26569
                        int32_t v30 = v29 + 58; // 0x1e26569
                        float64_t v31;
                        if ((*(int32_t *)v30 & 0x7fffffff) != 0) {
                            // 0x1e2657e
                            v31 = 1.0L / (float80_t)*(float32_t *)v30;
                        } else {
                            // 0x1e26572
                            v31 = (int64_t)g4;
                        }
                        // 0x1e2658a
                        *(float32_t *)(v29 + 86) = (float32_t)v31;
                        v14 = g11 + 1;
                    }
                    // 0x1e26590
                    g11 = v14;
                    g2 = a1;
                    uint32_t v32 = (int32_t)__asm_fnstsw(g10); // 0x1e265a6
                    int32_t v33 = (g2 & -0x10000) | v32; // 0x1e265a6
                    g2 = v33;
                    if ((v32 / 256 & 65) == 0) {
                        int32_t v34 = v33; // 0x1e2661e20
                        int32_t v35 = a2;
                        int32_t v36 = 10;
                        while (true) {
                            if (v36 == 0) {
                                v13 = v34;
                                // break -> 0x1e265dc
                                break;
                            }
                            // 0x1e265b1
                            *(int32_t *)(g9 - 4) = g6;
                            *(int32_t *)(g9 - 8) = v35;
                            *(int32_t *)(g9 - 12) = a1;
                            int32_t v37 = function_1e2637d((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e265b8
                            g2 = v37;
                            float80_t v38 = 0.0; // 0x1e265c0
                            int32_t v39 = v36 - 1; // 0x1e265c2
                            g11++;
                            uint32_t v40 = (int32_t)__asm_fnstsw(g10); // 0x1e265d7
                            int32_t v41 = (g2 & -0x10000) | v40; // 0x1e265d7
                            g2 = v41;
                            if ((v40 / 256 & 65) != 0) {
                                v13 = v41;
                                // break -> 0x1e265dc
                                break;
                            }
                            v34 = v41;
                            v35 = (float32_t)v38;
                            a1 = (float32_t)((float80_t)(float32_t)a1 + v38);
                            v36 = v39;
                        }
                    } else {
                        v13 = v33;
                    }
                } else {
                    // 0x1e264c9
                    g7 = v2;
                    *(int32_t *)(v11 + 74) = a2;
                    g5 = *(int32_t *)(g6 + 106);
                    *(int32_t *)(g9 - 4) = v2;
                    *(int32_t *)(g9 - 8) = g6;
                    int32_t v42 = *(int32_t *)g5; // 0x1e264d4
                    g2 = v42;
                    v13 = v42;
                }
            } else {
                v13 = a2;
            }
            int32_t v43 = g8 + 4; // 0x1e265dc
            g8 = v43;
            int32_t v44 = v10 - 1; // 0x1e265df
            if (v44 == 0) {
                v6 = v13;
                // break -> 0x1e265e8
                break;
            }
            // 0x1e265dc
            v9 = g4;
            v5 = v43;
            v10 = v44;
        }
    } else {
        v6 = g202;
    }
    int32_t result; // 0x1e2661e
    if (a3 != 0) {
        // 0x1e265ee
        g2 = g202;
        if (v4 > 0) {
            int32_t v45 = g202; // 0x1e2661e17
            int32_t v46 = *(int32_t *)(g202 + 262) + 8; // 0x1e26612
            while (true) {
                int32_t v47 = *(int32_t *)v46; // 0x1e26605
                g5 = v47;
                int32_t v48; // 0x1e2660d
                if (*(char *)(v47 + 5) != 0) {
                    // 0x1e2660d
                    v48 = *(int32_t *)v47;
                    g2 = v48;
                } else {
                    v48 = v45;
                }
                int32_t v49 = v4 - 1; // 0x1e26615
                if (v49 == 0) {
                    result = v48;
                    // break -> 0x1e26618
                    break;
                }
                v45 = v48;
                v4 = v49;
                v46 += 4;
            }
        } else {
            result = g202;
        }
    } else {
        result = v6;
    }
    // 0x1e26618
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e26621 - 0x1e26743
int32_t function_1e26621(int32_t a1) {
    // 0x1e26621
    int32_t v1; // 0x1e26635
    if (a1 > 100) {
        v1 = 100;
    } else {
        v1 = a1;
    }
    float80_t v2 = 0.001L * (float80_t)v1; // 0x1e2663c
    int32_t v3 = function_1e26172(v1, g8, (int32_t)(float32_t)v2, g3); // 0x1e26645
    g2 = v3;
    if (v3 != 0) {
        // 0x1e26737
        g2 = 1;
        g8 = *(int32_t *)g9;
        return 1;
    }
    float32_t v4 = g172; // 0x1e26652
    *(float32_t *)&g173 = (float32_t)(v2 + (float80_t)v4);
    function_1e26489((int32_t)v4, (int32_t)(float32_t)v2, 1);
    int32_t v5 = g173; // 0x1e26671
    g5 = v5;
    g2 = 0;
    g172 = v5;
    g204 = (char *)((int32_t)g204 + g8);
    float80_t v6; // 0x1e266c8
    if (g175 != 0) {
        goto lab_0x1e266b9;
    } else {
        // 0x1e2668d
        if (g176 != 0) {
            goto lab_0x1e266b9;
        } else {
            // 0x1e26695
            if (g177 != 0) {
                goto lab_0x1e266b9;
            } else {
                float80_t v7 = (float80_t)g179 - v2; // st7
                uint32_t v8 = (int32_t)__asm_fnstsw(g10); // 0x1e266ae
                g2 = (g2 & -0x10000) | v8;
                float80_t v9;
                if ((v8 / 256 & 1) == 0) {
                    // 0x1e266b3
                    v9 = 0.0L;
                } else {
                    // 0x1e2669d
                    v9 = v7;
                }
                // 0x1e266b5
                v6 = v9;
                goto lab_0x1e266c8;
            }
        }
    }
  lab_0x1e266b9:
    // 0x1e266b9
    v6 = 4.0L * v2 + (float80_t)g179;
    goto lab_0x1e266c8;
  lab_0x1e266c8:
    // 0x1e266c8
    g179 = v6;
    g11 = g11;
    g2 = function_1e32692();
    function_1e293ea();
    g2 = g202;
    g2 = function_1e2f3ed(*(int32_t *)(g202 + 50));
    g5 = g202;
    if (*(int32_t *)(g202 + 370) != 0) {
        // 0x1e26737
        g2 = 1;
        g8 = *(int32_t *)g9;
        return 1;
    }
    // 0x1e266f4
    if ((int32_t)g179 > 0x3f000000) {
        int32_t v10 = function_1e25763(25); // 0x1e26709
        g2 = v10;
        g5 = g200;
        g2 = function_1e2fbc7(v10, (int32_t)&g708);
    }
    if ((int32_t)g179 > 0x3f800000) {
        // 0x1e26726
        g2 = g172;
        g5 = g202;
        *(int32_t *)(g9 - 4) = (int32_t)g172;
        g2 = function_1e2e8f3();
    }
    // 0x1e26737
    g2 = 1;
    g8 = *(int32_t *)g9;
    return 1;
}

// Address range: 0x1e26743 - 0x1e2675d
int32_t function_1e26743(void) {
    // 0x1e26743
    g195 = 0;
    int32_t result = function_1e293ea(); // 0x1e2674d
    g2 = result;
    g195 = 1;
    return result;
}

// Address range: 0x1e2675d - 0x1e26791
int32_t function_1e2675d(int32_t a1, int32_t a2) {
    // 0x1e2675d
    g2 = g202;
    int32_t v1; // 0x1e26776
    if (*(int32_t *)(g202 + 370) != 0) {
        // 0x1e2676b
        g5 = g200;
        g2 = function_1e2f83c();
        v1 = g202;
    } else {
        v1 = g202;
    }
    // 0x1e26776
    g5 = v1;
    *(int32_t *)(v1 + 370) = 0;
    g179 = -2.0f;
    return g2;
}

// Address range: 0x1e26791 - 0x1e267d0
int32_t function_1e26791(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g2 = g202;
    g3 = v1;
    int32_t v2 = *(int32_t *)(g202 + 262); // 0x1e2679c
    g5 = v2;
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x1e267a6
    int32_t v4 = v3 + 54; // 0x1e267af
    g5 = v4;
    *(float32_t *)v4 = (float32_t)(30.0L * (float80_t)a1);
    *(float32_t *)(v3 + 58) = (float32_t)(30.0L * (float80_t)a2);
    float32_t v5 = function_1e30d19(v4); // 0x1e267c1
    g2 = v5;
    *(float32_t *)(v3 + 66) = v5;
    g11++;
    g8 = v4;
    g3 = v1;
    return g2;
}

// Address range: 0x1e267d0 - 0x1e2690e
int32_t function_1e267d0(int32_t a1, int32_t a2) {
    // 0x1e267d0
    g2 = g202;
    int3_t v1 = g11; // 0x1e267db
    int32_t v2 = g6; // bp-52
    int32_t v3 = *(int32_t *)(g202 + 262); // 0x1e267ea
    int32_t v4 = *(int32_t *)(v3 + 4); // 0x1e267f0
    g6 = v4;
    int32_t v5 = v3 + 8; // 0x1e267f3
    g4 = v5;
    float32_t v6 = 0.5L * (float80_t)(float32_t)a1; // bp-24
    int3_t v7; // 0x1e268b1
    int32_t v8; // 0x1e268ba
    int32_t v9; // 0x1e268bf
    if (v4 >= 1) {
        int3_t v10 = v1; // 0x1e26826
        int3_t v11; // 0x1e268267
        while (true) {
            int32_t v12 = *(int32_t *)v5; // 0x1e26810
            g8 = v12;
            int32_t v13; // 0x1e268a7
            int32_t v14; // 0x1e268aa
            if (*(char *)(v12 + 5) != 0) {
                // 0x1e2681c
                if (*(int32_t *)(v12 + 106) == 0) {
                    float80_t v15 = (float80_t)*(float32_t *)(v12 + 54); // 0x1e26826
                    float32_t v16 = *(float32_t *)(v12 + 66); // 0x1e26829
                    *(int32_t *)(g9 - 4) = (int32_t)&v6;
                    int32_t v17 = g8 + 54; // 0x1e26830
                    g2 = v17;
                    *(int32_t *)(g9 - 8) = v17;
                    *(float32_t *)(g8 + 54) = (float32_t)(v15 * (float80_t)v16);
                    int32_t v18 = g8; // 0x1e26837
                    float32_t * v19 = (float32_t *)(v18 + 58); // 0x1e26837
                    float80_t v20 = (float80_t)*v19 * (float80_t)*(float32_t *)(v18 + 66); // 0x1e2683a
                    *v19 = (float32_t)v20;
                    g11 = v10;
                    function_1e30cff((int32_t)&g708, &g708);
                    int32_t v21 = g8 + 54; // 0x1e26845
                    g2 = v21;
                    *(int32_t *)(g9 - 4) = v21;
                    float32_t v22 = function_1e30d19((int32_t)&g708); // 0x1e26849
                    g2 = v22;
                    *(float32_t *)(g8 + 66) = v22;
                    int32_t v23 = g8; // 0x1e26851
                    int32_t v24 = v23 + 54; // 0x1e26851
                    float64_t v25;
                    if ((*(int32_t *)v24 & 0x7fffffff) != 0) {
                        // 0x1e2686a
                        v25 = 1.0L / (float80_t)*(float32_t *)v24;
                    } else {
                        v25 = 0.0;
                    }
                    // 0x1e26876
                    *(float32_t *)(v23 + 82) = (float32_t)v25;
                    int32_t v26 = g8; // 0x1e2687c
                    int32_t v27 = v26 + 58; // 0x1e2687c
                    float64_t v28;
                    if ((*(int32_t *)v27 & 0x7fffffff) != 0) {
                        // 0x1e26895
                        v28 = 1.0L / (float80_t)*(float32_t *)v27;
                    } else {
                        v28 = 0.0;
                    }
                    // 0x1e268a1
                    *(float32_t *)(v26 + 86) = (float32_t)v28;
                    v14 = g6;
                    v13 = g4;
                    v11 = g11 + 1;
                } else {
                    v14 = v4;
                    v13 = v5;
                    v11 = v10;
                }
            } else {
                v14 = v4;
                v13 = v5;
                v11 = v10;
            }
            int32_t v29 = v13 + 4; // 0x1e268a7
            g4 = v29;
            int32_t v30 = v14 - 1; // 0x1e268aa
            g6 = v30;
            if (v30 == 0) {
                // break -> 0x1e268b1
                break;
            }
            v4 = v30;
            v10 = v11;
            v5 = v29;
        }
        // 0x1e268b1
        v9 = g9;
        v8 = g202;
        v7 = v11;
    } else {
        v9 = v2;
        v8 = g202;
        v7 = v1;
    }
    float80_t v31 = 0.5L - (float80_t)(float32_t)a2; // st7
    g2 = v8;
    *(int32_t *)(v9 - 4) = *(int32_t *)(v8 + 246);
    *(int32_t *)(v9 - 8) = *(int32_t *)(g2 + 242);
    *(int32_t *)(v9 - 12) = 0;
    *(int32_t *)(v9 - 16) = 0;
    *(float64_t *)(v9 - 24) = (float64_t)v31;
    g11 = v7;
    int32_t v32 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e268d5
    g2 = v32;
    int32_t v33 = __ftol(); // 0x1e268dd
    g2 = v33;
    *(int32_t *)(g9 - 4) = v33;
    *(float64_t *)(g9 - 12) = (float64_t)((float80_t)(float32_t)a1 + 0.5L);
    int32_t v34 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e268f2
    g2 = v34;
    int32_t v35 = __ftol(); // 0x1e268fa
    g2 = v35;
    *(int32_t *)(g9 - 4) = v35;
    int32_t result = function_1e29b0a((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26900
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2690e - 0x1e26933
int32_t function_1e2690e(int32_t a1, int32_t a2) {
    // 0x1e2690e
    int32_t result; // 0x1e26930
    if (g175 == 0) {
        // 0x1e2690e
        result = g2;
    } else {
        int32_t v1 = function_1e267d0(0x40000000, -0x40800000); // 0x1e26921
        g2 = v1;
        result = v1;
    }
    // 0x1e26926
    g175 = 0;
    return result;
}

// Address range: 0x1e26933 - 0x1e26958
int32_t function_1e26933(int32_t a1, int32_t a2) {
    // 0x1e26933
    int32_t result; // 0x1e26955
    if (g176 == 0) {
        // 0x1e26933
        result = g2;
    } else {
        int32_t v1 = function_1e267d0(-0x40000000, -0x40800000); // 0x1e26946
        g2 = v1;
        result = v1;
    }
    // 0x1e2694b
    g176 = 0;
    return result;
}

// Address range: 0x1e26958 - 0x1e26997
int32_t function_1e26958(void) {
    // 0x1e26958
    function_1e267d0(-0x40000000, 0x3f800000);
    g2 = g178;
    if (g178 != 0) {
        // 0x1e26970
        g2 = function_1e32771(g178);
    }
    // 0x1e26976
    *(int32_t *)(g9 - 4) = 0x1e2690e;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 0x3ecccccd;
    int32_t result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26982
    g2 = result;
    g175 = 1;
    g178 = result;
    return result;
}

// Address range: 0x1e26997 - 0x1e269d6
int32_t function_1e26997(void) {
    // 0x1e26997
    function_1e267d0(0x40000000, 0x3f800000);
    g2 = g178;
    if (g178 != 0) {
        // 0x1e269af
        g2 = function_1e32771(g178);
    }
    // 0x1e269b5
    *(int32_t *)(g9 - 4) = 0x1e26933;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 0x3ecccccd;
    int32_t result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e269c1
    g2 = result;
    g176 = 1;
    g178 = result;
    return result;
}

// Address range: 0x1e269d6 - 0x1e269f8
int32_t function_1e269d6(int32_t a1, int32_t a2) {
    // 0x1e269d6
    int32_t result; // 0x1e269f5
    if (g177 == 0) {
        // 0x1e269d6
        result = g2;
    } else {
        int32_t v1 = function_1e267d0(0, -0x40800000); // 0x1e269e6
        g2 = v1;
        result = v1;
    }
    // 0x1e269eb
    g177 = 0;
    return result;
}

// Address range: 0x1e269f8 - 0x1e26a34
int32_t function_1e269f8(void) {
    // 0x1e269f8
    function_1e267d0(0, 0x3f800000);
    g2 = g178;
    if (g178 != 0) {
        // 0x1e26a0d
        g2 = function_1e32771(g178);
    }
    // 0x1e26a13
    *(int32_t *)(g9 - 4) = 0x1e269d6;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 0x3ecccccd;
    int32_t result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26a1f
    g2 = result;
    g177 = 1;
    g178 = result;
    return result;
}

// Address range: 0x1e26a34 - 0x1e26cac
int32_t function_1e26a34(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e26a34
    int32_t v1; // bp-24
    int32_t v2 = v1; // 0x1e26a37
    int32_t v3 = g8; // 0x1e26a41
    int32_t v4 = g6; // 0x1e26a42
    int32_t v5; // 0x1e26a74
    if (g150) {
        goto lab_0x1e26ca4;
    } else {
        // 0x1e26a49
        if (g518 != 0) {
            goto lab_0x1e26ca4;
        } else {
            // 0x1e26a56
            if (g516 == 1) {
                // 0x1e26a6b
                g8 = a1;
                g2 = function_1e355ae(a1, v4, v3);
                v5 = g8;
                if (g640 != v5) {
                    // 0x1e26a96
                    if (g641 != v5) {
                        // 0x1e26afb
                        if (g642 != v5) {
                            // 0x1e26b1d
                            if (g643 != v5) {
                                // 0x1e26b41
                                if (g644 != v5) {
                                    // 0x1e26b65
                                    if (g645 != v5) {
                                        goto lab_0x1e26ab3;
                                    } else {
                                        // 0x1e26b71
                                        g2 = g202;
                                        if (*(int32_t *)(g202 + 370) == 0) {
                                            // 0x1e26b83
                                            g2 = function_1e269f8();
                                        }
                                        goto lab_0x1e26ca4;
                                    }
                                } else {
                                    // 0x1e26b49
                                    g2 = g202;
                                    if (*(int32_t *)(g202 + 370) == 0) {
                                        // 0x1e26b5b
                                        g2 = function_1e26958();
                                    }
                                    goto lab_0x1e26ca4;
                                }
                            } else {
                                // 0x1e26b25
                                g2 = g202;
                                if (*(int32_t *)(g202 + 370) == 0) {
                                    // 0x1e26b37
                                    g2 = function_1e26997();
                                }
                                goto lab_0x1e26ca4;
                            }
                        } else {
                            // 0x1e26b03
                            g2 = g172;
                            g5 = g202;
                            goto lab_0x1e26ca4;
                        }
                    } else {
                        // 0x1e26a9e
                        g2 = g172;
                        g5 = g202;
                        g6 = *(int32_t *)g202;
                        goto lab_0x1e26ab3;
                    }
                } else {
                    // 0x1e26a7c
                    g2 = g172;
                    g5 = g202;
                    goto lab_0x1e26ca4;
                }
            } else {
                // 0x1e26a5f
                g2 = function_1e26172(-1, v4, v3, (int32_t)&g708);
                goto lab_0x1e26ca4;
            }
        }
    }
  lab_0x1e26ca4:
    // 0x1e26ca4
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return g2;
  lab_0x1e26ab3:
    // 0x1e26ab3
    if (g157 != 0) {
        if (v5 == 66) {
            // 0x1e26b8d
            g2 = g202;
            int32_t v6 = *(int32_t *)(g202 + 262); // 0x1e26b96
            g2 = v6;
            int32_t v7 = v6 + 8; // 0x1e26b9c
            g6 = v7;
            int32_t v8 = *(int32_t *)(v6 + 4); // 0x1e26b9f
            g5 = v8;
            int32_t v9; // 0x1e26bea
            if (v8 < 1) {
              lab_0x1e26bc6:
                // 0x1e26bc6
                *(int32_t *)(g9 - 4) = 362;
                *(int32_t *)(g9 - 8) = 1;
                int32_t v10 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e26bcd
                g2 = v10;
                if (v10 == 0) {
                    // 0x1e26be8
                    g2 = 0;
                    v9 = 0;
                } else {
                    // 0x1e26bd9
                    *(int32_t *)(g9 + 4) = g202;
                    g5 = v10;
                    int32_t v11 = function_1e2a9a0((int32_t)&g708); // 0x1e26be1
                    g2 = v11;
                    v9 = v11;
                }
            } else {
                int32_t v12 = 0; // 0x1e26bae
                int32_t v13; // 0x1e26ba6
                while (true) {
                    // 0x1e26ba6
                    v13 = *(int32_t *)v7;
                    g2 = v13;
                    if (*(char *)(v13 + 5) == 0) {
                        // break -> 0x1e26bc2
                        break;
                    }
                    int32_t v14 = v12 + 1; // 0x1e26bae
                    int32_t v15 = v7 + 4; // 0x1e26baf
                    g6 = v15;
                    if (v14 >= v8) {
                        goto lab_0x1e26bc6;
                    }
                    v12 = v14;
                    v7 = v15;
                }
                v9 = v13;
            }
            // 0x1e26bea
            *(char *)(v9 + 5) = 1;
            g5 = 0x3f800000;
            *(int32_t *)(g2 + 42) = 0x3f800000;
            *(int32_t *)(g2 + 46) = g5;
            g5 = 0;
            int32_t v16 = g2; // 0x1e26bfb
            int32_t v17 = *(int32_t *)(v16 + 154); // 0x1e26bfb
            g7 = v17;
            *(int32_t *)(v16 + 50) = v17;
            *(int32_t *)(g2 + 62) = g5;
            *(int32_t *)(g2 + 58) = g5;
            *(int32_t *)(g2 + 54) = g5;
        } else {
            if (v5 == 72) {
                // 0x1e26c12
                *(int32_t *)(g9 - 4) = 200;
                int32_t v18 = function_1e25371((int32_t)&g708); // 0x1e26c17
                g2 = v18;
                g8 = v18;
                if (v18 != 0) {
                    // 0x1e26c22
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = 26;
                    int32_t v19 = function_1e25763((int32_t)&g708); // 0x1e26c26
                    g2 = v19;
                    *(int32_t *)(g9 - 4) = v19;
                    *(int32_t *)(g9 - 8) = v18;
                    g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
                }
                // 0x1e26c33
                *(int32_t *)(g9 - 4) = v18;
                *(int32_t *)(g9 - 8) = 1;
                *(int32_t *)(g9 - 12) = 0x3b9aca00;
                *(int32_t *)(g9 - 16) = (int32_t)&g520;
                int32_t v20 = function_1e2fda9((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26c40
                g2 = v20;
                if (v18 != 0) {
                    // 0x1e26c49
                    *(int32_t *)(g9 - 4) = v18;
                    g2 = function_1e25401((int32_t)&g708);
                }
            } else {
                if (v5 == 77) {
                    // 0x1e26c51
                    g2 = g158;
                    g5 = v2;
                    *(int32_t *)(g9 - 4) = g158;
                    *(int32_t *)(g9 - 8) = (int32_t)"%ld";
                    *(int32_t *)(g9 - 12) = v2;
                    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
                    g5 = v2;
                    *(int32_t *)(g9 + 8) = 0x2000;
                    *(int32_t *)(g9 + 4) = (int32_t)"Mem:";
                    *(int32_t *)g9 = v2;
                    *(int32_t *)(g9 - 4) = g666;
                    g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                } else {
                    if (v5 == 82) {
                        // 0x1e26c84
                        g2 = function_1e35535();
                    } else {
                        if (v5 == 122) {
                            // 0x1e26c8b
                            g5 = (int32_t)g563;
                            g2 = function_1e319ac();
                        } else {
                            if (v5 == 123) {
                                // 0x1e26c98
                                g2 = g202;
                                g5 = g202;
                            }
                        }
                    }
                }
            }
        }
    }
    goto lab_0x1e26ca4;
}

// Address range: 0x1e26cac - 0x1e26d6e
int32_t function_1e26cac(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e26cac
    if (g516 != 1 || g150 || g518 != 0) {
        // 0x1e26d6b
        return g2;
    }
    // 0x1e26cd3
    g2 = a1;
    if (g640 == a1 || g641 == a1 || g642 == a1) {
        // 0x1e26cdf
        g2 = g172;
        g5 = g202;
        g2 = *(int32_t *)g202;
        // 0x1e26d6b
        return g2;
    }
    // 0x1e26d34
    if (g643 == a1) {
        // 0x1e26d3c
        g2 = function_1e26933(0, 0);
        // 0x1e26d6b
        return g2;
    }
    // 0x1e26d47
    if (g644 == a1) {
        // 0x1e26d4f
        g2 = function_1e2690e(0, 0);
        // 0x1e26d6b
        return g2;
    }
    // 0x1e26d5a
    if (g645 == a1) {
        // 0x1e26d62
        g2 = function_1e269d6(0, 0);
    }
    // 0x1e26d6b
    return g2;
}

// Address range: 0x1e26d6e - 0x1e26db2
int32_t function_1e26d6e(int32_t a1) {
    // 0x1e26d6e
    g2 = a1;
    g518 = a1;
    g2 = function_1e26035(1);
    if (g635 != 0) {
        // 0x1e26d8a
        g2 = function_1e27c0a(0);
    }
    // 0x1e26d91
    g5 = g202;
    g2 = *(int32_t *)g202;
    *(float32_t *)(g9 - 4) = (float32_t)(float80_t)g639;
    *(int32_t *)(g9 - 4) = 1014;
    return g2;
}

// Address range: 0x1e26db2 - 0x1e26dbd
int32_t function_1e26db2(void) {
    int32_t result = function_1e2fd6b(&g520); // 0x1e26db7
    g2 = result;
    return result;
}

// Address range: 0x1e26dbd - 0x1e26dd4
int32_t function_1e26dbd(int32_t * a1, int32_t * a2) {
    // 0x1e26dbd
    g2 = (int32_t)a1;
    g5 = (int32_t)a2;
    *a1 = 600;
    *(int32_t *)g5 = 416;
    return g2;
}

// Address range: 0x1e26dd4 - 0x1e26fcd
int32_t function_1e26dd4(void) {
    int32_t v1 = g3; // bp-4
    g159++;
    g3 = v1;
    int32_t v2; // bp-60
    int32_t v3 = v2; // 0x1e26ddd
    g4 = 300;
    int32_t v4 = function_1e25371(300); // 0x1e26de9
    g2 = v4;
    g8 = v4;
    int32_t lpString1 = function_1e25371(g4); // 0x1e26df1
    g2 = lpString1;
    g2 = (int32_t)lstrcpyA((char *)lpString1, (char *)&g515);
    g2 = function_1e23f78(g8, lpString1, g4);
    g174 = function_1e39d9c(g8);
    int32_t v5 = g4; // bp-8
    g2 = v5;
    g2 = function_1e257b0(158, &v5);
    if (v5 != g4) {
        // 0x1e26e2f
        g2 = function_1e2f517("pbmsg_ft");
    }
    // 0x1e26e39
    *(int32_t *)(g9 - 4) = g6;
    g2 = function_1e25401((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    function_1e25401((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 5;
    *(int32_t *)(g9 - 8) = (int32_t)"background";
    g2 = g174;
    *(int32_t *)(g9 - 12) = g174;
    int32_t v6 = function_1e39c9f((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26e53
    g2 = v6;
    *(int32_t *)(g9 - 4) = v6;
    function_1e27182();
    *(int32_t *)(g9 - 4) = 10;
    g2 = g174;
    *(int32_t *)(g9 - 8) = (int32_t)"table_size";
    *(int32_t *)(g9 - 12) = g2;
    function_1e39c9f((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g8;
    g2 = g174;
    *(int32_t *)(g9 - 12) = g174;
    function_1e39c9f((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 11;
    *(int32_t *)(g9 - 8) = (int32_t)"camera_info";
    g2 = g174;
    *(int32_t *)(g9 - 12) = g174;
    int32_t v7 = function_1e39c9f((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26e8f
    g5 = v3;
    g2 = 3;
    int32_t v8 = v3; // 0x1e26eaa6
    while (true) {
        // 0x1e26e9e
        v5 = 4;
        int32_t v9 = v7; // 0x1e26ea5
        v7 = v9 + 4;
        *(int32_t *)v8 = *(int32_t *)v9;
        int32_t v10 = g5 + 4; // 0x1e26eac
        g5 = v10;
        int32_t v11 = v5 - 1; // 0x1e26eaf
        v5 = v11;
        while (v11 != 0) {
            // 0x1e26ea5
            v9 = v7;
            v7 = v9 + 4;
            *(int32_t *)v10 = *(int32_t *)v9;
            v10 = g5 + 4;
            g5 = v10;
            v11 = v5 - 1;
            v5 = v11;
        }
        int32_t v12 = g2 - 1; // 0x1e26eb4
        g2 = v12;
        if (v12 == 0) {
            // break -> 0x1e26eb7
            break;
        }
        v8 = v10;
    }
    int32_t v13 = g6; // 0x1e26eb7
    int16_t v14 = *(int16_t *)v13; // 0x1e26eb7
    g2 = v14;
    int16_t v15 = *(int16_t *)(v13 + 2); // 0x1e26eba
    g4 = v7 + 4;
    v5 = v15;
    g5 = v3;
    *(float32_t *)(g9 - 4) = (float32_t)(0.5L * (float80_t)v15);
    *(float32_t *)(g9 - 4) = (float32_t)(0.5L * (float80_t)v14);
    *(int32_t *)(g9 - 4) = *(int32_t *)v7;
    *(int32_t *)(g9 - 8) = v3;
    int32_t v16 = function_1e39a41(v5, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26eed
    g2 = v16;
    int32_t v17 = (int32_t)*(int16_t *)(g6 + 2); // 0x1e26ef2
    g2 = v17;
    g5 = *(int32_t *)g4;
    *(int32_t *)(g9 - 4) = v17;
    v5 = g5;
    int32_t v18 = (int32_t)*(int16_t *)g6; // 0x1e26efc
    g5 = v18;
    *(int32_t *)(g9 - 8) = v18;
    g6 = 0;
    *(int32_t *)(g9 - 12) = *(int32_t *)(g4 + 4);
    *(int32_t *)(g9 - 16) = v5;
    *(int32_t *)(g9 - 20) = g6;
    int32_t v19 = function_1e2979b((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26f09
    g2 = v19;
    *(int32_t *)(g9 - 4) = g6;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g9 - 12) = g8;
    *(int32_t *)(g9 - 16) = *(int32_t *)(g8 + 33);
    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 29);
    *(int32_t *)(g9 - 24) = *(int32_t *)(g8 + 16);
    *(int32_t *)(g9 - 28) = *(int32_t *)(g8 + 12);
    *(int32_t *)(g9 - 32) = (int32_t)&g549;
    int32_t v20 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e26f22
    g2 = v20;
    *(int32_t *)(g9 - 4) = g8;
    g2 = function_1e273a9((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g174;
    g2 = function_1e39248((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g517 != g6 ? 1 : 3;
    g2 = function_1e26035((int32_t)&g708);
    g204 = NULL;
    *(int32_t *)(g9 - 4) = 150;
    g2 = function_1e32545((int32_t)&g708);
    g2 = function_1e2f4cc();
    *(int32_t *)(g9 - 4) = 374;
    *(int32_t *)(g9 - 8) = 1;
    int32_t v21 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e26f6b
    g2 = v21;
    g5 = v21;
    int32_t v22; // 0x1e26f79
    int32_t v23; // 0x1e26f8f
    if (v21 != 0) {
        // 0x1e26f79
        v22 = function_1e2e9be();
        g2 = v22;
        v23 = g9;
    } else {
        v23 = g9 + 8;
        v22 = 0;
    }
    // 0x1e26f8f
    g202 = v22;
    *(int32_t *)(v23 - 4) = (int32_t)&g514;
    *(int32_t *)(v23 - 8) = (int32_t)&g520;
    function_1e302d9((int32_t)&g708);
    g2 = g202;
    int32_t v24 = *(int32_t *)(g202 + 262); // 0x1e26fa3
    g5 = v24;
    g2 = 0;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    int32_t v25 = *(int32_t *)(v24 + 8); // 0x1e26fad
    g4 = *(int32_t *)(g9 + 8);
    float80_t v26 = 200.0L * (float80_t)*(float32_t *)(v25 + 154); // 0x1e26fb7
    g159--;
    g3 = v1;
    g513 = v26;
    return 0;
}

// Address range: 0x1e26fcd - 0x1e2701e
int32_t function_1e26fcd(void) {
    // 0x1e26fcd
    g2 = function_1e2f4d3();
    function_1e39201();
    g2 = g174;
    g2 = function_1e39cc6(g174);
    g2 = function_1e30439(&g520, &g514);
    g5 = g202;
    if (g202 != 0) {
        // 0x1e26ffb
        g2 = *(int32_t *)g202;
    }
    // 0x1e27002
    g202 = 0;
    g2 = function_1e2f4d2();
    g2 = function_1e325b8();
    function_1e29706();
    g2 = 0;
    return 0;
}

// Address range: 0x1e2701e - 0x1e2703d
int32_t function_1e2701e(void) {
    // 0x1e2701e
    int32_t result; // 0x1e2703c
    if (g202 == 0) {
        // 0x1e2701e
        result = g2;
    } else {
        // 0x1e27027
        g2 = g172;
        g5 = g202;
        int32_t v1 = *(int32_t *)g202; // 0x1e27038
        g2 = v1;
        result = v1;
    }
    // 0x1e2703c
    return result;
}

// Address range: 0x1e2703d - 0x1e2711a
int32_t function_1e2703d(void) {
    bool v1 = g150; // 0x1e2703d
    g5 = g200;
    g2 = !v1;
    g150 = !v1;
    g2 = function_1e2f83c();
    g5 = g201;
    g2 = function_1e2f83c();
    if (g150) {
        if (g202 != 0) {
            // 0x1e27075
            g2 = g172;
            g5 = g202;
            g2 = *(int32_t *)g202;
        }
        int32_t v2 = function_1e25763(22); // 0x1e27093
        g2 = v2;
        g5 = g200;
        g2 = function_1e2fbc7(v2, (int32_t)&g708);
        int32_t result = function_1e27bec(); // 0x1e270a4
        g2 = result;
        // 0x1e27119
        return result;
    }
    if (g202 != 0) {
        // 0x1e270b4
        g2 = g202;
        g2 = *(int32_t *)g202;
        g5 = g202;
    }
    // 0x1e270ca
    if (g518 == 0) {
        int32_t v3 = function_1e25763(g516 == 2 ? 24 : 23); // 0x1e270f0
        g2 = v3;
        g5 = g200;
        g2 = function_1e2fbc7(v3, (int32_t)&g708);
    }
    // 0x1e27101
    g2 = 0;
    if (g635 == 0) {
        // 0x1e27119
        return 0;
    }
    // 0x1e2710b
    int32_t result2; // 0x1e27114
    if (!g150) {
        // 0x1e27113
        *(int32_t *)(g9 - 4) = 0;
        result2 = function_1e27c0a((int32_t)&g708);
        g2 = result2;
    } else {
        result2 = 0;
    }
    // 0x1e27119
    return result2;
}

// Address range: 0x1e2711a - 0x1e27131
int32_t function_1e2711a(void) {
    // 0x1e2711a
    g2 = g202;
    int32_t v1 = *(int32_t *)(g202 + 222); // 0x1e27126
    g5 = v1;
    int32_t result = *(int32_t *)v1; // 0x1e2712c
    g2 = result;
    return result;
}

// Address range: 0x1e27131 - 0x1e27151
int32_t function_1e27131(void) {
    // 0x1e27131
    int32_t result; // 0x1e27150
    if (g202 == 0) {
        // 0x1e27131
        result = g2;
    } else {
        // 0x1e2713a
        g2 = g202;
        int32_t v1 = *(int32_t *)g202; // 0x1e27141
        g2 = v1;
        g5 = g202;
        result = v1;
    }
    // 0x1e27150
    return result;
}

// Address range: 0x1e27151 - 0x1e27182
int32_t function_1e27151(int32_t a1, int32_t a2) {
    // 0x1e27151
    g2 = a1;
    g5 = a2;
    g655 = a1;
    g657 = a2;
    if (g656 == 0) {
        int32_t v1 = (int32_t)CreatePalette((struct tagLOGPALETTE *)&g180); // 0x1e27172
        g2 = v1;
        g656 = v1;
    }
    // 0x1e2717d
    g2 = 0;
    return 0;
}

// Address range: 0x1e27182 - 0x1e272a2
int32_t function_1e27182(void) {
    int32_t ho = g656; // 0x1e27182
    int32_t v1 = g6; // bp-12
    int32_t v2; // 0x1e2719a
    if (ho != 0) {
        // 0x1e2718e
        g2 = ho;
        g2 = DeleteObject((int32_t *)ho);
        v2 = g9;
    } else {
        v2 = v1;
    }
    // 0x1e2719a
    *(int32_t *)(v2 - 4) = (int32_t)&g180;
    int32_t v3 = (int32_t)CreatePalette((struct tagLOGPALETTE *)&g708); // 0x1e2719f
    g2 = v3;
    g656 = v3;
    int32_t v4 = (int32_t)GetDesktopWindow(); // 0x1e271aa
    g2 = v4;
    *(int32_t *)(g9 - 4) = v4;
    int32_t v5 = (int32_t)GetDC(&g708); // 0x1e271b1
    g2 = v5;
    *(int32_t *)(g9 - 4) = 2;
    *(int32_t *)(g9 - 8) = v5;
    int32_t v6 = 0; // edi
    g2 = SetSystemPaletteUse(&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = v5;
    SetSystemPaletteUse(&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = v6;
    g2 = g656;
    *(int32_t *)(g9 - 8) = g656;
    *(int32_t *)(g9 - 12) = v5;
    int32_t v7 = (int32_t)SelectPalette(&g708, &g708, (bool)&g708); // 0x1e271d5
    g2 = v7;
    *(int32_t *)(g9 - 4) = v5;
    g2 = RealizePalette(&g708);
    *(int32_t *)(g9 - 4) = v6;
    *(int32_t *)(g9 - 8) = v7;
    *(int32_t *)(g9 - 12) = v5;
    g2 = (int32_t)SelectPalette(&g708, &g708, (bool)&g708);
    *(int32_t *)(g9 - 4) = (int32_t)&g181;
    *(int32_t *)(g9 - 8) = 256;
    *(int32_t *)(g9 - 12) = v6;
    *(int32_t *)(g9 - 16) = v5;
    GetSystemPaletteEntries(&g708, (int32_t)&g708, (int32_t)&g708, (struct tagPALETTEENTRY *)&g708);
    g2 = (int32_t)&g182;
    *(char *)(int32_t)&g182 = 0;
    int32_t v8 = g2 + 4; // 0x1e27207
    g2 = v8;
    while (v8 < (int32_t)&g189) {
        // 0x1e27204
        *(char *)v8 = 0;
        v8 = g2 + 4;
        g2 = v8;
    }
    // 0x1e27211
    v6 = (int32_t)&g183;
    int32_t v9 = *(int32_t *)(g9 + 16); // 0x1e27216
    g2 = v9;
    g5 = v9 + 42;
    while (true) {
        // 0x1e2721d
        if (v9 != 0) {
            unsigned char v10 = *(char *)g5; // 0x1e27221
            *(char *)v6 = v10;
            unsigned char v11 = *(char *)(g5 - 1); // 0x1e27225
            v7 = (v7 & -256) | (int32_t)v11;
            *(char *)(v6 + 1) = v11;
            unsigned char v12 = *(char *)(g5 - 2); // 0x1e2722b
            g7 = (((g7 & -256) | (int32_t)v10) & -256) | (int32_t)v12;
            *(char *)(v6 + 2) = v12;
        }
        int32_t v13 = v6; // 0x1e27231
        int32_t v14 = v13 + 4; // 0x1e27231
        v6 = v14;
        g5 += 4;
        *(char *)(v13 + 3) = 4;
        if (v14 >= (int32_t)&g184) {
            // break -> 0x1e27243
            break;
        }
    }
    // 0x1e27243
    *(int32_t *)(g9 - 4) = 38;
    *(int32_t *)(g9 - 8) = v5;
    int32_t v15 = GetDeviceCaps(&g708, (int32_t)&g708); // 0x1e27246
    g2 = v15;
    if ((v15 & 256) == 0) {
        // 0x1e27251
        *(char *)&g187 = -1;
        *(char *)&g186 = -1;
        *(char *)&g185 = -1;
    }
    // 0x1e27266
    g2 = g656;
    *(int32_t *)(g9 - 4) = 256;
    *(int32_t *)(g9 - 8) = g2;
    ResizePalette(&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = (int32_t)&g181;
    g2 = g656;
    *(int32_t *)(g9 - 8) = 256;
    *(int32_t *)(g9 - 12) = 0;
    *(int32_t *)(g9 - 16) = g2;
    int32_t v16 = SetPaletteEntries(&g708, (int32_t)&g708, (int32_t)&g708, (struct tagPALETTEENTRY *)&g708); // 0x1e27286
    g2 = v16;
    *(int32_t *)(g9 - 4) = v5;
    int32_t v17 = (int32_t)GetDesktopWindow(); // 0x1e2728d
    g2 = v17;
    *(int32_t *)(g9 - 4) = v17;
    ReleaseDC(&g708, &g708);
    g2 = 0;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return 0;
}

// Address range: 0x1e272a2 - 0x1e272a3
int32_t function_1e272a2(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e272a2
    return g2;
}

// Address range: 0x1e272a3 - 0x1e272a4
int32_t function_1e272a3(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e272a3
    return g2;
}

// Address range: 0x1e272a4 - 0x1e272b7
int32_t function_1e272a4(void) {
    // 0x1e272a4
    g2 = g656;
    if (g656 != 0) {
        // 0x1e272ad
        g2 = DeleteObject((int32_t *)g656);
    }
    // 0x1e272b4
    g2 = 0;
    return 0;
}

// Address range: 0x1e272b7 - 0x1e27332
int32_t function_1e272b7(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g8; // 0x1e272b8
    int32_t v2 = g6; // 0x1e272bd
    g6 = a1;
    *(int32_t *)v1 = function_1e3a159(8, a1, a2, v2, v1, g4);
    g2 = g656;
    function_1e3a08c(v1, g656, 1);
    g2 = g6;
    *(int32_t *)(g8 + 12) = g6;
    int32_t v3 = g2; // 0x1e272e5
    int32_t v4 = v3 >> 31; // 0x1e272e5
    g2 = v4 ^ v3;
    *(int32_t *)(g8 + 20) = g6;
    int32_t v5 = ((g2 - v4 & 3) ^ v4) - v4; // 0x1e272f2
    g2 = v5;
    int32_t v6; // 0x1e27300
    if (v5 != 0) {
        // 0x1e272f6
        v6 = g6 - v5 + 4;
    } else {
        v6 = g6;
    }
    // 0x1e272fb
    g7 = g8;
    g5 = g8 + 8;
    *(int32_t *)(g8 + 20) = v6;
    *(int32_t *)(g8 + 16) = g4;
    *(char *)(g8 + 24) = 2;
    int32_t v7;
    if (*(int32_t *)(g7 + 16) != 3) {
        int32_t v8 = g8 + 4 * *(int32_t *)(g7 + 32); // 0x1e2731f
        g2 = v8;
        v7 = v8 + g7;
    } else {
        int32_t v9 = g8 + g7; // 0x1e27312
        g2 = v9;
        v7 = v9 + 12;
    }
    // 0x1e27323
    g2 = v7;
    g6 = v1;
    *(int32_t *)g5 = v7;
    *(int32_t *)(g8 + 4) = *(int32_t *)g5;
    g2 = 0;
    g8 = g656;
    g4 = 1;
    return 0;
}

// Address range: 0x1e27332 - 0x1e27346
int32_t function_1e27332(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = function_1e272b7(a1, a2, a3); // 0x1e2733e
    g2 = result;
    return result;
}

// Address range: 0x1e27346 - 0x1e273a9
int32_t function_1e27346(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g4; // 0x1e27349
    int32_t v2 = g8; // 0x1e2734a
    int32_t v3 = g6; // 0x1e2734d
    g8 = a1;
    g5 = a2;
    g6 = a1 + 20;
    *(int32_t *)a1 = 0;
    *(int32_t *)(g8 + 12) = g5;
    *(int32_t *)g6 = g5;
    if (a4 != 0) {
        int32_t v4 = g5; // 0x1e27363
        int32_t v5 = v4 >> 31; // 0x1e27365
        g7 = v5;
        int32_t v6 = (((v5 ^ v4) - v5 & 3) ^ v5) - v5; // 0x1e2736f
        g2 = v6;
        if (v6 != 0) {
            int32_t v7 = v4 - v6 + 4; // 0x1e27375
            g5 = v7;
            *(int32_t *)g6 = v7;
        }
    }
    // 0x1e2737a
    g2 = a3;
    g5 = *(int32_t *)g6;
    *(char *)(g8 + 24) = 1;
    int32_t v8 = g2; // 0x1e27383
    int32_t v9 = v8 * g5; // 0x1e27383
    g5 = v9;
    *(int32_t *)(g8 + 16) = v8;
    int32_t v10 = function_1e25371(v9); // 0x1e2738a
    g2 = v10;
    *(int32_t *)(g8 + 8) = v10;
    int32_t result;
    if (v10 != 0) {
        // 0x1e2739d
        *(int32_t *)(g8 + 4) = v10;
        result = 0;
    } else {
        result = -1;
    }
    // 0x1e273a2
    g2 = result;
    g6 = v9;
    g8 = v3;
    g4 = v2;
    g3 = v1;
    return result;
}

