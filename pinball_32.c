
// Address range: 0x1e497ad - 0x1e49934
int32_t function_1e497ad(int16_t a1) {
    int32_t v1 = a1; // 0x1e497af
    int32_t v2; // 0x1e497f7
    if (a1 == 0) {
        goto lab_0x1e497c9;
    } else {
        // 0x1e497b7
        if (*(int16_t *)v1 != 0x5432) {
            goto lab_0x1e497c9;
        } else {
            // 0x1e497be
            if (*(int16_t *)(v1 + 444) == 0x5432) {
                v2 = v1;
                goto lab_0x1e497f7;
            } else {
                goto lab_0x1e497c9;
            }
        }
    }
  lab_0x1e497c9:
    // 0x1e497c9
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v2 = 0;
    goto lab_0x1e497f7;
  lab_0x1e497f7:
    // 0x1e497f7
    g601 = (struct tWAVEFORMATEX *)v2;
    int32_t result; // 0x1e49931
    if (v2 != 0) {
        int32_t v3 = *(int32_t *)(g9 + 16); // 0x1e49810
        g5 = v3;
        if (v3 != 0) {
            int32_t v4 = *(int32_t *)(v3 + 2); // 0x1e49822
            int32_t v5 = v4; // esi
            if ((v4 & 1) != 0) {
                // 0x1e4982d
                g2 = v2;
                uint16_t v6 = *(int16_t *)(v2 + 382); // 0x1e49832
                g2 = (int32_t)v6 | v2 & -0x10000;
                *(int16_t *)(v3 + 6) = v6;
            } else {
                v5 = v4;
            }
            if ((v5 & 2) != 0) {
                int32_t v7 = (int32_t)g601; // 0x1e49845
                g2 = v7;
                uint32_t v8 = *(int32_t *)(v7 + 384); // 0x1e49851
                uint32_t v9 = v8 / 0x2b11;
                g7 = v8 % 0x2b11;
                int32_t v10 = 11 * v9; // 0x1e49859
                g2 = v10 & 0xffff | v9 & 0x70000;
                *(int16_t *)(v3 + 8) = (int16_t)v10;
            }
            if ((v5 & 4) != 0) {
                int32_t v11 = (int32_t)g601; // 0x1e49869
                g2 = v11;
                int32_t v12 = *(int32_t *)(v11 + 400); // 0x1e4986e
                g7 = v12;
                *(int16_t *)(v3 + 10) = (int16_t)v12;
            }
            if ((v5 & 8) != 0) {
                int32_t v13 = (int32_t)g601; // 0x1e49880
                g2 = v13;
                int32_t v14 = *(int32_t *)(v13 + 396); // 0x1e49885
                g7 = v14;
                *(int16_t *)(v3 + 12) = (int16_t)v14;
            }
            if ((v5 & 16) != 0) {
                int32_t v15 = (int32_t)g601; // 0x1e49897
                g2 = v15;
                int32_t v16 = *(int32_t *)(v15 + 428); // 0x1e4989c
                g2 = v16 == 0x1e45d55;
                *(int16_t *)(v3 + 14) = (int16_t)(v16 == 0x1e45d55);
            }
            if ((v5 & 32) != 0) {
                int32_t v17 = (int32_t)g601; // 0x1e498ba
                g2 = v17;
                int32_t v18 = *(int32_t *)(v17 + 432); // 0x1e498bf
                g2 = v18 == 0x1e46b43;
                *(int16_t *)(v3 + 16) = (int16_t)(v18 == 0x1e46b43);
            }
            if ((v5 & 64) != 0) {
                int32_t v19 = (int32_t)g601; // 0x1e498dd
                g2 = v19;
                int32_t v20 = *(int32_t *)(v19 + 420); // 0x1e498e2
                g7 = v20;
                *(int16_t *)(v3 + 18) = (int16_t)v20;
            }
            if ((char)v5 <= 255) {
                int32_t v21 = (int32_t)g601; // 0x1e498f4
                g2 = v21;
                int32_t v22 = *(int32_t *)(v21 + 24); // 0x1e498f9
                g7 = v22;
                *(int16_t *)(v3 + 20) = (int16_t)v22;
            }
            if ((v5 & 256) != 0) {
                int32_t v23 = (int32_t)(g484 == 0) + 1; // 0x1e49911
                g2 = v23;
                *(int16_t *)(v3 + 24) = (int16_t)v23;
            }
            if ((v5 & 512) != 0) {
                int32_t v24 = (int32_t)g601; // 0x1e4991e
                g2 = v24;
                int32_t v25 = *(int32_t *)(v24 + 404); // 0x1e49923
                g7 = v25;
                *(int16_t *)(v3 + 22) = (int16_t)v25;
            }
            // 0x1e4992d
            g2 = 0;
            result = 0;
        } else {
            // 0x1e49818
            g2 = 11;
            result = 11;
        }
    } else {
        // 0x1e49806
        g2 = 5;
        result = 5;
    }
    // 0x1e4992f
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e49934 - 0x1e49bc2
int32_t function_1e49934(int32_t a1) {
    int32_t v1 = a1; // esi
    if ((char)a1 > -1) {
        // branch -> 0x1e49988
    } else {
        // 0x1e49944
        g2 = (int32_t)g601;
        g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "%d");
        bool v2 = WritePrivateProfileStringA("general", "WaveOutDevice", "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", (char *)&g604); // 0x1e49978
        g2 = v2;
        a1 = v1;
    }
    int32_t v3; // ebp
    int32_t v4; // 0x1e499c3
    if ((a1 & 1) != 0) {
        int32_t v5 = (int32_t)g601; // 0x1e49990
        g2 = v5;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v6 = (int32_t)*(int16_t *)(v5 + 382); // 0x1e4999a
        g5 = v6;
        *(int32_t *)(g9 - 4) = v6;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"Channels";
        *(int32_t *)(g9 - 4) = g2;
        bool v7 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e499c1
        g2 = v7;
        v4 = v1;
    } else {
        v4 = a1;
    }
    int32_t v8; // 0x1e49a0d
    if ((v4 & 2) != 0) {
        int32_t v9 = (int32_t)g601; // 0x1e499cb
        g2 = v9;
        g5 = 0x2b11;
        uint32_t v10 = *(int32_t *)(v9 + 384); // 0x1e499d7
        uint32_t v11 = v10 / 0x2b11;
        g7 = v10 % 0x2b11;
        int32_t v12 = 11 * v11 & 0xffff; // 0x1e499df
        g2 = v12 | v11 & 0x70000;
        g5 = v12;
        *(int32_t *)(g9 - 4) = v12;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"SamplesPerSec";
        *(int32_t *)(g9 - 4) = g2;
        bool v13 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49a0b
        g2 = v13;
        v8 = v1;
    } else {
        v8 = v4;
    }
    int32_t v14; // 0x1e49a46
    if ((v8 & 4) != 0) {
        int32_t v15 = (int32_t)g601; // 0x1e49a15
        g2 = v15;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        *(int32_t *)(g9 - 4) = *(int32_t *)(v15 + 400);
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"WaveBlocks";
        *(int32_t *)(g9 - 4) = g2;
        bool v16 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49a44
        g2 = v16;
        v14 = v1;
    } else {
        v14 = v8;
    }
    int32_t v17; // 0x1e49a81
    if ((v14 & 8) != 0) {
        int32_t v18 = (int32_t)g601; // 0x1e49a4e
        g2 = v18;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v19 = (int32_t)*(int16_t *)(v18 + 396); // 0x1e49a58
        g5 = v19;
        *(int32_t *)(g9 - 4) = v19;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"WaveBlockLen";
        *(int32_t *)(g9 - 4) = g2;
        bool v20 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49a7f
        g2 = v20;
        v17 = v1;
    } else {
        v17 = v14;
    }
    int32_t v21; // 0x1e49ac7
    if ((v17 & 16) != 0) {
        int32_t v22 = (int32_t)g601; // 0x1e49a89
        g2 = v22;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v23 = *(int32_t *)(v22 + 428) == 0x1e45d55; // 0x1e49aa1
        g2 = v23;
        *(int32_t *)(g9 - 4) = v23;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"CMixit";
        *(int32_t *)(g9 - 4) = g2;
        bool v24 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49ac5
        g2 = v24;
        v21 = v1;
    } else {
        v21 = v17;
    }
    int32_t v25; // 0x1e49b0e
    if ((v21 & 32) != 0) {
        int32_t v26 = (int32_t)g601; // 0x1e49acf
        g2 = v26;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v27 = (int32_t)(*(int32_t *)(v26 + 432) == 0x1e46b43) + 2; // 0x1e49ae9
        g2 = v27;
        *(int32_t *)(g9 - 4) = v27;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"Remix";
        *(int32_t *)(g9 - 4) = g2;
        bool v28 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49b0c
        g2 = v28;
        v25 = v1;
    } else {
        v25 = v21;
    }
    int32_t v29; // 0x1e49b4d
    if ((v25 & 64) != 0) {
        int32_t v30 = (int32_t)g601; // 0x1e49b16
        g2 = v30;
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v31 = *(int32_t *)(v30 + 420) == 0; // 0x1e49b27
        g2 = v31;
        *(int32_t *)(g9 - 4) = v31;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"GoodWavePos";
        *(int32_t *)(g9 - 4) = g2;
        bool v32 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49b4b
        g2 = v32;
        v29 = v1;
    } else {
        v29 = v25;
    }
    int32_t v33; // 0x1e49b82
    if ((v29 & 256) != 0) {
        // 0x1e49b55
        v3 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        int32_t v34 = (int32_t)(g484 == 0) + 1; // 0x1e49b63
        g2 = v34;
        *(int32_t *)(g9 - 4) = v34;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v3;
        g2 = wsprintfA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v3;
        *(int32_t *)g9 = (int32_t)"ShowDebugDialogs";
        *(int32_t *)(g9 - 4) = (int32_t)"general";
        bool v35 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49b80
        g2 = v35;
        v33 = v1;
    } else {
        v33 = v29;
    }
    int32_t result; // 0x1e49bbf
    if ((v33 & 512) == 0) {
        // 0x1e49b82
        result = g2;
    } else {
        int32_t v36 = (int32_t)g601; // 0x1e49b8a
        g2 = v36;
        v1 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
        *(int32_t *)(g9 - 4) = *(int32_t *)(v36 + 404);
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v1;
        wsprintfA((char *)&g708, (char *)&g708);
        g2 = (int32_t)g601 + 28;
        *(int32_t *)(g9 + 8) = (int32_t)&g604;
        *(int32_t *)(g9 + 4) = v1;
        *(int32_t *)g9 = (int32_t)"PauseBlocks";
        *(int32_t *)(g9 - 4) = g2;
        bool v37 = WritePrivateProfileStringA((char *)&g708, (char *)&g708, (char *)&g708, (char *)&g708); // 0x1e49bb9
        int32_t v38 = v37; // 0x1e49bb9
        g2 = v38;
        result = v38;
    }
    // 0x1e49bbb
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e49bc2 - 0x1e49feb
int32_t function_1e49bc2(int32_t a1) {
    int32_t v1 = waveOutGetNumDevs(); // 0x1e49bc9
    g2 = v1;
    g4 = v1;
    int32_t result; // 0x1e49fe8
    int32_t v2; // 0x1e49fd7
    if (v1 != 0) {
        // 0x1e49bdc
        if ((*(char *)(a1 + 3) & 4) == 0) {
            goto lab_0x1e49c01;
        } else {
            int32_t v3 = function_1e48560(a1); // 0x1e49be7
            g2 = v3;
            if (v3 == 0) {
                goto lab_0x1e49c01;
            } else {
                // 0x1e49bf0
                g2 = 0;
                // 0x1e49fd7
                v2 = function_1e49221((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                g2 = v2;
                // 0x1e49fdc
                g2 = 1;
                result = 1;
                return result;
            }
        }
    } else {
        // 0x1e49bd5
        g2 = 0;
        result = 0;
        return result;
    }
  lab_0x1e49c01:
    // 0x1e49c01
    if (*(char *)(a1 + 2) > -1) {
        // 0x1e49c1c
        *(int32_t *)(g9 - 4) = (int32_t)&g604;
        g6 = *(int32_t *)0x1e4b150;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = (int32_t)"WaveOutDevice";
        *(int32_t *)(g9 - 16) = (int32_t)"general";
        int32_t v4 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49c33
        g2 = v4;
        int32_t v5 = (int32_t)g601; // 0x1e49c35
        g5 = v5;
        *(int32_t *)(v5 + 24) = v4;
    } else {
        int32_t v6 = (int32_t)g601; // 0x1e49c07
        g5 = v6;
        g6 = *(int32_t *)0x1e4b150;
        int32_t v7 = (int32_t)*(int16_t *)(a1 + 20); // 0x1e49c13
        g2 = v7;
        *(int32_t *)(v6 + 24) = v7;
    }
    int32_t v8 = (int32_t)g601 + 24; // 0x1e49c44
    g5 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e49c47
    if (*v9 >= v1) {
        // 0x1e49c4b
        *v9 = 0;
    }
    // 0x1e49c51
    *(int32_t *)(g9 - 4) = 52;
    *(int32_t *)(g9 - 8) = (int32_t)g601 + 124;
    int32_t v10 = (int32_t)g601; // 0x1e49c5c
    g2 = v10;
    *(int32_t *)(g9 - 12) = *(int32_t *)(v10 + 24);
    int32_t v11 = waveOutGetDevCapsA((int32_t)&g708, (struct tagWAVEOUTCAPSA *)&g708, (int32_t)&g708); // 0x1e49c64
    g2 = v11;
    int32_t v12;
    if (v11 != 0) {
        goto lab_0x1e49c90;
    } else {
        int32_t v13 = (int32_t)g601 + 132; // 0x1e49c73
        g2 = v13;
        *(int32_t *)(g9 - 4) = v13;
        int32_t v14 = function_1e4830a((int32_t)&g708); // 0x1e49c79
        g2 = v14;
        if (v14 != 0) {
            v12 = 0;
            goto lab_0x1e49ca6;
        } else {
            goto lab_0x1e49c90;
        }
    }
  lab_0x1e49fe1:
    // 0x1e49fe1
    return result;
  lab_0x1e49c90:
    // 0x1e49c90
    *(int32_t *)(g9 - 4) = (int32_t)"Unkown Device";
    int32_t v15 = (int32_t)g601 + 132; // 0x1e49c9a
    g2 = v15;
    *(int32_t *)(g9 - 8) = v15;
    v12 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
    goto lab_0x1e49ca6;
  lab_0x1e49ca6:
    // 0x1e49ca6
    g2 = v12;
    *(int32_t *)(g9 - 4) = 96;
    *(int32_t *)(g9 - 8) = (int32_t)g601 + 28;
    int32_t v16 = (int32_t)g601; // 0x1e49cb1
    g2 = v16;
    *(int32_t *)(g9 - 12) = *(int32_t *)(v16 + 24);
    int32_t v17 = function_1e48479((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e49cb9
    g2 = v17;
    if (v17 == 0) {
        // 0x1e49cc2
        *(int32_t *)(g9 - 4) = function_1e48431();
        int32_t v18 = (int32_t)g601 + 28; // 0x1e49ccd
        g2 = v18;
        *(int32_t *)(g9 - 8) = v18;
        lstrcpyA((char *)&g708, (char *)&g708);
        *(int32_t *)(g9 - 4) = (int32_t)g601 + 132;
        int32_t v19 = (int32_t)g601 + 28; // 0x1e49ce7
        g2 = v19;
        *(int32_t *)(g9 - 8) = v19;
        g2 = (int32_t)lstrcatA((char *)&g708, (char *)&g708);
    }
    int32_t v20 = (int32_t)&g604; // ebx
    int32_t v21 = (int32_t)"default"; // ebp
    *(int32_t *)(g9 - 4) = (int32_t)&g604;
    *(int32_t *)(g9 - 8) = 1;
    *(int32_t *)(g9 - 12) = (int32_t)"Remix";
    *(int32_t *)(g9 - 16) = v21;
    int32_t v22 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49d04
    *(int32_t *)(g9 + 16) = v22;
    *(int32_t *)(g9 - 4) = v20;
    int32_t v23 = (int32_t)g601; // 0x1e49d0b
    g2 = v23;
    *(int32_t *)(g9 - 8) = *(int32_t *)(v23 + 24);
    int32_t v24 = function_1e45be3((int32_t)&g708); // 0x1e49d13
    g2 = v24;
    *(int32_t *)(g9 - 4) = v24;
    *(int32_t *)(g9 - 8) = (int32_t)"GoodWavePos";
    *(int32_t *)(g9 - 12) = v21;
    int32_t v25 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49d1f
    g2 = v25;
    *(int32_t *)(g9 + 20) = v25;
    *(int32_t *)(g9 - 4) = v20;
    *(int32_t *)(g9 - 8) = 3;
    *(int32_t *)(g9 - 12) = (int32_t)"WaveBlocks";
    *(int32_t *)(g9 - 16) = v21;
    int32_t v26 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49d2e
    g2 = v26;
    *(int32_t *)(g9 + 24) = v26;
    *(int32_t *)(g9 - 4) = v20;
    *(int32_t *)(g9 - 8) = 11;
    *(int32_t *)(g9 - 12) = (int32_t)"SamplesPerSec";
    *(int32_t *)(g9 - 16) = v21;
    int32_t v27 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49d3d
    g2 = v27;
    int32_t v28 = (int32_t)g601; // 0x1e49d41
    g5 = v28;
    int32_t v29; // esi
    struct tWAVEFORMATEX * v30; // 0x1e49ee5
    int32_t * v31; // 0x1e49ec9
    int32_t v32; // 0x1e49ed4
    if ((*(char *)(v28 + 172) & 16) == 0) {
        // 0x1e49d8b
        *(int32_t *)(g9 - 4) = (int32_t)&g604;
        v20 = 0;
        *(int32_t *)(g9 - 8) = 0;
        int32_t v33 = (int32_t)g601 + 28; // 0x1e49d98
        g2 = v33;
        *(int32_t *)(g9 - 12) = v33;
        *(int32_t *)(g9 - 16) = (int32_t)"not compatible";
        int32_t v34 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49da1
        g2 = v34;
        if (v34 == 0) {
            // 0x1e49de2
            *(int32_t *)(g9 - 4) = (int32_t)&g604;
            g2 = (int32_t)g601;
            *(int32_t *)(g9 - 8) = *(int32_t *)(g9 + 16);
            *(int32_t *)(g9 - 12) = (int32_t)"Remix";
            int32_t v35 = g2 + 28; // 0x1e49df5
            g2 = v35;
            *(int32_t *)(g9 - 16) = v35;
            int32_t v36 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49df9
            g2 = v36 == 2 ? 0x1e46b36 : 0x1e46b43;
            g5 = (int32_t)g601;
            *(int32_t *)(g9 - 4) = (int32_t)&g604;
            *(int32_t *)(g5 + 432) = g2;
            *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 24);
            *(int32_t *)(g9 - 8) = (int32_t)"GoodWavePos";
            int32_t v37 = (int32_t)g601 + 28; // 0x1e49e2a
            g2 = v37;
            *(int32_t *)(g9 - 12) = v37;
            int32_t v38 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49e2e
            g2 = v38;
            g5 = (int32_t)g601;
            *(int32_t *)(g9 - 4) = (int32_t)&g604;
            *(int32_t *)(g9 - 8) = *(int32_t *)(g9 + 24);
            *(int32_t *)(g9 - 12) = (int32_t)"WaveBlocks";
            *(int32_t *)(g5 + 420) = (int32_t)(g2 == 0) + 1;
            int32_t v39 = (int32_t)g601 + 28; // 0x1e49e51
            g2 = v39;
            *(int32_t *)(g9 - 4) = v39;
            int32_t v40 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49e55
            g2 = v40;
            *(int32_t *)((int32_t)g601 + 400) = v40;
            int32_t v41 = (int32_t)g601 + 400; // 0x1e49e69
            g5 = v41;
            int32_t * v42 = (int32_t *)v41; // 0x1e49e6f
            int32_t v43 = *v42; // 0x1e49e6f
            g2 = v43;
            if (v43 < 2) {
                // 0x1e49e76
                *v42 = 2;
            } else {
                if (v43 > 10) {
                    // 0x1e49e83
                    *v42 = 10;
                }
            }
            // 0x1e49e89
            *(int32_t *)(g9 - 4) = (int32_t)&g604;
            int32_t v44 = (int32_t)g601; // 0x1e49e8e
            g2 = v44;
            *(int32_t *)(g9 - 8) = *(int32_t *)(v44 + 400);
            *(int32_t *)(g9 - 4) = function_1e45bc0((int32_t)&g708);
            *(int32_t *)(g9 - 8) = (int32_t)"PauseBlocks";
            int32_t v45 = (int32_t)g601 + 28; // 0x1e49ea9
            g2 = v45;
            *(int32_t *)(g9 - 12) = v45;
            int32_t v46 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49ead
            int32_t v47 = (int32_t)g601; // 0x1e49eaf
            g5 = v47;
            *(int32_t *)(v47 + 404) = v46;
            g2 = 0;
            struct tWAVEFORMATEX * v48 = g601; // 0x1e49ebd
            int32_t v49 = (int32_t)v48; // 0x1e49ebd
            int32_t v50 = v49 + 404; // 0x1e49ec3
            g7 = v50;
            v31 = (int32_t *)v50;
            int32_t v51 = *v31; // 0x1e49ec9
            g5 = v51;
            if (v51 >= 0) {
                // 0x1e49ecf
                g2 = v49;
                v32 = *(int32_t *)(v49 + 400);
                g2 = v32;
                if (v32 < v51) {
                    goto lab_0x1e49ede;
                } else {
                    v30 = v48;
                    goto lab_0x1e49ee0;
                }
            } else {
                v32 = 0;
                goto lab_0x1e49ede;
            }
        } else {
            // 0x1e49da7
            if (g484 != v20) {
                // 0x1e49daf
                v29 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
                int32_t v52 = (int32_t)g601 + 28; // 0x1e49db9
                g2 = v52;
                *(int32_t *)(g9 - 4) = v52;
                *(int32_t *)(g9 - 8) = (int32_t)"%s is not compatible with the realtime wavemixer.";
                *(int32_t *)(g9 - 12) = v29;
                g2 = wsprintfA((char *)&g708, (char *)&g708);
                *(int32_t *)(g9 + 8) = 64;
                *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
                *(int32_t *)g9 = v29;
                *(int32_t *)(g9 - 4) = v20;
                g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
            }
            // 0x1e49ddb
            g2 = 0;
            result = 0;
            goto lab_0x1e49fe1;
        }
    } else {
        // 0x1e49d50
        if (g484 != 0) {
            int32_t v53 = v28 + 132; // 0x1e49d59
            g2 = v53;
            v29 = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
            *(int32_t *)(g9 - 4) = v53;
            *(int32_t *)(g9 - 8) = (int32_t)"%s is a syncronous (blocking) wave output device.  This will not permit audio to play while other applications are running.";
            *(int32_t *)(g9 - 12) = v29;
            g2 = wsprintfA((char *)&g708, (char *)&g708);
            *(int32_t *)(g9 + 8) = 64;
            *(int32_t *)(g9 + 4) = (int32_t)"WavMix32";
            *(int32_t *)g9 = v29;
            *(int32_t *)(g9 - 4) = 0;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
        }
        // 0x1e49d84
        g2 = 0;
        result = 0;
        goto lab_0x1e49fe1;
    }
  lab_0x1e49ede:
    // 0x1e49ede
    *v31 = v32;
    v30 = g601;
    goto lab_0x1e49ee0;
  lab_0x1e49ee0:
    // 0x1e49ee0
    g2 = (int32_t)v30;
    *(int32_t *)(g9 - 4) = (int32_t)&g604;
    g2 += 28;
    *(int32_t *)(g9 - 8) = v27;
    *(int32_t *)(g9 - 12) = (int32_t)"SamplesPerSec";
    *(int32_t *)(g9 - 16) = g2;
    int32_t v54 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49ef5
    g3 = v54;
    *(int32_t *)(g9 - 4) = (int32_t)&g604;
    g5 = 1;
    *(int32_t *)(g9 - 8) = 1;
    g2 = (int32_t)g601;
    *(int32_t *)(g9 - 12) = (int32_t)"Channels";
    int32_t v55 = g2 + 28; // 0x1e49f0c
    g2 = v55;
    *(int32_t *)(g9 - 16) = v55;
    int32_t v56 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49f10
    *(int16_t *)((int32_t)g601 + 382) = (int16_t)v56;
    int32_t v57 = (int32_t)g601; // 0x1e49f1f
    g5 = v57;
    int32_t v58 = v57 + 382; // 0x1e49f25
    g2 = v58;
    int16_t * v59 = (int16_t *)v58; // 0x1e49f2b
    uint16_t v60 = *v59; // 0x1e49f2b
    g5 = (int32_t)v60 | v57 & -0x10000;
    if (v60 != 0) {
        if (v60 >= 3) {
            // 0x1e49f41
            *v59 = 2;
        }
    } else {
        // 0x1e49f34
        *v59 = 1;
    }
    int32_t v61 = g3; // 0x1e49f46
    struct tWAVEFORMATEX * v62 = g601; // 0x1e49f64
    int32_t v63 = (int32_t)v62; // 0x1e49f64
    g2 = v63;
    int32_t v64;
    int32_t v65;
    if (v61 == 22) {
        v64 = 0x5622;
        goto lab_0x1e49f75;
    } else {
        if (v61 == 44) {
            v64 = 0xac44;
            goto lab_0x1e49f75;
        } else {
            v65 = 0x2b11 * (int32_t)*(int16_t *)(v63 + 382);
            goto lab_0x1e49f8a;
        }
    }
  lab_0x1e49f75:
    // 0x1e49f75
    g5 = v64;
    *(int32_t *)(v63 + 384) = v64;
    struct tWAVEFORMATEX * v66 = g601; // 0x1e49f7b
    int32_t v67 = (int32_t)v66; // 0x1e49f7b
    g2 = v67;
    int32_t v68 = (int32_t)*(int16_t *)(v67 + 382); // 0x1e49f80
    g2 = v68;
    v62 = v66;
    v65 = g5 * v68;
    goto lab_0x1e49f8a;
  lab_0x1e49f8a:
    // 0x1e49f8a
    g2 = v65;
    g5 = (int32_t)v62;
    *(int32_t *)(g9 - 4) = (int32_t)&g604;
    v20 = 0;
    *(int32_t *)(g5 + 388) = g2;
    *(int32_t *)(g9 - 4) = v20;
    *(int32_t *)(g9 - 8) = (int32_t)"WaveBlockLen";
    *(int32_t *)(g9 - 12) = (int32_t)"default";
    int32_t v69 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e49fa8
    g2 = v69;
    int32_t v70 = (int32_t)g601 + 380; // 0x1e49fb0
    g5 = v70;
    *(int32_t *)(g9 - 4) = v70;
    *(int32_t *)(g9 - 8) = g2;
    int32_t v71 = function_1e482ce((int32_t)&g708, (int32_t)&g708); // 0x1e49fb8
    g2 = v71;
    int32_t v72 = (int32_t)g601; // 0x1e49fbd
    g5 = v72;
    *(int32_t *)(v72 + 396) = v71;
    if (a1 == 0) {
        // 0x1e49fdc
        g2 = 1;
        result = 1;
        goto lab_0x1e49fe1;
    } else {
        // 0x1e49fcd
        *(int32_t *)(g9 - 4) = v20;
        g2 = (int32_t)g601;
        *(int32_t *)(g9 - 8) = v20;
        *(int32_t *)(g9 - 12) = a1;
        *(int32_t *)(g9 - 16) = v20;
        *(int32_t *)(g9 - 20) = g2;
        // 0x1e49fd7
        v2 = function_1e49221((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = v2;
        // 0x1e49fdc
        g2 = 1;
        result = 1;
        goto lab_0x1e49fe1;
    }
}

// Address range: 0x1e49feb - 0x1e4a1e5
int32_t function_1e49feb(int32_t a1) {
    int32_t v1 = g3; // bp-4
    g2 = 0;
    g3 = &v1;
    g5 = 7;
    int32_t v2; // bp-36
    int32_t v3 = &v2; // 0x1e49ff5
    __asm_rep_stosd_memset((char *)&v2, 0, 7);
    bool v4 = g1; // 0x1e49ffd
    int32_t v5 = (v4 ? -28 : 28) + v3; // 0x1e49ffd
    g5 = 0;
    *(int16_t *)v5 = (int16_t)g2;
    g6 = v5 + (v4 ? -2 : 2);
    v2 = 30;
    g8 = a1;
    int32_t v6 = g2; // 0x1e4a00a
    if (v6 != a1) {
        uint16_t v7 = *(int16_t *)a1; // 0x1e4a00e
        int32_t v8 = v6 & -0x10000; // 0x1e4a00e
        int32_t v9; // 0x1e4a01b
        if (v7 >= 30) {
            // 0x1e4a017
            v9 = v8 | 30;
        } else {
            v9 = (int32_t)v7 | v8;
        }
        int32_t v10 = v9 & 0xffff; // 0x1e4a01b
        g2 = v10;
        int32_t v11 = v10 / 4; // 0x1e4a023
        g5 = v11;
        __asm_rep_movsd_memcpy((char *)&v2, (char *)a1, v11);
        int32_t v12 = (g1 ? -4 : 4) * v11 + v3; // 0x1e4a026
        char * v13 = (char *)v12; // 0x1e4a026
        int32_t v14 = g2 & 3; // 0x1e4a02a
        g5 = v14;
        __asm_rep_movsb_memcpy(v13, v13, v14);
        int32_t v15 = (g1 ? -1 : 1) * v14 + v12; // 0x1e4a02d
        g6 = v15;
        g8 = v15;
        g5 = 0;
    }
    // 0x1e4a02f
    int32_t result; // 0x1e4a1d8
    if (g488 != 0) {
        goto lab_0x1e4a051;
    } else {
        int32_t moduleHandle = (int32_t)GetModuleHandleA(NULL); // 0x1e4a03a
        g2 = moduleHandle;
        int32_t v16 = function_1e4a32e(moduleHandle); // 0x1e4a041
        g2 = v16;
        if (v16 != 0) {
            goto lab_0x1e4a051;
        } else {
            // 0x1e4a04a
            g2 = 0;
            result = 0;
            goto lab_0x1e4a1dd;
        }
    }
  lab_0x1e4a051:;
    char v17;
    bool v18; // 0x1e4a078
    if ((v17 & 1) == 0) {
        // 0x1e4a05e
        *(int32_t *)(g9 - 4) = (int32_t)&g604;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = (int32_t)"ShowDebugDialogs";
        *(int32_t *)(g9 - 16) = (int32_t)"general";
        int32_t v19 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e4a06f
        g2 = v19;
        v18 = v19 == 0;
    } else {
        int16_t v20;
        v18 = v20 == 0;
    }
    int32_t v21 = (int32_t)v18 + 1; // 0x1e4a07a
    g2 = v21;
    g484 = v21;
    int32_t v22 = waveOutGetNumDevs(); // 0x1e4a080
    g2 = v22;
    if (v22 != 0) {
        // 0x1e4a0be
        *(int32_t *)(g9 - 4) = (int32_t)&g604;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = (int32_t)"ShowDevices";
        *(int32_t *)(g9 - 16) = (int32_t)"general";
        int32_t v23 = GetPrivateProfileIntA((char *)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708); // 0x1e4a0cf
        g2 = v23;
        if (v23 != 0) {
            // 0x1e4a0d9
            g2 = function_1e48372();
        }
        // 0x1e4a0de
        *(int32_t *)(g9 - 4) = 448;
        *(int32_t *)(g9 - 8) = 64;
        int32_t * memoryHandle = LocalAlloc((int32_t)&g708, (int32_t)&g708); // 0x1e4a0e5
        int32_t v24 = (int32_t)memoryHandle; // 0x1e4a0e5
        g2 = v24;
        g601 = (struct tWAVEFORMATEX *)memoryHandle;
        if (memoryHandle != NULL) {
            // 0x1e4a0fb
            *(int16_t *)(v24 + 444) = 0x5432;
            struct tWAVEFORMATEX * v25 = g601; // 0x1e4a109
            int32_t v26 = (int32_t)v25; // 0x1e4a109
            g2 = v26;
            g5 = v26;
            v25->e0 = *(int16_t *)(v26 + 444);
            g5 = 0;
            *(int32_t *)((int32_t)g601 + 408) = 0;
            *(int32_t *)((int32_t)g601 + 20) = g5;
            *(int16_t *)((int32_t)g601 + 176) = 10;
            *(int16_t *)((int32_t)g601 + 178) = 10;
            g2 = g608;
            *(int32_t *)((int32_t)g601 + 428) = g608;
            int32_t v27 = (int32_t)g601; // 0x1e4a164
            g2 = v27;
            int32_t v28 = g5 + 4; // 0x1e4a169
            g5 = v28;
            *(int32_t *)(v27 + 240 + v28) = -1;
            while (v28 < 64) {
                // 0x1e4a164
                v27 = (int32_t)g601;
                g2 = v27;
                v28 = g5 + 4;
                g5 = v28;
                *(int32_t *)(v27 + 240 + v28) = -1;
            }
            // 0x1e4a17c
            *(int32_t *)(g9 - 4) = 16;
            g2 = (int32_t)g601;
            *(int32_t *)(g9 - 8) = (int32_t)&g69;
            int32_t v29 = g2 + 380; // 0x1e4a188
            g2 = v29;
            *(int32_t *)(g9 - 12) = v29;
            int32_t v30 = function_1e3e040((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e4a18e
            g2 = v30;
            g5 = v3;
            *(int32_t *)(g9 + 8) = v3;
            int32_t v31 = function_1e49bc2((int32_t)&g708); // 0x1e4a19a
            g2 = v31;
            struct tWAVEFORMATEX * v32 = g601;
            struct tWAVEFORMATEX * v33; // 0x1e4a1d2
            if (v31 == 0) {
                // 0x1e4a1a3
                *(int16_t *)((int32_t)v32 + 444) = 0;
                struct tWAVEFORMATEX * v34 = g601; // 0x1e4a1b1
                int32_t v35 = (int32_t)v34; // 0x1e4a1b1
                g2 = v35;
                uint16_t v36 = *(int16_t *)(v35 + 444); // 0x1e4a1b6
                g2 = (int32_t)v36 | v35 & -0x10000;
                g5 = v35;
                v34->e0 = v36;
                *(int32_t *)(g9 - 4) = (int32_t)g601;
                g2 = (int32_t)LocalFree(&g708);
                v33 = (struct tWAVEFORMATEX *)0;
                g601 = v33;
            } else {
                v33 = v32;
            }
            // 0x1e4a1d8
            result = (int32_t)v33;
            g2 = result;
        } else {
            // 0x1e4a0f4
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e4a08a
        if (g484 != 0) {
            // 0x1e4a093
            *(int32_t *)(g9 - 4) = (int32_t)"This system does not have a valid wave output device.";
            *(int32_t *)(g9 - 8) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
            g2 = wsprintfA((char *)&g708, (char *)&g708);
            *(int32_t *)(g9 + 4) = 64;
            *(int32_t *)g9 = (int32_t)"WavMix32";
            *(int32_t *)(g9 - 4) = (int32_t)"WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995";
            *(int32_t *)(g9 - 8) = 0;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
        }
        // 0x1e4a0b7
        g2 = 0;
        result = 0;
    }
    goto lab_0x1e4a1dd;
  lab_0x1e4a1dd:
    // 0x1e4a1dd
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
}

// Address range: 0x1e4a1e5 - 0x1e4a1ed
int32_t function_1e4a1e5(void) {
    int32_t result = function_1e49feb(0); // 0x1e4a1e7
    g2 = result;
    return result;
}

// Address range: 0x1e4a1ed - 0x1e4a295
int32_t function_1e4a1ed(int32_t a1) {
    int32_t v1 = g6; // bp-12
    int32_t v2 = &v1; // 0x1e4a1f3
    if (a1 == 0) {
        goto lab_0x1e4a246;
    } else {
        // 0x1e4a1f8
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e4a246;
        } else {
            // 0x1e4a1ff
            if (*(int16_t *)(a1 + 444) != 0x5432) {
                goto lab_0x1e4a246;
            } else {
                // 0x1e4a246
                g601 = (struct tWAVEFORMATEX *)a1;
                goto lab_0x1e4a24f;
            }
        }
    }
  lab_0x1e4a246:
    // 0x1e4a246
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    g601 = NULL;
    int32_t result;
    result = 5;
    goto lab_0x1e4a28f;
  lab_0x1e4a28f:
    // 0x1e4a28f
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e4a24f:
    // 0x1e4a24f
    *(int32_t *)(v2 - 4) = 0;
    *(int32_t *)(v2 - 8) = a1;
    g2 = function_1e46389((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = a1;
    function_1e47480((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = 0;
    g5 = 112;
    __asm_rep_stosd_memset((char *)g601, 0, 112);
    g5 = 0;
    g601 = (struct tWAVEFORMATEX *)g8;
    if (a1 == 0) {
        result = 5;
        goto lab_0x1e4a28f;
    } else {
        // 0x1e4a27a
        *(int32_t *)(g9 - 4) = a1;
        int32_t * v3 = LocalFree(&g708); // 0x1e4a27b
        g2 = (int32_t)v3;
        if (v3 == NULL) {
            result = 0;
            goto lab_0x1e4a28f;
        } else {
            result = 5;
            goto lab_0x1e4a28f;
        }
    }
}

// Address range: 0x1e4a295 - 0x1e4a2d8
int32_t function_1e4a295(int32_t hModule, int32_t a2) {
    int32_t nameSize = GetModuleFileNameA((int32_t *)hModule, (char *)&g604, 260); // 0x1e4a2a3
    g2 = nameSize;
    int32_t result;
    if (nameSize == 0) {
        result = 0;
        // 0x1e4a2d5
        g2 = result;
        return result;
    }
    int32_t v1 = nameSize + (int32_t)&g604; // 0x1e4a2b1
    g2 = v1;
    int32_t v2; // 0x1e4a2c6
    if (*(char *)v1 != 92) {
        int32_t v3 = v1 - 1; // 0x1e4a2bb
        g2 = v3;
        v2 = v3;
        while (*(char *)v3 != 92) {
            // 0x1e4a2bb
            v3--;
            g2 = v3;
            v2 = v3;
        }
    } else {
        v2 = v1;
    }
    // 0x1e4a2c1
    *(char *)v2 = 0;
    lstrcpyA((char *)g2, "\\WAVEMIX.INF");
    result = 1;
    // 0x1e4a2d5
    g2 = result;
    return result;
}

// Address range: 0x1e4a2d8 - 0x1e4a32e
int32_t function_1e4a2d8(void) {
    // 0x1e4a2d8
    g5 = 0;
    int32_t v1 = 0; // ebx
    int32_t v2 = 0; // esi
    int32_t v3 = 0; // 0x1e4a3028
    int32_t v4 = 0; // 0x1e4a2ea
    while (true) {
        int32_t v5 = -128; // 0x1e4a2f0
        int32_t v6 = -v4; // 0x1e4a300
        g3 = v5 + 1;
        int64_t v7 = 0x100000000 * (int64_t)(v6 >> 31) | (int64_t)v6; // 0x1e4a2fa
        int64_t v8 = v7 / 10; // 0x1e4a2fa
        g7 = v7 % 10;
        unsigned char v9 = (char)v8 ^ -128; // 0x1e4a2fe
        g2 = (int32_t)v9 | (int32_t)v8 & -256;
        *(char *)(v3 + 0x1e56598 + v5) = v9;
        while (g3 < 128) {
            // 0x1e4a2ee
            v5 = g3;
            v6 += v1;
            g3 = v5 + 1;
            v7 = 0x100000000 * (int64_t)(v6 >> 31) | (int64_t)v6;
            v8 = v7 / 10;
            g7 = v7 % 10;
            v9 = (char)v8 ^ -128;
            g2 = (int32_t)v9 | (int32_t)v8 & -256;
            *(char *)(v2 + 0x1e56598 + v5) = v9;
        }
        int32_t v10 = v2 + 256; // 0x1e4a311
        v2 = v10;
        int32_t v11 = g5 + 128; // 0x1e4a317
        g5 = v11;
        v1++;
        if (v11 > 1280) {
            // break -> 0x1e4a326
            break;
        }
        v3 = v10;
        v4 = v11;
    }
    // 0x1e4a326
    return g2;
}

// Address range: 0x1e4a32e - 0x1e4a3f8
int32_t function_1e4a32e(int32_t a1) {
    // 0x1e4a32e
    int32_t lpWndClass; // bp-44
    int32_t v1 = &lpWndClass; // 0x1e4a331
    if (g488 != 0) {
        // 0x1e4a33e
        g2 = 1;
        // 0x1e4a3f1
        g8 = *(int32_t *)g9;
        return 1;
    }
    int32_t v2 = function_1e4a295(a1, g8); // 0x1e4a34b
    g2 = v2;
    if (v2 == 0) {
        // 0x1e4a354
        g2 = 0;
        // 0x1e4a3f1
        g8 = *(int32_t *)g9;
        return 0;
    }
    // 0x1e4a35b
    g8 = 0;
    g2 = function_1e4a2d8();
    g485 = GetPrivateProfileIntA("general", "debug", g8, (char *)&g604);
    g2 = a1;
    g608 = 0x1e45d55;
    g607 = a1;
    g2 = (int32_t)LoadCursorA((int32_t *)g8, (char *)0x7f00);
    GetStockObject(1);
    lpWndClass = g8;
    g2 = g607;
    g5 = v1;
    int16_t v3 = RegisterClassA((struct tagWNDCLASSA *)&lpWndClass); // 0x1e4a3d2
    g2 = 0;
    int32_t result; // 0x1e4a3f5
    if (v3 != 0) {
        // 0x1e4a3e2
        function_1e45f8a();
        g2 = 1;
        g488 = 1;
        result = 1;
    } else {
        result = 0;
    }
    // 0x1e4a3f1
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e4a400 - 0x1e4a422
int32_t function_1e4a400(int32_t a1, int32_t a2) {
    // 0x1e4a400
    g2 = a1;
    int32_t v1 = g8; // 0x1e4a404
    g7 = a1;
    g5 = a2;
    uint16_t v2 = *(int16_t *)a2; // 0x1e4a40c
    int32_t v3 = (int32_t)v2 | v1 & -0x10000; // esi
    *(int16_t *)a1 = v2;
    int32_t v4 = g7 + 2; // 0x1e4a414
    g7 = v4;
    int32_t v5 = g5 + 2; // 0x1e4a417
    g5 = v5;
    while ((int16_t)v3 != 0) {
        // 0x1e4a40c
        v2 = *(int16_t *)v5;
        v3 = (int32_t)v2 | v3 & -0x10000;
        *(int16_t *)v4 = v2;
        v4 = g7 + 2;
        g7 = v4;
        v5 = g5 + 2;
        g5 = v5;
    }
    // 0x1e4a41f
    g8 = v1;
    return g2;
}
