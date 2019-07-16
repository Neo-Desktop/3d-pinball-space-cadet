#include "pinball.h"

// Address range: 0x1e46983 - 0x1e46a56
int32_t function_1e46983(void) {
    int32_t v1 = (int32_t)g601; // 0x1e46984
    g2 = v1;
    int32_t v2 = function_1e45c22(*(int32_t *)(v1 + 12), *(int32_t *)(v1 + 420)); // 0x1e46994
    g2 = v2;
    int32_t v3 = 0; // esi
    struct tWAVEFORMATEX * v4 = g601; // 0x1e469bd7
    struct tWAVEFORMATEX * v5 = g601; // 0x1e4699d
    int32_t v6 = 0; // 0x1e469a2
    struct tWAVEFORMATEX * v7; // 0x1e46a08
    while (true) {
        int32_t v8 = (int32_t)v5; // 0x1e4699d
        g2 = v8;
        int32_t v9 = *(int32_t *)(4 * v6 + 244 + v8); // 0x1e469a2
        int32_t v10 = v9; // ebx
        struct tWAVEFORMATEX * v11; // 0x1e4699d3
        int32_t v12; // 0x1e46a02
        if (v9 != 0) {
            if (v9 != -1) {
                int32_t v13 = v6; // 0x1e469c3
                struct tWAVEFORMATEX * v14 = v4; // 0x1e469bd
                struct tWAVEFORMATEX * v15 = v5; // 0x1e4699d2
                while (true) {
                    // 0x1e469b6
                    if (*(int32_t *)(v9 + 44) > v2) {
                        v12 = v13;
                        v7 = v14;
                        v11 = v15;
                        // break -> 0x1e46a02
                        break;
                    }
                    int32_t v16 = *(int32_t *)v9; // 0x1e469bb
                    g2 = v16;
                    int32_t v17 = (int32_t)v14; // 0x1e469bd
                    g5 = v17;
                    *(int32_t *)(4 * v13 + 244 + v17) = v16;
                    int32_t v18 = v10; // 0x1e469ca
                    int32_t v19 = *(int32_t *)(v18 + 18); // 0x1e469ca
                    g2 = v19;
                    int32_t v20; // 0x1e469ea
                    if (v19 != 0) {
                        // 0x1e469d1
                        *(int32_t *)(g9 - 4) = *(int32_t *)(v18 + 32);
                        *(int32_t *)(g9 - 8) = v3;
                        *(int32_t *)(g9 - 12) = 957;
                        *(int32_t *)(g9 - 16) = v19;
                        bool v21 = PostMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e469db
                        g2 = v21;
                        v20 = v10;
                    } else {
                        v20 = v18;
                    }
                    if (v20 != 0) {
                        int32_t v22 = g603; // 0x1e469e5
                        g2 = v22;
                        *(int32_t *)v20 = v22;
                        g603 = v10;
                    }
                    int32_t v23 = (int32_t)g601; // 0x1e469f2
                    g2 = v23;
                    int32_t v24 = *(int32_t *)(v23 + 244 + 4 * v3); // 0x1e469f7
                    v10 = v24;
                    if (v24 == 0) {
                        v12 = v3;
                        v7 = g601;
                        v11 = g601;
                        // break -> 0x1e46a02
                        break;
                    }
                    v13 = v3;
                    v14 = g601;
                    v15 = g601;
                    v9 = v24;
                }
            } else {
                v12 = v6;
                v7 = v4;
                v11 = v5;
            }
        } else {
            v12 = v6;
            v7 = v4;
            v11 = v5;
        }
        int32_t v25 = v12 + 1; // 0x1e46a02
        v3 = v25;
        if (v25 >= 16) {
            // break -> 0x1e46a08
            break;
        }
        v4 = v7;
        v5 = v11;
        v6 = v25;
    }
    int32_t v26 = (int32_t)v7; // 0x1e46a08
    g2 = v26;
    v3 = 0;
    int32_t result; // 0x1e46a55
    if (*(int32_t *)(v26 + 420) == 0) {
        // 0x1e46a17
        if (g486 == 0) {
            int32_t v27 = 0; // 0x1e46a24
            struct tWAVEFORMATEX * v28 = v7; // 0x1e46a34
            while (true) {
                int32_t v29 = (int32_t)v28; // 0x1e46a1f
                g2 = v29;
                int32_t v30 = *(int32_t *)(v27 + 244 + v29); // 0x1e46a24
                g2 = v30;
                int32_t v31; // 0x1e46a4a
                int32_t v32; // 0x1e46a5519
                if (v30 != 0) {
                    if (v30 != -1) {
                        // 0x1e46a34
                        g2 = v29;
                        *(int32_t *)(g9 - 4) = v29;
                        *(int32_t *)(g9 - 8) = 0;
                        *(int32_t *)(g9 - 12) = 1024;
                        *(int32_t *)(g9 - 16) = *(int32_t *)(g2 + 4);
                        bool v33 = PostMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e46a44
                        int32_t v34 = v33; // 0x1e46a44
                        g2 = v34;
                        v32 = v34;
                        v31 = v3;
                    } else {
                        v32 = v30;
                        v31 = v27;
                    }
                } else {
                    v32 = 0;
                    v31 = v27;
                }
                int32_t v35 = v31 + 4; // 0x1e46a4a
                v3 = v35;
                if (v35 >= 64) {
                    result = v32;
                    // break -> 0x1e46a52
                    break;
                }
                // 0x1e46a4a
                v27 = v35;
                v28 = g601;
            }
        } else {
            result = v26;
        }
    } else {
        result = v26;
    }
    // 0x1e46a52
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e46a56 - 0x1e46b02
int32_t function_1e46a56(void) {
    int32_t result = (int32_t)g609; // 0x1e46a57
    g2 = result;
    int32_t v1 = g6; // bp-8
    g601 = g609;
    int32_t v2; // 0x1e46aff
    if (g609 == NULL) {
        v2 = v1;
        // 0x1e46aff
        g6 = *(int32_t *)v2;
        g8 = *(int32_t *)(v2 + 4);
        return result;
    }
    int32_t v3 = g486; // 0x1e46a6a
    g8 = v3;
    if (v3 != 0) {
        while (true) {
            // 0x1e46a74
            int32_t * v4;
            if ((*(char *)(v3 + 16) & 1) == 0) {
                // 0x1e46a8f
                v4 = (int32_t *)(v3 + 44);
            } else {
                // 0x1e46a7a
                *(int32_t *)(g9 - 4) = v3;
                g2 = function_1e46130((int32_t)&g708);
                *(int32_t *)(g8 + 32) = 1;
                v4 = &g486;
            }
            int32_t v5 = *v4;
            g8 = v5;
            if (v5 == 0) {
                // break -> 0x1e46a96
                break;
            }
            v3 = v5;
        }
    }
    // 0x1e46a96
    g2 = function_1e46983();
    while (true) {
      lab_0x1e46a9d:
        // 0x1e46a9d
        g5 = 0;
        int32_t v6 = (int32_t)g601; // 0x1e46a9f
        g2 = v6;
        int32_t v7 = *(int32_t *)(v6 + 400); // 0x1e46aa4
        g6 = v7;
        if (v7 > 0) {
            int32_t * v8 = (int32_t *)(v6 + 408); // 0x1e46aae
            int32_t v9 = *v8; // 0x1e46aae
            g2 = v9;
            int32_t v10 = 0; // 0x1e46abf
            int32_t v11; // 0x1e46ad7
            while (true) {
                int32_t v12 = *(int32_t *)v9; // 0x1e46ab4
                g7 = v12;
                if (*(int32_t *)(v12 + 32) != 0) {
                    v11 = v10;
                    // break -> 0x1e46ac4
                    break;
                }
                int32_t v13 = v9 + 4; // 0x1e46abc
                g2 = v13;
                int32_t v14 = v10 + 1; // 0x1e46abf
                g5 = v14;
                if (v14 >= v7) {
                    v11 = v14;
                    // break -> 0x1e46ac4
                    break;
                }
                v10 = v14;
                v9 = v13;
            }
            if (v11 < v7) {
                // 0x1e46acc
                g2 = v6;
                int32_t v15 = *(int32_t *)(*v8 + 4 * v11); // 0x1e46ad7
                g5 = v15;
                g6 = v15 + 48;
                *(int32_t *)(v15 + 4) = *(int32_t *)(v6 + 396);
                *(int32_t *)g5 = g6;
                int32_t v16 = (int32_t)g609; // 0x1e46ae8
                g2 = v16;
                *(int32_t *)(g5 + 40) = v16;
                *(int32_t *)(g5 + 32) = g8;
                goto lab_0x1e46af3;
            } else {
                // 0x1e46ac8
                g5 = 0;
                goto lab_0x1e46af3;
            }
        } else {
            // 0x1e46ac8
            g5 = 0;
            goto lab_0x1e46af3;
        }
    }
  lab_0x1e46aff:
    // 0x1e46aff
    v2 = g9;
    // 0x1e46aff
    g6 = *(int32_t *)v2;
    g8 = *(int32_t *)(v2 + 4);
    int32_t result2; // 0x1e46af6
    return result2;
  lab_0x1e46af3:
    // 0x1e46af3
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g5;
    result2 = function_1e466b3((int32_t)&g708, (int32_t)&g708);
    g2 = result2;
    if (result2 == 0) {
        // break -> 0x1e46aff
        goto lab_0x1e46aff;
    }
    goto lab_0x1e46a9d;
}

// Address range: 0x1e46b02 - 0x1e46b36
int32_t function_1e46b02(int32_t hWnd, int32_t Msg, uint16_t wParam, int32_t lParam) {
    // 0x1e46b02
    g2 = Msg;
    int32_t result;
    if (Msg == 957) {
        // 0x1e46b2b
        g2 = function_1e46a56();
        result = 0;
        // 0x1e46b32
        g2 = result;
        return result;
    }
    if (Msg == 1024) {
        // 0x1e46b2b
        g2 = function_1e46a56();
        result = 0;
        // 0x1e46b32
        g2 = result;
        return result;
    }
    // 0x1e46b17
    g5 = wParam;
    result = DefWindowProcA((int32_t *)hWnd, Msg, (int32_t)wParam, lParam);
    // 0x1e46b32
    g2 = result;
    return result;
}

// Address range: 0x1e46b36 - 0x1e46b43
int32_t function_1e46b36(void) {
    // 0x1e46b36
    function_1e46a56();
    g2 = 1;
    return 1;
}

// Address range: 0x1e46b43 - 0x1e46d22
int32_t function_1e46b43(int32_t a1) {
    int32_t v1 = (int32_t)g601; // 0x1e46b46
    g5 = v1;
    g2 = a1;
    *(int32_t *)(v1 + 412) = a1;
    g8 = 0;
    int32_t v2 = g486; // 0x1e46b5c
    if (v2 != 0) {
        *(int32_t *)(v2 + 32) = 1;
        int32_t v3 = g486; // 0x1e46b70
        g2 = v3;
        *(int32_t *)(g9 - 4) = v3;
        g2 = function_1e46130((int32_t)&g708);
        while (g486 != 0) {
            // 0x1e46b64
            *(int32_t *)(g486 + 32) = 1;
            v3 = g486;
            g2 = v3;
            *(int32_t *)(g9 - 4) = v3;
            g2 = function_1e46130((int32_t)&g708);
        }
    }
    int32_t v4 = (int32_t)g601 + 408; // 0x1e46b89
    g2 = v4;
    int32_t * v5 = (int32_t *)v4; // 0x1e46b8e
    *v5 = (int32_t)&g606;
    if (*v5 != (int32_t)&g605) {
        // 0x1e46b9c
        *(int32_t *)g2 = (int32_t)&g605;
    }
    // 0x1e46ba2
    g6 = 0;
    g5 = 0;
    int32_t v6 = (int32_t)g601; // 0x1e46ba6259
    g2 = v6;
    int32_t v7 = *(int32_t *)(v6 + 400); // 0x1e46bab262
    int32_t v8; // ebx
    if (v7 > 0) {
        while (true) {
            int32_t * v9 = (int32_t *)(v6 + 408); // 0x1e46bb5
            int32_t v10 = *v9; // 0x1e46bb5
            g2 = v10;
            int32_t v11 = 0; // 0x1e46bc6
            int32_t v12; // 0x1e46bde
            while (true) {
                // 0x1e46bbb
                if (*(int32_t *)(*(int32_t *)v10 + 32) != 0) {
                    v12 = v11;
                    // break -> 0x1e46bcb
                    break;
                }
                int32_t v13 = v10 + 4; // 0x1e46bc3
                g2 = v13;
                int32_t v14 = v11 + 1; // 0x1e46bc6
                g5 = v14;
                if (v7 <= v14) {
                    v12 = v14;
                    // break -> 0x1e46bcb
                    break;
                }
                v11 = v14;
                v10 = v13;
            }
            if (v7 <= v12) {
                // break -> 0x1e46bfa
                break;
            }
            // 0x1e46bfa
            g2 = v6;
            int32_t v15 = *(int32_t *)(*v9 + 4 * v12); // 0x1e46bde
            v8 = v15;
            int32_t v16 = *(int32_t *)(v6 + 396); // 0x1e46be1
            g5 = v16;
            *(int32_t *)(v15 + 4) = v16;
            *(int32_t *)v8 = v15 + 48;
            int32_t v17 = (int32_t)g609; // 0x1e46bef
            g2 = v17;
            *(int32_t *)(v8 + 40) = v17;
            *(int32_t *)(v8 + 32) = g6;
            if (v8 == 0) {
                goto lab_0x1e46c3c;
            }
            // 0x1e46bfe
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = v8;
            int32_t v18 = function_1e466b3((int32_t)&g708, (int32_t)&g708); // 0x1e46c00
            g2 = v18;
            if (v18 == 0) {
                // 0x1e46c35
                *(int32_t *)(g4 + 32) = 1;
                goto lab_0x1e46c3c;
            }
            // 0x1e46c09
            *(int32_t *)(g4 + 44) = g6;
            if (g486 != g6) {
                int32_t v19 = g487; // 0x1e46c22
                g2 = v19;
                *(int32_t *)(v19 + 44) = g4;
                g487 = g4;
            } else {
                int32_t v20 = g4; // 0x1e46c14
                g487 = v20;
                g486 = v20;
            }
            // 0x1e46ba4
            g5 = 0;
            int32_t v21 = (int32_t)g601; // 0x1e46ba6
            g2 = v21;
            int32_t v22 = *(int32_t *)(v21 + 400); // 0x1e46bab
            if (v22 <= 0) {
                // break -> 0x1e46bfa
                break;
            }
            v7 = v22;
            v6 = v21;
        }
    }
    // 0x1e46bfa
    goto lab_0x1e46c3c;
  lab_0x1e46c3c:;
    int32_t v23 = (int32_t)g601; // 0x1e46c3c
    g2 = v23;
    g6 = *(int32_t *)(v23 + 412);
    v8 = *(int32_t *)(v23 + 12);
    *(int32_t *)(g9 - 4) = *(int32_t *)(v23 + 420);
    *(int32_t *)(g9 - 8) = v8;
    int32_t v24 = function_1e45c22((int32_t)&g708, (int32_t)&g708); // 0x1e46c51
    g2 = v24;
    g3 = v24;
    *(int32_t *)(g9 - 4) = v8;
    g2 = waveOutReset((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g3;
    function_1e45c9e((int32_t)&g708);
    *(int32_t *)((int32_t)g601 + 412) = g6;
    int32_t v25 = (int32_t)g601; // 0x1e46c70
    g2 = v25;
    if (*(int32_t *)(v25 + 404) > 0) {
        // 0x1e46c7e
        g8 = 1;
        v8 = 0;
        *(int32_t *)(g9 - 4) = *(int32_t *)(v25 + 12);
        g2 = waveOutPause((int32_t)&g708);
    } else {
        // 0x1e46c90
        v8 = *(int32_t *)(g9 + 16);
    }
    int32_t v26 = g486; // 0x1e46c94
    int32_t v27 = v26; // edi
    int32_t v28; // 0x1e46d01
    if (v26 == 0) {
        // 0x1e46c94
        v28 = g8;
    } else {
        while (true) {
            // 0x1e46c9e
            *(int32_t *)(g9 - 4) = 32;
            g2 = (int32_t)g601;
            *(int32_t *)(g9 - 8) = v27;
            *(int32_t *)(g9 - 12) = *(int32_t *)(g2 + 12);
            int32_t v29 = waveOutWrite((int32_t)&g708, (struct wavehdr_tag *)&g708, (int32_t)&g708); // 0x1e46ca9
            g2 = v29;
            if (v29 != 0) {
                // 0x1e46cb3
                if (g484 != 0) {
                    // 0x1e46cbc
                    *(int32_t *)(g9 - 4) = 48;
                    *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                    *(int32_t *)(g9 - 12) = (int32_t)"Failed to write block to device";
                    *(int32_t *)(g9 - 16) = 0;
                    g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                }
                // 0x1e46cd0
                *(int32_t *)(v27 + 32) = 1;
                *(int32_t *)(g9 - 4) = v27;
                g2 = function_1e46130((int32_t)&g708);
            }
            int32_t v30 = g8; // 0x1e46cdd
            int32_t v31; // 0x1e46d0113
            if (v30 != 0) {
                int32_t v32 = v8 + 1; // 0x1e46ce1
                v8 = v32;
                int32_t v33 = (int32_t)g601; // 0x1e46ce2
                g2 = v33;
                if (*(int32_t *)(v33 + 404) <= v32) {
                    // 0x1e46cef
                    *(int32_t *)(g9 - 4) = *(int32_t *)(v33 + 12);
                    g2 = waveOutRestart((int32_t)&g708);
                    g8 = 0;
                    v31 = 0;
                } else {
                    v31 = v30;
                }
            } else {
                v31 = 0;
            }
            int32_t v34 = *(int32_t *)(v27 + 44); // 0x1e46cfa
            v27 = v34;
            if (v34 == 0) {
                v28 = v31;
                // break -> 0x1e46d01
                break;
            }
        }
    }
    if (v28 != 0) {
        int32_t v35 = (int32_t)g601; // 0x1e46d05
        g2 = v35;
        *(int32_t *)(g9 - 4) = *(int32_t *)(v35 + 12);
        g2 = waveOutRestart((int32_t)&g708);
    }
    // 0x1e46d13
    g2 = 1;
    return 1;
}

// Address range: 0x1e46d22 - 0x1e46d55
int32_t function_1e46d22(void) {
    // 0x1e46d22
    if (g486 != 0) {
        // 0x1e46d54
        return g2;
    }
    // 0x1e46d2b
    g5 = 0;
    int32_t v1 = 0; // 0x1e46d47
    int32_t v2 = (int32_t)g601 + 244; // 0x1e46d44
    while (true) {
        int32_t result = *(int32_t *)v2; // 0x1e46d39
        g2 = result;
        if (result != 0) {
            if (result != -1) {
                return result;
            }
        }
        int32_t v3 = v1 + 1; // 0x1e46d47
        g5 = v3;
        if (v3 >= 16) {
            // break -> 0x1e46d4d
            break;
        }
        v1 = v3;
        v2 += 4;
    }
    int32_t result2 = function_1e45c9e(0); // 0x1e46d4f
    g2 = result2;
    // 0x1e46d54
    return result2;
}

// Address range: 0x1e46d55 - 0x1e47347
int32_t function_1e46d55(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g2 = 0;
    int32_t v2 = g489 + 1; // 0x1e46d5d
    g489 = v2;
    int32_t result;
    int32_t v3; // 0x1e46df8
    if (v2 > 1) {
        result = 12;
        goto lab_0x1e47335;
    } else {
        if (a1 != NULL) {
            // 0x1e46dac
            g2 = v1;
            int32_t v4 = *(int32_t *)(v1 + 2); // 0x1e46daf
            if (v4 == 0) {
                goto lab_0x1e46dc8;
            } else {
                // 0x1e46db6
                if (*(int16_t *)v4 != 0x5432) {
                    goto lab_0x1e46dc8;
                } else {
                    // 0x1e46dbd
                    if (*(int16_t *)(v4 + 444) == 0x5432) {
                        v3 = v4;
                        goto lab_0x1e46df6;
                    } else {
                        goto lab_0x1e46dc8;
                    }
                }
            }
        } else {
            // 0x1e46d85
            if (g484 != 0) {
                // 0x1e46d8d
                g2 = MessageBoxA(NULL, "NULL parameters pointer passed to WaveMixPlay!", "WavMix32", 48);
                result = 5;
            } else {
                result = 5;
            }
            goto lab_0x1e47335;
        }
    }
  lab_0x1e46e8d:
    // 0x1e46e8d
    g2 = v1;
    int32_t v5 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995"; // esi
    int32_t * v6; // 0x1e46e30
    *(int32_t *)(g9 - 4) = *v6;
    *(int32_t *)(g9 - 8) = (int32_t)"The LPMIXWAVE 0x%lx is not in the current output format, close the wave and reopen it.";
    *(int32_t *)(g9 - 12) = v5;
    g2 = wsprintfA((char *)&g708, (char *)&g708);
    if (g484 != 0) {
        // 0x1e46eb0
        *(int32_t *)(g9 + 8) = 48;
        *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
        *(int32_t *)g9 = v5;
        *(int32_t *)(g9 - 4) = 0;
        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
        result = 8;
    } else {
        result = 8;
    }
    goto lab_0x1e47335;
  lab_0x1e472ea:
    // 0x1e472ea
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g5;
    int32_t v113 = function_1e466b3((int32_t)&g708, (int32_t)&g708); // 0x1e472ed
    g2 = v113;
    if (v113 == 0) {
        // break (via goto) -> 0x1e4731a
        goto lab_0x1e4731a;
    }
    // 0x1e472f6
    int32_t v99;
    if (v99 == g6) {
        // continue -> 0x1e47294
        goto lab_0x1e47294_2;
    }
    int32_t v114 = g8 + 1; // 0x1e472fb
    v5 = v114;
    int32_t v111 = (int32_t)g601; // 0x1e472fc
    g2 = v111;
    if (*(int32_t *)(v111 + 404) <= v114) {
        // break -> 0x1e47309
        goto lab_0x1e47309;
    }
    goto lab_0x1e47294;
  lab_0x1e47205:;
    int32_t v115 = g7; // 0x1e47205
    uint16_t v116 = *(int16_t *)(v115 + 26); // 0x1e47205
    int32_t v117 = v116; // 0x1e47205
    g5 = (g5 & -0x10000) | v117;
    if (v116 != -1) {
        int32_t v118 = v117 + 1; // 0x1e47225
        g5 = v118;
        int32_t v119 = *(int32_t *)(v115 + 36) * v118; // 0x1e47226
        int32_t v120 = (int32_t)*(int16_t *)((int32_t)g601 + 392); // 0x1e47229
        g5 = v120;
        int32_t v121 = *(int32_t *)v5 + v119 - v120; // 0x1e47232
        *(int32_t *)(v115 + 44) = v121;
    } else {
        // 0x1e47210
        *(int32_t *)(v115 + 44) = -1;
    }
    int32_t v122 = (int32_t)g601; // 0x1e47237
    g5 = v122;
    if (*(int32_t *)(v122 + 440) == 0) {
        // break -> 0x1e4724a
        goto lab_0x1e4724a_2;
    }
    int32_t v96;
    int32_t v49 = v96;
    struct tWAVEFORMATEX * v50 = g601; // 0x1e47098
    goto lab_0x1e47098;
  lab_0x1e471ee:;
    int32_t v123 = (int32_t)g601; // 0x1e471ee
    g5 = v123;
    uint32_t v124 = *(int32_t *)(v123 + 412); // 0x1e471f6
    v96 = v124 <= *(int32_t *)v5 ? v49 : 1;
    goto lab_0x1e47205;
  lab_0x1e47335:
    // 0x1e47335
    g2 = result;
    g489--;
    return result;
  lab_0x1e46dc8:
    // 0x1e46dc8
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, (char *)(int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v3 = 0;
    goto lab_0x1e46df6;
  lab_0x1e46df6:
    // 0x1e46df6
    g2 = 0;
    struct tWAVEFORMATEX * v7 = (struct tWAVEFORMATEX *)v3; // 0x1e46df8
    g601 = v7;
    if (v3 != 0) {
        // 0x1e46e2d
        g2 = v1;
        v6 = (int32_t *)(v1 + 10);
        int32_t v8 = *v6; // 0x1e46e30
        if (v8 != 0) {
            int16_t v9 = *(int16_t *)(v8 + 64); // 0x1e46e3b
            g2 = v9 == 0x5432;
            if (v9 == 0x5432) {
                // 0x1e46e78
                g5 = 16;
                int32_t v10 = v3 + 380; // 0x1e46e89
                int32_t v11 = 16; // 0x1e46e89
                bool v12 = false;
                while (true) {
                    if (v11 == 0) {
                        // break -> bb89
                        break;
                    }
                    int32_t v13 = g1 ? -1 : 1; // 0x1e46e89
                    int32_t v14 = v11 - 1; // 0x1e46e89
                    g5 = v14;
                    if (*(char *)v8 != *(char *)v10) {
                        goto lab_0x1e46e8d;
                    }
                    v10 += v13;
                    v8 += v13;
                    v11 = v14;
                    v12 = true;
                }
                if (v12) {
                    // 0x1e46ecc
                    g5 = v3;
                    g2 = 0;
                    if (*(int32_t *)(v3 + 16) != 0) {
                        // 0x1e46f00
                        g5 = v3;
                        g2 = 0;
                        if (*(int32_t *)(v3 + 308) != 0) {
                            // 0x1e46f37
                            g2 = v1;
                            int32_t v15; // ebx
                            if ((*(char *)(v1 + 18) & 2) == 0) {
                                // 0x1e46f8d
                                g2 = v1;
                                v15 = *(int32_t *)(v1 + 6);
                            } else {
                                // 0x1e46f40
                                v15 = 0;
                                int32_t v16 = v3 + 244; // 0x1e46f4a
                                g5 = v16;
                                int32_t v17 = 0; // 0x1e46f7f
                                int32_t v18 = 0; // 0x1e46f6b
                                int32_t v19; // 0x1e46f88
                                while (true) {
                                    // 0x1e46f50
                                    int32_t v20; // 0x1e46f5523
                                    if (*(int32_t *)v16 != -1) {
                                        int32_t v21 = 4 * v18 + v3; // 0x1e46f5c
                                        g2 = v21;
                                        if (*(int32_t *)(v21 + 244) == 0) {
                                            v19 = v18;
                                            // break -> 0x1e46f85
                                            break;
                                        }
                                        if (v17 != v18) {
                                            // 0x1e46f6f
                                            if (*(int32_t *)(v21 + 312) > *(int32_t *)(v16 + 68)) {
                                                // 0x1e46f7a
                                                v15 = v17;
                                                v20 = v17;
                                            } else {
                                                v20 = v18;
                                            }
                                        } else {
                                            v20 = v17;
                                        }
                                    } else {
                                        v20 = v18;
                                    }
                                    int32_t v22 = v16 + 4; // 0x1e46f7c
                                    g5 = v22;
                                    int32_t v23 = v17 + 1; // 0x1e46f7f
                                    if (v23 >= 16) {
                                        v19 = v20;
                                        // break -> 0x1e46f85
                                        break;
                                    }
                                    v17 = v23;
                                    v18 = v20;
                                    v16 = v22;
                                }
                                // 0x1e46f85
                                g2 = v1;
                                *(int32_t *)(v1 + 6) = v19;
                                v7 = g601;
                            }
                            int32_t v24 = (int32_t)v7; // 0x1e46f93
                            g2 = v24;
                            int32_t * v25 = (int32_t *)(v24 + 376); // 0x1e46f98
                            *v25 = *v25 + 1;
                            int32_t v26 = (int32_t)g601; // 0x1e46f9e
                            g2 = v26;
                            int32_t v27 = *(int32_t *)(v26 + 376); // 0x1e46fa3
                            g7 = v27;
                            *(int32_t *)(v26 + 312 + 4 * v15) = v27;
                            int32_t v28 = (int32_t)g601; // 0x1e46fb0
                            g2 = v28;
                            if (*(int32_t *)(v28 + 244 + 4 * v15) != -1) {
                                int32_t v29 = function_1e45fb2(); // 0x1e46fcb
                                g2 = v29;
                                if (v29 == 0) {
                                    result = 12;
                                    goto lab_0x1e47335;
                                } else {
                                    // 0x1e46fd8
                                    g5 = 7;
                                    __asm_rep_movsd_memcpy((char *)(v29 + 4), (char *)a1, 7);
                                    g5 = 0;
                                    int32_t v30 = *(int32_t *)(v29 + 14); // 0x1e46fe5
                                    g5 = v30;
                                    int32_t * v31 = (int32_t *)(v29 + 32); // 0x1e46fe8
                                    *v31 = v30;
                                    int32_t * v32 = (int32_t *)(v29 + 36); // 0x1e46fee
                                    *v32 = *(int32_t *)(g5 + 20);
                                    int32_t v33 = *v31; // 0x1e46ff1
                                    g5 = v33;
                                    int32_t v34 = *(int32_t *)(v33 + 16); // 0x1e46ff4
                                    *(int32_t *)(v29 + 48) = v34;
                                    int32_t v35 = (int32_t)g601; // 0x1e46ffd
                                    g5 = v35;
                                    int32_t v36 = (int32_t)*(int16_t *)(v35 + 392); // 0x1e47003
                                    g6 = v36;
                                    int32_t v37 = v34 + *v32 - v36; // 0x1e4700c
                                    g8 = v37;
                                    *(int32_t *)(v29 + 52) = v37;
                                    *(int32_t *)(v29 + 10) = v15;
                                    int32_t v38 = (int32_t)g601 + 440; // 0x1e4701a
                                    g7 = v38;
                                    int32_t * v39 = (int32_t *)v38; // 0x1e47020
                                    int32_t v40 = *v39; // 0x1e47020
                                    g5 = v40;
                                    if (v40 == 0) {
                                        // 0x1e47046
                                        *v39 = v29;
                                        *(int32_t *)v29 = v29;
                                    } else {
                                        int32_t v41 = *(int32_t *)v40; // 0x1e47026
                                        g5 = v41;
                                        *(int32_t *)v29 = v41;
                                        int32_t v42 = *(int32_t *)((int32_t)g601 + 440); // 0x1e47030
                                        *(int32_t *)v42 = v29;
                                        int32_t v43 = (int32_t)g601; // 0x1e47038
                                        g7 = v43;
                                        *(int32_t *)(v43 + 440) = v29;
                                    }
                                    // 0x1e4704a
                                    if ((*(char *)(v29 + 22) & 8) != 0) {
                                        result = 0;
                                        goto lab_0x1e47335;
                                    } else {
                                        // 0x1e47054
                                        function_1e46d22();
                                        int32_t v44 = (int32_t)g601; // 0x1e47059
                                        g2 = v44;
                                        int32_t v45;
                                        struct tWAVEFORMATEX * v46; // 0x1e47085
                                        if (*(int32_t *)(v44 + 432) != 0x1e46b43) {
                                            // 0x1e4707a
                                            g2 = v44;
                                            v46 = g601;
                                            v45 = *(int32_t *)(v44 + 412);
                                        } else {
                                            // 0x1e4706a
                                            *(int32_t *)(g9 - 4) = *(int32_t *)(v44 + 420);
                                            *(int32_t *)(g9 - 8) = *(int32_t *)(g2 + 12);
                                            int32_t v47 = function_1e45c22((int32_t)&g708, (int32_t)&g708); // 0x1e47073
                                            v46 = g601;
                                            v45 = v47;
                                        }
                                        // 0x1e47085
                                        g2 = v45;
                                        int32_t v48 = (int32_t)v46; // 0x1e47085
                                        g5 = v48;
                                        if (*(int32_t *)(v48 + 440) == 0) {
                                            // 0x1e4724a
                                            goto lab_0x1e4726b;
                                        } else {
                                            v49 = 0;
                                            v50 = v46;
                                            while (true) {
                                              lab_0x1e47098:;
                                                int32_t v51 = (int32_t)v50 + 440; // 0x1e4709e
                                                g5 = v51;
                                                int32_t * v52 = (int32_t *)v51; // 0x1e470a4
                                                int32_t v53 = *v52; // 0x1e470a4
                                                int32_t * v54 = (int32_t *)v53; // 0x1e470a6
                                                int32_t v55 = *v54; // 0x1e470a6
                                                g7 = v55;
                                                if (v55 != v53) {
                                                    int32_t v56 = *(int32_t *)v55; // 0x1e470b4
                                                    g5 = v56;
                                                    *v54 = v56;
                                                } else {
                                                    // 0x1e470ac
                                                    *v52 = 0;
                                                }
                                                int32_t v57 = g7; // 0x1e470b8
                                                int32_t v58 = v57 + 56; // edi
                                                *(int32_t *)v57 = 0;
                                                int32_t v59 = g7; // 0x1e470c1
                                                int32_t v60 = *(int32_t *)(v59 + 10); // 0x1e470c5
                                                v5 = v60;
                                                int32_t v61;
                                                if ((*(char *)(v59 + 22) & 16) == 0) {
                                                    int32_t v62 = (int32_t)g601; // 0x1e470da
                                                    g5 = v62;
                                                    v15 = v59 + 58;
                                                    *(int16_t *)v58 = *(int16_t *)(4 * v60 + 180 + v62);
                                                    int32_t v63 = (int32_t)g601; // 0x1e470ee
                                                    g5 = v63;
                                                    uint16_t v64 = *(int16_t *)(v63 + 182 + 4 * v5); // 0x1e470f4
                                                    v61 = (int32_t)v64 | (v63 & -0x10000);
                                                } else {
                                                    uint16_t v65 = *(int16_t *)(v59 + 28); // 0x1e470ca
                                                    g5 = (g5 & -0x10000) | (int32_t)v65;
                                                    v15 = v59 + 58;
                                                    *(int16_t *)v58 = v65;
                                                    v61 = (g5 & -0x10000) | (int32_t)*(int16_t *)(g7 + 30);
                                                }
                                                // 0x1e470fc
                                                g5 = v61;
                                                *(int16_t *)v15 = (int16_t)v61;
                                                int16_t * v66 = (int16_t *)v58; // 0x1e470ff
                                                uint16_t v67 = *v66; // 0x1e470ff
                                                int32_t v68 = (g5 & -0x10000) | (int32_t)v67; // 0x1e470ff
                                                g5 = v68;
                                                int32_t v69; // 0x1e4710d
                                                if (v67 >= 11) {
                                                    // 0x1e47108
                                                    *v66 = 10;
                                                    v69 = g5;
                                                } else {
                                                    v69 = v68;
                                                }
                                                int16_t * v70 = (int16_t *)v15; // 0x1e4710d
                                                uint16_t v71 = *v70; // 0x1e4710d
                                                g5 = (int32_t)v71 | (v69 & -0x10000);
                                                if (v71 >= 11) {
                                                    // 0x1e47116
                                                    *v70 = 10;
                                                }
                                                int32_t v72 = g7; // 0x1e4711b
                                                int32_t v73 = (int32_t)g601; // 0x1e4711f
                                                g5 = v73;
                                                int32_t v74 = v5; // 0x1e47189
                                                int32_t v75 = v73 + 244 + 4 * v74; // 0x1e47189
                                                if ((*(char *)(v72 + 22) & 1) == 0) {
                                                    // 0x1e47189
                                                    g5 = v75;
                                                    int32_t * v76 = (int32_t *)v75; // 0x1e47190
                                                    int32_t v77 = *v76; // 0x1e47190
                                                    v58 = v77;
                                                    if (v77 == 0) {
                                                        // 0x1e471d1
                                                        v5 = v72 + 40;
                                                        *v76 = v72;
                                                        if ((*(char *)(g7 + 22) & 4) == 0) {
                                                            int32_t v78 = (int32_t)g601; // 0x1e471e0
                                                            g5 = v78;
                                                            // 0x1e471ec
                                                            *(int32_t *)v5 = *(int32_t *)(v78 + 412);
                                                            goto lab_0x1e471ee;
                                                        } else {
                                                            // 0x1e471dc
                                                            *(int32_t *)v5 = g2;
                                                            goto lab_0x1e471ee;
                                                        }
                                                    } else {
                                                        // 0x1e47196
                                                        if (*(int32_t *)v77 != 0) {
                                                            int32_t v79; // 0x1e4719b
                                                            v58 = v79;
                                                            while (*(int32_t *)v79 != 0) {
                                                                // 0x1e4719b
                                                                int32_t v80; // 0x1e4719d
                                                                v79 = v80;
                                                                v58 = v79;
                                                                v80 = *(int32_t *)v79;
                                                            }
                                                        }
                                                        // 0x1e471a2
                                                        v5 = v72 + 40;
                                                        *(int32_t *)v77 = v72;
                                                        if ((*(char *)(g7 + 22) & 4) == 0) {
                                                            int32_t v81 = (int32_t)g601; // 0x1e471ba
                                                            g5 = v81;
                                                            int32_t v82 = *(int32_t *)(v81 + 412); // 0x1e471c0
                                                            int32_t v83 = *(int32_t *)(v58 + 44); // 0x1e471c6
                                                            g5 = v83;
                                                            if (v82 <= v83) {
                                                                // branch -> 0x1e471ec
                                                            } else {
                                                                v83 = v82;
                                                            }
                                                            // 0x1e471ec
                                                            *(int32_t *)v5 = v83;
                                                            goto lab_0x1e471ee;
                                                        } else {
                                                            int32_t v84 = *(int32_t *)(v58 + 44); // 0x1e471ad
                                                            g5 = v84;
                                                            int32_t v85 = g2; // 0x1e471b0
                                                            if (v84 <= v85) {
                                                                // 0x1e471b4
                                                                g5 = v85;
                                                            } else {
                                                                v85 = v84;
                                                            }
                                                            // 0x1e471b6
                                                            *(int32_t *)v5 = v85;
                                                            goto lab_0x1e471ee;
                                                        }
                                                    }
                                                } else {
                                                    int32_t v86 = *(int32_t *)v75; // 0x1e47127
                                                    g5 = v86;
                                                    int32_t v87; // 0x1e47152
                                                    int32_t v88; // 0x1e47152
                                                    if (v86 != 0) {
                                                        while (true) {
                                                            int32_t * v89 = (int32_t *)v86; // 0x1e47132
                                                            int32_t v90 = *v89; // 0x1e47132
                                                            if (v86 != 0) {
                                                                // 0x1e47138
                                                                *v89 = g603;
                                                                g603 = g5;
                                                            }
                                                            // 0x1e47146
                                                            g5 = v90;
                                                            if (v90 == 0) {
                                                                // break -> 0x1e4714c
                                                                break;
                                                            }
                                                            v86 = v90;
                                                        }
                                                        // 0x1e4714c
                                                        v88 = v5;
                                                        v87 = g7;
                                                    } else {
                                                        v88 = v74;
                                                        v87 = v72;
                                                    }
                                                    int32_t v91 = (int32_t)g601; // 0x1e4714c
                                                    g5 = v91;
                                                    *(int32_t *)(4 * v88 + 244 + v91) = v87;
                                                    int32_t v92 = g486 == 0 ? v49 : 1;
                                                    int32_t v93 = g7; // 0x1e47169
                                                    int32_t v94 = v93 + 40; // 0x1e4716d
                                                    v5 = v94;
                                                    if ((*(char *)(v93 + 22) & 4) == 0) {
                                                        int32_t v95 = (int32_t)g601; // 0x1e47179
                                                        g5 = v95;
                                                        *(int32_t *)v94 = *(int32_t *)(v95 + 412);
                                                        v96 = v92;
                                                    } else {
                                                        // 0x1e47172
                                                        *(int32_t *)v94 = g2;
                                                        v96 = v92;
                                                    }
                                                    goto lab_0x1e47205;
                                                }
                                            }
                                          lab_0x1e4724a_2:
                                            // 0x1e4724a
                                            if (v96 == 0) {
                                                goto lab_0x1e4726b;
                                            } else {
                                                // 0x1e47251
                                                *(int32_t *)(g9 - 4) = 0;
                                                *(int32_t *)(g9 - 8) = g2;
                                                if (g2 == 0) {
                                                    goto lab_0x1e4726b;
                                                } else {
                                                    // 0x1e47263
                                                    result = 0;
                                                    goto lab_0x1e47335;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                result = 5;
                                goto lab_0x1e47335;
                            }
                        } else {
                            // 0x1e46f10
                            if (g484 != 0) {
                                // 0x1e46f18
                                *(int32_t *)(g9 - 4) = 48;
                                *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                                *(int32_t *)(g9 - 12) = (int32_t)"You must open a channel before you can play a wave!";
                                *(int32_t *)(g9 - 16) = g2;
                                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                                result = 5;
                            } else {
                                result = 5;
                            }
                            goto lab_0x1e47335;
                        }
                    } else {
                        // 0x1e46ed9
                        if (g484 != 0) {
                            // 0x1e46ee1
                            *(int32_t *)(g9 - 4) = 48;
                            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                            *(int32_t *)(g9 - 12) = (int32_t)"Wave device not allocated, call WaveMixActivate(hMixSession,TRUE)";
                            *(int32_t *)(g9 - 16) = g2;
                            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                            result = 4;
                        } else {
                            result = 4;
                        }
                        goto lab_0x1e47335;
                    }
                } else {
                    goto lab_0x1e46e8d;
                }
            } else {
                goto lab_0x1e46e4f;
            }
        } else {
            // 0x1e46e4b
            g2 = 0;
            goto lab_0x1e46e4f;
        }
    } else {
        // 0x1e46e06
        if (g484 != 0) {
            // 0x1e46e0e
            *(int32_t *)(g9 - 4) = 48;
            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
            *(int32_t *)(g9 - 12) = (int32_t)"Invalid session handle passed to WaveMixPlay";
            *(int32_t *)(g9 - 16) = g2;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
            result = 5;
        } else {
            result = 5;
        }
        goto lab_0x1e47335;
    }
  lab_0x1e46e4f:
    // 0x1e46e4f
    if (g484 != 0) {
        // 0x1e46e58
        *(int32_t *)(g9 - 4) = 48;
        *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
        *(int32_t *)(g9 - 12) = (int32_t)"Invalid or NULL wave pointer passed to WaveMixPlay!";
        *(int32_t *)(g9 - 16) = 0;
        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
        result = 5;
    } else {
        result = 5;
    }
    goto lab_0x1e47335;
  lab_0x1e4726b:;
    // 0x1e4726b
    int32_t v97;
    if (g486 == 0) {
        int32_t v98 = (int32_t)g601; // 0x1e47275
        g2 = v98;
        if (*(int32_t *)(v98 + 404) > 0) {
            // 0x1e47282
            *(int32_t *)(g9 - 4) = *(int32_t *)(v98 + 12);
            g2 = waveOutPause((int32_t)&g708);
            v97 = 1;
        } else {
            v97 = 0;
        }
    } else {
        v97 = 0;
    }
    // 0x1e47292
    g6 = 0;
    v99 = v97;
    while (true) {
      lab_0x1e47294_2:
        while (true) {
          lab_0x1e47294:
            // 0x1e47294
            g5 = 0;
            int32_t v100 = (int32_t)g601; // 0x1e47296
            g2 = v100;
            int32_t v101 = *(int32_t *)(v100 + 400); // 0x1e4729b
            g7 = v101;
            if (v101 > 0) {
                int32_t * v102 = (int32_t *)(v100 + 408); // 0x1e472a5
                int32_t v103 = *v102; // 0x1e472a5
                g2 = v103;
                int32_t v104 = 0; // 0x1e472b6
                int32_t v105; // 0x1e472ce
                while (true) {
                    // 0x1e472ab
                    if (*(int32_t *)(*(int32_t *)v103 + 32) != 0) {
                        v105 = v104;
                        // break -> 0x1e472bb
                        break;
                    }
                    int32_t v106 = v103 + 4; // 0x1e472b3
                    g2 = v106;
                    int32_t v107 = v104 + 1; // 0x1e472b6
                    g5 = v107;
                    if (v107 >= v101) {
                        v105 = v107;
                        // break -> 0x1e472bb
                        break;
                    }
                    v104 = v107;
                    v103 = v106;
                }
                if (v105 < v101) {
                    // 0x1e472c3
                    g2 = v100;
                    int32_t v108 = *(int32_t *)(*v102 + 4 * v105); // 0x1e472ce
                    g5 = v108;
                    int32_t v109 = *(int32_t *)(v100 + 396); // 0x1e472d1
                    g7 = v109;
                    *(int32_t *)(v108 + 4) = v109;
                    *(int32_t *)g5 = v108 + 48;
                    int32_t v110 = (int32_t)g609; // 0x1e472df
                    g2 = v110;
                    *(int32_t *)(g5 + 40) = v110;
                    *(int32_t *)(g5 + 32) = g6;
                    goto lab_0x1e472ea;
                } else {
                    // 0x1e472bf
                    g5 = 0;
                    goto lab_0x1e472ea;
                }
            } else {
                // 0x1e472bf
                g5 = 0;
                goto lab_0x1e472ea;
            }
        }
      lab_0x1e47309:
        // 0x1e47309
        *(int32_t *)(g9 - 4) = *(int32_t *)(v111 + 12);
        g2 = waveOutRestart((int32_t)&g708);
        v99 = g6;
    }
  lab_0x1e4731a:
    if (v99 != 0) {
        int32_t v112 = (int32_t)g601; // 0x1e47320
        g2 = v112;
        *(int32_t *)(g9 - 4) = *(int32_t *)(v112 + 12);
        g2 = waveOutRestart((int32_t)&g708);
        result = 0;
    } else {
        result = 0;
    }
    goto lab_0x1e47335;
}

// Address range: 0x1e47347 - 0x1e47480
int32_t function_1e47347(int32_t a1) {
    int32_t v1 = 0; // esi
    int32_t v2; // 0x1e47395
    if (a1 == 0) {
        goto lab_0x1e47367;
    } else {
        // 0x1e47355
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e47367;
        } else {
            // 0x1e4735c
            if (*(int16_t *)(a1 + 444) == 0x5432) {
                v2 = a1;
                goto lab_0x1e47395;
            } else {
                goto lab_0x1e47367;
            }
        }
    }
  lab_0x1e47367:
    // 0x1e47367
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v2 = 0;
    goto lab_0x1e47395;
  lab_0x1e47395:;
    struct tWAVEFORMATEX * v3 = (struct tWAVEFORMATEX *)v2; // 0x1e47395
    g601 = v3;
    int32_t v4; // 0x1e473f4
    int32_t v5; // 0x1e473fb
    int32_t result; // 0x1e4747d
    if (v2 != 0) {
        // 0x1e473ae
        if ((*(char *)(g9 + 28) & 1) == 0) {
            int32_t v6 = *(int32_t *)(g9 + 24); // 0x1e473be
            g2 = v6;
            if (v6 >= 0) {
                if (v6 < 16) {
                    // 0x1e473d3
                    g5 = v2;
                    if (*(int32_t *)(v2 + 244 + 4 * v6) != -1) {
                        // 0x1e473ed
                        v4 = v6;
                        v5 = v6 + 1;
                        goto lab_0x1e473f0;
                    } else {
                        // 0x1e473e3
                        g2 = 5;
                        result = 5;
                        goto lab_0x1e47479;
                    }
                } else {
                    // 0x1e47474
                    g2 = 11;
                    result = 11;
                    goto lab_0x1e47479;
                }
            } else {
                // 0x1e47474
                g2 = 11;
                result = 11;
                goto lab_0x1e47479;
            }
        } else {
            // 0x1e473b5
            g2 = 0;
            v4 = 0;
            v5 = 16;
            goto lab_0x1e473f0;
        }
    } else {
        // 0x1e473a4
        g2 = 5;
        result = 5;
        goto lab_0x1e47479;
    }
  lab_0x1e47479:
    // 0x1e47479
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
  lab_0x1e473f0:
    // 0x1e473f0
    g5 = v5;
    if (v5 > v4) {
        int32_t v7 = 4 * v4; // 0x1e473f4
        g7 = v7;
        g5 = v5 - v4;
        while (true) {
            int32_t v8 = v7 + 244 + (int32_t)v3; // 0x1e47404
            g2 = v8;
            int32_t * v9 = (int32_t *)v8; // 0x1e4740b
            int32_t v10 = *v9; // 0x1e4740b
            int32_t v11 = v10; // ebx
            if (v10 != -1) {
                // 0x1e47412
                *v9 = 0;
                int32_t v12 = v11; // 0x1e47414
                if (v12 != 0) {
                    // 0x1e47418
                    v1 = 1;
                    while (true) {
                        int32_t * v13 = (int32_t *)v12; // 0x1e4741d
                        int32_t v14 = *v13; // 0x1e4741d
                        g2 = v14;
                        if (v12 != 0) {
                            int32_t v15 = g603; // 0x1e47423
                            g3 = v15;
                            *v13 = v15;
                            g603 = v11;
                        }
                        // 0x1e47431
                        v11 = v14;
                        if (v14 == 0) {
                            // break -> 0x1e47437
                            break;
                        }
                        v12 = v14;
                    }
                }
            }
            int32_t v16 = g7 + 4; // 0x1e47437
            g7 = v16;
            int32_t v17 = g5 - 1; // 0x1e4743a
            g5 = v17;
            if (v17 == 0) {
                // break -> 0x1e4743d
                break;
            }
            // 0x1e47437
            v7 = v16;
            v3 = g601;
        }
    }
    // 0x1e4743d
    if (v1 != 0) {
        // 0x1e47441
        if ((*(char *)(g9 + 28) & 2) == 0) {
            int32_t v18 = (int32_t)g601; // 0x1e47448
            g2 = v18;
            if (*(int32_t *)(v18 + 16) != 0) {
                // 0x1e47453
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = *(int32_t *)(g2 + 420);
                *(int32_t *)(g9 - 12) = *(int32_t *)(g2 + 12);
                int32_t v19 = function_1e45c22((int32_t)&g708, (int32_t)&g708); // 0x1e4745e
                g2 = v19;
                *(int32_t *)(g9 - 4) = v19;
            }
        }
    }
    // 0x1e47470
    g2 = 0;
    result = 0;
    goto lab_0x1e47479;
}

// Address range: 0x1e47480 - 0x1e4754b
int32_t function_1e47480(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1;
    if (a1 == 0) {
        goto lab_0x1e474a6;
    } else {
        // 0x1e4748c
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e474a6;
        } else {
            // 0x1e47493
            if (*(int16_t *)(a1 + 444) != 0x5432) {
                goto lab_0x1e474a6;
            } else {
                v1 = a1;
                goto lab_0x1e474da;
            }
        }
    }
  lab_0x1e474a6:
    // 0x1e474a6
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v1 = 0;
    goto lab_0x1e474da;
  lab_0x1e474da:
    // 0x1e474da
    g601 = (struct tWAVEFORMATEX *)v1;
    int32_t result; // 0x1e47548
    if (v1 != 0) {
        int32_t v2 = a3 | 2; // 0x1e474f0
        g2 = v2;
        *(int32_t *)(g9 - 4) = v2;
        *(int32_t *)(g9 - 8) = a2;
        *(int32_t *)(g9 - 12) = a1;
        int32_t v3 = function_1e47347((int32_t)&g708); // 0x1e474f5
        g2 = v3;
        if (v3 == 0) {
            int32_t v4 = g8 + 1; // 0x1e47502
            g5 = v4;
            int32_t v5; // 0x1e47512
            int32_t v6; // 0x1e47519
            if ((a3 & 1) != 0) {
                // 0x1e47507
                g5 = 16;
                v5 = 0;
                v6 = 16;
            } else {
                v5 = g8;
                v6 = v4;
            }
            int32_t v7 = v6 - v5; // 0x1e4750e
            if (v6 > v5) {
                int32_t v8 = 4 * v5; // 0x1e47512
                g5 = v7;
                while (true) {
                    int32_t v9 = v8 + 244 + (int32_t)g601; // 0x1e47520
                    g2 = v9;
                    int32_t * v10 = (int32_t *)v9; // 0x1e47527
                    int32_t v11; // 0x1e47540
                    if (*v10 != -1) {
                        // 0x1e4752c
                        *v10 = -1;
                        int32_t v12 = (int32_t)g601; // 0x1e47532
                        g2 = v12;
                        int32_t * v13 = (int32_t *)(v12 + 308); // 0x1e47537
                        *v13 = *v13 - 1;
                        v11 = g5;
                    } else {
                        v11 = v7;
                    }
                    int32_t v14 = v11 - 1; // 0x1e47540
                    g5 = v14;
                    if (v14 == 0) {
                        // break -> 0x1e47543
                        break;
                    }
                    v7 = v14;
                    v8 += 4;
                }
            }
            // 0x1e47543
            g2 = 0;
            result = 0;
        } else {
            result = v3;
        }
    } else {
        // 0x1e474e3
        g2 = 5;
        result = 5;
    }
    // 0x1e47545
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e4754b - 0x1e47681
int32_t function_1e4754b(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-16
    int32_t v2; // 0x1e475d032
    if (a1 == 0) {
        goto lab_0x1e47598;
    } else {
        // 0x1e47557
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e47598;
        } else {
            // 0x1e4755e
            if (*(int16_t *)(a1 + 444) == 0x5432) {
                // 0x1e47598
                v2 = a1 + 244;
                goto lab_0x1e475a6;
            } else {
                goto lab_0x1e47598;
            }
        }
    }
  lab_0x1e47598:
    // 0x1e47598
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, (char *)(int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    int32_t result; // 0x1e4767e
    // 0x1e4759c
    g2 = 5;
    result = 5;
    goto lab_0x1e4767a;
  lab_0x1e475a6:;
    int32_t v3 = *(int32_t *)((int32_t)&v1 + 24); // 0x1e475a6
    if (v3 != 0) {
        int16_t * v4 = (int16_t *)(v3 + 64); // 0x1e475b2
        int16_t v5 = *v4; // 0x1e475b2
        g2 = v5 == 0x5432;
        if (v5 == 0x5432) {
            int32_t v6 = v2; // edi
            int32_t v7 = 16; // ebx
            int32_t v8 = v2; // 0x1e475db
            while (true) {
                int32_t v9 = *(int32_t *)v8; // 0x1e475db
                g5 = v9;
                if (v9 != -1) {
                    int32_t v10 = 0; // edx
                    if (v9 != 0) {
                        while (true) {
                            // 0x1e475e8
                            int32_t v11; // 0x1e47625
                            if (*(int32_t *)(v9 + 32) != v3) {
                                // 0x1e47623
                                v10 = v9;
                                v11 = *(int32_t *)v9;
                                g5 = v11;
                            } else {
                                int32_t v12 = v10; // 0x1e475ed
                                int32_t v13 = *(int32_t *)v9; // 0x1e4760a
                                if (v12 != 0) {
                                    // 0x1e4760a
                                    g2 = v13;
                                    *(int32_t *)v12 = v13;
                                    if (v9 != 0) {
                                        int32_t v14 = g603; // 0x1e47612
                                        g2 = v14;
                                        *(int32_t *)g5 = v14;
                                        g603 = g5;
                                    }
                                    int32_t v15 = *(int32_t *)v10; // 0x1e4761f
                                    g5 = v15;
                                    v11 = v15;
                                } else {
                                    // 0x1e475f1
                                    g5 = v13;
                                    int32_t v16 = *(int32_t *)v6; // 0x1e475f3
                                    g2 = v16;
                                    int32_t v17; // 0x1e47606
                                    if (v16 != 0) {
                                        // 0x1e475f9
                                        *(int32_t *)v16 = g603;
                                        g603 = v16;
                                        v17 = g5;
                                    } else {
                                        v17 = v13;
                                    }
                                    // 0x1e47606
                                    *(int32_t *)v6 = v17;
                                    v11 = g5;
                                }
                            }
                            if (v11 == 0) {
                                // break -> 0x1e4762b
                                break;
                            }
                            v9 = v11;
                        }
                    }
                }
                int32_t v18 = v6 + 4; // 0x1e4762b
                v6 = v18;
                int32_t v19 = v7 - 1; // 0x1e4762e
                v7 = v19;
                if (v19 == 0) {
                    // break -> 0x1e47631
                    break;
                }
                v8 = v18;
            }
            int32_t * v20 = (int32_t *)(v3 + 16); // 0x1e47631
            int32_t v21 = *v20; // 0x1e47631
            g2 = v21;
            if (v21 != 0) {
                // 0x1e47638
                *(int32_t *)(g9 - 4) = v21;
                int32_t v22 = (int32_t)GlobalHandle(&g708); // 0x1e47639
                g2 = v22;
                *(int32_t *)(g9 - 4) = v22;
                g2 = GlobalUnlock(&g708);
                *(int32_t *)(g9 - 4) = *v20;
                int32_t v23 = (int32_t)GlobalHandle(&g708); // 0x1e47649
                g2 = v23;
                *(int32_t *)(g9 - 4) = v23;
                g2 = (int32_t)GlobalFree(&g708);
            }
            // 0x1e47656
            *v4 = 0;
            *(int32_t *)(g9 - 4) = v3;
            int32_t v24 = (int32_t)GlobalHandle(&g708); // 0x1e4765d
            g2 = v24;
            *(int32_t *)(g9 - 4) = v24;
            g2 = GlobalUnlock(&g708);
            *(int32_t *)(g9 - 4) = v3;
            int32_t v25 = (int32_t)GlobalHandle(&g708); // 0x1e4766b
            g2 = v25;
            *(int32_t *)(g9 - 4) = v25;
            GlobalFree(&g708);
            g2 = 0;
            result = 0;
            goto lab_0x1e4767a;
        } else {
            // 0x1e475c6
            g2 = 5;
            result = 5;
            goto lab_0x1e4767a;
        }
    } else {
        // 0x1e475c2
        g2 = 0;
        // 0x1e475c6
        g2 = 5;
        result = 5;
        goto lab_0x1e4767a;
    }
  lab_0x1e4767a:
    // 0x1e4767a
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e47681 - 0x1e477d2
int32_t function_1e47681(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = g2 & -0x10000; // 0x1e47682
    g2 = v1 | (a3 & 0xffff);
    int32_t v2 = g6 & -0x10000; // 0x1e4768f
    uint16_t v3 = (int16_t)a3; // 0x1e47693
    uint16_t v4 = (int16_t)a2; // 0x1e47693
    int32_t result; // 0x1e477cf
    if (v3 != v4) {
        if (v4 == 8) {
            goto lab_0x1e476ac;
        } else {
            if (v4 != 16) {
                goto lab_0x1e476b8;
            } else {
                goto lab_0x1e476ac;
            }
        }
    } else {
        // 0x1e47698
        g2 = a1;
        result = a1;
        goto lab_0x1e477c9;
    }
  lab_0x1e476ac:
    if (v3 == 8) {
        goto lab_0x1e476df;
    } else {
        if (v3 == 16) {
            goto lab_0x1e476df;
        } else {
            goto lab_0x1e476b8;
        }
    }
  lab_0x1e477c9:
    // 0x1e477c9
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e476df:;
    uint16_t v5 = v4 / 8; // 0x1e476df
    g5 = a4;
    uint16_t v6 = v3 / 8; // 0x1e476e6
    int32_t v7 = v1 | (int32_t)v6; // 0x1e476e6
    g2 = v7;
    int32_t * v8 = (int32_t *)a4; // 0x1e476f3
    uint64_t v9 = (int64_t)*v8; // 0x1e476f5
    uint64_t v10 = (int64_t)v5; // 0x1e476f5
    int32_t v11 = v9 / v10; // 0x1e476f5
    g7 = v9 % v10;
    int32_t v12 = v11; // ebx
    int32_t dwBytes = v11 * v7; // 0x1e476fd
    g2 = dwBytes;
    *v8 = dwBytes;
    int32_t * hMem = GlobalAlloc(0x2002, dwBytes); // 0x1e47708
    g2 = (int32_t)hMem;
    int32_t * v13 = GlobalLock(hMem); // 0x1e4770f
    int32_t v14 = (int32_t)v13; // 0x1e4770f
    g2 = v14;
    if (v13 != NULL) {
        // 0x1e4775c
        if (v6 >= (int16_t)(v2 || (int32_t)v5)) {
            // 0x1e47787
            g2 = a1;
            g5 = v14;
            if (v12 != 0) {
                int32_t v15 = a1; // 0x1e47799
                unsigned char v16 = *(char *)v15; // 0x1e47790
                g2 = v15 + 1;
                uint16_t v17 = 256 * (int16_t)v16 ^ -0x8000; // 0x1e4779a
                g7 = (int32_t)v17 | ((g7 | (int32_t)v16) & -0x10000);
                *(int16_t *)v14 = v17;
                int32_t v18 = g5 + 2; // 0x1e477a1
                g5 = v18;
                int32_t v19 = v12 - 1; // 0x1e477a4
                while (v19 != 0) {
                    // 0x1e47790
                    v15 = g2;
                    v16 = *(char *)v15;
                    g2 = v15 + 1;
                    v17 = 256 * (int16_t)v16 ^ -0x8000;
                    g7 = (int32_t)v17 | ((g7 | (int32_t)v16) & -0x10000);
                    *(int16_t *)v18 = v17;
                    v18 = g5 + 2;
                    g5 = v18;
                    v19--;
                }
            }
        } else {
            // 0x1e47762
            g5 = v14;
            if (v12 != 0) {
                int32_t v20 = a1; // 0x1e47775
                int32_t v21 = (int32_t)*(int16_t *)v20; // 0x1e4776b
                int32_t v22 = v21 >> 31 & 255; // 0x1e4776f
                g7 = v22;
                int32_t v23 = (v22 + v21) / 256; // 0x1e4777a
                unsigned char v24 = (char)v23 ^ -128; // 0x1e4777d
                g2 = (int32_t)v24 | (v23 & -256);
                *(char *)v14 = v24;
                int32_t v25 = g5 + 1; // 0x1e47781
                g5 = v25;
                int32_t v26 = v12 - 1; // 0x1e47782
                while (v26 != 0) {
                    // 0x1e4776b
                    v14 = v25;
                    v20 += 2;
                    v21 = (int32_t)*(int16_t *)v20;
                    v22 = v21 >> 31 & 255;
                    g7 = v22;
                    v23 = (v22 + v21) / 256;
                    v24 = (char)v23 ^ -128;
                    g2 = (int32_t)v24 | (v23 & -256);
                    *(char *)v14 = v24;
                    v25 = g5 + 1;
                    g5 = v25;
                    v26--;
                }
            }
        }
        int32_t * pMem = (int32_t *)a1; // 0x1e477aa
        int32_t * hMem2 = GlobalHandle(pMem); // 0x1e477aa
        g2 = (int32_t)hMem2;
        g2 = GlobalUnlock(hMem2);
        int32_t * hMem3 = GlobalHandle(pMem); // 0x1e477ba
        g2 = (int32_t)hMem3;
        GlobalFree(hMem3);
        g2 = v14;
        result = v14;
    } else {
        // 0x1e4771b
        if (g484 != 0) {
            // 0x1e47724
            g2 = MessageBoxA(NULL, "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.", "WavMix32", 64);
        }
        // 0x1e47738
        *(int32_t *)(g9 - 4) = a1;
        int32_t v27 = (int32_t)GlobalHandle(&g708); // 0x1e4773b
        g2 = v27;
        *(int32_t *)(g9 - 4) = v27;
        g2 = GlobalUnlock(&g708);
        *(int32_t *)(g9 - 4) = a1;
        int32_t v28 = (int32_t)GlobalHandle(&g708); // 0x1e4774b
        g2 = v28;
        *(int32_t *)(g9 - 4) = v28;
        GlobalFree(&g708);
        g2 = 0;
        result = 0;
    }
    goto lab_0x1e477c9;
  lab_0x1e476b8:;
    int32_t * pMem2 = (int32_t *)a1; // 0x1e476bb
    int32_t * hMem4 = GlobalHandle(pMem2); // 0x1e476bb
    g2 = (int32_t)hMem4;
    g2 = GlobalUnlock(hMem4);
    int32_t * hMem5 = GlobalHandle(pMem2); // 0x1e476cb
    g2 = (int32_t)hMem5;
    GlobalFree(hMem5);
    g2 = 0;
    result = 0;
    goto lab_0x1e477c9;
}

// Address range: 0x1e477d2 - 0x1e47940
int32_t function_1e477d2(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    uint32_t v1 = a2 & 0xffff; // 0x1e477d6
    int32_t v2 = (g4 & -0x10000) | v1; // ebx
    uint16_t v3 = (int16_t)a3; // 0x1e477db
    int32_t result; // 0x1e4793d
    if (v3 != (int16_t)a2) {
        // 0x1e477ea
        g5 = a5;
        uint32_t v4 = a4 & 0xffff; // 0x1e477ef
        int32_t * v5 = (int32_t *)a5; // 0x1e477f6
        uint32_t v6 = *v5 / v4;
        int32_t v7 = v6 / v1;
        g7 = v6 % v1;
        int32_t v8 = v7; // edi
        int32_t dwBytes = v4 * (a3 & 0xffff) * v7; // 0x1e47807
        g2 = dwBytes;
        *v5 = dwBytes;
        int32_t * hMem = GlobalAlloc(0x2002, dwBytes); // 0x1e47812
        g2 = (int32_t)hMem;
        int32_t * v9 = GlobalLock(hMem); // 0x1e47819
        int32_t v10 = (int32_t)v9; // 0x1e47819
        g2 = v10;
        if (v9 != NULL) {
            // 0x1e47869
            if (v3 > (int16_t)v2) {
                if ((int16_t)a4 != 1) {
                    // 0x1e4789a
                    g5 = a1;
                    g7 = v10;
                    int32_t v11 = v8; // 0x1e4789f
                    g2 = v11;
                    if (v11 != 0) {
                        uint16_t v12 = *(int16_t *)a1; // 0x1e478a6
                        g2 = (int32_t)v12 | (v11 & -0x10000);
                        *(int16_t *)v10 = v12;
                        int32_t v13 = g7 + 2; // 0x1e478ac
                        int32_t v14 = g5; // 0x1e478af
                        g5 = v14 + 2;
                        *(int16_t *)v13 = *(int16_t *)v14;
                        int32_t v15 = v13 + 2; // 0x1e478b8
                        g7 = v15;
                        int32_t v16 = v11 - 1; // 0x1e478bb
                        g2 = v16;
                        while (v16 != 0) {
                            // 0x1e478a6
                            v12 = *(int16_t *)g5;
                            g2 = (int32_t)v12 | (v16 & -0x10000);
                            *(int16_t *)v15 = v12;
                            v13 = g7 + 2;
                            v14 = g5;
                            g5 = v14 + 2;
                            *(int16_t *)v13 = *(int16_t *)v14;
                            v15 = v13 + 2;
                            g7 = v15;
                            v16--;
                            g2 = v16;
                        }
                    }
                } else {
                    // 0x1e47876
                    g2 = a1;
                    g7 = v10;
                    int32_t v17 = v8; // 0x1e4787b
                    g5 = v17;
                    if (v17 != 0) {
                        unsigned char v18 = *(char *)a1; // 0x1e47886
                        g5 = (int32_t)v18 | (v17 & -256);
                        *(char *)v10 = v18;
                        int32_t v19 = g7 + 1; // 0x1e4788a
                        int32_t v20 = g2; // 0x1e4788b
                        g2 = v20 + 1;
                        *(char *)v19 = *(char *)v20;
                        int32_t v21 = v19 + 1; // 0x1e47890
                        g7 = v21;
                        int32_t v22 = v17 - 1; // 0x1e47891
                        g5 = v22;
                        while (v22 != 0) {
                            // 0x1e47886
                            v10 = v21;
                            v18 = *(char *)g2;
                            g5 = (int32_t)v18 | (v22 & -256);
                            *(char *)v10 = v18;
                            v19 = g7 + 1;
                            v20 = g2;
                            g2 = v20 + 1;
                            *(char *)v19 = *(char *)v20;
                            v21 = v19 + 1;
                            g7 = v21;
                            v22--;
                            g5 = v22;
                        }
                    }
                }
            } else {
                // 0x1e478c4
                g5 = a1;
                v2 = v10;
                int32_t v23 = v8; // 0x1e478ce
                g2 = v23;
                v8 = v23 - 1;
                if ((int16_t)a4 != 1) {
                    if (v23 != 0) {
                        int32_t v24 = a1; // 0x1e47902
                        int32_t v25 = (int32_t)*(int16_t *)(v24 + 2); // 0x1e478f9
                        g2 = v25;
                        int32_t v26 = (int32_t)*(int16_t *)v24 + v25; // 0x1e47900
                        g5 = v24 + 4;
                        int32_t v27 = v26 >> 31; // 0x1e47905
                        g7 = v27;
                        *(int16_t *)v10 = (int16_t)((v26 - v27) / 2);
                        int32_t v28 = v2 + 2; // 0x1e4790d
                        int32_t v29 = v8; // 0x1e47910
                        g2 = v29;
                        while (v29 != 0) {
                            // 0x1e478f9
                            v24 = g5;
                            v25 = (int32_t)*(int16_t *)(v24 + 2);
                            g2 = v25;
                            v26 = (int32_t)*(int16_t *)v24 + v25;
                            g5 = v24 + 4;
                            v27 = v26 >> 31;
                            g7 = v27;
                            *(int16_t *)v28 = (int16_t)((v26 - v27) / 2);
                            v28 += 2;
                            v29--;
                            g2 = v29;
                        }
                    }
                } else {
                    if (v23 != 0) {
                        int32_t v30 = a1; // 0x1e478e0
                        int32_t v31 = (int32_t)*(char *)(v30 + 1); // 0x1e478d7
                        g2 = v31;
                        unsigned char v32 = *(char *)v30; // 0x1e478db
                        g5 = v30 + 2;
                        g7 = 0;
                        *(char *)v10 = (char)(((int32_t)v32 + v31) / 2);
                        int32_t v33 = v2 + 1; // 0x1e478ea
                        int32_t v34 = v8; // 0x1e478eb
                        g2 = v34;
                        while (v34 != 0) {
                            // 0x1e478d7
                            v30 = g5;
                            v31 = (int32_t)*(char *)(v30 + 1);
                            g2 = v31;
                            v32 = *(char *)v30;
                            g5 = v30 + 2;
                            g7 = 0;
                            *(char *)v33 = (char)(((int32_t)v32 + v31) / 2);
                            v33++;
                            v34--;
                            g2 = v34;
                        }
                    }
                }
            }
            int32_t * pMem = (int32_t *)a1; // 0x1e4791a
            int32_t * hMem2 = GlobalHandle(pMem); // 0x1e4791a
            g2 = (int32_t)hMem2;
            g2 = GlobalUnlock(hMem2);
            int32_t * hMem3 = GlobalHandle(pMem); // 0x1e4792a
            g2 = (int32_t)hMem3;
            GlobalFree(hMem3);
            g2 = v10;
            result = v10;
        } else {
            // 0x1e47825
            if (g484 != 0) {
                // 0x1e4782e
                g2 = MessageBoxA(NULL, "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.", "WavMix32", 64);
            }
            // 0x1e47842
            *(int32_t *)(g9 - 4) = a1;
            int32_t v35 = (int32_t)GlobalHandle(&g708); // 0x1e47845
            g2 = v35;
            *(int32_t *)(g9 - 4) = v35;
            g2 = GlobalUnlock(&g708);
            *(int32_t *)(g9 - 4) = a1;
            int32_t v36 = (int32_t)GlobalHandle(&g708); // 0x1e47855
            g2 = v36;
            *(int32_t *)(g9 - 4) = v36;
            GlobalFree(&g708);
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e477e2
        g2 = a1;
        result = a1;
    }
    // 0x1e47939
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e47940 - 0x1e479ca
int32_t function_1e47940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g6; // 0x1e4794c
    if (a4 != 1) {
        // 0x1e4798b
        if (a5 < 1) {
            // 0x1e479c1
            g6 = v1;
            return g2;
        }
        int64_t v2 = a3; // 0x1e479b3
        int32_t v3 = a5;
        while (true) {
            // 0x1e47998
            g2 = 0;
            int32_t v4; // 0x1e479b2
            if (a3 > 0) {
                // 0x1e479a4
                g5 = a3;
                int32_t v5 = a2; // 0x1e479ac
                int32_t v6 = (int32_t)*(int16_t *)v5; // 0x1e479aa
                g2 = v6;
                int32_t v7 = a3 - 1; // 0x1e479af
                g5 = v7;
                while (v7 != 0) {
                    // 0x1e479a7
                    v5 += 2 * a5;
                    v6 += (int32_t)*(int16_t *)v5;
                    g2 = v6;
                    v7--;
                    g5 = v7;
                }
                v4 = v6;
            } else {
                v4 = 0;
            }
            int64_t v8 = 0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4; // 0x1e479b3
            int64_t v9 = v8 / v2; // 0x1e479b3
            g2 = v9;
            g7 = v8 % v2;
            g5 = a1;
            int32_t v10 = v3 - 1; // 0x1e479b9
            *(int16_t *)a1 = (int16_t)v9;
            if (v10 == 0) {
                // break -> 0x1e479c1
                break;
            }
            // 0x1e479b2
            v3 = v10;
            a2 += 2;
        }
        // 0x1e479c1
        g6 = v1;
        return g2;
    }
    // 0x1e4794f
    if (a5 < 1) {
        // 0x1e479c1
        g6 = v1;
        return g2;
    }
    int32_t v11 = a5; // edi
    int64_t v12 = a3; // 0x1e47979
    while (true) {
        // 0x1e47958
        g5 = a2;
        g2 = 0;
        int32_t v13; // 0x1e47978
        if (a3 > 0) {
            int32_t v14 = a2; // 0x1e47971
            int32_t v15 = v14 + a5; // 0x1e47971
            g5 = v15;
            int32_t v16 = (int32_t)*(char *)v14 - 128; // 0x1e47973
            g2 = v16;
            v13 = v16;
            while (a3 != 1) {
                // 0x1e47968
                a3--;
                v14 = v15;
                v15 = v14 + a5;
                g5 = v15;
                v16 += (int32_t)*(char *)v14 - 128;
                g2 = v16;
                v13 = v16;
            }
        } else {
            v13 = 0;
        }
        int64_t v17 = 0x100000000 * (int64_t)(v13 >> 31) | (int64_t)v13; // 0x1e47979
        int64_t v18 = v17 / v12; // 0x1e47979
        g7 = v17 % v12;
        unsigned char v19 = (char)v18 ^ -128; // 0x1e4797c
        g2 = (int32_t)v19 | ((int32_t)v18 & -256);
        g5 = a1;
        int32_t v20 = v11 - 1; // 0x1e47984
        v11 = v20;
        *(char *)a1 = v19;
        if (v20 == 0) {
            // break -> 0x1e479c1
            break;
        }
        a2++;
        a1++;
    }
    // 0x1e479c1
    g6 = v1;
    return g2;
}

// Address range: 0x1e479ca - 0x1e47a7f
int32_t function_1e479ca(int32_t a1, int32_t a2, uint32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g4; // 0x1e479d4
    int32_t v2 = g6; // 0x1e479d6
    if (a4 == 1) {
        // 0x1e479d9
        if (a5 < 1) {
            // 0x1e47a76
            g6 = v2;
            g4 = v1;
            return g2;
        }
        int64_t v3 = a3; // 0x1e479fe
        int32_t v4 = v1; // 0x1e479f0
        int32_t v5 = a5;
        while (true) {
            // 0x1e479ea
            g5 = a1;
            g2 = a2;
            unsigned char v6 = *(char *)a2; // 0x1e479f0
            int32_t v7 = v6; // 0x1e479f0
            int32_t v8 = v7 | (v4 & -256); // ebx
            g2 = (int32_t)*(char *)(a2 + a5) - v7;
            *(char *)a1 = v6;
            int32_t v9 = g2; // 0x1e479fd
            int64_t v10 = 0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9; // 0x1e479fe
            int32_t v11 = v10 / v3; // 0x1e479fe
            g2 = v11;
            g7 = v10 % v3;
            int32_t v12 = g5 + a5; // 0x1e47a01
            g5 = v12;
            if (a3 > 1) {
                // 0x1e47a09
                g7 = a3 - 1;
                int32_t v13 = v8; // 0x1e47a0d
                unsigned char v14 = (char)v13 + (char)v11; // 0x1e47a0d
                v8 = (int32_t)v14 | (v13 & -256);
                *(char *)v12 = v14;
                int32_t v15 = g5 + a5; // 0x1e47a11
                g5 = v15;
                int32_t v16 = g7 - 1; // 0x1e47a13
                g7 = v16;
                while (v16 != 0) {
                    // 0x1e47a0d
                    v13 = v8;
                    v14 = (char)v13 + (char)g2;
                    v8 = (int32_t)v14 | (v13 & -256);
                    *(char *)v15 = v14;
                    v15 = g5 + a5;
                    g5 = v15;
                    v16 = g7 - 1;
                    g7 = v16;
                }
            }
            int32_t v17 = v5 - 1; // 0x1e47a19
            if (v17 == 0) {
                // break -> 0x1e47a76
                break;
            }
            // 0x1e47a16
            v4 = v8;
            a1++;
            v5 = v17;
            a2++;
        }
        // 0x1e47a76
        g6 = v2;
        g4 = v1;
        return g2;
    }
    // 0x1e47a20
    g2 = a2;
    g5 = a1;
    if (a5 < 1) {
        // 0x1e47a76
        g6 = v2;
        g4 = v1;
        return g2;
    }
    int32_t v18 = 2 * a5; // 0x1e47a40
    int32_t v19 = a3 - 2; // 0x1e47a6439
    int32_t v20 = a5;
    while (true) {
        int32_t v21 = a1 + v18; // 0x1e47a40
        int32_t v22 = v21; // edi
        int16_t * v23 = (int16_t *)a2; // 0x1e47a43
        int32_t v24 = (int32_t)*v23; // 0x1e47a43
        g5 = v24;
        int32_t v25 = (int32_t)*(int16_t *)v21 - v24; // 0x1e47a49
        g2 = (0x100000000 * (int64_t)(v25 >> 31) | (int64_t)v25) / (int64_t)a3;
        uint16_t v26 = *v23; // 0x1e47a56
        g7 = (int32_t)v26 | (a2 & -0x10000);
        *(int16_t *)a1 = v26;
        if (a3 > 1) {
            int32_t v27 = g2 + g5; // 0x1e47a6238
            g5 = v27;
            g7 = v19;
            *(int16_t *)v22 = (int16_t)v27;
            int32_t v28 = v22 + v18; // 0x1e47a6844
            if (v19 != 0) {
                int32_t v29 = g2 + g5; // 0x1e47a62
                g5 = v29;
                int32_t v30 = g7 - 1; // 0x1e47a64
                g7 = v30;
                *(int16_t *)v28 = (int16_t)v29;
                int32_t v31 = v28 + v18; // 0x1e47a68
                while (v30 != 0) {
                    // 0x1e47a62
                    v29 = g2 + g5;
                    g5 = v29;
                    v30 = g7 - 1;
                    g7 = v30;
                    *(int16_t *)v31 = (int16_t)v29;
                    v31 += v18;
                }
            }
        }
        int32_t v32 = v20 - 1; // 0x1e47a71
        if (v32 == 0) {
            // break -> 0x1e47a76
            break;
        }
        v20 = v32;
        a2 += 2;
        a1 += 2;
    }
    // 0x1e47a76
    g6 = v2;
    g4 = v1;
    return g2;
}

