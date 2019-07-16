#include "pinball.h"

// Address range: 0x1e2d5ca - 0x1e2d5e1
int32_t function_1e2d5ca(int32_t a1) {
    // 0x1e2d5ca
    g2 = a1;
    int32_t result;
    if (a1 < 3) {
        // 0x1e2d5d7
        result = *(int32_t *)(4 * a1 + 130 + g5);
    } else {
        result = 0;
    }
    // 0x1e2d5de
    g2 = result;
    return result;
}

// Address range: 0x1e2d5e1 - 0x1e2d5f8
int32_t function_1e2d5e1(int32_t a1, int32_t a2) {
    // 0x1e2d5e1
    g2 = a1;
    int32_t result; // 0x1e2d5f5
    if (a1 < 3) {
        // 0x1e2d5ea
        *(int32_t *)(4 * a1 + 130 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2d5f5
    return result;
}

// Address range: 0x1e2d5f8 - 0x1e2d62f
int32_t function_1e2d5f8(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e2d5f8
    function_1e2a3f7(a1, a2, 1, v1);
    g2 = 0;
    *(int32_t *)g8 = (int32_t)&g51;
    *(int32_t *)(g8 + 86) = g2;
    int32_t v2 = function_1e3991a(v1, 0); // 0x1e2d61f
    g2 = v2;
    int32_t v3 = *(int32_t *)v2; // 0x1e2d624
    g5 = v3;
    g2 = g8;
    *(int32_t *)(g8 + 78) = v3;
    return g2;
}

// Address range: 0x1e2d62f - 0x1e2d64d
int32_t function_1e2d62f(char a1) {
    // 0x1e2d62f
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2d63e
        g2 = function_1e3df60(g8);
    }
    // 0x1e2d647
    g2 = g8;
    return g8;
}

// Address range: 0x1e2d64d - 0x1e2d686
int32_t function_1e2d64d(int32_t a1) {
    int32_t v1 = g5; // 0x1e2d650
    g8 = v1;
    g5 = a1;
    g2 = *(int32_t *)a1;
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2d65f
    g5 = v2;
    *(int32_t *)(v2 + 78) = 1;
    int32_t v3 = function_1e325d2(*(int32_t *)(g8 + 78), v1, 0x1e2d6b7); // 0x1e2d672
    g2 = v3;
    int32_t v4 = g8; // 0x1e2d677
    *(int32_t *)(v4 + 86) = v3;
    int32_t result = function_1e328b9(63, v4); // 0x1e2d67d
    g2 = result;
    return result;
}

// Address range: 0x1e2d686 - 0x1e2d6b7
int32_t function_1e2d686(int32_t a1) {
    int32_t v1 = g5; // 0x1e2d690
    g8 = v1;
    if (a1 != 1024) {
        // 0x1e2d6b0
        g2 = 0;
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 86); // 0x1e2d694
    g2 = v2;
    int32_t v3; // 0x1e2d6a6
    if (v2 != 0) {
        // 0x1e2d69d
        g2 = function_1e32771(v2);
        *(int32_t *)(g8 + 86) = 0;
        v3 = g8;
    } else {
        v3 = v1;
    }
    int32_t v4 = *(int32_t *)(v3 + 30); // 0x1e2d6a6
    g5 = v4;
    *(int32_t *)(v4 + 78) = 0;
    // 0x1e2d6b0
    g2 = 0;
    return 0;
}

// Address range: 0x1e2d6b7 - 0x1e2d6c5
int32_t function_1e2d6b7(int32_t a1) {
    int32_t result = function_1e328b9(60, a1); // 0x1e2d6bd
    g2 = result;
    return result;
}

// Address range: 0x1e2d6c5 - 0x1e2d775
int32_t function_1e2d6c5(int32_t a1, int32_t a2) {
    // 0x1e2d6c5
    int32_t v1; // bp-80
    int32_t v2 = &v1; // 0x1e2d6c8
    int32_t v3 = g6; // 0x1e2d6cd
    g6 = a1;
    g4 = 0;
    function_1e2a3f7(a1, a2, 1, v3);
    g2 = v2;
    *(int32_t *)g8 = (int32_t)&g52;
    function_1e39641(a2, g4, v2);
    *(int32_t *)(g8 + 102) = g5;
    int32_t v4; // edx
    *(int32_t *)(g8 + 74) = v4;
    *(int32_t *)(g8 + 82) = g4;
    *(int32_t *)(g8 + 78) = g4;
    int32_t v5 = g8; // 0x1e2d70b
    g2 = *(int32_t *)(v5 + 34);
    *(int32_t *)(v5 + 62) = g4;
    *(int32_t *)(g8 + 66) = 0x4e6e6b28;
    *(int32_t *)(g8 + 86) = 100;
    g5 = *(int32_t *)(g2 + 4);
    g11--;
    *(int32_t *)(g8 + 90) = __ftol();
    g2 = 0x3f000000;
    *(int32_t *)(g8 + 54) = 0x3f000000;
    *(int32_t *)(g8 + 58) = g2;
    *(int32_t *)(g8 + 94) = 0x3ccccccd;
    int32_t v6 = function_1e3991a(a2, g4); // 0x1e2d754
    g2 = v6;
    int32_t v7 = *(int32_t *)v6; // 0x1e2d759
    g5 = v7;
    *(int32_t *)(g6 + 286) = v7;
    int32_t v8 = *(int32_t *)(g2 + 4); // 0x1e2d761
    g2 = g8;
    *(int32_t *)(g6 + 290) = v8;
    g6 = a2;
    g4 = 601;
    return g2;
}

// Address range: 0x1e2d775 - 0x1e2d793
int32_t function_1e2d775(char a1) {
    // 0x1e2d775
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2d784
        g2 = function_1e3df60(g8);
    }
    // 0x1e2d78d
    g2 = g8;
    return g8;
}

// Address range: 0x1e2d793 - 0x1e2d7a9
int32_t function_1e2d793(int32_t a1) {
    // 0x1e2d793
    g5 = a1;
    g2 = 0;
    *(int32_t *)(a1 + 78) = 0;
    int32_t result = *(int32_t *)g5; // 0x1e2d7a2
    g2 = result;
    return result;
}

// Address range: 0x1e2d7a9 - 0x1e2d929
int32_t function_1e2d7a9(uint32_t a1) {
    int32_t v1 = g5; // 0x1e2d7af
    g8 = v1;
    g699 = a1;
    g2 = a1 - 1004;
    g5 = (int32_t)*(char *)(a1 + 0x1e2d55d);
    if (a1 >= 6) {
        // 0x1e2d91d
        g2 = 0;
        return 0;
    }
    // 0x1e2d7d3
    g6 = 0;
    if (*(int32_t *)(v1 + 78) == 0) {
        // 0x1e2d7de
        *(int32_t *)(v1 + 66) = 0x4e6e6b28;
        *(int32_t *)(g8 + 62) = g6;
        g2 = function_1e39a10(*(int32_t *)(v1 + 74));
        g11++;
        g2 = function_1e2d95e(g6, g8);
    }
    // 0x1e2d91d
    g2 = 0;
    return 0;
}

// Address range: 0x1e2d95e - 0x1e2da04
int32_t function_1e2d95e(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    g8 = a1;
    int32_t v2 = *(int32_t *)(a1 + 90); // 0x1e2d969
    int32_t v3 = a1 + 62; // 0x1e2d96c
    g6 = v3;
    float32_t * v4 = (float32_t *)v3; // 0x1e2d96f
    *v4 = (float32_t)((float80_t)v2 + (float80_t)*v4);
    int32_t v5 = *(int32_t *)(g8 + 86); // 0x1e2d973
    uint32_t v6 = (int32_t)__asm_fnstsw(g10); // 0x1e2d97c
    g2 = g2 & -0x10000 | v6;
    if ((v6 / 256 & 1) == 0) {
        int32_t v7 = g8; // 0x1e2d994
        int32_t v8 = function_1e325d2(*(int32_t *)(v7 + 94), v7, 0x1e2d95e); // 0x1e2d998
        g2 = v8;
        *(int32_t *)(g8 + 78) = v8;
    } else {
        // 0x1e2d981
        g2 = v5;
        *(int32_t *)g6 = v5;
        *(int32_t *)(g8 + 78) = 0;
    }
    float32_t v9 = *(float32_t *)g6; // 0x1e2d9a0
    int32_t v10 = g8; // 0x1e2d9a2
    int32_t v11 = *(int32_t *)(v10 + 86); // 0x1e2d9a2
    int32_t v12 = *(int32_t *)(v10 + 34); // 0x1e2d9a5
    g5 = v12;
    int32_t v13 = *(int32_t *)(v12 + 4); // 0x1e2d9ab
    g7 = v13;
    int32_t v14 = *(int32_t *)(v13 + 4) - 1; // 0x1e2d9b1
    g2 = v14;
    *(float64_t *)(g9 - 8) = (float64_t)((float80_t)v9 / (float80_t)v11 * (float80_t)v14);
    g2 = function_1e3dbc0(v14, (int32_t)&g708, (int32_t)&g708);
    int32_t v15 = __ftol(); // 0x1e2d9c3
    g2 = v15;
    int32_t v16 = *(int32_t *)(g8 + 34); // 0x1e2d9c8
    g5 = v16;
    int32_t v17 = *(int32_t *)(4 * v15 + 8 + *(int32_t *)(v16 + 4)); // 0x1e2d9ce
    int32_t v18 = *(int32_t *)(g8 + 30); // 0x1e2d9d2
    int32_t v19 = *(int32_t *)(v17 + 33); // 0x1e2d9d5
    g5 = v19;
    int32_t v20 = v19 - *(int32_t *)(v18 + 238); // 0x1e2d9d8
    g5 = v20;
    *(int32_t *)(g9 - 4) = v20;
    int32_t v21 = *(int32_t *)(v17 + 29); // 0x1e2d9df
    g5 = v21;
    int32_t v22 = v21 - *(int32_t *)(v18 + 234); // 0x1e2d9e2
    g5 = v22;
    *(int32_t *)(g9 - 8) = v22;
    int32_t v23 = *(int32_t *)(*(int32_t *)(g8 + 38) + 4); // 0x1e2d9ec
    g5 = v23;
    *(int32_t *)(g9 - 12) = *(int32_t *)(v23 + 8 + 4 * g2);
    *(int32_t *)(g9 - 16) = v17;
    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 26);
    int32_t result = function_1e29a04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2d9f7
    g2 = result;
    return result;
}

// Address range: 0x1e2da04 - 0x1e2da6d
int32_t function_1e2da04(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g5; // 0x1e2da0b
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2da0b
    g2 = v2;
    if (*(int32_t *)(v2 + 370) != 0) {
        // 0x1e2da19
        g2 = v1;
    }
    int32_t v3 = function_1e3df30(); // 0x1e2da2a
    g2 = v3;
    float80_t v4 = (float80_t)*(float32_t *)(v1 + 62);
    *(float32_t *)(g9 - 4) = (float32_t)(v4 + 0.1L * v4 * 3.05185094759971922707e-5L * (float80_t)v3);
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 66);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 58);
    *(int32_t *)(g9 - 12) = *(int32_t *)(g8 + 54);
    *(int32_t *)(g9 - 16) = a3;
    *(int32_t *)(g9 - 20) = a2;
    *(int32_t *)(g9 - 24) = a1;
    float80_t v5 = function_1e2f084(v3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2da5f
    g2 = (float32_t)v5;
    return (float32_t)v5;
}

// Address range: 0x1e2da6d - 0x1e2da82
int32_t function_1e2da6d(int32_t a1) {
    // 0x1e2da6d
    g2 = a1;
    *(int32_t *)(a1 + 66) = 0x4e6e6b28;
    *(int32_t *)(g2 + 62) = 0;
    return g2;
}

// Address range: 0x1e2da82 - 0x1e2dd91
int32_t function_1e2da82(int32_t a1) {
    // 0x1e2da82
    int32_t v1; // bp-104
    int32_t v2 = &v1; // 0x1e2da85
    int32_t v3 = g6; // 0x1e2da8a
    g4 = 0;
    g6 = a1;
    g2 = function_1e2a3f7(a1, -1, 0, v3);
    char * v4 = "table"; // bp-132
    *(int32_t *)g8 = (int32_t)&g53;
    int32_t v5 = function_1e392c2((int32_t)v4); // 0x1e2daa6
    int32_t v6; // bp-88
    int32_t v7 = &v6; // 0x1e2daae
    g2 = v7;
    g2 = function_1e39641(v5, g4, v7);
    int32_t v8 = function_1e3991a(v5, g4); // 0x1e2dac4
    g2 = v8;
    g2 = function_1e39aaf(*(int32_t *)v8, *(int32_t *)(v8 + 4));
    int32_t v9 = g4; // 0x1e2dad3
    int32_t v10;
    g2 = function_1e299e2(v10, v9, v9);
    v1 = g4;
    int32_t v11 = g5; // 0x1e2daed
    g2 = *(int32_t *)(v11 + 12);
    int32_t v12 = g4; // 0x1e2daf0
    g2 = *(int32_t *)(v11 + 16);
    g2 = function_1e298eb(v12, v11, v10, v12, v12, v2);
    g5 = *(int32_t *)(g8 + 30);
    g5 = *(int32_t *)(g8 + 30);
    g5 = *(int32_t *)(g8 + 30);
    int32_t v13 = function_1e3991a(v5, g4); // 0x1e2db29
    g2 = v13;
    int32_t v14 = *(int32_t *)(g8 + 30); // 0x1e2db57
    if (v13 == 0) {
        // 0x1e2db57
        g2 = v14;
        *(int32_t *)(v14 + 270) = 0x41c80000;
        int32_t v15 = *(int32_t *)(g8 + 30); // 0x1e2db64
        g2 = v15;
        *(int32_t *)(v15 + 274) = 0x3f000000;
        int32_t v16 = *(int32_t *)(g8 + 30); // 0x1e2db71
        g2 = v16;
        *(int32_t *)(v16 + 278) = 0x3fc90fd8;
    } else {
        // 0x1e2db32
        g5 = v14;
        *(int32_t *)(v14 + 270) = *(int32_t *)v13;
        int32_t v17 = *(int32_t *)(g8 + 30); // 0x1e2db3d
        g5 = v17;
        *(int32_t *)(v17 + 274) = *(int32_t *)(v13 + 4);
        int32_t v18 = *(int32_t *)(g8 + 30); // 0x1e2db49
        g5 = v18;
        int32_t v19 = *(int32_t *)(v13 + 8); // 0x1e2db4c
        g2 = v19;
        *(int32_t *)(v18 + 278) = v19;
    }
    int32_t v20 = g8; // 0x1e2db7e
    int32_t v21 = *(int32_t *)(v20 + 30); // 0x1e2db7e
    int32_t v22 = v21 + 278; // 0x1e2db81
    int32_t v23 = v21 + 274; // 0x1e2db87
    g5 = v23;
    int32_t v24 = v21 + 270; // 0x1e2db8d
    g2 = v24;
    float80_t v25 = (float80_t)*(float32_t *)v23; // 0x1e2db92
    float80_t v26;
    if (fabsl(v25) < 9223372036854775808.0L) {
        // bb
        v26 = sinl(v25);
    } else {
        v26 = v25;
    }
    float80_t v27 = (float80_t)*(float32_t *)v22; // 0x1e2db99
    float80_t v28;
    if (fabsl(v27) < 9223372036854775808.0L) {
        // bb95
        v28 = cosl(v27);
    } else {
        v28 = v27;
    }
    float80_t v29 = v26 * v28 * (float80_t)*(float32_t *)v24; // 0x1e2dba0
    *(float32_t *)(v20 + 98) = (float32_t)v29;
    float80_t v30 = (float80_t)*(float32_t *)v22; // 0x1e2dba5
    float80_t v31;
    if (fabsl(v30) < 9223372036854775808.0L) {
        // bb97
        v31 = sinl(v30);
    } else {
        v31 = v30;
    }
    float80_t v32 = (float80_t)*(float32_t *)g5; // 0x1e2dbb6
    float80_t v33;
    if (fabsl(v32) < 9223372036854775808.0L) {
        // bb99
        v33 = sinl(v32);
    } else {
        v33 = v32;
    }
    float80_t v34 = v31 * v33 * (float80_t)*(float32_t *)g2; // 0x1e2dbbd
    *(float32_t *)(g8 + 102) = (float32_t)v34;
    int32_t v35 = function_1e3991a(v5, 0); // 0x1e2dbc2
    g2 = v35;
    if (v35 == 0) {
        // 0x1e2dbd2
        *(int32_t *)(g8 + 110) = 0x3e4ccccd;
    } else {
        int32_t v36 = *(int32_t *)v35; // 0x1e2dbcb
        g2 = v36;
        *(int32_t *)(g8 + 110) = v36;
    }
    // 0x1e2dbd9
    int32_t v37;
    int32_t v38 = *(int32_t *)(v37 + 29); // 0x1e2dbdc
    g5 = v38;
    *(int32_t *)(g6 + 234) = v38;
    *(int32_t *)(g6 + 238) = *(int32_t *)(g2 + 33);
    *(int32_t *)(g6 + 242) = *(int32_t *)(g2 + 12);
    *(int32_t *)(g6 + 246) = *(int32_t *)(g2 + 16);
    int32_t v39 = g2; // 0x1e2dc06
    float32_t * v40;
    int32_t v41 = (int32_t)v40; // 0x1e2dc09
    g6 = v41;
    *(int32_t *)(g8 + 66) = g5;
    *(int32_t *)(g8 + 62) = 0x41700000;
    int32_t v42 = g6; // 0x1e2dc16
    int32_t v43 = v42 + 16; // 0x1e2dc19
    g5 = v43;
    float80_t v44 = (float80_t)*(float32_t *)(v42 + 8); // st7
    uint32_t v45 = (int32_t)__asm_fnstsw(g10); // 0x1e2dc22
    g2 = g2 & -0x10000 | v45;
    if ((v45 / 256 & 65) != 0) {
        // 0x1e2dc27
        v44 = (float80_t)*(float32_t *)v43;
    }
    // 0x1e2dc29
    g2 = v41;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    *(float32_t *)(g8 + 82) = (float32_t)v44;
    __asm_fnstsw(g10);
    g2 = v41;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    *(float32_t *)(g8 + 90) = (float32_t)(float80_t)*v40;
    g4 = v41 + 20;
    g7 = v41 + 12;
    g5 = v41;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    int32_t v46 = g5 + 4; // 0x1e2dc77
    g5 = v46;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    *(float32_t *)(g8 + 86) = (float32_t)(float80_t)*(float32_t *)v46;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    *(float32_t *)(g8 + 94) = (float32_t)(float80_t)*(float32_t *)g5;
    int32_t v47 = function_1e3df20(4036); // 0x1e2dcb5
    g2 = v47;
    float32_t * v48;
    if (v47 != 0) {
        int32_t v49 = g8; // 0x1e2dcc1
        float80_t v50 = (float80_t)*(float32_t *)(v49 + 94); // 0x1e2dcc1
        int32_t v51 = v49 + 86; // 0x1e2dcc4
        float80_t v52 = v50 - (float80_t)*(float32_t *)v51; // 0x1e2dcc4
        float80_t v53 = (float80_t)*(float32_t *)(v49 + 90); // 0x1e2dccd
        int32_t v54 = v49 + 82; // 0x1e2dcd0
        float80_t v55 = v53 - (float80_t)*(float32_t *)v54; // 0x1e2dcd0
        g5 = v47;
        int32_t v56 = *(int32_t *)v54; // 0x1e2dcde
        int32_t v57 = function_1e30e52(v56, *(int32_t *)v51, v55, v52); // 0x1e2dce1
        g2 = v57;
        v48 = (float32_t *)v57;
    } else {
        v48 = NULL;
    }
    // 0x1e2dcf7
    g563 = v48;
    if (v39 > 0) {
        // 0x1e2dcfd
        g2 = v39;
        while (true) {
            // 0x1e2dd03
            *(int32_t *)(g9 - 4) = 85;
            g4 = 0;
            int32_t v58 = function_1e3df20(v39); // 0x1e2dd0a
            g2 = v58;
            g5 = v58;
            int32_t v59; // 0x1e2dd32
            if (v58 == 0) {
                // 0x1e2dd03
                v59 = g4;
            } else {
                // 0x1e2dd18
                *(int32_t *)g9 = *(int32_t *)(g6 + 4);
                *(int32_t *)(g9 - 4) = *(int32_t *)g6;
                *(int32_t *)(g9 - 8) = *(int32_t *)(g6 + 12);
                *(int32_t *)(g9 - 12) = *(int32_t *)(g6 + 8);
                *(int32_t *)(g9 - 20) = g8 + 5;
                *(int32_t *)(g9 - 24) = g8;
                int32_t v60 = function_1e3053c((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2dd2b
                g2 = v60;
                g4 = v60;
                v59 = v60;
            }
            // 0x1e2dd32
            g2 = *(int32_t *)v59;
            g5 = v59;
            int32_t v61 = g8; // 0x1e2dd39
            int32_t v62 = *(int32_t *)(v61 + 46); // 0x1e2dd39
            g5 = v62;
            int32_t v63 = *(int32_t *)v62; // 0x1e2dd3c
            g2 = v63;
            int32_t v64; // 0x1e2dd4f
            if (*(int32_t *)(v62 + 4) == v63) {
                // 0x1e2dd43
                *(int32_t *)(g9 - 4) = *(int32_t *)(v61 + 42);
                *(int32_t *)(g9 - 8) = g5;
                int32_t v65 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2dd47
                g2 = v65;
                *(int32_t *)(g8 + 46) = v65;
                v64 = g4;
            } else {
                v64 = v59;
            }
            // 0x1e2dd4f
            *(int32_t *)(g9 - 4) = v64;
            g6 += 8;
            *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
            g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
            int32_t v66 = v39 - 1; // 0x1e2dd5b
            if (v66 == 0) {
                // break -> 0x1e2dd60
                break;
            }
            v39 = v66;
        }
    }
    int32_t v67 = g8; // 0x1e2dd60
    int32_t v68 = v67 + 114; // 0x1e2dd60
    g2 = v68;
    g5 = v67 + 5;
    *(int32_t *)(g9 - 4) = v68;
    int32_t v69 = g8; // 0x1e2dd67
    *(int32_t *)(v69 + 122) = v69;
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)g2 = g5;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 90);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 94);
    *(int32_t *)(g9 - 12) = *(int32_t *)(g8 + 82);
    *(int32_t *)(g9 - 16) = *(int32_t *)(g8 + 86);
    *(int32_t *)(g8 + 118) = -1;
    function_1e320db((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
    g2 = g8;
    g6 = *(int32_t *)g9;
    return g8;
}

// Address range: 0x1e2dd91 - 0x1e2ddaf
int32_t function_1e2dd91(char a1) {
    // 0x1e2dd91
    g8 = g5;
    int32_t v1; // esi
    g2 = function_1e2de00(v1);
    if ((a1 & 1) != 0) {
        // 0x1e2dda0
        g2 = function_1e3df60(g8);
    }
    // 0x1e2dda9
    g2 = g8;
    return g8;
}

// Address range: 0x1e2ddaf - 0x1e2de00
int32_t function_1e2ddaf(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = &v1;
    g6 = g5;
    int32_t v2 = function_1e3df30(); // 0x1e2ddbc
    g2 = a2;
    float32_t v3 = *(float32_t *)(g8 + 54); // 0x1e2ddd6
    float32_t v4 = *(float32_t *)(g6 + 110); // 0x1e2ddd9
    float32_t v5 = *(float32_t *)(g8 + 66); // 0x1e2dddc
    float32_t v6 = *(float32_t *)(g6 + 98); // 0x1e2dddf
    *(float32_t *)a2 = (float32_t)((float80_t)v6 - (0.5L - 3.05185094759971922707e-5L * (float80_t)v2 + (float80_t)v3) * (float80_t)v4 * (float80_t)v5);
    float32_t v7 = *(float32_t *)(g8 + 58); // 0x1e2dde4
    float32_t v8 = *(float32_t *)(g6 + 110); // 0x1e2dde7
    float32_t v9 = *(float32_t *)(g8 + 66); // 0x1e2ddea
    float32_t v10 = *(float32_t *)(g6 + 102); // 0x1e2dded
    *(float32_t *)(g2 + 4) = (float32_t)((float80_t)v10 - (float80_t)v7 * (float80_t)v8 * (float80_t)v9);
    g2 = 1;
    return 1;
}

// Address range: 0x1e2de00 - 0x1e2de2e
int32_t function_1e2de00(int32_t a1) {
    int32_t v1 = g8; // 0x1e2de00
    int32_t v2 = g6; // bp-8
    *(int32_t *)g5 = (int32_t)&g53;
    int32_t v3 = g5; // 0x1e2de08
    g6 = v3;
    int32_t v4 = (int32_t)g563; // 0x1e2de0a
    g8 = v4;
    int32_t v5; // 0x1e2de24
    if (g563 != NULL) {
        // 0x1e2de14
        g5 = v4;
        g2 = function_1e30f8d(v2, v1);
        g2 = function_1e3df60(v4);
        v5 = g6;
    } else {
        v5 = v3;
    }
    // 0x1e2de24
    g5 = v5;
    int32_t result = function_1e2a4cb(); // 0x1e2de26
    g2 = result;
    g6 = v2;
    g8 = v1;
    return result;
}

// Address range: 0x1e2de2e - 0x1e2dec9
int32_t function_1e2de2e(int32_t a1) {
    int32_t v1 = g5; // 0x1e2de30
    g4 = v1 + 102;
    *(int32_t *)v1 = (int32_t)&g54;
    g8 = g5;
    g6 = 4;
    g3 = 0;
    int32_t v2 = 4; // 0x1e2de5511
    int32_t v3 = g4; // 0x1e2de44
    while (true) {
        int32_t v4 = *(int32_t *)v3; // 0x1e2de44
        g2 = v4;
        int32_t v5; // 0x1e2de52
        int32_t v6; // 0x1e2de55
        if (v4 != 0) {
            // 0x1e2de4a
            *(int32_t *)(g9 - 4) = v4;
            g2 = function_1e2f33a((int32_t)&g708);
            *(int32_t *)g4 = g3;
            v6 = g6;
            v5 = g4;
        } else {
            v6 = v2;
            v5 = v3;
        }
        int32_t v7 = v5 + 28; // 0x1e2de52
        g4 = v7;
        int32_t v8 = v6 - 1; // 0x1e2de55
        g6 = v8;
        if (v8 == 0) {
            // break -> 0x1e2de58
            break;
        }
        v2 = v8;
        v3 = v7;
    }
    int32_t v9 = g8; // 0x1e2de58
    int32_t v10 = *(int32_t *)(v9 + 58); // 0x1e2de58
    g2 = v10;
    g6 = 0;
    int32_t v11; // 0x1e2de6a
    if (v10 != 0) {
        // 0x1e2de61
        *(int32_t *)(g9 - 4) = v10;
        g2 = function_1e2f33a((int32_t)&g708);
        *(int32_t *)(g8 + 58) = g6;
        v11 = g8;
    } else {
        v11 = v9;
    }
    int32_t v12 = *(int32_t *)(v11 + 54); // 0x1e2de6a
    g2 = v12;
    g6 = 0;
    int32_t v13; // 0x1e2de7c
    if (v12 != 0) {
        // 0x1e2de73
        *(int32_t *)(g9 - 4) = v12;
        g2 = function_1e2f33a((int32_t)&g708);
        *(int32_t *)(g8 + 54) = g6;
        v13 = g8;
    } else {
        v13 = v11;
    }
    int32_t v14 = *(int32_t *)(v13 + 266); // 0x1e2de7c
    g5 = v14;
    int32_t v15; // 0x1e2de8d
    if (v14 != 0) {
        // 0x1e2de86
        *(int32_t *)(g9 - 4) = 1;
        g2 = *(int32_t *)v14;
        v15 = g8;
    } else {
        v15 = v13;
    }
    int32_t v16 = v15 + 254; // 0x1e2de8d
    g6 = v16;
    int32_t v17 = *(int32_t *)v16; // 0x1e2de933
    g2 = v17;
    int32_t v18; // 0x1e2deab
    if (*(int32_t *)(v17 + 4) != 0) {
        while (true) {
            int32_t v19 = *(int32_t *)(v17 + 8); // 0x1e2de9b
            g5 = v19;
            int32_t v20; // 0x1e2de93
            if (v19 != 0) {
                // 0x1e2dea2
                *(int32_t *)(g9 - 4) = 1;
                g2 = *(int32_t *)v19;
                v20 = g6;
            } else {
                v20 = v16;
            }
            int32_t v21 = *(int32_t *)v20; // 0x1e2de93
            g2 = v21;
            if (*(int32_t *)(v21 + 4) == 0) {
                // break -> 0x1e2de93
                break;
            }
            v16 = v20;
            v17 = v21;
        }
        // 0x1e2de93
        v18 = g8;
    } else {
        v18 = v15;
    }
    // 0x1e2deab
    *(int32_t *)(g9 - 4) = *(int32_t *)(v18 + 262);
    g2 = function_1e3a728((int32_t)&g708);
    *(int32_t *)(g9 - 4) = *(int32_t *)g6;
    g2 = function_1e3a728((int32_t)&g708);
    g5 = g8;
    int32_t result = function_1e2a201(); // 0x1e2debf
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e2dec9 - 0x1e2dee7
int32_t function_1e2dec9(char a1) {
    // 0x1e2dec9
    int32_t v1; // esi
    g2 = function_1e2de2e(v1);
    if ((a1 & 1) != 0) {
        // 0x1e2ded8
        g2 = function_1e3df60(g8);
    }
    // 0x1e2dee1
    g2 = g8;
    return g8;
}

// Address range: 0x1e2dee7 - 0x1e2defd
int32_t function_1e2dee7(int32_t a1) {
    // 0x1e2dee7
    g5 = a1;
    g2 = 0;
    *(int32_t *)(a1 + 90) = 0;
    int32_t result = *(int32_t *)g5; // 0x1e2def6
    g2 = result;
    return result;
}

// Address range: 0x1e2defd - 0x1e2df7f
int32_t function_1e2defd(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // 0x1e2df03
    g6 = a1 + 254;
    *(int32_t *)(a1 + 94) = 0;
    g2 = function_1e26224(g3, v1, g8);
    int32_t v2 = g6; // 0x1e2df15
    int32_t v3 = *(int32_t *)v2; // 0x1e2df15
    g2 = v3;
    int32_t v4 = *(int32_t *)(v3 + 4) - 1; // 0x1e2df1a
    g2 = v4;
    int32_t v5 = 4 * v4; // 0x1e2df1b
    g3 = v5;
    int32_t v6;
    if (v5 >= 0) {
        int32_t v7 = g9; // 0x1e2df28
        g2 = *(int32_t *)v2;
        *(int32_t *)(v7 - 4) = 0;
        int32_t v8 = g3; // 0x1e2df2a
        g5 = *(int32_t *)(g2 + 8 + v8);
        g3 = v8 - 4;
        int32_t v9 = v7 - 8; // 0x1e2df31
        *(int32_t *)v9 = 1022;
        g2 = *(int32_t *)g5;
        while (g3 >= 0) {
            // 0x1e2df26
            v7 = v9;
            g2 = *(int32_t *)g6;
            *(int32_t *)(v7 - 4) = 0;
            v8 = g3;
            g5 = *(int32_t *)(g2 + 8 + v8);
            g3 = v8 - 4;
            v9 = v7 - 8;
            *(int32_t *)v9 = 1022;
            g2 = *(int32_t *)g5;
        }
        v6 = v9;
    } else {
        v6 = g9;
    }
    int32_t v10 = *(int32_t *)(g8 + 230); // 0x1e2df3c
    g5 = v10;
    int32_t v11; // 0x1e2df4a
    if (v10 != 0) {
        // 0x1e2df46
        *(int32_t *)(v6 - 4) = 0;
        g2 = *(int32_t *)v10;
        v11 = v6 - 8;
        *(int32_t *)v11 = 1022;
    } else {
        v11 = v6;
    }
    // 0x1e2df51
    g2 = g201;
    *(int32_t *)(v11 - 4) = g201;
    *(int32_t *)(v11 - 8) = 67;
    g2 = function_1e328b9((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = -0x40800000;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 24;
    int32_t v12 = function_1e25763((int32_t)&g708); // 0x1e2df67
    g2 = v12;
    *(int32_t *)(g9 - 4) = v12;
    g5 = g200;
    int32_t result = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e2df73
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2df7f - 0x1e2e676
int32_t function_1e2df7f(int32_t a1, int32_t a2) {
    int32_t v1 = a1 - 1000; // 0x1e2df86
    g700 = v1;
    g2 = v1;
    int32_t v2 = g6; // bp-28
    int32_t v3 = &v2; // 0x1e2df93
    int32_t v4 = g5; // 0x1e2df94
    g8 = v4;
    g5 = (int32_t)*(char *)(a1 + (int32_t)&g14 - 1000);
    int32_t v5; // ebx
    int32_t v6; // edi
    int32_t v7;
    int32_t v8; // 0x1e2e355
    switch (a1) {
        case 1000: {
            // 0x1e2dfaa
            if (*(int32_t *)(v4 + 370) == 0) {
                // 0x1e2dfb7
                g5 = *(int32_t *)(v4 + 42);
            }
            goto lab_0x1e2e663;
        }
        case 1001: {
            // 0x1e2dfc8
            if (*(int32_t *)(v4 + 370) == 0) {
                // 0x1e2dfd5
                g5 = *(int32_t *)(v4 + 42);
            }
            goto lab_0x1e2e663;
        }
        case 1002: {
            // 0x1e2dfe6
            if (*(int32_t *)(v4 + 370) == 0) {
                // 0x1e2dff3
                g5 = *(int32_t *)(v4 + 46);
            }
            goto lab_0x1e2e663;
        }
        case 1003: {
            // 0x1e2e004
            if (*(int32_t *)(v4 + 370) == 0) {
                // 0x1e2e011
                g5 = *(int32_t *)(v4 + 46);
            }
            goto lab_0x1e2e663;
        }
        case 1004: {
            goto lab_0x1e2e022;
        }
        case 1005: {
            goto lab_0x1e2e022;
        }
        case 1008: {
            goto lab_0x1e2e037;
        }
        case 1009: {
            goto lab_0x1e2e037;
        }
        case 1010: {
            goto lab_0x1e2e037;
        }
        case 1012: {
            // 0x1e2e06a
            g5 = *(int32_t *)(v4 + 266);
            int32_t v9 = v4 + 370; // 0x1e2e079
            g2 = v9;
            if (*(int32_t *)v9 != 0) {
                // branch -> 0x1e2e663
            }
            goto lab_0x1e2e663;
        }
        case 1013: {
            int32_t * v10 = (int32_t *)(v4 + 266); // 0x1e2e0aa
            int32_t v11 = *v10; // 0x1e2e0aa
            g5 = v11;
            g2 = *(int32_t *)v11;
            int32_t v12 = *v10; // 0x1e2e0b3
            g5 = v12;
            g2 = *(int32_t *)v12;
            g5 = *(int32_t *)(v4 + 222);
            int32_t v13 = *(int32_t *)(v4 + 230); // 0x1e2e0cf
            g2 = v13;
            int32_t v14 = function_1e25763(*(char *)(v13 + 5) == 0 ? 26 : 30); // 0x1e2e0e4
            g2 = v14;
            g5 = g200;
            g2 = function_1e2fbc7(v14, (int32_t)&g708);
            int32_t v15 = *(int32_t *)g8; // 0x1e2e0f5
            g5 = v15;
            if (v15 != 0) {
                // 0x1e2e0ff
                g2 = *(int32_t *)v15;
            }
            goto lab_0x1e2e663;
        }
        case 1014: {
            int32_t v16 = *(int32_t *)(v4 + 94); // 0x1e2e10f
            g2 = v16;
            int32_t v17; // 0x1e2e151
            if (v16 != 0) {
                // 0x1e2e116
                g2 = function_1e32771(v16);
                g2 = function_1e2defd(0, g8);
                g2 = function_1e26035(1);
                v17 = g8;
            } else {
                v17 = v4;
            }
            int32_t v18 = *(int32_t *)(v17 + 90); // 0x1e2e12b
            g2 = v18;
            g6 = 0;
            if (v18 == 0) {
                // 0x1e2e14f
                g6 = 0;
                g5 = v17;
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g8 + 62) = g6;
                *(int32_t *)(g9 - 4) = 1024;
                g2 = function_1e2df7f((int32_t)&g708, (int32_t)&g708);
                int32_t v19 = *(int32_t *)(g8 + 262); // 0x1e2e164
                g2 = v19;
                *(float64_t *)(g9 - 8) = (float64_t)(float32_t)a2;
                int32_t v20 = *(int32_t *)(v19 + 8); // 0x1e2e170
                g2 = v20;
                *(int32_t *)(v20 + 46) = v6;
                *(int32_t *)(g2 + 42) = v6;
                g6 = g8 + 214;
                *(int32_t *)(g2 + 50) = -0x40b33333;
                int32_t v21 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2e186
                g2 = v21;
                int32_t v22 = __ftol(); // 0x1e2e18e
                g2 = v22;
                *(int32_t *)g6 = v22;
                int32_t v23 = g2; // 0x1e2e195
                if (v23 < 1) {
                    // 0x1e2e19a
                    *(int32_t *)g6 = 1;
                } else {
                    if (v23 > 4) {
                        // 0x1e2e1a7
                        *(int32_t *)g6 = 4;
                    }
                }
                // 0x1e2e1ad
                g2 = *(int32_t *)(g8 + 102);
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = g2;
                *(int32_t *)(g8 + 50) = g2;
                *(int32_t *)(g8 + 218) = 0;
                *(int32_t *)(g8 + 82) = 0;
                g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                *(int32_t *)(g8 + 294) = 0;
                if (*(int32_t *)g6 > 1) {
                    // 0x1e2e1e2
                    v5 = g8 + 130;
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = *(int32_t *)v5;
                    g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                    *(int32_t *)(v5 + 4) = 0;
                    *(int32_t *)(v5 + 8) = 0;
                    int32_t v24 = v5; // 0x1e2e1ff
                    v5 = v24 + 28;
                    int32_t v25 = 2; // 0x1e2e202
                    int32_t v26 = *(int32_t *)(g8 + 330); // 0x1e2e205
                    g2 = v26;
                    *(int32_t *)(v24 + 16) = v26;
                    *(int32_t *)(v5 - 8) = *(int32_t *)(g8 + 334);
                    g5 = v25;
                    *(int32_t *)(v5 - 4) = *(int32_t *)(g8 + 342);
                    int32_t v27 = *(int32_t *)(g8 + 314); // 0x1e2e223
                    g2 = v27;
                    *(int32_t *)(v5 - 16) = v27;
                    while (*(int32_t *)g6 > g5) {
                        // 0x1e2e1e8
                        *(int32_t *)(g9 - 4) = 0;
                        *(int32_t *)(g9 - 8) = *(int32_t *)v5;
                        g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                        *(int32_t *)(v5 + 4) = 0;
                        *(int32_t *)(v5 + 8) = 0;
                        v24 = v5;
                        v5 = v24 + 28;
                        v25++;
                        v26 = *(int32_t *)(g8 + 330);
                        g2 = v26;
                        *(int32_t *)(v24 + 16) = v26;
                        *(int32_t *)(v5 - 8) = *(int32_t *)(g8 + 334);
                        g5 = v25;
                        *(int32_t *)(v5 - 4) = *(int32_t *)(g8 + 342);
                        v27 = *(int32_t *)(g8 + 314);
                        g2 = v27;
                        *(int32_t *)(v5 - 16) = v27;
                    }
                }
                int32_t v28 = g8; // 0x1e2e230
                int32_t v29 = v28 + 326; // 0x1e2e230
                g4 = v29;
                int32_t v30 = *(int32_t *)(v28 + 330); // 0x1e2e236
                g2 = v30;
                *(int32_t *)v29 = v30;
                g2 = function_1e279f0();
                *(int32_t *)(g9 - 4) = *(int32_t *)g4;
                g5 = g8;
                g2 = function_1e2e754((int32_t)&g708);
                int32_t v31 = *(int32_t *)(g8 + 218) + 1; // 0x1e2e252
                g2 = v31;
                *(int32_t *)(g9 - 4) = v31;
                *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 58);
                g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 58);
                g2 = function_1e2f3ed((int32_t)&g708);
                g2 = function_1e279f0();
                int32_t v32 = *(int32_t *)g6; // 0x1e2e269
                g5 = v32;
                if (v32 < 4) {
                    int32_t v33 = 28 * v32; // 0x1e2e277
                    g2 = v33;
                    g6 = v33 + 102 + g8;
                    *(int32_t *)(g9 - 4) = -1;
                    *(int32_t *)(g9 - 8) = *(int32_t *)g6;
                    g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                    g6 += 28;
                    int32_t v34 = 3 - v32; // 0x1e2e28c
                    while (v34 != 0) {
                        // 0x1e2e280
                        *(int32_t *)(g9 - 4) = -1;
                        *(int32_t *)(g9 - 8) = *(int32_t *)g6;
                        g2 = function_1e2f34b((int32_t)&g708, (int32_t)&g708);
                        g6 += 28;
                        v34--;
                    }
                }
                // 0x1e2e28f
                function_1e279f0();
                g2 = 0;
                *(int32_t *)(g8 + 318) = 0;
                *(int32_t *)(g8 + 310) = g2;
                *(int32_t *)(g8 + 322) = g2;
                g5 = g200;
                g2 = function_1e2f83c();
                g2 = function_1e279f0();
                g5 = g201;
                g2 = function_1e2f83c();
                g2 = function_1e279f0();
                g5 = *(int32_t *)(g8 + 266);
                *(int32_t *)(g9 - 4) = 0x3e4ccccd;
                *(int32_t *)(g9 - 8) = 28;
                g2 = *(int32_t *)g5;
                *(int32_t *)(g9 - 12) = 0x1e2dee7;
                *(int32_t *)(g9 - 16) = g8;
                *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 66);
                g2 = function_1e39a10((int32_t)&g708);
                *(float32_t *)(g9 - 4) = (float32_t)g684;
                g11++;
                int32_t v35 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2e2ed
                g2 = v35;
                *(int32_t *)(g8 + 90) = v35;
            } else {
                // 0x1e2e134
                *(int32_t *)(g9 - 4) = v18;
                g2 = function_1e32771((int32_t)&g708);
                *(int32_t *)(g9 - 4) = g6;
                g5 = g8;
                *(int32_t *)(g9 - 8) = 1013;
                *(int32_t *)(g8 + 90) = g6;
                g2 = function_1e2df7f((int32_t)&g708, (int32_t)&g708);
            }
            goto lab_0x1e2e663;
        }
        case 1018: {
            int32_t v36 = v4 + 358; // 0x1e2e2fa
            g6 = v36;
            int32_t v37 = *(int32_t *)v36; // 0x1e2e300
            g2 = v37;
            int32_t v38; // 0x1e2e30f
            if (v37 != 0) {
                // 0x1e2e306
                g2 = function_1e32771(v37);
                v38 = g9;
            } else {
                v38 = v3;
            }
            // 0x1e2e30c
            *(int32_t *)(v38 - 4) = 0x1e2e78f;
            *(int32_t *)(v38 - 8) = g8;
            *(float64_t *)(v38 - 16) = (float64_t)(float80_t)(float32_t)a2;
            int32_t v39 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2e31b
            g2 = v39;
            *(float32_t *)(g9 + 4) = (float32_t)g684;
            g11++;
            int32_t v40 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2e326
            g2 = v40;
            *(int32_t *)(g8 + 354) = 1;
            *(int32_t *)g6 = g2;
            goto lab_0x1e2e663;
        }
        case 1021: {
            int32_t v41 = *(int32_t *)(v4 + 214); // 0x1e2e33c
            g5 = v41;
            if (v41 > 1) {
                int32_t v42 = v4 + 218; // 0x1e2e34b
                g6 = v42;
                int32_t * v43 = (int32_t *)v42; // 0x1e2e351
                int32_t v44 = *v43 + 1; // 0x1e2e353
                v8 = (0x100000000 * (int64_t)(v44 >> 31) | (int64_t)v44) % (int64_t)v41;
                g7 = v8;
                int32_t v45 = 28 * v8; // 0x1e2e35b
                g2 = v45;
                int32_t v46 = v45 + v4; // 0x1e2e35e
                g5 = v46;
                if (*(int32_t *)(v46 + 118) > 0) {
                    int32_t v47 = *(int32_t *)(v4 + 82); // 0x1e2e36b
                    g2 = v47;
                    *(int32_t *)(v4 + 106 + 28 * *v43) = v47;
                    int32_t v48 = g8; // 0x1e2e377
                    int32_t v49 = *(int32_t *)(v48 + 86); // 0x1e2e377
                    g2 = v49;
                    *(int32_t *)(v48 + 110 + 28 * *(int32_t *)g6) = v49;
                    int32_t v50 = g8; // 0x1e2e383
                    int32_t v51 = *(int32_t *)(v50 + 326); // 0x1e2e383
                    g2 = v51;
                    *(int32_t *)(v50 + 118 + 28 * *(int32_t *)g6) = v51;
                    int32_t v52 = g8; // 0x1e2e392
                    int32_t v53 = *(int32_t *)(v52 + 334); // 0x1e2e392
                    g2 = v53;
                    *(int32_t *)(v52 + 122 + 28 * *(int32_t *)g6) = v53;
                    int32_t v54 = g8; // 0x1e2e3a1
                    int32_t v55 = *(int32_t *)(v54 + 342); // 0x1e2e3a1
                    g2 = v55;
                    *(int32_t *)(v54 + 126 + 28 * *(int32_t *)g6) = v55;
                    int32_t v56 = g8; // 0x1e2e3b0
                    int32_t v57 = *(int32_t *)(v56 + 314); // 0x1e2e3b0
                    g2 = v57;
                    *(int32_t *)(v56 + 114 + 28 * *(int32_t *)g6) = v57;
                    int32_t v58 = *(int32_t *)(g5 + 106); // 0x1e2e3bf
                    g7 = v58;
                    *(int32_t *)(g8 + 82) = v58;
                    int32_t v59 = *(int32_t *)(g5 + 110); // 0x1e2e3c5
                    g2 = v59;
                    *(int32_t *)(g8 + 86) = v59;
                    int32_t v60 = *(int32_t *)(g5 + 118); // 0x1e2e3cb
                    g2 = v60;
                    *(int32_t *)(g8 + 326) = v60;
                    int32_t v61 = *(int32_t *)(g5 + 122); // 0x1e2e3d4
                    g2 = v61;
                    *(int32_t *)(g8 + 334) = v61;
                    int32_t v62 = *(int32_t *)(g5 + 126); // 0x1e2e3dd
                    g2 = v62;
                    *(int32_t *)(g8 + 342) = v62;
                    int32_t v63 = *(int32_t *)(g5 + 114); // 0x1e2e3e7
                    g2 = v63;
                    *(int32_t *)(g8 + 314) = v63;
                    int32_t v64 = *(int32_t *)(g5 + 102); // 0x1e2e3f0
                    g2 = v64;
                    *(int32_t *)(g8 + 50) = v64;
                    g2 = function_1e2f34b(v64, g7);
                    int32_t v65 = *(int32_t *)(g8 + 50); // 0x1e2e3fc
                    g5 = v65;
                    *(int32_t *)(v65 + 4) = 1;
                    int32_t v66 = g8; // 0x1e2e406
                    g5 = v66;
                    g2 = function_1e2e754(*(int32_t *)(v66 + 326));
                    int32_t v67 = v8 + 1; // 0x1e2e413
                    g5 = v67;
                    g2 = function_1e2f34b(*(int32_t *)(g8 + 58), v67);
                    g2 = function_1e2f3ed(*(int32_t *)(g8 + 58));
                    int32_t v68 = g8; // 0x1e2e43582
                    int32_t v69 = *(int32_t *)(v68 + 254); // 0x1e2e43585
                    g5 = v69;
                    g2 = 0;
                    int32_t v70; // 0x1e2e435
                    if (*(int32_t *)(v69 + 4) > 0) {
                        int32_t v71 = 0;
                        g2 = v71;
                        int32_t v72 = *(int32_t *)(v71 + 8 + v69); // 0x1e2e44c
                        g5 = v72;
                        g2 = *(int32_t *)v72;
                        *(float32_t *)(g9 - 4) = (float32_t)(float80_t)v8;
                        int32_t v73 = g9 - 4; // 0x1e2e458
                        *(int32_t *)v73 = 1020;
                        int32_t v74 = v71 + 4; // 0x1e2e45f
                        int32_t v75 = 1; // 0x1e2e463
                        v70 = g8;
                        int32_t v76 = *(int32_t *)(v70 + 254); // 0x1e2e435
                        g5 = v76;
                        g2 = v75;
                        v7 = v74;
                        while (*(int32_t *)(v76 + 4) > v75) {
                            // 0x1e2e443
                            v71 = v74;
                            g2 = v71;
                            v72 = *(int32_t *)(v71 + 8 + v76);
                            g5 = v72;
                            g2 = *(int32_t *)v72;
                            *(float32_t *)(v73 - 4) = (float32_t)(float80_t)v8;
                            v73 = g9 - 4;
                            *(int32_t *)v73 = 1020;
                            v74 = v71 + 4;
                            v75++;
                            v70 = g8;
                            v76 = *(int32_t *)(v70 + 254);
                            g5 = v76;
                            g2 = v75;
                            v7 = v74;
                        }
                    } else {
                        v7 = 0;
                        v70 = v68;
                    }
                    if (v8 == 0) {
                        // 0x1e2e47d
                        g2 = *(int32_t *)(v70 + 230);
                        *(int32_t *)(g9 - 4) = -0x40800000;
                        *(int32_t *)(g9 - 8) = 0;
                        int32_t * v77 = (int32_t *)(g9 - 12); // 0x1e2e494
                        if (*(char *)(g2 + 5) == 0) {
                            // 0x1e2e494
                            *v77 = 26;
                        } else {
                            // 0x1e2e490
                            *v77 = 30;
                        }
                        goto lab_0x1e2e4e7;
                    } else {
                        if (v8 == 1) {
                            // 0x1e2e498
                            g2 = *(int32_t *)(v70 + 230);
                            *(int32_t *)(g9 - 4) = -0x40800000;
                            *(int32_t *)(g9 - 8) = 0;
                            int32_t * v78 = (int32_t *)(g9 - 12); // 0x1e2e4af
                            if (*(char *)(g2 + 5) == 0) {
                                // 0x1e2e4af
                                *v78 = 27;
                            } else {
                                // 0x1e2e4ab
                                *v78 = 31;
                            }
                            goto lab_0x1e2e4e7;
                        } else {
                            if (v8 == 2) {
                                // 0x1e2e4b3
                                g2 = *(int32_t *)(v70 + 230);
                                *(int32_t *)(g9 - 4) = -0x40800000;
                                *(int32_t *)(g9 - 8) = 0;
                                int32_t * v79 = (int32_t *)(g9 - 12); // 0x1e2e4ca
                                if (*(char *)(g2 + 5) == 0) {
                                    // 0x1e2e4ca
                                    *v79 = 28;
                                } else {
                                    // 0x1e2e4c6
                                    *v79 = 32;
                                }
                                goto lab_0x1e2e4e7;
                            } else {
                                if (v8 == 3) {
                                    // 0x1e2e4ce
                                    g2 = *(int32_t *)(v70 + 230);
                                    *(int32_t *)(g9 - 4) = -0x40800000;
                                    *(int32_t *)(g9 - 8) = 0;
                                    int32_t * v80 = (int32_t *)(g9 - 12); // 0x1e2e4e5
                                    if (*(char *)(g2 + 5) == 0) {
                                        // 0x1e2e4e5
                                        *v80 = 29;
                                    } else {
                                        // 0x1e2e4e1
                                        *v80 = 33;
                                    }
                                    goto lab_0x1e2e4e7;
                                } else {
                                    goto lab_0x1e2e4f8;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x1e2e663;
                }
            } else {
                int32_t v81 = *(int32_t *)(v4 + 230); // 0x1e2e513
                g2 = v81;
                if (*(char *)(v81 + 5) == 0) {
                    int32_t v82 = function_1e25763(26); // 0x1e2e540
                    g2 = v82;
                    g5 = g200;
                    g2 = function_1e2fbc7(v82, (int32_t)&g708);
                } else {
                    int32_t v83 = function_1e25763(30); // 0x1e2e528
                    g2 = v83;
                    g5 = g200;
                    g2 = function_1e2fbc7(v83, (int32_t)&g708);
                }
                goto lab_0x1e2e663;
            }
        }
        case 1022: {
            // 0x1e2e556
            g2 = function_1e39a10(*(int32_t *)(v4 + 70));
            g11++;
            g5 = g201;
            g2 = function_1e2f83c();
            int32_t v84 = function_1e25763(34); // 0x1e2e574
            g2 = v84;
            g5 = g200;
            g2 = function_1e2fbc7(v84, (int32_t)&g708);
            int32_t v85 = function_1e325d2(0x40400000, g8, 0x1e2defd); // 0x1e2e590
            g2 = v85;
            *(int32_t *)(g8 + 94) = v85;
            goto lab_0x1e2e663;
        }
        case 1024: {
            int32_t v86 = v4 + 254; // 0x1e2e59d
            int32_t v87 = *(int32_t *)v86; // 0x1e2e5a3
            g2 = v87;
            int32_t v88 = *(int32_t *)(v87 + 4) - 1; // 0x1e2e5a8
            g2 = v88;
            int32_t v89 = 4 * v88; // 0x1e2e5a9
            int32_t v90; // 0x1e2e5ca
            int32_t v91; // 0x1e2e5d6
            if (v89 >= 0) {
                int32_t v92 = v3; // 0x1e2e5b6
                g2 = *(int32_t *)v86;
                *(int32_t *)(v92 - 4) = 0;
                int32_t v93 = v89; // 0x1e2e5b8
                g5 = *(int32_t *)(g2 + 8 + v93);
                v5 = v93 - 4;
                int32_t v94 = v92 - 8; // 0x1e2e5bf
                *(int32_t *)v94 = 1024;
                g2 = *(int32_t *)g5;
                while (v5 >= 0) {
                    // 0x1e2e5b4
                    v92 = v94;
                    g2 = *(int32_t *)v86;
                    *(int32_t *)(v92 - 4) = 0;
                    v93 = v5;
                    g5 = *(int32_t *)(g2 + 8 + v93);
                    v5 = v93 - 4;
                    v94 = v92 - 8;
                    *(int32_t *)v94 = 1024;
                    g2 = *(int32_t *)g5;
                }
                // 0x1e2e5b0
                v91 = v94;
                v90 = g8;
            } else {
                v91 = v3;
                v90 = v4;
            }
            int32_t v95 = v90 + 358; // 0x1e2e5ca
            v6 = v95;
            int32_t v96 = *(int32_t *)v95; // 0x1e2e5d0
            g2 = v96;
            int32_t v97; // 0x1e2e5de
            int32_t v98; // 0x1e2e5e1
            if (v96 != 0) {
                // 0x1e2e5d6
                *(int32_t *)(v91 - 4) = v96;
                g2 = function_1e32771((int32_t)&g708);
                v98 = v6;
                v97 = g8;
            } else {
                v98 = v95;
                v97 = v90;
            }
            int32_t v99 = *(int32_t *)(v97 + 90); // 0x1e2e5de
            g2 = v99;
            *(int32_t *)v98 = 0;
            if (v99 != 0) {
                // 0x1e2e5e7
                *(int32_t *)(g9 - 4) = v99;
                g2 = function_1e32771((int32_t)&g708);
                g5 = *(int32_t *)(g8 + 266);
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = 34;
                g2 = *(int32_t *)g5;
            }
            // 0x1e2e5fa
            *(int32_t *)(g8 + 306) = 0x2710;
            *(int32_t *)(g8 + 314) = 0x4e20;
            g2 = 0;
            *(int32_t *)(g8 + 90) = 0;
            *(int32_t *)(g8 + 294) = g2;
            *(int32_t *)(g8 + 298) = g2;
            *(int32_t *)(g8 + 302) = g2;
            *(int32_t *)(g8 + 310) = g2;
            *(int32_t *)(g8 + 318) = g2;
            *(int32_t *)(g8 + 322) = g2;
            *(int32_t *)(g8 + 334) = g2;
            *(int32_t *)(g8 + 338) = g2;
            *(int32_t *)(g8 + 342) = g2;
            *(int32_t *)(g8 + 346) = g2;
            *(int32_t *)(g8 + 350) = g2;
            *(int32_t *)(g8 + 354) = g2;
            *(int32_t *)v6 = g2;
            *(int32_t *)(g8 + 370) = g2;
            goto lab_0x1e2e663;
        }
        default: {
            goto lab_0x1e2e663;
        }
    }
  lab_0x1e2e022:
    // 0x1e2e022
    g5 = *(int32_t *)(v4 + 222);
    goto lab_0x1e2e663;
  lab_0x1e2e037:;
    int32_t v101 = v4 + 254; // 0x1e2e037
    int32_t v102 = *(int32_t *)v101; // 0x1e2e03d
    g2 = v102;
    int32_t v103 = *(int32_t *)(v102 + 4) - 1; // 0x1e2e042
    g2 = v103;
    if (v103 >= 0) {
        int32_t v104 = v3; // 0x1e2e050
        *(int32_t *)(v104 - 4) = a2;
        g2 = *(int32_t *)v101;
        int32_t v105 = v104 - 8; // 0x1e2e055
        *(int32_t *)v105 = a1;
        int32_t v106 = 4 * v103; // 0x1e2e058
        g5 = *(int32_t *)(g2 + 8 + v106);
        int32_t v107 = v106 - 4; // 0x1e2e060
        while (v107 >= 0) {
            // 0x1e2e050
            v104 = v105;
            *(int32_t *)(v104 - 4) = a2;
            g2 = *(int32_t *)v101;
            v105 = v104 - 8;
            *(int32_t *)v105 = a1;
            v106 = v107;
            g5 = *(int32_t *)(g2 + 8 + v106);
            v107 = v106 - 4;
        }
    }
    goto lab_0x1e2e663;
  lab_0x1e2e663:
    // 0x1e2e663
    *(int32_t *)(g9 - 4) = a1;
    function_1e32907((int32_t)&g708);
    g2 = 0;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return 0;
  lab_0x1e2e4e7:;
    int32_t v100 = function_1e25763(v7); // 0x1e2e4e7
    g2 = v100;
    *(int32_t *)(g9 - 4) = v100;
    g5 = g200;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    goto lab_0x1e2e4f8;
  lab_0x1e2e4f8:
    // 0x1e2e4f8
    g2 = 0;
    *(int32_t *)g6 = v8;
    *(int32_t *)(g8 + 318) = g2;
    *(int32_t *)(g8 + 310) = g2;
    *(int32_t *)(g8 + 322) = g2;
    goto lab_0x1e2e663;
}

// Address range: 0x1e2e6c7 - 0x1e2e754
int32_t function_1e2e6c7(int32_t a1) {
    int32_t v1 = g5; // 0x1e2e6c7
    int32_t v2; // edx
    if (*(int32_t *)(v1 + 318) == 0) {
        // 0x1e2e6ef
        v2 = a1;
    } else {
        int32_t v3 = v1 + 314; // 0x1e2e6d2
        v2 = a1;
        int32_t * v4 = (int32_t *)v3; // 0x1e2e6e1
        int32_t v5 = *v4 + a1; // 0x1e2e6e3
        g2 = v5;
        *v4 = v5;
        int32_t v6 = 0x4c4b40; // 0x1e2e6e7
        if (g2 > v6) {
            // 0x1e2e6eb
            *(int32_t *)v3 = v6;
        }
    }
    int32_t v7 = g5; // 0x1e2e6f3
    if (*(int32_t *)(v7 + 310) != 0) {
        int32_t v8 = v7 + 306; // 0x1e2e6fc
        int32_t * v9 = (int32_t *)v8; // 0x1e2e707
        int32_t v10 = v2 + *v9; // 0x1e2e709
        g2 = v10;
        *v9 = v10;
        int32_t v11 = 0x4c4b40; // 0x1e2e70d
        if (g2 > v11) {
            // 0x1e2e711
            *(int32_t *)v8 = v11;
        }
    }
    int32_t v12 = g5; // 0x1e2e713
    int32_t v13 = *(int32_t *)(v12 + 294); // 0x1e2e713
    g2 = v13;
    int32_t v14 = *(int32_t *)(4 * v13 + (int32_t)&g203); // 0x1e2e719
    int32_t result = *(int32_t *)(v12 + 298) + v2 * v14; // 0x1e2e723
    int32_t v15 = v12 + 82; // 0x1e2e729
    g7 = v15;
    int32_t * v16 = (int32_t *)v15; // 0x1e2e72c
    int32_t v17 = *v16 + result; // 0x1e2e72e
    g2 = v17;
    *v16 = v17;
    int32_t v18 = g2; // 0x1e2e732
    if (v18 > 0x3b9aca00) {
        // 0x1e2e739
        g2 = v18 - 0x3b9aca00;
        int32_t * v19 = (int32_t *)(g5 + 86); // 0x1e2e73e
        *v19 = *v19 + 1;
        *(int32_t *)g7 = g2;
    }
    int32_t v20 = *(int32_t *)g7; // 0x1e2e743
    int32_t v21 = *(int32_t *)(g5 + 50); // 0x1e2e745
    function_1e2f34b(v21, v20);
    g2 = result;
    g6 = v21;
    g8 = v20;
    return result;
}

// Address range: 0x1e2e754 - 0x1e2e78f
int32_t function_1e2e754(int32_t a1) {
    // 0x1e2e754
    g2 = a1;
    int32_t v1 = g8; // 0x1e2e758
    *(int32_t *)(g5 + 326) = a1;
    int32_t v2 = g5; // 0x1e2e75f
    int32_t result;
    if (a1 < 1) {
        // 0x1e2e781
        result = function_1e2f363(*(int32_t *)(v2 + 54), 1, v1);
    } else {
        int32_t v3 = *(int32_t *)(v2 + 330) - a1 + 1; // 0x1e2e76d
        g5 = v3;
        g2 = function_1e2f34b(*(int32_t *)(v2 + 54), v3);
        result = function_1e2f3ed(*(int32_t *)(v2 + 54));
    }
    // 0x1e2e78b
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e2e78f - 0x1e2e7a4
int32_t function_1e2e78f(int32_t a1) {
    // 0x1e2e78f
    g2 = a1;
    g5 = 0;
    *(int32_t *)(a1 + 354) = 0;
    *(int32_t *)(g2 + 358) = g5;
    return g2;
}

// Address range: 0x1e2e7a4 - 0x1e2e7ce
int32_t function_1e2e7a4(void) {
    int32_t * v1 = (int32_t *)(g5 + 254); // 0x1e2e7ac
    int32_t v2 = *v1; // 0x1e2e7ac
    g2 = v2;
    int32_t result = *(int32_t *)(v2 + 4) - 1; // 0x1e2e7b1
    g2 = result;
    if (result < 0) {
        // 0x1e2e7cb
        return result;
    }
    int32_t result2; // 0x1e2e7c1
    for (int32_t i = 4 * result; i >= 3; i -= 4) {
        int32_t v3 = *v1; // 0x1e2e7bb
        g2 = v3;
        int32_t v4 = *(int32_t *)(i + 8 + v3); // 0x1e2e7bd
        g5 = v4;
        result2 = *(int32_t *)v4;
        g2 = result2;
    }
    // 0x1e2e7cb
    return result2;
}

// Address range: 0x1e2e7ce - 0x1e2e83c
int32_t function_1e2e7ce(void) {
    int32_t v1 = *(int32_t *)(g5 + 254); // 0x1e2e7d1
    g2 = v1;
    int32_t v2 = g3; // bp-20
    int32_t v3 = &v2; // 0x1e2e7de
    uint32_t v4 = *(int32_t *)(v1 + 4); // 0x1e2e7df
    int32_t v5 = 0; // edi
    int32_t v6; // 0x1e2e816
    int32_t result; // 0x1e2e7f4
    if (v4 >= 1) {
        int32_t v7 = 0; // ebx
        int32_t v8 = 0; // 0x1e2e8114
        int32_t v9 = 0; // 0x1e2e7f4
        int32_t v10 = v3; // 0x1e2e7ff
        while (true) {
            int32_t v11 = *(int32_t *)(v10 + 16); // 0x1e2e7ea
            g2 = v11;
            int32_t v12 = *(int32_t *)(v11 + 254); // 0x1e2e7ee
            g5 = v12;
            result = *(int32_t *)(v9 + 8 + v12);
            int32_t v13 = *(int32_t *)(result + 10); // 0x1e2e7f8
            g2 = v13;
            int32_t v14;
            int32_t v15; // 0x1e2e80e
            int32_t v16; // 0x1e2e811
            if (v13 != 0) {
                // 0x1e2e7ff
                *(int32_t *)(v10 - 4) = *(int32_t *)(v10 + 24);
                *(int32_t *)(v10 - 8) = v13;
                int32_t v17 = lstrcmpA((char *)&g708, (char *)&g708); // 0x1e2e804
                g2 = v17;
                if (v17 == 0) {
                    goto lab_0x1e2e82e;
                }
                // 0x1e2e7ff
                v14 = g9;
                v16 = v5;
                v15 = v7;
            } else {
                v14 = v10;
                v16 = v8;
                v15 = v9;
            }
            int32_t v18 = v15 + 4; // 0x1e2e80e
            v7 = v18;
            int32_t v19 = v16 + 1; // 0x1e2e811
            v5 = v19;
            if (v19 >= v4) {
                v6 = v14;
                // break -> 0x1e2e816
                break;
            }
            v8 = v19;
            v9 = v18;
            v10 = v14;
        }
    } else {
        v6 = v3;
    }
    // 0x1e2e816
    *(int32_t *)(v6 - 4) = 0x2000;
    *(int32_t *)(v6 - 8) = *(int32_t *)(v6 + 24);
    *(int32_t *)(v6 - 12) = (int32_t)"Table cant find:";
    *(int32_t *)(v6 - 16) = 0;
    g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
    result = 0;
    goto lab_0x1e2e82e;
  lab_0x1e2e82e:
    // 0x1e2e82e
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2e83c - 0x1e2e8a2
int32_t function_1e2e83c(int32_t a1) {
    int32_t v1 = g3; // 0x1e2e83c
    int32_t v2 = v1; // bp-4
    int32_t v3 = *(int32_t *)(g5 + 254); // 0x1e2e83d
    g3 = &v2;
    int32_t lpCaption; // bp-204
    int32_t v4 = &lpCaption; // 0x1e2e845
    int32_t v5 = g6; // bp-212
    int32_t v6 = *(int32_t *)(v3 + 4); // 0x1e2e84d
    g8 = v6;
    int32_t v7; // 0x1e2e89a
    int32_t result; // 0x1e2e89f
    if (v6 < 1) {
        goto lab_0x1e2e86b_2;
    } else {
        int32_t v8 = v3 + 8; // 0x1e2e856
        g7 = v8;
        int32_t v9 = 0; // 0x1e2e866
        int32_t v10; // 0x1e2e859
        while (true) {
            // 0x1e2e859
            v10 = *(int32_t *)v8;
            g2 = v10;
            g5 = a1;
            if (*(int32_t *)(v10 + 22) == a1) {
                // break -> 0x1e2e89a
                break;
            }
            int32_t v11 = v8 + 4; // 0x1e2e863
            g7 = v11;
            int32_t v12 = v9 + 1; // 0x1e2e866
            if (v12 >= v6) {
                goto lab_0x1e2e86b_2;
            }
            v9 = v12;
            v8 = v11;
        }
        result = v10;
        v7 = &v5;
        goto lab_0x1e2e89a;
    }
  lab_0x1e2e86b_2:
    // 0x1e2e86b
    g2 = v4;
    g2 = function_1e3dce0(a1, &lpCaption, 10);
    g5 = v4;
    MessageBoxA(NULL, "Table cant find (lh):", (char *)&lpCaption, 0x2000);
    g2 = 0;
    result = 0;
    v1 = v2;
    v7 = g9;
    goto lab_0x1e2e89a;
  lab_0x1e2e89a:
    // 0x1e2e89a
    g6 = *(int32_t *)v7;
    g8 = *(int32_t *)(v7 + 4);
    g3 = v1;
    return result;
}

// Address range: 0x1e2e8a2 - 0x1e2e8f3
int32_t function_1e2e8a2(int32_t a1) {
    int32_t v1 = 0; // ebp
    *(int32_t *)(a1 + 98) = 0;
    if (*(int32_t *)(a1 + 370) != v1) {
        int32_t v2 = *(int32_t *)(a1 + 262); // 0x1e2e8ba
        uint32_t v3 = *(int32_t *)(v2 + 4); // 0x1e2e8c0
        int32_t v4 = v2 + 8; // ebx
        if (v3 >= 1) {
            int32_t v5 = g9; // 0x1e2e8d0
            g5 = *(int32_t *)(a1 + 226);
            *(int32_t *)(v5 - 4) = v1;
            int32_t v6 = v5 + 16; // 0x1e2e8d1
            g2 = v6;
            *(int32_t *)(v5 - 8) = v1;
            *(int32_t *)(v5 - 12) = g2;
            g2 = v6;
            *(int32_t *)(v5 - 16) = v6;
            g2 = *(int32_t *)g5;
            int32_t v7 = v5 - 20; // 0x1e2e8de
            *(int32_t *)v7 = *(int32_t *)v4;
            v4 += 4;
            int32_t v8 = v3 - 1; // 0x1e2e8e6
            while (v8 != 0) {
                // 0x1e2e8ca
                v5 = v7;
                g5 = *(int32_t *)(a1 + 226);
                *(int32_t *)(v5 - 4) = v1;
                v6 = v5 + 16;
                g2 = v6;
                *(int32_t *)(v5 - 8) = v1;
                *(int32_t *)(v5 - 12) = g2;
                g2 = v6;
                *(int32_t *)(v5 - 16) = v6;
                g2 = *(int32_t *)g5;
                v7 = v5 - 20;
                *(int32_t *)v7 = *(int32_t *)v4;
                v4 += 4;
                v8--;
            }
        }
    }
    // 0x1e2e8e9
    return g2;
}

// Address range: 0x1e2e8f3 - 0x1e2e9be
int32_t function_1e2e8f3(void) {
    int32_t v1 = g5; // 0x1e2e8f8
    int32_t v2 = g3; // bp-16
    int32_t v3 = &v2; // 0x1e2e8fe
    int32_t v4; // 0x1e2e9b7
    if (*(int32_t *)(v1 + 370) == 0) {
        // 0x1e2e907
        if (*(int32_t *)(v1 + 78) == 0) {
            // 0x1e2e910
            g5 = g200;
            g2 = function_1e2f83c();
            g5 = g201;
            g2 = function_1e2f83c();
            int32_t v5 = function_1e25763(35); // 0x1e2e92f
            g2 = v5;
            g5 = g200;
            g2 = function_1e2fbc7(v5, (int32_t)&g708);
            g2 = function_1e39a10(*(int32_t *)(g6 + 74));
            g11++;
            int32_t v6 = function_1e325d2(0x41f00000, g6, 0x1e2e8a2); // 0x1e2e955
            g2 = v6;
            g5 = g6;
            *(int32_t *)(g6 + 98) = v6;
            int32_t v7 = *(int32_t *)(g6 + 254); // 0x1e2e960
            g2 = v7;
            int32_t v8 = 1011; // bp-56
            int32_t v9 = &v8; // 0x1e2e966
            int32_t v10 = *(int32_t *)(v7 + 4); // 0x1e2e96d
            int32_t v11;
            if (v10 > g8) {
                int32_t v12 = 0; // 0x1e2e97e
                int32_t v13 = v9; // 0x1e2e98623
                int32_t v14 = *(int32_t *)(g6 + 254); // 0x1e2e978
                g2 = v14;
                g5 = *(int32_t *)(v14 + 8 + v12);
                int32_t v15 = g8 + 1; // esi
                *(int32_t *)(v13 - 4) = *(int32_t *)(v13 + 20);
                int32_t v16 = v13 - 8; // 0x1e2e98a
                *(int32_t *)v16 = 1011;
                g2 = *(int32_t *)g5;
                while (v10 > v15) {
                    // 0x1e2e978
                    v12 += 4;
                    v13 = v16;
                    v14 = *(int32_t *)(g6 + 254);
                    g2 = v14;
                    g5 = *(int32_t *)(v14 + 8 + v12);
                    v15++;
                    *(int32_t *)(v13 - 4) = *(int32_t *)(v13 + 20);
                    v16 = v13 - 8;
                    *(int32_t *)v16 = 1011;
                    g2 = *(int32_t *)g5;
                }
                v11 = v16;
            } else {
                v11 = v9;
            }
            // 0x1e2e995
            g5 = *(int32_t *)(g6 + 266);
            *(int32_t *)(v11 - 4) = 0;
            *(int32_t *)(v11 - 8) = 8;
            g2 = *(int32_t *)g5;
            *(int32_t *)(g6 + 370) = 1;
            *(int32_t *)(g9 - 4) = 1011;
            g2 = function_1e32907((int32_t)&g708);
            v4 = g9;
        } else {
            v4 = v3;
        }
    } else {
        v4 = v3;
    }
    // 0x1e2e9b7
    g3 = *(int32_t *)v4;
    g6 = *(int32_t *)(v4 + 4);
    g4 = *(int32_t *)(v4 + 12);
    return g2;
}

