#include "pinball.h"

// Address range: 0x1e47a7f - 0x1e47c1e
int32_t function_1e47a7f(int32_t result, uint32_t a2, uint32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x1e47a7f
    g5 = a2;
    if (a3 == a2) {
        // 0x1e47a91
        g2 = result;
        // 0x1e47c15
        return result;
    }
    int32_t v1 = a5 & 0xffff; // 0x1e47a9e
    int32_t v2 = a4 & 0xffff; // 0x1e47aa2
    g2 = v2;
    int32_t v3 = v1 * v2; // 0x1e47aa6
    g8 = v3;
    int32_t * v4 = (int32_t *)a6; // 0x1e47aa9
    uint32_t v5 = *v4 / v3;
    g2 = v5;
    int32_t v6;
    int32_t v7; // 0x1e47ade
    if (a3 < a2) {
        uint64_t v8 = (int64_t)v5; // 0x1e47aab
        g4 = 0;
        v6 = a2 / a3;
        uint64_t v9 = (int64_t)v6; // 0x1e47ad8
        v7 = v8 / v9;
        g2 = v7;
        g7 = v8 % v9;
    } else {
        int32_t v10 = a3 / a2;
        g7 = a3 % a2;
        g4 = v10;
        int32_t v11 = v10 * v5; // 0x1e47ac8
        g2 = v11;
        v7 = v11;
        v6 = 0;
    }
    int32_t dwBytes = v7 * v3; // 0x1e47ae7
    g2 = dwBytes;
    *v4 = dwBytes;
    int32_t * hMem = GlobalAlloc(0x2002, dwBytes); // 0x1e47af2
    g2 = (int32_t)hMem;
    int32_t * v12 = GlobalLock(hMem); // 0x1e47af9
    int32_t result2 = (int32_t)v12; // 0x1e47af9
    g2 = result2;
    g6 = result2;
    if (v12 == NULL) {
        // 0x1e47b05
        if (g484 != 0) {
            // 0x1e47b0e
            g2 = MessageBoxA(NULL, "Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.", "WavMix32", 64);
        }
        // 0x1e47b22
        *(int32_t *)(g9 - 4) = result;
        int32_t v13 = (int32_t)GlobalHandle(&g708); // 0x1e47b25
        g2 = v13;
        *(int32_t *)(g9 - 4) = v13;
        g2 = GlobalUnlock(&g708);
        *(int32_t *)(g9 - 4) = result;
        int32_t v14 = (int32_t)GlobalHandle(&g708); // 0x1e47b35
        g2 = v14;
        *(int32_t *)(g9 - 4) = v14;
        GlobalFree(&g708);
        g2 = 0;
        // 0x1e47c15
        return 0;
    }
    // 0x1e47b49
    g2 = result;
    int32_t v15 = g4; // 0x1e47b52
    if (v15 < 1) {
        int32_t v16 = v7 - 1; // 0x1e47baa
        g5 = v16;
        g4 = v7 - 2;
        int32_t v17;
        if (v16 != 0) {
            int32_t v18 = g8 * v6; // 0x1e47bb5
            g2 = v18;
            int32_t v19 = result;
            g2 = v1;
            g5 = v2;
            *(int32_t *)(g9 - 4) = v1;
            *(int32_t *)(g9 - 8) = g5;
            *(int32_t *)(g9 - 12) = v6;
            *(int32_t *)(g9 - 16) = v19;
            *(int32_t *)(g9 - 20) = g6;
            g6 += g8;
            function_1e47940((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            g2 = v18;
            int32_t v20 = g4; // 0x1e47bd6
            g5 = v20;
            g4 = v20 - 1;
            int32_t v21 = v19 + v18; // 0x1e47bd9
            v17 = v21;
            while (v20 != 0) {
                // 0x1e47bbb
                v19 = v21;
                g2 = v1;
                g5 = v2;
                *(int32_t *)(g9 - 4) = v1;
                *(int32_t *)(g9 - 8) = g5;
                *(int32_t *)(g9 - 12) = v6;
                *(int32_t *)(g9 - 16) = v19;
                *(int32_t *)(g9 - 20) = g6;
                g6 += g8;
                function_1e47940((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                g2 = v18;
                v20 = g4;
                g5 = v20;
                g4 = v20 - 1;
                v21 = v19 + v18;
                v17 = v21;
            }
        } else {
            v17 = result;
        }
        // 0x1e47be0
        if (g8 >= 1) {
            int32_t v22 = v17;
            g2 = v22;
            unsigned char v23 = *(char *)v22; // 0x1e47bea
            g2 = (int32_t)v23 | (v22 & -256);
            *(char *)g6 = v23;
            int32_t v24 = g6 + 1; // 0x1e47bee
            g6 = v24;
            int32_t v25 = g8 - 1; // 0x1e47bef
            g8 = v25;
            while (v25 != 0) {
                // 0x1e47be4
                v22++;
                g2 = v22;
                v23 = *(char *)v22;
                g2 = (int32_t)v23 | (v22 & -256);
                *(char *)v24 = v23;
                v24 = g6 + 1;
                g6 = v24;
                v25 = g8 - 1;
                g8 = v25;
            }
        }
        goto lab_0x1e47bf2;
    } else {
        int32_t v26 = v5 - 1; // 0x1e47b59
        g2 = v26;
        if (v26 == 0) {
            goto lab_0x1e47b90;
        } else {
            int32_t v27 = v5 - 2;
            g2 = v1;
            g5 = v2;
            *(int32_t *)(g9 - 4) = v1;
            *(int32_t *)(g9 - 8) = g5;
            *(int32_t *)(g9 - 12) = g4;
            *(int32_t *)(g9 - 16) = result;
            *(int32_t *)(g9 - 20) = g6;
            function_1e479ca(v27, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            int32_t v28 = g4; // 0x1e47b78
            g5 = v27;
            int32_t v29 = g8 + result; // 0x1e47b7d
            int32_t v30 = g8 * v28; // 0x1e47b83
            g2 = v30;
            int32_t v31 = g6 + v30; // 0x1e47b86
            g6 = v31;
            while (v27 != 0) {
                // 0x1e47b64
                result = v29;
                v27--;
                g2 = v1;
                g5 = v2;
                *(int32_t *)(g9 - 4) = v1;
                *(int32_t *)(g9 - 8) = g5;
                *(int32_t *)(g9 - 12) = g4;
                *(int32_t *)(g9 - 16) = result;
                *(int32_t *)(g9 - 20) = g6;
                function_1e479ca(v27, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                v28 = g4;
                g5 = v27;
                v29 = g8 + result;
                v30 = g8 * v28;
                g2 = v30;
                v31 = g6 + v30;
                g6 = v31;
            }
            if (v28 < 1) {
                goto lab_0x1e47bf2;
            } else {
                result = v29;
                v15 = v28;
                result2 = v31;
                goto lab_0x1e47b90;
            }
        }
    }
  lab_0x1e47bf2:
    // 0x1e47bf2
    *(int32_t *)(g9 - 4) = result;
    int32_t v32 = (int32_t)GlobalHandle(&g708); // 0x1e47bf5
    g2 = v32;
    *(int32_t *)(g9 - 4) = v32;
    g2 = GlobalUnlock(&g708);
    *(int32_t *)(g9 - 4) = result;
    int32_t v33 = (int32_t)GlobalHandle(&g708); // 0x1e47c05
    g2 = v33;
    *(int32_t *)(g9 - 4) = v33;
    GlobalFree(&g708);
    g2 = result2;
    // 0x1e47c15
    return result2;
  lab_0x1e47b90:;
    int32_t v34 = v15; // 0x1e47ba220
    int32_t v35 = result2; // 0x1e47b9c16
    while (true) {
        // 0x1e47b90
        g5 = result;
        int32_t v36; // 0x1e47ba2
        int32_t v37; // 0x1e47b9c17
        if (g8 >= 1) {
            // 0x1e47b97
            g7 = g8;
            int32_t v38 = result; // 0x1e47b9b
            unsigned char v39 = *(char *)v38; // 0x1e47b99
            g2 = (g2 & -256) | (int32_t)v39;
            g5 = v38 + 1;
            *(char *)v35 = v39;
            int32_t v40 = g6 + 1; // 0x1e47b9e
            g6 = v40;
            int32_t v41 = g7 - 1; // 0x1e47b9f
            g7 = v41;
            while (v41 != 0) {
                // 0x1e47b99
                v38 = g5;
                v39 = *(char *)v38;
                g2 = (g2 & -256) | (int32_t)v39;
                g5 = v38 + 1;
                *(char *)v40 = v39;
                v40 = g6 + 1;
                g6 = v40;
                v41 = g7 - 1;
                g7 = v41;
            }
            // 0x1e47ba2
            v36 = g4;
            v37 = v40;
        } else {
            v36 = v34;
            v37 = v35;
        }
        int32_t v42 = v36 - 1; // 0x1e47ba2
        g4 = v42;
        if (v42 == 0) {
            // break -> 0x1e47bf2
            break;
        }
        v34 = v42;
        v35 = v37;
    }
    goto lab_0x1e47bf2;
}

// Address range: 0x1e47c1e - 0x1e47cbc
int32_t function_1e47c1e(int32_t a1, int32_t a2, int32_t result, int32_t a4) {
    int32_t v1 = g3; // 0x1e47c1e
    int32_t v2 = g8; // 0x1e47c22
    int32_t v3 = g6; // 0x1e47c23
    g6 = a2;
    uint16_t v4 = *(int16_t *)(a1 + 2); // 0x1e47c2a
    int32_t v5 = (g2 & -0x10000) | (int32_t)v4; // 0x1e47c2a
    g2 = v5;
    if (*(int16_t *)(a2 + 2) != v4) {
        goto lab_0x1e47c4b;
    } else {
        int32_t v6 = *(int32_t *)(a1 + 4); // 0x1e47c34
        g2 = v6;
        if (*(int32_t *)(a2 + 4) != v6) {
            v5 = v6;
            goto lab_0x1e47c4b;
        } else {
            uint16_t v7 = *(int16_t *)(a1 + 14); // 0x1e47c3c
            int32_t v8 = (int32_t)v7 | (v6 & -0x10000); // 0x1e47c3c
            g2 = v8;
            if (*(int16_t *)(a2 + 14) != v7) {
                v5 = v8;
                goto lab_0x1e47c4b;
            } else {
                // 0x1e47c46
                g2 = result;
                goto lab_0x1e47cb5;
            }
        }
    }
  lab_0x1e47c4b:;
    int32_t v9 = (int32_t)*(int16_t *)(a1 + 14) | (v5 & -0x10000); // 0x1e47c4b
    g2 = v9;
    int32_t v10 = (g5 & -0x10000) | (int32_t)*(int16_t *)(a2 + 14); // 0x1e47c52
    g5 = v10;
    int32_t v11 = function_1e47681(result, v10, v9, a4, v3, v2, g4, v1); // 0x1e47c5c
    g2 = v11;
    if (v11 != 0) {
        int32_t v12 = g8; // 0x1e47c69
        int32_t v13 = g5 & -0x10000; // 0x1e47c6e
        int32_t v14 = v13 | (int32_t)(*(int16_t *)(v12 + 14) / 8); // 0x1e47c6e
        g5 = v14;
        int32_t v15 = (g7 & -0x10000) | (int32_t)*(int16_t *)(v12 + 2); // 0x1e47c72
        g7 = v15;
        int32_t v16 = (int32_t)*(int16_t *)(g6 + 2) | v13; // 0x1e47c77
        g5 = v16;
        int32_t v17 = function_1e477d2(v11, v16, v15, v14, g4); // 0x1e47c7e
        g2 = v17;
        if (v17 != 0) {
            int32_t v18 = g8; // 0x1e47c8b
            int32_t v19 = g5 & -0x10000; // 0x1e47c8b
            int32_t v20 = v19 | (int32_t)*(int16_t *)(v18 + 2); // 0x1e47c8b
            g5 = v20;
            int32_t v21 = (int32_t)(*(int16_t *)(v18 + 14) / 8) | v19; // 0x1e47c95
            g5 = v21;
            int32_t v22 = *(int32_t *)(v18 + 4); // 0x1e47c9a
            int32_t v23 = function_1e47a7f(v17, *(int32_t *)(g6 + 4), v22, v21, v20, g4); // 0x1e47ca1
            g5 = v23;
            g2 = v23;
            result = v23;
        } else {
            // 0x1e47c87
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e47c65
        g2 = 0;
        result = 0;
    }
    goto lab_0x1e47cb5;
  lab_0x1e47cb5:
    // 0x1e47cb5
    g8 = *(int32_t *)(g9 + 4);
    g3 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e47cbc - 0x1e482ce
int32_t function_1e47cbc(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    // 0x1e47cbc
    int32_t v1; // bp-136
    int32_t v2 = v1; // 0x1e47cbf
    g8 = 0;
    char * lpOut = NULL; // bp-12
    int32_t v3; // 0x1e47d1b
    if (a1 == 0) {
        goto lab_0x1e47ce9;
    } else {
        // 0x1e47cd7
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e47ce9;
        } else {
            // 0x1e47cde
            if (*(int16_t *)(a1 + 444) == 0x5432) {
                // 0x1e47cde
                v3 = a1;
                goto lab_0x1e47d17;
            } else {
                goto lab_0x1e47ce9;
            }
        }
    }
  lab_0x1e47ce9:
    // 0x1e47ce9
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    int32_t v4 = MessageBoxA(NULL, (char *)(int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48); // 0x1e47d11
    g2 = v4;
    v3 = 0;
    g2 = v4;
    goto lab_0x1e47d17;
  lab_0x1e47d17:
    // 0x1e47d17
    g2 &= -0x10000;
    g601 = (struct tWAVEFORMATEX *)v3;
    if (v3 != 0) {
        // 0x1e47d2a
        g2 = v3;
        g2 = (int32_t)*(int16_t *)(v3 + 24) | (v3 & -0x10000);
    }
    // 0x1e47d33
    *(int32_t *)(g9 - 4) = 1;
    int32_t v5 = 0; // edi
    *(int32_t *)(g9 - 8) = 0;
    g5 = (int32_t)g601;
    *(int32_t *)(g9 - 12) = v5;
    int32_t v6 = g5 + 380; // 0x1e47d3f
    g5 = v6;
    *(int32_t *)(g9 - 16) = v6;
    int32_t v7; // bp-44
    int32_t v8 = v7; // 0x1e47d46
    g7 = v8;
    int32_t v9 = g2 & 0xffff; // 0x1e47d49
    g2 = v9;
    *(int32_t *)(g9 - 20) = v9;
    *(int32_t *)(g9 - 24) = v8;
    int32_t v10 = waveOutOpen(&g708, (int32_t)&g708, (struct tWAVEFORMATEX *)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e47d4e
    g2 = v10;
    int32_t v11;
    int32_t * v12; // 0x1e47d88
    int32_t result; // 0x1e482cb
    int32_t v13; // 0x1e47d88
    if (v10 == 0) {
        // 0x1e47d7a
        *(int32_t *)(g9 - 4) = 66;
        *(int32_t *)(g9 - 8) = 0x2040;
        int32_t v14 = (int32_t)GlobalAlloc((int32_t)&g708, (int32_t)&g708); // 0x1e47d81
        g2 = v14;
        *(int32_t *)(g9 - 4) = v14;
        v12 = GlobalLock(&g708);
        v13 = (int32_t)v12;
        g2 = v13;
        g4 = v13;
        if (v12 != NULL) {
            if ((a4 & 2) == 0) {
                if ((a4 & 4) == 0) {
                    // 0x1e47f63
                    *(int32_t *)(g9 - 4) = 0x10000;
                    *(int32_t *)(g9 - 8) = 0;
                    *(int32_t *)(g9 - 12) = a2;
                    int32_t v15 = mmioOpenA((char *)&g708, (struct _MMIOINFO *)&g708, (int32_t)&g708); // 0x1e47f6d
                    g2 = v15;
                    g8 = v15;
                    if (v15 != 0) {
                        goto lab_0x1e47fb2;
                    } else {
                        // 0x1e47f79
                        if (g484 != 0) {
                            // 0x1e47f86
                            *(int32_t *)(g9 - 4) = a2;
                            *(int32_t *)(g9 - 8) = (int32_t)"Failed to open wave file %s.";
                            *(int32_t *)(g9 - 12) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                            g2 = wsprintfA((char *)&g708, (char *)&g708);
                            *(int32_t *)(g9 + 8) = 48;
                            *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
                            *(int32_t *)g9 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                            *(int32_t *)(g9 - 4) = 0;
                            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                            v11 = 0;
                        } else {
                            v11 = 0;
                        }
                        goto lab_0x1e481c5;
                    }
                } else {
                    // 0x1e47eff
                    g5 = 18;
                    *(int32_t *)(g9 - 4) = 0;
                    __asm_rep_movsd_memcpy((char *)&v1, (char *)a2, 18);
                    g5 = 0;
                    g2 = v2;
                    *(int32_t *)(g9 - 4) = v2;
                    *(int32_t *)(g9 - 8) = 0;
                    int32_t v16 = mmioOpenA((char *)&g708, (struct _MMIOINFO *)&g708, (int32_t)&g708); // 0x1e47f1a
                    g2 = v16;
                    g8 = v16;
                    if (v16 != 0) {
                        goto lab_0x1e47fb2;
                    } else {
                        // 0x1e47f2a
                        if (g484 != 0) {
                            // 0x1e47f37
                            *(int32_t *)(g9 - 8) = (int32_t)"Failed to open memory file, mmioOpen error=%u.\nMay need to make sure memory is read-write";
                            *(int32_t *)(g9 - 12) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                            g2 = wsprintfA((char *)&g708, (char *)&g708);
                            *(int32_t *)(g9 + 8) = 48;
                            *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
                            *(int32_t *)g9 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                            *(int32_t *)(g9 - 4) = 0;
                            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                            v11 = 0;
                        } else {
                            v11 = 0;
                        }
                        goto lab_0x1e481c5;
                    }
                }
            } else {
                // 0x1e47dc2
                *(int32_t *)(g9 - 4) = (int32_t)"WAVE";
                *(int32_t *)(g9 - 8) = a2;
                *(int32_t *)(g9 - 12) = a3;
                int32_t v17 = (int32_t)FindResourceA(&g708, (char *)&g708, (char *)&g708); // 0x1e47dcd
                g2 = v17;
                *(int32_t *)(g9 - 4) = v17;
                int32_t hModule = g2; // 0x1e47dd4
                *(int32_t *)(g9 - 8) = a3;
                int32_t * v18 = LoadResource((int32_t *)hModule, &g708); // 0x1e47dda
                int32_t v19 = (int32_t)v18; // 0x1e47dda
                g2 = v19;
                *(int32_t *)&lpOut = v19;
                if (v18 != NULL) {
                    // 0x1e47e39
                    g2 = 0;
                    g5 = 18;
                    __asm_rep_stosd_memset((char *)&v1, 0, 18);
                    g5 = 0;
                    *(int32_t *)(g9 - 4) = v19;
                    int32_t * hModule2 = LockResource(&g708); // 0x1e47e4b
                    g2 = 0;
                    if (hModule2 != NULL) {
                        // 0x1e47e8b
                        *(int32_t *)(g9 - 4) = hModule;
                        *(int32_t *)(g9 - 8) = a3;
                        g2 = SizeofResource(hModule2, &g708);
                        v5 = 0;
                        g5 = v2;
                        *(int32_t *)(g9 - 4) = 0;
                        *(int32_t *)(g9 - 8) = v2;
                        *(int32_t *)(g9 - 12) = v5;
                        int32_t v20 = mmioOpenA((char *)0x204d454d, (struct _MMIOINFO *)&g708, (int32_t)&g708); // 0x1e47eaf
                        g2 = v20;
                        int32_t v21 = v5; // 0x1e47eb5
                        g8 = v20;
                        if (v20 != v21) {
                            goto lab_0x1e47fb2;
                        } else {
                            // 0x1e47ebf
                            if (g484 != v21) {
                                // 0x1e47ecb
                                *(int32_t *)(g9 - 8) = (int32_t)"Failed to open resource, mmioOpen error=%u.\nMay need to make sure resource is marked read-write";
                                *(int32_t *)(g9 - 12) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                                g2 = wsprintfA((char *)&g708, (char *)&g708);
                                *(int32_t *)(g9 + 8) = 48;
                                *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
                                *(int32_t *)g9 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                                *(int32_t *)(g9 - 4) = v5;
                                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                                v11 = 0;
                            } else {
                                v11 = 0;
                            }
                            goto lab_0x1e481c5;
                        }
                    } else {
                        // 0x1e47e5b
                        if (g484 != 0) {
                            // 0x1e47e63
                            *(int32_t *)(g9 - 4) = 48;
                            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                            *(int32_t *)(g9 - 12) = (int32_t)"Failed to lock 'WAVE' resource";
                            *(int32_t *)(g9 - 16) = g2;
                            g2 = MessageBoxA(hModule2, (char *)&g708, (char *)&g708, (int32_t)&g708);
                        }
                        // 0x1e47e76
                        *(int32_t *)(g9 - 4) = (int32_t)lpOut;
                        g2 = FreeResource(&g708);
                        lpOut = NULL;
                        v11 = 0;
                        goto lab_0x1e481c5;
                    }
                } else {
                    // 0x1e47de7
                    g2 = a2;
                    g5 = a2 / 0x10000;
                    int32_t v22; // 0x1e47e00
                    if (a2 < 0x10000) {
                        int32_t v23 = a2 & 0xffff; // 0x1e47dfc
                        g2 = v23;
                        *(int32_t *)(g9 - 4) = v23;
                        v22 = g9 - 8;
                        *(int32_t *)v22 = (int32_t)"Failed to open 'WAVE' resource %u.";
                    } else {
                        // 0x1e47df4
                        *(int32_t *)(g9 - 4) = a2;
                        int32_t v24 = g9 - 8; // 0x1e47df5
                        *(int32_t *)v24 = (int32_t)"Failed to open 'WAVE' resource '%s'.";
                        v22 = v24;
                    }
                    // 0x1e47e05
                    *(int32_t *)(v22 - 4) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                    g2 = wsprintfA(lpOut, (char *)&g708);
                    if (g484 != 0) {
                        // 0x1e47e20
                        *(int32_t *)(g9 + 8) = 48;
                        *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
                        *(int32_t *)g9 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                        *(int32_t *)(g9 - 4) = 0;
                        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                        v11 = 0;
                    } else {
                        v11 = 0;
                    }
                    goto lab_0x1e481c5;
                }
            }
        } else {
            // 0x1e47d94
            if (g484 != 0) {
                // 0x1e47d9d
                *(int32_t *)(g9 - 4) = 64;
                *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                *(int32_t *)(g9 - 12) = (int32_t)"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.";
                *(int32_t *)(g9 - 16) = 0;
                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
            }
            // 0x1e47db1
            g2 = 0;
            result = 0;
            goto lab_0x1e482c5;
        }
    } else {
        // 0x1e47d58
        if (g484 != v5) {
            // 0x1e47d60
            *(int32_t *)(g9 - 4) = 48;
            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
            *(int32_t *)(g9 - 12) = (int32_t)"The waveform device can't play this format.";
            *(int32_t *)(g9 - 16) = v5;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
        }
        // 0x1e47d73
        g2 = 0;
        result = 0;
        goto lab_0x1e482c5;
    }
  lab_0x1e482c5:
    // 0x1e482c5
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e47fb2:
    // 0x1e47fb2
    *(int32_t *)(g9 - 4) = 32;
    v5 = 0;
    *(int32_t *)(g9 - 8) = 0;
    int32_t v25; // bp-64
    int32_t v26 = v25; // 0x1e47fb7
    g2 = v26;
    *(int32_t *)(g9 - 12) = v26;
    *(int32_t *)(g9 - 16) = g8;
    int32_t v27 = mmioDescend(0x45564157, (struct _MMCKINFO *)&g708, (struct _MMCKINFO *)&g708, (int32_t)&g708); // 0x1e47fc3
    g2 = v27;
    if (v27 == 0) {
        // 0x1e47ff1
        *(int32_t *)(g9 - 4) = 16;
        g2 = v26;
        *(int32_t *)(g9 - 8) = v26;
        int32_t v28; // bp-40
        int32_t v29 = v28; // 0x1e47ff7
        g5 = v29;
        v28 = 0x20746d66;
        *(int32_t *)(g9 - 12) = v29;
        *(int32_t *)(g9 - 16) = g8;
        int32_t v30 = mmioDescend(v28, (struct _MMCKINFO *)&g708, (struct _MMCKINFO *)&g708, (int32_t)&g708); // 0x1e48003
        g2 = v30;
        if (v30 == 0) {
            // 0x1e48033
            *(int32_t *)(g9 - 4) = 16;
            *(int32_t *)(g9 - 8) = v13;
            *(int32_t *)(g9 - 12) = g8;
            int32_t v31 = mmioRead((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48037
            g2 = v31;
            if (v31 == 16) {
                // 0x1e48068
                if (*(int16_t *)v12 == 1) {
                    // 0x1e48094
                    v5 = 0;
                    g2 = v29;
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = v29;
                    *(int32_t *)(g9 - 12) = g8;
                    mmioAscend((int32_t)&g708, (struct _MMCKINFO *)&g708, (int32_t)&g708);
                    *(int32_t *)(g9 - 4) = 16;
                    g5 = v26;
                    *(int32_t *)(g9 - 8) = v26;
                    g2 = v29;
                    v28 = 0x61746164;
                    *(int32_t *)(g9 - 12) = v29;
                    *(int32_t *)(g9 - 16) = g8;
                    int32_t v32 = mmioDescend(v28, (struct _MMCKINFO *)&g708, (struct _MMCKINFO *)&g708, (int32_t)&g708); // 0x1e480b4
                    g2 = v32;
                    if (v32 == 0) {
                        // 0x1e480e2
                        g2 = 0;
                        int32_t uFlags; // bp-16
                        int32_t v33;
                        if (v33 != 0) {
                            // 0x1e48113
                            *(int32_t *)(g9 - 8) = 0x2002;
                            int32_t v34 = (int32_t)GlobalAlloc(uFlags, (int32_t)&g708); // 0x1e4811b
                            g2 = v34;
                            *(int32_t *)(g9 - 4) = v34;
                            int32_t * hWnd2 = GlobalLock(&g708); // 0x1e48122
                            int32_t v35 = (int32_t)hWnd2; // 0x1e48122
                            g2 = 0;
                            if (hWnd2 != NULL) {
                                int32_t v36 = uFlags; // 0x1e48153
                                g6 = v36;
                                *(int32_t *)(g9 - 4) = v36;
                                *(int32_t *)(g9 - 8) = v35;
                                *(int32_t *)(g9 - 12) = g8;
                                int32_t v37 = mmioRead(v35, (char *)&g708, (int32_t)&g708); // 0x1e4815b
                                g2 = v37;
                                if (v37 == g6) {
                                    // 0x1e48184
                                    *(int32_t *)(g9 - 4) = (int32_t)&uFlags;
                                    g2 = (int32_t)g601;
                                    *(int32_t *)(g9 - 8) = v35;
                                    *(int32_t *)(g9 - 12) = v13;
                                    int32_t v38 = g2 + 380; // 0x1e48191
                                    g2 = v38;
                                    *(int32_t *)(g9 - 16) = v38;
                                    int32_t hWnd = function_1e47c1e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48197
                                    g2 = 0;
                                    if (hWnd != 0) {
                                        // 0x1e4822e
                                        *(int32_t *)(g9 - 4) = 0;
                                        *(int32_t *)(g9 - 8) = g8;
                                        g2 = mmioClose(hWnd, (int32_t)&g708);
                                        char * v39 = lpOut; // 0x1e48237
                                        if (v39 != NULL) {
                                            // 0x1e4823d
                                            *(int32_t *)(g9 - 4) = (int32_t)v39;
                                            g2 = FreeResource(&g708);
                                        }
                                        // 0x1e48246
                                        *(int32_t *)(v13 + 16) = hWnd;
                                        g2 = 0;
                                        g5 = uFlags;
                                        *(int32_t *)(g9 - 4) = 16;
                                        *(int32_t *)(v13 + 20) = g5;
                                        *(int32_t *)(v13 + 32) = g2;
                                        *(int32_t *)(v13 + 36) = g2;
                                        *(int32_t *)(v13 + 28) = g2;
                                        *(int16_t *)(v13 + 64) = 0x5432;
                                        int32_t v40 = (int32_t)g601 + 380; // 0x1e4826a
                                        g2 = v40;
                                        *(int32_t *)(g9 - 4) = v40;
                                        *(int32_t *)(g9 - 8) = v13;
                                        function_1e3e040((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                                        g2 = a2;
                                        g5 = a2 / 0x10000;
                                        if (a2 >= 0x10000) {
                                            // 0x1e4829e
                                            *(int32_t *)(g9 + 8) = a2;
                                            int32_t v41 = lstrlenA((char *)&g708); // 0x1e482a1
                                            int32_t v42 = (v41 > 15 ? v41 - 15 : 0) + a2; // 0x1e482b6
                                            g5 = v42;
                                            g2 = v13 + 48;
                                            *(int32_t *)(g9 - 4) = v42;
                                            *(int32_t *)(g9 - 8) = g2;
                                            lstrcpyA((char *)&g708, (char *)&g708);
                                        } else {
                                            int32_t v43 = a2 & 0xffff; // 0x1e48286
                                            g2 = v43;
                                            *(int32_t *)(g9 + 8) = v43;
                                            g5 = v13 + 48;
                                            *(int32_t *)(g9 + 4) = (int32_t)"res#%u";
                                            *(int32_t *)g9 = g5;
                                            wsprintfA((char *)&g708, (char *)&g708);
                                        }
                                        // 0x1e482c3
                                        g2 = v13;
                                        result = v13;
                                        goto lab_0x1e482c5;
                                    } else {
                                        // 0x1e481aa
                                        if (g484 != 0) {
                                            // 0x1e481b2
                                            *(int32_t *)(g9 - 4) = 48;
                                            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                                            *(int32_t *)(g9 - 12) = (int32_t)"Failed to convert wave format.";
                                            *(int32_t *)(g9 - 16) = g2;
                                            int32_t v44 = MessageBoxA((int32_t *)hWnd, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e481bf
                                            g2 = v44;
                                            v11 = hWnd;
                                        } else {
                                            v11 = hWnd;
                                        }
                                        goto lab_0x1e481c5;
                                    }
                                } else {
                                    // 0x1e48165
                                    if (g484 != 0) {
                                        // 0x1e4816e
                                        *(int32_t *)(g9 - 4) = 48;
                                        *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                                        *(int32_t *)(g9 - 12) = (int32_t)"Failed to read data chunk.";
                                        *(int32_t *)(g9 - 16) = 0;
                                        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                                        v11 = v35;
                                    } else {
                                        v11 = v35;
                                    }
                                    goto lab_0x1e481c5;
                                }
                            } else {
                                // 0x1e48132
                                if (g484 != 0) {
                                    // 0x1e4813e
                                    *(int32_t *)(g9 - 4) = 64;
                                    *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                                    *(int32_t *)(g9 - 12) = (int32_t)"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.";
                                    *(int32_t *)(g9 - 16) = g2;
                                    g2 = MessageBoxA(hWnd2, (char *)&g708, (char *)&g708, (int32_t)&g708);
                                    v11 = v35;
                                } else {
                                    v11 = v35;
                                }
                                goto lab_0x1e481c5;
                            }
                        } else {
                            // 0x1e480ef
                            if (g484 != 0) {
                                // 0x1e480fb
                                *(int32_t *)(g9 - 4) = 48;
                                *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                                *(int32_t *)(g9 - 12) = (int32_t)"The data chunk has no data.";
                                *(int32_t *)(g9 - 16) = g2;
                                int32_t v45 = MessageBoxA((int32_t *)uFlags, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48108
                                g2 = v45;
                                v11 = 0;
                            } else {
                                v11 = 0;
                            }
                            goto lab_0x1e481c5;
                        }
                    } else {
                        // 0x1e480be
                        if (g484 != v5) {
                            // 0x1e480ca
                            *(int32_t *)(g9 - 4) = 48;
                            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                            *(int32_t *)(g9 - 12) = (int32_t)"WAVE file has no data chunk.";
                            *(int32_t *)(g9 - 16) = v5;
                            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                            v11 = 0;
                        } else {
                            v11 = 0;
                        }
                        goto lab_0x1e481c5;
                    }
                } else {
                    // 0x1e4806e
                    if (g484 != 0) {
                        // 0x1e4807b
                        *(int32_t *)(g9 - 4) = 48;
                        *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                        *(int32_t *)(g9 - 12) = (int32_t)"The file is not a PCM file.";
                        *(int32_t *)(g9 - 16) = 0;
                        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                        v11 = 0;
                    } else {
                        v11 = 0;
                    }
                    goto lab_0x1e481c5;
                }
            } else {
                // 0x1e48042
                if (g484 != 0) {
                    // 0x1e4804f
                    *(int32_t *)(g9 - 4) = 48;
                    *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                    *(int32_t *)(g9 - 12) = (int32_t)"Failed to read format chunk.";
                    *(int32_t *)(g9 - 16) = 0;
                    g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                    v11 = 0;
                } else {
                    v11 = 0;
                }
                goto lab_0x1e481c5;
            }
        } else {
            // 0x1e4800d
            if (g484 != 0) {
                // 0x1e4801a
                *(int32_t *)(g9 - 4) = 48;
                *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                *(int32_t *)(g9 - 12) = (int32_t)"WAVE file is corrupted.";
                *(int32_t *)(g9 - 16) = 0;
                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                v11 = 0;
            } else {
                v11 = 0;
            }
            goto lab_0x1e481c5;
        }
    } else {
        // 0x1e47fcd
        if (g484 != v5) {
            // 0x1e47fd9
            *(int32_t *)(g9 - 4) = 48;
            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
            *(int32_t *)(g9 - 12) = (int32_t)"This is not a WAVE file.";
            *(int32_t *)(g9 - 16) = v5;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
            v11 = 0;
        } else {
            v11 = 0;
        }
        goto lab_0x1e481c5;
    }
  lab_0x1e481c5:
    // 0x1e481c5
    if (g8 != 0) {
        // 0x1e481c9
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = g8;
        g2 = mmioClose((int32_t)&g708, (int32_t)&g708);
    }
    // 0x1e481f2
    *(int32_t *)(g9 - 4) = v13;
    int32_t v46 = (int32_t)GlobalHandle(&g708); // 0x1e481d7
    g2 = v46;
    *(int32_t *)(g9 - 4) = v46;
    g2 = GlobalUnlock(&g708);
    *(int32_t *)(g9 - 4) = v13;
    int32_t v47 = (int32_t)GlobalHandle(&g708); // 0x1e481e5
    g2 = v47;
    *(int32_t *)(g9 - 4) = v47;
    g2 = (int32_t)GlobalFree(&g708);
    if (v11 != 0) {
        // 0x1e481f8
        *(int32_t *)(g9 - 4) = v11;
        int32_t v48 = (int32_t)GlobalHandle(&g708); // 0x1e481fb
        g2 = v48;
        *(int32_t *)(g9 - 4) = v48;
        g2 = GlobalUnlock(&g708);
        *(int32_t *)(g9 - 4) = v11;
        int32_t v49 = (int32_t)GlobalHandle(&g708); // 0x1e4820b
        g2 = v49;
        *(int32_t *)(g9 - 4) = v49;
        g2 = (int32_t)GlobalFree(&g708);
    }
    char * v50 = lpOut; // 0x1e48218
    if (v50 != NULL) {
        // 0x1e4821e
        *(int32_t *)(g9 - 4) = (int32_t)v50;
        g2 = FreeResource(&g708);
    }
    // 0x1e48227
    g2 = 0;
    result = 0;
    goto lab_0x1e482c5;
}

// Address range: 0x1e482ce - 0x1e4830a
int32_t function_1e482ce(int32_t a1, int32_t a2) {
    // 0x1e482ce
    g2 = a1;
    int32_t result2; // 0x1e482f0
    if (a1 == 0) {
        // 0x1e482d6
        g7 = a2;
        uint16_t v1 = *(int16_t *)(a2 + 14); // 0x1e482da
        g2 = (int32_t)v1 | (a1 & -0x10000);
        int32_t v2 = (int32_t)*(int16_t *)(a2 + 2); // 0x1e482de
        g5 = v2;
        int32_t v3 = v2 * (int32_t)(v1 / 8); // 0x1e482e9
        g2 = v3;
        result2 = *(int32_t *)(a2 + 4) * v3 / 16;
        g2 = result2;
    } else {
        result2 = a1;
    }
    // 0x1e482f3
    g5 = 344;
    int32_t result; // 0x1e48305
    if (result2 < 344) {
        result = 344;
        // 0x1e48305
        g2 = result;
        // 0x1e48307
        return result;
    }
    // 0x1e482fc
    g5 = 0x2b11;
    if (result2 < 0x2b12) {
        // 0x1e48307
        return result2;
    }
    result = 0x2b11;
    // 0x1e48305
    g2 = result;
    // 0x1e48307
    return result;
}

// Address range: 0x1e4830a - 0x1e48372
int32_t function_1e4830a(uint32_t a1) {
    int32_t v1 = g6; // bp-8
    int32_t v2 = v1; // 0x1e4830b
    g6 = a1;
    int32_t v3; // 0x1e48342
    if (a1 == 0) {
        goto lab_0x1e4836b;
    } else {
        unsigned char v4 = *(char *)a1; // 0x1e48316
        g2 = (g2 & -256) | (int32_t)v4;
        if (v4 == 0) {
            goto lab_0x1e4836b;
        } else {
            int32_t v5 = a1; // 0x1e4831c
            while (true) {
                int32_t v6 = (int32_t)*(char *)v5; // 0x1e4831c
                g2 = v6;
                *(int32_t *)(v2 - 4) = v6;
                int32_t v7 = function_1e41750((int32_t)&g708); // 0x1e48320
                g2 = v7;
                if (v7 == 0) {
                    int32_t v8 = (int32_t)*(char *)g6; // 0x1e4832c
                    g2 = v8;
                    *(int32_t *)g9 = v8;
                    int32_t v9 = function_1e41720((int32_t)&g708); // 0x1e48330
                    g2 = v9;
                    if (v9 == 0) {
                        // 0x1e4832c
                        v3 = g6;
                        goto lab_0x1e48342;
                    }
                }
                int32_t v10 = g6 + 1; // 0x1e4833c
                g6 = v10;
                if (*(char *)v10 == 0) {
                    v3 = v10;
                    // break -> 0x1e48342
                    break;
                }
                v2 = g9 + 4;
                v5 = v10;
            }
            goto lab_0x1e48342;
        }
    }
  lab_0x1e4836b:;
    int32_t result = 0;
    goto lab_0x1e4836d;
  lab_0x1e4836d:
    // 0x1e4836d
    g2 = result;
    g6 = *(int32_t *)v2;
    g8 = *(int32_t *)(v2 + 4);
    return result;
  lab_0x1e48342:
    // 0x1e48342
    *(char *)v3 = 0;
    int32_t v11 = g6 - 1; // 0x1e48345
    g6 = v11;
    if (v11 >= a1) {
        while (true) {
            int32_t v12 = (int32_t)*(char *)v11; // 0x1e4834a
            g2 = v12;
            *(int32_t *)(g9 - 4) = v12;
            int32_t v13 = function_1e41720((int32_t)&g708); // 0x1e4834e
            g2 = v13;
            if (v13 == 0) {
                // break -> 0x1e48362
                break;
            }
            // 0x1e4835a
            *(char *)g6 = 0;
            int32_t v14 = g6 - 1; // 0x1e4835d
            g6 = v14;
            if (v14 < a1) {
                // break -> 0x1e48362
                break;
            }
            v11 = v14;
        }
    }
    // 0x1e48362
    *(int32_t *)(g9 - 4) = a1;
    int32_t v15 = lstrlenA((char *)&g708); // 0x1e48363
    v2 = g9;
    result = v15;
    goto lab_0x1e4836d;
}

// Address range: 0x1e48372 - 0x1e48431
int32_t function_1e48372(void) {
    int32_t v1 = g3; // bp-4
    g3 = v1;
    int32_t v2; // bp-56
    int32_t v3 = v2; // 0x1e48375
    int32_t v4 = waveOutGetNumDevs(); // 0x1e4837b
    g2 = v4;
    g6 = v4;
    int32_t v5;
    int32_t result; // 0x1e483ac
    if (v4 != 0) {
        // 0x1e4838b
        g4 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "%d waveOut Devices have been detected on your system.");
        g8 = 0;
        result = MessageBoxA(NULL, (char *)g4, "WavMix32", 64);
        g2 = result;
        if (v4 >= 0) {
            // 0x1e483b6
            int32_t v6; // bp-48
            int32_t v7 = v6; // 0x1e483c7
            uint16_t v8;
            int32_t v9 = (int32_t)v8 & 255; // 0x1e483fc
            while (true) {
              lab_0x1e483b6:
                // 0x1e483b6
                *(int32_t *)(g9 - 4) = 52;
                g2 = v3;
                *(int32_t *)(g9 - 8) = v3;
                *(int32_t *)(g9 - 12) = g8;
                int32_t v10 = waveOutGetDevCapsA((int32_t)&g708, (struct tagWAVEOUTCAPSA *)&g708, (int32_t)&g708); // 0x1e483bd
                g2 = v10;
                if (v10 != 0) {
                    goto lab_0x1e483e2;
                } else {
                    // 0x1e483c7
                    g2 = v7;
                    *(int32_t *)(g9 - 4) = v7;
                    int32_t v11 = function_1e4830a((int32_t)&g708); // 0x1e483cb
                    g2 = v11;
                    if (v11 != 0) {
                        // 0x1e483f5
                        g7 = v7;
                        g5 = v9;
                        g2 = v8 / 256;
                        *(int32_t *)(g9 - 4) = v9;
                        *(int32_t *)(g9 - 8) = g2;
                        *(int32_t *)(g9 - 12) = v7;
                        *(int32_t *)(g9 - 16) = g8;
                        *(int32_t *)(g9 - 20) = (int32_t)"Device %i: %s\n\tVersion %u.%u";
                        *(int32_t *)(g9 - 24) = g4;
                        g2 = wsprintfA((char *)&g708, (char *)&g708);
                        v5 = g9 + 24;
                        goto lab_0x1e48415;
                    } else {
                        goto lab_0x1e483e2;
                    }
                }
            }
        }
    } else {
        result = 0;
    }
  lab_0x1e4842a:
    // 0x1e4842a
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
  lab_0x1e483e2:
    // 0x1e483e2
    g2 = 1;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = g2;
    *(int32_t *)(g9 - 12) = (int32_t)"waveOutGetDevCaps failed (err %u) for device %d";
    *(int32_t *)(g9 - 16) = g4;
    g2 = wsprintfA((char *)&g708, (char *)&g708);
    v5 = g9 + 16;
    goto lab_0x1e48415;
  lab_0x1e48415:
    // 0x1e48415
    *(int32_t *)(v5 - 4) = 64;
    g8++;
    *(int32_t *)(v5 - 8) = (int32_t)"WavMix32";
    *(int32_t *)(v5 - 12) = g4;
    *(int32_t *)(v5 - 16) = 0;
    int32_t v12 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48420
    g2 = v12;
    if (v4 <= g8) {
        result = v12;
        // break -> 0x1e4842a
        goto lab_0x1e4842a;
    }
    goto lab_0x1e483b6;
}

// Address range: 0x1e48431 - 0x1e48479
int32_t function_1e48431(void) {
    int32_t v1 = g8; // 0x1e48431
    int32_t v2 = GetVersion(); // 0x1e48438
    g2 = v2;
    if (v2 > -1) {
        // 0x1e48441
        g2 = (int32_t)"WinNT:";
        // 0x1e48477
        g8 = v1;
        return (int32_t)"WinNT:";
    }
    int32_t v3 = GetVersion(); // 0x1e48448
    g2 = v3;
    if (v3 <= 0xffffffff) {
        int32_t v4 = GetVersion(); // 0x1e48451
        g2 = v4;
        if ((char)v4 >= 4) {
            // 0x1e48457
            g2 = (int32_t)"Win95:";
            // 0x1e48477
            g8 = v1;
            return (int32_t)"Win95:";
        }
    }
    int32_t v5 = GetVersion(); // 0x1e4845e
    g2 = v5;
    if (v5 <= 0xffffffff) {
        // 0x1e48467
        g2 = (int32_t)"Win31:";
        if ((char)GetVersion() < 4) {
            // 0x1e48477
            g8 = v1;
            return (int32_t)"Win31:";
        }
    }
    // 0x1e48472
    g2 = (int32_t)"OS_X:";
    // 0x1e48477
    g8 = v1;
    return (int32_t)"OS_X:";
}

// Address range: 0x1e48479 - 0x1e4851e
int32_t function_1e48479(int32_t a1, int32_t lpString1, int32_t a3) {
    // 0x1e48479
    int32_t lpOut; // bp-64
    int32_t v1 = lpOut; // 0x1e4847c
    g8 = 0;
    int32_t lpString = function_1e48431(); // 0x1e48484
    g2 = lpString;
    int32_t v2 = lstrlenA((char *)lpString); // 0x1e4848a
    int32_t v3 = v2 + 10; // 0x1e48492
    g2 = v3;
    int32_t result; // 0x1e4851b
    if (v3 > a3) {
        // 0x1e4849a
        g2 = 0;
        result = 0;
    } else {
        // 0x1e4849e
        g5 = v1;
        g2 = wsprintfA((char *)&lpOut, "Device%u", a1);
        int32_t phkResult; // bp-8
        g5 = phkResult;
        int32_t v4 = RegOpenKeyA((int32_t *)-0x7ffffffe, "SOFTWARE\\Microsoft\\WaveMix", (int32_t **)&phkResult); // 0x1e484c1
        g2 = v4;
        if (v4 == 0) {
            int32_t lpString2 = function_1e48431(); // 0x1e484cf
            g2 = lpString2;
            lstrcpyA((char *)lpString1, (char *)lpString2);
            g5 = v1;
            int32_t lpData = v2 + lpString1; // 0x1e484e7
            int32_t lpcbData = a3 - v2; // bp-12
            g2 = lpcbData;
            int32_t v5 = RegQueryValueA((int32_t *)phkResult, (char *)&lpOut, (char *)lpData, &lpcbData); // 0x1e484f5
            g2 = v5;
            if (v5 == 0) {
                // 0x1e484ff
                if (lpcbData > 0) {
                    // 0x1e48505
                    g8 = 1;
                }
            }
            // 0x1e4850a
            RegCloseKey((int32_t *)phkResult);
            g2 = g8;
            result = g8;
        } else {
            // 0x1e484cb
            g2 = 0;
            result = 0;
        }
    }
    // 0x1e48515
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e4851e - 0x1e48560
int32_t function_1e4851e(int32_t hKey, char * lpSubKey, int32_t result) {
    // 0x1e4851e
    g5 = hKey;
    int32_t lpData; // bp-20
    int32_t v1 = lpData; // 0x1e48525
    if (hKey == 0) {
        // 0x1e4855a
        g2 = result;
        return result;
    }
    // 0x1e4852c
    int32_t lpcbData; // bp-8
    g2 = lpcbData;
    g7 = v1;
    lpcbData = 10;
    int32_t v2 = RegQueryValueA((int32_t *)hKey, lpSubKey, (char *)&lpData, &lpcbData); // 0x1e4853f
    g2 = v2;
    if (v2 != 0) {
        // 0x1e4855a
        g2 = result;
        return result;
    }
    // 0x1e48549
    g2 = v1;
    int32_t result2 = function_1e3dad0(v1); // 0x1e4854d
    // 0x1e4855a
    g2 = result2;
    return result2;
}

// Address range: 0x1e48560 - 0x1e486fa
int32_t function_1e48560(int32_t a1) {
    // 0x1e48560
    int32_t lpOut; // bp-60
    int32_t v1 = lpOut; // 0x1e48563
    g6 = a1;
    int32_t v2 = *(int32_t *)(a1 + 2); // 0x1e4856c
    g4 = v2;
    int32_t result; // 0x1e486f7
    if ((v2 & 1024) != 0) {
        // 0x1e4857b
        if (*(int32_t *)(a1 + 26) != 0) {
            int32_t v3 = a1 + 20; // 0x1e4858b
            g8 = v3;
            if ((char)v2 > -1) {
                int32_t v4 = (int32_t)g601; // 0x1e485a4
                g2 = v4;
                int32_t v5 = *(int32_t *)(v4 + 24); // 0x1e485a9
                g5 = v5;
                *(int16_t *)v3 = (int16_t)v5;
            } else {
                int32_t v6 = waveOutGetNumDevs(); // 0x1e48590
                g2 = v6;
                int16_t * v7 = (int16_t *)g8; // 0x1e48596
                int32_t v8 = (int32_t)*v7; // 0x1e48596
                g5 = v8;
                if (v6 <= v8) {
                    // 0x1e4859d
                    *v7 = 0;
                }
            }
            int32_t v9 = (int32_t)*(int16_t *)g8; // 0x1e485af
            g2 = v9;
            g5 = v1;
            g2 = wsprintfA((char *)&lpOut, "WaveMix\\Device%u", v9);
            int32_t phkResult; // bp-8
            g5 = phkResult;
            g7 = v1;
            int32_t hKey = *(int32_t *)(g6 + 26); // 0x1e485cd
            int32_t v10 = RegOpenKeyA((int32_t *)hKey, (char *)&lpOut, (int32_t **)&phkResult); // 0x1e485d0
            g2 = v10;
            if (v10 == 0) {
                int32_t v11 = g4; // 0x1e485e1
                int32_t v12; // 0x1e485f9
                if ((v11 & 1) == 0) {
                    int32_t v13 = function_1e4851e(phkResult, "Channels", 1); // 0x1e485f0
                    g2 = v13;
                    *(int16_t *)(g6 + 6) = (int16_t)v13;
                    v12 = g4;
                } else {
                    v12 = v11;
                }
                int32_t v14; // 0x1e48611
                if ((v12 & 2) == 0) {
                    // 0x1e485fe
                    *(int32_t *)(g9 - 4) = 11;
                    *(int32_t *)(g9 - 8) = (int32_t)"SamplesPerSec";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v15 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48608
                    g2 = v15;
                    *(int16_t *)(g6 + 8) = (int16_t)v15;
                    v14 = g4;
                } else {
                    v14 = v12;
                }
                int32_t v16; // 0x1e48629
                if ((v14 & 4) == 0) {
                    // 0x1e48616
                    *(int32_t *)(g9 - 4) = 3;
                    *(int32_t *)(g9 - 8) = (int32_t)"WaveBlocks";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v17 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48620
                    g2 = v17;
                    *(int16_t *)(g6 + 10) = (int16_t)v17;
                    v16 = g4;
                } else {
                    v16 = v14;
                }
                int32_t v18; // 0x1e48641
                if ((v16 & 8) == 0) {
                    // 0x1e4862e
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = (int32_t)"WaveBlockLen";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v19 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48638
                    g2 = v19;
                    *(int16_t *)(g6 + 12) = (int16_t)v19;
                    v18 = g4;
                } else {
                    v18 = v16;
                }
                // 0x1e48641
                *(int16_t *)(g6 + 14) = 1;
                if ((v18 & 32) == 0) {
                    // 0x1e4864c
                    *(int32_t *)(g9 - 4) = 1;
                    *(int32_t *)(g9 - 8) = (int32_t)"Remix";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v20 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48656
                    int32_t v21 = (int32_t)(v20 == 2) + 1; // 0x1e48663
                    g2 = v21;
                    *(int16_t *)(g6 + 16) = (int16_t)v21;
                }
                int32_t v22 = g4; // 0x1e48668
                int32_t v23; // 0x1e4868e
                if ((v22 & 64) == 0) {
                    int32_t v24 = (int32_t)*(int16_t *)g8; // 0x1e4866d
                    g2 = v24;
                    *(int32_t *)(g9 - 4) = v24;
                    int32_t v25 = function_1e45be3((int32_t)&g708); // 0x1e48671
                    g2 = v25;
                    *(int32_t *)(g9 - 4) = v25;
                    *(int32_t *)(g9 - 8) = (int32_t)"GoodWavePos";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v26 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e4867f
                    int32_t v27 = (int32_t)(v26 == 0) + 1; // 0x1e48689
                    g2 = v27;
                    *(int16_t *)(g6 + 18) = (int16_t)v27;
                    v23 = g4;
                } else {
                    v23 = v22;
                }
                int32_t v28; // 0x1e486a6
                if ((v23 & 256) == 0) {
                    // 0x1e48693
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = (int32_t)"ShowDebugDialogs";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v29 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e4869d
                    g2 = v29;
                    *(int16_t *)(g6 + 24) = (int16_t)v29;
                    v28 = g4;
                } else {
                    v28 = v23;
                }
                if ((v28 & 512) == 0) {
                    int32_t v30 = (int32_t)*(int16_t *)(g6 + 10); // 0x1e486ab
                    g2 = v30;
                    *(int32_t *)(g9 - 4) = v30;
                    int32_t v31 = function_1e45bc0((int32_t)&g708); // 0x1e486b0
                    g2 = v31;
                    *(int32_t *)(g9 - 4) = v31;
                    *(int32_t *)(g9 - 8) = (int32_t)"PauseBlocks";
                    *(int32_t *)(g9 - 12) = phkResult;
                    int32_t v32 = function_1e4851e((int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e486be
                    g2 = v32;
                    *(int16_t *)(g6 + 22) = (int16_t)v32;
                }
                // 0x1e486c7
                *(int32_t *)(g6 + 2) = 1023;
                *(int32_t *)(g9 - 4) = 52;
                int32_t v33 = (int32_t)g601; // 0x1e486d0
                g2 = v33;
                g5 = (int32_t)*(int16_t *)g8;
                int32_t v34 = v33 + 124; // 0x1e486d8
                g2 = v34;
                *(int32_t *)(g9 - 8) = v34;
                *(int32_t *)(g9 - 12) = g5;
                int32_t v35 = waveOutGetDevCapsA((int32_t)&g708, (struct tagWAVEOUTCAPSA *)&g708, (int32_t)&g708); // 0x1e486dd
                g2 = v35;
                *(int32_t *)(g9 - 4) = phkResult;
                RegCloseKey(&g708);
                g2 = 1;
                result = 1;
            } else {
                // 0x1e485da
                g2 = 0;
                result = 0;
            }
        } else {
            // 0x1e48581
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e48574
        g2 = 0;
        result = 0;
    }
    // 0x1e486f1
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e486fa - 0x1e487ec
int32_t function_1e486fa(void) {
    int32_t v1 = g3; // bp-4
    int32_t v2 = (int32_t)g601; // 0x1e486fb
    g5 = v2;
    g3 = v1;
    int32_t v3; // bp-56
    g2 = v3;
    int32_t v4 = waveOutGetDevCapsA(*(int32_t *)(v2 + 24), (struct tagWAVEOUTCAPSA *)&v3, 52); // 0x1e48710
    g2 = v4;
    int32_t v5; // bp-48
    int32_t v6 = v5;
    int32_t v7;
    if (v4 != 0) {
        goto lab_0x1e48735;
    } else {
        // 0x1e4871a
        g2 = v6;
        int32_t v8 = function_1e4830a(v6); // 0x1e4871e
        g2 = v8;
        if (v8 != 0) {
            v7 = 0;
            goto lab_0x1e48744;
        } else {
            goto lab_0x1e48735;
        }
    }
  lab_0x1e48735:
    // 0x1e48735
    *(int32_t *)(g9 - 4) = (int32_t)"Unknown Device";
    g2 = v6;
    *(int32_t *)(g9 - 8) = v6;
    v7 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
    goto lab_0x1e48744;
  lab_0x1e48744:
    // 0x1e48744
    g2 = v7;
    int32_t v9 = (int32_t)g601; // 0x1e48744
    g2 = v9;
    int32_t v10 = (int32_t)"cmixit"; // esi
    if (*(int32_t *)(v9 + 428) != 0x1e45d55) {
        // 0x1e4875a
        v10 = (int32_t)"386 mixit";
    }
    // 0x1e4875f
    g2 = v9;
    g5 = (int32_t)"TRUE";
    if (*(int32_t *)(v9 + 420) == 0) {
        // 0x1e48772
        g5 = (int32_t)"FALSE";
    }
    // 0x1e48777
    g2 = v9;
    g7 = (int32_t)"Reset";
    if (*(int32_t *)(v9 + 432) != 0x1e46b43) {
        // 0x1e4878d
        g7 = (int32_t)"NoReset";
    }
    // 0x1e48792
    g2 = v9;
    *(int32_t *)(g9 - 4) = *(int32_t *)(v9 + 404);
    *(int32_t *)(g9 - 8) = (int32_t)*(int16_t *)(g2 + 382);
    int32_t v11 = (int32_t)g601; // 0x1e487a5
    g2 = v11;
    *(int32_t *)(g9 - 12) = *(int32_t *)(v11 + 384);
    *(int32_t *)(g9 - 16) = v10;
    *(int32_t *)(g9 - 20) = *(int32_t *)(g2 + 396);
    *(int32_t *)(g9 - 24) = *(int32_t *)(g2 + 400);
    *(int32_t *)(g9 - 28) = g5;
    *(int32_t *)(g9 - 32) = g7;
    g2 = v6;
    *(int32_t *)(g9 - 36) = v6;
    v10 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
    *(int32_t *)(g9 - 40) = (int32_t)"Using:\t%s.\n\tRemix = %s\n\tGoodGetPos=%s\n\t%d ping pong wave blocks\n\tWave block len = %lu bytes\n\tpfnMixit=%s\n\tSamplesPerSec=%lu,\n\tChannels=%d\n\tPauseBlocks=%d";
    *(int32_t *)(g9 - 44) = v10;
    g2 = wsprintfA((char *)&g708, (char *)&g708);
    *(int32_t *)(g9 + 40) = 64;
    *(int32_t *)(g9 + 36) = (int32_t)"WavMix32";
    *(int32_t *)(g9 + 32) = v10;
    *(int32_t *)(g9 + 28) = 0;
    int32_t result = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e487e1
    g2 = result;
    return result;
}

// Address range: 0x1e487ec - 0x1e48bde
int32_t function_1e487ec(int32_t a1, int32_t dwNewLong, int32_t a3, int32_t a4) {
    // 0x1e487ec
    int32_t v1; // bp-316
    int32_t v2 = v1; // 0x1e487ef
    int32_t lpString; // bp-264
    int32_t v3 = lpString; // 0x1e487f6
    g2 = v3;
    int32_t lpString2 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995"; // edi
    int32_t * hWnd = (int32_t *)a1; // 0x1e4880f
    g2 = GetWindowTextA(hWnd, (char *)&lpString, 256);
    g5 = v3;
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", (char *)&lpString);
    g2 = SetWindowTextA(hWnd, (char *)lpString2);
    g2 = SetWindowLongA(hWnd, -21, dwNewLong);
    g5 = 1;
    g2 = *(int16_t *)(dwNewLong + 6) > 1;
    int32_t * hWnd2 = GetDlgItem(hWnd, 1000); // 0x1e48861
    g2 = (int32_t)hWnd2;
    int32_t v4 = SendMessageA(hWnd2, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48868
    g2 = v4;
    g2 = (int32_t)(*(int16_t *)(dwNewLong + 16) == 0) + 1;
    int32_t * hWnd3 = GetDlgItem(hWnd, 1001); // 0x1e48882
    g2 = (int32_t)hWnd3;
    int32_t v5 = SendMessageA(hWnd3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48889
    g2 = v5;
    g2 = (int32_t)(*(int16_t *)(dwNewLong + 18) == 0) + 1;
    int32_t * hWnd4 = GetDlgItem(hWnd, 1004); // 0x1e488a3
    g2 = (int32_t)hWnd4;
    int32_t v6 = SendMessageA(hWnd4, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e488aa
    g2 = v6;
    g2 = (int32_t)(*(int16_t *)(dwNewLong + 14) == 0) + 1;
    int32_t * hWnd5 = GetDlgItem(hWnd, 1005); // 0x1e488c4
    g2 = (int32_t)hWnd5;
    int32_t v7 = SendMessageA(hWnd5, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e488cb
    g2 = v7;
    g2 = (int32_t)(*(int16_t *)(dwNewLong + 24) == 0) + 1;
    int32_t * hWnd6 = GetDlgItem(hWnd, 1010); // 0x1e488e5
    g2 = (int32_t)hWnd6;
    int32_t v8 = SendMessageA(hWnd6, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e488ec
    g2 = v8;
    int32_t * hWnd7 = GetDlgItem(hWnd, 1005); // 0x1e488fc
    g2 = (int32_t)hWnd7;
    g2 = EnableWindow(hWnd7, (bool)&g708);
    int32_t * hWnd8 = GetDlgItem(hWnd, 1003); // 0x1e4891b
    g2 = (int32_t)hWnd8;
    int32_t v9 = SendMessageA(hWnd8, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48922
    g2 = v9;
    int32_t * hWnd9 = GetDlgItem(hWnd, 1007); // 0x1e48935
    g2 = (int32_t)hWnd9;
    int32_t v10 = SendMessageA(hWnd9, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e4893c
    g2 = v10;
    int32_t * hWnd10 = GetDlgItem(hWnd, 1008); // 0x1e4894f
    g2 = (int32_t)hWnd10;
    int32_t v11 = SendMessageA(hWnd10, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48956
    g2 = v11;
    int32_t * hWnd11 = GetDlgItem(hWnd, 1011); // 0x1e48969
    g2 = (int32_t)hWnd11;
    int32_t nIDDlgItem = 1012; // ebx
    SendMessageA(hWnd11, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = v3;
    int32_t * hWnd12 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e48988
    g2 = (int32_t)hWnd12;
    GetWindowTextA(hWnd12, (char *)&g708, (int32_t)&g708);
    g2 = v3;
    g2 = wsprintfA((char *)lpString2, (char *)&lpString);
    int32_t * hWnd13 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e489af
    g2 = (int32_t)hWnd13;
    nIDDlgItem = 1013;
    SetWindowTextA(hWnd13, (char *)&g708);
    g2 = v3;
    int32_t * hWnd14 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e489ce
    g2 = (int32_t)hWnd14;
    GetWindowTextA(hWnd14, (char *)&g708, (int32_t)&g708);
    g2 = v3;
    g2 = wsprintfA((char *)lpString2, (char *)&lpString);
    int32_t * hWnd15 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e489fb
    g2 = (int32_t)hWnd15;
    nIDDlgItem = 1014;
    SetWindowTextA(hWnd15, (char *)&g708);
    g2 = v3;
    int32_t * hWnd16 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e48a1a
    g2 = (int32_t)hWnd16;
    GetWindowTextA(hWnd16, (char *)&g708, (int32_t)&g708);
    g2 = v3;
    g2 = wsprintfA((char *)lpString2, (char *)&lpString);
    int32_t * hWnd17 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e48a41
    g2 = (int32_t)hWnd17;
    nIDDlgItem = 1015;
    SetWindowTextA(hWnd17, (char *)&g708);
    g2 = v3;
    int32_t * hWnd18 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e48a60
    g2 = (int32_t)hWnd18;
    GetWindowTextA(hWnd18, (char *)&g708, (int32_t)&g708);
    g2 = v3;
    g2 = wsprintfA((char *)lpString2, (char *)&lpString);
    int32_t * hWnd19 = GetDlgItem(hWnd, nIDDlgItem); // 0x1e48a85
    g2 = (int32_t)hWnd19;
    nIDDlgItem = (int32_t)"%d";
    g2 = SetWindowTextA(hWnd19, (char *)&g708);
    g2 = (int32_t)*(int16_t *)(dwNewLong + 10);
    g2 = wsprintfA((char *)lpString2, (char *)nIDDlgItem);
    int32_t * hWnd20 = GetDlgItem(hWnd, 1003); // 0x1e48ab0
    g2 = (int32_t)hWnd20;
    g2 = SetWindowTextA(hWnd20, (char *)&g708);
    g2 = (int32_t)*(int16_t *)(dwNewLong + 12);
    g2 = wsprintfA((char *)lpString2, (char *)nIDDlgItem);
    int32_t * hWnd21 = GetDlgItem(hWnd, 1007); // 0x1e48ad6
    g2 = (int32_t)hWnd21;
    g2 = SetWindowTextA(hWnd21, (char *)&g708);
    g2 = (int32_t)*(int16_t *)(dwNewLong + 8);
    g2 = wsprintfA((char *)lpString2, (char *)nIDDlgItem);
    int32_t * hWnd22 = GetDlgItem(hWnd, 1008); // 0x1e48afc
    g2 = (int32_t)hWnd22;
    g2 = SetWindowTextA(hWnd22, (char *)&g708);
    g2 = (int32_t)*(int16_t *)(dwNewLong + 22);
    g2 = wsprintfA((char *)lpString2, (char *)nIDDlgItem);
    int32_t * hWnd23 = GetDlgItem(hWnd, 1011); // 0x1e48b22
    g2 = (int32_t)hWnd23;
    nIDDlgItem = 0;
    g2 = SetWindowTextA(hWnd23, (char *)&g708);
    int32_t v12 = waveOutGetNumDevs(); // 0x1e48b31
    g2 = v12;
    if (v12 > nIDDlgItem) {
        // 0x1e48b3e
        int32_t v13; // bp-308
        int32_t v14 = v13; // 0x1e48b75
        while (true) {
            // 0x1e48b3e
            *(int32_t *)(g9 - 4) = 52;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            *(int32_t *)(g9 - 12) = nIDDlgItem;
            int32_t v15 = waveOutGetDevCapsA((int32_t)&g708, (struct tagWAVEOUTCAPSA *)&g708, (int32_t)&g708); // 0x1e48b48
            g2 = v15;
            int32_t v16; // 0x1e48ba3
            if (v15 == 0) {
                // 0x1e48b75
                g2 = v14;
                *(int32_t *)(g9 - 4) = v14;
                *(int32_t *)(g9 - 8) = nIDDlgItem;
                *(int32_t *)(g9 - 12) = (int32_t)"%d: %s";
                *(int32_t *)(g9 - 16) = lpString2;
                g2 = wsprintfA((char *)&g708, (char *)&g708);
                *(int32_t *)(g9 + 12) = lpString2;
                *(int32_t *)(g9 + 8) = 0;
                *(int32_t *)(g9 + 4) = 323;
                *(int32_t *)g9 = 1009;
                *(int32_t *)(g9 - 4) = a1;
                int32_t v17 = (int32_t)GetDlgItem(&g708, (int32_t)&g708); // 0x1e48b9c
                g2 = v17;
                *(int32_t *)(g9 - 4) = v17;
                v16 = SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            } else {
                // 0x1e48b52
                *(int32_t *)(g9 - 4) = nIDDlgItem;
                *(int32_t *)(g9 - 8) = v15;
                *(int32_t *)(g9 - 12) = (int32_t)"waveOutGetDevCaps failed (err %u) for device %d";
                *(int32_t *)(g9 - 16) = lpString2;
                g2 = wsprintfA((char *)&g708, (char *)&g708);
                *(int32_t *)(g9 + 12) = 64;
                *(int32_t *)(g9 + 8) = (int32_t)"WavMix32";
                *(int32_t *)(g9 + 4) = lpString2;
                *(int32_t *)g9 = 0;
                int32_t v18 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e48b6d
                v16 = v18;
            }
            // 0x1e48ba9
            g2 = v16;
            int32_t v19 = nIDDlgItem + 1; // 0x1e48ba9
            nIDDlgItem = v19;
            if (v12 <= v19) {
                // break -> 0x1e48baf
                break;
            }
        }
    }
    // 0x1e48baf
    g2 = (int32_t)*(int16_t *)(dwNewLong + 20);
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = g2;
    *(int32_t *)(g9 - 12) = 334;
    *(int32_t *)(g9 - 16) = 1009;
    *(int32_t *)(g9 - 20) = a1;
    int32_t v20 = (int32_t)GetDlgItem(&g708, (int32_t)&g708); // 0x1e48bc3
    g2 = v20;
    *(int32_t *)(g9 - 4) = v20;
    SendMessageA(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = 1;
    return 1;
}

// Address range: 0x1e48bde - 0x1e48dd2
int32_t function_1e48bde(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t * hWnd = (int32_t *)a1; // 0x1e48be9
    int32_t v1 = GetWindowLongA(hWnd, -21); // 0x1e48be9
    g2 = a2;
    int32_t v2; // bp-28
    int32_t result;
    int32_t v3;
    if (a2 == 1) {
        // 0x1e48c09
        if (v1 == 0) {
            result = 1;
            // 0x1e48dcb
            g2 = result;
            return result;
        }
        // 0x1e48c13
        v2 = 0;
        int32_t * hWnd2 = GetDlgItem(hWnd, 1000); // 0x1e48c23
        g2 = (int32_t)hWnd2;
        int32_t v4 = SendMessageA(hWnd2, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48c2a
        int32_t v5 = (int32_t)(v4 == 0) + 2; // 0x1e48c37
        g2 = v5;
        *(int16_t *)(v1 + 6) = (int16_t)v5;
        int32_t * hWnd3 = GetDlgItem(hWnd, 1001); // 0x1e48c47
        g2 = (int32_t)hWnd3;
        int32_t v6 = SendMessageA(hWnd3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48c4e
        int32_t v7 = (int32_t)(v6 == 0) + 1; // 0x1e48c5b
        g2 = v7;
        *(int16_t *)(v1 + 16) = (int16_t)v7;
        int32_t * hWnd4 = GetDlgItem(hWnd, 1004); // 0x1e48c69
        g2 = (int32_t)hWnd4;
        int32_t v8 = SendMessageA(hWnd4, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48c70
        int32_t v9 = (int32_t)(v8 == 0) + 1; // 0x1e48c7d
        g2 = v9;
        *(int16_t *)(v1 + 18) = (int16_t)v9;
        int32_t * hWnd5 = GetDlgItem(hWnd, 1010); // 0x1e48c8b
        g2 = (int32_t)hWnd5;
        int32_t v10 = SendMessageA(hWnd5, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48c92
        int32_t v11 = (int32_t)(v10 == 0) + 1; // 0x1e48c9f
        g2 = v11;
        *(int16_t *)(v1 + 24) = (int16_t)v11;
        int32_t * hWnd6 = GetDlgItem(hWnd, 1005); // 0x1e48cad
        g2 = (int32_t)hWnd6;
        int32_t v12 = SendMessageA(hWnd6, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e48cb4
        int32_t v13 = (int32_t)(v12 == 0) + 1; // 0x1e48cbf
        g2 = v13;
        *(int16_t *)(v1 + 14) = (int16_t)v13;
        int32_t * hWnd7 = GetDlgItem(hWnd, 1003); // 0x1e48cd4
        g2 = (int32_t)hWnd7;
        g4 = *(int32_t *)0x1e4b2d0;
        g2 = GetWindowTextA(hWnd7, (char *)&g708, (int32_t)&g708);
        int32_t v14 = function_1e3db80((int32_t *)(int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995"); // 0x1e48ce4
        g2 = v14;
        *(int16_t *)(v1 + 10) = (int16_t)v14;
        int32_t * hWnd8 = GetDlgItem(hWnd, 1007); // 0x1e48cfb
        g2 = (int32_t)hWnd8;
        g2 = GetWindowTextA(hWnd8, (char *)&g708, (int32_t)&g708);
        int32_t v15 = function_1e3db80((int32_t *)g6); // 0x1e48d05
        g2 = v15;
        *(int16_t *)(v1 + 12) = (int16_t)v15;
        int32_t * hWnd9 = GetDlgItem(hWnd, 1008); // 0x1e48d1c
        g2 = (int32_t)hWnd9;
        g2 = GetWindowTextA(hWnd9, (char *)&g708, (int32_t)&g708);
        int32_t v16 = function_1e3db80((int32_t *)g6); // 0x1e48d26
        g2 = v16;
        *(int16_t *)(v1 + 8) = (int16_t)v16;
        int32_t * hWnd10 = GetDlgItem(hWnd, 1011); // 0x1e48d3d
        g2 = (int32_t)hWnd10;
        g2 = GetWindowTextA(hWnd10, (char *)&g708, (int32_t)&g708);
        int32_t v17 = function_1e3db80((int32_t *)g6); // 0x1e48d47
        g2 = v17;
        *(int16_t *)(v1 + 22) = (int16_t)v17;
        int32_t * hWnd11 = GetDlgItem(hWnd, 1009); // 0x1e48d5e
        g2 = (int32_t)hWnd11;
        g2 = GetWindowTextA(hWnd11, (char *)&g708, (int32_t)&g708);
        char * v18; // bp-248
        int32_t v19; // 0x1e48d7a
        if (g442 > 1) {
            // 0x1e48d70
            g2 = 87;
            v18 = (char *)4;
            v19 = function_1e40120(87, 4);
        } else {
            // 0x1e48d84
            g5 = 87;
            int32_t v20 = (int32_t)g122; // 0x1e48d8b
            g7 = v20;
            g2 = 0;
            v19 = (int32_t)*(int16_t *)(v20 + 174) & 4;
        }
        // 0x1e48d9a
        g2 = v19;
        if (v19 == 0) {
            // 0x1e48db1
            *(int16_t *)(v1 + 20) = 0;
        } else {
            // 0x1e48d9e
            v18 = "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
            int32_t v21 = function_1e3db80((int32_t *)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995"); // 0x1e48da3
            g2 = v21;
            *(int16_t *)(v1 + 20) = (int16_t)v21;
        }
        // 0x1e48db7
        v3 = (int32_t)&v18;
        v18 = (char *)1;
    } else {
        if (a2 != 2) {
            result = 0;
            // 0x1e48dcb
            g2 = result;
            return result;
        }
        // 0x1e48dbb
        v2 = 0;
        v3 = v2;
    }
    // 0x1e48dbd
    *(int32_t *)(v3 - 4) = a1;
    g2 = EndDialog(&g708, (int32_t)&g708);
    result = 1;
    // 0x1e48dcb
    g2 = result;
    return result;
}

// Address range: 0x1e48dd2 - 0x1e48e1e
int32_t function_1e48dd2(int32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = g3; // 0x1e48dd2
    g2 = a2;
    if (a2 == 272) {
        int32_t result = function_1e487ec(a1, a3, a4, v1); // 0x1e48df4
        g2 = result;
        // 0x1e48e1a
        return result;
    }
    int32_t result2; // 0x1e48e1b
    if (a2 == 273) {
        int32_t v2 = a3 / 0x10000; // 0x1e48dfe
        g5 = v2;
        int32_t v3 = a3 & 0xffff; // 0x1e48e04
        g2 = v3;
        function_1e48bde(a1, v3, a4, v2, v1);
        g2 = 1;
        result2 = 1;
    } else {
        // 0x1e48de7
        g2 = 0;
        result2 = 0;
    }
    // 0x1e48e1a
    return result2;
}

// Address range: 0x1e48e1e - 0x1e48ebb
int32_t function_1e48e1e(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int16_t * a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    int32_t v1 = g6; // bp-16
    int32_t v2 = (int32_t)a7; // 0x1e48e24
    int16_t * v3; // bp-20
    *(int32_t *)&v3 = v2;
    int32_t v4 = 2 * function_1e22740(v2) + 24; // 0x1e48e30
    g2 = v4;
    g7 = (int32_t)a1;
    g5 = v4;
    *a1 = v4;
    int32_t v5 = g2 & 3; // 0x1e48e3e
    g2 = v5;
    if (v5 != 0) {
        int32_t v6 = g5 - v5 + 4; // 0x1e48e45
        g5 = v6;
        *(int32_t *)g7 = v6;
    }
    int32_t dwBytes = *(int32_t *)g7; // 0x1e48e4a
    v3 = (int16_t *)dwBytes;
    int32_t * hMem = GlobalAlloc(66, dwBytes); // 0x1e48e4e
    int32_t v7 = (int32_t)hMem; // 0x1e48e4e
    g2 = v7;
    int32_t * v8 = GlobalLock(hMem); // 0x1e48e55
    int32_t result = (int32_t)v8; // 0x1e48e55
    g2 = 0;
    if (v8 != NULL) {
        // 0x1e48e63
        *v8 = a2 | 0x10000000;
        g5 = a5;
        *(int32_t *)(result + 4) = g2;
        *(int16_t *)(result + 8) = (int16_t)g2;
        *(int16_t *)(result + 10) = (int16_t)a3;
        int16_t * v9; // bp-32
        *(int32_t *)&v9 = *(int32_t *)&a7;
        *(int16_t *)(result + 12) = (int16_t)a4;
        g2 = a6;
        *(int16_t *)(result + 14) = (int16_t)g5;
        int32_t v10 = result + 22; // 0x1e48e8e
        *(int16_t *)(result + 16) = (int16_t)g2;
        int32_t v11 = 2 * function_1e22740((int32_t)v9) + 2; // 0x1e48e9d
        g2 = v11;
        int32_t v12 = v11 / 4; // 0x1e48ea6
        g5 = v12;
        __asm_rep_movsd_memcpy((char *)v10, (char *)a7, v12);
        char * v13 = (char *)((g1 ? -4 : 4) * v12 + v10); // 0x1e48ea9
        int32_t v14 = g2 & 3; // 0x1e48ead
        g5 = v14;
        __asm_rep_movsb_memcpy(v13, v13, v14);
        g5 = 0;
    }
    // 0x1e48eb2
    g2 = result;
    g6 = v7;
    g4 = (int32_t)v3;
    g3 = v1;
    return result;
}

// Address range: 0x1e48ebb - 0x1e48f82
int32_t function_1e48ebb(int32_t * a1, int32_t pMem, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int16_t * a10) {
    int16_t * v1 = a10; // bp+40
    int32_t v2 = g6; // bp-16
    int32_t result; // 0x1e48f79
    int32_t v3; // 0x1e48f7b
    if (pMem != 0) {
        int32_t v4 = (int32_t)a1; // ebx
        g6 = *a1;
        int32_t v5 = 2 * function_1e22740((int32_t)a10) + 25 + g6; // 0x1e48edf
        g2 = v5;
        g5 = v5;
        *(int32_t *)v4 = v5;
        int32_t v6 = g2 & 3; // 0x1e48ee6
        g2 = v6;
        if (v6 != 0) {
            int32_t v7 = g5 - v6 + 4; // 0x1e48eed
            g5 = v7;
            *(int32_t *)v4 = v7;
        }
        int32_t * hMem = GlobalHandle((int32_t *)pMem); // 0x1e48ef3
        g2 = (int32_t)hMem;
        g2 = GlobalUnlock(hMem);
        int32_t * hMem2 = GlobalHandle((int32_t *)pMem); // 0x1e48f05
        g2 = (int32_t)hMem2;
        int32_t * hMem3 = GlobalReAlloc(hMem2, (int32_t)&g708, (int32_t)&g708); // 0x1e48f0c
        int32_t v8 = (int32_t)hMem3; // 0x1e48f0c
        g2 = v8;
        int32_t * v9 = GlobalLock(hMem3); // 0x1e48f13
        int32_t v10 = (int32_t)v9; // 0x1e48f13
        g2 = v10;
        g8 = v10;
        g7 = 0;
        if (v9 == NULL) {
            // 0x1e48ef2
            v3 = g9;
            result = v10;
        } else {
            int32_t v11 = g6 + v10; // 0x1e48f21
            g5 = v11;
            v4 = a7;
            *(int32_t *)v11 = a4 | 0x50000000;
            g2 = a8;
            *(int32_t *)(g5 + 4) = g7;
            *(int16_t *)(g5 + 8) = (int16_t)a6;
            *(int16_t *)(g5 + 10) = (int16_t)v4;
            int32_t v12 = g5; // 0x1e48f45
            g5 = v12 + 18;
            *(int16_t *)(v12 + 12) = (int16_t)g2;
            g2 = a3 & 0xffff;
            *(int16_t *)(g5 - 4) = (int16_t)a9;
            int16_t * v13; // bp-48
            *(int32_t *)&v13 = *(int32_t *)&v1;
            *(int16_t *)(g5 - 2) = (int16_t)((v4 & -0x10000) | (a5 & 0xffff));
            int32_t v14 = 0x10000 * g2 | 0xffff; // 0x1e48f62
            g2 = v14;
            *(int32_t *)g5 = v14;
            int32_t v15 = g5 + 4; // 0x1e48f69
            g5 = v15;
            g2 = function_1e4a400(v15, (int32_t)v13);
            int16_t * v16 = (int16_t *)(g8 + 8); // 0x1e48f72
            *v16 = *v16 + 1;
            v3 = v8;
            result = g8;
        }
    } else {
        v3 = v2;
        result = 0;
    }
    // 0x1e48f79
    g2 = result;
    g6 = *(int32_t *)v3;
    g8 = *(int32_t *)(v3 + 4);
    g4 = *(int32_t *)(v3 + 8);
    g3 = *(int32_t *)(v3 + 12);
    return result;
}

// Address range: 0x1e48f82 - 0x1e491f8
int32_t function_1e48f82(void) {
    // 0x1e48f82
    int32_t v1; // bp-8
    int32_t v2 = v1; // 0x1e48f85
    int32_t v3 = g6; // 0x1e48f8a
    g6 = 0;
    g2 = v2;
    v1 = 0;
    int32_t v4 = function_1e48e1e(&v1, -0x7f37ff80, 0, 0, 212, 132, L"WavMix32 Settings (Ver %X.%X Static)", v3, g8, g4, 0, g3); // 0x1e48faf
    g2 = v4;
    g5 = v2;
    int32_t v5 = function_1e48ebb(&v1, v4, 128, 0x10001, 1, g4, 5, 50, 14, L"&Ok"); // 0x1e48fd2
    g2 = v5;
    g5 = v2;
    int32_t v6 = function_1e48ebb(&v1, v5, g8, 0x10000, 2, g4, 25, 50, 14, L"&Cancel"); // 0x1e48ff0
    g2 = v6;
    g5 = v2;
    int32_t v7 = function_1e48ebb(&v1, v6, 130, g6, 1012, 5, 5, 115, 8, L"Number of WaveBlocks (%d-%d):"); // 0x1e49013
    g2 = v7;
    g5 = v2;
    int32_t v8 = function_1e48ebb(&v1, v7, g4, g6, 1013, 5, 20, 115, 8, L"Size of WaveBlocks (%d-%d):"); // 0x1e49031
    g2 = v8;
    g5 = v2;
    int32_t v9 = function_1e48ebb(&v1, v8, g4, g6, 0xffff, 5, 35, 102, 8, L"Playback Frequency (11,22,44):"); // 0x1e4904f
    g2 = v9;
    g5 = v2;
    int32_t v10 = function_1e48ebb(&v1, v9, g4, g6, 0xffff, 5, 80, 57, 8, L"Playback Device:"); // 0x1e4906d
    g2 = v10;
    g5 = v2;
    int32_t v11 = function_1e48ebb(&v1, v10, g4, g6, 1014, 5, 50, 115, 8, L"Number of Pause Blocks (%d-%d):"); // 0x1e4908b
    g2 = v11;
    int32_t v12 = g6; // 0x1e490a2
    g6 = v2;
    int32_t v13 = function_1e48ebb(&v1, v11, g4, v12, 1015, 5, 65, 63, 8, L"Max Channels = %d"); // 0x1e490a9
    g2 = v13;
    g6 = (int32_t)L"-1";
    g5 = v2;
    int32_t v14 = function_1e48ebb(&v1, v13, 129, 0x810080, 1003, 125, 5, 25, 12, L"-1"); // 0x1e490d1
    g2 = v14;
    g5 = v2;
    int32_t v15 = function_1e48ebb(&v1, v14, 129, g4, 1007, 125, 20, 25, 12, (int16_t *)g6); // 0x1e490ef
    g2 = v15;
    g5 = v2;
    int32_t v16 = function_1e48ebb(&v1, v15, 129, g4, 1008, 125, 35, 25, 12, (int16_t *)g6); // 0x1e4910d
    g2 = v16;
    int32_t v17 = g6; // 0x1e49112
    g6 = v2;
    int32_t v18 = function_1e48ebb(&v1, v16, 129, g4, 1011, 125, 50, 25, 12, (int16_t *)v17); // 0x1e4912b
    g2 = v18;
    int32_t v19 = function_1e48ebb(&v1, v18, 133, 0x210102, 1009, 65, 80, 140, 60, L"No Devices"); // 0x1e49151
    g2 = v19;
    g6 = 0x10003;
    g5 = v2;
    int32_t v20 = function_1e48ebb(&v1, v19, g8, 0x10003, 1000, 5, 101, 40, 10, L"Stereo"); // 0x1e49174
    g2 = v20;
    g5 = v2;
    int32_t v21 = function_1e48ebb(&v1, v20, g8, g6, 1001, 55, 101, 60, 10, L"Reset Remix"); // 0x1e49192
    g2 = v21;
    g5 = v2;
    int32_t v22 = function_1e48ebb(&v1, v21, g8, g6, 1010, 125, 101, 78, 10, L"Show Debug Dialogs"); // 0x1e491b0
    g2 = v22;
    g5 = v2;
    int32_t v23 = function_1e48ebb(&v1, v22, g8, g6, 1005, 5, 117, 40, 10, L"CMixit"); // 0x1e491ce
    g2 = v23;
    int32_t v24 = g6; // 0x1e491e5
    g6 = v2;
    int32_t result = function_1e48ebb(&v1, v23, g8, v24, 1004, 55, 117, 75, 10, L"Good Get Position"); // 0x1e491ec
    g2 = result;
    return result;
}

// Address range: 0x1e491f8 - 0x1e49221
int32_t function_1e491f8(int32_t a1) {
    int32_t v1 = g8; // bp-4
    int32_t v2; // 0x1e4921d
    int32_t result; // 0x1e4921e
    if (a1 == 0) {
        // 0x1e491f8
        result = g2;
        v2 = v1;
    } else {
        int32_t * pMem = (int32_t *)a1; // 0x1e49202
        int32_t * hMem = GlobalHandle(pMem); // 0x1e49202
        g2 = (int32_t)hMem;
        g2 = GlobalUnlock(hMem);
        int32_t * hMem2 = GlobalHandle(pMem); // 0x1e49210
        g2 = (int32_t)hMem2;
        int32_t v3 = (int32_t)GlobalFree(hMem2); // 0x1e49217
        g2 = v3;
        result = v3;
        v2 = g9;
    }
    // 0x1e4921d
    g8 = *(int32_t *)v2;
    return result;
}

// Address range: 0x1e49221 - 0x1e497ad
int32_t function_1e49221(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e49221
    g2 = 0;
    int32_t v1; // bp-96
    int32_t v2 = v1; // 0x1e49226
    int32_t v3;
    if (a1 == 0) {
        goto lab_0x1e49250;
    } else {
        // 0x1e49234
        g2 = a1;
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e49250;
        } else {
            // 0x1e4923e
            if (*(int16_t *)(a1 + 444) != 0x5432) {
                goto lab_0x1e49250;
            } else {
                v3 = a1;
                goto lab_0x1e49286;
            }
        }
    }
  lab_0x1e49250:
    // 0x1e49250
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v3 = 0;
    goto lab_0x1e49286;
  lab_0x1e49286:
    // 0x1e49286
    g601 = (struct tWAVEFORMATEX *)v3;
    if (v3 == 0) {
        // 0x1e4928f
        g2 = 5;
        // 0x1e497a4
        return 5;
    }
    // 0x1e49299
    g2 = v3;
    if (*(int32_t *)(v3 + 16) != 0) {
        // 0x1e492a4
        g2 = 4;
        // 0x1e497a4
        return 4;
    }
    // 0x1e492ae
    g2 = v3;
    if (*(int32_t *)(v3 + 20) != 0) {
        // 0x1e492b9
        g2 = 12;
        // 0x1e497a4
        return 12;
    }
    // 0x1e492c3
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = -1;
    *(int32_t *)(g9 - 12) = a1;
    g2 = function_1e47347((int32_t)&g708);
    g4 = a3;
    int32_t v4; // 0x1e492e7
    if (a3 == 0) {
        int16_t v5 = 30; // bp-44
        v4 = &v5;
        g2 = v4;
        *(int32_t *)(g9 - 4) = v4;
        *(int32_t *)(g9 - 8) = a1;
        g2 = function_1e497ad(30);
        int32_t v6 = function_1e48f82(); // 0x1e492f3
        g2 = v6;
        if (v6 == 0) {
            // 0x1e492fe
            g2 = 1;
            // 0x1e497a4
            return 1;
        }
        int32_t v7 = (int32_t)g601; // 0x1e49308
        g2 = v7;
        g8 = 1;
        g5 = v4;
        *(int32_t *)(v7 + 20) = 1;
        *(int32_t *)(g9 - 4) = v4;
        *(int32_t *)(g9 - 8) = 0x1e48dd2;
        *(int32_t *)(g9 - 12) = a2;
        *(int32_t *)(g9 - 16) = v6;
        *(int32_t *)(g9 - 20) = g607;
        int32_t v8 = DialogBoxIndirectParamA(&g708, (struct _TYPEDEF_DLGTEMPLATE *)&g708, &g708, (int32_t (*)(int32_t *, int32_t, int32_t, int32_t))&g708, (int32_t)&g708); // 0x1e49328
        g2 = v8;
        g6 = v8;
        *(int32_t *)(g9 - 4) = v6;
        g2 = function_1e491f8((int32_t)&g708);
        int32_t v9 = (int32_t)g601; // 0x1e49336
        g5 = v9;
        *(int32_t *)(v9 + 20) = 0;
        if (g6 != g8) {
            // 0x1e49347
            g2 = g8;
            // 0x1e497a4
            return g8;
        }
        // 0x1e4934e
        g2 = (int32_t)g601;
        uint16_t v10;
        g5 = v10;
        // 0x1e49363
        g4 = v4;
    } else {
        v4 = a3;
    }
    // 0x1e49366
    if (*(int32_t *)(v4 + 2) == 0) {
        // 0x1e4936c
        g2 = 1;
        // 0x1e497a4
        return 1;
    }
    int32_t v11;
    if (a1 == 0) {
        goto lab_0x1e49398;
    } else {
        // 0x1e4937c
        g2 = a1;
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e49398;
        } else {
            // 0x1e49386
            if (*(int16_t *)(a1 + 444) != 0x5432) {
                goto lab_0x1e49398;
            } else {
                v11 = a1;
                goto lab_0x1e493ce;
            }
        }
    }
  lab_0x1e49398:
    // 0x1e49398
    *(int32_t *)(g9 - 4) = -1;
    int32_t v12 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995"; // esi
    g2 = MessageBeep((int32_t)&g708);
    *(int32_t *)(g9 - 4) = a1;
    *(int32_t *)(g9 - 8) = (int32_t)"Invalid session handle 0x%04X passed to WaveMix API";
    *(int32_t *)(g9 - 12) = v12;
    g2 = wsprintfA((char *)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = 48;
    *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
    *(int32_t *)g9 = v12;
    *(int32_t *)(g9 - 4) = 0;
    g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
    v11 = 0;
    goto lab_0x1e493ce;
  lab_0x1e493ce:
    // 0x1e493ce
    g601 = (struct tWAVEFORMATEX *)v11;
    if (v11 == 0) {
        // 0x1e493d7
        g2 = 5;
        // 0x1e497a4
        return 5;
    }
    int32_t v13 = g4; // 0x1e493e1
    int32_t v14 = *(int32_t *)(v13 + 2); // 0x1e493e1
    g2 = v14;
    unsigned char v15 = (char)v14; // 0x1e493e7
    if ((v14 & 256) != 0) {
        int32_t v16 = (int32_t)(*(int16_t *)(v13 + 24) == 0) + 1; // 0x1e493f3
        g2 = v16;
        g484 = v16;
    }
    int32_t v17;
    if (v15 <= 255) {
        // 0x1e49403
        g2 = v11;
        int32_t v18 = (int32_t)*(int16_t *)(v13 + 20); // 0x1e49408
        g5 = v18;
        if (*(int32_t *)(v11 + 24) != v18) {
            // 0x1e49415
            *(int32_t *)(g9 - 4) = 52;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            *(int32_t *)(g9 - 12) = g5;
            int32_t result = waveOutGetDevCapsA(0x1000000 * v14 / 0x1000000, (struct tagWAVEOUTCAPSA *)&g708, (int32_t)&g708); // 0x1e4941c
            g2 = result;
            if (result != 0) {
                // 0x1e497a4
                return result;
            }
            int32_t v19 = (int32_t)g601 + 124; // 0x1e49433
            g5 = 13;
            __asm_rep_movsd_memcpy((char *)v19, (char *)&v1, 13);
            g6 = (g1 ? -52 : 52) + v19;
            int32_t v20 = (int32_t)g601; // 0x1e4943d
            g5 = v20;
            int32_t v21 = (int32_t)*(int16_t *)(g4 + 20); // 0x1e49443
            g2 = v21;
            *(int32_t *)(v20 + 24) = v21;
            g5 = 1;
            int32_t v22 = (int32_t)g601; // 0x1e4944f
            g7 = v22;
            int32_t v23; // 0x1e4946d
            if (*(int16_t *)(v22 + 168) == 1) {
                int32_t v24 = v22 + 382; // 0x1e4945e
                g2 = v24;
                int16_t * v25 = (int16_t *)v24; // 0x1e49464
                if (*v25 == 2) {
                    // 0x1e4946a
                    *v25 = 1;
                    v23 = g5;
                    *(int16_t *)((int32_t)g601 + 392) = (int16_t)v23;
                    int32_t v26 = (int32_t)g601; // 0x1e4947c
                    g2 = v26;
                    int32_t v27 = (int32_t)*(int16_t *)(v26 + 382); // 0x1e49481
                    g5 = v27;
                    int32_t v28 = *(int32_t *)(v26 + 384) * v27; // 0x1e49488
                    g5 = v28;
                    *(int32_t *)(v26 + 388) = v28;
                } else {
                    v23 = 0;
                }
            } else {
                v23 = 0;
            }
            // 0x1e49495
            int32_t v29; // bp-88
            int32_t v30 = v29; // 0x1e49495
            g2 = v30;
            *(int32_t *)(g9 - 4) = v30;
            int32_t v31 = (int32_t)g601 + 28; // 0x1e494a4
            g2 = v31;
            *(int32_t *)(g9 - 8) = v31;
            lstrcpyA((char *)&g708, (char *)&g708);
            int32_t v32 = (int32_t)g601 + 28; // 0x1e494af
            g2 = v32;
            *(int32_t *)(g9 - 4) = v32;
            int32_t v33 = function_1e4830a((int32_t)&g708); // 0x1e494b3
            g2 = v33;
            if (v33 == 0) {
                // 0x1e494bc
                *(int32_t *)(g9 - 4) = (int32_t)"Unkown Device";
                int32_t v34 = (int32_t)g601 + 28; // 0x1e494c6
                g2 = v34;
                *(int32_t *)(g9 - 8) = v34;
                g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
            }
            // 0x1e494cc
            *(int32_t *)(g9 - 4) = 96;
            *(int32_t *)(g9 - 8) = (int32_t)g601 + 28;
            int32_t v35 = (int32_t)g601; // 0x1e494d7
            g2 = v35;
            *(int32_t *)(g9 - 12) = *(int32_t *)(v35 + 24);
            int32_t v36 = function_1e48479((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e494df
            g2 = v36;
            if (v36 == 0) {
                // 0x1e494e8
                *(int32_t *)(g9 - 4) = function_1e48431();
                int32_t v37 = (int32_t)g601 + 28; // 0x1e494f3
                g2 = v37;
                *(int32_t *)(g9 - 8) = v37;
                lstrcpyA((char *)&g708, (char *)&g708);
                *(int32_t *)(g9 - 4) = (int32_t)g601 + 132;
                int32_t v38 = (int32_t)g601 + 28; // 0x1e49509
                g2 = v38;
                *(int32_t *)(g9 - 8) = v38;
                g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
                v17 = v23;
            } else {
                v17 = v23;
            }
        } else {
            v17 = 0;
        }
    } else {
        v17 = 0;
    }
    // 0x1e49513
    g5 = 1;
    int32_t v39;
    int32_t v40;
    if ((v14 & 1) == 0) {
        v40 = v17;
        goto lab_0x1e49591;
    } else {
        int32_t v41 = (int32_t)g601; // 0x1e49521
        g2 = v41;
        if ((*(int16_t *)(g4 + 6) || 1) == 1) {
            int32_t v42 = v41 + 382; // 0x1e49553
            g2 = v42;
            int16_t * v43 = (int16_t *)v42; // 0x1e49558
            *v43 = 1;
            int32_t v44 = (int32_t)g601; // 0x1e4956a
            g2 = v44;
            *(int16_t *)(v44 + 392) = 1;
            v39 = *v43 != 2 ? v17 : 1;
            goto lab_0x1e49578;
        } else {
            // 0x1e49528
            if ((*(int16_t *)(v41 + 168) || 1) == 1) {
                v40 = v17;
                goto lab_0x1e49591;
            } else {
                int32_t v45 = v41 + 382; // 0x1e49531
                g2 = v45;
                int16_t * v46 = (int16_t *)v45; // 0x1e49536
                *v46 = 2;
                int32_t v47 = (int32_t)g601; // 0x1e49543
                g2 = v47;
                *(int16_t *)(v47 + 392) = 2;
                v39 = *v46 != 1 ? v17 : 1;
                goto lab_0x1e49578;
            }
        }
    }
  lab_0x1e49591:;
    int32_t v48;
    if ((v15 & 2) != 0) {
        uint16_t v49 = *(int16_t *)(g4 + 8); // 0x1e4959b
        g2 = v49;
        int32_t v50;
        int32_t v51; // 0x1e49602
        int32_t v52; // 0x1e49602
        if (v49 == 22) {
            int32_t v53 = (int32_t)g601 + 384; // 0x1e495ce
            g2 = v53;
            g5 = 0x5622;
            v52 = v53;
            v50 = *(int32_t *)v53 == 0x5622 ? v40 : 1;
            v51 = 0x5622;
        } else {
            int32_t v54 = (int32_t)g601 + 384; // 0x1e495e9
            g2 = v54;
            int32_t v55 = *(int32_t *)v54; // 0x1e495ee
            if (v49 == 44) {
                // 0x1e495e9
                g5 = 0xac44;
                v52 = v54;
                v50 = v55 == 0xac44 ? v40 : 1;
                v51 = 0xac44;
            } else {
                // 0x1e495ae
                g5 = 0x2b11;
                v52 = v54;
                v50 = v55 == 0x2b11 ? v40 : 1;
                v51 = 0x2b11;
            }
        }
        // 0x1e49602
        *(int32_t *)v52 = v51;
        int32_t v56 = (int32_t)g601; // 0x1e49604
        g2 = v56;
        int32_t v57 = g5 * (int32_t)*(int16_t *)(v56 + 382); // 0x1e49610
        g2 = v57;
        g5 = v56;
        *(int32_t *)(v56 + 388) = v57;
        v48 = v50;
    } else {
        v48 = v40;
    }
    if ((v15 & 4) == 0) {
        goto lab_0x1e49680;
    } else {
        int32_t v58 = (int32_t)g601; // 0x1e49625
        g5 = v58;
        int32_t v59 = (int32_t)*(int16_t *)(g4 + 10); // 0x1e4962b
        g2 = v59;
        *(int32_t *)(v58 + 400) = v59;
        int32_t v60 = (int32_t)g601 + 400; // 0x1e4963b
        g5 = v60;
        int32_t * v61 = (int32_t *)v60; // 0x1e49641
        int32_t v62 = *v61; // 0x1e49641
        g2 = v62;
        if (v62 < 2) {
            // 0x1e49648
            *v61 = 2;
        } else {
            if (v62 > 10) {
                // 0x1e49655
                *v61 = 10;
            }
        }
        int32_t v63 = (int32_t)g601; // 0x1e4965b
        g2 = 0;
        int32_t v64 = v63 + 404; // 0x1e49663
        g5 = v64;
        int32_t * v65 = (int32_t *)v64; // 0x1e49669
        int32_t v66 = *v65; // 0x1e49669
        if (v66 >= 0) {
            // 0x1e4966f
            g2 = v63;
            int32_t v67 = *(int32_t *)(v63 + 400); // 0x1e49674
            g2 = v67;
            if (v67 < v66) {
                // 0x1e4967e
                *v65 = v67;
                goto lab_0x1e49680;
            } else {
                goto lab_0x1e49680;
            }
        } else {
            // 0x1e4967e
            *v65 = 0;
            goto lab_0x1e49680;
        }
    }
  lab_0x1e49680:
    if (v48 != 0) {
        int32_t v68 = (int32_t)g601 + 380; // 0x1e4968b
        g2 = v68;
        *(int32_t *)(g9 - 4) = v68;
        *(int32_t *)(g9 - 8) = 0;
        int32_t v69 = function_1e482ce((int32_t)&g708, (int32_t)&g708); // 0x1e49693
        g2 = v69;
        int32_t v70 = (int32_t)g601; // 0x1e49698
        g5 = v70;
        *(int32_t *)(v70 + 396) = v69;
    }
    if ((v15 & 8) != 0) {
        uint16_t v71 = *(int16_t *)(g4 + 12); // 0x1e496aa
        int32_t v72 = v71; // 0x1e496aa
        g2 = (g2 & -0x10000) | v72;
        if (v71 != 0) {
            int32_t v73 = (int32_t)g601; // 0x1e496b3
            g5 = v73;
            g2 = v72;
            *(int32_t *)(v73 + 396) = v72;
        }
    }
    // 0x1e496c2
    g2 = 344;
    int32_t v74 = (int32_t)g601 + 396; // 0x1e496cd
    g7 = v74;
    int32_t * v75 = (int32_t *)v74; // 0x1e496d3
    uint32_t v76 = *v75; // 0x1e496d3
    g5 = v76;
    if (v76 < 344) {
        // 0x1e496e2
        *v75 = 344;
        goto lab_0x1e496e4;
    } else {
        // 0x1e496d9
        g2 = 0x2b11;
        if (v76 < 0x2b12) {
            goto lab_0x1e496e4;
        } else {
            // 0x1e496e2
            *v75 = 0x2b11;
            goto lab_0x1e496e4;
        }
    }
  lab_0x1e49578:;
    int32_t v77 = (int32_t)g601; // 0x1e49578
    g2 = v77;
    int32_t v78 = (int32_t)*(int16_t *)(v77 + 382); // 0x1e4957d
    g5 = v78;
    int32_t v79 = *(int32_t *)(v77 + 384) * v78; // 0x1e49584
    g5 = v79;
    *(int32_t *)(v77 + 388) = v79;
    v40 = v39;
    goto lab_0x1e49591;
  lab_0x1e496e4:
    if ((v15 & 16) != 0) {
        int32_t v80 = (int32_t)g601; // 0x1e496ea
        g2 = v80;
        *(int32_t *)(v80 + 428) = 0x1e45d55;
    }
    if ((v15 & 32) != 0) {
        int32_t v81 = *(int16_t *)(g4 + 16) != 0 ? 0x1e46b43 : 0x1e46b36;
        g2 = v81;
        int32_t v82 = (int32_t)g601; // 0x1e49710
        g5 = v82;
        *(int32_t *)(v82 + 432) = v81;
    }
    if ((v15 & 64) != 0) {
        int32_t v83 = (int32_t)g601; // 0x1e49729
        g5 = v83;
        int32_t v84 = (int32_t)(*(int16_t *)(g4 + 18) == 0) + 1; // 0x1e4972f
        g2 = v84;
        *(int32_t *)(v83 + 420) = v84;
    }
    char v85;
    if ((v85 & 2) == 0) {
        goto lab_0x1e49771;
    } else {
        int32_t v86 = (int32_t)g601; // 0x1e4973c
        g5 = v86;
        *(int32_t *)(v86 + 404) = (int32_t)*(int16_t *)(g4 + 22);
        g2 = 0;
        int32_t v87 = (int32_t)g601; // 0x1e4974e
        int32_t v88 = v87 + 404; // 0x1e49754
        g7 = v88;
        int32_t * v89 = (int32_t *)v88; // 0x1e4975a
        int32_t v90 = *v89; // 0x1e4975a
        g5 = v90;
        if (v90 >= 0) {
            // 0x1e49760
            g2 = v87;
            int32_t v91 = *(int32_t *)(v87 + 400); // 0x1e49765
            g2 = v91;
            if (v91 < v90) {
                // 0x1e4976f
                *v89 = v91;
                goto lab_0x1e49771;
            } else {
                goto lab_0x1e49771;
            }
        } else {
            // 0x1e4976f
            *v89 = 0;
            goto lab_0x1e49771;
        }
    }
  lab_0x1e49771:
    // 0x1e49771
    *(int32_t *)(g9 - 4) = g4;
    *(int32_t *)(g9 - 8) = a1;
    function_1e497ad((int16_t)&g708);
    g2 = a4;
    if (a4 != 0) {
        // 0x1e49781
        g5 = v48;
        *(int32_t *)a4 = v48;
    }
    if (a5 != 0) {
        // 0x1e4978c
        *(int32_t *)(g9 - 4) = 0x1000000 * v14 / 0x1000000;
        g2 = function_1e49934((int32_t)&g708);
    }
    // 0x1e49794
    if (g484 != 0) {
        // 0x1e4979d
        g2 = function_1e486fa();
    }
    // 0x1e497a2
    g2 = 0;
    // 0x1e497a4
    return 0;
}

