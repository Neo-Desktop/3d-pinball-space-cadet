#include "pinball.h"

// Address range: 0x1e2c0c2 - 0x1e2c143
int32_t function_1e2c0c2(int32_t a1, int32_t a2) {
    // 0x1e2c0c2
    float32_t v1; // bp-16
    int32_t v2 = &v1; // 0x1e2c0c5
    int32_t v3 = g5; // 0x1e2c0ca
    int32_t result; // 0x1e2c140
    if (*(int32_t *)(v3 + 78) == 0) {
        // 0x1e2c0d6
        v1 = *(float32_t *)(v3 + 110) - *(float32_t *)(a1 + 42);
        float32_t v4 = *(float32_t *)(v3 + 114); // 0x1e2c0e2
        float32_t v5 = *(float32_t *)(a1 + 46); // 0x1e2c0e5
        g2 = 0;
        int32_t v6; // fpsw
        if (((int32_t)__asm_fnstsw(v6) / 256 & 65) != 0) {
            // 0x1e2c103
            g2 = v2;
            g2 = (float32_t)function_1e30d19(v2);
            float32_t v7 = *(float32_t *)(a1 + 54); // 0x1e2c10e
            float32_t v8 = *(float32_t *)(a1 + 66); // 0x1e2c111
            g2 = a2;
            float32_t v9 = *(float32_t *)(v3 + 106); // 0x1e2c119
            *(float32_t *)a2 = (float32_t)((float80_t)v9 * (float80_t)v1 - (float80_t)v7 * (float80_t)v8);
            float32_t v10 = *(float32_t *)(a1 + 58); // 0x1e2c123
            float32_t v11 = *(float32_t *)(a1 + 66); // 0x1e2c126
            float32_t v12 = *(float32_t *)(v3 + 106); // 0x1e2c12b
            *(float32_t *)(g2 + 4) = (float32_t)(((float80_t)v4 - (float80_t)v5) * (float80_t)v12 - (float80_t)v10 * (float80_t)v11);
            g2 = 1;
            result = 1;
        } else {
            result = 0;
        }
    } else {
        // 0x1e2c0d2
        g2 = 0;
        result = 0;
    }
    // 0x1e2c13b
    return result;
}

// Address range: 0x1e2c143 - 0x1e2c1b6
int32_t function_1e2c143(int32_t a1, int32_t a2) {
    // 0x1e2c143
    g2 = a1;
    int32_t v1 = g5; // 0x1e2c14e
    g8 = v1;
    if (a1 == 55) {
        // 0x1e2c162
        if (*(int32_t *)(v1 + 78) == 0) {
            // 0x1e2c1af
            g2 = 0;
            return 0;
        }
        int32_t v2; // 0x1e2c171
        if (a2 <= -1 && a2 != -0x80000000) {
            // 0x1e2c171
            v2 = *(int32_t *)(v1 + 90);
            g2 = v2;
        } else {
            v2 = a2;
        }
        int32_t v3 = function_1e325d2(v2, v1, 0x1e2c060); // 0x1e2c180
        g2 = v3;
        *(int32_t *)(g8 + 86) = v3;
        // 0x1e2c1af
        g2 = 0;
        return 0;
    }
    int32_t v4; // 0x1e2c1ab
    if (a1 != 1011) {
        if (a1 != 1024) {
            // 0x1e2c1af
            g2 = 0;
            return 0;
        }
        // 0x1e2c18a
        if (*(int32_t *)(v1 + 78) != 0) {
            int32_t v5 = *(int32_t *)(v1 + 86); // 0x1e2c190
            g2 = v5;
            int32_t v6; // 0x1e2c19d
            int32_t v7; // 0x1e2c19d
            if (v5 != 0) {
                // 0x1e2c197
                g2 = function_1e32771(v5);
                v7 = g9;
                v6 = g8;
            } else {
                int32_t v8; // esi
                v7 = &v8;
                v6 = v1;
            }
            // 0x1e2c19d
            *(int32_t *)(v7 - 4) = v6;
            *(int32_t *)(v7 - 8) = 0;
            g2 = function_1e2c060((int32_t)&g708);
            v4 = g8;
        } else {
            v4 = v1;
        }
    } else {
        v4 = v1;
    }
    // 0x1e2c1a5
    if (*(int32_t *)(v4 + 82) != 0) {
        // 0x1e2c1ab
        *(char *)(v4 + 5) = 0;
    }
    // 0x1e2c1af
    g2 = 0;
    return 0;
}

// Address range: 0x1e2c1b6 - 0x1e2c1cd
int32_t function_1e2c1b6(int32_t a1) {
    // 0x1e2c1b6
    g2 = a1;
    int32_t result;
    if (a1 < 5) {
        // 0x1e2c1c3
        result = *(int32_t *)(4 * a1 + 166 + g5);
    } else {
        result = 0;
    }
    // 0x1e2c1ca
    g2 = result;
    return result;
}

// Address range: 0x1e2c1cd - 0x1e2c1e4
int32_t function_1e2c1cd(int32_t a1, int32_t a2) {
    // 0x1e2c1cd
    g2 = a1;
    int32_t result; // 0x1e2c1e1
    if (a1 < 5) {
        // 0x1e2c1d6
        *(int32_t *)(4 * a1 + 166 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2c1e1
    return result;
}

// Address range: 0x1e2c1e4 - 0x1e2c3b1
int32_t function_1e2c1e4(int32_t a1, int32_t a2) {
    // 0x1e2c1e4
    g4 = g5;
    g2 = function_1e2a3f7(a1, a2, 0, g6);
    *(int32_t *)g4 = (int32_t)&g47;
    *(int32_t *)(g4 + 6) = g8;
    *(int32_t *)(g4 + 86) = g8;
    int32_t v1 = g8; // 0x1e2c20e
    *(int32_t *)(g4 + 78) = v1;
    *(int32_t *)(g4 + 94) = 0x3d4ccccd;
    int32_t v2 = function_1e3991a(a2, v1); // 0x1e2c21c
    g2 = v2;
    if (v2 == 0) {
        // 0x1e2c22c
        *(int32_t *)(g4 + 90) = 0x3e800000;
    } else {
        int32_t v3 = *(int32_t *)v2; // 0x1e2c225
        g2 = v3;
        *(int32_t *)(g4 + 90) = v3;
    }
    int32_t v4 = function_1e3991a(a2, 0); // 0x1e2c23d
    g2 = v4;
    if (v4 == 0) {
        // 0x1e2c24d
        *(int32_t *)(g4 + 98) = 0x3f000000;
    } else {
        int32_t v5 = *(int32_t *)v4; // 0x1e2c246
        g2 = v5;
        *(int32_t *)(g4 + 98) = v5;
    }
    // 0x1e2c254
    g8 = 0;
    int32_t v6 = function_1e3991a(a2, 0); // 0x1e2c25f
    g2 = v6;
    int32_t v7 = *(int32_t *)v6; // 0x1e2c264
    g2 = v7;
    float32_t v8 = v7; // bp-12
    int32_t v9 = function_1e3991a(a2, g8); // 0x1e2c272
    g2 = v9;
    int32_t v10 = *(int32_t *)v9; // 0x1e2c277
    g5 = v10;
    *(int32_t *)(g4 + 110) = v10;
    int32_t v11; // bp-96
    g2 = function_1e39641(a2, g8, (int32_t)&v11);
    int32_t v12;
    int32_t v13 = *(int32_t *)v12; // 0x1e2c28c
    g2 = v13;
    g5 = v12 + 8;
    *(int32_t *)(g4 + 114) = v13;
    int32_t v14 = g5; // 0x1e2c294
    *(int32_t *)(g4 + 118) = *(int32_t *)(g8 + 4);
    float80_t v15 = (float80_t)*(float32_t *)g5 * (float80_t)v8; // 0x1e2c29f
    *(float32_t *)(g4 + 126) = (float32_t)v15;
    int32_t * v16 = (int32_t *)(g4 + 126); // 0x1e2c2a5
    if ((*v16 & 0x7fffffff) == 0) {
        // 0x1e2c2ae
        *v16 = 0x3a83126f;
    }
    int32_t v17 = function_1e3df20(37); // 0x1e2c2b7
    float32_t v18 = v17;
    g2 = v17;
    int32_t v19; // 0x1e2c2fc
    float32_t v20; // 0x1e2c31d6
    if (v17 == 0) {
        // 0x1e2c2f5
        v8 = 0.0f;
        v20 = 0.0f;
        v19 = 0;
    } else {
        int32_t v21 = g4; // 0x1e2c2c3
        float80_t v22 = (float80_t)*(float32_t *)(v21 + 126); // 0x1e2c2c3
        *(int32_t *)v17 = (int32_t)&g28;
        float32_t v23 = v18; // 0x1e2c2d4
        int32_t v24 = (int32_t)v23 + 21; // edi
        *(int32_t *)((int32_t)v23 + 4) = g4;
        *(int32_t *)((int32_t)v18 + 8) = v21 + 5;
        *(int32_t *)((int32_t)v18 + 17) = g5;
        *(char *)((int32_t)v18 + 12) = 0;
        *(int32_t *)(int32_t)v18 = (int32_t)&g29;
        *(float32_t *)((int32_t)v18 + 33) = (float32_t)(v22 * v22);
        *(int32_t *)v24 = *(int32_t *)g8;
        int32_t v25 = g1 ? -4 : 4; // 0x1e2c2ed
        int32_t v26 = v25 + v24; // 0x1e2c2ed
        int32_t v27 = v25 + g8; // 0x1e2c2ed
        *(int32_t *)v26 = *(int32_t *)v27;
        int32_t v28 = v26 + v25; // 0x1e2c2ee
        *(int32_t *)v28 = *(int32_t *)(v27 + v25);
        g6 = v28 + v25;
        int32_t v29 = *(int32_t *)&v18; // 0x1e2c2f03
        *(int32_t *)&v8 = v29;
        v20 = v29;
        v19 = v29;
    }
    // 0x1e2c2fc
    g2 = v19;
    g5 = v19;
    int32_t v30 = g4; // 0x1e2c306
    int32_t v31 = v30 + 46; // 0x1e2c306
    g8 = v31;
    int32_t v32 = *(int32_t *)v31; // 0x1e2c309
    g5 = v32;
    int32_t v33 = *(int32_t *)v32; // 0x1e2c30b
    g2 = v33;
    float32_t v34; // 0x1e2c31d
    if (*(int32_t *)(v32 + 4) == v33) {
        int32_t v35 = function_1e3a739(v32, *(int32_t *)(v30 + 42)); // 0x1e2c316
        g2 = v35;
        *(int32_t *)g8 = v35;
        v34 = v8;
    } else {
        v34 = v20;
    }
    // 0x1e2c31d
    *(int32_t *)(g9 - 4) = (int32_t)v34;
    *(int32_t *)(g9 - 8) = *(int32_t *)g8;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    g5 = v14;
    *(int32_t *)(g9 - 4) = 408;
    *(int32_t *)(g9 - 8) = 0;
    float80_t v36 = (float80_t)*(float32_t *)g5; // st7
    *(int32_t *)(g9 - 12) = a2;
    *(float32_t *)(g4 + 126) = (float32_t)v36;
    float32_t * v37 = (float32_t *)(g4 + 126); // 0x1e2c339
    *v37 = (float32_t)(v36 * (float80_t)*v37);
    int32_t v38 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2c33f
    g2 = v38;
    g5 = *(int32_t *)(v38 + 8);
    *(int32_t *)(g9 - 4) = 1304;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g4 + 102) = g5;
    *(int32_t *)(g9 - 4) = a2;
    int32_t v39 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2c354
    g2 = v39;
    *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v39;
    int32_t v40; // bp-24
    int32_t v41 = &v40; // 0x1e2c361
    g6 = v41;
    int32_t v42 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c364
    g2 = v42;
    int32_t v43 = g4 + 114; // esi
    int32_t v44 = __ftol(); // 0x1e2c36f
    g2 = v44;
    int32_t v45 = g4; // 0x1e2c374
    g5 = *(int32_t *)(v45 + 126);
    *(int32_t *)(v45 + 106) = v44;
    g2 = g4 + 5;
    v8 = g5;
    v40 = *(int32_t *)v43;
    int32_t v46 = g1 ? -4 : 4; // 0x1e2c380
    int32_t v47 = v46 + g6; // 0x1e2c380
    int32_t v48 = v46 + v43; // 0x1e2c380
    *(int32_t *)v47 = *(int32_t *)v48;
    int32_t v49 = v47 + v46; // 0x1e2c381
    int32_t v50 = v48 + v46; // 0x1e2c381
    *(int32_t *)v49 = *(int32_t *)v50;
    g6 = v49 + v46;
    g8 = v50 + v46;
    int32_t v51 = g4 + 130; // 0x1e2c383
    g5 = v51;
    *(int32_t *)(g9 - 4) = v51;
    int32_t v52 = g4; // 0x1e2c38d
    *(int32_t *)(v52 + 138) = v52;
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)g5 = g2;
    g2 = v41;
    *(int32_t *)(g4 + 134) = g7;
    *(int32_t *)(g9 - 4) = v41;
    function_1e319ad(v40, (int32_t)&g708, (int32_t)&g708);
    int32_t result = g4; // 0x1e2c3a6
    g2 = result;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e2c3b1 - 0x1e2c3b6
int32_t function_1e2c3b1(void) {
    int32_t result = function_1e2a510(); // 0x1e2c3b1
    g2 = result;
    return result;
}

// Address range: 0x1e2c3b6 - 0x1e2c3d4
int32_t function_1e2c3b6(char a1) {
    // 0x1e2c3b6
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2c3c5
        g2 = function_1e3df60(g8);
    }
    // 0x1e2c3ce
    g2 = g8;
    return g8;
}

// Address range: 0x1e2c3d4 - 0x1e2c43b
int32_t function_1e2c3d4(int32_t a1) {
    int32_t v1 = g5; // 0x1e2c3d6
    g8 = v1;
    g6 = 0;
    if (*(int32_t *)(v1 + 78) != 0) {
        // 0x1e2c436
        return g2;
    }
    // 0x1e2c3df
    g5 = a1;
    *(int32_t *)(v1 + 82) = 0;
    *(int32_t *)(g8 + 66) = 0x4e6e6b28;
    *(int32_t *)(g8 + 78) = 1;
    *(int32_t *)(g5 + 106) = g8;
    int32_t v2 = g8; // 0x1e2c3fc
    int32_t v3 = *(int32_t *)(v2 + 114); // 0x1e2c3fc
    g2 = v3;
    *(int32_t *)(g5 + 42) = v3;
    *(int32_t *)(g5 + 46) = *(int32_t *)(g8 + 118);
    *(int32_t *)(g5 + 62) = g6;
    int32_t v4 = function_1e325d2(0x3f000000, v2, 0x1e2c43b); // 0x1e2c411
    g2 = v4;
    int32_t v5 = g8; // 0x1e2c416
    g5 = *(int32_t *)(v5 + 30);
    *(int32_t *)(v5 + 86) = v4;
    if (*(int32_t *)(g5 + 370) == g6) {
        // 0x1e2c424
        g2 = function_1e39a10(*(int32_t *)(g8 + 74));
        g11++;
        g2 = function_1e328b9(57, g8);
    }
    // 0x1e2c436
    return g2;
}

// Address range: 0x1e2c43b - 0x1e2c450
int32_t function_1e2c43b(int32_t a1) {
    // 0x1e2c43b
    g2 = a1;
    *(int32_t *)(a1 + 82) = 1;
    *(int32_t *)(g2 + 86) = 0;
    return g2;
}

// Address range: 0x1e2c450 - 0x1e2c538
int32_t function_1e2c450(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // edx
    float32_t v2; // bp-16
    int32_t v3 = &v2; // 0x1e2c455
    int32_t v4 = g5; // 0x1e2c45a
    g8 = v4;
    int32_t result; // 0x1e2c535
    if (*(int32_t *)(v4 + 78) == 0) {
        // 0x1e2c4ca
        v2 = *(float32_t *)(v4 + 114) - *(float32_t *)(a1 + 42);
        float32_t v5 = *(float32_t *)(v4 + 118); // 0x1e2c4d6
        float32_t v6 = *(float32_t *)(a1 + 46); // 0x1e2c4d9
        g2 = 0;
        if (((int32_t)__asm_fnstsw(g10) / 256 & 65) != 0) {
            // 0x1e2c4f7
            g2 = v3;
            g2 = (float32_t)function_1e30d19(v3);
            float32_t v7 = *(float32_t *)(a1 + 54); // 0x1e2c502
            float32_t v8 = *(float32_t *)(a1 + 66); // 0x1e2c505
            g2 = a2;
            float32_t v9 = *(float32_t *)(g8 + 110); // 0x1e2c50d
            *(float32_t *)a2 = (float32_t)((float80_t)v9 * (float80_t)v2 - (float80_t)v7 * (float80_t)v8);
            float32_t v10 = *(float32_t *)(a1 + 58); // 0x1e2c517
            float32_t v11 = *(float32_t *)(a1 + 66); // 0x1e2c51a
            float32_t v12 = *(float32_t *)(g8 + 110); // 0x1e2c51f
            *(float32_t *)(g2 + 4) = (float32_t)(((float80_t)v5 - (float80_t)v6) * (float80_t)v12 - (float80_t)v10 * (float80_t)v11);
            g2 = 1;
            result = 1;
        } else {
            result = 0;
        }
    } else {
        // 0x1e2c462
        if (*(int32_t *)(v4 + 82) != 0) {
            // 0x1e2c467
            g6 = a1;
            int32_t v13 = *(int32_t *)(v4 + 30); // 0x1e2c46a
            g2 = v13;
            float32_t v14 = *(float32_t *)(v13 + 270); // 0x1e2c46d
            float32_t v15 = *(float32_t *)(a1 + 74); // 0x1e2c473
            int32_t v16 = a1 + 62; // 0x1e2c476
            g5 = v16;
            int32_t v17 = a1 + 50; // ebx
            float32_t v18 = *(float32_t *)(v4 + 98); // 0x1e2c47c
            float32_t * v19 = (float32_t *)v16; // 0x1e2c47f
            float32_t v20 = *v19; // 0x1e2c47f
            *v19 = (float32_t)((float80_t)v20 - (float80_t)v14 * (float80_t)v15 * (float80_t)v18);
            float32_t * v21 = (float32_t *)v17; // 0x1e2c486
            *v21 = *(float32_t *)(g6 + 62) + *v21;
            uint32_t v22 = (int32_t)__asm_fnstsw(g10); // 0x1e2c490
            g2 = g2 & -0x10000 | v22;
            if ((v22 / 256 & 65) != 0) {
                int32_t v23 = g8; // 0x1e2c495
                g2 = *(int32_t *)(v23 + 102);
                *(int32_t *)(v23 + 78) = v1;
                *(int32_t *)(g8 + 82) = v1;
                *(int32_t *)v17 = g2;
                *(int32_t *)(g6 + 110) = *(int32_t *)(g8 + 106);
                *(int32_t *)(g6 + 106) = v1;
                *(int32_t *)g5 = v1;
                *(int32_t *)(g6 + 58) = v1;
                *(int32_t *)(g6 + 54) = v1;
                *(int32_t *)(g6 + 66) = v1;
                g2 = function_1e39a10(*(int32_t *)(g8 + 70));
                g11++;
                g2 = function_1e328b9(58, g8);
            }
        }
        // 0x1e2c4c6
        g2 = 0;
        result = 0;
    }
    // 0x1e2c52f
    return result;
}

// Address range: 0x1e2c538 - 0x1e2c566
int32_t function_1e2c538(int32_t a1) {
    int32_t v1 = g5; // 0x1e2c541
    g8 = v1;
    if (a1 != 1024 || *(int32_t *)(v1 + 78) == 0) {
        // 0x1e2c560
        g2 = 0;
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 86); // 0x1e2c54b
    g2 = v2;
    int32_t v3; // 0x1e2c558
    int32_t v4; // 0x1e2c558
    if (v2 != 0) {
        // 0x1e2c552
        g2 = function_1e32771(v2);
        v4 = g9;
        v3 = g8;
    } else {
        int32_t v5; // esi
        v4 = &v5;
        v3 = v1;
    }
    // 0x1e2c558
    *(int32_t *)(v4 - 4) = v3;
    *(int32_t *)(v4 - 8) = 0;
    g2 = function_1e2c43b((int32_t)&g708);
    // 0x1e2c560
    g2 = 0;
    return 0;
}

// Address range: 0x1e2c566 - 0x1e2c57a
int32_t function_1e2c566(int32_t a1) {
    // 0x1e2c566
    g2 = a1;
    int32_t result;
    if (a1 < 4) {
        // 0x1e2c573
        result = *(int32_t *)(4 * a1 + 78 + g5);
    } else {
        result = 0;
    }
    // 0x1e2c577
    g2 = result;
    return result;
}

// Address range: 0x1e2c57a - 0x1e2c58e
int32_t function_1e2c57a(int32_t a1, int32_t a2) {
    // 0x1e2c57a
    g2 = a1;
    int32_t result; // 0x1e2c58b
    if (a1 < 4) {
        // 0x1e2c583
        *(int32_t *)(4 * a1 + 78 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2c58b
    return result;
}

// Address range: 0x1e2c58e - 0x1e2c687
int32_t function_1e2c58e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e2c58e
    g5 = a3;
    int32_t v1; // 0x1e2c598
    int32_t v2 = &v1; // 0x1e2c595
    v1 = *(int32_t *)a3;
    g2 = v1;
    int32_t v3 = g6; // bp-52
    int32_t v4 = &v3; // 0x1e2c5a5
    int32_t v5 = *(int32_t *)(a3 + 8); // bp-28
    g2 = a2;
    int32_t v6; // 0x1e2c67e
    int32_t result; // 0x1e2c684
    if (a2 >= 1) {
        int32_t v7 = a1 + 12; // 0x1e2c5ca
        int32_t v8 = &v5; // 0x1e2c5d4
        int32_t * v9 = (int32_t *)a4; // 0x1e2c66e
        int32_t v10 = v4; // 0x1e2c5d3
        int32_t v11 = a2;
        while (true) {
            int32_t v12 = v7 + 8; // 0x1e2c5cd
            int32_t v13 = v7 + 16; // edi
            *(int32_t *)(v10 - 4) = v12;
            g2 = v8;
            *(int32_t *)(v10 - 8) = v8;
            float80_t v14 = function_1e30de3(v11, (int32_t)&g708); // 0x1e2c5d8
            g11++;
            *(int32_t *)(g9 - 4) = v7;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            float80_t v15 = function_1e30de3((int32_t)(float32_t)v14, (int32_t)&g708); // 0x1e2c5e5
            g2 = (float32_t)v15;
            g11++;
            uint32_t v16 = (int32_t)__asm_fnstsw(g10); // 0x1e2c5f3
            g2 = g2 & -0x10000 | v16;
            if ((v16 / 256 & 1) != 0) {
                // 0x1e2c5f8
                g2 = (float32_t)(v14 + v15);
                g5 = a4;
                *v9 = v7;
                *(int32_t *)a5 = v12;
            }
            // 0x1e2c608
            *(int32_t *)(g9 - 4) = v13;
            g2 = v8;
            *(int32_t *)(g9 - 8) = v8;
            float80_t v17 = function_1e30de3((int32_t)&g708, (int32_t)&g708); // 0x1e2c60d
            g11++;
            *(int32_t *)(g9 - 4) = v12;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            float80_t v18 = function_1e30de3((int32_t)(float32_t)v17, (int32_t)&g708); // 0x1e2c61a
            g2 = (float32_t)v18;
            g11++;
            uint32_t v19 = (int32_t)__asm_fnstsw(g10); // 0x1e2c628
            g2 = g2 & -0x10000 | v19;
            if ((v19 / 256 & 1) != 0) {
                // 0x1e2c62d
                g2 = (float32_t)(v17 + v18);
                g5 = a4;
                *v9 = v12;
                *(int32_t *)a5 = v13;
            }
            // 0x1e2c63d
            *(int32_t *)(g9 - 4) = v13;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            float80_t v20 = function_1e30de3((int32_t)&g708, (int32_t)&g708); // 0x1e2c642
            g11++;
            *(int32_t *)(g9 - 4) = v7;
            g2 = v8;
            *(int32_t *)(g9 - 8) = v8;
            float80_t v21 = function_1e30de3((int32_t)(float32_t)v20, (int32_t)&g708); // 0x1e2c64f
            g2 = (float32_t)v21;
            g11++;
            uint32_t v22 = (int32_t)__asm_fnstsw(g10); // 0x1e2c65d
            g2 = g2 & -0x10000 | v22;
            if ((v22 / 256 & 1) != 0) {
                // 0x1e2c662
                g2 = (float32_t)(v20 + v21);
                g5 = a4;
                *v9 = v13;
                *(int32_t *)a5 = v7;
            }
            int32_t v23 = v11 - 1; // 0x1e2c675
            if (v23 == 0) {
                // break -> 0x1e2c67e
                break;
            }
            v10 = g9;
            v7 += 52;
            v11 = v23;
        }
        // 0x1e2c67e
        result = g2;
        v6 = g9;
    } else {
        result = a2;
        v6 = v4;
    }
    // 0x1e2c67e
    g8 = *(int32_t *)(v6 + 4);
    g4 = *(int32_t *)(v6 + 8);
    return result;
}

// Address range: 0x1e2c687 - 0x1e2cd1a
int32_t function_1e2c687(int32_t a1, int32_t a2) {
    // 0x1e2c687
    int32_t v1; // bp-148
    int32_t v2 = &v1; // 0x1e2c68a
    int32_t v3 = g6; // 0x1e2c692
    g6 = 0;
    g2 = function_1e2a3f7(a1, a2, 0, v3);
    g5 = v2;
    *(int32_t *)g8 = (int32_t)&g48;
    *(int32_t *)(g8 + 6) = g6;
    *(char *)(g8 + 4) = 1;
    g2 = function_1e39641(a2, g6, v2);
    int32_t v4 = function_1e3991a(a2, g6); // 0x1e2c6cf
    g2 = v4;
    if (v4 == 0) {
        // 0x1e2c6df
        *(int32_t *)(g8 + 118) = 0x3e4ccccd;
    } else {
        int32_t v5 = *(int32_t *)v4; // 0x1e2c6d8
        g2 = v5;
        *(int32_t *)(g8 + 118) = v5;
    }
    int32_t v6 = function_1e3991a(a2, 0); // 0x1e2c6f0
    g2 = v6;
    if (v6 == 0) {
        // 0x1e2c713
        *(int32_t *)(g8 + 110) = 0;
    } else {
        float32_t v7 = *(float32_t *)v6; // 0x1e2c6f9
        int32_t v8 = function_1e3dbc0((int32_t)v7, (int32_t)&g708, (int32_t)&g708); // 0x1e2c701
        g2 = v8;
        int32_t v9 = __ftol(); // 0x1e2c709
        g2 = v9;
        *(int32_t *)(g8 + 110) = v9;
    }
    int32_t v10 = function_1e3991a(a2, 0); // 0x1e2c724
    g2 = v10;
    float32_t v11 = *(float32_t *)v10; // 0x1e2c729
    g6 = v10 + 4;
    int32_t v12 = function_1e3dbc0((int32_t)v11, (int32_t)&g708, (int32_t)&g708); // 0x1e2c736
    g2 = v12;
    int32_t v13 = __ftol(); // 0x1e2c73e
    g2 = v13;
    *(int32_t *)(g8 + 114) = v13;
    *(int32_t *)(g8 + 122) = g6;
    int32_t v14 = function_1e3991a(a2, 0); // 0x1e2c753
    g2 = v14;
    float32_t v15 = *(float32_t *)v14; // 0x1e2c758
    g4 = 1;
    g6 = v14 + 8;
    int32_t v16 = function_1e3dbc0((int32_t)v15, (int32_t)&g708, (int32_t)&g708); // 0x1e2c76a
    g2 = v16;
    int32_t v17 = __ftol(); // 0x1e2c772
    g2 = v17;
    g5 = g5 & -256 | v17 & 255;
    int32_t v18 = g6; // 0x1e2c779
    int32_t v19 = *(int32_t *)v18; // 0x1e2c779
    g2 = v19;
    int32_t v20 = g4; // 0x1e2c77b
    uint32_t v21 = v17 & 31; // 0x1e2c77b
    if (v21 != 0) {
        // bb
        g4 = v20 << v21;
    }
    g5 = *(int32_t *)(v18 + 4);
    int32_t v22 = *(int32_t *)(v18 + 8); // bp-16
    g2 = *(int32_t *)(v18 + 12);
    g6 = g8 + 134;
    int32_t v23 = function_1e3df20(85); // 0x1e2c79a
    g2 = v23;
    if (v23 == 0) {
        // 0x1e2c7bf
        *(int32_t *)g6 = 0;
    } else {
        int32_t v24 = g8; // 0x1e2c7af
        g5 = v23;
        int32_t v25 = function_1e305a4(v24, v24 + 5, g4, &v22, &v19); // 0x1e2c7b6
        g2 = v25;
        *(int32_t *)g6 = v25;
    }
    int32_t v26 = *(int32_t *)g6; // 0x1e2c7c5
    g6 = v26;
    int32_t v27 = g8; // 0x1e2c7c7
    int32_t v28 = *(int32_t *)(v27 + 46); // 0x1e2c7c7
    g5 = v28;
    int32_t v29 = *(int32_t *)v28; // 0x1e2c7ca
    g2 = v29;
    int32_t v30; // 0x1e2c7dd
    if (*(int32_t *)(v28 + 4) - v29 == 0) {
        // 0x1e2c7d1
        *(int32_t *)(g9 - 4) = *(int32_t *)(v27 + 42);
        *(int32_t *)(g9 - 8) = g5;
        int32_t v31 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2c7d5
        g2 = v31;
        *(int32_t *)(g8 + 46) = v31;
        v30 = g6;
    } else {
        v30 = v26;
    }
    // 0x1e2c7dd
    *(int32_t *)(g9 - 4) = v30;
    int32_t v32 = 0; // ebx
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    int32_t v33 = g6; // 0x1e2c7e8
    g2 = *(int32_t *)v33;
    g5 = v33;
    *(int32_t *)(v33 + 13) = v32;
    *(int32_t *)(g9 - 4) = 1301;
    *(int32_t *)(g9 - 8) = v32;
    *(int32_t *)(g9 - 12) = a2;
    int32_t v34 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2c7fb
    g2 = v34;
    g6 = v34;
    *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v34;
    int32_t v35 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c80a
    g2 = v35;
    int32_t v36 = __ftol(); // 0x1e2c812
    g2 = v36;
    *(int32_t *)(g8 + 138) = v36;
    *(float64_t *)g9 = (float64_t)*(float32_t *)(g6 + 4);
    int32_t v37 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c826
    g2 = v37;
    int32_t v38 = __ftol(); // 0x1e2c82e
    g2 = v38;
    int32_t v39 = (int32_t)*(char *)(g8 + 138); // 0x1e2c833
    g5 = g5 & -256 | v39;
    g2 = 1;
    uint32_t v40 = v39 & 31; // 0x1e2c844
    if (v40 != 0) {
        // bb132
        g2 = 1 << v40;
    }
    // bb133
    int32_t v41; // bp-32
    *(int32_t *)(g9 - 4) = (int32_t)&v41;
    g6 += 12;
    *(int32_t *)(g8 + 138) = g2;
    int32_t v42; // bp-36
    int32_t v43 = &v42; // 0x1e2c850
    g2 = v43;
    g5 = *(int32_t *)(g6 + 16);
    *(int32_t *)(g9 - 4) = v43;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g8 + 146) = g5;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 114);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 122);
    int32_t v44 = function_1e2c58e(v38, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c864
    g2 = v44;
    *(int32_t *)(g9 - 4) = 85;
    g6 = g8 + 126;
    int32_t v45 = function_1e3df20((int32_t)&g708); // 0x1e2c86e
    g2 = v45;
    if (v45 == 0) {
        // 0x1e2c893
        *(int32_t *)g6 = 0;
    } else {
        // 0x1e2c87a
        *(int32_t *)g9 = v42;
        *(int32_t *)(g9 - 4) = v41;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 106);
        *(int32_t *)(g9 - 12) = g8 + 5;
        *(int32_t *)(g9 - 16) = g8;
        g5 = v45;
        int32_t v46 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2c88a
        g2 = v46;
        *(int32_t *)g6 = v46;
    }
    int32_t v47 = *(int32_t *)g6; // 0x1e2c899
    g4 = v47;
    int32_t v48 = g8; // 0x1e2c89b
    int32_t v49 = *(int32_t *)(v48 + 46); // 0x1e2c89b
    g5 = v49;
    int32_t v50 = *(int32_t *)v49; // 0x1e2c89e
    g2 = v50;
    int32_t v51; // 0x1e2c8b1
    if (*(int32_t *)(v49 + 4) - v50 == 0) {
        // 0x1e2c8a5
        *(int32_t *)(g9 - 4) = *(int32_t *)(v48 + 42);
        *(int32_t *)(g9 - 8) = g5;
        int32_t v52 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2c8a9
        g2 = v52;
        *(int32_t *)(g8 + 46) = v52;
        v51 = g4;
    } else {
        v51 = v47;
    }
    // 0x1e2c8b1
    *(int32_t *)(g9 - 4) = v51;
    g6 = 0;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    int32_t v53 = g4; // 0x1e2c8bc
    g2 = *(int32_t *)v53;
    g5 = v53;
    *(int32_t *)(v53 + 13) = g6;
    *(int32_t *)(g9 - 4) = 1302;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g9 - 12) = a2;
    int32_t v54 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2c8cf
    g2 = v54;
    g4 = v54;
    *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v54;
    int32_t v55 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c8de
    g2 = v55;
    int32_t v56 = __ftol(); // 0x1e2c8e6
    g2 = v56;
    *(int32_t *)(g8 + 142) = v56;
    *(float64_t *)g9 = (float64_t)*(float32_t *)(g4 + 4);
    int32_t v57 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c8fa
    g2 = v57;
    int32_t v58 = __ftol(); // 0x1e2c902
    g2 = v58;
    int32_t v59 = (int32_t)*(char *)(g8 + 142); // 0x1e2c907
    g5 = g5 & -256 | v59;
    g2 = 1;
    uint32_t v60 = v59 & 31; // 0x1e2c918
    if (v60 != 0) {
        // bb139
        g2 = 1 << v60;
    }
    // bb140
    int32_t v61; // bp-24
    *(int32_t *)(g9 - 4) = (int32_t)&v61;
    v32 = g4 + 12;
    *(int32_t *)(g8 + 142) = g2;
    int32_t v62; // bp-28
    int32_t v63 = &v62; // 0x1e2c924
    g2 = v63;
    g5 = *(int32_t *)(v32 + 16);
    *(int32_t *)(g9 - 4) = v63;
    *(int32_t *)(g9 - 8) = v32;
    *(int32_t *)(g8 + 150) = g5;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 114);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 122);
    int32_t v64 = function_1e2c58e(v58, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2c938
    g2 = v64;
    *(int32_t *)(g9 - 4) = 85;
    g6 = g8 + 130;
    int32_t v65 = function_1e3df20((int32_t)&g708); // 0x1e2c945
    g2 = v65;
    if (v65 == 0) {
        // 0x1e2c96a
        *(int32_t *)g6 = 0;
    } else {
        // 0x1e2c951
        *(int32_t *)g9 = v62;
        *(int32_t *)(g9 - 4) = v61;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 106);
        *(int32_t *)(g9 - 12) = g8 + 5;
        *(int32_t *)(g9 - 16) = g8;
        g5 = v65;
        int32_t v66 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2c961
        g2 = v66;
        *(int32_t *)g6 = v66;
    }
    int32_t v67 = *(int32_t *)g6; // 0x1e2c970
    g6 = v67;
    int32_t v68 = g8; // 0x1e2c972
    int32_t v69 = *(int32_t *)(v68 + 46); // 0x1e2c972
    g5 = v69;
    int32_t v70 = *(int32_t *)v69; // 0x1e2c975
    g2 = v70;
    int32_t v71; // 0x1e2c988
    if (*(int32_t *)(v69 + 4) - v70 == 0) {
        // 0x1e2c97c
        *(int32_t *)(g9 - 4) = *(int32_t *)(v68 + 42);
        *(int32_t *)(g9 - 8) = g5;
        int32_t v72 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2c980
        g2 = v72;
        *(int32_t *)(g8 + 46) = v72;
        v71 = g6;
    } else {
        v71 = v67;
    }
    // 0x1e2c988
    *(int32_t *)(g9 - 4) = v71;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    int32_t v73 = g6; // 0x1e2c991
    g2 = *(int32_t *)v73;
    g5 = v73;
    *(int32_t *)(v73 + 13) = 0;
    int32_t v74 = g8; // 0x1e2c9a6
    g2 = -0x319194d8;
    float32_t * v75;
    int32_t v76;
    int32_t v77;
    int32_t v78;
    float32_t v79;
    int32_t v80;
    int32_t v81;
    int32_t v82; // 0x1e2c9cd
    int3_t v83; // 0x1e2c9d6
    int32_t v84; // 0x1e2caed
    int32_t v85; // 0x1e2cce1
    int32_t v86; // 0x1e2ccea
    int32_t v87; // 0x1e2c9d8
    float80_t v88; // 0x1e2ca07
    int32_t v89; // 0x1e2caa5
    int32_t v90; // 0x1e2cb58
    float32_t v91; // 0x1e2ca09
    int32_t v92; // 0x1e2c9d0
    if (*(int32_t *)(v74 + 114) > 0) {
        // 0x1e2c9cd
        v83 = g11;
        v82 = v74;
        v81 = 0;
        v79 = 1.0e+9f;
        v75 = NULL;
        while (true) {
          lab_0x1e2c9cd:
            // 0x1e2c9cd
            v92 = (int32_t)v75;
            int32_t v93 = *(int32_t *)(v82 + 122) + v92; // 0x1e2c9d0
            g4 = v93 + 28;
            v87 = v93 + 12;
            g2 = v87;
            g6 = v93 + 20;
            uint32_t v94 = (int32_t)__asm_fnstsw(g10); // 0x1e2c9e5
            g2 = g2 & -0x10000 | v94;
            if ((v94 / 256 & 65) != 0) {
                // branch -> 0x1e2c9ec
            }
            // 0x1e2c9ec
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            v88 = v79;
            v91 = v88;
            g2 = v87;
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = v87;
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = v87;
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
            __asm_fnstsw(g10);
            g11 = v83;
            g2 = v87;
            v89 = v42;
            if (v89 - v87 != 0) {
                goto lab_0x1e2cac6;
            } else {
                // 0x1e2caaa
                if (v41 - g6 != 0) {
                    goto lab_0x1e2cac6;
                } else {
                    // 0x1e2caaf
                    if (v38 == 0) {
                        // 0x1e2caf0
                        v90 = v89;
                        goto lab_0x1e2cb58;
                    } else {
                        int32_t v95 = *(int32_t *)(g8 + 138); // 0x1e2cab5
                        g2 = v95;
                        v84 = v95;
                        goto lab_0x1e2caf0;
                    }
                }
            }
        }
      lab_0x1e2ccea:
        v86 = v85;
        v78 = (float32_t)v88;
        v80 = v91;
        v76 = (float32_t)v88;
        v77 = (float32_t)v88;
    } else {
        v86 = v74;
        v78 = 0x4e6e6b28;
        v80 = 0x4e6e6b28;
        v76 = -0x319194d8;
        v77 = -0x319194d8;
    }
    int32_t v96 = v86 + 94; // 0x1e2ccea
    g5 = v96;
    g2 = v86 + 5;
    *(int32_t *)(g9 - 4) = v96;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)g5 = g2;
    int32_t v97 = g8; // 0x1e2ccf8
    *(int32_t *)(v97 + 102) = v97;
    *(int32_t *)(g8 + 98) = g7;
    *(int32_t *)(g9 - 4) = v77;
    *(int32_t *)(g9 - 8) = v76;
    *(int32_t *)(g9 - 12) = v80;
    *(int32_t *)(g9 - 16) = v78;
    function_1e320db((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = g8;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return g8;
  lab_0x1e2cac6:
    // 0x1e2cac6
    g2 = v87;
    int32_t v98;
    if (v62 - v87 != 0) {
        v84 = v98;
        goto lab_0x1e2caf0;
    } else {
        // 0x1e2cace
        if (v61 - g6 != 0) {
            v84 = v98;
            goto lab_0x1e2caf0;
        } else {
            // 0x1e2cad3
            if (v58 == 0) {
                // 0x1e2caf0
                v90 = v89;
                goto lab_0x1e2cb58;
            } else {
                int32_t v99 = *(int32_t *)(g8 + 142); // 0x1e2cad9
                g2 = v99;
                v84 = v99;
                goto lab_0x1e2caf0;
            }
        }
    }
  lab_0x1e2caf0:
    // 0x1e2caf0
    if (v84 != 0) {
        // 0x1e2caf6
        *(int32_t *)(g9 - 4) = 85;
        int32_t v100 = function_1e3df20((int32_t)(float32_t)v88); // 0x1e2caf8
        g2 = v100;
        g5 = v100;
        int32_t v101; // 0x1e2cb12
        if (v100 != 0) {
            // 0x1e2cb06
            *(int32_t *)g9 = g6;
            g2 = g8 + 5;
            *(int32_t *)(g9 - 4) = v87;
            *(int32_t *)(g9 - 8) = v84;
            *(int32_t *)(g9 - 12) = g2;
            *(int32_t *)(g9 - 16) = g8;
            v101 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708);
            g2 = v101;
        } else {
            v101 = 0;
        }
        int32_t v102 = g8; // 0x1e2cb23
        int32_t v103 = *(int32_t *)(v102 + 46); // 0x1e2cb23
        g5 = v103;
        int32_t v104 = *(int32_t *)v103; // 0x1e2cb26
        g2 = v104;
        if (*(int32_t *)(v103 + 4) - v104 == 0) {
            // 0x1e2cb2d
            *(int32_t *)(g9 - 4) = *(int32_t *)(v102 + 42);
            *(int32_t *)(g9 - 8) = g5;
            int32_t v105 = function_1e3a739(v101, (int32_t)&g708); // 0x1e2cb31
            g2 = v105;
            *(int32_t *)(g8 + 46) = v105;
        }
        // 0x1e2cb39
        *(int32_t *)(g9 - 4) = v101;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
        g2 = v101;
        int32_t v106 = *(int32_t *)(g8 + 122) + v92; // 0x1e2cb4a
        g5 = v106;
        *(int32_t *)(v101 + 13) = v106;
        g2 = *(int32_t *)g2;
        g5 = v101;
        v90 = v42;
    } else {
        v90 = v89;
    }
    goto lab_0x1e2cb58;
  lab_0x1e2cb58:;
    int32_t v107 = g6; // 0x1e2cb58
    int32_t v108; // 0x1e2cb9d
    int32_t v109; // 0x1e2cbfa
    if (v90 - v107 != 0) {
        goto lab_0x1e2cb79;
    } else {
        // 0x1e2cb5d
        if (v41 - g4 != 0) {
            goto lab_0x1e2cb79;
        } else {
            // 0x1e2cb62
            if (v38 == 0) {
                // 0x1e2cba0
                v109 = v90;
                goto lab_0x1e2cbfa;
            } else {
                int32_t v110 = *(int32_t *)(g8 + 138); // 0x1e2cb68
                g2 = v110;
                v108 = v110;
                goto lab_0x1e2cba0;
            }
        }
    }
  lab_0x1e2cb79:
    // 0x1e2cb79
    if (v62 - v107 != 0) {
        v108 = v98;
        goto lab_0x1e2cba0;
    } else {
        // 0x1e2cb7e
        if (v61 - g4 != 0) {
            v108 = v98;
            goto lab_0x1e2cba0;
        } else {
            // 0x1e2cb83
            if (v58 == 0) {
                // 0x1e2cba0
                v109 = v90;
                goto lab_0x1e2cbfa;
            } else {
                int32_t v111 = *(int32_t *)(g8 + 142); // 0x1e2cb89
                g2 = v111;
                v108 = v111;
                goto lab_0x1e2cba0;
            }
        }
    }
  lab_0x1e2cba0:
    // 0x1e2cba0
    if (v108 != 0) {
        // 0x1e2cba6
        *(int32_t *)(g9 - 4) = 85;
        int32_t v112 = function_1e3df20(v108); // 0x1e2cba8
        g2 = v112;
        g5 = v112;
        int32_t v113;
        if (v112 == 0) {
            // 0x1e2cbc9
            v113 = 0;
        } else {
            // 0x1e2cbb6
            *(int32_t *)g9 = g4;
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = v108;
            *(int32_t *)(g9 - 12) = g8 + 5;
            *(int32_t *)(g9 - 16) = g8;
            int32_t v114 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2cbc0
            g2 = v114;
            v113 = v114;
        }
        // 0x1e2cbcb
        g6 = v113;
        int32_t v115 = g8; // 0x1e2cbcb
        int32_t v116 = *(int32_t *)(v115 + 46); // 0x1e2cbcb
        g5 = v116;
        int32_t v117 = *(int32_t *)v116; // 0x1e2cbce
        g2 = v117;
        int32_t v118; // 0x1e2cbe1
        if (*(int32_t *)(v116 + 4) - v117 == 0) {
            // 0x1e2cbd5
            *(int32_t *)(g9 - 4) = *(int32_t *)(v115 + 42);
            *(int32_t *)(g9 - 8) = g5;
            int32_t v119 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2cbd9
            g2 = v119;
            *(int32_t *)(g8 + 46) = v119;
            v118 = g6;
        } else {
            v118 = v113;
        }
        // 0x1e2cbe1
        *(int32_t *)(g9 - 4) = v118;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
        int32_t v120 = g6; // 0x1e2cbed
        g5 = v120;
        int32_t v121 = *(int32_t *)(g8 + 122) + v92; // 0x1e2cbef
        g2 = v121;
        *(int32_t *)(v120 + 13) = v121;
        g2 = *(int32_t *)g6;
        v109 = v42;
    } else {
        v109 = v90;
    }
    goto lab_0x1e2cbfa;
  lab_0x1e2cbfa:;
    int32_t v122 = g4; // 0x1e2cbfa
    int32_t v123; // 0x1e2cc3b
    if (v109 - v122 != 0) {
        goto lab_0x1e2cc19;
    } else {
        // 0x1e2cbff
        g2 = v87;
        if (v41 - v87 != 0) {
            goto lab_0x1e2cc19;
        } else {
            // 0x1e2cc07
            if (v38 == 0) {
                // 0x1e2cc3b
                g6 = 0;
                goto lab_0x1e2cc93;
            } else {
                int32_t v124 = *(int32_t *)(g8 + 138); // 0x1e2cc0d
                g6 = v124;
                v123 = v124;
                goto lab_0x1e2cc3b;
            }
        }
    }
  lab_0x1e2cc19:
    // 0x1e2cc19
    if (v62 - v122 != 0) {
        v123 = v98;
        goto lab_0x1e2cc3b;
    } else {
        // 0x1e2cc1e
        g2 = v87;
        if (v61 - v87 != 0) {
            v123 = v98;
            goto lab_0x1e2cc3b;
        } else {
            // 0x1e2cc26
            if (v58 == 0) {
                // 0x1e2cc3b
                g6 = 0;
                goto lab_0x1e2cc93;
            } else {
                int32_t v125 = *(int32_t *)(g8 + 142); // 0x1e2cc2c
                g6 = v125;
                v123 = v125;
                goto lab_0x1e2cc3b;
            }
        }
    }
  lab_0x1e2cc3b:
    // 0x1e2cc3b
    if (v123 != 0) {
        // 0x1e2cc3f
        *(int32_t *)(g9 - 4) = 85;
        int32_t v126 = function_1e3df20((int32_t)&g708); // 0x1e2cc41
        g2 = v126;
        g5 = v126;
        int32_t v127;
        if (v126 == 0) {
            // 0x1e2cc62
            v127 = 0;
        } else {
            // 0x1e2cc4f
            *(int32_t *)g9 = v87;
            *(int32_t *)(g9 - 4) = g4;
            *(int32_t *)(g9 - 8) = g6;
            int32_t v128 = g8 + 5; // 0x1e2cc54
            g2 = v128;
            *(int32_t *)(g9 - 12) = v128;
            *(int32_t *)(g9 - 16) = g8;
            int32_t v129 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2cc59
            g2 = v129;
            v127 = v129;
        }
        // 0x1e2cc64
        g6 = v127;
        int32_t v130 = g8; // 0x1e2cc64
        int32_t v131 = *(int32_t *)(v130 + 46); // 0x1e2cc64
        g5 = v131;
        int32_t v132 = *(int32_t *)v131; // 0x1e2cc67
        g2 = v132;
        int32_t v133; // 0x1e2cc7a
        if (*(int32_t *)(v131 + 4) - v132 == 0) {
            // 0x1e2cc6e
            *(int32_t *)(g9 - 4) = *(int32_t *)(v130 + 42);
            *(int32_t *)(g9 - 8) = g5;
            int32_t v134 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2cc72
            g2 = v134;
            *(int32_t *)(g8 + 46) = v134;
            v133 = g6;
        } else {
            v133 = v127;
        }
        // 0x1e2cc7a
        *(int32_t *)(g9 - 4) = v133;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
        int32_t v135 = *(int32_t *)(g8 + 122); // 0x1e2cc83
        g2 = v135;
        int32_t v136 = g6; // 0x1e2cc86
        int32_t v137 = v135 + v92; // 0x1e2cc88
        g2 = v137;
        g5 = v136;
        *(int32_t *)(v136 + 13) = v137;
    }
    goto lab_0x1e2cc93;
  lab_0x1e2cc93:;
    int32_t v138 = g8; // 0x1e2cc93
    int32_t v139 = *(int32_t *)(v138 + 122); // 0x1e2cc93
    g2 = v139;
    int32_t v140 = *(int32_t *)(v138 + 30); // 0x1e2cc96
    int32_t v141 = v139 + v92; // 0x1e2cc99
    g2 = v141;
    int32_t v142 = v81 + 1; // 0x1e2cc9c
    g5 = v142;
    int3_t v143 = g11; // 0x1e2cca2
    float80_t v144 = (float80_t)*(float32_t *)(v141 + 36); // 0x1e2cca2
    float80_t v145;
    if (fabsl(v144) < 9223372036854775808.0L) {
        // bb155
        v145 = sinl(v144);
    } else {
        v145 = v144;
    }
    float80_t v146 = (float80_t)*(float32_t *)(v141 + 40); // 0x1e2ccaa
    float80_t v147;
    if (fabsl(v146) < 9223372036854775808.0L) {
        // bb158
        v147 = cosl(v146);
    } else {
        v147 = v146;
    }
    float80_t v148 = v145 * v147 * (float80_t)*(float32_t *)(v140 + 270); // 0x1e2ccb2
    *(float32_t *)(v141 + 44) = (float32_t)v148;
    int32_t v149 = g8; // 0x1e2ccbb
    int32_t v150 = *(int32_t *)(v149 + 122); // 0x1e2ccbb
    g2 = v150;
    int32_t v151 = *(int32_t *)(v149 + 30); // 0x1e2ccbe
    int32_t v152 = v150 + v92; // 0x1e2ccc1
    g2 = v152;
    float80_t v153 = (float80_t)*(float32_t *)(v152 + 36); // 0x1e2ccc8
    float80_t v154;
    if (fabsl(v153) < 9223372036854775808.0L) {
        // bb161
        v154 = sinl(v153);
    } else {
        v154 = v153;
    }
    float80_t v155 = (float80_t)*(float32_t *)(v152 + 40); // 0x1e2ccd0
    float80_t v156;
    if (fabsl(v155) < 9223372036854775808.0L) {
        // bb164
        v156 = sinl(v155);
    } else {
        v156 = v155;
    }
    float80_t v157 = v154 * v156 * (float80_t)*(float32_t *)(v151 + 270); // 0x1e2ccd8
    *(float32_t *)(v152 + 48) = (float32_t)v157;
    g11 = v143;
    v85 = g8;
    if (*(int32_t *)(v85 + 114) <= g5) {
        // break -> 0x1e2ccea
        goto lab_0x1e2ccea;
    }
    v83 = v143;
    v82 = v85;
    v81 = v142;
    v79 = v91;
    v75 = (float32_t *)(v92 + 52);
    goto lab_0x1e2c9cd;
}

// Address range: 0x1e2cd1a - 0x1e2cd1f
int32_t function_1e2cd1a(void) {
    int32_t result = function_1e2a510(); // 0x1e2cd1a
    g2 = result;
    return result;
}

// Address range: 0x1e2cd1f - 0x1e2cd3d
int32_t function_1e2cd1f(char a1) {
    // 0x1e2cd1f
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2cd2e
        g2 = function_1e3df60(g8);
    }
    // 0x1e2cd37
    g2 = g8;
    return g8;
}

// Address range: 0x1e2cd3d - 0x1e2ce45
int32_t function_1e2cd3d(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    // 0x1e2cd3d
    g8 = g5;
    g5 = a1;
    g6 = a4;
    int32_t v1 = a1 + 134; // 0x1e2cd4b
    int32_t v2 = *(int32_t *)v1; // 0x1e2cd51
    g2 = v2;
    int32_t v3; // 0x1e2cd6b
    if (v2 < 5) {
        // 0x1e2cd58
        *(int32_t *)(a1 + 114 + 4 * v2) = a4;
        int32_t * v4 = (int32_t *)v1; // 0x1e2cd5c
        *v4 = *v4 + 1;
        v3 = g5;
    } else {
        v3 = a1;
    }
    // 0x1e2cd5e
    g2 = a2;
    *(int32_t *)(v3 + 42) = *(int32_t *)a2;
    float80_t v5 = (float80_t)*(float32_t *)(v3 + 70) - (float80_t)a3; // 0x1e2cd71
    *(float32_t *)(g5 + 70) = (float32_t)v5;
    *(int32_t *)(g5 + 46) = *(int32_t *)(g2 + 4);
    int32_t v6 = g6; // 0x1e2cd77
    int32_t v7 = *(int32_t *)(v6 + 13); // 0x1e2cd77
    int32_t v8;
    if (v7 == 0) {
        int32_t v9 = g8; // 0x1e2cdd5
        if (*(int32_t *)(v9 + 134) != v6) {
            // 0x1e2cdfd
            *(int32_t *)(g5 + 150) = 0;
            if (*(int32_t *)(g8 + 126) != g6) {
                int32_t v10 = *(int32_t *)(g8 + 142); // 0x1e2ce20
                g2 = v10;
                *(int32_t *)(g5 + 110) = v10;
                if (*(int32_t *)(g8 + 110) == 0) {
                    return g2;
                } else {
                    // 0x1e2ce2f
                    v8 = g8 + 150;
                    goto lab_0x1e2ce35;
                }
            } else {
                int32_t v11 = *(int32_t *)(g8 + 138); // 0x1e2ce0a
                g2 = v11;
                *(int32_t *)(g5 + 110) = v11;
                if (*(int32_t *)(g8 + 110) == 0) {
                    return g2;
                } else {
                    // 0x1e2ce18
                    v8 = g8 + 146;
                    goto lab_0x1e2ce35;
                }
            }
        } else {
            int32_t v12 = *(int32_t *)(v9 + 30); // 0x1e2cddd
            g2 = v12;
            if (*(int32_t *)(v12 + 370) == 0) {
                // 0x1e2cde9
                g2 = function_1e39a10(*(int32_t *)(v9 + 70));
                g11++;
                g2 = function_1e328b9(63, g8);
            }
            return g2;
        }
    } else {
        int32_t v13 = g5; // 0x1e2cd7e
        int32_t v14 = v13 + 138; // edx
        int32_t v15 = v13 + 142; // edi
        *(int32_t *)(v13 + 150) = 1;
        int32_t v16 = *(int32_t *)v7; // 0x1e2cd94
        g2 = v16;
        *(int32_t *)v14 = v16;
        *(int32_t *)v15 = *(int32_t *)(v7 + 4);
        int32_t v17 = g5; // 0x1e2cd9d
        int32_t v18 = v17 + 146; // 0x1e2cd9d
        float80_t v19 = (float80_t)*(float32_t *)v14; // 0x1e2cda3
        float80_t v20 = (float80_t)*(float32_t *)(v17 + 46); // 0x1e2cda8
        int32_t v21 = *(int32_t *)(v7 + 8); // 0x1e2cdad
        g2 = v21;
        *(int32_t *)v18 = v21;
        int32_t v22 = *(int32_t *)(v7 + 44); // 0x1e2cdb3
        g2 = v22;
        float80_t v23 = v19 * (float80_t)*(float32_t *)(v17 + 42); // 0x1e2cdb6
        *(int32_t *)(g5 + 94) = v22;
        float80_t v24 = v20 * (float80_t)*(float32_t *)v15 + v23; // 0x1e2cdbe
        int32_t v25 = g5; // 0x1e2cdbe
        float32_t v26 = *(float32_t *)(v25 + 154); // 0x1e2cdbe
        *(int32_t *)(v25 + 98) = *(int32_t *)(v7 + 48);
        float32_t v27 = *(float32_t *)v18; // 0x1e2cdc7
        float80_t v28 = v24 + (float80_t)v26 + (float80_t)v27; // 0x1e2cdc7
        *(float32_t *)(g5 + 50) = (float32_t)v28;
        *(int32_t *)(g5 + 110) = *(int32_t *)(g8 + 106);
        return g2;
    }
    // 0x1e2ce3e
    return g2;
  lab_0x1e2ce35:;
    float80_t v29 = (float80_t)*(float32_t *)v8;
    int32_t v30 = g5; // 0x1e2ce35
    float80_t v31 = v29 + (float80_t)*(float32_t *)(v30 + 154); // 0x1e2ce35
    *(float32_t *)(v30 + 50) = (float32_t)v31;
    return g2;
}

// Address range: 0x1e2ce45 - 0x1e2ce72
int32_t function_1e2ce45(int32_t a1, int32_t a2) {
    // 0x1e2ce45
    g2 = a1;
    float32_t v1 = *(float32_t *)(a1 + 54); // 0x1e2ce4d
    float32_t v2 = *(float32_t *)(g5 + 118); // 0x1e2ce50
    float32_t v3 = *(float32_t *)(a1 + 66); // 0x1e2ce53
    float32_t v4 = *(float32_t *)(a1 + 94); // 0x1e2ce56
    *(float32_t *)a2 = (float32_t)((float80_t)v4 - (float80_t)v1 * (float80_t)v2 * (float80_t)v3);
    int32_t v5 = g2; // 0x1e2ce5b
    float32_t v6 = *(float32_t *)(v5 + 58); // 0x1e2ce5b
    float32_t v7 = *(float32_t *)(g5 + 118); // 0x1e2ce5e
    float32_t v8 = *(float32_t *)(v5 + 66); // 0x1e2ce61
    float32_t v9 = *(float32_t *)(v5 + 98); // 0x1e2ce64
    g2 = 1;
    *(float32_t *)(a2 + 4) = (float32_t)((float80_t)v9 - (float80_t)v6 * (float80_t)v7 * (float80_t)v8);
    return g2;
}

// Address range: 0x1e2ce72 - 0x1e2cfbb
int32_t function_1e2ce72(int32_t a1, int32_t a2) {
    // 0x1e2ce72
    g4 = 0;
    g6 = a2;
    int32_t v1 = g3; // 0x1e2ce7e
    g3 = g5;
    int32_t v2 = a2; // bp-96
    int32_t v3 = &v2; // 0x1e2ce82
    g2 = function_1e2a3f7(a1, a2, 0, v1);
    *(int32_t *)g3 = (int32_t)&g49;
    *(int32_t *)(g3 + 114) = g4;
    *(int32_t *)(g3 + 110) = g4;
    *(int32_t *)(g3 + 102) = g4;
    int32_t v4 = g3; // 0x1e2ce9c
    g8 = v4 + 5;
    *(int32_t *)(v4 + 106) = g4;
    *(int32_t *)(g3 + 6) = g4;
    *(char *)(g3 + 4) = (char)g4;
    int32_t v5 = g4; // 0x1e2ceb1
    *(char *)g8 = (char)v5;
    *(int32_t *)(g3 + 98) = g4;
    *(int32_t *)(g3 + 94) = g4;
    *(int32_t *)(g5 + 230) = g3;
    int32_t v6 = function_1e3991a(g6, v5); // 0x1e2cec1
    g2 = v6;
    if (v6 == 0) {
        // 0x1e2cee3
        g2 = 0x3e4ccccd;
        g5 = 0x3dcccccd;
        *(int32_t *)(g3 + 78) = 0x3e4ccccd;
        *(int32_t *)(g3 + 82) = g5;
        *(int32_t *)(g3 + 86) = g2;
        *(int32_t *)(g3 + 90) = g5;
    } else {
        int32_t v7 = *(int32_t *)v6; // 0x1e2ceca
        g5 = v7;
        *(int32_t *)(g3 + 78) = v7;
        *(int32_t *)(g3 + 82) = *(int32_t *)(v6 + 4);
        *(int32_t *)(g3 + 86) = *(int32_t *)(v6 + 8);
        int32_t v8 = *(int32_t *)(v6 + 12); // 0x1e2cedb
        g2 = v8;
        *(int32_t *)(g3 + 90) = v8;
    }
    // 0x1e2cef9
    g2 = v3;
    g2 = function_1e39641(g6, 0, v3);
    int32_t v9 = function_1e3991a(g6, g4); // 0x1e2cf0e
    g2 = v9;
    int32_t v10;
    int32_t v11 = function_1e29b62(v9, g3, g8, v10, g4, 1400); // 0x1e2cf20
    g2 = v11;
    *(int32_t *)(g3 + 118) = v11;
    int32_t v12 = function_1e3991a(g6, g4); // 0x1e2cf2f
    g2 = v12;
    int32_t v13 = g8; // 0x1e2cf3e
    g2 = function_1e29b62(v12, g3, v13, 407, g4, 1401);
    int32_t v14 = function_1e3991a(g6, g4); // 0x1e2cf4d
    g2 = v14;
    int32_t v15 = function_1e29b62(v14, g3, g8, 1400, g4, 1402); // 0x1e2cf5f
    g2 = v15;
    *(int32_t *)(g3 + 122) = v15;
    int32_t v16 = function_1e3991a(g6, g4); // 0x1e2cf6e
    g2 = v16;
    g2 = function_1e29b62(v16, g3, g8, 1401, g4, 1403);
    int32_t v17 = function_1e3991a(g6, g4); // 0x1e2cf8c
    g2 = v17;
    g5 = v13;
    int32_t v18 = g3; // 0x1e2cfa5
    int32_t v19 = function_1e29b62(v17, v18, g8, 1402, *(int32_t *)(v13 + 282), 1404); // 0x1e2cfa7
    *(int32_t *)(g3 + 126) = v19;
    int32_t result = g3; // 0x1e2cfaf
    g2 = result;
    g3 = v17;
    g6 = v18;
    g4 = 1402;
    return result;
}

// Address range: 0x1e2cfbb - 0x1e2cfc0
int32_t function_1e2cfbb(void) {
    int32_t result = function_1e2a510(); // 0x1e2cfbb
    g2 = result;
    return result;
}

// Address range: 0x1e2cfc0 - 0x1e2cfde
int32_t function_1e2cfc0(char a1) {
    // 0x1e2cfc0
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2cfcf
        g2 = function_1e3df60(g8);
    }
    // 0x1e2cfd8
    g2 = g8;
    return g8;
}

// Address range: 0x1e2cfde - 0x1e2cffe
int32_t function_1e2cfde(int32_t a1) {
    // 0x1e2cfde
    g2 = a1;
    *(int32_t *)(a1 + 110) = 0;
    int32_t v1 = *(int32_t *)(g2 + 30); // 0x1e2cfe9
    g5 = v1;
    g2 = g173;
    int32_t result = *(int32_t *)v1; // 0x1e2cff7
    g2 = result;
    return result;
}

// Address range: 0x1e2cffe - 0x1e2d026
int32_t function_1e2cffe(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 98); // 0x1e2d003
    if (*v1 != 0) {
        int32_t v2 = *(int32_t *)(a1 + 30); // 0x1e2d009
        g5 = v2;
        g2 = g173;
        g2 = *(int32_t *)v2;
    }
    // 0x1e2d01b
    *v1 = 0;
    g8 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e2d026 - 0x1e2d04e
int32_t function_1e2d026(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 94); // 0x1e2d02b
    if (*v1 != 0) {
        int32_t v2 = *(int32_t *)(a1 + 30); // 0x1e2d031
        g5 = v2;
        g2 = g173;
        g2 = *(int32_t *)v2;
    }
    // 0x1e2d043
    *v1 = 0;
    g8 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e2d04e - 0x1e2d0c6
int32_t function_1e2d04e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g6; // bp-12
    g8 = a1;
    if (*(int32_t *)(a1 + 98) != 0) {
        // 0x1e2d0be
        return g2;
    }
    int32_t v2 = *(int32_t *)(a1 + 106); // 0x1e2d05e
    g2 = v2;
    int32_t v3; // 0x1e2d06e
    int32_t v4; // 0x1e2d078
    if (v2 != 0) {
        // 0x1e2d065
        g2 = function_1e32771(v2);
        *(int32_t *)(g8 + 106) = 0;
        v4 = g9;
        v3 = g8;
    } else {
        v4 = &v1;
        v3 = a1;
    }
    int32_t v5 = *(int32_t *)(v3 + 30); // 0x1e2d06e
    g5 = v5;
    int32_t v6 = g173; // 0x1e2d071
    g2 = v6;
    g6 = *(int32_t *)v5;
    *(int32_t *)(v4 - 4) = v6;
    *(int32_t *)(v4 - 8) = 1002;
    *(int32_t *)(g8 + 98) = 1;
    *(int32_t *)(g9 - 4) = 0x1e2cffe;
    *(int32_t *)(g9 - 8) = g8;
    int32_t v7 = function_1e3df30(); // 0x1e2d08d
    g2 = v7;
    *(int32_t *)(g9 + 16) = v7;
    int32_t v8 = *(int32_t *)(g9 + 16); // 0x1e2d096
    float32_t * v9 = (float32_t *)(g8 + 90); // 0x1e2d0a0
    float32_t v10 = *v9; // 0x1e2d0a0
    float32_t v11 = *(float32_t *)(g8 + 86); // 0x1e2d0ae
    float32_t v12 = *v9; // 0x1e2d0b1
    *(float32_t *)(g9 - 4) = (float32_t)((float80_t)v11 + (float80_t)v12 - 3.05185094759971922707e-5L * (float80_t)v8 * 2.0L * (float80_t)v10);
    int32_t result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2d0b9
    g2 = result;
    // 0x1e2d0be
    return result;
}

// Address range: 0x1e2d0c6 - 0x1e2d13e
int32_t function_1e2d0c6(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g6; // bp-12
    g8 = a1;
    if (*(int32_t *)(a1 + 94) != 0) {
        // 0x1e2d136
        return g2;
    }
    int32_t v2 = *(int32_t *)(a1 + 102); // 0x1e2d0d6
    g2 = v2;
    int32_t v3; // 0x1e2d0e6
    int32_t v4; // 0x1e2d0f0
    if (v2 != 0) {
        // 0x1e2d0dd
        g2 = function_1e32771(v2);
        *(int32_t *)(g8 + 102) = 0;
        v4 = g9;
        v3 = g8;
    } else {
        v4 = &v1;
        v3 = a1;
    }
    int32_t v5 = *(int32_t *)(v3 + 30); // 0x1e2d0e6
    g5 = v5;
    int32_t v6 = g173; // 0x1e2d0e9
    g2 = v6;
    g6 = *(int32_t *)v5;
    *(int32_t *)(v4 - 4) = v6;
    *(int32_t *)(v4 - 8) = 1000;
    *(int32_t *)(g8 + 94) = 1;
    *(int32_t *)(g9 - 4) = 0x1e2d026;
    *(int32_t *)(g9 - 8) = g8;
    int32_t v7 = function_1e3df30(); // 0x1e2d105
    g2 = v7;
    *(int32_t *)(g9 + 16) = v7;
    int32_t v8 = *(int32_t *)(g9 + 16); // 0x1e2d10e
    float32_t * v9 = (float32_t *)(g8 + 90); // 0x1e2d118
    float32_t v10 = *v9; // 0x1e2d118
    float32_t v11 = *(float32_t *)(g8 + 86); // 0x1e2d126
    float32_t v12 = *v9; // 0x1e2d129
    *(float32_t *)(g9 - 4) = (float32_t)((float80_t)v11 + (float80_t)v12 - 3.05185094759971922707e-5L * (float80_t)v8 * 2.0L * (float80_t)v10);
    int32_t result = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2d131
    g2 = result;
    // 0x1e2d136
    return result;
}

// Address range: 0x1e2d13e - 0x1e2d173
int32_t function_1e2d13e(int32_t a1) {
    // 0x1e2d13e
    g2 = function_1e26d6e(1);
    int32_t v1 = *(int32_t *)(a1 + 30); // 0x1e2d150
    g5 = v1;
    g2 = *(int32_t *)v1;
    *(int32_t *)(a1 + 114) = 0;
    return g2;
}

// Address range: 0x1e2d173 - 0x1e2d2e5
int32_t function_1e2d173(int32_t a1, int32_t a2, float32_t a3, int32_t a4) {
    int32_t v1; // ebp
    g3 = &v1;
    int32_t v2; // esi
    int32_t v3 = v2; // 0x1e2d17d
    v2 = g5;
    int32_t v4 = *(int32_t *)(a4 + 13); // 0x1e2d184
    g5 = v4;
    int32_t v5 = a1 + 134; // 0x1e2d187
    int32_t v6 = *(int32_t *)v5; // 0x1e2d18d
    g2 = v6;
    int32_t v7; // 0x1e2d1a3
    int32_t v8; // 0x1e2d1ab
    if (v6 < 5) {
        // 0x1e2d194
        *(int32_t *)(a1 + 114 + 4 * v6) = a4;
        int32_t * v9 = (int32_t *)v5; // 0x1e2d198
        *v9 = *v9 + 1;
        v7 = g5;
        v8 = a1;
    } else {
        v7 = v4;
        v8 = a1;
    }
    // 0x1e2d19a
    g2 = a2;
    int32_t v10 = *(int32_t *)a2; // 0x1e2d1a9
    g6 = v10;
    *(int32_t *)(v8 + 42) = v10;
    g4 = *(int32_t *)(g2 + 4);
    float80_t v11 = (float80_t)*(float32_t *)(v8 + 70) - (float80_t)a3; // 0x1e2d1b1
    *(float32_t *)(a1 + 70) = (float32_t)v11;
    *(int32_t *)(a1 + 46) = g4;
    if (v7 == 1400) {
        // 0x1e2d1e6
        if (*(int32_t *)(v2 + 102) == 0) {
            // 0x1e2d1f0
            if (*(int32_t *)(v2 + 94) == 0) {
                int32_t v12 = function_1e3df30(); // 0x1e2d200
                g2 = v12;
                float80_t v13 = 3.05185094759971922707e-5L * (float80_t)v12; // 0x1e2d20b
                float32_t * v14 = (float32_t *)(g8 + 82); // 0x1e2d211
                float80_t v15 = v13 * 2.0L * (float80_t)*v14; // 0x1e2d21d
                float32_t v16 = *(float32_t *)(g8 + 78); // 0x1e2d21f
                float80_t v17 = (float80_t)v16 + (float80_t)*v14 - v15; // 0x1e2d225
                int32_t v18 = function_1e325d2((int32_t)(float32_t)v17, (int32_t)&g708, (int32_t)&g708); // 0x1e2d22a
                g2 = v18;
                *(int32_t *)(g8 + 102) = v18;
            }
        }
    } else {
        int32_t v19 = g5; // 0x1e2d1b9
        int32_t v20; // ebx
        int32_t v21; // edi
        if (v19 == 1401) {
            // 0x1e2d237
            g2 = function_1e2d0c6(0, v2, v21, v3, v20, v1);
        } else {
            if (v19 == 1402) {
                // 0x1e2d244
                if (*(int32_t *)(v2 + 106) == 0) {
                    // 0x1e2d24e
                    if (*(int32_t *)(v2 + 98) == 0) {
                        int32_t v22 = function_1e3df30(); // 0x1e2d25e
                        g2 = v22;
                        float80_t v23 = 3.05185094759971922707e-5L * (float80_t)v22; // 0x1e2d269
                        float32_t * v24 = (float32_t *)(g8 + 82); // 0x1e2d26f
                        float80_t v25 = v23 * 2.0L * (float80_t)*v24; // 0x1e2d27b
                        float32_t v26 = *(float32_t *)(g8 + 78); // 0x1e2d27d
                        float80_t v27 = (float80_t)v26 + (float80_t)*v24 - v25; // 0x1e2d283
                        int32_t v28 = function_1e325d2((int32_t)(float32_t)v27, (int32_t)&g708, (int32_t)&g708); // 0x1e2d288
                        g2 = v28;
                        *(int32_t *)(g8 + 106) = v28;
                    }
                }
            } else {
                if (v19 == 1403) {
                    // 0x1e2d292
                    g2 = function_1e2d04e(0, v2, v21, v3, v20, v1);
                } else {
                    if (v19 == 1404) {
                        // 0x1e2d29c
                        if (*(int32_t *)(v2 + 110) == 0) {
                            // 0x1e2d2a2
                            g5 = *(int32_t *)(v2 + 30);
                            int32_t v29 = function_1e3df30(); // 0x1e2d2b7
                            g2 = v29;
                            float80_t v30 = 3.05185094759971922707e-5L * (float80_t)v29 + 2.0L; // 0x1e2d2cb
                            int32_t v31 = function_1e325d2((int32_t)(float32_t)v30, (int32_t)&g708, (int32_t)&g708); // 0x1e2d2d4
                            g2 = v31;
                            *(int32_t *)(g8 + 110) = v31;
                        }
                    }
                }
            }
        }
    }
    // 0x1e2d2dc
    return g2;
}

// Address range: 0x1e2d2e5 - 0x1e2d39e
int32_t function_1e2d2e5(int32_t a1) {
    // 0x1e2d2e5
    g2 = a1;
    int32_t v1 = g5; // 0x1e2d2eb
    g8 = v1;
    if (a1 == 1014) {
        int32_t v2 = *(int32_t *)(v1 + 114); // 0x1e2d307
        g2 = v2;
        int32_t v3; // 0x1e2d314
        if (v2 != 0) {
            // 0x1e2d30e
            g2 = function_1e32771(v2);
            v3 = g8;
        } else {
            v3 = v1;
        }
        // 0x1e2d314
        *(int32_t *)(v3 + 114) = 0;
        // 0x1e2d397
        g2 = 0;
        return 0;
    }
    if (a1 == 1022) {
        int32_t v4 = v1 + 114; // 0x1e2d31d
        g6 = v4;
        int32_t v5 = *(int32_t *)v4; // 0x1e2d320
        g2 = v5;
        int32_t v6; // 0x1e2d32e
        if (v5 != 0) {
            // 0x1e2d326
            g2 = function_1e32771(v5);
            v6 = g6;
        } else {
            v6 = v4;
        }
        // 0x1e2d32c
        g2 = 0;
        *(int32_t *)v6 = 0;
        if (*(char *)(g8 + 5) != (char)g2) {
            // 0x1e2d335
            *(int32_t *)(g9 - 4) = 0x1e2d13e;
            *(int32_t *)(g9 - 8) = g8;
            *(int32_t *)(g9 - 12) = 0x40a00000;
            int32_t v7 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2d340
            g2 = v7;
            *(int32_t *)g6 = v7;
        }
        // 0x1e2d397
        g2 = 0;
        return 0;
    }
    if (a1 != 1024) {
        // 0x1e2d397
        g2 = 0;
        return 0;
    }
    int32_t v8 = *(int32_t *)(v1 + 102); // 0x1e2d349
    g2 = v8;
    int32_t v9; // 0x1e2d356
    if (v8 != 0) {
        // 0x1e2d350
        g2 = function_1e32771(v8);
        v9 = g8;
    } else {
        v9 = v1;
    }
    // 0x1e2d356
    *(int32_t *)(v9 + 102) = 0;
    int32_t v10 = g8; // 0x1e2d35d
    int32_t v11 = *(int32_t *)(v10 + 106); // 0x1e2d35d
    g2 = v11;
    int32_t v12; // 0x1e2d36c
    if (v11 != 0) {
        // 0x1e2d364
        *(int32_t *)(g9 - 4) = v11;
        g2 = function_1e32771((int32_t)&g708);
        v12 = g8;
    } else {
        v12 = v10;
    }
    // 0x1e2d36a
    g2 = 0;
    *(int32_t *)(v12 + 106) = 0;
    int32_t v13 = g8; // 0x1e2d36f
    int32_t v14; // 0x1e2d381
    if (*(int32_t *)(v13 + 94) != g2) {
        // 0x1e2d374
        *(int32_t *)(g9 - 4) = v13;
        *(int32_t *)(g9 - 8) = g2;
        g2 = function_1e2d026((int32_t)&g708);
        v14 = g8;
    } else {
        v14 = v13;
    }
    // 0x1e2d37b
    int32_t v15; // 0x1e2d38f
    if (*(int32_t *)(v14 + 98) != 0) {
        // 0x1e2d381
        *(int32_t *)(g9 - 4) = v14;
        *(int32_t *)(g9 - 8) = 0;
        g2 = function_1e2cffe((int32_t)&g708);
        v15 = g8;
    } else {
        v15 = v14;
    }
    // 0x1e2d389
    if (*(int32_t *)(v15 + 110) != 0) {
        // 0x1e2d38f
        *(int32_t *)(g9 - 4) = v15;
        *(int32_t *)(g9 - 8) = 0;
        g2 = function_1e2cfde((int32_t)&g708);
    }
    // 0x1e2d397
    g2 = 0;
    return 0;
}

// Address range: 0x1e2d39e - 0x1e2d43e
int32_t function_1e2d39e(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2d3a1
    g4 = g5;
    g2 = function_1e2a3f7(a1, a2, 1, g6);
    g5 = v3;
    *(int32_t *)g4 = (int32_t)&g50;
    int32_t v4 = g4; // 0x1e2d3c5
    g6 = v4 + 98;
    *(int32_t *)(v4 + 6) = 0;
    *(int32_t *)(g4 + 78) = 0;
    g2 = function_1e39641(a2, 0, v3);
    int32_t v5; // bp-44
    *(int32_t *)g6 = v5;
    int32_t v6 = g1 ? -4 : 4; // 0x1e2d3de
    int32_t v7 = v6 + g6; // 0x1e2d3de
    int32_t v8 = v6 + g8; // 0x1e2d3de
    *(int32_t *)v7 = *(int32_t *)v8;
    int32_t v9 = v7 + v6; // 0x1e2d3df
    int32_t v10 = v8 + v6; // 0x1e2d3df
    *(int32_t *)v9 = *(int32_t *)v10;
    g6 = v9 + v6;
    g8 = v10 + v6;
    float32_t v11;
    *(float32_t *)(g4 + 118) = (float32_t)(0.01L * (float80_t)v11);
    int32_t v12; // edx
    *(int32_t *)(g4 + 114) = v12;
    *(int32_t *)(g4 + 122) = g2;
    *(int32_t *)(g4 + 126) = g5;
    int32_t v13 = function_1e3991a(a2, 0); // 0x1e2d40f
    g2 = v13;
    int32_t v14 = *(int32_t *)v13; // 0x1e2d414
    g5 = v14;
    *(int32_t *)(g4 + 86) = v14;
    *(int32_t *)(g4 + 90) = *(int32_t *)(g2 + 4);
    int32_t v15 = function_1e3991a(a2, 0); // 0x1e2d429
    g2 = v15;
    int32_t v16 = *(int32_t *)v15; // 0x1e2d42e
    g5 = v16;
    g6 = a2;
    g2 = g4;
    *(int32_t *)(g4 + 82) = v16;
    g4 = 407;
    g3 = v1;
    return g2;
}

// Address range: 0x1e2d43e - 0x1e2d45c
int32_t function_1e2d43e(char a1) {
    // 0x1e2d43e
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2d44d
        g2 = function_1e3df60(g8);
    }
    // 0x1e2d456
    g2 = g8;
    return g8;
}

// Address range: 0x1e2d45c - 0x1e2d4b8
int32_t function_1e2d45c(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2d45c
    g2 = 0;
    *(int32_t *)(g5 + 78) = 0;
    int32_t v1 = g5; // 0x1e2d465
    g8 = v1;
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2d467
    g5 = v2;
    int32_t v3 = g2; // 0x1e2d46a
    int32_t result; // 0x1e2d4ae
    if (*(int32_t *)(v2 + 370) == v3) {
        // 0x1e2d490
        g2 = a1;
        *(char *)(a1 + 5) = 0;
        g2 = function_1e29a40(*(int32_t *)(a1 + 26), 0);
        g2 = function_1e39a10(*(int32_t *)(g8 + 122));
        g11++;
        result = function_1e328b9(63, g8);
    } else {
        int32_t v4 = *(int32_t *)(v1 + 58); // 0x1e2d478
        int32_t v5 = *(int32_t *)(v1 + 54); // 0x1e2d47b
        float80_t v6 = function_1e2f084(a1, a2, a3, v5, v4, 0x4e6e6b28, v3); // 0x1e2d487
        result = (float32_t)v6;
    }
    // 0x1e2d4b3
    g2 = result;
    return result;
}

// Address range: 0x1e2d4b8 - 0x1e2d50f
int32_t function_1e2d4b8(int32_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 30); // 0x1e2d4be
    g2 = v1;
    int32_t v2 = *(int32_t *)(*(int32_t *)(v1 + 262) + 8); // 0x1e2d4c7
    g5 = v2;
    *(int32_t *)(v2 + 106) = 0;
    *(char *)(g5 + 5) = 1;
    int32_t v3 = *(int32_t *)(a1 + 86); // 0x1e2d4d5
    g2 = v3;
    *(int32_t *)(g5 + 42) = v3;
    *(int32_t *)(g5 + 46) = *(int32_t *)(a1 + 90);
    int32_t v4 = *(int32_t *)(a1 + 114); // 0x1e2d4e7
    int32_t v5 = *(int32_t *)(a1 + 110); // 0x1e2d4ea
    g2 = function_1e29f0d(g5, a1 + 98, v5, v4, *(int32_t *)(a1 + 118));
    int32_t v6 = g8; // 0x1e2d4f4
    int32_t v7 = *(int32_t *)(v6 + 126); // 0x1e2d4f4
    g2 = v7;
    int32_t v8; // 0x1e2d503
    if (v7 != 0) {
        // 0x1e2d4fb
        g2 = function_1e39a10(v7);
        v8 = g8;
    } else {
        v8 = v6;
    }
    // 0x1e2d503
    *(int32_t *)(v8 + 78) = 0;
    return g2;
}

// Address range: 0x1e2d50f - 0x1e2d5ca
int32_t function_1e2d50f(int32_t a1, int32_t a2) {
    // 0x1e2d50f
    g2 = a1;
    int32_t v1 = g5; // 0x1e2d51b
    g8 = v1;
    if (a1 == 56) {
        int32_t v2; // 0x1e2d53b
        if (a2 <= -1 && a2 != -0x80000000) {
            // 0x1e2d53b
            v2 = *(int32_t *)(v1 + 82);
            g2 = v2;
        } else {
            v2 = a2;
        }
        int32_t v3 = function_1e325d2(v2, v1, 0x1e2d4b8); // 0x1e2d54a
        g2 = v3;
        *(int32_t *)(g8 + 78) = v3;
    } else {
        if (a1 == 1020) {
            int32_t v4 = *(int32_t *)(v1 + 6); // 0x1e2d557
            g5 = v4;
            int32_t v5 = *(int32_t *)(v1 + 30); // 0x1e2d55a
            g2 = v5;
            int32_t v6 = *(int32_t *)(v5 + 218); // 0x1e2d560
            g7 = v6;
            *(int32_t *)(v1 + 142 + 4 * v6) = v4;
            int32_t v7; // esi
            g2 = function_1e3dbc0(a2, g6, v7);
            int32_t v8 = __ftol(); // 0x1e2d578
            g2 = v8;
            int32_t v9 = *(int32_t *)(4 * v8 + 142 + g8); // 0x1e2d57d
            g5 = v9;
            *(int32_t *)(g8 + 6) = v9;
        } else {
            if (a1 == 1024) {
                int32_t v10 = *(int32_t *)(v1 + 78); // 0x1e2d589
                g2 = v10;
                int32_t v11; // 0x1e2d59a
                if (v10 != 0) {
                    // 0x1e2d590
                    g2 = function_1e32771(v10);
                    v11 = g8;
                } else {
                    v11 = v1;
                }
                int32_t v12 = 0; // edi
                g2 = *(int32_t *)(v11 + 30);
                *(int32_t *)(v11 + 78) = 0;
                *(int32_t *)(g8 + 6) = v12;
                if (*(int32_t *)(g2 + 214) > v12) {
                    int32_t v13 = g8 + 142; // 0x1e2d5ab
                    g2 = v13;
                    *(int32_t *)v13 = v12;
                    int32_t v14 = g2 + 4; // 0x1e2d5b4251
                    g2 = v14;
                    int32_t v15 = *(int32_t *)(g8 + 30); // 0x1e2d5b7255
                    g5 = v15;
                    int32_t v16 = 1; // 0x1e2d5ba259
                    if (*(int32_t *)(v15 + 214) > v16) {
                        int32_t v17 = v16 + 1; // edx
                        *(int32_t *)v14 = v12;
                        int32_t v18 = g2 + 4; // 0x1e2d5b4
                        g2 = v18;
                        int32_t v19 = *(int32_t *)(g8 + 30); // 0x1e2d5b7
                        g5 = v19;
                        while (*(int32_t *)(v19 + 214) > v17) {
                            // 0x1e2d5b1
                            v17++;
                            *(int32_t *)v18 = v12;
                            v18 = g2 + 4;
                            g2 = v18;
                            v19 = *(int32_t *)(g8 + 30);
                            g5 = v19;
                        }
                    }
                }
            }
        }
    }
    // 0x1e2d5c2
    g2 = 0;
    return 0;
}

