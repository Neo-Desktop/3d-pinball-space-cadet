#include "pinball.h"

// Address range: 0x1e29a40 - 0x1e29a6d
int32_t function_1e29a40(int32_t a1, int32_t result) {
    // 0x1e29a40
    g7 = a1;
    if (a1 == 0) {
        // 0x1e29a6a
        return g2;
    }
    // 0x1e29a48
    g2 = result;
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x1e29a4c
    if (*v1 == result) {
        // 0x1e29a6a
        return result;
    }
    // 0x1e29a51
    *v1 = result;
    int32_t v2 = g2; // 0x1e29a54
    if (v2 != 0) {
        int32_t v3 = *(int32_t *)(v2 + 12); // 0x1e29a58
        g5 = v3;
        *(int32_t *)(a1 + 8) = v3;
        int32_t v4 = *(int32_t *)(g2 + 16); // 0x1e29a5e
        g2 = v4;
        *(int32_t *)(a1 + 12) = v4;
    }
    int32_t result2 = function_1e298bd(a1); // 0x1e29a65
    g2 = result2;
    // 0x1e29a6a
    return result2;
}

// Address range: 0x1e29a6d - 0x1e29aea
int32_t function_1e29a6d(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g8; // 0x1e29a73
    if (a1 == 0) {
        // 0x1e29ae3
        g8 = v1;
        return g2;
    }
    // 0x1e29a7b
    g5 = a2;
    *(int32_t *)(a1 + 16) = a2;
    if (a2 != 0) {
        // 0x1e29a85
        g2 = a4;
        *(int32_t *)a1 = a4;
        *(int32_t *)(a1 + 4) = a5;
        int32_t v2 = *(int32_t *)(a2 + 12); // 0x1e29a90
        g2 = v2;
        *(int32_t *)(a1 + 8) = v2;
        int32_t v3 = *(int32_t *)(a2 + 16); // 0x1e29a96
        g5 = v3;
        *(int32_t *)(a1 + 12) = v3;
    }
    uint32_t v4 = (int32_t)__asm_fnstsw(g10); // 0x1e29aa5
    g2 = g2 & -0x10000 | v4;
    if ((v4 / 256 & 65) == 0) {
        // 0x1e29aaa
        *(int16_t *)(a1 + 26) = 0;
        // 0x1e29ae3
        g8 = v1;
        return g2;
    }
    uint32_t v5 = (int32_t)__asm_fnstsw(g10); // 0x1e29aca
    g2 = g2 & -0x10000 | v5;
    if ((v5 / 256 & 65) == 0) {
        // 0x1e29acf
        *(int16_t *)(a1 + 26) = -1;
    } else {
        int32_t v6 = __ftol(); // 0x1e29ada
        g2 = v6;
        *(int16_t *)(a1 + 26) = (int16_t)v6;
    }
    // 0x1e29ae3
    g8 = v1;
    return g2;
}

// Address range: 0x1e29aea - 0x1e29b0a
int32_t function_1e29aea(void) {
    // 0x1e29aea
    function_1e29172();
    int32_t v1 = g553; // 0x1e29aef
    g2 = v1;
    g2 = function_1e27508(&g549, (int32_t)g552, v1);
    int32_t result = function_1e292ae(); // 0x1e29b05
    g2 = result;
    return result;
}

// Address range: 0x1e29b0a - 0x1e29b62
int32_t function_1e29b0a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x1e29b0a
    g2 = a1;
    g193 += a1;
    g5 = a2;
    g194 += a2;
    function_1e29172();
    int32_t v1 = g193 + (int32_t)g552 + a3; // 0x1e29b45
    g2 = v1;
    int32_t v2 = function_1e2748e((int32_t)&g549, a3, a4, 0x10000 * v1 / 0x10000, 0x10000 * ((int32_t)g553 + a4 + g194) / 0x10000, a5, a6); // 0x1e29b54
    g2 = v2;
    int32_t result = function_1e292ae(); // 0x1e29b59
    g2 = result;
    g3 = &g549;
    return result;
}

// Address range: 0x1e29b62 - 0x1e29efa
int32_t function_1e29b62(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x1e29b62
    g2 = a1;
    int32_t v1; // bp-136
    int32_t v2 = &v1; // 0x1e29b69
    int32_t v3 = a1 + 4; // 0x1e29b71
    int32_t v4 = g6; // 0x1e29b77
    int32_t v5 = v4; // bp-148
    g2 = function_1e3dbc0((int32_t)*(float32_t *)a1, v4, g8);
    int32_t v6 = __ftol(); // 0x1e29b8c
    g2 = v3;
    int32_t v7; // edi
    float32_t v8; // bp-100
    int32_t v9;
    float32_t v10; // bp-32
    int32_t v11; // bp-72
    int32_t v12;
    int3_t v13; // 0x1e29d9e
    int32_t v14; // 0x1e29d04
    int32_t * v15; // 0x1e29ea7
    int32_t v16; // 0x1e29c44
    int32_t v17; // 0x1e29e73
    int32_t v18; // 0x1e29e76
    int32_t * v19; // 0x1e29eb3
    int32_t v20; // 0x1e29ec5
    float80_t v21; // 0x1e29dcd
    if (v6 != 0) {
        int32_t v22 = v6 - 1; // 0x1e29c37
        if (v22 != 0) {
            // 0x1e29cc9
            g2 = v6;
            g5 = v3;
            v8 = (float32_t)*(int32_t *)(a1 - 4 + 8 * v6);
            if (v6 < 0) {
                // 0x1e29eec
                g4 = v3;
            } else {
                // 0x1e29cfa
                g2 = v22;
                v14 = a2 + 46;
                g5 = v14;
                int32_t v23;
                int32_t v24 = v23 & 0x7fffffff | a5; // 0x1e29d47
                v15 = (int32_t *)v14;
                v20 = &v10;
                v19 = (int32_t *)(a2 + 42);
                v17 = &v11;
                v18 = &v16;
                int32_t v25; // bp-124
                int32_t v26 = &v25; // 0x1e29d5c
                v21 = 1.001L * (float80_t)(float32_t)a5;
                v12 = v3;
                v9 = 0;
                while (true) {
                  lab_0x1e29d0d:
                    // 0x1e29d0d
                    g2 = v9;
                    int32_t v27;
                    int32_t v28; // 0x1e29d18
                    if (v22 > v9) {
                        // 0x1e29d15
                        g2 = v12;
                        v28 = *(int32_t *)(v12 + 8);
                        g5 = v28;
                        v27 = v12 + 12;
                    } else {
                        // 0x1e29d23
                        g5 = v3;
                        int32_t v29 = *(int32_t *)v3; // 0x1e29d26
                        g2 = v29;
                        v27 = a1 + 8;
                        v28 = v29;
                    }
                    int32_t v30 = *(int32_t *)v27;
                    g2 = v12;
                    int32_t v31 = *(int32_t *)v12; // 0x1e29d34
                    g5 = v31;
                    int32_t v32 = *(int32_t *)(v12 + 4); // 0x1e29d36
                    v10 = v31;
                    g2 = v24;
                    if (v24 == 0) {
                        goto lab_0x1e29e3c;
                    } else {
                        // 0x1e29d50
                        g2 = v2;
                        g5 = v26;
                        *(int32_t *)(g9 - 4) = v2;
                        *(int32_t *)(g9 - 8) = v26;
                        int32_t v33; // bp-112
                        *(int32_t *)(g9 - 12) = (int32_t)&v33;
                        float80_t v34 = (float80_t)(float32_t)v31 - (float80_t)v8; // 0x1e29d65
                        v33 = (float32_t)v34;
                        float80_t v35 = (float80_t)(float32_t)v28 - (float80_t)v10; // 0x1e29d74
                        v25 = (float32_t)v35;
                        float80_t v36 = (float80_t)(float32_t)v30 - (float80_t)(float32_t)v32; // 0x1e29d7d
                        g2 = function_1e3a768(v35, v36, v34);
                        int3_t v37 = g11; // 0x1e29d88
                        float32_t v38;
                        if ((int32_t)v38 > 0) {
                            uint32_t v39 = (int32_t)__asm_fnstsw(g10); // 0x1e29d99
                            g2 = g2 & -0x10000 | v39;
                            if ((v39 / 256 & 1) == 0) {
                                // 0x1e29d94
                                v13 = g11;
                                goto lab_0x1e29d9e;
                            } else {
                                goto lab_0x1e29dba;
                            }
                        } else {
                            v13 = v37;
                            goto lab_0x1e29d9e;
                        }
                    }
                }
            }
        } else {
            // 0x1e29c41
            g5 = v3;
            v16 = *(int32_t *)v3;
            g2 = v16;
            int32_t v40 = *(int32_t *)(a1 + 12); // 0x1e29c51
            g2 = v40;
            g4 = 0;
            v11 = v40;
            int32_t v41 = function_1e3df20(85); // 0x1e29c62
            g2 = v41;
            int32_t v42; // 0x1e29c8b
            int32_t v43; // 0x1e29c8d
            if (v41 == 0) {
                // 0x1e29c41
                v43 = &v5;
                v42 = g4;
            } else {
                // 0x1e29c6e
                g5 = v41;
                int32_t v44 = function_1e305a4(a2, a3, a4, &v16, &v11); // 0x1e29c81
                g2 = v44;
                g4 = v44;
                v43 = g9;
                v42 = v44;
            }
            // 0x1e29c88
            g2 = a6;
            g5 = v42;
            *(int32_t *)(v43 - 4) = a5;
            *(int32_t *)(g4 + 13) = g2;
            g2 = function_1e3061f((int32_t)&g708);
            int32_t v45 = g4; // 0x1e29c98
            g5 = v45;
            int32_t v46 = a2 + 46; // 0x1e29ca2
            g8 = v46;
            int32_t v47 = *(int32_t *)v46; // 0x1e29ca5
            int32_t v48 = *(int32_t *)v47; // 0x1e29ca7
            g2 = v48;
            int32_t v49; // 0x1e29cbc
            if (*(int32_t *)(v47 + 4) == v48) {
                // 0x1e29cae
                g5 = a2;
                *(int32_t *)(g9 - 4) = *(int32_t *)(a2 + 42);
                *(int32_t *)(g9 - 8) = v47;
                int32_t v50 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e29cb5
                g2 = v50;
                *(int32_t *)g8 = v50;
                v49 = g4;
            } else {
                v49 = v45;
            }
            // 0x1e29cbc
            *(int32_t *)(g9 - 4) = v49;
            *(int32_t *)(g9 - 8) = *(int32_t *)g8;
            g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
        }
    } else {
        int32_t v51 = *(int32_t *)v3; // 0x1e29ba4
        g2 = v51;
        g5 = v3;
        v10 = v51;
        g4 = 0;
        int32_t v52 = function_1e3df20(37); // 0x1e29bb9
        g2 = v52;
        if (v52 != 0) {
            // 0x1e29bc5
            g5 = v3;
            float32_t v53 = *(float32_t *)(a1 + 12); // 0x1e29bce
            g5 = a4;
            int32_t * v54 = (int32_t *)v52; // 0x1e29bd7
            *v54 = (int32_t)&g28;
            *(int32_t *)(v52 + 4) = a2;
            float80_t v55 = (float80_t)(float32_t)a5 + (float80_t)v53; // 0x1e29be3
            v7 = v52 + 21;
            *(int32_t *)(v52 + 8) = a3;
            *(int32_t *)(v52 + 17) = g5;
            g4 = v52;
            *(char *)(v52 + 12) = 0;
            *v54 = (int32_t)&g29;
            *(float32_t *)(v52 + 33) = (float32_t)(v55 * v55);
            *(int32_t *)v7 = (int32_t)v10;
            int32_t v56 = g1 ? -4 : 4; // 0x1e29bfd
            int32_t v57 = v56 + v7; // 0x1e29bfd
            int32_t v58 = v56 + (int32_t)&v10; // 0x1e29bfd
            *(int32_t *)v57 = *(int32_t *)v58;
            int32_t v59 = v57 + v56; // 0x1e29bfe
            *(int32_t *)v59 = *(int32_t *)(v58 + v56);
            g6 = v59 + v56;
        }
        // 0x1e29c00
        g2 = a6;
        int32_t v60 = g4; // 0x1e29c03
        g5 = v60;
        *(int32_t *)(v60 + 13) = a6;
        int32_t v61 = a2 + 46; // 0x1e29c10
        g8 = v61;
        int32_t v62 = *(int32_t *)v61; // 0x1e29c13
        int32_t v63 = *(int32_t *)v62; // 0x1e29c15
        g2 = v63;
        if (*(int32_t *)(v62 + 4) == v63) {
            // 0x1e29c1c
            g5 = a2;
            int32_t v64 = function_1e3a739(v62, *(int32_t *)(a2 + 42)); // 0x1e29c23
            g2 = v64;
            *(int32_t *)g8 = v64;
        }
        // 0x1e29c2a
        *(int32_t *)(g9 - 4) = g4;
        *(int32_t *)(g9 - 8) = *(int32_t *)g8;
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    }
  lab_0x1e29eef:;
    int32_t result = g4; // 0x1e29eef
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e29e3c:
    // 0x1e29e3c
    g2 = v12;
    *(int32_t *)(g9 - 4) = 85;
    g8 = 0;
    int32_t v65 = g2; // 0x1e29e46
    int32_t v66 = *(int32_t *)v65; // 0x1e29e46
    g5 = v66;
    int32_t v67 = v65 + 8; // 0x1e29e48
    g2 = v67;
    v16 = v66;
    int32_t v68 = *(int32_t *)v67; // 0x1e29e5a
    g5 = v68;
    v11 = v68;
    g2 = *(int32_t *)(v12 + 12);
    int32_t v69 = function_1e3df20(v68); // 0x1e29e65
    g2 = v69;
    g5 = v69;
    int32_t v70; // 0x1e29e8b
    if (v69 == 0) {
        // 0x1e29e3c
        v70 = g8;
    } else {
        // 0x1e29e73
        g2 = v17;
        *(int32_t *)g9 = v17;
        *(int32_t *)(g9 - 4) = v18;
        *(int32_t *)(g9 - 8) = a4;
        *(int32_t *)(g9 - 12) = a3;
        *(int32_t *)(g9 - 16) = a2;
        int32_t v71 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e29e84
        g2 = v71;
        g8 = v71;
        v70 = v71;
    }
    // 0x1e29e8b
    g4 = v70;
    g2 = a6;
    g5 = v70;
    *(int32_t *)(v70 + 13) = a6;
    *(int32_t *)(g9 - 4) = a5;
    g2 = function_1e3061f((int32_t)&g708);
    int32_t v72 = g8; // 0x1e29e9d
    g2 = *(int32_t *)v72;
    g5 = v14;
    int32_t v73 = *v15; // 0x1e29ea7
    int32_t v74 = *(int32_t *)v73; // 0x1e29ea9
    g2 = v74;
    int32_t v75; // 0x1e29ec1
    if (*(int32_t *)(v73 + 4) == v74) {
        // 0x1e29eb0
        g5 = a2;
        *(int32_t *)(g9 - 4) = *v19;
        *(int32_t *)(g9 - 8) = v73;
        int32_t v76 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e29eb7
        g2 = v76;
        g5 = v14;
        *v15 = v76;
        v75 = g8;
    } else {
        v75 = v72;
    }
    // 0x1e29ec1
    *(int32_t *)(g9 - 4) = v75;
    g5 = v14;
    g8 = v20;
    *(int32_t *)(g9 - 8) = *v15;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)&v8 = *(int32_t *)&v10;
    int32_t v77 = g1 ? -4 : 4; // 0x1e29ed2
    int32_t v78 = v77 + (int32_t)&v8; // 0x1e29ed2
    int32_t v79 = v77 + g8; // 0x1e29ed2
    *(int32_t *)v78 = *(int32_t *)v79;
    int32_t v80 = v78 + v77; // 0x1e29ed3
    int32_t v81 = v79 + v77; // 0x1e29ed3
    *(int32_t *)v80 = *(int32_t *)v81;
    g6 = v80 + v77;
    g8 = v81 + v77;
    g5 = v67;
    int32_t v82 = v9 + 1; // 0x1e29ed8
    if (v82 >= v6) {
        // break -> 0x1e29eef
        goto lab_0x1e29eef;
    }
    v12 = v67;
    v9 = v82;
    goto lab_0x1e29d0d;
  lab_0x1e29d9e:
    // 0x1e29d9e
    g11 = v13;
    uint32_t v83 = (int32_t)__asm_fnstsw(g10); // 0x1e29da3
    g2 = g2 & -0x10000 | v83;
    if ((v83 / 256 & 65) == 0) {
        uint32_t v84 = (int32_t)__asm_fnstsw(g10); // 0x1e29db1
        g2 = g2 & -0x10000 | v84;
        if ((v84 / 256 & 65) == 0) {
            goto lab_0x1e29dba;
        } else {
            goto lab_0x1e29e3c;
        }
    } else {
        goto lab_0x1e29e3c;
    }
  lab_0x1e29dba:
    // 0x1e29dba
    *(int32_t *)(g9 - 4) = 37;
    int32_t v85 = function_1e3df20((int32_t)&g708); // 0x1e29dbc
    g2 = v85;
    g4 = v85;
    int32_t v86; // 0x1e29e0a
    if (v85 == 0) {
        // 0x1e29e05
        g4 = 0;
        v86 = 0;
    } else {
        // 0x1e29dca
        g5 = a2;
        g2 = a3;
        v7 = v85 + 21;
        *(int32_t *)v85 = (int32_t)&g28;
        *(int32_t *)(g4 + 4) = g5;
        *(int32_t *)(g4 + 8) = g2;
        *(int32_t *)(g4 + 17) = a4;
        *(char *)(g4 + 12) = 0;
        *(int32_t *)g4 = (int32_t)&g29;
        *(float32_t *)(g4 + 33) = (float32_t)(v21 * v21);
        *(int32_t *)v7 = (int32_t)v10;
        int32_t v87 = g1 ? -4 : 4; // 0x1e29e00
        int32_t v88 = v87 + v7; // 0x1e29e00
        int32_t v89 = v87 + v20; // 0x1e29e00
        *(int32_t *)v88 = *(int32_t *)v89;
        int32_t v90 = v88 + v87; // 0x1e29e01
        *(int32_t *)v90 = *(int32_t *)(v89 + v87);
        g6 = v90 + v87;
        v86 = g4;
    }
    // 0x1e29e07
    g2 = a6;
    g8 = *(int32_t *)v86;
    *(int32_t *)(v86 + 13) = a6;
    g5 = v14;
    int32_t v91 = *v15; // 0x1e29e17
    int32_t v92 = *(int32_t *)v91; // 0x1e29e19
    g2 = v92;
    if (*(int32_t *)(v91 + 4) == v92) {
        // 0x1e29e20
        g5 = a2;
        *(int32_t *)(g9 - 4) = *v19;
        *(int32_t *)(g9 - 8) = v91;
        int32_t v93 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e29e27
        g2 = v93;
        g5 = v14;
        *v15 = v93;
    }
    // 0x1e29e31
    *(int32_t *)(g9 - 4) = g4;
    g5 = v14;
    *(int32_t *)(g9 - 8) = *v15;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    goto lab_0x1e29e3c;
}

// Address range: 0x1e29efa - 0x1e29efb
int32_t function_1e29efa(void) {
    // 0x1e29efa
    return g2;
}

// Address range: 0x1e29efb - 0x1e29efc
int32_t function_1e29efb(void) {
    // 0x1e29efb
    return g2;
}

// Address range: 0x1e29efc - 0x1e29efd
int32_t function_1e29efc(void) {
    // 0x1e29efc
    return g2;
}

// Address range: 0x1e29efd - 0x1e29f0d
int32_t function_1e29efd(int32_t a1) {
    int32_t v1 = g5 + 21; // 0x1e29efd
    g5 = v1;
    int32_t result = function_1e3a828(a1, v1); // 0x1e29f05
    g2 = result;
    return result;
}

// Address range: 0x1e29f0d - 0x1e29f8c
int32_t function_1e29f0d(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2 = g6; // 0x1e29f15
    g4 = a1;
    int32_t v3 = a1 + 54; // edi
    *(int32_t *)(a1 + 106) = 0;
    *(int32_t *)v3 = *(int32_t *)a2;
    int32_t v4 = g1 ? -4 : 4; // 0x1e29f26
    int32_t v5 = v4 + v3; // 0x1e29f26
    int32_t v6 = v4 + a2; // 0x1e29f26
    *(int32_t *)v5 = *(int32_t *)v6;
    int32_t v7 = v5 + v4; // 0x1e29f27
    *(int32_t *)v7 = *(int32_t *)(v6 + v4);
    g6 = v7 + v4;
    int32_t v8 = function_1e3df30(); // 0x1e29f29
    int32_t v9 = g4 + 54; // 0x1e29f37
    g2 = v9;
    float80_t v10 = (float80_t)(float32_t)a3 * (1.0L - 2.0L * 3.05185094759971922707e-5L * (float80_t)v8); // 0x1e29f4c
    g2 = function_1e30da5(v9, v10);
    int32_t v11 = function_1e3df30(); // 0x1e29f58
    g2 = v11;
    g6 = v9;
    g8 = (float32_t)v10;
    float80_t v12 = a4; // 0x1e29f7a
    *(float32_t *)(g4 + 66) = (float32_t)(v12 + v12 * (float80_t)(float32_t)a5 * (1.0L - 2.0L * 3.05185094759971922707e-5L * (float80_t)v11));
    g4 = v2;
    g3 = v1;
    return g2;
}

// Address range: 0x1e29f8c - 0x1e2a1e2
int32_t function_1e29f8c(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e29f8c
    int32_t v1; // bp-124
    int32_t v2 = &v1; // 0x1e29f8f
    *(int32_t *)g5 = (int32_t)&g30;
    int32_t v3 = g5; // 0x1e29f9b
    g8 = v3;
    g2 = a1;
    g5 = 0;
    *(int32_t *)(v3 + 30) = a1;
    *(int32_t *)(g8 + 6) = g5;
    *(char *)(g8 + 4) = (char)g5;
    *(char *)(g8 + 5) = (char)g5;
    int32_t v4 = g2; // 0x1e29fae
    if (v4 != g5) {
        int32_t v5 = v4 + 254; // 0x1e29fb2
        g6 = v5;
        int32_t v6 = v4 + 250; // 0x1e29fb8
        g2 = v6;
        int32_t v7 = *(int32_t *)v5; // 0x1e29fbd
        g7 = v7;
        int32_t v8 = *(int32_t *)v7; // 0x1e29fbf
        g5 = v8;
        if (*(int32_t *)(v7 + 4) == v8) {
            int32_t v9 = function_1e3a739(v7, *(int32_t *)v6); // 0x1e29fc9
            g2 = v9;
            *(int32_t *)g6 = v9;
        }
        // 0x1e29fd0
        *(int32_t *)(g9 - 4) = g8;
        *(int32_t *)(g9 - 8) = *(int32_t *)g6;
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    }
    if (a2 >= 0) {
        // 0x1e29fde
        *(int32_t *)(g9 - 4) = a2;
        int32_t v10 = function_1e398f4((int32_t)&g708); // 0x1e29fe1
        g2 = v10;
        *(int32_t *)(g8 + 10) = v10;
    }
    // 0x1e29fe9
    g6 = 0;
    if (a3 != 0) {
        if (a2 >= 0) {
            // 0x1e29ffd
            *(int32_t *)(g9 - 4) = a2;
            int32_t v11 = function_1e392d4((int32_t)&g708); // 0x1e2a000
            g2 = v11;
            int32_t v12 = g6; // 0x1e2a008
            if (v11 > v12) {
                while (true) {
                    // 0x1e2a013
                    g2 = v2;
                    *(int32_t *)(g9 - 4) = v2;
                    *(int32_t *)(g9 - 8) = v12;
                    *(int32_t *)(g9 - 12) = a2;
                    int32_t v13 = function_1e39641((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2a01d
                    g2 = v13;
                    int32_t v14 = g6; // 0x1e2a022
                    int32_t v15;
                    int32_t v16; // 0x1e2a083
                    if (v15 != v14) {
                        // 0x1e2a027
                        if (*(int32_t *)(g8 + 34) == v14) {
                            // 0x1e2a02c
                            *(int32_t *)(g9 - 4) = 8;
                            int32_t v17 = function_1e3df20((int32_t)&g708); // 0x1e2a02e
                            g2 = v17;
                            if (v17 == 0) {
                                // 0x1e2a052
                                *(int32_t *)(g8 + 34) = g6;
                            } else {
                                // 0x1e2a03c
                                *(int32_t *)g9 = v11;
                                int32_t v18 = function_1e3a705((int32_t)&g708); // 0x1e2a03f
                                g2 = v18;
                                *(int32_t *)(v17 + 4) = v18;
                                *(int32_t *)v17 = 4;
                                *(int32_t *)(g8 + 34) = v17;
                            }
                        }
                        int32_t v19 = *(int32_t *)(g8 + 34); // 0x1e2a058
                        g4 = v19;
                        int32_t v20 = *(int32_t *)(v19 + 4); // 0x1e2a05e
                        g5 = v20;
                        int32_t v21 = *(int32_t *)v20; // 0x1e2a061
                        g2 = v21;
                        if (*(int32_t *)(v20 + 4) == v21) {
                            // 0x1e2a068
                            *(int32_t *)(g9 - 4) = *(int32_t *)v19;
                            *(int32_t *)(g9 - 8) = g5;
                            int32_t v22 = function_1e3a739(v15, (int32_t)&g708); // 0x1e2a06b
                            g2 = v22;
                            *(int32_t *)(g4 + 4) = v22;
                        }
                        // 0x1e2a073
                        *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
                        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
                        v16 = g6;
                    } else {
                        v16 = v14;
                    }
                    int32_t v23;
                    if (v23 != v16) {
                        // 0x1e2a083
                        if (*(int32_t *)(g8 + 38) == v16) {
                            // 0x1e2a088
                            *(int32_t *)(g9 - 4) = 8;
                            int32_t v24 = function_1e3df20((int32_t)&g708); // 0x1e2a08a
                            g2 = v24;
                            if (v24 == 0) {
                                // 0x1e2a0ae
                                *(int32_t *)(g8 + 38) = g6;
                            } else {
                                // 0x1e2a098
                                *(int32_t *)g9 = v11;
                                int32_t v25 = function_1e3a705((int32_t)&g708); // 0x1e2a09b
                                g2 = v25;
                                *(int32_t *)(v24 + 4) = v25;
                                *(int32_t *)v24 = 4;
                                *(int32_t *)(g8 + 38) = v24;
                            }
                        }
                        int32_t v26 = *(int32_t *)(g8 + 38); // 0x1e2a0b4
                        g4 = v26;
                        int32_t v27 = *(int32_t *)(v26 + 4); // 0x1e2a0ba
                        g5 = v27;
                        int32_t v28 = *(int32_t *)v27; // 0x1e2a0bd
                        g2 = v28;
                        if (*(int32_t *)(v27 + 4) == v28) {
                            // 0x1e2a0c4
                            *(int32_t *)(g9 - 4) = *(int32_t *)v26;
                            *(int32_t *)(g9 - 8) = g5;
                            int32_t v29 = function_1e3a739(v23, (int32_t)&g708); // 0x1e2a0c7
                            g2 = v29;
                            *(int32_t *)(g4 + 4) = v29;
                        }
                        // 0x1e2a0cf
                        *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
                        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
                    }
                    int32_t v30 = v12 + 1; // 0x1e2a0da
                    g2 = v30;
                    if (v11 == v30) {
                        // break -> 0x1e2a0e9
                        break;
                    }
                    v12 = v30;
                }
            }
            int32_t v31 = g8; // 0x1e2a0e9
            int32_t v32 = *(int32_t *)(v31 + 38); // 0x1e2a0e9
            g2 = v32;
            int32_t v33; // 0x1e2a0f3
            if (v32 != 0) {
                int32_t v34 = *(int32_t *)(v32 + 4); // 0x1e2a0f0
                g2 = v34;
                v33 = *(int32_t *)(v34 + 8);
                g5 = v33;
            } else {
                int32_t v35;
                v33 = v35;
            }
            int32_t v36 = *(int32_t *)(v31 + 34); // 0x1e2a0f9
            g5 = v36;
            if (v36 != 0) {
                int32_t * v37 = (int32_t *)(v36 + 4); // 0x1e2a104
                int32_t v38 = *v37; // 0x1e2a104
                g2 = v38;
                int32_t v39 = a1 + 234; // 0x1e2a10a
                int32_t v40 = *(int32_t *)(v38 + 8); // 0x1e2a110
                int32_t v41 = *(int32_t *)(v40 + 29); // 0x1e2a116
                g2 = v41;
                int32_t * v42 = (int32_t *)v39; // 0x1e2a119
                int32_t v43 = v41 - *v42; // 0x1e2a119
                g2 = v43;
                int32_t v44 = a1 + 238; // 0x1e2a11e
                g6 = v44;
                int32_t v45 = *(int32_t *)(v40 + 33); // 0x1e2a127
                g2 = v45;
                g2 = v45 - *(int32_t *)v44;
                int32_t v46 = *v37; // 0x1e2a142
                g2 = v46;
                int32_t v47; // 0x1e2a19b
                int32_t v48; // 0x1e2a170
                if (*(int32_t *)(v46 + 4) > 1) {
                    // 0x1e2a14b
                    v48 = &v43;
                    int32_t v49; // 0x1e2a163
                    int32_t v50 = &v49; // 0x1e2a17a
                    int32_t v51 = 4; // 0x1e2a153
                    int32_t v52 = *(int32_t *)(v31 + 34); // 0x1e2a150
                    g2 = v52;
                    g4 = v51 + 4;
                    int32_t v53 = *(int32_t *)(v51 + 8 + *(int32_t *)(v52 + 4)); // 0x1e2a159
                    g5 = v53;
                    int32_t v54 = *(int32_t *)(v53 + 29); // 0x1e2a160
                    g2 = v54;
                    v49 = v54 - *v42;
                    g2 = v49;
                    int32_t v55 = *(int32_t *)(v53 + 33); // 0x1e2a168
                    g2 = v55;
                    g2 = v48;
                    int32_t v56 = *(int32_t *)(v53 + 12); // 0x1e2a173
                    *(int32_t *)(g9 - 4) = v48;
                    g5 += 16;
                    *(int32_t *)(g9 - 8) = v50;
                    *(int32_t *)(g9 - 12) = v48;
                    g2 = function_1e3a358(v49, v55 - *(int32_t *)v44, v56);
                    int32_t v57 = g8; // 0x1e2a18a
                    int32_t v58 = 2; // 0x1e2a18d
                    g2 = v58;
                    int32_t v59 = *(int32_t *)(*(int32_t *)(v57 + 34) + 4); // 0x1e2a193
                    g5 = v59;
                    v47 = v57;
                    while (*(int32_t *)(v59 + 4) > v58) {
                        // 0x1e2a150
                        v51 = g4;
                        v52 = *(int32_t *)(v57 + 34);
                        g2 = v52;
                        g4 = v51 + 4;
                        v53 = *(int32_t *)(v51 + 8 + *(int32_t *)(v52 + 4));
                        g5 = v53;
                        v54 = *(int32_t *)(v53 + 29);
                        g2 = v54;
                        v49 = v54 - *v42;
                        g2 = v49;
                        v55 = *(int32_t *)(v53 + 33);
                        g2 = v55;
                        g2 = v48;
                        v56 = *(int32_t *)(v53 + 12);
                        *(int32_t *)(g9 - 4) = v48;
                        g5 += 16;
                        *(int32_t *)(g9 - 8) = v50;
                        *(int32_t *)(g9 - 12) = v48;
                        g2 = function_1e3a358(v49, v55 - *(int32_t *)g6, v56);
                        v57 = g8;
                        v58++;
                        g2 = v58;
                        v59 = *(int32_t *)(*(int32_t *)(v57 + 34) + 4);
                        g5 = v59;
                        v47 = v57;
                    }
                } else {
                    // 0x1e2a104
                    v48 = &v43;
                    v47 = v31;
                }
                int32_t v60 = *(int32_t *)(v47 + 34); // 0x1e2a19b
                g2 = v60;
                g2 = v48;
                *(int32_t *)(g9 - 4) = v48;
                int32_t v61 = *(int32_t *)(*(int32_t *)(v60 + 4) + 8); // 0x1e2a1a5
                g5 = v61;
                g7 = v39;
                int32_t v62 = *(int32_t *)(v61 + 33); // 0x1e2a1ab
                g2 = v62;
                int32_t v63 = v62 - *(int32_t *)g6; // 0x1e2a1ae
                g2 = v63;
                *(int32_t *)(g9 - 8) = v63;
                int32_t v64 = *(int32_t *)(g5 + 29); // 0x1e2a1b1
                g2 = v64;
                *(int32_t *)(g9 - 12) = v64 - *(int32_t *)g7;
                g2 = 1;
                *(int32_t *)(g9 - 16) = v33;
                *(int32_t *)(g9 - 20) = g5;
                int32_t v65; // 0x1e2a1c8
                if (v11 >= 0 == (v11 != 0)) {
                    // 0x1e2a19b
                    v65 = g2;
                } else {
                    // 0x1e2a1c6
                    g2 = 0;
                    v65 = 0;
                }
                // 0x1e2a1c8
                *(int32_t *)(g9 - 24) = v65;
                int32_t v66 = function_1e298eb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2a1c9
                g2 = v66;
                *(int32_t *)(g8 + 26) = v66;
            }
        }
    }
    // 0x1e2a1d1
    g2 = a2;
    g6 = *(int32_t *)g9;
    *(int32_t *)(g8 + 22) = a2;
    int32_t result = g8; // 0x1e2a1d8
    g2 = result;
    g8 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2a1e2 - 0x1e2a1e3
int32_t function_1e2a1e2(void) {
    // 0x1e2a1e2
    return g2;
}

// Address range: 0x1e2a1e3 - 0x1e2a201
int32_t function_1e2a1e3(char a1) {
    // 0x1e2a1e3
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e2a1f2
        g2 = function_1e3df60(g8);
    }
    // 0x1e2a1fb
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a201 - 0x1e2a251
int32_t function_1e2a201(void) {
    int32_t v1 = g5; // 0x1e2a203
    g2 = *(int32_t *)(v1 + 30);
    *(int32_t *)v1 = (int32_t)&g30;
    int32_t v2 = g5; // 0x1e2a20c
    g8 = v2;
    int32_t v3 = g2; // 0x1e2a20e
    int32_t v4; // 0x1e2a21e
    int32_t v5; // 0x1e2a219
    if (v3 != 0) {
        // 0x1e2a212
        v5 = function_1e3a6ca(*(int32_t *)(v3 + 254), v2);
        g2 = v5;
        v4 = g8;
    } else {
        v5 = 0;
        v4 = v2;
    }
    int32_t v6 = *(int32_t *)(v4 + 34); // 0x1e2a21e
    g6 = v6;
    int32_t v7; // 0x1e2a236
    int32_t v8; // 0x1e2a22e
    if (v6 != 0) {
        // 0x1e2a225
        *(int32_t *)(g9 - 4) = *(int32_t *)(v6 + 4);
        g2 = function_1e3a728((int32_t)&g708);
        *(int32_t *)(g9 - 4) = v6;
        v8 = function_1e3df60((int32_t)&g708);
        g2 = v8;
        v7 = g8;
    } else {
        v8 = v5;
        v7 = v4;
    }
    int32_t v9 = *(int32_t *)(v7 + 38); // 0x1e2a236
    g8 = v9;
    int32_t v10; // 0x1e2a24e
    int32_t result; // 0x1e2a250
    if (v9 == 0) {
        // 0x1e2a236
        result = v8;
        v10 = g9;
    } else {
        // 0x1e2a23d
        *(int32_t *)(g9 - 4) = *(int32_t *)(v9 + 4);
        g2 = function_1e3a728((int32_t)&g708);
        *(int32_t *)(g9 - 4) = v9;
        int32_t v11 = function_1e3df60((int32_t)&g708); // 0x1e2a246
        g2 = v11;
        result = v11;
        v10 = g9 + 4;
    }
    // 0x1e2a24e
    g6 = *(int32_t *)v10;
    g8 = *(int32_t *)(v10 + 4);
    return result;
}

// Address range: 0x1e2a251 - 0x1e2a26b
int32_t function_1e2a251(int32_t a1) {
    // 0x1e2a251
    g2 = a1;
    *(int32_t *)(g5 + 6) = a1;
    if (g2 == 1024) {
        // 0x1e2a25f
        *(int32_t *)(g5 + 6) = 0;
    }
    // 0x1e2a266
    g2 = 0;
    return 0;
}

// Address range: 0x1e2a26b - 0x1e2a270
int32_t function_1e2a26b(void) {
    // 0x1e2a26b
    g2 = 0;
    return 0;
}

// Address range: 0x1e2a270 - 0x1e2a273
int32_t function_1e2a270(void) {
    // 0x1e2a270
    return g2;
}

// Address range: 0x1e2a273 - 0x1e2a30e
int32_t function_1e2a273(int32_t a1, uint32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2 = g6; // 0x1e2a27b
    g6 = g5;
    g2 = function_1e29f8c(a1, a2, 0, v2);
    int32_t v3 = function_1e3a705(4); // 0x1e2a28e
    g2 = v3;
    *(int32_t *)(g6 + 46) = v3;
    *(int32_t *)g6 = (int32_t)&g31;
    *(int32_t *)(g6 + 42) = 4;
    *(int32_t *)(g6 + 50) = 0;
    if (a2 >= 1) {
        // 0x1e2a2ae
        int32_t v4; // bp-8
        g2 = &v4;
        g4 = 0;
        int32_t v5 = function_1e39996(a2, 1027, &v4); // 0x1e2a2ba
        g2 = v5;
        if (v4 > g4) {
            while (true) {
                int32_t v6 = (int32_t)*(int16_t *)v5; // 0x1e2a2c6
                g2 = v6;
                *(int32_t *)(g9 - 4) = v6;
                g5 = a1;
                int32_t v7 = function_1e2e83c((int32_t)&g708); // 0x1e2a2cd
                g2 = v7;
                if (v7 != 0) {
                    int32_t v8 = g6; // 0x1e2a2d9
                    int32_t v9 = *(int32_t *)(v8 + 46); // 0x1e2a2d9
                    g5 = v9;
                    int32_t v10 = *(int32_t *)v9; // 0x1e2a2dc
                    g2 = v10;
                    if (*(int32_t *)(v9 + 4) == v10) {
                        // 0x1e2a2e3
                        *(int32_t *)(g9 - 4) = *(int32_t *)(v8 + 42);
                        *(int32_t *)(g9 - 8) = g5;
                        int32_t v11 = function_1e3a739(v7, (int32_t)&g708); // 0x1e2a2e7
                        g2 = v11;
                        *(int32_t *)(g6 + 46) = v11;
                    }
                    // 0x1e2a2ef
                    *(int32_t *)(g9 - 4) = v7;
                    *(int32_t *)(g9 - 8) = *(int32_t *)(g6 + 46);
                    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
                }
                int32_t v12 = g4 + 1; // 0x1e2a2fa
                g4 = v12;
                if (v4 <= v12) {
                    // break -> 0x1e2a303
                    break;
                }
                v5 = g8 + 2;
            }
        }
    }
    int32_t result = g6; // 0x1e2a303
    g2 = result;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return result;
}

// Address range: 0x1e2a30e - 0x1e2a32c
int32_t function_1e2a30e(char a1) {
    // 0x1e2a30e
    int32_t v1; // esi
    g2 = function_1e2a32c(v1);
    if ((a1 & 1) != 0) {
        // 0x1e2a31d
        g2 = function_1e3df60(g8);
    }
    // 0x1e2a326
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a32c - 0x1e2a35a
int32_t function_1e2a32c(int32_t a1) {
    int32_t v1 = g5; // 0x1e2a32e
    int32_t v2 = *(int32_t *)(v1 + 50); // 0x1e2a32e
    g2 = v2;
    *(int32_t *)v1 = (int32_t)&g31;
    int32_t v3 = g5; // 0x1e2a337
    g6 = v3;
    g8 = 0;
    int32_t v4; // 0x1e2a348
    if (v2 != 0) {
        // 0x1e2a33f
        g2 = function_1e32771(v2);
        *(int32_t *)(g6 + 50) = g8;
        v4 = g6;
    } else {
        v4 = v3;
    }
    // 0x1e2a348
    *(int32_t *)(g9 - 4) = *(int32_t *)(v4 + 46);
    g2 = function_1e3a728((int32_t)&g708);
    g5 = g6;
    int32_t result = function_1e2a201(); // 0x1e2a352
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2a35a - 0x1e2a370
int32_t function_1e2a35a(int32_t a1) {
    // 0x1e2a35a
    g2 = a1;
    *(int32_t *)(a1 + 50) = 0;
    int32_t result = function_1e328b9(61, a1); // 0x1e2a368
    g2 = result;
    return result;
}

// Address range: 0x1e2a370 - 0x1e2a3f7
int32_t function_1e2a370(uint32_t a1, int32_t a2) {
    // 0x1e2a370
    g2 = a1;
    int32_t v1; // edi
    int32_t v2 = v1; // bp-16
    int32_t v3 = g5; // 0x1e2a37d
    g8 = v3;
    if (a1 == 48) {
        int32_t v4 = v3 + 50; // 0x1e2a3c5
        g6 = v4;
        g4 = 0;
        int32_t v5 = *(int32_t *)v4; // 0x1e2a3ca
        g2 = v5;
        if (v5 != 0) {
            // 0x1e2a3d0
            g2 = function_1e32771(v5);
            *(int32_t *)g6 = g4;
        }
        if (a2 > 0) {
            // 0x1e2a3de
            *(int32_t *)(g9 - 4) = 0x1e2a35a;
            *(int32_t *)(g9 - 8) = g8;
            *(int32_t *)(g9 - 12) = a2;
            int32_t v6 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2a3e7
            g2 = v6;
            *(int32_t *)g6 = v6;
        }
        // 0x1e2a3ee
        g2 = 0;
        return 0;
    }
    if (a1 >= 1008) {
        if (a1 <= 1011) {
            // 0x1e2a3ee
            g2 = 0;
            return 0;
        }
        if (a1 == 1020) {
            // 0x1e2a3ee
            g2 = 0;
            return 0;
        }
        if (a1 == 1022) {
            // 0x1e2a3ee
            g2 = 0;
            return 0;
        }
    }
    int32_t v7 = *(int32_t *)(v3 + 46); // 0x1e2a39d
    g2 = v7;
    int32_t v8 = *(int32_t *)(v7 + 4) - 1; // 0x1e2a3a3
    g2 = v8;
    if (v8 < 0) {
        // 0x1e2a3ee
        g2 = 0;
        return 0;
    }
    int32_t v9 = &v2; // 0x1e2a3ad
    *(int32_t *)(v9 - 4) = a2;
    g2 = *(int32_t *)(g8 + 46);
    int32_t v10 = v9 - 8; // 0x1e2a3b3
    *(int32_t *)v10 = a1;
    int32_t v11 = 4 * v8; // 0x1e2a3b6
    g5 = *(int32_t *)(g2 + 8 + v11);
    int32_t v12 = v11 - 4; // 0x1e2a3be
    while (v12 >= 0) {
        // 0x1e2a3ad
        v9 = v10;
        *(int32_t *)(v9 - 4) = a2;
        g2 = *(int32_t *)(g8 + 46);
        v10 = v9 - 8;
        *(int32_t *)v10 = a1;
        v11 = v12;
        g5 = *(int32_t *)(g2 + 8 + v11);
        v12 = v11 - 4;
    }
    // 0x1e2a3ee
    g2 = 0;
    return 0;
}

// Address range: 0x1e2a3f7 - 0x1e2a4a8
int32_t function_1e2a3f7(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2a3fa
    int32_t v4 = g6; // 0x1e2a3ff
    g6 = g5;
    g2 = function_1e29f8c(a1, a2, 1, v4);
    int32_t v5 = function_1e3a705(4); // 0x1e2a412
    g2 = v5;
    *(int32_t *)(g6 + 46) = v5;
    *(int32_t *)g6 = (int32_t)&g32;
    *(int32_t *)(g6 + 42) = 4;
    *(char *)(g6 + 5) = 1;
    int32_t v6 = g6; // 0x1e2a42b
    if (*(int32_t *)(v6 + 10) != 0) {
        // 0x1e2a431
        *(char *)(v6 + 4) = 1;
    }
    // 0x1e2a435
    g2 = v3;
    if (a2 < 1) {
        // 0x1e2a471
        g2 = function_1e390d0(&v2);
    } else {
        // 0x1e2a43f
        g2 = function_1e39641(a2, 0, v3);
        int32_t v7 = g4; // 0x1e2a446
        if (v7 != a3) {
            // 0x1e2a44b
            g2 = g6 + 5;
            int32_t v8 = function_1e3991a(a2, v7); // 0x1e2a464
            g2 = v8;
            int32_t v9 = function_1e29b62(v8, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2a46a
            g2 = v9;
        }
    }
    *(int32_t *)(g6 + 54) = g5;
    *(int32_t *)(g6 + 58) = v2;
    *(int32_t *)(g6 + 62) = g2;
    g2 = g6;
    *(int32_t *)(g6 + 74) = g5;
    *(int32_t *)(g6 + 70) = v2;
    *(int32_t *)(g6 + 22) = a2;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return g2;
}

// Address range: 0x1e2a4a8 - 0x1e2a4ad
int32_t function_1e2a4a8(void) {
    // 0x1e2a4a8
    g2 = 0;
    return 0;
}

// Address range: 0x1e2a4ad - 0x1e2a4cb
int32_t function_1e2a4ad(char a1) {
    // 0x1e2a4ad
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2a4bc
        g2 = function_1e3df60(g8);
    }
    // 0x1e2a4c5
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a4cb - 0x1e2a510
int32_t function_1e2a4cb(void) {
    // 0x1e2a4cb
    *(int32_t *)g5 = (int32_t)&g32;
    int32_t v1 = g6; // bp-12
    int32_t v2 = &v1; // 0x1e2a4d3
    int32_t v3 = g5; // 0x1e2a4d4
    int32_t v4 = v3 + 46; // 0x1e2a4d4
    g6 = v4;
    g8 = v3;
    int32_t v5 = *(int32_t *)v4; // 0x1e2a4d9
    g2 = v5;
    int32_t v6; // 0x1e2a4fe
    int32_t v7; // 0x1e2a4fe
    if (*(int32_t *)(v5 + 4) != 0) {
        int32_t v8 = v2; // 0x1e2a4e6
        int32_t v9 = v4; // 0x1e2a4e1
        while (true) {
            int32_t v10 = *(int32_t *)v9; // 0x1e2a4e1
            g2 = v10;
            int32_t v11 = *(int32_t *)(v10 + 8); // 0x1e2a4e3
            *(int32_t *)(v8 - 4) = v11;
            *(int32_t *)(v8 - 8) = g2;
            g2 = function_1e3a6ca((int32_t)&g708, (int32_t)&g708);
            *(int32_t *)(g9 - 4) = v11;
            g2 = function_1e3df60((int32_t)&g708);
            int32_t v12 = g9 + 4; // 0x1e2a4f3
            int32_t v13 = g6; // 0x1e2a4f6
            int32_t v14 = *(int32_t *)v13; // 0x1e2a4f6
            g2 = v14;
            if (*(int32_t *)(v14 + 4) == 0) {
                v7 = v12;
                v6 = v13;
                // break -> 0x1e2a4fe
                break;
            }
            v8 = v12;
            v9 = v13;
        }
    } else {
        v7 = v2;
        v6 = v4;
    }
    // 0x1e2a4fe
    *(int32_t *)(v7 - 4) = *(int32_t *)v6;
    g2 = function_1e3a728((int32_t)&g708);
    g5 = g8;
    int32_t result = function_1e2a201(); // 0x1e2a507
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2a510 - 0x1e2a538
int32_t function_1e2a510(void) {
    int32_t * v1 = (int32_t *)(g5 + 46); // 0x1e2a512
    int32_t v2 = *v1; // 0x1e2a512
    g2 = v2;
    int32_t result = *(int32_t *)(v2 + 4) - 1; // 0x1e2a51a
    g2 = result;
    if (result < 0) {
        // 0x1e2a535
        return result;
    }
    int32_t result2; // 0x1e2a52b
    for (int32_t i = 4 * result; i >= 3; i -= 4) {
        int32_t v3 = *v1; // 0x1e2a524
        g2 = v3;
        int32_t v4 = *(int32_t *)(i + 8 + v3); // 0x1e2a527
        g5 = v4;
        result2 = *(int32_t *)v4;
        g2 = result2;
    }
    // 0x1e2a535
    return result2;
}

// Address range: 0x1e2a538 - 0x1e2a5b8
int32_t function_1e2a538(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g5; // 0x1e2a53f
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2a53f
    g2 = v2;
    int32_t result;
    if (*(int32_t *)(v2 + 370) != 0) {
        int32_t v3 = *(int32_t *)(v1 + 58); // 0x1e2a554
        int32_t v4 = *(int32_t *)(v1 + 54); // 0x1e2a557
        result = (float32_t)function_1e2f084(a1, a2, a3, v4, v3, 0x4e6e6b28, 0);
        // 0x1e2a5af
        g2 = result;
        // 0x1e2a5b1
        return result;
    }
    int32_t v5 = *(int32_t *)(v1 + 62); // 0x1e2a56a
    int32_t v6 = *(int32_t *)(v1 + 66); // 0x1e2a56d
    int32_t v7 = *(int32_t *)(v1 + 58); // 0x1e2a570
    int32_t v8 = *(int32_t *)(v1 + 54); // 0x1e2a573
    g2 = (float32_t)function_1e2f084(a1, a2, a3, v8, v7, v6, v5);
    g11++;
    uint32_t v9 = (int32_t)__asm_fnstsw(g10); // 0x1e2a58a
    g2 = g2 & -0x10000 | v9;
    int32_t v10;
    if ((v9 / 256 & 65) == 0) {
        // 0x1e2a58f
        v10 = g8 + 74;
    } else {
        uint32_t v11 = (int32_t)__asm_fnstsw(g10); // 0x1e2a59d
        int32_t result2 = g2 & -0x10000 | v11; // 0x1e2a59d
        g2 = result2;
        if ((v11 / 256 & 65) != 0) {
            // 0x1e2a5b1
            return result2;
        }
        // 0x1e2a5a2
        v10 = g8 + 70;
    }
    int32_t v12 = *(int32_t *)v10;
    g2 = v12;
    if (v12 == 0) {
        // 0x1e2a5b1
        return 0;
    }
    // 0x1e2a5a9
    result = function_1e39a10(v12);
    // 0x1e2a5af
    g2 = result;
    // 0x1e2a5b1
    return result;
}

// Address range: 0x1e2a5b8 - 0x1e2a64b
int32_t function_1e2a5b8(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g5; // 0x1e2a5bf
    int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2a5c1
    g5 = v2;
    int32_t result;
    int32_t v3;
    if (*(int32_t *)(v2 + 370) == 0) {
        int32_t v4 = *(int32_t *)(v1 + 62); // 0x1e2a5ea
        int32_t v5 = *(int32_t *)(v1 + 66); // 0x1e2a5ed
        int32_t v6 = *(int32_t *)(v1 + 58); // 0x1e2a5f0
        int32_t v7 = *(int32_t *)(v1 + 54); // 0x1e2a5f3
        g2 = (float32_t)function_1e2f084(a1, a2, a3, v7, v6, v5, v4);
        g11++;
        uint32_t v8 = (int32_t)__asm_fnstsw(g10); // 0x1e2a60a
        g2 = g2 & -0x10000 | v8;
        if ((v8 / 256 & 65) == 0) {
            int32_t v9 = *(int32_t *)(g8 + 74); // 0x1e2a60f
            g2 = v9;
            if (v9 != 0) {
                // 0x1e2a616
                g2 = function_1e39a10(v9);
                g11++;
                result = 1;
            } else {
                result = 1;
            }
            // 0x1e2a644
            g2 = result;
            g8 = *(int32_t *)g9;
            return result;
        }
        uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e2a62e
        g2 = g2 & -0x10000 | v10;
        if ((v10 / 256 & 65) == 0) {
            int32_t v11 = *(int32_t *)(g8 + 70); // 0x1e2a633
            g2 = v11;
            if (v11 == 0) {
                goto lab_0x1e2a642;
            } else {
                // 0x1e2a63a
                v3 = function_1e39a10(v11);
                goto lab_0x1e2a640;
            }
        } else {
            goto lab_0x1e2a642;
        }
    } else {
        int32_t v12 = *(int32_t *)(v1 + 58); // 0x1e2a5d4
        int32_t v13 = *(int32_t *)(v1 + 54); // 0x1e2a5d7
        v3 = (float32_t)function_1e2f084(a1, a2, a3, v13, v12, 0x4e6e6b28, 0);
        goto lab_0x1e2a640;
    }
  lab_0x1e2a642:
    result = 0;
    // 0x1e2a644
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
  lab_0x1e2a640:
    // 0x1e2a640
    g2 = v3;
    g11++;
    goto lab_0x1e2a642;
}

// Address range: 0x1e2a64b - 0x1e2a68f
int32_t function_1e2a64b(int32_t a1, int32_t a2) {
    // 0x1e2a64b
    g2 = function_1e2a3f7(a1, a2, 1, g8);
    int32_t v1 = *(int32_t *)(g8 + 26); // 0x1e2a65d
    g2 = v1;
    *(int32_t *)g8 = (int32_t)&g33;
    if (v1 != 0) {
        // 0x1e2a66a
        g2 = function_1e29a40(v1, 0);
    }
    int32_t v2 = *(int32_t *)(g8 + 34); // 0x1e2a672
    g2 = v2;
    if (v2 != 0) {
        int32_t v3 = *(int32_t *)(v2 + 4); // 0x1e2a679
        g2 = v3;
        int32_t v4 = *(int32_t *)(v3 + 8); // 0x1e2a67c
        g5 = v4;
        *(int32_t *)(g8 + 82) = v4;
    }
    // 0x1e2a682
    *(int32_t *)(g8 + 78) = 0;
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a68f - 0x1e2a6ad
int32_t function_1e2a68f(char a1) {
    // 0x1e2a68f
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2a69e
        g2 = function_1e3df60(g8);
    }
    // 0x1e2a6a7
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a6ad - 0x1e2a6c9
int32_t function_1e2a6ad(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // edi
    g2 = function_1e29a40(*(int32_t *)(a1 + 26), 0);
    *(int32_t *)(a1 + 78) = v1;
    *(int32_t *)(a1 + 6) = v1;
    return g2;
}

// Address range: 0x1e2a6c9 - 0x1e2a710
int32_t function_1e2a6c9(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2a6c9
    g8 = g5;
    int32_t v1 = function_1e2a5b8(a1, a2, a3); // 0x1e2a6d8
    g2 = v1;
    if (v1 == 0) {
        // 0x1e2a70c
        return 0;
    }
    int32_t v2 = g8; // 0x1e2a6e1
    int32_t v3 = *(int32_t *)(v2 + 82); // 0x1e2a6e1
    g2 = v3;
    int32_t v4; // 0x1e2a704
    if (v3 != 0) {
        // 0x1e2a6e8
        g2 = function_1e29a40(*(int32_t *)(v2 + 26), v3);
        int32_t v5 = function_1e325d2(0x3dcccccd, g8, 0x1e2a6ad); // 0x1e2a6fc
        g2 = v5;
        *(int32_t *)(g8 + 78) = v5;
        v4 = g8;
    } else {
        v4 = v2;
    }
    // 0x1e2a704
    *(int32_t *)(g9 - 4) = v4;
    *(int32_t *)(g9 - 8) = 63;
    int32_t result = function_1e328b9((int32_t)&g708, (int32_t)&g708); // 0x1e2a707
    g2 = result;
    // 0x1e2a70c
    return result;
}

// Address range: 0x1e2a710 - 0x1e2a739
int32_t function_1e2a710(int32_t a1) {
    int32_t v1 = g5; // 0x1e2a719
    g8 = v1;
    if (a1 != 1024) {
        // 0x1e2a733
        g2 = 0;
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 78); // 0x1e2a71d
    g2 = v2;
    if (v2 != 0) {
        // 0x1e2a724
        g2 = function_1e32771(v2);
        g2 = function_1e2a6ad(*(int32_t *)(g8 + 78), g8);
    }
    // 0x1e2a733
    g2 = 0;
    return 0;
}

// Address range: 0x1e2a739 - 0x1e2a74d
int32_t function_1e2a739(int32_t a1) {
    // 0x1e2a739
    g2 = a1;
    int32_t result;
    if (a1 < 1) {
        // 0x1e2a746
        result = *(int32_t *)(4 * a1 + 86 + g5);
    } else {
        result = 0;
    }
    // 0x1e2a74a
    g2 = result;
    return result;
}

// Address range: 0x1e2a74d - 0x1e2a761
int32_t function_1e2a74d(int32_t a1, int32_t a2) {
    // 0x1e2a74d
    g2 = a1;
    int32_t result; // 0x1e2a75e
    if (a1 < 1) {
        // 0x1e2a756
        *(int32_t *)(4 * a1 + 86 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2a75e
    return result;
}

// Address range: 0x1e2a761 - 0x1e2a891
int32_t function_1e2a761(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-100
    int32_t v3 = &v2; // 0x1e2a764
    g2 = function_1e2a3f7(a1, a2, 0, g6);
    g5 = v3;
    *(int32_t *)g8 = (int32_t)&g34;
    int32_t v4 = a2; // bp-136
    g2 = function_1e39641(a2, 0, v3);
    int32_t v5;
    if (v5 == 2) {
        // 0x1e2a797
        int32_t v6;
        int32_t v7 = *(int32_t *)v6; // 0x1e2a79a
        g5 = v7;
        int32_t v8 = *(int32_t *)(v6 + 8); // 0x1e2a7a7
        g5 = v8;
        g6 = 0;
        int32_t v9 = function_1e3df20(85); // 0x1e2a7b8
        g2 = v9;
        int32_t v10; // 0x1e2a7e0
        int32_t v11; // 0x1e2a7e8
        if (v9 == 0) {
            // 0x1e2a797
            v11 = &v4;
            v10 = g6;
        } else {
            int32_t v12 = g8; // 0x1e2a7cf
            g5 = v9;
            int32_t v13;
            int32_t v14 = function_1e305a4(v12, v12 + 5, v13, &v7, &v8); // 0x1e2a7d6
            g2 = v14;
            g6 = v14;
            v11 = g9;
            v10 = v14;
        }
        // 0x1e2a7dd
        g5 = v10;
        int32_t v15 = a1 + 282; // 0x1e2a7e2
        g4 = v15;
        *(int32_t *)(v11 - 4) = *(int32_t *)v15;
        g2 = function_1e3061f((int32_t)&g708);
        int32_t v16 = g6; // 0x1e2a7ef
        g2 = *(int32_t *)v16;
        g5 = v16;
        int32_t v17 = g8; // 0x1e2a7f6
        int32_t v18 = *(int32_t *)(v17 + 46); // 0x1e2a7f6
        g5 = v18;
        int32_t v19 = *(int32_t *)v18; // 0x1e2a7f9
        g2 = v19;
        int32_t v20; // 0x1e2a80c
        if (*(int32_t *)(v18 + 4) == v19) {
            // 0x1e2a800
            *(int32_t *)(g9 - 4) = *(int32_t *)(v17 + 42);
            *(int32_t *)(g9 - 8) = g5;
            int32_t v21 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2a804
            g2 = v21;
            *(int32_t *)(g8 + 46) = v21;
            v20 = g6;
        } else {
            v20 = v16;
        }
        // 0x1e2a80c
        *(int32_t *)(g9 - 4) = v20;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
        *(int32_t *)(g9 - 4) = 85;
        g6 = g8 + 82;
        int32_t v22 = function_1e3df20((int32_t)&g708); // 0x1e2a81a
        g2 = v22;
        g5 = v22;
        if (v22 == 0) {
            // 0x1e2a841
            *(int32_t *)g6 = 0;
        } else {
            int32_t v23 = &v7; // 0x1e2a828
            g2 = v23;
            *(int32_t *)g9 = v23;
            *(int32_t *)(g9 - 4) = (int32_t)&v8;
            *(int32_t *)(g9 - 12) = g8 + 5;
            *(int32_t *)(g9 - 16) = g8;
            int32_t v24 = function_1e305a4((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, &g708, &g708); // 0x1e2a838
            g2 = v24;
            *(int32_t *)g6 = v24;
        }
        float32_t v25 = *(float32_t *)g4; // 0x1e2a847
        g5 = *(int32_t *)g6;
        *(float32_t *)(g9 - 4) = -(float32_t)(0.8L * (float80_t)v25);
        g2 = function_1e3061f((int32_t)&g708);
        int32_t * v26 = (int32_t *)g6; // 0x1e2a85e
        int32_t v27 = *v26; // 0x1e2a85e
        g5 = v27;
        g2 = *(int32_t *)v27;
        int32_t v28 = *v26; // 0x1e2a865
        g6 = v28;
        int32_t v29 = g8; // 0x1e2a867
        int32_t v30 = *(int32_t *)(v29 + 46); // 0x1e2a867
        g5 = v30;
        int32_t v31 = *(int32_t *)v30; // 0x1e2a86a
        g2 = v31;
        int32_t v32; // 0x1e2a87d
        if (*(int32_t *)(v30 + 4) == v31) {
            // 0x1e2a871
            *(int32_t *)(g9 - 4) = *(int32_t *)(v29 + 42);
            *(int32_t *)(g9 - 8) = g5;
            int32_t v33 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2a875
            g2 = v33;
            *(int32_t *)(g8 + 46) = v33;
            v32 = g6;
        } else {
            v32 = v28;
        }
        // 0x1e2a87d
        *(int32_t *)(g9 - 4) = v32;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    }
    // 0x1e2a886
    g2 = g8;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return g8;
}

// Address range: 0x1e2a891 - 0x1e2a8af
int32_t function_1e2a891(char a1) {
    // 0x1e2a891
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2a8a0
        g2 = function_1e3df60(g8);
    }
    // 0x1e2a8a9
    g2 = g8;
    return g8;
}

// Address range: 0x1e2a8af - 0x1e2a978
int32_t function_1e2a8af(int32_t a1, int32_t a2, int32_t a3, float32_t a4, int32_t a5) {
    int32_t v1 = g5; // 0x1e2a8b4
    g8 = v1;
    g6 = a5;
    if (*(int32_t *)(v1 + 82) != a5) {
        int32_t v2 = *(int32_t *)(v1 + 30); // 0x1e2a8be
        g2 = v2;
        if (*(int32_t *)(v2 + 370) != 0) {
            int32_t v3 = *(int32_t *)(v1 + 54); // 0x1e2a8d4
            float80_t v4 = function_1e2f084(a1, a2, a3, v3, *(int32_t *)(v1 + 58), 0x4e6e6b28, 0); // 0x1e2a8e0
            g2 = (float32_t)v4;
            // 0x1e2a972
            return (float32_t)v4;
        }
        int32_t v5 = *(int32_t *)(v1 + 62); // 0x1e2a8ec
        int32_t v6 = *(int32_t *)(v1 + 66); // 0x1e2a8ef
        int32_t v7 = *(int32_t *)(v1 + 58); // 0x1e2a8f2
        int32_t v8 = *(int32_t *)(v1 + 54); // 0x1e2a8f5
        g2 = (float32_t)function_1e2f084(a1, a2, a3, v8, v7, v6, v5);
        g11++;
        uint32_t v9 = (int32_t)__asm_fnstsw(g10); // 0x1e2a90c
        int32_t result = g2 & -0x10000 | v9; // 0x1e2a90c
        g2 = result;
        if ((v9 / 256 & 65) != 0) {
            // 0x1e2a972
            return result;
        }
        int32_t v10 = *(int32_t *)(g8 + 70); // 0x1e2a911
        g2 = v10;
        int32_t result2; // 0x1e2a919
        if (v10 != 0) {
            // 0x1e2a918
            result2 = function_1e39a10(v10);
            g2 = result2;
        } else {
            result2 = 0;
        }
        // 0x1e2a972
        return result2;
    }
    // 0x1e2a922
    g5 = a1;
    int32_t v11 = a1 + 134; // 0x1e2a925
    int32_t v12 = *(int32_t *)v11; // 0x1e2a92b
    g2 = v12;
    int32_t v13; // 0x1e2a943
    if (v12 < 5) {
        // 0x1e2a932
        *(int32_t *)(a1 + 114 + 4 * v12) = a5;
        int32_t * v14 = (int32_t *)v11; // 0x1e2a936
        *v14 = *v14 + 1;
        v13 = g5;
    } else {
        v13 = a1;
    }
    float32_t v15 = *(float32_t *)(v13 + 70); // 0x1e2a938
    float80_t v16 = (float80_t)v15 - (float80_t)a4; // st7
    g2 = a2;
    *(int32_t *)(v13 + 42) = *(int32_t *)a2;
    g6 = *(int32_t *)(g2 + 4);
    *(float32_t *)(g5 + 70) = (float32_t)v16;
    *(int32_t *)(g5 + 46) = g6;
    int32_t v17 = g8; // 0x1e2a94f
    int32_t v18 = *(int32_t *)(v17 + 30); // 0x1e2a94f
    g5 = v18;
    if (*(int32_t *)(v18 + 370) != 0) {
        // 0x1e2a972
        return g2;
    }
    int32_t v19 = *(int32_t *)(v17 + 74); // 0x1e2a95b
    g2 = v19;
    int32_t v20; // 0x1e2a96a
    if (v19 != 0) {
        // 0x1e2a962
        g2 = function_1e39a10(v19);
        g11++;
        v20 = g8;
    } else {
        v20 = v17;
    }
    // 0x1e2a96a
    *(int32_t *)(g9 - 4) = v20;
    *(int32_t *)(g9 - 8) = 63;
    int32_t result3 = function_1e328b9((int32_t)&g708, (int32_t)&g708); // 0x1e2a96d
    g2 = result3;
    // 0x1e2a972
    return result3;
}

// Address range: 0x1e2a978 - 0x1e2a98c
int32_t function_1e2a978(int32_t a1) {
    // 0x1e2a978
    g2 = a1;
    int32_t result;
    if (a1 < 6) {
        // 0x1e2a985
        result = *(int32_t *)(4 * a1 + 86 + g5);
    } else {
        result = 0;
    }
    // 0x1e2a989
    g2 = result;
    return result;
}

// Address range: 0x1e2a98c - 0x1e2a9a0
int32_t function_1e2a98c(int32_t a1, int32_t a2) {
    // 0x1e2a98c
    g2 = a1;
    int32_t result; // 0x1e2a99d
    if (a1 < 6) {
        // 0x1e2a995
        *(int32_t *)(4 * a1 + 86 + g5) = a2;
        result = g2;
    } else {
        result = a1;
    }
    // 0x1e2a99d
    return result;
}

// Address range: 0x1e2a9a0 - 0x1e2aae3
int32_t function_1e2a9a0(int32_t a1) {
    // 0x1e2a9a0
    int32_t v1; // bp-88
    int32_t v2 = &v1; // 0x1e2a9a3
    int32_t v3 = g6; // 0x1e2a9a8
    g6 = 0;
    function_1e29f8c(a1, -1, 0, v3);
    *(int32_t *)g8 = (int32_t)&g35;
    *(int32_t *)(g8 + 106) = g6;
    *(int32_t *)(g8 + 134) = g6;
    *(int32_t *)(g8 + 78) = g6;
    *(int32_t *)(g8 + 70) = g6;
    *(int32_t *)(g8 + 74) = g6;
    *(int32_t *)(g8 + 66) = g6;
    *(int32_t *)(g8 + 58) = g6;
    g2 = 0x4e6e6b28;
    *(int32_t *)(g8 + 54) = g6;
    *(int32_t *)(g8 + 150) = g6;
    *(int32_t *)(g8 + 86) = g2;
    *(int32_t *)(g8 + 82) = g2;
    *(int32_t *)(g8 + 42) = g6;
    *(int32_t *)(g8 + 46) = g6;
    *(char *)(g8 + 5) = 1;
    *(int32_t *)(g8 + 110) = 1;
    int32_t v4 = function_1e3df20(8); // 0x1e2a9fd
    g2 = v4;
    g4 = v4;
    int32_t v5 = g6; // 0x1e2aa07
    if (v4 == v5) {
        // 0x1e2aa1f
        *(int32_t *)(g8 + 34) = 0;
    } else {
        int32_t v6 = function_1e3a705(v5); // 0x1e2aa0c
        g2 = v6;
        *(int32_t *)(g4 + 4) = v6;
        *(int32_t *)g4 = 4;
        *(int32_t *)(g8 + 34) = g4;
    }
    // 0x1e2aa26
    *(int32_t *)(g9 - 4) = (int32_t)"ball";
    g2 = function_1e392c2((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 500;
    int32_t v7 = g2; // 0x1e2aa37
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g9 - 12) = g2;
    g2 = function_1e3991a(v7, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = v7;
    int32_t v8 = *(int32_t *)g2; // 0x1e2aa44
    g2 = v8;
    *(int32_t *)(g8 + 154) = v8;
    int32_t v9 = function_1e392d4((int32_t)&g708); // 0x1e2aa4c
    g2 = v9;
    if (v9 > g6) {
        while (true) {
            // 0x1e2aa58
            g2 = v2;
            *(int32_t *)(g9 - 4) = v2;
            *(int32_t *)(g9 - 8) = g6;
            *(int32_t *)(g9 - 12) = v7;
            function_1e39641((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            int32_t v10 = *(int32_t *)(g8 + 34); // 0x1e2aa68
            g4 = v10;
            int32_t v11 = *(int32_t *)(v10 + 4); // 0x1e2aa6e
            g5 = v11;
            int32_t v12 = *(int32_t *)v11; // 0x1e2aa71
            g2 = v12;
            if (*(int32_t *)(v11 + 4) == v12) {
                // 0x1e2aa78
                *(int32_t *)(g9 - 4) = *(int32_t *)v10;
                *(int32_t *)(g9 - 8) = g5;
                int32_t v13;
                int32_t v14 = function_1e3a739(v13, (int32_t)&g708); // 0x1e2aa7b
                g2 = v14;
                *(int32_t *)(g4 + 4) = v14;
            }
            // 0x1e2aa83
            *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
            g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
            *(int32_t *)(g9 - 4) = 501;
            *(int32_t *)(g9 - 8) = g6;
            *(int32_t *)(g9 - 12) = v7;
            int32_t v15 = function_1e3991a((int32_t)&g708, (int32_t)&g708); // 0x1e2aa97
            g2 = v15;
            *(int32_t *)(g9 - 4) = v15;
            g6++;
            g2 = function_1e39ac5((int32_t)&g708);
            *(float32_t *)(g8 + 158 + 4 * g6) = (float32_t)g684;
            g11++;
            if (v9 <= g6) {
                // break -> 0x1e2aaaf
                break;
            }
        }
    }
    // 0x1e2aaaf
    g2 = 0;
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = g2;
    *(int32_t *)(g9 - 12) = g2;
    *(int32_t *)(g9 - 16) = g2;
    *(int32_t *)(g9 - 20) = g2;
    *(int32_t *)(g9 - 24) = 2;
    int32_t v16 = function_1e298eb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2aab8
    g2 = v16;
    g5 = *(int32_t *)(g8 + 30);
    *(int32_t *)(g8 + 26) = v16;
    int32_t v17 = *(int32_t *)(g8 + 154); // 0x1e2aac3
    g2 = v17;
    g6 = *(int32_t *)g9;
    *(int32_t *)(g5 + 282) = v17;
    *(int32_t *)(g8 + 50) = *(int32_t *)(g8 + 154);
    int32_t result = g8; // 0x1e2aad9
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e2aae3 - 0x1e2ab01
int32_t function_1e2aae3(char a1) {
    // 0x1e2aae3
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e2aaf2
        g2 = function_1e3df60(g8);
    }
    // 0x1e2aafb
    g2 = g8;
    return g8;
}

// Address range: 0x1e2ab01 - 0x1e2ab52
int32_t function_1e2ab01(int32_t a1) {
    int32_t v1 = g5; // 0x1e2ab0b
    g8 = v1;
    if (a1 == 1024) {
        int32_t v2 = 0; // ebx
        g2 = function_1e29a6d(*(int32_t *)(v1 + 26), 0, 0, 0, 0);
        *(int32_t *)(g8 + 42) = 0;
        *(int32_t *)(g8 + 46) = v2;
        *(int32_t *)(g8 + 106) = v2;
        *(int32_t *)(g8 + 58) = v2;
        g2 = *(int32_t *)(g8 + 154);
        *(int32_t *)(g8 + 54) = v2;
        *(int32_t *)(g8 + 66) = v2;
        *(char *)(g8 + 5) = (char)v2;
        *(int32_t *)(g8 + 50) = g2;
        *(int32_t *)(g8 + 70) = v2;
        *(int32_t *)(g8 + 110) = 1;
        *(int32_t *)(g8 + 150) = v2;
    }
    // 0x1e2ab4b
    g2 = 0;
    return 0;
}

// Address range: 0x1e2ab52 - 0x1e2abfe
int32_t function_1e2ab52(void) {
    int32_t v1 = g5; // 0x1e2ab5b
    if (*(int32_t *)(v1 + 150) != 0) {
        float32_t v2 = *(float32_t *)(v1 + 142); // 0x1e2ab66
        float32_t v3 = *(float32_t *)(v1 + 46); // 0x1e2ab6c
        float32_t v4 = *(float32_t *)(v1 + 138); // 0x1e2ab6f
        float32_t v5 = *(float32_t *)(v1 + 42); // 0x1e2ab75
        float32_t v6 = *(float32_t *)(v1 + 146); // 0x1e2ab7a
        float32_t v7 = *(float32_t *)(v1 + 154); // 0x1e2ab80
        *(float32_t *)(v1 + 50) = (float32_t)((float80_t)v2 * (float80_t)v3 + (float80_t)v4 * (float80_t)v5 + (float80_t)v6 + (float80_t)v7);
    }
    int32_t v8 = v1 + 42; // 0x1e2ab89
    int32_t v9; // bp-16
    g2 = &v9;
    int32_t v10; // ebx
    int32_t v11; // edi
    int32_t v12; // esi
    int32_t v13 = function_1e39aeb(v8, &v9, v11, v12, v10); // 0x1e2ab91
    g2 = v13;
    g11++;
    g2 = function_1e39ac5(v8);
    int3_t v14 = g11; // 0x1e2ab9e
    g11 = v14 + 1;
    int32_t v15 = g8; // 0x1e2aba1
    int32_t v16 = *(int32_t *)(v15 + 34); // 0x1e2aba1
    g2 = v16;
    int32_t v17 = 0; // edx
    int32_t v18 = *(int32_t *)(v16 + 4); // 0x1e2aba6
    uint32_t v19 = *(int32_t *)(v18 + 4) - 1; // 0x1e2abac
    int32_t v20; // 0x1e2abef
    int32_t v21; // 0x1e2abcb
    if (v19 >= 1) {
        // 0x1e2abb1
        g5 = v15 + 162;
        int32_t v22;
        while (true) {
            uint32_t v23 = (int32_t)__asm_fnstsw(g10); // 0x1e2abbc
            g2 = g2 & -0x10000 | v23;
            if ((v23 / 256 & 1) == 0) {
                // break -> 0x1e2abba
                break;
            }
            // 0x1e2abc1
            g5 += 4;
            int32_t v24 = v17 + 1; // 0x1e2abc4
            v17 = v24;
            if (v19 <= v24) {
                v22 = v24;
                goto lab_0x1e2abc9;
            }
        }
        // 0x1e2abba
        v22 = v17;
      lab_0x1e2abc9:
        // 0x1e2abc9
        g11 = v14 + 1;
        v20 = g8;
        v21 = v22;
    } else {
        v20 = v15;
        v21 = 0;
    }
    int32_t v25 = *(int32_t *)(v18 + 8 + 4 * v21); // 0x1e2abcb
    g5 = v25;
    int32_t v26 = *(int32_t *)(v25 + 12); // 0x1e2abcf
    int32_t v27 = (v26 - (v26 >> 31)) / 2; // 0x1e2abd5
    g2 = v27;
    int32_t v28 = v9 - v27; // 0x1e2abd7
    v9 = v28;
    int32_t v29 = *(int32_t *)(v25 + 16); // 0x1e2abda
    int32_t v30 = (v29 - (v29 >> 31)) / 2; // 0x1e2abe0
    g2 = v30;
    int32_t v31 = *(int32_t *)(v20 + 26); // 0x1e2abef
    int32_t v32;
    int32_t result = function_1e29a6d(v31, v25, (int32_t)(float32_t)g684, v28, v32 - v30); // 0x1e2abf2
    g2 = result;
    return result;
}

// Address range: 0x1e2abfe - 0x1e2ac5e
int32_t function_1e2abfe(int32_t a1, int32_t a2) {
    // 0x1e2abfe
    int32_t v1; // bp-76
    int32_t v2 = &v1; // 0x1e2ac01
    int32_t v3 = g6; // 0x1e2ac06
    g6 = a2;
    g4 = 0;
    g2 = function_1e2a3f7(a1, a2, 1, v3);
    *(int32_t *)g8 = (int32_t)&g36;
    int32_t v4 = g4; // 0x1e2ac24
    *(int32_t *)(g8 + 78) = v4;
    *(int32_t *)(g8 + 82) = g4;
    int32_t v5 = function_1e3991a(g6, v4); // 0x1e2ac2c
    g2 = v5;
    int32_t v6 = *(int32_t *)v5; // 0x1e2ac31
    g2 = v6;
    g5 = v2;
    *(int32_t *)(g8 + 86) = v6;
    int32_t v7 = g6; // 0x1e2ac3b
    function_1e39641(v7, g4, v2);
    g6 = v7;
    *(int32_t *)(g8 + 98) = g2;
    g2 = g8;
    *(int32_t *)(g8 + 90) = *(int32_t *)(g8 + 66);
    g4 = v2;
    return g2;
}

// Address range: 0x1e2ac5e - 0x1e2ac7c
int32_t function_1e2ac5e(char a1) {
    // 0x1e2ac5e
    g2 = function_1e2a4cb();
    if ((a1 & 1) != 0) {
        // 0x1e2ac6d
        g2 = function_1e3df60(g8);
    }
    // 0x1e2ac76
    g2 = g8;
    return g8;
}

// Address range: 0x1e2ac7c - 0x1e2accd
int32_t function_1e2ac7c(int32_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 78); // 0x1e2ac82
    g5 = v1;
    g5 = 2 * v1;
    int32_t v2 = *(int32_t *)(*(int32_t *)(a1 + 34) + 4); // 0x1e2ac8a
    g2 = v2;
    *(int32_t *)(a1 + 82) = 0;
    int32_t v3 = *(int32_t *)(a1 + 30); // 0x1e2ac98
    int32_t v4 = *(int32_t *)(8 * v1 + 8 + v2); // 0x1e2ac9b
    int32_t v5 = *(int32_t *)(v4 + 33); // 0x1e2ac9b
    g2 = v5;
    int32_t v6 = v5 - *(int32_t *)(v3 + 238); // 0x1e2ac9e
    g2 = v6;
    int32_t v7 = *(int32_t *)(v4 + 29); // 0x1e2aca5
    g2 = v7;
    int32_t v8 = v7 - *(int32_t *)(v3 + 234); // 0x1e2aca8
    g2 = v8;
    int32_t v9 = *(int32_t *)(*(int32_t *)(a1 + 38) + 4); // 0x1e2acb2
    g2 = v9;
    int32_t v10 = *(int32_t *)(v9 + 8 + 4 * g5); // 0x1e2acb5
    g2 = function_1e29a04(*(int32_t *)(a1 + 26), v4, v10, v8, v6);
    int32_t v11 = *(int32_t *)(a1 + 90); // 0x1e2acc2
    g5 = v11;
    *(int32_t *)(a1 + 66) = v11;
    g8 = v4;
    return g2;
}

// Address range: 0x1e2accd - 0x1e2ad2a
int32_t function_1e2accd(void) {
    int32_t v1 = g5; // 0x1e2accf
    int32_t v2 = *(int32_t *)(v1 + 78); // 0x1e2accf
    g2 = v2;
    int32_t v3 = *(int32_t *)(v1 + 30); // edi
    g8 = v1;
    g5 = 2 * v2 | 1;
    *(int32_t *)(v1 + 66) = 0x4e6e6b28;
    int32_t v4 = *(int32_t *)(*(int32_t *)(v1 + 34) + 4); // 0x1e2ace8
    g2 = v4;
    int32_t v5 = 4 * g5; // 0x1e2aceb
    int32_t v6 = *(int32_t *)(v4 + 8 + v5); // 0x1e2aceb
    int32_t v7 = *(int32_t *)(v6 + 33); // 0x1e2acef
    g2 = v7;
    int32_t v8 = v7 - *(int32_t *)(v3 + 238); // 0x1e2acf2
    g2 = v8;
    int32_t v9 = *(int32_t *)(v6 + 29); // 0x1e2acf9
    g2 = v9;
    int32_t v10 = v9 - *(int32_t *)(v3 + 234); // 0x1e2acfc
    g2 = v10;
    int32_t v11 = *(int32_t *)(g8 + 38); // 0x1e2ad02
    g6 = v11;
    int32_t v12 = *(int32_t *)(v11 + 4); // 0x1e2ad06
    g2 = v12;
    int32_t v13 = *(int32_t *)(v5 + 8 + v12); // 0x1e2ad09
    g2 = function_1e29a04(*(int32_t *)(g8 + 26), v6, v13, v10, v8);
    int32_t v14 = function_1e325d2(*(int32_t *)(g8 + 86), g8, 0x1e2ac7c); // 0x1e2ad1f
    g2 = v14;
    *(int32_t *)(g8 + 82) = v14;
    return g2;
}

// Address range: 0x1e2ad2a - 0x1e2ad55
int32_t function_1e2ad2a(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2ad2a
    g8 = g5;
    int32_t v1 = function_1e2a5b8(a1, a2, a3); // 0x1e2ad39
    g2 = v1;
    int32_t result; // 0x1e2ad4c
    if (v1 != 0) {
        // 0x1e2ad42
        g5 = g8;
        g2 = function_1e2accd();
        result = function_1e328b9(63, g8);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e2ad51
    return result;
}

