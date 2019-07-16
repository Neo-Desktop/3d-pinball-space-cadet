#include "pinball.h"

// Address range: 0x1e2ad55 - 0x1e2af0e
int32_t function_1e2ad55(int32_t a1, float80_t a2) {
    float32_t v1 = a2;
    g2 = a1;
    int32_t v2 = g8; // 0x1e2ad63
    int32_t v3 = g6; // 0x1e2ad64
    int32_t v4 = g5; // 0x1e2ad65
    g8 = v4;
    if (a1 == 11) {
        // 0x1e2ad96
        g2 = function_1e3dbc0((int32_t)v1, v3, v2);
        int32_t v5 = __ftol(); // 0x1e2ada7
        g2 = v5;
        g6 = v5;
        int32_t v6 = g8; // 0x1e2adae
        int32_t v7 = *(int32_t *)(v6 + 34); // 0x1e2adae
        g2 = v7;
        int32_t v8 = *(int32_t *)(v7 + 4); // 0x1e2adb1
        g5 = v8;
        int32_t v9 = 2 * v5; // 0x1e2adb7
        g5 = v9;
        int32_t v10 = *(int32_t *)(v8 + 4) - 1; // 0x1e2adbe
        g2 = v10;
        int32_t v11; // 0x1e2adc6
        if (v9 > v10) {
            // 0x1e2adc3
            v11 = (v10 - (v10 >> 31)) / 2;
            g2 = v11;
            g6 = v11;
        } else {
            v11 = v5;
        }
        int32_t v12; // 0x1e2add5
        if (v11 < 0) {
            // 0x1e2adce
            g6 = 0;
            v12 = 0;
        } else {
            v12 = v11;
        }
        int32_t v13 = v6 + 78; // 0x1e2add0
        g4 = v13;
        uint32_t v14 = *(int32_t *)v13; // 0x1e2add3
        g2 = v14;
        if (v14 == v12) {
            // 0x1e2af03
            g2 = 0;
            return 0;
        }
        int32_t v15; // 0x1e2ade9
        int32_t v16; // 0x1e2ade9
        if (v14 <= v12) {
            // 0x1e2addf
            g2 = function_1e39a10(*(int32_t *)(v6 + 94));
            g11++;
            v16 = g6;
            v15 = g4;
        } else {
            v16 = v12;
            v15 = v13;
        }
        // 0x1e2ade9
        int32_t v17; // 0x1e2adf9
        int32_t v18; // 0x1e2adf9
        if (*(int32_t *)v15 > v16) {
            // 0x1e2aded
            *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 98);
            g2 = function_1e39a10((int32_t)&g708);
            g11++;
            v18 = g4;
            v17 = g6;
        } else {
            v18 = v15;
            v17 = v16;
        }
        // 0x1e2adf7
        g5 = g8;
        *(int32_t *)v18 = v17;
        g2 = function_1e2accd();
        *(int32_t *)(g9 - 4) = g8;
        *(int32_t *)(g9 - 8) = 11;
        g2 = function_1e328b9((int32_t)&g708, (int32_t)&g708);
        // 0x1e2af03
        g2 = 0;
        return 0;
    }
    if (a1 == 12) {
        int32_t v19 = *(int32_t *)(v4 + 34); // 0x1e2ae11
        g2 = v19;
        int32_t v20 = *(int32_t *)(v4 + 78) + 1; // 0x1e2ae14
        g7 = v20;
        int32_t v21 = *(int32_t *)(v19 + 4); // 0x1e2ae15
        g5 = v21;
        int32_t v22 = 2 * v20; // 0x1e2ae1b
        g5 = v22;
        int32_t v23 = *(int32_t *)(v21 + 4) - 1; // 0x1e2ae22
        g2 = v23;
        int32_t v24; // 0x1e2ae2a
        if (v22 > v23) {
            // 0x1e2ae27
            v24 = (v23 - (v23 >> 31)) / 2;
            g2 = v24;
            g7 = v24;
        } else {
            v24 = v20;
        }
        // 0x1e2ae2e
        g5 = v4;
        g2 = function_1e2ad55(11, (float80_t)v24);
        // 0x1e2af03
        g2 = 0;
        return 0;
    }
    if (a1 == 13) {
        int32_t v25 = *(int32_t *)(v4 + 78) - 1; // 0x1e2ae4b
        int32_t v26;
        int32_t v27; // 0x1e2ae55
        if (v25 < 0) {
            v26 = 0;
            v27 = 0;
        } else {
            v26 = v25;
            v27 = v25;
        }
        // 0x1e2ae50
        g2 = v26;
        g2 = function_1e2ad55(11, (float80_t)v27);
        // 0x1e2af03
        g2 = 0;
        return 0;
    }
    if (a1 == 1020) {
        int32_t v28 = *(int32_t *)(v4 + 30); // 0x1e2ae6d
        g2 = v28;
        int32_t v29 = *(int32_t *)(v4 + 78); // 0x1e2ae70
        g7 = v29;
        int32_t v30 = *(int32_t *)(v28 + 218); // 0x1e2ae76
        g5 = v30;
        *(int32_t *)(v4 + 122 + 8 * v30) = v29;
        int32_t v31 = g8; // 0x1e2ae83
        int32_t v32 = *(int32_t *)(v31 + 6); // 0x1e2ae83
        g2 = v32;
        *(int32_t *)(v31 + 118 + 8 * g5) = v32;
        g2 = function_1e3dbc0((int32_t)v1, v3, v2);
        int32_t v33 = __ftol(); // 0x1e2ae92
        g2 = v33;
        int32_t v34 = g8; // 0x1e2ae97
        *(int32_t *)(v34 + 78) = *(int32_t *)(8 * v33 + 122 + v34);
        int32_t v35 = g8; // 0x1e2aea1
        g5 = v35;
        int32_t v36 = *(int32_t *)(v35 + 118 + 8 * g2); // 0x1e2aea6
        g7 = v36;
        *(int32_t *)(v35 + 6) = v36;
        g2 = function_1e2ad55(11, (float80_t)*(int32_t *)(v35 + 78));
        // 0x1e2af03
        g2 = 0;
        return 0;
    }
    if (a1 != 1024) {
        // 0x1e2af03
        g2 = 0;
        return 0;
    }
    int32_t v37 = *(int32_t *)(v4 + 82); // 0x1e2aeb9
    g2 = v37;
    int32_t v38; // 0x1e2aed3
    if (v37 != 0) {
        // 0x1e2aec0
        g2 = function_1e32771(v37);
        g2 = function_1e2ac7c(*(int32_t *)(g8 + 82));
        v38 = g8;
    } else {
        v38 = v4;
    }
    // 0x1e2aecf
    g6 = 0;
    g2 = *(int32_t *)(v38 + 30);
    *(int32_t *)(v38 + 78) = 0;
    *(int32_t *)(g8 + 6) = g6;
    int32_t v39 = g8; // 0x1e2aee4
    int32_t v40; // 0x1e2aef0
    if (*(int32_t *)(g2 + 214) > g6) {
        int32_t v41 = v39 + 122; // 0x1e2aee4
        g2 = v41;
        int32_t v42 = 1; // edx
        *(int32_t *)v41 = g6;
        *(int32_t *)(g2 - 4) = g6;
        int32_t v43 = g2 + 8; // 0x1e2aeed
        g2 = v43;
        v40 = g8;
        int32_t v44 = *(int32_t *)(v40 + 30); // 0x1e2aef0
        g5 = v44;
        while (*(int32_t *)(v44 + 214) > v42) {
            // 0x1e2aee7
            v42++;
            *(int32_t *)v43 = g6;
            *(int32_t *)(g2 - 4) = g6;
            v43 = g2 + 8;
            g2 = v43;
            v40 = g8;
            v44 = *(int32_t *)(v40 + 30);
            g5 = v44;
        }
    } else {
        v40 = v39;
    }
    // 0x1e2aefb
    *(int32_t *)(g9 - 4) = v40;
    *(int32_t *)(g9 - 8) = 0;
    g2 = function_1e2ac7c((int32_t)&g708);
    // 0x1e2af03
    g2 = 0;
    return 0;
}

// Address range: 0x1e2af0e - 0x1e2af22
int32_t function_1e2af0e(int32_t a1) {
    // 0x1e2af0e
    g2 = a1;
    int32_t result;
    if (a1 < 4) {
        // 0x1e2af1b
        result = *(int32_t *)(4 * a1 + 102 + g5);
    } else {
        result = 0;
    }
    // 0x1e2af1f
    g2 = result;
    return result;
}

// Address range: 0x1e2af22 - 0x1e2af36
int32_t function_1e2af22(int32_t a1, int32_t a2) {
    // 0x1e2af22
    g2 = a1;
    int32_t result; // 0x1e2af33
    if (a1 < 4) {
        // 0x1e2af2b
        *(int32_t *)(4 * a1 + 102 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2af33
    return result;
}

// Address range: 0x1e2af36 - 0x1e2b090
int32_t function_1e2af36(int32_t a1, int32_t a2) {
    // 0x1e2af36
    int32_t v1; // bp-100
    int32_t v2 = &v1; // 0x1e2af39
    int32_t v3 = g6; // 0x1e2af3e
    g6 = 0;
    g2 = function_1e2a3f7(a1, a2, 0, v3);
    g5 = v2;
    *(int32_t *)g8 = (int32_t)&g37;
    *(int32_t *)(g8 + 102) = g6;
    g2 = function_1e39641(a2, g6, v2);
    int32_t v4;
    int32_t v5 = *(int32_t *)v4; // bp-16
    g2 = *(int32_t *)(v4 + 4);
    g4 = 0;
    int32_t v6 = *(int32_t *)(v4 + 8); // bp-28
    g2 = *(int32_t *)(v4 + 12);
    int32_t v7 = function_1e3df20(85); // 0x1e2af86
    g2 = v7;
    int32_t v8; // 0x1e2afab
    if (v7 == 0) {
        // 0x1e2af36
        v8 = g4;
    } else {
        int32_t v9 = g8; // 0x1e2af9d
        g5 = v7;
        int32_t v10;
        int32_t v11 = function_1e305a4(v9, v9 + 5, v10, &v6, &v5); // 0x1e2afa4
        g2 = v11;
        g4 = v11;
        v8 = v11;
    }
    // 0x1e2afab
    g2 = *(int32_t *)v8;
    g5 = v8;
    int32_t v12 = g8; // 0x1e2afaf
    int32_t v13 = v12 + 46; // 0x1e2afaf
    g6 = v13;
    int32_t v14 = *(int32_t *)v13; // 0x1e2afb5
    g5 = v14;
    int32_t v15 = *(int32_t *)v14; // 0x1e2afb7
    g2 = v15;
    int32_t v16; // 0x1e2afc9
    if (*(int32_t *)(v14 + 4) == v15) {
        // 0x1e2afbe
        *(int32_t *)(g9 - 4) = *(int32_t *)(v12 + 42);
        *(int32_t *)(g9 - 8) = g5;
        int32_t v17 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2afc2
        g2 = v17;
        *(int32_t *)g6 = v17;
        v16 = g4;
    } else {
        v16 = v8;
    }
    // 0x1e2afc9
    *(int32_t *)(g9 - 4) = v16;
    g4 = g8 + 106;
    *(int32_t *)(g9 - 8) = *(int32_t *)g6;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 85;
    int32_t v18 = function_1e3df20((int32_t)&g708); // 0x1e2afd6
    g2 = v18;
    if (v18 == 0) {
        // 0x1e2affd
        *(int32_t *)g4 = 0;
    } else {
        // 0x1e2afe2
        *(int32_t *)g9 = (int32_t)&v6;
        *(int32_t *)(g9 - 4) = (int32_t)&v5;
        g5 = v18;
        *(int32_t *)(g9 - 12) = g8 + 5;
        *(int32_t *)(g9 - 16) = g8;
        int32_t v19 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2aff4
        g2 = v19;
        *(int32_t *)g4 = v19;
    }
    int32_t * v20 = (int32_t *)g4; // 0x1e2b003
    int32_t v21 = *v20; // 0x1e2b003
    g5 = v21;
    g2 = *(int32_t *)v21;
    int32_t v22 = *v20; // 0x1e2b00a
    g4 = v22;
    int32_t v23 = *(int32_t *)g6; // 0x1e2b00c
    g5 = v23;
    int32_t v24 = *(int32_t *)v23; // 0x1e2b00e
    g2 = v24;
    int32_t v25; // 0x1e2b020
    if (*(int32_t *)(v23 + 4) == v24) {
        // 0x1e2b015
        *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 42);
        *(int32_t *)(g9 - 8) = g5;
        int32_t v26 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2b019
        g2 = v26;
        *(int32_t *)g6 = v26;
        v25 = g4;
    } else {
        v25 = v22;
    }
    // 0x1e2b020
    *(int32_t *)(g9 - 4) = v25;
    *(int32_t *)(g9 - 8) = *(int32_t *)g6;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g8 + 90) = 0x3f266666;
    *(int32_t *)(g8 + 82) = 0x47435000;
    *(int32_t *)(g8 + 86) = 0x40a00000;
    *(int32_t *)(g9 - 4) = 1202;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = a2;
    int32_t v27 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2b047
    g2 = v27;
    if (v27 != 0) {
        int32_t v28 = *(int32_t *)v27; // 0x1e2b050
        g2 = v28;
        *(int32_t *)(g8 + 90) = v28;
    }
    // 0x1e2b055
    *(int32_t *)(g9 - 4) = 1200;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = a2;
    int32_t v29 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2b05f
    g2 = v29;
    if (v29 != 0) {
        int32_t v30 = *(int32_t *)v29; // 0x1e2b068
        g2 = v30;
        *(int32_t *)(g8 + 82) = v30;
    }
    // 0x1e2b06d
    *(int32_t *)(g9 - 4) = 1201;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = a2;
    int32_t v31 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2b077
    g2 = v31;
    if (v31 != 0) {
        int32_t v32 = *(int32_t *)v31; // 0x1e2b080
        g2 = v32;
        *(int32_t *)(g8 + 86) = v32;
    }
    // 0x1e2b085
    g2 = g8;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return g8;
}

// Address range: 0x1e2b090 - 0x1e2b0ae
int32_t function_1e2b090(char a1) {
    // 0x1e2b090
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b09f
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b0a8
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b0ae - 0x1e2b0c1
int32_t function_1e2b0ae(int32_t a1) {
    // 0x1e2b0ae
    g5 = a1;
    *(int32_t *)(a1 + 102) = 0;
    int32_t result = function_1e2b151(); // 0x1e2b0b9
    g2 = result;
    return result;
}

// Address range: 0x1e2b0c1 - 0x1e2b151
int32_t function_1e2b0c1(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    // 0x1e2b0c1
    g2 = a2;
    g8 = a1;
    *(int32_t *)(a1 + 42) = *(int32_t *)a2;
    int32_t v1 = g8; // 0x1e2b0d8
    int32_t v2 = v1 + 134; // edx
    int32_t v3 = *(int32_t *)(g2 + 4); // 0x1e2b0de
    g2 = v3;
    g6 = a4;
    *(int32_t *)(v1 + 46) = v3;
    g2 = *(int32_t *)v2;
    float80_t v4 = (float80_t)*(float32_t *)(a1 + 70) - (float80_t)a3; // 0x1e2b0e9
    *(float32_t *)(g8 + 70) = (float32_t)v4;
    int32_t v5 = g2; // 0x1e2b0ec
    if (v5 < 5) {
        // 0x1e2b0f1
        *(int32_t *)(4 * v5 + 114 + g8) = g6;
        int32_t * v6 = (int32_t *)v2; // 0x1e2b0f5
        *v6 = *v6 + 1;
    }
    // 0x1e2b0f7
    *(int32_t *)(g5 + 94) = -1;
    int32_t v7 = g5; // 0x1e2b0fe
    int32_t v8; // 0x1e2b123
    if (*(int32_t *)(v7 + 106) != g6) {
        // 0x1e2b103
        *(int32_t *)(v7 + 94) = 1;
        v8 = g5;
    } else {
        v8 = v7;
    }
    int32_t v9 = g8 + 66; // 0x1e2b10a
    int32_t v10 = v8 + 78; // 0x1e2b111
    v2 = v10;
    if ((*(int32_t *)v9 & 0x7fffffff) == 0) {
        int32_t v11 = *(int32_t *)(v8 + 86); // 0x1e2b123
        g2 = v11;
        *(int32_t *)v10 = v11;
    } else {
        float80_t v12 = 20.0L * (float80_t)*(float32_t *)v9; // 0x1e2b119
        *(float32_t *)v10 = (float32_t)v12;
    }
    uint32_t v13 = (int32_t)__asm_fnstsw(g10); // 0x1e2b12d
    g2 = g2 & -0x10000 | v13;
    if ((v13 / 256 & 1) != 0) {
        int32_t v14 = *(int32_t *)(g5 + 86); // 0x1e2b132
        g2 = v14;
        *(int32_t *)v2 = v14;
    }
    uint32_t v15 = (int32_t)__asm_fnstsw(g10); // 0x1e2b13c
    g2 = g2 & -0x10000 | v15;
    if ((v15 / 256 & 65) == 0) {
        int32_t v16 = *(int32_t *)(g5 + 82); // 0x1e2b141
        g2 = v16;
        *(int32_t *)v2 = v16;
    }
    int32_t result = function_1e2b151(); // 0x1e2b146
    g2 = result;
    return result;
}

// Address range: 0x1e2b151 - 0x1e2b210
int32_t function_1e2b151(void) {
    int32_t v1 = g5; // 0x1e2b153
    int32_t v2 = v1 + 98; // 0x1e2b157
    g6 = v2;
    g8 = v1;
    int32_t v3 = *(int32_t *)(v1 + 34) + 4; // edx
    int32_t v4 = *(int32_t *)(v1 + 94); // 0x1e2b15f
    g5 = v4;
    int32_t * v5 = (int32_t *)v2; // 0x1e2b162
    int32_t v6 = *v5 + v4; // 0x1e2b162
    g5 = v6;
    *v5 = v6;
    int32_t v7 = *(int32_t *)v3; // 0x1e2b166
    g2 = v7;
    int32_t v8 = *(int32_t *)(v7 + 4); // 0x1e2b168
    g2 = v8;
    if (v8 > v6) {
        if (v6 < 0) {
            int32_t v9 = v8 - 1; // 0x1e2b17b
            g2 = v9;
            *(int32_t *)g6 = v9;
        }
    } else {
        // 0x1e2b16f
        *(int32_t *)g6 = 0;
    }
    int32_t v10 = *(int32_t *)g6; // 0x1e2b17e
    g5 = v10;
    int32_t v11 = *(int32_t *)v3; // 0x1e2b180
    g2 = v11;
    g4 = *(int32_t *)(4 * v10 + 8 + v11);
    int32_t v12 = g8; // 0x1e2b186
    int32_t v13 = *(int32_t *)(v12 + 30); // 0x1e2b186
    g5 = v13;
    if (*(int32_t *)(v13 + 370) == 0) {
        // 0x1e2b192
        g2 = function_1e328b9(63, v12);
        int32_t v14 = *(int32_t *)(g8 + 70); // 0x1e2b19a
        g2 = v14;
        if (v14 != 0) {
            // 0x1e2b1a1
            g2 = function_1e39a10(v14);
            g11++;
        }
        // 0x1e2b1a9
        if (*(int32_t *)g6 == 0) {
            // 0x1e2b1ae
            *(int32_t *)(g9 - 4) = g8;
            *(int32_t *)(g9 - 8) = 62;
            g2 = function_1e328b9((int32_t)&g708, (int32_t)&g708);
        }
    }
    int32_t v15 = *(int32_t *)(g8 + 30); // 0x1e2b1b6
    g5 = v15;
    int32_t v16 = *(int32_t *)(g4 + 33); // 0x1e2b1b9
    g2 = v16;
    int32_t v17 = v16 - *(int32_t *)(v15 + 238); // 0x1e2b1bf
    g2 = v17;
    *(int32_t *)(g9 - 4) = v17;
    int32_t v18 = *(int32_t *)(g4 + 29); // 0x1e2b1c6
    g2 = v18;
    int32_t v19 = v18 - *(int32_t *)(g5 + 234); // 0x1e2b1c9
    g2 = v19;
    g5 = *(int32_t *)(*(int32_t *)(g8 + 38) + 4);
    *(int32_t *)(g9 - 8) = v19;
    int32_t v20 = *(int32_t *)g6; // 0x1e2b1d3
    g2 = v20;
    *(int32_t *)(g9 - 12) = *(int32_t *)(4 * v20 + 8 + g5);
    *(int32_t *)(g9 - 16) = g4;
    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 26);
    int32_t v21 = function_1e29a04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b1dd
    g2 = v21;
    float32_t * v22 = (float32_t *)(g8 + 78); // 0x1e2b1e5
    float80_t v23 = (float80_t)*(float32_t *)(g8 + 90) * (float80_t)*v22; // 0x1e2b1e5
    *v22 = (float32_t)v23;
    uint32_t v24 = (int32_t)__asm_fnstsw(g10); // 0x1e2b1f1
    int32_t v25 = g2 & -0x10000 | v24; // 0x1e2b1f1
    g2 = v25;
    int32_t result; // 0x1e2b207
    if ((v24 / 256 & 1) == 0) {
        float32_t v26 = *(float32_t *)(g8 + 78); // 0x1e2b1f8
        *(int32_t *)(g9 - 4) = 0x1e2b0ae;
        *(int32_t *)(g9 - 8) = g8;
        *(float32_t *)(g9 - 12) = (float32_t)(1.0L / (float80_t)v26);
        result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = result;
    } else {
        result = v25;
    }
    // 0x1e2b20c
    return result;
}

// Address range: 0x1e2b210 - 0x1e2b270
int32_t function_1e2b210(int32_t a1) {
    int32_t v1 = g5; // 0x1e2b21a
    g8 = v1;
    if (a1 != 1024) {
        // 0x1e2b269
        g2 = 0;
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 102); // 0x1e2b21e
    g2 = v2;
    int32_t v3; // 0x1e2b230
    if (v2 != 0) {
        // 0x1e2b227
        g2 = function_1e32771(v2);
        *(int32_t *)(g8 + 102) = 0;
        v3 = g8;
    } else {
        v3 = v1;
    }
    // 0x1e2b230
    g5 = *(int32_t *)(v3 + 34);
    *(int32_t *)(v3 + 98) = 0;
    int32_t v4 = *(int32_t *)(*(int32_t *)(g5 + 4) + 8); // 0x1e2b23d
    g5 = v4;
    int32_t v5 = *(int32_t *)(g8 + 30); // 0x1e2b240
    int32_t v6 = *(int32_t *)(v4 + 33); // 0x1e2b243
    g2 = v6;
    int32_t v7 = v6 - *(int32_t *)(v5 + 238); // 0x1e2b246
    g2 = v7;
    *(int32_t *)(g9 - 4) = v7;
    int32_t v8 = *(int32_t *)(g5 + 29); // 0x1e2b24d
    g2 = v8;
    int32_t v9 = v8 - *(int32_t *)(v5 + 234); // 0x1e2b250
    g2 = v9;
    *(int32_t *)(g9 - 8) = v9;
    int32_t v10 = *(int32_t *)(*(int32_t *)(g8 + 38) + 4); // 0x1e2b25a
    *(int32_t *)(g9 - 12) = *(int32_t *)(v10 + 8);
    *(int32_t *)(g9 - 16) = g5;
    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 26);
    int32_t v11 = function_1e29a04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b264
    g2 = v11;
    // 0x1e2b269
    g2 = 0;
    return 0;
}

// Address range: 0x1e2b270 - 0x1e2b284
int32_t function_1e2b270(int32_t a1) {
    // 0x1e2b270
    g2 = a1;
    int32_t result;
    if (a1 < 2) {
        // 0x1e2b27d
        result = *(int32_t *)(4 * a1 + 110 + g5);
    } else {
        result = 0;
    }
    // 0x1e2b281
    g2 = result;
    return result;
}

// Address range: 0x1e2b284 - 0x1e2b298
int32_t function_1e2b284(int32_t a1, int32_t a2) {
    // 0x1e2b284
    g2 = a1;
    int32_t result; // 0x1e2b295
    if (a1 < 2) {
        // 0x1e2b28d
        *(int32_t *)(4 * a1 + 110 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2b295
    return result;
}

// Address range: 0x1e2b298 - 0x1e2b2d1
int32_t function_1e2b298(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e2b298
    g2 = function_1e2a3f7(a1, a2, 1, g6);
    g6 = 0;
    *(int32_t *)g8 = (int32_t)&g38;
    int32_t v2 = function_1e3991a(v1, 0); // 0x1e2b2bd
    g2 = v2;
    *(int32_t *)(g8 + 82) = *(int32_t *)v2;
    *(int32_t *)(g8 + 78) = g6;
    g2 = g8;
    g6 = v1;
    return g8;
}

// Address range: 0x1e2b2d1 - 0x1e2b2ef
int32_t function_1e2b2d1(char a1) {
    // 0x1e2b2d1
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b2e0
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b2e9
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b2ef - 0x1e2b368
int32_t function_1e2b2ef(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g5; // 0x1e2b2f3
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2b2f3
    g2 = v2;
    if (*(int32_t *)(v2 + 370) != 0) {
        int32_t v3 = *(int32_t *)(v1 + 54); // 0x1e2b30b
        float80_t v4 = function_1e2f084(a1, a2, a3, v3, *(int32_t *)(v1 + 58), 0x4e6e6b28, 0); // 0x1e2b317
        g2 = (float32_t)v4;
        // 0x1e2b363
        return (float32_t)v4;
    }
    int32_t v5 = *(int32_t *)(v1 + 62); // 0x1e2b320
    int32_t v6 = *(int32_t *)(v1 + 66); // 0x1e2b323
    int32_t v7 = *(int32_t *)(v1 + 58); // 0x1e2b326
    int32_t v8 = *(int32_t *)(v1 + 54); // 0x1e2b329
    g2 = (float32_t)function_1e2f084(a1, a2, a3, v8, v7, v6, v5);
    g11++;
    uint32_t v9 = (int32_t)__asm_fnstsw(g10); // 0x1e2b33d
    int32_t result = g2 & -0x10000 | v9; // 0x1e2b33d
    g2 = result;
    if ((v9 / 256 & 65) != 0) {
        // 0x1e2b363
        return result;
    }
    int32_t v10 = *(int32_t *)(g8 + 74); // 0x1e2b342
    g2 = v10;
    if (v10 != 0) {
        // 0x1e2b349
        g2 = function_1e39a10(v10);
        g11++;
    }
    // 0x1e2b351
    *(int32_t *)(g9 - 4) = 0;
    g2 = g5;
    *(int32_t *)(g9 - 8) = 49;
    int32_t v11 = g8; // 0x1e2b357
    g5 = v11;
    *(int32_t *)(g9 - 12) = v11;
    *(int32_t *)(g9 - 16) = 63;
    int32_t result2 = function_1e328b9((int32_t)&g708, (int32_t)&g708); // 0x1e2b35e
    g2 = result2;
    // 0x1e2b363
    return result2;
}

// Address range: 0x1e2b368 - 0x1e2b3a2
int32_t function_1e2b368(int32_t a1) {
    int32_t v1 = g8; // 0x1e2b368
    g6 = a1;
    g8 = 0;
    *(int32_t *)(a1 + 78) = 0;
    *(char *)(g6 + 5) = 1;
    int32_t v2 = g6; // 0x1e2b377
    int32_t v3 = *(int32_t *)(v2 + 34); // 0x1e2b377
    g2 = v3;
    int32_t v4 = *(int32_t *)(v3 + 4); // 0x1e2b37a
    g5 = v4;
    int32_t result = function_1e29a40(*(int32_t *)(v2 + 26), *(int32_t *)(v4 + 8)); // 0x1e2b383
    g2 = result;
    if (v1 == g8) {
        // 0x1e2b39d
        return result;
    }
    int32_t v5 = *(int32_t *)(g6 + 70); // 0x1e2b38e
    g2 = v5;
    int32_t result2; // 0x1e2b396
    if (v5 != 0) {
        // 0x1e2b395
        result2 = function_1e39a10(v5);
        g2 = result2;
    } else {
        result2 = 0;
    }
    // 0x1e2b39d
    return result2;
}

// Address range: 0x1e2b3a2 - 0x1e2b478
int32_t function_1e2b3a2(int32_t a1, int32_t a2) {
    // 0x1e2b3a2
    g2 = a1;
    int32_t v1 = g8; // 0x1e2b3a6
    int32_t v2 = g6; // 0x1e2b3a7
    int32_t v3 = g5; // 0x1e2b3a8
    g8 = v3;
    if (a1 == 49) {
        // 0x1e2b3c7
        *(char *)(v3 + 5) = 0;
        g2 = function_1e29a40(*(int32_t *)(g8 + 26), 0);
        // 0x1e2b471
        g2 = 0;
        return 0;
    }
    if (a1 == 50) {
        int32_t v4 = function_1e325d2(*(int32_t *)(v3 + 82), v3, 0x1e2b368); // 0x1e2b3e3
        g2 = v4;
        *(int32_t *)(g8 + 78) = v4;
        // 0x1e2b471
        g2 = 0;
        return 0;
    }
    if (a1 == 1020) {
        int32_t v5 = v3 + 6; // 0x1e2b3f4
        g6 = v5;
        int32_t v6 = *(int32_t *)(v3 + 30); // 0x1e2b3f7
        g2 = v6;
        int32_t v7 = *(int32_t *)v5; // 0x1e2b3fd
        g5 = v7;
        int32_t v8 = *(int32_t *)(v6 + 218); // 0x1e2b3ff
        g7 = v8;
        *(int32_t *)(v3 + 98 + 4 * v8) = v7;
        g2 = function_1e3dbc0(a2, v2, v1);
        int32_t v9 = __ftol(); // 0x1e2b414
        g2 = v9;
        int32_t v10 = *(int32_t *)(4 * v9 + 98 + g8); // 0x1e2b419
        g5 = v10;
        g2 = 50;
        *(int32_t *)g6 = v10;
        int32_t v11 = g5; // 0x1e2b426
        g5 = g8;
        int32_t v12 = (int32_t)(v11 != 0) + g2; // 0x1e2b42b
        g2 = v12;
        g2 = function_1e2b3a2(v12, 0);
        // 0x1e2b471
        g2 = 0;
        return 0;
    }
    if (a1 != 1024) {
        // 0x1e2b471
        g2 = 0;
        return 0;
    }
    // 0x1e2b436
    g6 = 0;
    g2 = *(int32_t *)(v3 + 30);
    *(int32_t *)(v3 + 6) = 0;
    int32_t v13 = g6; // 0x1e2b43e
    int32_t v14 = g8; // 0x1e2b446
    int32_t v15; // 0x1e2b45c
    if (*(int32_t *)(g2 + 214) > v13) {
        int32_t v16 = v14 + 98; // 0x1e2b446
        g2 = v16;
        g5 = 0;
        g6 = v13 + 1;
        *(int32_t *)v16 = 0;
        int32_t v17 = g2 + 4; // 0x1e2b44e28
        g2 = v17;
        int32_t v18 = g8; // 0x1e2b45129
        int32_t v19 = g6; // 0x1e2b45436
        int32_t v20; // 0x1e2b451
        if (*(int32_t *)(*(int32_t *)(v18 + 30) + 214) > v19) {
            g6 = v19 + 1;
            *(int32_t *)v17 = g5;
            int32_t v21 = g2 + 4; // 0x1e2b44e
            g2 = v21;
            v20 = g8;
            while (*(int32_t *)(*(int32_t *)(v20 + 30) + 214) > g6) {
                // 0x1e2b44b
                g6++;
                *(int32_t *)v21 = g5;
                v21 = g2 + 4;
                g2 = v21;
                v20 = g8;
            }
        } else {
            v20 = v18;
        }
        v15 = v20;
    } else {
        v15 = v14;
    }
    int32_t v22 = *(int32_t *)(v15 + 78); // 0x1e2b45c
    g2 = v22;
    int32_t v23; // 0x1e2b469
    if (v22 != 0) {
        // 0x1e2b463
        g2 = function_1e32771(v22);
        v23 = g8;
    } else {
        v23 = v15;
    }
    // 0x1e2b469
    *(int32_t *)(g9 - 4) = v23;
    *(int32_t *)(g9 - 8) = 0;
    g2 = function_1e2b368((int32_t)&g708);
    // 0x1e2b471
    g2 = 0;
    return 0;
}

// Address range: 0x1e2b478 - 0x1e2b48c
int32_t function_1e2b478(int32_t a1) {
    // 0x1e2b478
    g2 = a1;
    int32_t result;
    if (a1 < 3) {
        // 0x1e2b485
        result = *(int32_t *)(4 * a1 + 86 + g5);
    } else {
        result = 0;
    }
    // 0x1e2b489
    g2 = result;
    return result;
}

// Address range: 0x1e2b48c - 0x1e2b4a0
int32_t function_1e2b48c(int32_t a1, int32_t a2) {
    // 0x1e2b48c
    g2 = a1;
    int32_t result; // 0x1e2b49d
    if (a1 < 3) {
        // 0x1e2b495
        *(int32_t *)(4 * a1 + 86 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2b49d
    return result;
}

// Address range: 0x1e2b4a0 - 0x1e2b4f0
int32_t function_1e2b4a0(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2b4a3
    g2 = function_1e2a3f7(a1, a2, 1, g6);
    g6 = 0;
    g5 = v3;
    *(int32_t *)g8 = (int32_t)&g39;
    int32_t v4 = g6; // 0x1e2b4c3
    *(int32_t *)(g8 + 82) = v4;
    *(int32_t *)(g8 + 86) = 0x3dcccccd;
    g2 = function_1e39641(a2, v4, v3);
    int32_t v5 = 50; // bp-116
    g5 = g8;
    function_1e2b566(v5, g6);
    g2 = g8;
    g6 = v5;
    g3 = v1;
    return g8;
}

// Address range: 0x1e2b4f0 - 0x1e2b50e
int32_t function_1e2b4f0(char a1) {
    // 0x1e2b4f0
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b4ff
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b508
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b50e - 0x1e2b54d
int32_t function_1e2b50e(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2b50e
    g8 = g5;
    int32_t v1 = function_1e2a5b8(a1, a2, a3); // 0x1e2b51d
    g2 = v1;
    int32_t result; // 0x1e2b544
    if (v1 != 0) {
        // 0x1e2b526
        g2 = g5;
        int32_t v2 = g8; // 0x1e2b52c
        g5 = v2;
        int32_t v3 = function_1e325d2(*(int32_t *)(v2 + 86), v2, 0x1e2b54d); // 0x1e2b539
        g2 = v3;
        int32_t v4 = g8; // 0x1e2b53e
        *(int32_t *)(v4 + 82) = v3;
        result = function_1e328b9(63, v4);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e2b549
    return result;
}

// Address range: 0x1e2b54d - 0x1e2b566
int32_t function_1e2b54d(int32_t a1) {
    // 0x1e2b54d
    g5 = a1;
    g2 = *(int32_t *)a1;
    *(int32_t *)(a1 + 82) = 0;
    return g2;
}

// Address range: 0x1e2b566 - 0x1e2b5f3
int32_t function_1e2b566(int32_t a1, int32_t a2) {
    int32_t v1 = g5; // 0x1e2b568
    g8 = v1;
    int32_t v2; // 0x1e2b594
    if (a1 < 49) {
        goto lab_0x1e2b5ec;
    } else {
        if (a1 > 50) {
            if (a1 != 1024) {
                goto lab_0x1e2b5ec;
            } else {
                int32_t v3 = *(int32_t *)(v1 + 82); // 0x1e2b580
                g2 = v3;
                int32_t v4; // 0x1e2b58d
                if (v3 != 0) {
                    // 0x1e2b587
                    g2 = function_1e32771(v3);
                    v4 = g8;
                } else {
                    v4 = v1;
                }
                // 0x1e2b58d
                *(int32_t *)(v4 + 82) = 0;
                v2 = a1;
                if (v2 == 50) {
                    // 0x1e2b5a7
                    *(char *)(g8 + 5) = 1;
                    goto lab_0x1e2b5ab;
                } else {
                    goto lab_0x1e2b599;
                }
            }
        } else {
            if (a1 == 50) {
                // 0x1e2b5a7
                *(char *)(g8 + 5) = 1;
                goto lab_0x1e2b5ab;
            } else {
                v2 = 49;
                goto lab_0x1e2b599;
            }
        }
    }
  lab_0x1e2b5ec:
    // 0x1e2b5ec
    g2 = 0;
    g8 = *(int32_t *)(g9 + 4);
    return 0;
  lab_0x1e2b599:
    if (v2 == 1024) {
        // 0x1e2b5a7
        *(char *)(g8 + 5) = 1;
        goto lab_0x1e2b5ab;
    } else {
        // 0x1e2b5a1
        *(char *)(g8 + 5) = 0;
        goto lab_0x1e2b5ab;
    }
  lab_0x1e2b5ab:;
    int32_t v5 = *(int32_t *)(g8 + 34); // 0x1e2b5ab
    g2 = v5;
    if (v5 != 0) {
        int32_t v6 = *(int32_t *)(v5 + 4); // 0x1e2b5b2
        g2 = v6;
        int32_t v7 = *(int32_t *)(g8 + 30); // 0x1e2b5b5
        int32_t v8 = 4 * (int32_t)*(char *)(g8 + 5); // 0x1e2b5bc
        g5 = v8;
        int32_t v9 = v6 - v8; // 0x1e2b5bf
        g2 = v9;
        int32_t v10 = *(int32_t *)(v9 + 12); // 0x1e2b5c1
        int32_t v11 = *(int32_t *)(v10 + 33); // 0x1e2b5c4
        g2 = v11;
        int32_t v12 = v11 - *(int32_t *)(v7 + 238); // 0x1e2b5c7
        g2 = v12;
        *(int32_t *)(g9 - 4) = v12;
        int32_t v13 = *(int32_t *)(v10 + 29); // 0x1e2b5ce
        g2 = v13;
        int32_t v14 = v13 - *(int32_t *)(v7 + 234); // 0x1e2b5d1
        g2 = v14;
        *(int32_t *)(g9 - 8) = v14;
        int32_t v15 = *(int32_t *)(*(int32_t *)(g8 + 38) + 4) - g5; // 0x1e2b5de
        g2 = v15;
        *(int32_t *)(g9 - 12) = *(int32_t *)(v15 + 12);
        *(int32_t *)(g9 - 16) = v10;
        *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 26);
        int32_t v16 = function_1e29a04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b5e7
        g2 = v16;
    }
    goto lab_0x1e2b5ec;
}

// Address range: 0x1e2b5f3 - 0x1e2b607
int32_t function_1e2b5f3(int32_t a1) {
    // 0x1e2b5f3
    g2 = a1;
    int32_t result;
    if (a1 < 1) {
        // 0x1e2b600
        result = *(int32_t *)(4 * a1 + 94 + g5);
    } else {
        result = 0;
    }
    // 0x1e2b604
    g2 = result;
    return result;
}

// Address range: 0x1e2b607 - 0x1e2b61b
int32_t function_1e2b607(int32_t a1, int32_t a2) {
    // 0x1e2b607
    g2 = a1;
    int32_t result; // 0x1e2b618
    if (a1 < 1) {
        // 0x1e2b610
        *(int32_t *)(4 * a1 + 94 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2b618
    return result;
}

// Address range: 0x1e2b61b - 0x1e2b682
int32_t function_1e2b61b(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2b61e
    g2 = function_1e2a3f7(a1, a2, 1, g6);
    g5 = v3;
    g6 = 0;
    *(int32_t *)g8 = (int32_t)&g40;
    function_1e39641(a2, g6, v3);
    *(int32_t *)(g8 + 94) = g5;
    int32_t v4 = g6; // 0x1e2b653
    *(int32_t *)(g8 + 86) = v4;
    int32_t v5 = 1024; // bp-116
    int32_t v6 = g8; // 0x1e2b65c
    g5 = v6;
    *(int32_t *)(v6 + 78) = 55;
    *(int32_t *)(g8 + 82) = 5;
    *(int32_t *)(g8 + 66) = 0x4e6e6b28;
    function_1e2b6b6(v5, v4);
    g2 = g8;
    g6 = v5;
    g3 = v1;
    return g8;
}

// Address range: 0x1e2b682 - 0x1e2b6a0
int32_t function_1e2b682(char a1) {
    // 0x1e2b682
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b691
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b69a
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b6a0 - 0x1e2b6b6
int32_t function_1e2b6a0(int32_t a1) {
    // 0x1e2b6a0
    g2 = a1;
    *(int32_t *)(a1 + 86) = 0;
    int32_t result = function_1e328b9(60, a1); // 0x1e2b6ae
    g2 = result;
    return result;
}

// Address range: 0x1e2b6b6 - 0x1e2b778
int32_t function_1e2b6b6(int32_t a1, int32_t a2) {
    // 0x1e2b6b6
    g2 = a1;
    int32_t v1 = g6; // bp-8
    int32_t v2 = g5; // 0x1e2b6bc
    g8 = v2;
    int32_t v3; // 0x1e2b73b
    if (a1 == 51) {
        goto lab_0x1e2b6e6;
    } else {
        if (a1 == 52) {
            // 0x1e2b71c
            *(char *)(v2 + 5) = 1;
            g2 = function_1e39a10(*(int32_t *)(v2 + 90));
            g11++;
            int32_t v4 = g8; // 0x1e2b72a
            int32_t v5 = *(int32_t *)(v4 + 34); // 0x1e2b72a
            g2 = v5;
            int32_t v6 = *(int32_t *)(v5 + 4); // 0x1e2b72d
            g5 = v6;
            g2 = function_1e29a40(*(int32_t *)(v4 + 26), *(int32_t *)(v6 + 8));
            v3 = g8;
            goto lab_0x1e2b73b;
        } else {
            if (a1 == 59) {
                v3 = v2;
                goto lab_0x1e2b73b;
            } else {
                if (a1 != 1011) {
                    if (a1 != 1020) {
                        if (a1 != 1024) {
                            // 0x1e2b771
                            g2 = 0;
                            g8 = *(int32_t *)(g9 + 4);
                            return 0;
                        }
                    }
                }
                goto lab_0x1e2b6e6;
            }
        }
    }
  lab_0x1e2b6e6:;
    int32_t v7 = *(int32_t *)(v2 + 86); // 0x1e2b6e6
    g2 = v7;
    g6 = 0;
    int32_t v8; // 0x1e2b6fa
    if (v7 != 0) {
        // 0x1e2b6ef
        g2 = function_1e32771(v7);
        *(int32_t *)(g8 + 86) = g6;
        v8 = g9;
    } else {
        v8 = &v1;
    }
    // 0x1e2b6f8
    g2 = 0;
    *(int32_t *)(v8 - 4) = 0;
    *(int32_t *)(g8 + 6) = g2;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 26);
    *(char *)(g8 + 5) = (char)g2;
    g2 = function_1e29a40((int32_t)&g708, (int32_t)&g708);
    if (*(int32_t *)(g9 + 12) == 51) {
        // 0x1e2b710
        *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 94);
        g2 = function_1e39a10((int32_t)&g708);
        g11++;
    }
    // 0x1e2b771
    g2 = 0;
    g8 = *(int32_t *)(g9 + 4);
    return 0;
  lab_0x1e2b73b:;
    int32_t v9 = *(int32_t *)(v3 + 86); // 0x1e2b73b
    g2 = v9;
    if (v9 != 0) {
        // 0x1e2b742
        *(int32_t *)(g9 - 4) = v9;
        g2 = function_1e32771((int32_t)&g708);
    }
    // 0x1e2b748
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    *(int32_t *)(g9 - 4) = 0x1e2b6a0;
    *(int32_t *)(g9 - 8) = g8;
    *(float32_t *)(g9 - 12) = (float32_t)(float80_t)*(float32_t *)(g9 + 16);
    int32_t v10 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b769
    g2 = v10;
    *(int32_t *)(g8 + 86) = v10;
    // 0x1e2b771
    g2 = 0;
    g8 = *(int32_t *)(g9 + 4);
    return 0;
}

// Address range: 0x1e2b778 - 0x1e2b7c5
int32_t function_1e2b778(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2b77b
    g2 = function_1e2a3f7(a1, a2, 1, g8);
    g5 = v3;
    *(int32_t *)g8 = (int32_t)&g41;
    g2 = function_1e39641(a2, 0, v3);
    int32_t v4 = g8; // 0x1e2b7b2
    g5 = v4;
    int32_t v5; // edx
    *(int32_t *)(v4 + 82) = v5;
    function_1e2b7e3(1024, 0);
    g2 = g8;
    g3 = v1;
    return g8;
}

// Address range: 0x1e2b7c5 - 0x1e2b7e3
int32_t function_1e2b7c5(char a1) {
    // 0x1e2b7c5
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b7d4
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b7dd
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b7e3 - 0x1e2b84c
int32_t function_1e2b7e3(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // bp-8
    int32_t v2 = g5; // 0x1e2b7e5
    g6 = v2;
    g8 = a1;
    int32_t v3;
    int32_t v4; // 0x1e2b847
    if (a1 == 1020) {
        v4 = &v1;
        goto lab_0x1e2b845;
    } else {
        if (a1 == 53) {
            // 0x1e2b807
            *(char *)(v2 + 5) = 0;
            g2 = function_1e29a40(*(int32_t *)(g6 + 26), 0);
            v3 = g6 + 82;
            goto lab_0x1e2b837;
        } else {
            if (a1 == 54) {
                goto lab_0x1e2b81a;
            } else {
                if (a1 == 1024) {
                    goto lab_0x1e2b81a;
                } else {
                    goto lab_0x1e2b83e;
                }
            }
        }
    }
  lab_0x1e2b845:
    // 0x1e2b845
    g2 = 0;
    g6 = *(int32_t *)v4;
    g8 = *(int32_t *)(v4 + 4);
    return 0;
  lab_0x1e2b837:
    // 0x1e2b837
    g2 = function_1e39a10(*(int32_t *)v3);
    g11++;
    goto lab_0x1e2b83e;
  lab_0x1e2b81a:
    // 0x1e2b81a
    g2 = *(int32_t *)(v2 + 34);
    *(char *)(v2 + 5) = 1;
    int32_t v5 = *(int32_t *)(g2 + 4); // 0x1e2b821
    g5 = v5;
    g2 = function_1e29a40(*(int32_t *)(g6 + 26), *(int32_t *)(v5 + 8));
    if (g8 != 54) {
        goto lab_0x1e2b83e;
    } else {
        // 0x1e2b834
        v3 = g6 + 78;
        goto lab_0x1e2b837;
    }
  lab_0x1e2b83e:
    // 0x1e2b83e
    *(int32_t *)(g9 - 4) = g6;
    *(int32_t *)(g9 - 8) = g8;
    g2 = function_1e328b9((int32_t)&g708, (int32_t)&g708);
    v4 = g9;
    goto lab_0x1e2b845;
}

// Address range: 0x1e2b84c - 0x1e2b8aa
int32_t function_1e2b84c(int32_t a1) {
    // 0x1e2b84c
    int32_t v1; // bp-76
    int32_t v2 = &v1; // 0x1e2b84f
    g2 = v2;
    g6 = g5;
    g2 = function_1e39641(a1, 0, v2);
    g5 = 600;
    int32_t v3 = function_1e3991a(g8, g4); // 0x1e2b879
    g2 = v3;
    int32_t v4 = function_1e29b62(v3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b87f
    g2 = v4;
    g5 = 603;
    int32_t v5 = g4; // 0x1e2b88d
    int32_t v6 = g8; // 0x1e2b895
    int32_t v7 = function_1e3991a(v6, v5); // 0x1e2b896
    g2 = v7;
    int32_t result = function_1e29b62(v7, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2b89c
    g2 = result;
    g6 = v7;
    g8 = v6;
    g4 = v5;
    return result;
}

// Address range: 0x1e2b8aa - 0x1e2b8ca
int32_t function_1e2b8aa(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e2b8aa
    function_1e2a3f7(a1, a2, a3, g8);
    g2 = g8;
    *(int32_t *)g8 = (int32_t)&g42;
    g8 = a1;
    return g2;
}

// Address range: 0x1e2b8ca - 0x1e2b8e8
int32_t function_1e2b8ca(char a1) {
    // 0x1e2b8ca
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2b8d9
        g2 = function_1e3df60(g8);
    }
    // 0x1e2b8e2
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b8e8 - 0x1e2b92a
int32_t function_1e2b8e8(int32_t a1, int32_t a2) {
    // 0x1e2b8e8
    g2 = function_1e2a3f7(a1, a2, 0, g8);
    int32_t v1 = g8; // 0x1e2b8fa
    int32_t v2 = *(int32_t *)(v1 + 34); // 0x1e2b8fa
    g2 = v2;
    *(int32_t *)v1 = (int32_t)&g42;
    *(char *)(g8 + 78) = 0;
    if (v2 != 0) {
        int32_t v3 = *(int32_t *)(v2 + 4); // 0x1e2b90b
        g2 = v3;
        g2 = function_1e29a40(*(int32_t *)(g8 + 26), *(int32_t *)(v3 + 8));
    }
    // 0x1e2b919
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 12);
    g5 = g8;
    function_1e2b84c((int32_t)&g708);
    g2 = g8;
    return g8;
}

// Address range: 0x1e2b92a - 0x1e2b9cb
int32_t function_1e2b92a(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    // 0x1e2b92a
    g2 = a2;
    g8 = g5;
    int32_t v1 = *(int32_t *)a2; // 0x1e2b938
    g5 = v1;
    float80_t v2 = (float80_t)*(float32_t *)(a1 + 70) - (float80_t)a3; // st7
    *(int32_t *)(a1 + 42) = v1;
    g5 = a1 + 134;
    int32_t v3 = *(int32_t *)(g2 + 4); // 0x1e2b949
    g2 = v3;
    *(int32_t *)(a1 + 46) = v3;
    g2 = *(int32_t *)g5;
    *(float32_t *)(a1 + 70) = (float32_t)v2;
    int32_t v4 = g2; // 0x1e2b954
    if (v4 < 5) {
        // 0x1e2b959
        *(int32_t *)(4 * v4 + 114 + a1) = a4;
        int32_t * v5 = (int32_t *)g5; // 0x1e2b960
        *v5 = *v5 + 1;
    }
    int32_t v6 = g8; // 0x1e2b962
    int32_t result = *(int32_t *)(v6 + 30); // 0x1e2b962
    g2 = result;
    if (*(int32_t *)(result + 370) != 0) {
        // 0x1e2b9c5
        return result;
    }
    int32_t v7 = v6 + 78; // 0x1e2b96e
    g6 = v7;
    if (*(char *)v7 == 0) {
        // 0x1e2b98c
        g2 = function_1e39a10(*(int32_t *)(v6 + 70));
        g11++;
        g2 = function_1e328b9(63, g8);
    } else {
        // 0x1e2b976
        g2 = function_1e325d2(0x3dcccccd, v6, 0x1e2b9cb);
        *(char *)(g8 + 5) = 0;
    }
    // 0x1e2b99e
    g2 = *(int32_t *)(g8 + 34);
    char * v8 = (char *)g6; // 0x1e2b9a1
    char v9 = *v8; // 0x1e2b9a1
    g5 = g5 & -256 | (int32_t)(v9 == 0);
    *v8 = (char)(v9 == 0);
    int32_t v10 = g2; // 0x1e2b9aa
    if (v10 == 0) {
        // 0x1e2b9c5
        return 0;
    }
    // 0x1e2b9ae
    int32_t v11;
    if ((char)g5 == 0) {
        int32_t v12 = *(int32_t *)(v10 + 4); // 0x1e2b9b6
        g2 = v12;
        v11 = *(int32_t *)(v12 + 8);
    } else {
        v11 = 0;
    }
    // 0x1e2b9bc
    g2 = v11;
    int32_t result2 = function_1e29a40(*(int32_t *)(g8 + 26), v11); // 0x1e2b9c0
    g2 = result2;
    // 0x1e2b9c5
    return result2;
}

// Address range: 0x1e2b9cb - 0x1e2b9d6
int32_t function_1e2b9cb(int32_t a1) {
    // 0x1e2b9cb
    g2 = a1;
    *(char *)(a1 + 5) = 1;
    return g2;
}

// Address range: 0x1e2b9d6 - 0x1e2ba02
int32_t function_1e2b9d6(int32_t a1) {
    if (a1 != 1024) {
        // 0x1e2b9fd
        g2 = 0;
        return 0;
    }
    // 0x1e2b9e0
    *(char *)(g5 + 5) = 1;
    *(char *)(g5 + 78) = 0;
    int32_t v1 = g5; // 0x1e2b9e8
    int32_t v2 = *(int32_t *)(v1 + 34); // 0x1e2b9e8
    g2 = v2;
    if (v2 != 0) {
        int32_t v3 = *(int32_t *)(v2 + 4); // 0x1e2b9ef
        g2 = v3;
        g2 = function_1e29a40(*(int32_t *)(v1 + 26), *(int32_t *)(v3 + 8));
    }
    // 0x1e2b9fd
    g2 = 0;
    return 0;
}

// Address range: 0x1e2ba02 - 0x1e2ba16
int32_t function_1e2ba02(int32_t a1) {
    // 0x1e2ba02
    g2 = a1;
    int32_t result;
    if (a1 < 2) {
        // 0x1e2ba0f
        result = *(int32_t *)(4 * a1 + 79 + g5);
    } else {
        result = 0;
    }
    // 0x1e2ba13
    g2 = result;
    return result;
}

// Address range: 0x1e2ba16 - 0x1e2ba2a
int32_t function_1e2ba16(int32_t a1, int32_t a2) {
    // 0x1e2ba16
    g2 = a1;
    int32_t result; // 0x1e2ba27
    if (a1 < 2) {
        // 0x1e2ba1f
        *(int32_t *)(4 * a1 + 79 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2ba27
    return result;
}

// Address range: 0x1e2ba2a - 0x1e2ba7c
int32_t function_1e2ba2a(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // 0x1e2ba2c
    g8 = g5;
    g4 = 0;
    g6 = a2;
    g2 = function_1e2b8aa(a1, a2, 0, v1);
    *(int32_t *)g8 = (int32_t)&g43;
    *(char *)(g8 + 78) = (char)g4;
    *(int32_t *)(g8 + 91) = g4;
    int32_t v2 = g8; // 0x1e2ba4c
    int32_t v3 = g4; // 0x1e2ba4c
    if (*(int32_t *)(v2 + 34) != v3) {
        // 0x1e2ba51
        g2 = function_1e29a40(*(int32_t *)(v2 + 26), v3);
    }
    // 0x1e2ba5a
    *(int32_t *)(g9 - 4) = g6;
    g5 = g8;
    g2 = function_1e2b84c((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 407;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = g6;
    int32_t v4 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2ba6a
    g2 = v4;
    int32_t v5 = *(int32_t *)v4; // 0x1e2ba6f
    g2 = v5;
    g6 = *(int32_t *)g9;
    *(int32_t *)(g8 + 87) = v5;
    g2 = g8;
    g4 = *(int32_t *)(g9 + 4);
    return g8;
}

// Address range: 0x1e2ba7c - 0x1e2ba9a
int32_t function_1e2ba7c(char a1) {
    // 0x1e2ba7c
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2ba8b
        g2 = function_1e3df60(g8);
    }
    // 0x1e2ba94
    g2 = g8;
    return g8;
}

// Address range: 0x1e2ba9a - 0x1e2bab3
int32_t function_1e2ba9a(int32_t a1) {
    // 0x1e2ba9a
    g2 = function_1e29a40(*(int32_t *)(a1 + 26), 0);
    *(int32_t *)(a1 + 91) = 0;
    return g2;
}

// Address range: 0x1e2bab3 - 0x1e2bb6b
int32_t function_1e2bab3(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    // 0x1e2bab3
    g2 = a2;
    g8 = g5;
    int32_t v1 = *(int32_t *)a2; // 0x1e2bac2
    g5 = v1;
    int32_t v2 = a1 + 134; // edi
    float80_t v3 = (float80_t)*(float32_t *)(a1 + 70) - (float80_t)a3; // st7
    *(int32_t *)(a1 + 42) = v1;
    int32_t v4 = *(int32_t *)v2; // 0x1e2bad3
    g5 = v4;
    int32_t v5 = *(int32_t *)(g2 + 4); // 0x1e2bad5
    g2 = v5;
    *(int32_t *)(a1 + 46) = v5;
    *(float32_t *)(a1 + 70) = (float32_t)v3;
    if (v4 < 5) {
        // 0x1e2bae3
        g2 = a4;
        *(int32_t *)(a1 + 114 + 4 * g5) = a4;
        int32_t * v6 = (int32_t *)v2; // 0x1e2baea
        *v6 = *v6 + 1;
    }
    int32_t v7 = g8; // 0x1e2baec
    int32_t v8 = *(int32_t *)(v7 + 30); // 0x1e2baec
    g2 = v8;
    g4 = 0;
    if (*(int32_t *)(v8 + 370) != 0) {
        // 0x1e2bb64
        return g2;
    }
    int32_t v9 = v7 + 78; // 0x1e2baf9
    g6 = v9;
    if (*(char *)v9 == 0) {
        // 0x1e2bb34
        g2 = function_1e39a10(*(int32_t *)(v7 + 70));
        g11++;
        int32_t v10 = function_1e328b9(63, g8); // 0x1e2bb41
        g2 = v10;
        char * v11 = (char *)g6; // 0x1e2bb46
        char v12 = *v11; // 0x1e2bb46
        g2 = (int32_t)(v12 == 0) | v10 & -256;
        *v11 = (char)(v12 == 0);
        int32_t v13 = *(int32_t *)(g8 + 34); // 0x1e2bb4f
        g2 = v13;
        if (v13 != 0) {
            int32_t v14 = *(int32_t *)(v13 + 4); // 0x1e2bb56
            g2 = v14;
            g2 = function_1e29a40(*(int32_t *)(g8 + 26), *(int32_t *)(v14 + 8));
        }
    } else {
        // 0x1e2bb00
        g2 = function_1e325d2(0x3dcccccd, v7, 0x1e2b9cb);
        *(char *)(g8 + 5) = (char)g4;
        char * v15 = (char *)g6; // 0x1e2bb13
        char v16 = *v15; // 0x1e2bb13
        g2 = g2 & -256 | (int32_t)(v16 == 0);
        *v15 = (char)(v16 == 0);
        if (*(int32_t *)(g8 + 91) == g4) {
            int32_t v17 = function_1e325d2(*(int32_t *)(g8 + 87), g8, 0x1e2ba9a); // 0x1e2bb2a
            g2 = v17;
            *(int32_t *)(g8 + 91) = v17;
        }
    }
    // 0x1e2bb64
    return g2;
}

// Address range: 0x1e2bb6b - 0x1e2bba6
int32_t function_1e2bb6b(int32_t a1) {
    int32_t v1 = g5; // 0x1e2bb74
    g8 = v1;
    if (a1 != 1024) {
        // 0x1e2bba0
        g2 = 0;
        return 0;
    }
    // 0x1e2bb78
    *(char *)(v1 + 5) = 1;
    *(char *)(g8 + 78) = 0;
    int32_t v2 = g8; // 0x1e2bb80
    int32_t v3 = *(int32_t *)(v2 + 91); // 0x1e2bb80
    g2 = v3;
    int32_t v4; // 0x1e2bb8f
    if (v3 != 0) {
        // 0x1e2bb87
        g2 = function_1e32771(v3);
        v4 = g8;
    } else {
        v4 = v2;
    }
    // 0x1e2bb8d
    g2 = 0;
    *(int32_t *)(v4 + 91) = 0;
    int32_t v5 = g2; // 0x1e2bb92
    if (*(int32_t *)(g8 + 34) != v5) {
        // 0x1e2bb97
        *(int32_t *)(g9 - 4) = v5;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 26);
        g2 = function_1e29a40((int32_t)&g708, (int32_t)&g708);
    }
    // 0x1e2bba0
    g2 = 0;
    return 0;
}

// Address range: 0x1e2bba6 - 0x1e2bbc4
int32_t function_1e2bba6(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e2bba6
    g8 = g5;
    function_1e2b8aa(a1, a2, 1, v1);
    g2 = g8;
    *(int32_t *)g8 = (int32_t)&g44;
    return g2;
}

// Address range: 0x1e2bbc4 - 0x1e2bbe2
int32_t function_1e2bbc4(char a1) {
    // 0x1e2bbc4
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2bbd3
        g2 = function_1e3df60(g8);
    }
    // 0x1e2bbdc
    g2 = g8;
    return g8;
}

// Address range: 0x1e2bbe2 - 0x1e2bc3e
int32_t function_1e2bbe2(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    // 0x1e2bbe2
    g2 = a2;
    g8 = g5;
    int32_t v1 = *(int32_t *)a2; // 0x1e2bbf0
    g5 = v1;
    float80_t v2 = (float80_t)*(float32_t *)(a1 + 70) - (float80_t)a3; // st7
    g6 = a1 + 134;
    *(int32_t *)(a1 + 42) = v1;
    int32_t v3 = *(int32_t *)(g2 + 4); // 0x1e2bc01
    g2 = v3;
    g5 = *(int32_t *)g6;
    *(int32_t *)(a1 + 46) = v3;
    *(float32_t *)(a1 + 70) = (float32_t)v2;
    if (g5 < 5) {
        // 0x1e2bc11
        g2 = a4;
        *(int32_t *)(a1 + 114 + 4 * g5) = a4;
        int32_t * v4 = (int32_t *)g6; // 0x1e2bc18
        *v4 = *v4 + 1;
    }
    int32_t v5 = g8; // 0x1e2bc1a
    int32_t v6 = *(int32_t *)(v5 + 30); // 0x1e2bc1a
    g2 = v6;
    int32_t result; // 0x1e2bc33
    if (*(int32_t *)(v6 + 370) == 0) {
        // 0x1e2bc26
        g2 = function_1e39a10(*(int32_t *)(v5 + 70));
        g11++;
        result = function_1e328b9(63, g8);
        g2 = result;
    } else {
        result = v6;
    }
    // 0x1e2bc38
    return result;
}

// Address range: 0x1e2bc3e - 0x1e2bc7c
int32_t function_1e2bc3e(int32_t a1, int32_t a2) {
    // 0x1e2bc3e
    function_1e2a3f7(a1, a2, 1, g8);
    g2 = 0;
    *(int32_t *)g8 = (int32_t)&g45;
    *(int32_t *)(g8 + 6) = g2;
    *(int32_t *)(g8 + 86) = g2;
    *(int32_t *)(g8 + 78) = 0x3f333333;
    *(int32_t *)(g8 + 82) = 0x3dcccccd;
    *(int32_t *)(g8 + 66) = 0x4e6e6b28;
    *(int32_t *)(g8 + 90) = g2;
    g2 = g8;
    return g8;
}

// Address range: 0x1e2bc7c - 0x1e2bc9a
int32_t function_1e2bc7c(char a1) {
    // 0x1e2bc7c
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2bc8b
        g2 = function_1e3df60(g8);
    }
    // 0x1e2bc94
    g2 = g8;
    return g8;
}

// Address range: 0x1e2bc9a - 0x1e2bd10
int32_t function_1e2bc9a(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g5; // 0x1e2bc9e
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2bc9e
    g2 = v2;
    int32_t v3 = g6; // bp-12
    g8 = v1;
    if (*(int32_t *)(v2 + 370) != 0) {
        int32_t v4 = *(int32_t *)(v1 + 58); // 0x1e2bcb2
        int32_t v5 = *(int32_t *)(v1 + 54); // 0x1e2bcb5
        float80_t v6 = function_1e2f084(a1, a2, a3, v5, v4, 0, *(int32_t *)(v1 + 62)); // 0x1e2bcc1
        g2 = (float32_t)v6;
        // 0x1e2bd0a
        return (float32_t)v6;
    }
    int32_t v7 = v1 + 90; // 0x1e2bcca
    g6 = v7;
    int32_t * v8 = (int32_t *)v7; // 0x1e2bccd
    int32_t v9; // 0x1e2bcf0
    if (*v8 == 0) {
        // 0x1e2bcd2
        *v8 = 1;
        *(int32_t *)(g8 + 66) = 0x4e6e6b28;
        int32_t v10 = g8; // 0x1e2bce4
        int32_t v11 = function_1e325d2(*(int32_t *)(v10 + 78), v10, 0x1e2bd10); // 0x1e2bce8
        g2 = v11;
        *(int32_t *)(g8 + 86) = v11;
        v9 = g9;
    } else {
        v9 = &v3;
    }
    // 0x1e2bcf0
    *(int32_t *)(v9 - 4) = a3;
    *(int32_t *)(v9 - 8) = a2;
    *(int32_t *)(v9 - 12) = a1;
    g5 = g8;
    int32_t v12 = function_1e2a5b8((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2bcfb
    g2 = v12;
    int32_t result; // 0x1e2bd0d
    if (v12 != 0) {
        // 0x1e2bd04
        *(int32_t *)g6 = 0;
        result = g2;
    } else {
        result = 0;
    }
    // 0x1e2bd0a
    return result;
}

// Address range: 0x1e2bd10 - 0x1e2bdbd
int32_t function_1e2bd10(int32_t a1) {
    // 0x1e2bd10
    g8 = a1;
    g6 = 0;
    if (*(int32_t *)(a1 + 90) == 0) {
        int32_t v1 = *(int32_t *)(a1 + 34); // 0x1e2bd73
        g2 = v1;
        int32_t v2; // 0x1e2bda9
        if (v1 != 0) {
            int32_t v3 = *(int32_t *)(v1 + 4); // 0x1e2bd7a
            g2 = v3;
            int32_t v4 = *(int32_t *)(a1 + 30); // 0x1e2bd7d
            int32_t v5 = *(int32_t *)(v3 + 8); // 0x1e2bd80
            g5 = v5;
            int32_t v6 = *(int32_t *)(v5 + 33); // 0x1e2bd83
            g2 = v6;
            int32_t v7 = v6 - *(int32_t *)(v4 + 238); // 0x1e2bd86
            g2 = v7;
            int32_t v8 = *(int32_t *)(v5 + 29); // 0x1e2bd8d
            g2 = v8;
            int32_t v9 = v8 - *(int32_t *)(v4 + 234); // 0x1e2bd90
            g2 = v9;
            int32_t v10 = *(int32_t *)(*(int32_t *)(a1 + 38) + 4); // 0x1e2bd9a
            int32_t v11 = *(int32_t *)(a1 + 26); // 0x1e2bda1
            g2 = function_1e29a04(v11, v5, *(int32_t *)(v10 + 8), v9, v7);
            v2 = g8;
        } else {
            v2 = a1;
        }
        // 0x1e2bda9
        *(int32_t *)(v2 + 86) = 0;
        *(int32_t *)(g9 - 4) = g8;
        *(int32_t *)(g9 - 8) = 60;
        int32_t result = function_1e328b9((int32_t)&g708, (int32_t)&g708); // 0x1e2bdb3
        g2 = result;
        // 0x1e2bdb8
        return result;
    }
    // 0x1e2bd1d
    *(int32_t *)(a1 + 66) = 0;
    int32_t v12 = g8; // 0x1e2bd25
    int32_t v13 = function_1e325d2(*(int32_t *)(v12 + 82), v12, 0x1e2bd10); // 0x1e2bd29
    g2 = v13;
    *(int32_t *)(g8 + 86) = v13;
    g2 = function_1e39a10(*(int32_t *)(g8 + 74));
    int32_t v14 = *(int32_t *)(g8 + 34); // 0x1e2bd3b
    g2 = v14;
    int32_t result2; // 0x1e2bd6c
    if (v14 != 0) {
        int32_t v15 = *(int32_t *)(v14 + 4); // 0x1e2bd42
        g2 = v15;
        int32_t v16 = *(int32_t *)(g8 + 30); // 0x1e2bd45
        int32_t v17 = *(int32_t *)(v15 + 12); // 0x1e2bd48
        g5 = v17;
        int32_t v18 = *(int32_t *)(v17 + 33); // 0x1e2bd4b
        g2 = v18;
        int32_t v19 = v18 - *(int32_t *)(v16 + 238); // 0x1e2bd4e
        g2 = v19;
        int32_t v20 = *(int32_t *)(v17 + 29); // 0x1e2bd55
        g2 = v20;
        int32_t v21 = v20 - *(int32_t *)(v16 + 234); // 0x1e2bd58
        g2 = v21;
        int32_t v22 = *(int32_t *)(*(int32_t *)(*(int32_t *)(g8 + 38) + 4) + 12); // 0x1e2bd65
        result2 = function_1e29a04(*(int32_t *)(g8 + 26), v17, v22, v21, v19);
        g2 = result2;
    } else {
        result2 = 0;
    }
    // 0x1e2bdb8
    return result2;
}

// Address range: 0x1e2bdbd - 0x1e2be04
int32_t function_1e2bdbd(int32_t a1) {
    // 0x1e2bdbd
    g2 = a1;
    int32_t v1 = g5; // 0x1e2bdc2
    g8 = v1;
    if (a1 != 1011) {
        if (a1 != 1024) {
            // 0x1e2bdfe
            g2 = 0;
            return 0;
        }
    }
    int32_t v2 = *(int32_t *)(v1 + 86); // 0x1e2bdd2
    g2 = v2;
    if (v2 == 0) {
        // 0x1e2bdfe
        g2 = 0;
        return 0;
    }
    // 0x1e2bdd9
    g2 = function_1e32771(v2);
    if (*(int32_t *)(g8 + 34) != 0) {
        // 0x1e2bde5
        g2 = function_1e29a40(*(int32_t *)(g8 + 26), 0);
    }
    // 0x1e2bdef
    *(int32_t *)(g8 + 66) = 0x4e6e6b28;
    g2 = 0;
    *(int32_t *)(g8 + 86) = 0;
    *(int32_t *)(g8 + 90) = g2;
    // 0x1e2bdfe
    g2 = 0;
    return 0;
}

// Address range: 0x1e2be04 - 0x1e2bfbb
int32_t function_1e2be04(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-96
    int32_t v3 = &v2; // 0x1e2be07
    g4 = g5;
    function_1e2a3f7(a1, a2, 0, g6);
    g2 = a3 == 0;
    *(int32_t *)g4 = (int32_t)&g46;
    int32_t v4 = g2; // 0x1e2be28
    int32_t v5 = -v4; // 0x1e2be28
    g2 = v5;
    *(int32_t *)(g4 + 82) = v5;
    if (v4 != 0) {
        // 0x1e2be31
        *(char *)(g4 + 5) = 0;
    }
    // 0x1e2be35
    g8 = 0;
    *(int32_t *)(g4 + 6) = 0;
    *(int32_t *)(g4 + 86) = g8;
    int32_t v6 = g8; // 0x1e2be42
    *(int32_t *)(g4 + 78) = v6;
    *(int32_t *)(g4 + 90) = 0x3fc00000;
    *(int32_t *)(g4 + 94) = 0x3d4ccccd;
    int32_t v7 = function_1e3991a(a2, v6); // 0x1e2be57
    g2 = v7;
    int32_t v8 = *(int32_t *)v7; // 0x1e2be5c
    g2 = v8;
    float32_t v9 = v8; // bp-12
    int32_t v10 = function_1e3991a(a2, g8); // 0x1e2be6a
    g2 = v10;
    int32_t v11 = *(int32_t *)v10; // 0x1e2be6f
    g5 = v11;
    *(int32_t *)(g4 + 106) = v11;
    function_1e39641(a2, g8, v3);
    *(int32_t *)(g4 + 74) = v3;
    int32_t v12 = g8; // 0x1e2be90
    int32_t v13 = v12 + 8; // 0x1e2be90
    g2 = v13;
    int32_t v14 = *(int32_t *)v12; // 0x1e2be93
    g5 = v14;
    *(int32_t *)(g4 + 110) = v14;
    *(int32_t *)(g4 + 114) = *(int32_t *)(g8 + 4);
    float80_t v15 = (float80_t)*(float32_t *)g2 * (float80_t)v9; // 0x1e2bea3
    *(float32_t *)(g4 + 122) = (float32_t)v15;
    int32_t * v16 = (int32_t *)(g4 + 122); // 0x1e2bea9
    if ((*v16 & 0x7fffffff) == 0) {
        // 0x1e2beb2
        *v16 = 0x3a83126f;
    }
    int32_t v17 = function_1e3df20(37); // 0x1e2bebb
    float32_t v18 = v17;
    g2 = v17;
    int32_t v19; // 0x1e2bf00
    float32_t v20; // 0x1e2bf216
    if (v17 == 0) {
        // 0x1e2bef9
        v9 = 0.0f;
        v20 = 0.0f;
        v19 = 0;
    } else {
        int32_t v21 = g4; // 0x1e2bec7
        float80_t v22 = (float80_t)*(float32_t *)(v21 + 122); // 0x1e2bec7
        *(int32_t *)v17 = (int32_t)&g28;
        float32_t v23 = v18; // 0x1e2bed8
        int32_t v24 = (int32_t)v23 + 21; // edi
        *(int32_t *)((int32_t)v23 + 4) = g4;
        *(int32_t *)((int32_t)v18 + 8) = v21 + 5;
        *(int32_t *)((int32_t)v18 + 17) = g5;
        *(char *)((int32_t)v18 + 12) = 0;
        *(int32_t *)(int32_t)v18 = (int32_t)&g29;
        *(float32_t *)((int32_t)v18 + 33) = (float32_t)(v22 * v22);
        *(int32_t *)v24 = *(int32_t *)g8;
        int32_t v25 = g1 ? -4 : 4; // 0x1e2bef1
        int32_t v26 = v25 + v24; // 0x1e2bef1
        int32_t v27 = v25 + g8; // 0x1e2bef1
        *(int32_t *)v26 = *(int32_t *)v27;
        int32_t v28 = v26 + v25; // 0x1e2bef2
        *(int32_t *)v28 = *(int32_t *)(v27 + v25);
        g6 = v28 + v25;
        int32_t v29 = *(int32_t *)&v18; // 0x1e2bef43
        *(int32_t *)&v9 = v29;
        v20 = v29;
        v19 = v29;
    }
    // 0x1e2bf00
    g2 = v19;
    g5 = v19;
    int32_t v30 = g4; // 0x1e2bf0a
    int32_t v31 = v30 + 46; // 0x1e2bf0a
    g8 = v31;
    int32_t v32 = *(int32_t *)v31; // 0x1e2bf0d
    g5 = v32;
    int32_t v33 = *(int32_t *)v32; // 0x1e2bf0f
    g2 = v33;
    float32_t v34; // 0x1e2bf21
    if (*(int32_t *)(v32 + 4) == v33) {
        int32_t v35 = function_1e3a739(v32, *(int32_t *)(v30 + 42)); // 0x1e2bf1a
        g2 = v35;
        *(int32_t *)g8 = v35;
        v34 = v9;
    } else {
        v34 = v20;
    }
    // 0x1e2bf21
    *(int32_t *)(g9 - 4) = (int32_t)v34;
    *(int32_t *)(g9 - 8) = *(int32_t *)g8;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    g5 = v13;
    *(int32_t *)(g9 - 4) = 408;
    *(int32_t *)(g9 - 8) = 0;
    float80_t v36 = (float80_t)*(float32_t *)g5; // st7
    *(int32_t *)(g9 - 12) = a2;
    *(float32_t *)(g4 + 122) = (float32_t)v36;
    int32_t v37 = g4; // 0x1e2bf3d
    float32_t * v38 = (float32_t *)(v37 + 122); // 0x1e2bf3d
    int32_t v39; // bp-64
    g8 = &v39;
    g6 = v37 + 130;
    *v38 = (float32_t)(v36 * (float80_t)*v38);
    int32_t v40 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2bf4c
    g2 = v40;
    int32_t v41 = *(int32_t *)(v40 + 8); // 0x1e2bf51
    g5 = v41;
    *(int32_t *)(g4 + 98) = v41;
    *(int32_t *)g6 = v39;
    int32_t v42 = g1 ? -4 : 4; // 0x1e2bf57
    int32_t v43 = v42 + g6; // 0x1e2bf57
    int32_t v44 = v42 + g8; // 0x1e2bf57
    *(int32_t *)v43 = *(int32_t *)v44;
    *(int32_t *)(v43 + v42) = *(int32_t *)(v44 + v42);
    int32_t v45 = g4; // 0x1e2bf69
    g5 = *(int32_t *)(v45 + 122);
    int32_t v46; // bp-24
    int32_t v47 = &v46; // 0x1e2bf6c
    int32_t v48 = v45 + 110; // esi
    float32_t v49;
    *(float32_t *)(g4 + 150) = (float32_t)(0.01L * (float80_t)v49);
    *(int32_t *)(g4 + 146) = g2;
    v9 = g5;
    int32_t v50 = g4; // 0x1e2bf87
    g5 = v50 + 154;
    g2 = v50 + 5;
    v46 = *(int32_t *)v48;
    int32_t v51 = v47 + v42; // 0x1e2bf90
    int32_t v52 = v48 + v42; // 0x1e2bf90
    *(int32_t *)v51 = *(int32_t *)v52;
    int32_t v53 = v51 + v42; // 0x1e2bf91
    int32_t v54 = v52 + v42; // 0x1e2bf91
    *(int32_t *)v53 = *(int32_t *)v54;
    g6 = v53 + v42;
    g8 = v54 + v42;
    *(int32_t *)(g9 - 4) = g5;
    *(int32_t *)(g9 - 8) = 0;
    int32_t v55 = g4; // 0x1e2bf99
    *(int32_t *)(v55 + 162) = v55;
    *(int32_t *)g5 = g2;
    *(int32_t *)(g4 + 158) = g7;
    g2 = v47;
    *(int32_t *)(g9 - 4) = v47;
    function_1e319ad(v46, (int32_t)&g708, (int32_t)&g708);
    int32_t result = g4; // 0x1e2bfb0
    g2 = result;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return result;
}

// Address range: 0x1e2bfbb - 0x1e2bfc0
int32_t function_1e2bfbb(void) {
    int32_t result = function_1e2a510(); // 0x1e2bfbb
    g2 = result;
    return result;
}

// Address range: 0x1e2bfc0 - 0x1e2bfde
int32_t function_1e2bfc0(char a1) {
    // 0x1e2bfc0
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2bfcf
        g2 = function_1e3df60(g8);
    }
    // 0x1e2bfd8
    g2 = g8;
    return g8;
}

// Address range: 0x1e2bfde - 0x1e2c048
int32_t function_1e2bfde(int32_t a1) {
    int32_t v1 = g5; // 0x1e2bfdf
    g8 = v1;
    if (*(int32_t *)(v1 + 78) != 0) {
        // 0x1e2c044
        return g2;
    }
    // 0x1e2bfe7
    *(int32_t *)(v1 + 66) = 0x4e6e6b28;
    *(int32_t *)(g8 + 78) = 1;
    g5 = a1;
    *(int32_t *)(g8 + 102) = a1;
    *(int32_t *)(g5 + 106) = g8;
    int32_t v2 = *(int32_t *)(g8 + 110); // 0x1e2bfff
    g2 = v2;
    *(int32_t *)(g5 + 42) = v2;
    int32_t v3 = g5; // 0x1e2c005
    g2 = *(int32_t *)(v3 + 50);
    *(int32_t *)(v3 + 46) = *(int32_t *)(g8 + 114);
    int32_t v4 = g8; // 0x1e2c00e
    *(int32_t *)(v4 + 126) = g2;
    *(int32_t *)(g5 + 50) = *(int32_t *)(v4 + 98);
    int32_t v5 = g8; // 0x1e2c017
    int32_t v6 = *(int32_t *)(v5 + 30); // 0x1e2c017
    g5 = v6;
    int32_t result; // 0x1e2c03f
    if (*(int32_t *)(v6 + 370) == 0) {
        // 0x1e2c032
        g2 = function_1e39a10(*(int32_t *)(v5 + 70));
        g11++;
        result = function_1e328b9(63, g8);
        g2 = result;
    } else {
        // 0x1e2c023
        g2 = v6;
        g5 = v5;
        result = v6;
    }
    // 0x1e2c044
    return result;
}

// Address range: 0x1e2c048 - 0x1e2c060
int32_t function_1e2c048(int32_t a1) {
    // 0x1e2c048
    g2 = a1;
    int32_t v1; // 0x1e2c056
    if (*(int32_t *)(a1 + 82) == 0) {
        // 0x1e2c052
        *(char *)(a1 + 5) = 1;
        v1 = g2;
    } else {
        v1 = a1;
    }
    // 0x1e2c056
    *(int32_t *)(v1 + 86) = 0;
    return g2;
}

// Address range: 0x1e2c060 - 0x1e2c0c2
int32_t function_1e2c060(int32_t a1) {
    // 0x1e2c060
    g8 = a1;
    g4 = 0;
    int32_t * v1 = (int32_t *)(a1 + 78); // 0x1e2c068
    if (*v1 == 0) {
        // 0x1e2c0bd
        g8 = *(int32_t *)g9;
        return g2;
    }
    // 0x1e2c06d
    *v1 = 0;
    int32_t v2 = g8; // 0x1e2c075
    int32_t v3 = function_1e325d2(*(int32_t *)(v2 + 94), v2, 0x1e2c048); // 0x1e2c079
    g2 = v3;
    *(int32_t *)(g8 + 86) = v3;
    int32_t * v4 = (int32_t *)(g8 + 102); // 0x1e2c081
    int32_t v5 = *v4; // 0x1e2c081
    g5 = v5;
    if (v5 != 0) {
        // 0x1e2c088
        *v4 = g4;
        *(int32_t *)(v5 + 50) = *(int32_t *)(g8 + 126);
        int32_t v6 = g8; // 0x1e2c091
        int32_t v7 = v6 + 130; // 0x1e2c091
        g2 = v7;
        int32_t v8 = *(int32_t *)(v6 + 146); // 0x1e2c09d
        int32_t v9 = *(int32_t *)(v6 + 142); // 0x1e2c0a3
        g2 = function_1e29f0d(v5, v7, v9, v8, *(int32_t *)(v6 + 150));
        *(char *)(g8 + 5) = (char)g4;
        g2 = function_1e39a10(*(int32_t *)(g8 + 74));
    }
    // 0x1e2c0bd
    g8 = *(int32_t *)g9;
    return g2;
}

