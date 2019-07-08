
// Address range: 0x1e3df10 - 0x1e3df1b
int32_t function_1e3df10(void) {
    int32_t result = function_1e211b0(25); // 0x1e3df12
    g2 = result;
    return result;
}

// Address range: 0x1e3df20 - 0x1e3df30
int32_t function_1e3df20(int32_t a1) {
    // 0x1e3df20
    g2 = a1;
    int32_t result = function_1e22690(a1, 1); // 0x1e3df27
    g2 = result;
    return result;
}

// Address range: 0x1e3df30 - 0x1e3df5f
int32_t function_1e3df30(void) {
    int32_t v1 = function_1e22090(); // 0x1e3df30
    g2 = v1;
    int32_t * v2 = (int32_t *)(v1 + 20); // 0x1e3df35
    int32_t v3 = *v2; // 0x1e3df35
    g7 = v3;
    int32_t v4 = v3 + 0x269ec3 + 0x343fc * v3; // 0x1e3df4a
    g5 = v4;
    *v2 = v4;
    int32_t result = g5 / 0x10000 & 0x7fff; // 0x1e3df5b
    g2 = result;
    return result;
}

// Address range: 0x1e3df60 - 0x1e3df6e
int32_t function_1e3df60(int32_t a1) {
    // 0x1e3df60
    g2 = a1;
    int32_t result = function_1e22600(a1); // 0x1e3df65
    g2 = result;
    return result;
}

// Address range: 0x1e3df70 - 0x1e3df75
int32_t function_1e3df70(int32_t a1) {
    int32_t result = g7 - 1; // 0x1e3df70
    g2 = result;
    g4 = a1;
    return result;
}

// Address range: 0x1e3df86 - 0x1e3e03c
int32_t function_1e3df86(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g4; // bp-4
    int32_t v2 = g2; // 0x1e3df87
    g4 = v2;
    int32_t v3 = 256 * v2; // 0x1e3df89
    g2 = v3;
    if ((a1 & 3) != 0) {
        int32_t v4 = g5; // 0x1e3df98
        while (true) {
            unsigned char v5 = *(char *)a1; // 0x1e3df98
            int32_t v6 = (int32_t)v5 | v4 & -256; // 0x1e3df98
            g5 = v6;
            g7 = a1 + 1;
            int32_t v7; // 0x1e3df9f
            int32_t v8; // 0x1e3df9d
            if (v5 == (char)v2) {
                // bb
                v8 = function_1e3df70((int32_t)&g708);
                g2 = v8;
                v7 = g5;
            } else {
                v8 = v3;
                v7 = v6;
            }
            if ((char)v7 == 0) {
                // break -> 0x1e3dff4
                break;
            }
            int32_t v9 = g7; // 0x1e3dfa3
            int32_t v10 = g4;
            if ((v9 & 3) == 0) {
                a1 = v9;
                v3 = v8;
                v2 = v10;
                goto lab_0x1e3dfab;
            }
            v3 = v8;
            v2 = v10;
            v4 = v7;
            a1 = v9;
        }
        // 0x1e3dff4
        g4 = v1;
        g2 = 0;
        return 0;
    }
  lab_0x1e3dfab:;
    int32_t v11 = v2 | v3; // 0x1e3dfab
    int32_t v12 = g6; // 0x1e3dfad
    g2 = v11;
    int32_t v13 = g8; // 0x1e3dfb3
    char v14 = v11; // 0x1e3dffb
    int32_t result4 = a1; // 0x1e3dfd1
    while (true) {
        int32_t * v15 = (int32_t *)result4; // 0x1e3dfb6
        int32_t v16 = *v15; // 0x1e3dfb6
        int32_t v17 = v16 ^ (0x10000 * v11 | v11); // 0x1e3dfc1
        int32_t v18 = v16 + 0x7efefeff; // 0x1e3dfc3
        int32_t v19 = v18 ^ -1 - v16; // 0x1e3dfcf
        g2 = v19;
        int32_t v20 = result4 + 4; // 0x1e3dfd1
        g7 = v20;
        int32_t v21 = (v17 ^ -0x7efeff00 ^ v17 + 0x7efefeff) & -0x7efeff00; // 0x1e3dfd4
        g5 = v21;
        if (v21 == 0) {
            int32_t v22 = v19 & -0x7efeff00; // 0x1e3dfdc
            g2 = v22;
            if (v22 == 0) {
                result4 = v20;
                // continue -> 0x1e3dfb6
                continue;
            }
            int32_t v23 = v19 & 0x1010100; // 0x1e3dfe3
            g2 = v23;
            if (v23 != 0) {
                goto lab_0x1e3dff2_5;
            }
            if (v18 <= -1) {
                result4 = v20;
                // continue -> 0x1e3dfb6
                continue;
            }
          lab_0x1e3dff2_5:
            // 0x1e3dff2
            g8 = v13;
            g6 = v12;
            // 0x1e3dff4
            g4 = v1;
            g2 = 0;
            return 0;
        }
        uint32_t v24 = *v15; // 0x1e3dff8
        g2 = v24;
        char v25 = v24; // 0x1e3dffb
        if (v25 == v14) {
            // break -> 0x1e3e035
            break;
        }
        if (v25 == 0) {
            goto lab_0x1e3dff2_5;
        }
        char v26 = v24 / 256; // 0x1e3e003
        if (v26 == v14) {
            int32_t result = result4 + 1; // 0x1e3e02e
            g2 = result;
            g8 = v13;
            g6 = v12;
            g4 = v1;
            return result;
        }
        if (v26 == 0) {
            goto lab_0x1e3dff2_5;
        }
        int32_t v27 = v24 / 0x10000; // 0x1e3e00b
        char v28 = v27; // 0x1e3e00b
        g2 = v27;
        if (v28 == v14) {
            int32_t result2 = result4 + 2; // 0x1e3e027
            g2 = result2;
            g8 = v13;
            g6 = v12;
            g4 = v1;
            return result2;
        }
        if (v28 == 0) {
            goto lab_0x1e3dff2_5;
        }
        char v29 = v24 / 0x1000000; // 0x1e3e016
        if (v29 == v14) {
            // 0x1e3e020
            g8 = v13;
            g6 = v12;
            int32_t result3 = result4 + 3; // 0x1e3e022
            g2 = result3;
            g4 = v1;
            return result3;
        }
        if (v29 == 0) {
            goto lab_0x1e3dff2_5;
        }
        result4 = v20;
    }
    // 0x1e3e035
    g2 = result4;
    g8 = v13;
    g6 = v12;
    g4 = v1;
    return result4;
}

// Address range: 0x1e3e040 - 0x1e3e18e
int32_t function_1e3e040(int32_t result, uint32_t a2, uint32_t a3) {
    int32_t v1 = g8; // bp-12
    g5 = a3;
    int32_t v2; // edi
    int32_t v3; // esi
    int32_t v4; // 0x1e3e124
    int32_t v5; // 0x1e3e14b
    int32_t v6; // 0x1e3e120
    int32_t v7; // 0x1e3e148
    if (result > a2) {
        int32_t v8 = a3 + a2; // 0x1e3e054
        g2 = v8;
        if (v8 > result) {
            bool v9 = true; // df
            g7 = a3 & 3;
            int32_t v10 = a3 + result - 4; // 0x1e3e101
            int32_t v11 = a3 / 4; // 0x1e3e104
            g5 = v11;
            __asm_rep_movsd_memcpy((char *)v10, (char *)(v8 - 4), v11);
            int32_t v12 = (v9 ? -4 : 4) * v11 + v10; // 0x1e3e107
            v2 = v12;
            v3 = v12;
            g5 = 0;
            int32_t v13 = g7; // 0x1e3e109
            g697 = v13;
            switch (v13) {
                case 0: {
                    goto lab_0x1e3e14e;
                }
                case 1: {
                    // 0x1e3e0ec
                    v7 = g2 & -256;
                    v5 = v12;
                    goto lab_0x1e3e148;
                }
                case 2: {
                    goto lab_0x1e3e138;
                }
                case 3: {
                    // 0x1e3e0ec
                    v6 = g2 & -0x10000;
                    v4 = v12;
                    goto lab_0x1e3e120;
                }
                default: {
                    int32_t v14 = v12 - 1; // 0x1e3e158
                    int32_t v15 = -v13 & 3; // 0x1e3e161
                    g7 = v15;
                    g2 = -v15;
                    g5 = v15;
                    char * v16 = (char *)v14; // 0x1e3e16a
                    __asm_rep_movsb_memcpy(v16, v16, v15);
                    uint32_t v17 = g2; // 0x1e3e16c
                    g2 = v17 & 3;
                    int32_t v18 = (v9 ? -1 : 1) * v15 + v14 - 3; // 0x1e3e171
                    char * v19 = (char *)v18; // 0x1e3e171
                    int32_t v20 = v17 / 4; // 0x1e3e177
                    g5 = v20;
                    __asm_rep_movsd_memcpy(v19, v19, v20);
                    int32_t v21 = (v9 ? -4 : 4) * v20 + v18; // 0x1e3e17a
                    v2 = v21;
                    v3 = v21;
                    g5 = 0;
                    int32_t v22 = g2; // 0x1e3e17c
                    g698 = v22;
                    switch (v22) {
                        case 0: {
                            goto lab_0x1e3e14e;
                        }
                        case 1: {
                            v7 = 0;
                            v5 = v21;
                            goto lab_0x1e3e148;
                        }
                        case 2: {
                            goto lab_0x1e3e138;
                        }
                        case 3: {
                            v6 = 0;
                            v4 = v21;
                            goto lab_0x1e3e120;
                        }
                        default: {
                            char * v23 = (char *)v21; // 0x1e3e184
                            __asm_rep_movsb_memcpy(v23, v23, 0);
                            g5 = 0;
                            g1 = false;
                            g2 = result;
                            g8 = v1;
                            return result;
                        }
                    }
                }
            }
        } else {
            goto lab_0x1e3e05e;
        }
    } else {
        goto lab_0x1e3e05e;
    }
  lab_0x1e3e05e:
    // 0x1e3e05e
    g7 = a3 & 3;
    int32_t v24 = a3 / 4; // 0x1e3e06b
    g5 = v24;
    __asm_rep_movsd_memcpy((char *)result, (char *)a2, v24);
    int32_t v25 = (g1 ? -4 : 4) * v24 + result; // 0x1e3e06e
    v2 = v25;
    v3 = v25;
    g5 = 0;
    int32_t v26 = g7; // 0x1e3e070
    g694 = v26;
    int32_t v27; // 0x1e3e08b
    int32_t v28; // 0x1e3e0ae
    int32_t v29; // 0x1e3e088
    int32_t v30; // 0x1e3e0ac
    switch (v26) {
        case 0: {
            goto lab_0x1e3e0b0;
        }
        case 1: {
            // 0x1e3e05e
            v30 = g2 & -256;
            v28 = v25;
            goto lab_0x1e3e0ac;
        }
        case 2: {
            goto lab_0x1e3e09c;
        }
        case 3: {
            // 0x1e3e05e
            v29 = g2 & -0x10000;
            v27 = v25;
            goto lab_0x1e3e088;
        }
        default: {
            int32_t v31 = -v25 & 3; // 0x1e3e0c1
            g7 = v31;
            g2 = -v31;
            g5 = v31;
            char * v32 = (char *)v25; // 0x1e3e0ca
            __asm_rep_movsb_memcpy(v32, v32, v31);
            int32_t v33 = (g1 ? -1 : 1) * v31 + v25; // 0x1e3e0ca
            char * v34 = (char *)v33; // 0x1e3e0ca
            uint32_t v35 = g2; // 0x1e3e0cc
            g2 = v35 & 3;
            int32_t v36 = v35 / 4; // 0x1e3e0d1
            g5 = v36;
            __asm_rep_movsd_memcpy(v34, v34, v36);
            int32_t v37 = (g1 ? -4 : 4) * v36 + v33; // 0x1e3e0d4
            v2 = v37;
            v3 = v37;
            g5 = 0;
            int32_t v38 = g2; // 0x1e3e0d6
            g695 = v38;
            switch (v38) {
                case 0: {
                    goto lab_0x1e3e0b0;
                }
                case 1: {
                    v30 = 0;
                    v28 = v37;
                    goto lab_0x1e3e0ac;
                }
                case 2: {
                    goto lab_0x1e3e09c;
                }
                case 3: {
                    v29 = 0;
                    v27 = v37;
                    goto lab_0x1e3e088;
                }
                default: {
                    char * v39 = (char *)v37; // 0x1e3e0e0
                    __asm_rep_movsb_memcpy(v39, v39, 0);
                    g5 = 0;
                    g2 = result;
                    g8 = v1;
                    return result;
                }
            }
        }
    }
  lab_0x1e3e09c:
    // 0x1e3e09c
    g2 = result;
    g8 = v1;
    return result;
  lab_0x1e3e138:
    // 0x1e3e138
    g1 = false;
    g2 = result;
    g8 = v1;
    return result;
  lab_0x1e3e0ac:;
    char * v40 = (char *)v28; // 0x1e3e0ac
    unsigned char v41 = *v40; // 0x1e3e0ac
    g2 = (int32_t)v41 | v30;
    *v40 = v41;
  lab_0x1e3e0b0:
    // 0x1e3e0b0
    g2 = result;
    g8 = v1;
    return result;
  lab_0x1e3e088:;
    int16_t * v42 = (int16_t *)v27; // 0x1e3e088
    uint16_t v43 = *v42; // 0x1e3e088
    g2 = (int32_t)v43 | v29;
    *v42 = v43;
    *(char *)(v2 + 2) = *(char *)(v3 + 2);
    g2 = result;
    g8 = v1;
    return result;
  lab_0x1e3e148:;
    char * v44 = (char *)(v5 + 3); // 0x1e3e148
    unsigned char v45 = *v44; // 0x1e3e148
    g2 = (int32_t)v45 | v7;
    *v44 = v45;
  lab_0x1e3e14e:
    // 0x1e3e14e
    g1 = false;
    g2 = result;
    g8 = v1;
    return result;
  lab_0x1e3e120:;
    int16_t * v46 = (int16_t *)(v4 + 2); // 0x1e3e120
    uint16_t v47 = *v46; // 0x1e3e120
    g2 = (int32_t)v47 | v6;
    *v46 = v47;
    *(char *)(v2 + 1) = *(char *)(v3 + 1);
    g1 = false;
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e3e190 - 0x1e3e19a
int32_t function_1e3e190(void) {
    int32_t result = function_1e4153b((int32_t)&g708, (int32_t)&g708); // 0x1e3e195
    g2 = result;
    return result;
}

// Address range: 0x1e3e19a - 0x1e3e1a1
int32_t function_1e3e19a(void) {
    // 0x1e3e19a
    return g2;
}

// Address range: 0x1e3e1a1 - 0x1e3e1a8
int32_t function_1e3e1a1(void) {
    // 0x1e3e1a1
    return g2;
}

// Address range: 0x1e3e1a8 - 0x1e3e1b2
int32_t function_1e3e1a8(void) {
    int32_t result = function_1e413bb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3e1ad
    g2 = result;
    return result;
}

// Address range: 0x1e3e1b7 - 0x1e3e1bc
int32_t function_1e3e1b7(void) {
    int32_t result = __cintrindisp1(); // 0x1e3e1b7
    g2 = result;
    return result;
}

// Address range: 0x1e3e1bc - 0x1e3e1c3
int32_t function_1e3e1bc(void) {
    int32_t result = function_1e3e1b7(); // 0x1e3e1c1
    g2 = result;
    return result;
}

// Address range: 0x1e3e1c3 - 0x1e3e1ca
int32_t function_1e3e1c3(void) {
    int32_t result = function_1e3e1b7(); // 0x1e3e1c8
    g2 = result;
    return result;
}

// Address range: 0x1e3e1ca - 0x1e3e1d4
int32_t function_1e3e1ca(void) {
    int32_t result = __cintrindisp2(); // 0x1e3e1cf
    g2 = result;
    return result;
}

// Address range: 0x1e3e1e0 - 0x1e3edb9
int32_t function_1e3e1e0(int32_t * a1, int32_t a2, int32_t * a3) {
    // 0x1e3e1e0
    char v1;
    g4 = v1;
    int32_t v2 = g3; // bp-464
    int32_t v3 = &v2; // 0x1e3e202
    g3 = (int32_t)a1;
    int32_t v4 = *(int32_t *)(v3 + 472); // 0x1e3e20a290
    g5 = v4;
    unsigned char v5 = *(char *)v4; // 0x1e3e211292
    int32_t v6 = v5; // 0x1e3e211293
    g2 = g2 & -256 | v6;
    int32_t v7; // 0x1e3e39c
    int32_t v8; // 0x1e3e392
    int32_t v9; // 0x1e3e398
    int32_t v10; // 0x1e3e2d1
    int32_t v11; // 0x1e3ed6a
    if (v5 == 0) {
        goto lab_0x1e3ed78_7;
    } else {
        while (true) {
          lab_0x1e3e21b:;
            // 0x1e3e21b
            int32_t v12; // 0x1e3e24c
            int32_t v13; // 0x1e3e22b
            if (g442 > 1) {
                // 0x1e3e224
                *(int32_t *)(v3 - 4) = 8;
                int32_t v14 = g2 & 255; // 0x1e3e228
                g5 = v14;
                *(int32_t *)(v3 - 8) = v14;
                v13 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                g2 = v13;
                v12 = g9 + 8;
            } else {
                int32_t v15 = (int32_t)g122; // 0x1e3e237
                g7 = v15;
                g5 = v6;
                g2 = 0;
                int32_t v16 = (int32_t)*(int16_t *)(v15 + 2 * v6) & 8; // 0x1e3e245
                g2 = v16;
                v12 = v3;
                v13 = v16;
            }
            int32_t v17; // 0x1e3ecdf
            if (v13 != 0) {
                int32_t v18 = v12 + 28; // 0x1e3e24c
                g2 = v18;
                *(int32_t *)(v12 - 4) = g3;
                int32_t * v19 = (int32_t *)v18; // 0x1e3e251
                *v19 = *v19 - 1;
                *(int32_t *)(g9 - 4) = g3;
                *(int32_t *)(g9 - 8) = g2;
                int32_t v20 = function_1e3ef10((int32_t)&g708, (int32_t)&g708); // 0x1e3e257
                g2 = v20;
                *(int32_t *)(g9 + 4) = v20;
                g2 = function_1e3eef0((int32_t)&g708, (int32_t)&g708);
                g2 = 0;
                int32_t * v21 = (int32_t *)(480 + g9); // 0x1e3e26a
                *v21 = *v21 + 1;
                int32_t v22 = *(int32_t *)(g9 + 472); // 0x1e3e271
                g5 = v22;
                int32_t v23 = g2 & -256 | (int32_t)*(char *)v22; // 0x1e3e278
                g2 = v23;
                *(int32_t *)(g9 - 4) = v23;
                int32_t v24 = function_1e41720((int32_t)&g708); // 0x1e3e27b
                g2 = v24;
                int32_t v25 = g9 + 4; // 0x1e3e280
                v17 = v25;
                while (v24 != 0) {
                    // 0x1e3e268
                    g2 = 0;
                    v21 = (int32_t *)(v25 + 472);
                    *v21 = *v21 + 1;
                    v22 = *(int32_t *)(g9 + 472);
                    g5 = v22;
                    v23 = g2 & -256 | (int32_t)*(char *)v22;
                    g2 = v23;
                    *(int32_t *)(g9 - 4) = v23;
                    v24 = function_1e41720((int32_t)&g708);
                    g2 = v24;
                    v25 = g9 + 4;
                    v17 = v25;
                }
            } else {
                v17 = v12;
            }
            int32_t * v26 = (int32_t *)(v17 + 472); // 0x1e3e287
            int32_t v27 = *v26; // 0x1e3e287
            g5 = v27;
            if (*(char *)v27 != 37) {
                // 0x1e3ecdf
                g8 = *v26;
                *(int32_t *)(v17 - 4) = g3;
                *v26 = *v26 + 1;
                int32_t * v28 = (int32_t *)(g9 + 32); // 0x1e3ecee
                *v28 = *v28 + 1;
                int32_t v29 = function_1e3eec0((int32_t)&g708); // 0x1e3ecf2
                g4 = v29;
                g2 = 0;
                int32_t v30 = (int32_t)*(char *)g8; // 0x1e3ecfe
                g2 = v30;
                if (v30 != v29) {
                    v11 = g9 + 4;
                    // break -> 0x1e3ed6a
                    break;
                }
                int32_t v31 = (int32_t)g122; // 0x1e3ed06
                g2 = v31;
                int32_t v32 = v29 & 255; // 0x1e3ed0b
                g5 = v32;
                if (*(char *)((2 * v32 || 1) + v31) <= 255) {
                    int32_t * v33 = (int32_t *)(g9 + 476); // 0x1e3ed14
                    g8 = *v33;
                    *(int32_t *)g9 = g3;
                    *v33 = *v33 + 1;
                    int32_t * v34 = (int32_t *)(g9 + 32); // 0x1e3ed23
                    *v34 = *v34 + 1;
                    int32_t v35 = function_1e3eec0((int32_t)&g708); // 0x1e3ed27
                    g2 = v35;
                    g5 = 0;
                    int32_t v36 = (int32_t)*(char *)g8; // 0x1e3ed31
                    g5 = v36;
                    int32_t * v37 = (int32_t *)(g9 + 32); // 0x1e3ed5c
                    *v37 = *v37 - 1;
                    if (v36 != v35) {
                        // 0x1e3ed5c
                        *(int32_t *)(g9 - 4) = g3;
                        *(int32_t *)(g9 - 8) = g2;
                        g2 = function_1e3eef0((int32_t)&g708, (int32_t)&g708);
                        v11 = g9 + 8;
                        goto lab_0x1e3ed6a_2;
                    }
                }
                goto lab_0x1e3ed3b;
            } else {
                // 0x1e3e297
                g6 = 0;
                g8 = 0;
                *(int32_t *)(v17 + 64) = 0;
                *(int32_t *)(g9 + 60) = g6;
                *(char *)(g9 + 22) = 0;
                *(char *)(g9 + 56) = 0;
                *(char *)(g9 + 18) = 0;
                *(char *)(g9 + 21) = 0;
                *(char *)(g9 + 23) = 0;
                *(char *)(g9 + 19) = 0;
                *(char *)(g9 + 36) = 0;
                *(char *)(g9 + 20) = 1;
                *(int32_t *)(g9 + 40) = g8;
                v10 = g9;
                while (true) {
                  lab_0x1e3e2cf:
                    // 0x1e3e2cf
                    g2 = 0;
                    int32_t * v38 = (int32_t *)(v10 + 472); // 0x1e3e2d1
                    *v38 = *v38 + 1;
                    int32_t v39 = *(int32_t *)(g9 + 472); // 0x1e3e2d8
                    g5 = v39;
                    int32_t v40 = g2 & -256 | (int32_t)*(char *)v39; // 0x1e3e2e6
                    g2 = v40;
                    *(int32_t *)(g9 + 32) = v40;
                    int32_t v41; // 0x1e3e2f7
                    if (g442 > 1) {
                        // 0x1e3e2ee
                        *(int32_t *)(g9 - 4) = 4;
                        g2 = 0;
                        int32_t v42 = (int32_t)*(char *)(g9 + 32); // 0x1e3e2f2
                        g2 = v42;
                        *(int32_t *)(g9 - 8) = v42;
                        v41 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                        g2 = v41;
                        v9 = g9 + 8;
                    } else {
                        // 0x1e3e301
                        g5 = 0;
                        int32_t v43 = (int32_t)g122; // 0x1e3e303
                        g7 = v43;
                        int32_t v44 = (int32_t)*(char *)(g9 + 32); // 0x1e3e309
                        g5 = v44;
                        g2 = 0;
                        int32_t v45 = (int32_t)*(int16_t *)(2 * v44 + v43) & 4; // 0x1e3e313
                        g2 = v45;
                        v9 = g9;
                        v41 = v45;
                    }
                    if (v41 == 0) {
                        int32_t v46 = *(int32_t *)(v9 + 32); // 0x1e3e32b
                        g5 = v46 - 42;
                        g2 = 0;
                        unsigned char v47 = *(char *)(v46 + (int32_t)&g15 - 42); // 0x1e3e339
                        int32_t v48 = v47; // 0x1e3e339
                        g2 = v48;
                        g696 = v48;
                        switch (v47) {
                            case 0: {
                                char * v49 = (char *)(v9 + 21); // 0x1e3e346
                                *v49 = *v49 + 1;
                                goto lab_0x1e3e39c;
                            }
                            case 1: {
                                goto lab_0x1e3e39c;
                            }
                            case 2: {
                                int32_t * v50 = (int32_t *)(v9 + 472); // 0x1e3e34c
                                int32_t v51 = *v50; // 0x1e3e34c
                                g5 = v51;
                                if (*(char *)(v51 + 1) != 54) {
                                    goto lab_0x1e3e398;
                                } else {
                                    int32_t v52 = v51 + 2; // 0x1e3e359
                                    g2 = v52;
                                    if (*(char *)v52 != 52) {
                                        goto lab_0x1e3e398;
                                    } else {
                                        // 0x1e3e361
                                        *v50 = v52;
                                        int32_t * v53 = (int32_t *)(g9 + 40); // 0x1e3e368
                                        *v53 = *v53 + 1;
                                        *(int32_t *)(g9 + 48) = 0;
                                        *(int32_t *)(g9 + 52) = 0;
                                        goto lab_0x1e3e39c;
                                    }
                                }
                            }
                            case 3: {
                                char * v54 = (char *)(v9 + 20); // 0x1e3e37e
                                *v54 = *v54 + 1;
                                goto lab_0x1e3e39c;
                            }
                            case 4: {
                                goto lab_0x1e3e39c;
                            }
                            case 5: {
                                char * v55 = (char *)(v9 + 20); // 0x1e3e384
                                *v55 = *v55 - 1;
                                char * v56 = (char *)(g9 + 36); // 0x1e3e388
                                *v56 = *v56 - 1;
                                goto lab_0x1e3e39c;
                            }
                            case 6: {
                                char * v57 = (char *)(v9 + 20); // 0x1e3e38e
                                *v57 = *v57 + 1;
                                v8 = g9;
                                goto lab_0x1e3e392;
                            }
                            case 7: {
                                v8 = v9;
                                goto lab_0x1e3e392;
                            }
                            default: {
                                goto lab_0x1e3e398;
                            }
                        }
                    } else {
                        // 0x1e3e31a
                        g5 = 5 * g8;
                        g2 = *(int32_t *)(v9 + 32);
                        int32_t * v58 = (int32_t *)(v9 + 60); // 0x1e3e321
                        *v58 = *v58 + 1;
                        g8 = g2 - 48 + 2 * g5;
                        goto lab_0x1e3e39c;
                    }
                }
              lab_0x1e3e3a7:;
                char v59 = *(char *)(v7 + 21); // 0x1e3e3a7
                int32_t v60; // 0x1e3e3cf
                if (v59 == 0) {
                    int32_t * v61 = (int32_t *)(v7 + 476); // 0x1e3e3ae
                    int32_t v62 = *v61; // 0x1e3e3ae
                    g2 = v62;
                    int32_t v63 = *v61; // 0x1e3e3b5
                    *v61 = v63 + 4;
                    int32_t v64 = g2; // 0x1e3e3bd
                    int32_t v65 = g9; // 0x1e3e3bd
                    *(int32_t *)(v65 + 76) = v64;
                    int32_t v66 = g9; // 0x1e3e3c1
                    int32_t v67 = *(int32_t *)(v66 + 476); // 0x1e3e3c1
                    g2 = v67;
                    int32_t v68 = *(int32_t *)(v67 - 4); // 0x1e3e3c8
                    g5 = v68;
                    *(int32_t *)(v66 + 44) = v68;
                    int32_t v69 = g9;
                    v60 = v69;
                } else {
                    v60 = v7;
                }
                // 0x1e3e3cf
                *(char *)(v60 + 23) = 0;
                int32_t v70 = g9; // 0x1e3e3d4
                char * v71 = (char *)(v70 + 36); // 0x1e3e3d4
                char v72 = *v71; // 0x1e3e3d4
                if (v72 != 0) {
                    goto lab_0x1e3e3f6;
                } else {
                    int32_t v73 = *(int32_t *)(v70 + 472); // 0x1e3e3db
                    g5 = v73;
                    unsigned char v74 = *(char *)v73; // 0x1e3e3e2
                    int32_t v75 = g2; // 0x1e3e3e2
                    g2 = v75 & -256 | (int32_t)v74;
                    char v76; // 0x1e3e3f2
                    if (v74 == 83) {
                        // 0x1e3e3f2
                        v76 = *v71;
                        *v71 = v76 + 1;
                        goto lab_0x1e3e3f6;
                    } else {
                        if (v74 == 67) {
                            // 0x1e3e3f2
                            v76 = *v71;
                            *v71 = v76 + 1;
                            goto lab_0x1e3e3f6;
                        } else {
                            char v77 = *v71; // 0x1e3e3ec
                            *v71 = v77 - 1;
                            goto lab_0x1e3e3f6;
                        }
                    }
                }
            }
        }
        goto lab_0x1e3ed6a_2;
    }
  lab_0x1e3ed78_7:;
    int32_t result = *(int32_t *)(v3 + 72); // 0x1e3edaa
    if (g4 != -1) {
        // 0x1e3edaa
        g2 = result;
        g8 = *(int32_t *)(v3 + 8);
        return result;
    }
    if (result != 0 || *(char *)(v3 + 17) != 0) {
        // 0x1e3ed9b
        g2 = result;
        g8 = *(int32_t *)(v3 + 8);
        return result;
    }
    // 0x1e3ed8b
    g2 = -1;
    g8 = *(int32_t *)(v3 + 8);
    return -1;
  lab_0x1e3ebed:;
    int32_t v78 = g442; // 0x1e3ebed
    int32_t v79; // 0x1e3ebf6
    int32_t v80; // 0x1e3ec17
    int32_t v81; // 0x1e3ec1e
    if (v78 > 1) {
        // 0x1e3ebf6
        *(int32_t *)(v79 - 4) = 128;
        int32_t v82 = g4; // 0x1e3ebfb
        *(int32_t *)(v79 - 8) = v82;
        int32_t v83 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3ebfc
        g2 = v83;
        int32_t v84 = g9; // 0x1e3ec01
        int32_t v85 = v84 + 8; // 0x1e3ec01
        v81 = v85;
        v80 = v83;
    } else {
        int16_t * v86 = g122; // 0x1e3ec06
        int32_t v87 = (int32_t)v86; // 0x1e3ec06
        g5 = v87;
        g2 = 0;
        int32_t v88 = g4; // 0x1e3ec0e
        uint16_t v89 = *(int16_t *)(2 * v88 + v87); // 0x1e3ec0e
        int32_t v90 = (int32_t)v89 & 128; // 0x1e3ec12
        g2 = v90;
        v81 = v79;
        v80 = v90;
    }
    int32_t v91; // 0x1e3ec2b
    int32_t v92; // 0x1e3ec5f
    if (v80 == 0) {
        v91 = v81;
        goto lab_0x1e3ec2b;
    } else {
        int32_t v93 = g6; // 0x1e3ec1b
        g6 = 16 * v93;
        int32_t v94 = g4; // 0x1e3ec1e
        *(int32_t *)(v81 - 4) = v94;
        int32_t v95 = function_1e3ee80((int32_t)&g708); // 0x1e3ec1f
        g2 = v95;
        int32_t v96 = g9; // 0x1e3ec24
        int32_t v97 = v96 + 4; // 0x1e3ec24
        g4 = v95;
        v92 = v97;
        goto lab_0x1e3ec2f;
    }
  lab_0x1e3ec2b:;
    char * v98 = (char *)(v91 + 23); // 0x1e3ec2b
    char v99 = *v98; // 0x1e3ec2b
    *v98 = v99 + 1;
    int32_t v100 = g9;
    v92 = v100;
    goto lab_0x1e3ec2f;
  lab_0x1e3ec2f:;
    char v101 = *(char *)(v92 + 23); // 0x1e3ec2f
    int32_t v102; // 0x1e3ec3e
    int32_t v103; // 0x1e3ec6d
    if (v101 != 0) {
        int32_t * v104 = (int32_t *)(v92 + 28); // 0x1e3ec5f
        int32_t v105 = *v104; // 0x1e3ec5f
        *v104 = v105 - 1;
        int32_t v106 = g3; // 0x1e3ec63
        int32_t v107 = g9; // 0x1e3ec63
        *(int32_t *)(v107 - 4) = v106;
        int32_t v108 = g4; // 0x1e3ec64
        *(int32_t *)(v107 - 8) = v108;
        int32_t v109 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3ec65
        g2 = v109;
        int32_t v110 = g9; // 0x1e3ec6a
        int32_t v111 = v110 + 8; // 0x1e3ec6a
        v103 = v111;
        goto lab_0x1e3ec6d;
    } else {
        int32_t v112 = g4; // 0x1e3ec36
        int32_t v113 = g6; // 0x1e3ec36
        g6 = v112 - 48 + v113;
        int32_t * v114 = (int32_t *)(v92 + 64); // 0x1e3ec3a
        int32_t v115 = *v114; // 0x1e3ec3a
        *v114 = v115 + 1;
        v102 = g9;
        int32_t v116 = *(int32_t *)(v102 + 60); // 0x1e3ec3e
        if (v116 == 0) {
            goto lab_0x1e3ec4e;
        } else {
            int32_t v117 = g8; // 0x1e3ec45
            int32_t v118 = v117 - 1; // 0x1e3ec45
            g8 = v118;
            if (v118 != 0) {
                goto lab_0x1e3ec4e;
            } else {
                char * v119 = (char *)(v102 + 23); // 0x1e3ec48
                char v120 = *v119; // 0x1e3ec48
                *v119 = v120 + 1;
                int32_t v121 = g9;
                v103 = v121;
                goto lab_0x1e3ec6d;
            }
        }
    }
  lab_0x1e3ec6d:;
    char v122 = *(char *)(v103 + 23); // 0x1e3ec6d
    int32_t v123; // 0x1e3ec78
    if (v122 != 0) {
        v123 = v103;
        // break -> 0x1e3ec78
        goto lab_0x1e3ec78;
    }
    v79 = v103;
    goto lab_0x1e3eb99;
  lab_0x1e3ec4e:;
    int32_t * v141 = (int32_t *)(v102 + 28); // 0x1e3ec4e
    int32_t v142 = *v141; // 0x1e3ec4e
    *v141 = v142 + 1;
    int32_t v143 = g3; // 0x1e3ec52
    int32_t v144 = g9; // 0x1e3ec52
    *(int32_t *)(v144 - 4) = v143;
    int32_t v145 = function_1e3eec0((int32_t)&g708); // 0x1e3ec53
    g2 = v145;
    int32_t v146 = g9; // 0x1e3ec58
    int32_t v147 = v146 + 4; // 0x1e3ec58
    g4 = v145;
    v103 = v147;
    goto lab_0x1e3ec6d;
  lab_0x1e3eb12:;
    // 0x1e3eb12
    int32_t v148; // 0x1e3eb12
    char * v149 = (char *)(v148 + 23); // 0x1e3eb12
    char v150 = *v149; // 0x1e3eb12
    *v149 = v150 + 1;
    goto lab_0x1e3eb16;
  lab_0x1e3eb16:;
    int32_t v151 = g9; // 0x1e3eb16
    char v152 = *(char *)(v151 + 23); // 0x1e3eb16
    int32_t v153; // 0x1e3eb2d
    int32_t v154; // 0x1e3eb5c
    if (v152 != 0) {
        int32_t * v155 = (int32_t *)(v151 + 28); // 0x1e3eb4e
        int32_t v156 = *v155; // 0x1e3eb4e
        *v155 = v156 - 1;
        int32_t v157 = g3; // 0x1e3eb52
        int32_t v158 = g9; // 0x1e3eb52
        *(int32_t *)(v158 - 4) = v157;
        int32_t v159 = g4; // 0x1e3eb53
        *(int32_t *)(v158 - 8) = v159;
        int32_t v160 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3eb54
        g2 = v160;
        int32_t v161 = g9; // 0x1e3eb59
        int32_t v162 = v161 + 8; // 0x1e3eb59
        v154 = v162;
        goto lab_0x1e3eb5c;
    } else {
        int32_t v163 = g4; // 0x1e3eb1d
        g2 = v163 - 48;
        int32_t * v164 = (int32_t *)(v151 + 64); // 0x1e3eb20
        int32_t v165 = *v164; // 0x1e3eb20
        *v164 = v165 + 1;
        int32_t v166 = g2; // 0x1e3eb24
        g7 = v166 >> 31;
        int32_t v167 = g9; // 0x1e3eb25
        int32_t * v168 = (int32_t *)(v167 + 48); // 0x1e3eb25
        uint32_t v169 = *v168; // 0x1e3eb25
        uint32_t v170 = v169 + v166; // 0x1e3eb25
        *v168 = v170;
        int32_t v171 = g9; // 0x1e3eb29
        int32_t * v172 = (int32_t *)(v171 + 52); // 0x1e3eb29
        int32_t v173 = *v172; // 0x1e3eb29
        int32_t v174 = g7; // 0x1e3eb29
        *v172 = (int32_t)(v170 < v169) + v173 + v174;
        v153 = g9;
        int32_t v175 = *(int32_t *)(v153 + 60); // 0x1e3eb2d
        if (v175 == 0) {
            goto lab_0x1e3eb3d;
        } else {
            int32_t v176 = g8; // 0x1e3eb34
            int32_t v177 = v176 - 1; // 0x1e3eb34
            g8 = v177;
            if (v177 != 0) {
                goto lab_0x1e3eb3d;
            } else {
                char * v178 = (char *)(v153 + 23); // 0x1e3eb37
                char v179 = *v178; // 0x1e3eb37
                *v178 = v179 + 1;
                int32_t v180 = g9;
                v154 = v180;
                goto lab_0x1e3eb5c;
            }
        }
    }
  lab_0x1e3eb5c:;
    char v181 = *(char *)(v154 + 23); // 0x1e3eb5c
    int32_t v182; // 0x1e3eb7f
    if (v181 != 0) {
        v182 = v154;
        // break -> 0x1e3eb67
        goto lab_0x1e3eb67;
    }
    int32_t v183 = v154; // 0x1e3ea58
    goto lab_0x1e3e9ef;
  lab_0x1e3eb3d:;
    int32_t * v257 = (int32_t *)(v153 + 28); // 0x1e3eb3d
    int32_t v258 = *v257; // 0x1e3eb3d
    *v257 = v258 + 1;
    int32_t v259 = g3; // 0x1e3eb41
    int32_t v260 = g9; // 0x1e3eb41
    *(int32_t *)(v260 - 4) = v259;
    int32_t v261 = function_1e3eec0((int32_t)&g708); // 0x1e3eb42
    g2 = v261;
    int32_t v262 = g9; // 0x1e3eb47
    int32_t v263 = v262 + 4; // 0x1e3eb47
    g4 = v261;
    v154 = v263;
    goto lab_0x1e3eb5c;
  lab_0x1e3e7c0:;
    int32_t v206 = 0; // edx
    unsigned char v264; // 0x1e3e751
    int32_t v265; // 0x1e3e7c0
    g2 = v265 & -256 | (int32_t)(v264 / 8);
    char * v266;
    *v266 = v264;
    int32_t v267 = g2; // 0x1e3e7cb
    int32_t v268 = v206; // 0x1e3e7cb
    int32_t v269 = v268 & -256 | v267 & 255; // 0x1e3e7cb
    g7 = v269;
    int32_t v270 = g5; // 0x1e3e7cd
    unsigned char v271 = (char)v270 & 7; // 0x1e3e7cd
    g5 = (int32_t)v271 | v270 & -256;
    int32_t v272 = v267 & -256; // 0x1e3e7d0
    int32_t v273 = v272 | 1; // 0x1e3e7d0
    int32_t v274;
    int32_t v275; // 0x1e3e7d4
    if (v271 != 0) {
        int32_t v276 = (int32_t)(1 << v271) | v272; // 0x1e3e7d2
        v274 = v276;
        v275 = v276;
    } else {
        v274 = v273;
        v275 = v273;
    }
    // bb205
    g2 = v274;
    int32_t v277 = g9; // 0x1e3e7d4
    char * v278 = (char *)(v269 + 80 + v277); // 0x1e3e7d4
    char v279 = *v278; // 0x1e3e7d4
    *v278 = v279 | (char)v275;
    goto lab_0x1e3e7d8;
  lab_0x1e3e7d8:;
    int32_t v280 = g9; // 0x1e3e7d8
    int32_t v281 = *(int32_t *)(v280 + 40); // 0x1e3e7d8
    g2 = v281;
    char v282 = *(char *)v281; // 0x1e3e7dc
    int32_t v283; // 0x1e3e7f9
    if (v282 == 93) {
        v283 = v280;
        // break -> 0x1e3e7e5
        goto lab_0x1e3e7e5;
    }
    int32_t v284 = v280; // 0x1e3e74d
    goto lab_0x1e3e749;
  lab_0x1e3e39c:
    // 0x1e3e39c
    v7 = g9;
    if (*(char *)(v7 + 23) != 0) {
        // break -> 0x1e3e3a7
        goto lab_0x1e3e3a7;
    }
    v10 = v7;
    goto lab_0x1e3e2cf;
  lab_0x1e3e392:;
    char * v332 = (char *)(v8 + 36); // 0x1e3e392
    *v332 = *v332 + 1;
    goto lab_0x1e3e39c;
  lab_0x1e3e398:;
    char * v333 = (char *)(v9 + 23); // 0x1e3e398
    *v333 = *v333 + 1;
    goto lab_0x1e3e39c;
  lab_0x1e3ed3b:;
    int32_t * v334 = (int32_t *)(g9 + 472);
    if (g4 == -1) {
        int32_t v335 = *v334; // 0x1e3ed44
        g5 = v335;
        if (*(char *)v335 != 37) {
            v3 = g9;
            goto lab_0x1e3ed78_7;
        }
        // 0x1e3ed50
        if (*(char *)(v335 + 1) != 110) {
            v3 = g9;
            goto lab_0x1e3ed78_7;
        }
    }
    int32_t v336 = *v334; // 0x1e3e20a
    g5 = v336;
    unsigned char v337 = *(char *)v336; // 0x1e3e211
    int32_t v338 = v337; // 0x1e3e211
    g2 = g2 & -256 | v338;
    if (v337 == 0) {
        v3 = g9;
        goto lab_0x1e3ed78_7;
    }
    v6 = v338;
    v3 = g9;
    goto lab_0x1e3e21b;
  lab_0x1e3e3f6:;
    int32_t v339 = g9; // 0x1e3e3f6
    int32_t v340 = *(int32_t *)(v339 + 472); // 0x1e3e3f6
    g5 = v340;
    char v341 = *(char *)v340; // 0x1e3e3fd
    int32_t v342 = g2; // 0x1e3e3fd
    int32_t v343 = v341 | 32; // 0x1e3e401
    g2 = v342 & -256 | v343;
    g5 = v343;
    *(int32_t *)(v339 + 32) = v343;
    int32_t v344 = g5; // 0x1e3e409
    int32_t v345;
    int32_t v346; // 0x1e3e435
    int32_t v347; // 0x1e3e474
    if (v344 == 110) {
        int32_t v348 = g9;
        v347 = v348;
        goto lab_0x1e3e437;
    } else {
        if (v344 == 99) {
            goto lab_0x1e3e428;
        } else {
            if (v344 == 123) {
                goto lab_0x1e3e428;
            } else {
                int32_t v349 = g9; // 0x1e3e418
                g2 = v349 + 28;
                int32_t v350 = g3; // 0x1e3e41c
                *(int32_t *)(v349 - 4) = v350;
                int32_t v351 = g2; // 0x1e3e41d
                *(int32_t *)(v349 - 8) = v351;
                int32_t v352 = function_1e3ef10((int32_t)&g708, (int32_t)&g708); // 0x1e3e41e
                g2 = v352;
                int32_t v353 = g9; // 0x1e3e423
                int32_t v354 = v353 + 8; // 0x1e3e423
                v346 = v352;
                v345 = v354;
                // 0x1e3e435
                g4 = v346;
                v347 = v345;
                goto lab_0x1e3e437;
            }
        }
    }
  lab_0x1e3e437:;
    int32_t * v355 = (int32_t *)(v347 + 60); // 0x1e3e437
    int32_t v356 = *v355; // 0x1e3e437
    if (v356 != 0) {
        int32_t v357 = g8; // 0x1e3e43e
        if (v357 == 0) {
            v11 = v347;
            // break -> 0x1e3ed6a
            goto lab_0x1e3ed6a_2;
        }
    }
    int32_t * v358 = (int32_t *)(v347 + 32); // 0x1e3e446
    int32_t v359 = *v358; // 0x1e3e446
    g5 = v359 - 99;
    g2 = 0;
    unsigned char v360 = *(char *)(v359 + (int32_t)&g16 - 99); // 0x1e3e454
    int32_t v361 = v360; // 0x1e3e454
    g2 = v361;
    g707 = v361;
    int32_t v362; // 0x1e3e4e1
    int32_t v363; // 0x1e3e70c
    int32_t v364; // 0x1e3ecc5
    int32_t v365; // 0x1e3e4d2
    int32_t v366; // 0x1e3e51325
    switch (v360) {
        case 0: {
            int32_t v367 = *v355; // 0x1e3e493
            int32_t v368; // 0x1e3e4a6
            if (v367 == 0) {
                int32_t v369 = g8; // 0x1e3e49a
                g8 = v369 + 1;
                int32_t v370 = *v355; // 0x1e3e49b
                *v355 = v370 + 1;
                int32_t v371 = g9;
                v368 = v371;
            } else {
                v368 = v347;
            }
            char v372 = *(char *)(v368 + 36); // 0x1e3e49f
            int32_t v373; // 0x1e3e4ab
            if (v372 > 0) {
                // 0x1e3e4a6
                *(char *)(v368 + 19) = 1;
                int32_t v374 = g9;
                v373 = v374;
            } else {
                v373 = v368;
            }
            // 0x1e3e4ab
            *(int32_t *)(v373 + 40) = (int32_t)&g433;
            // 0x1e3e70c
            v363 = g9;
            *(char *)(v363 + 56) = -1;
            goto lab_0x1e3e711;
        }
        case 1: {
            goto lab_0x1e3e6bb;
        }
        case 2: {
            int32_t v375 = v347 + 112; // 0x1e3e4b8
            g6 = v375;
            int32_t v376 = g4; // 0x1e3e4bc
            if (v376 != 45) {
                if (v376 != 43) {
                    v366 = v376;
                    v362 = v347;
                    goto lab_0x1e3e4e1;
                } else {
                    v365 = v347;
                    goto lab_0x1e3e4d1;
                }
            } else {
                // 0x1e3e4c1
                *(char *)v375 = 45;
                int32_t v377 = g9; // 0x1e3e4c6
                g6 = v377 + 113;
                v365 = v377;
                goto lab_0x1e3e4d1;
            }
        }
        case 3: {
            // 0x1e3e687
            *v358 = 100;
            goto lab_0x1e3e68f;
        }
        case 4: {
            char v378 = *(char *)(v347 + 21); // 0x1e3e6a2
            int32_t v379 = *(int32_t *)(v347 + 28); // 0x1e3e6a7
            g6 = v379;
            if (v378 != 0) {
                goto lab_0x1e3ecd2;
            } else {
                v364 = v347;
                goto lab_0x1e3eca6;
            }
        }
        case 5: {
            goto lab_0x1e3e6bb;
        }
        case 6: {
            // 0x1e3e6b6
            *(char *)(v347 + 20) = 1;
            goto lab_0x1e3e6bb;
        }
        case 7: {
            char v380 = *(char *)(v347 + 36); // 0x1e3e6ce
            int32_t v381; // 0x1e3e6da
            if (v380 > 0) {
                // 0x1e3e6d5
                *(char *)(v347 + 19) = 1;
                int32_t v382 = g9;
                v381 = v382;
            } else {
                v381 = v347;
            }
            // 0x1e3e6da
            *(int32_t *)(v381 + 40) = (int32_t)" \t-\r]";
            // 0x1e3e70c
            v363 = g9;
            *(char *)(v363 + 56) = -1;
            goto lab_0x1e3e711;
        }
        case 8: {
            goto lab_0x1e3e6bb;
        }
        case 9: {
            goto lab_0x1e3e68f;
        }
        case 10: {
            char v383 = *(char *)(v347 + 36); // 0x1e3e6e4
            int32_t v384; // 0x1e3e6f0
            if (v383 > 0) {
                // 0x1e3e6eb
                *(char *)(v347 + 19) = 1;
                int32_t v385 = g9;
                v384 = v385;
            } else {
                v384 = v347;
            }
            int32_t * v386 = (int32_t *)(v384 + 472); // 0x1e3e6f0
            int32_t v387 = *v386; // 0x1e3e6f0
            *v386 = v387 + 1;
            int32_t v388 = g9; // 0x1e3e6f7
            int32_t v389 = *(int32_t *)(v388 + 472); // 0x1e3e6f7
            g5 = v389;
            *(int32_t *)(v388 + 40) = v389;
            int32_t v390 = g5; // 0x1e3e702
            char v391 = *(char *)v390; // 0x1e3e702
            if (v391 != 94) {
                goto lab_0x1e3e711;
            } else {
                int32_t v392 = v390 + 1; // 0x1e3e707
                g5 = v392;
                int32_t v393 = g9; // 0x1e3e708
                *(int32_t *)(v393 + 40) = v392;
                // 0x1e3e70c
                v363 = g9;
                *(char *)(v363 + 56) = -1;
                goto lab_0x1e3e711;
            }
        }
        default: {
            // 0x1e3e461
            g2 = 0;
            int32_t v394 = *(int32_t *)(v347 + 472); // 0x1e3e463
            g5 = v394;
            unsigned char v395 = *(char *)v394; // 0x1e3e46a
            int32_t v396 = v395; // 0x1e3e46a
            g2 = v396;
            int32_t v397 = g4; // 0x1e3e46c
            if (v396 != v397) {
                v11 = v347;
                // break -> 0x1e3ed6a
                break;
            }
            char * v398 = (char *)(v347 + 17); // 0x1e3e474
            char v399 = *v398; // 0x1e3e474
            *v398 = v399 - 1;
            int32_t v400 = g9; // 0x1e3e478
            char v401 = *(char *)(v400 + 21); // 0x1e3e478
            if (v401 == 0) {
                int32_t v402 = *(int32_t *)(v400 + 76); // 0x1e3e483
                g2 = v402;
                *(int32_t *)(v400 + 476) = v402;
            }
            goto lab_0x1e3ecd2;
        }
    }
  lab_0x1e3e428:;
    int32_t v403 = g9; // 0x1e3e428
    int32_t * v404 = (int32_t *)(v403 + 28); // 0x1e3e428
    int32_t v405 = *v404; // 0x1e3e428
    *v404 = v405 + 1;
    int32_t v406 = g3; // 0x1e3e42c
    int32_t v407 = g9; // 0x1e3e42c
    *(int32_t *)(v407 - 4) = v406;
    int32_t v408 = function_1e3eec0((int32_t)&g708); // 0x1e3e42d
    g2 = v408;
    int32_t v409 = g9; // 0x1e3e432
    int32_t v410 = v409 + 4; // 0x1e3e432
    v346 = v408;
    v345 = v410;
    // 0x1e3e435
    g4 = v346;
    v347 = v345;
    goto lab_0x1e3e437;
  lab_0x1e3e6bb:;
    int32_t v411 = g4; // 0x1e3e6bb
    if (v411 != 45) {
        if (v411 != 43) {
            goto lab_0x1e3e9d9;
        } else {
            goto lab_0x1e3e929;
        }
    } else {
        int32_t v412 = g9; // 0x1e3e6c4
        *(char *)(v412 + 18) = 1;
        goto lab_0x1e3e929;
    }
  lab_0x1e3e68f:;
    int32_t v413 = g4; // 0x1e3e68f
    int32_t v414; // 0x1e3e976
    if (v413 != 45) {
        if (v413 != 43) {
            v414 = v413;
            goto lab_0x1e3e976;
        } else {
            goto lab_0x1e3e956;
        }
    } else {
        int32_t v415 = g9; // 0x1e3e698
        *(char *)(v415 + 18) = 1;
        goto lab_0x1e3e956;
    }
  lab_0x1e3ecd2:;
    int32_t v416 = g9; // 0x1e3ecd2
    char * v417 = (char *)(v416 + 17); // 0x1e3ecd2
    char v418 = *v417; // 0x1e3ecd2
    *v417 = v418 + 1;
    int32_t v419 = g9; // 0x1e3ecd6
    int32_t * v420 = (int32_t *)(v419 + 472); // 0x1e3ecd6
    int32_t v421 = *v420; // 0x1e3ecd6
    *v420 = v421 + 1;
    goto lab_0x1e3ed3b;
  lab_0x1e3eca6:;
    int32_t v422 = *(int32_t *)(v364 + 40); // 0x1e3eca6
    if (v422 == 0) {
        char v423 = *(char *)(v364 + 20); // 0x1e3ecc0
        int32_t v424 = *(int32_t *)(v364 + 44); // 0x1e3ecc5
        g5 = v424;
        int32_t v425 = g6; // 0x1e3eccf
        if (v423 == 0) {
            // 0x1e3eccf
            *(int16_t *)v424 = (int16_t)v425;
        } else {
            // 0x1e3eccb
            *(int32_t *)v424 = v425;
        }
    } else {
        int32_t v426 = *(int32_t *)(v364 + 44); // 0x1e3ecad
        g7 = v426;
        int32_t v427 = *(int32_t *)(v364 + 48); // 0x1e3ecb1
        g2 = v427;
        int32_t v428 = *(int32_t *)(v364 + 52); // 0x1e3ecb5
        g5 = v428;
        *(int32_t *)v426 = v427;
        int32_t v429 = g5; // 0x1e3ecbb
        int32_t v430 = g7; // 0x1e3ecbb
        *(int32_t *)(v430 + 4) = v429;
    }
    goto lab_0x1e3ecd2;
  lab_0x1e3e711:;
    int32_t v431 = g9; // 0x1e3e711
    g2 = 0;
    g5 = 8;
    __asm_rep_stosd_memset((char *)(v431 + 80), 0, 8);
    g5 = 0;
    int32_t v432 = g9; // 0x1e3e71e
    int32_t v433 = *(int32_t *)(v432 + 32); // 0x1e3e71e
    int32_t v434; // 0x1e3e73c
    if (v433 == 123) {
        int32_t v435 = *(int32_t *)(v432 + 40); // 0x1e3e725
        g2 = v435;
        char v436 = *(char *)v435; // 0x1e3e729
        if (v436 == 93) {
            // 0x1e3e72e
            *(char *)(v432 + 22) = 93;
            int32_t v437 = g9; // 0x1e3e733
            *(char *)(v437 + 91) = 32;
            int32_t v438 = g9; // 0x1e3e738
            int32_t * v439 = (int32_t *)(v438 + 40); // 0x1e3e738
            int32_t v440 = *v439; // 0x1e3e738
            *v439 = v440 + 1;
            int32_t v441 = g9;
            v434 = v441;
        } else {
            v434 = v432;
        }
    } else {
        v434 = v432;
    }
    int32_t v442 = *(int32_t *)(v434 + 40); // 0x1e3e73c
    g2 = v442;
    char v443 = *(char *)v442; // 0x1e3e740
    if (v443 != 93) {
        v284 = v434;
        while (true) {
          lab_0x1e3e749:;
            int32_t * v285 = (int32_t *)(v284 + 40); // 0x1e3e749
            int32_t v286 = *v285; // 0x1e3e749
            g2 = v286;
            int32_t v287 = *v285; // 0x1e3e74d
            *v285 = v287 + 1;
            int32_t v288 = g2; // 0x1e3e751
            v264 = *(char *)v288;
            int32_t v289 = g5; // 0x1e3e751
            g5 = v289 & -256 | (int32_t)v264;
            int32_t v290 = g9;
            v266 = (char *)(v290 + 22);
            if (v264 != 45) {
                v265 = v288;
                goto lab_0x1e3e7c0;
            } else {
                char v291 = *v266; // 0x1e3e758
                if (v291 == 0) {
                    v265 = v288;
                    goto lab_0x1e3e7c0;
                } else {
                    int32_t * v292 = (int32_t *)(v290 + 40); // 0x1e3e75f
                    int32_t v293 = *v292; // 0x1e3e75f
                    g2 = v293;
                    unsigned char v294 = *(char *)v293; // 0x1e3e763
                    int32_t v295 = (int32_t)v294 | v293 & -256; // 0x1e3e763
                    g2 = v295;
                    if (v294 == 93) {
                        v265 = v295;
                        goto lab_0x1e3e7c0;
                    } else {
                        int32_t v296 = *v292; // 0x1e3e769
                        *v292 = v296 + 1;
                        int32_t v297 = g9; // 0x1e3e76d
                        char * v298 = (char *)(v297 + 22); // 0x1e3e76d
                        unsigned char v299 = *v298; // 0x1e3e76d
                        int32_t v300 = g2; // 0x1e3e76d
                        unsigned char v301 = (char)v300; // 0x1e3e76d
                        if (v299 >= v301) {
                            unsigned char v302 = *v298; // 0x1e3e779
                            int32_t v303 = g5; // 0x1e3e779
                            g5 = v303 & -256 | (int32_t)v302;
                            *(char *)(v297 + 68) = v302;
                            int32_t v304 = g2; // 0x1e3e781
                            int32_t v305 = g9; // 0x1e3e781
                            *(char *)(v305 + 22) = (char)v304;
                        } else {
                            // 0x1e3e773
                            *(char *)(v297 + 68) = v301;
                        }
                        int32_t v306 = g9; // 0x1e3e785
                        unsigned char v307 = *(char *)(v306 + 22); // 0x1e3e785
                        int32_t v308 = g2; // 0x1e3e785
                        int32_t v309 = v308 & -256 | (int32_t)v307; // 0x1e3e785
                        g2 = v309;
                        unsigned char v310 = *(char *)(v306 + 68); // 0x1e3e789
                        int32_t v311; // 0x1e3e7b9
                        if (v307 <= v310) {
                            int32_t v312 = v306; // 0x1e3e793
                            int32_t v313 = v309; // 0x1e3e78f
                            while (true) {
                                int32_t v314 = g5; // 0x1e3e78f
                                g5 = v314 & -256 | v313 & 255;
                                int32_t v315 = g7; // 0x1e3e791
                                g7 = v315 & -256 | 1;
                                *(int32_t *)(v312 + 36) = 0;
                                int32_t v316 = g5; // 0x1e3e79b
                                unsigned char v317 = (char)v316 / 8; // 0x1e3e79b
                                g5 = (int32_t)v317 | v316 & -256;
                                int32_t v318 = g9; // 0x1e3e79e
                                *(char *)(v318 + 36) = v317;
                                int32_t v319 = g2; // 0x1e3e7a2
                                int32_t v320 = g5; // 0x1e3e7a2
                                g5 = v320 & -256 | v319 & 7;
                                g2 = v319 + 1 & 255 | v319 & -256;
                                int32_t v321 = g7; // 0x1e3e7a9
                                unsigned char v322 = (char)v319 & 7; // 0x1e3e7a9
                                int32_t v323; // 0x1e3e7af
                                if (v322 != 0) {
                                    int32_t v324 = (int32_t)((char)v321 << v322) | v321 & -256; // 0x1e3e7a9
                                    g7 = v324;
                                    v323 = v324;
                                } else {
                                    v323 = v321;
                                }
                                int32_t v325 = g9; // 0x1e3e7ab
                                int32_t v326 = *(int32_t *)(v325 + 36); // 0x1e3e7ab
                                g5 = v326;
                                char * v327 = (char *)(v325 + 80 + v326); // 0x1e3e7af
                                char v328 = *v327; // 0x1e3e7af
                                *v327 = v328 | (char)v323;
                                int32_t v329 = g9; // 0x1e3e7b3
                                unsigned char v330 = *(char *)(v329 + 68); // 0x1e3e7b3
                                int32_t v331 = g2; // 0x1e3e7b3
                                if (v330 < (char)v331) {
                                    v311 = v329;
                                    // break -> 0x1e3e7b9
                                    break;
                                }
                                v312 = v329;
                                v313 = v331;
                            }
                        } else {
                            v311 = v306;
                        }
                        // 0x1e3e7b9
                        *(char *)(v311 + 22) = 0;
                        goto lab_0x1e3e7d8;
                    }
                }
            }
        }
    } else {
        v283 = v434;
    }
  lab_0x1e3e7e5:;
    int32_t v444 = *(int32_t *)(v283 + 40); // 0x1e3e7e5
    g2 = v444;
    char v445 = *(char *)v444; // 0x1e3e7e9
    if (v445 == 0) {
        v3 = v283;
        goto lab_0x1e3ed78_7;
    }
    int32_t v446 = *(int32_t *)(v283 + 32); // 0x1e3e7f2
    int32_t v447; // 0x1e3e800
    if (v446 == 123) {
        // 0x1e3e7f9
        *(int32_t *)(v283 + 472) = v444;
        int32_t v448 = g9;
        v447 = v448;
    } else {
        v447 = v283;
    }
    int32_t v449 = *(int32_t *)(v447 + 44); // 0x1e3e800
    g6 = v449;
    int32_t v450 = g3; // 0x1e3e804
    *(int32_t *)(v447 - 4) = v450;
    int32_t * v451 = (int32_t *)(v447 + 28); // 0x1e3e805
    int32_t v452 = *v451; // 0x1e3e805
    *v451 = v452 - 1;
    int32_t v453 = g4; // 0x1e3e809
    int32_t v454 = g9; // 0x1e3e809
    *(int32_t *)(v454 - 4) = v453;
    int32_t v455 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3e80a
    g2 = v455;
    int32_t v456 = g9; // 0x1e3e80f
    int32_t v457 = v456 + 8; // 0x1e3e80f
    int32_t v458 = v457; // 0x1e3e824
    int32_t v459; // 0x1e3e82e
    int32_t v460; // 0x1e3e8f4
    while (true) {
        int32_t v461 = *(int32_t *)(v458 + 60); // 0x1e3e812
        if (v461 != 0) {
            int32_t v462 = g8; // 0x1e3e819
            g2 = v462;
            g8 = v462 - 1;
            if (v462 == 0) {
                v460 = v458;
                goto lab_0x1e3e8df;
            }
        }
        int32_t * v463 = (int32_t *)(v458 + 28); // 0x1e3e824
        int32_t v464 = *v463; // 0x1e3e824
        *v463 = v464 + 1;
        int32_t v465 = g3; // 0x1e3e828
        int32_t v466 = g9; // 0x1e3e828
        *(int32_t *)(v466 - 4) = v465;
        int32_t v467 = function_1e3eec0((int32_t)&g708); // 0x1e3e829
        g2 = v467;
        v459 = g9;
        int32_t v468 = v459 + 4; // 0x1e3e82e
        g4 = v467;
        if (v467 == -1) {
            // break -> 0x1e3e8d1
            break;
        }
        int32_t v469 = v467 / 8; // 0x1e3e83c
        g2 = v469;
        g7 = 1;
        int32_t v470 = v467 & 255; // 0x1e3e844
        int32_t v471 = g5; // 0x1e3e844
        int32_t v472 = v471 & -256; // 0x1e3e844
        g5 = v472 | v470;
        unsigned char v473 = *(char *)(v469 + 84 + v459); // 0x1e3e846
        int32_t v474 = v469 & -256; // 0x1e3e846
        g2 = (int32_t)v473 | v474;
        char v475 = *(char *)(v459 + 60); // 0x1e3e84a
        int32_t v476 = (int32_t)(v475 ^ v473) | v474; // 0x1e3e84a
        g2 = v476;
        char v477 = v467; // 0x1e3e84e
        unsigned char v478 = v477 & 7; // 0x1e3e84e
        uint32_t v479 = (int32_t)v478; // 0x1e3e84e
        g5 = v472 | v479;
        int32_t v480; // 0x1e3e856
        if (v478 != 0) {
            int32_t v481 = 1 << v479; // 0x1e3e854
            g7 = v481;
            v480 = v481;
        } else {
            v480 = 1;
        }
        if ((v480 & v476) == 0) {
            // break -> 0x1e3e8d1
            break;
        }
        char v482 = *(char *)(v459 + 25); // 0x1e3e85a
        if (v482 != 0) {
            int32_t v483 = g6; // 0x1e3e8cb
            g6 = v483 + 1;
            v458 = v468;
            // continue -> 0x1e3e812
            continue;
        }
        char v484 = *(char *)(v459 + 23); // 0x1e3e861
        if (v484 == 0) {
            int32_t * v485 = (int32_t *)(v459 + 48); // 0x1e3e8bc
            int32_t v486 = *v485; // 0x1e3e8bc
            g5 = v486;
            int32_t v487 = *v485; // 0x1e3e8c0
            *v485 = v487 + 1;
            int32_t v488 = g4; // 0x1e3e8c4
            int32_t v489 = g5; // 0x1e3e8c4
            *(char *)v489 = (char)v488;
            int32_t v490 = g9;
            v458 = v490;
            // continue -> 0x1e3e812
            continue;
        }
        int16_t * v491 = g122; // 0x1e3e86a
        g5 = (int32_t)v491;
        g2 = v470;
        *(char *)(v459 + 30) = v477;
        int32_t v492 = g5; // 0x1e3e876
        int32_t v493 = g2; // 0x1e3e876
        unsigned char v494 = *(char *)(v492 + 1 + 2 * v493); // 0x1e3e876
        int32_t v495 = g9;
        int32_t v496; // 0x1e3e893
        if (v494 <= 255) {
            int32_t * v497 = (int32_t *)(v495 + 28); // 0x1e3e87d
            int32_t v498 = *v497; // 0x1e3e87d
            *v497 = v498 + 1;
            int32_t v499 = g3; // 0x1e3e881
            int32_t v500 = g9; // 0x1e3e881
            *(int32_t *)(v500 - 4) = v499;
            int32_t v501 = function_1e3eec0((int32_t)&g708); // 0x1e3e882
            g2 = v501;
            int32_t v502 = g9; // 0x1e3e887
            *(char *)(v502 + 31) = (char)v501;
            int32_t v503 = g9; // 0x1e3e88b
            int32_t v504 = v503 + 4; // 0x1e3e88b
            v496 = v504;
        } else {
            v496 = v495;
        }
        int32_t v505 = g442; // 0x1e3e88e
        g2 = v505;
        g5 = v496 + 26;
        v206 = v496 + 24;
        *(int32_t *)(v496 - 4) = v505;
        int32_t v506 = g5; // 0x1e3e89c
        *(int32_t *)(v496 - 8) = v506;
        int32_t v507 = v206; // 0x1e3e89d
        *(int32_t *)(v496 - 12) = v507;
        int32_t v508 = function_1e415b0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3e89e
        g2 = v508;
        int32_t v509 = g9; // 0x1e3e8a3
        uint16_t v510 = *(int16_t *)(v509 + 36); // 0x1e3e8a3
        int32_t v511 = g7; // 0x1e3e8a3
        g7 = v511 & -0x10000 | (int32_t)v510;
        int32_t * v512 = (int32_t *)(v509 + 56); // 0x1e3e8a8
        int32_t v513 = *v512; // 0x1e3e8a8
        g5 = v513;
        int32_t v514 = *v512; // 0x1e3e8ac
        *v512 = v514 + 2;
        int32_t v515 = g7; // 0x1e3e8b1
        int32_t v516 = g5; // 0x1e3e8b1
        *(int16_t *)v516 = (int16_t)v515;
        int32_t v517 = g9; // 0x1e3e8b4
        int32_t v518 = v517 + 12; // 0x1e3e8b4
        v458 = v518;
    }
    int32_t * v519 = (int32_t *)(v459 + 32); // 0x1e3e8d1
    int32_t v520 = *v519; // 0x1e3e8d1
    *v519 = v520 - 1;
    int32_t v521 = g3; // 0x1e3e8d5
    int32_t v522 = g9; // 0x1e3e8d5
    *(int32_t *)(v522 - 4) = v521;
    int32_t v523 = g4; // 0x1e3e8d6
    *(int32_t *)(v522 - 8) = v523;
    int32_t v524 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3e8d7
    g2 = v524;
    int32_t v525 = g9; // 0x1e3e8dc
    int32_t v526 = v525 + 8; // 0x1e3e8dc
    v460 = v526;
  lab_0x1e3e8df:;
    int32_t v527 = g6; // 0x1e3e8df
    int32_t v528 = *(int32_t *)(v460 + 44); // 0x1e3e8df
    if (v527 == v528) {
        v3 = v460;
        goto lab_0x1e3ed78_7;
    }
    char v529 = *(char *)(v460 + 21); // 0x1e3e8e9
    if (v529 == 0) {
        int32_t * v530 = (int32_t *)(v460 + 72); // 0x1e3e8f4
        int32_t v531 = *v530; // 0x1e3e8f4
        *v530 = v531 + 1;
        int32_t v532 = g9; // 0x1e3e8f8
        int32_t v533 = *(int32_t *)(v532 + 32); // 0x1e3e8f8
        if (v533 != 99) {
            char v534 = *(char *)(v532 + 19); // 0x1e3e903
            int32_t v535 = *(int32_t *)(v532 + 44); // 0x1e3e908
            g5 = v535;
            if (v534 == 0) {
                // 0x1e3e918
                *(char *)v535 = 0;
            } else {
                // 0x1e3e90e
                *(int16_t *)v535 = 0;
            }
        }
    }
    goto lab_0x1e3ecd2;
  lab_0x1e3e9d9:;
    int32_t v536 = g9; // 0x1e3e9d9
    int32_t v537 = *(int32_t *)(v536 + 40); // 0x1e3e9d9
    char v538 = *(char *)(v536 + 23); // 0x1e3eb8e
    int32_t v539; // 0x1e3ec88
    if (v537 == 0) {
        if (v538 == 0) {
            v79 = v536;
            while (true) {
              lab_0x1e3eb99:;
                int32_t v124 = *(int32_t *)(v79 + 32); // 0x1e3eb99
                if (v124 == 120) {
                    goto lab_0x1e3ebed;
                } else {
                    if (v124 == 112) {
                        goto lab_0x1e3ebed;
                    } else {
                        int32_t v125 = g442; // 0x1e3eba7
                        int32_t v126; // 0x1e3ebcc
                        int32_t v127; // 0x1e3ebd0
                        if (v125 > 1) {
                            // 0x1e3ebb0
                            *(int32_t *)(v79 - 4) = 4;
                            int32_t v128 = g4; // 0x1e3ebb2
                            *(int32_t *)(v79 - 8) = v128;
                            int32_t v129 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3ebb3
                            g2 = v129;
                            int32_t v130 = g9; // 0x1e3ebb8
                            int32_t v131 = v130 + 8; // 0x1e3ebb8
                            v127 = v131;
                            v126 = v129;
                        } else {
                            int16_t * v132 = g122; // 0x1e3ebbd
                            int32_t v133 = (int32_t)v132; // 0x1e3ebbd
                            g5 = v133;
                            g2 = 0;
                            int32_t v134 = g4; // 0x1e3ebc5
                            uint16_t v135 = *(int16_t *)(2 * v134 + v133); // 0x1e3ebc5
                            int32_t v136 = (int32_t)v135 & 4; // 0x1e3ebc9
                            g2 = v136;
                            v127 = v79;
                            v126 = v136;
                        }
                        if (v126 == 0) {
                            v91 = v127;
                            goto lab_0x1e3ec2b;
                        } else {
                            int32_t v137 = *(int32_t *)(v127 + 32); // 0x1e3ebd0
                            if (v137 != 111) {
                                int32_t v138 = g6; // 0x1e3ebe1
                                g2 = 5 * v138;
                                g6 = 10 * v138;
                                v92 = v127;
                                goto lab_0x1e3ec2f;
                            } else {
                                int32_t v139 = g4; // 0x1e3ebd7
                                if ((char)v139 < 56) {
                                    int32_t v140 = g6; // 0x1e3ebdc
                                    g6 = 8 * v140;
                                    v92 = v127;
                                    goto lab_0x1e3ec2f;
                                } else {
                                    v91 = v127;
                                    goto lab_0x1e3ec2b;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            v123 = v536;
        }
      lab_0x1e3ec78:;
        char v540 = *(char *)(v123 + 18); // 0x1e3ec78
        if (v540 != 0) {
            int32_t v541 = g6; // 0x1e3ec7f
            g6 = -v541;
            v539 = v123;
        } else {
            v539 = v123;
        }
    } else {
        if (v538 == 0) {
            v183 = v536;
            while (true) {
              lab_0x1e3e9ef:;
                int32_t v184 = *(int32_t *)(v183 + 32); // 0x1e3e9ef
                int32_t v185 = g442; // 0x1e3ea4f
                if (v184 != 120) {
                    int32_t v186; // 0x1e3ea74
                    int32_t v187; // 0x1e3eaa5
                    if (v185 > 1) {
                        // 0x1e3ea58
                        *(int32_t *)(v183 - 4) = 4;
                        int32_t v188 = g4; // 0x1e3ea5a
                        *(int32_t *)(v183 - 8) = v188;
                        int32_t v189 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3ea5b
                        g2 = v189;
                        int32_t v190 = g9; // 0x1e3ea60
                        int32_t v191 = v190 + 8; // 0x1e3ea60
                        v187 = v191;
                        v186 = v189;
                    } else {
                        int16_t * v192 = g122; // 0x1e3ea65
                        int32_t v193 = (int32_t)v192; // 0x1e3ea65
                        g5 = v193;
                        g2 = 0;
                        int32_t v194 = g4; // 0x1e3ea6d
                        uint16_t v195 = *(int16_t *)(2 * v194 + v193); // 0x1e3ea6d
                        int32_t v196 = (int32_t)v195 & 4; // 0x1e3ea71
                        g2 = v196;
                        v187 = v183;
                        v186 = v196;
                    }
                    if (v186 == 0) {
                        v148 = v187;
                        goto lab_0x1e3eb12;
                    } else {
                        int32_t v197 = *(int32_t *)(v187 + 32); // 0x1e3ea7c
                        if (v197 != 111) {
                            // 0x1e3eaa5
                            *(int32_t *)(v187 + 56) = 0;
                            g5 = 1;
                            int32_t v198 = g9; // 0x1e3eab2
                            int32_t v199 = *(int32_t *)(v198 + 56); // 0x1e3eab2
                            g2 = v199;
                            *(int32_t *)(v198 + 68) = 1;
                            int32_t v200 = g9; // 0x1e3eabe
                            *(int32_t *)(v200 + 36) = 0;
                            int32_t v201 = g2; // 0x1e3eac6
                            uint32_t v202 = g5; // 0x1e3eac6
                            int32_t v203 = v202 / 0x80000000 | 2 * v201; // 0x1e3eac6
                            g2 = v203;
                            g5 = 2 * v202;
                            int32_t v204 = g9; // 0x1e3eacc
                            int32_t v205 = *(int32_t *)(v204 + 36); // 0x1e3eacc
                            v206 = v205;
                            *(int32_t *)(v204 + 56) = v203;
                            int32_t v207 = g9; // 0x1e3ead4
                            uint32_t v208 = *(int32_t *)(v207 + 68); // 0x1e3ead4
                            int32_t v209 = v206; // 0x1e3ead8
                            int32_t v210 = 8 * v209 | v208 / 0x20000000; // 0x1e3ead8
                            v206 = v210;
                            g2 = 8 * v208;
                            *(int32_t *)(v207 + 36) = v210;
                            uint32_t v211 = g5; // 0x1e3eae3
                            int32_t v212 = g2; // 0x1e3eae3
                            int32_t v213 = v212 + v211; // 0x1e3eae3
                            g5 = v213;
                            int32_t v214 = g9; // 0x1e3eae5
                            *(int32_t *)(v214 + 68) = v212;
                            int32_t v215 = g9; // 0x1e3eae9
                            int32_t * v216 = (int32_t *)(v215 + 56); // 0x1e3eae9
                            int32_t v217 = *v216; // 0x1e3eae9
                            int32_t v218 = v206; // 0x1e3eaed
                            int32_t v219 = v218 + v217 + (int32_t)(v213 < v211); // 0x1e3eaed
                            g2 = v219;
                            int32_t v220 = *(int32_t *)(v215 + 48); // 0x1e3eaef
                            g7 = v220;
                            *v216 = v219;
                            int32_t v221 = g9; // 0x1e3eaf7
                            int32_t v222 = *(int32_t *)(v221 + 52); // 0x1e3eaf7
                            g2 = v222;
                            *(int32_t *)(v221 - 4) = v222;
                            int32_t v223 = g7; // 0x1e3eafc
                            *(int32_t *)(v221 - 8) = v223;
                            int32_t v224 = *(int32_t *)(v221 + 56); // 0x1e3eafd
                            g2 = v224;
                            *(int32_t *)(v221 - 12) = v224;
                            int32_t v225 = g5; // 0x1e3eb02
                            *(int32_t *)(v221 - 16) = v225;
                            int64_t v226 = __allmul((int64_t)&g708, (int64_t)&g708); // 0x1e3eb03
                            int32_t v227 = v226; // 0x1e3eb03
                            g2 = v227;
                            int32_t v228 = g9; // 0x1e3eb08
                            *(int32_t *)(v228 + 48) = v227;
                            int32_t v229 = g7; // 0x1e3eb0c
                            int32_t v230 = g9; // 0x1e3eb0c
                            *(int32_t *)(v230 + 52) = v229;
                            goto lab_0x1e3eb16;
                        } else {
                            int32_t v231 = g4; // 0x1e3ea83
                            if ((char)v231 < 56) {
                                int32_t * v232 = (int32_t *)(v187 + 48); // 0x1e3ea8c
                                uint32_t v233 = *v232; // 0x1e3ea8c
                                g2 = v233;
                                int32_t v234 = *(int32_t *)(v187 + 52); // 0x1e3ea90
                                g5 = 8 * v234 | v233 / 0x20000000;
                                int32_t v235 = 8 * v233; // 0x1e3ea98
                                g2 = v235;
                                *v232 = v235;
                                int32_t v236 = g5; // 0x1e3ea9f
                                int32_t v237 = g9; // 0x1e3ea9f
                                *(int32_t *)(v237 + 52) = v236;
                                goto lab_0x1e3eb16;
                            } else {
                                v148 = v187;
                                goto lab_0x1e3eb12;
                            }
                        }
                    }
                } else {
                    int32_t v238; // 0x1e3ea20
                    int32_t v239; // 0x1e3ea37
                    if (v185 > 1) {
                        // 0x1e3e9ff
                        *(int32_t *)(v183 - 4) = 128;
                        int32_t v240 = g4; // 0x1e3ea04
                        *(int32_t *)(v183 - 8) = v240;
                        int32_t v241 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3ea05
                        g2 = v241;
                        int32_t v242 = g9; // 0x1e3ea0a
                        int32_t v243 = v242 + 8; // 0x1e3ea0a
                        v239 = v243;
                        v238 = v241;
                    } else {
                        int16_t * v244 = g122; // 0x1e3ea0f
                        int32_t v245 = (int32_t)v244; // 0x1e3ea0f
                        g5 = v245;
                        g2 = 0;
                        int32_t v246 = g4; // 0x1e3ea17
                        uint16_t v247 = *(int16_t *)(2 * v246 + v245); // 0x1e3ea17
                        int32_t v248 = (int32_t)v247 & 128; // 0x1e3ea1b
                        g2 = v248;
                        v239 = v183;
                        v238 = v248;
                    }
                    if (v238 == 0) {
                        v148 = v239;
                        goto lab_0x1e3eb12;
                    } else {
                        int32_t * v249 = (int32_t *)(v239 + 48); // 0x1e3ea28
                        uint32_t v250 = *v249; // 0x1e3ea28
                        g2 = v250;
                        int32_t v251 = *(int32_t *)(v239 + 52); // 0x1e3ea2c
                        g5 = 16 * v251 | v250 / 0x10000000;
                        g2 = 16 * v250;
                        int32_t v252 = g4; // 0x1e3ea37
                        *(int32_t *)(v239 - 4) = v252;
                        int32_t v253 = g2; // 0x1e3ea38
                        *v249 = v253;
                        int32_t v254 = g5; // 0x1e3ea3c
                        int32_t v255 = g9; // 0x1e3ea3c
                        *(int32_t *)(v255 + 56) = v254;
                        int32_t v256 = function_1e3ee80((int32_t)&g708); // 0x1e3ea40
                        g2 = v256;
                        g4 = v256;
                        goto lab_0x1e3eb16;
                    }
                }
            }
        } else {
            v182 = v536;
        }
      lab_0x1e3eb67:;
        char v542 = *(char *)(v182 + 18); // 0x1e3eb67
        if (v542 != 0) {
            int32_t * v543 = (int32_t *)(v182 + 48); // 0x1e3eb72
            int32_t v544 = *v543; // 0x1e3eb72
            g2 = v544;
            int32_t v545 = *(int32_t *)(v182 + 52); // 0x1e3eb76
            int32_t v546 = -v544; // 0x1e3eb7a
            g2 = v546;
            g5 = (int32_t)(v544 != 0) + v545;
            *v543 = v546;
            int32_t v547 = g5; // 0x1e3eb83
            int32_t v548 = -v547; // 0x1e3eb83
            g5 = v548;
            int32_t v549 = g9; // 0x1e3eb85
            *(int32_t *)(v549 + 52) = v548;
            int32_t v550 = g9;
            v539 = v550;
        } else {
            v539 = v182;
        }
    }
    int32_t v551 = *(int32_t *)(v539 + 32); // 0x1e3ec81
    int32_t v552; // 0x1e3eca2
    if (v551 == 70) {
        // 0x1e3ec88
        *(int32_t *)(v539 + 64) = 0;
        int32_t v553 = g9;
        v552 = v553;
    } else {
        v552 = v539;
    }
    int32_t v554 = *(int32_t *)(v552 + 64); // 0x1e3ec90
    if (v554 == 0) {
        v3 = v552;
        goto lab_0x1e3ed78_7;
    }
    char v555 = *(char *)(v552 + 21); // 0x1e3ec9b
    if (v555 != 0) {
        goto lab_0x1e3ecd2;
    } else {
        int32_t * v556 = (int32_t *)(v552 + 72); // 0x1e3eca2
        int32_t v557 = *v556; // 0x1e3eca2
        *v556 = v557 + 1;
        int32_t v558 = g9;
        v364 = v558;
        goto lab_0x1e3eca6;
    }
  lab_0x1e3e929:;
    int32_t v559 = g8; // 0x1e3e929
    int32_t v560 = v559 - 1; // 0x1e3e929
    g8 = v560;
    int32_t v561 = g9;
    if (v560 != 0) {
        goto lab_0x1e3e93d;
    } else {
        int32_t v562 = *(int32_t *)(v561 + 60); // 0x1e3e92c
        if (v562 == 0) {
            goto lab_0x1e3e93d;
        } else {
            // 0x1e3e933
            *(char *)(v561 + 23) = 1;
            goto lab_0x1e3e9d9;
        }
    }
  lab_0x1e3e4e1:;
    int32_t v563 = *(int32_t *)(v362 + 60); // 0x1e3e4e1
    int32_t v564; // 0x1e3e4fe
    int32_t v565; // 0x1e3e513
    if (v563 == 0) {
        goto lab_0x1e3e4f0;
    } else {
        int32_t v566 = g8; // 0x1e3e4e8
        if (v566 > 349) {
            goto lab_0x1e3e4f0;
        } else {
            v564 = v362;
            v565 = v366;
            goto lab_0x1e3e4f5;
        }
    }
  lab_0x1e3e4d1:;
    int32_t v567 = g8; // 0x1e3e4d1
    g8 = v567 - 1;
    int32_t v568 = g3; // 0x1e3e4d2
    *(int32_t *)(v365 - 4) = v568;
    int32_t * v569 = (int32_t *)(v365 + 28); // 0x1e3e4d3
    int32_t v570 = *v569; // 0x1e3e4d3
    *v569 = v570 + 1;
    int32_t v571 = function_1e3eec0((int32_t)&g708); // 0x1e3e4d7
    g2 = v571;
    int32_t v572 = g9; // 0x1e3e4dc
    int32_t v573 = v572 + 4; // 0x1e3e4dc
    g4 = v571;
    v366 = v571;
    v362 = v573;
    goto lab_0x1e3e4e1;
  lab_0x1e3e976:;
    int32_t v574; // 0x1e3e985
    if (v414 != 48) {
        goto lab_0x1e3e9d9;
    } else {
        int32_t v575 = g9; // 0x1e3e97b
        int32_t * v576 = (int32_t *)(v575 + 28); // 0x1e3e97b
        int32_t v577 = *v576; // 0x1e3e97b
        *v576 = v577 + 1;
        int32_t v578 = g3; // 0x1e3e97f
        int32_t v579 = g9; // 0x1e3e97f
        *(int32_t *)(v579 - 4) = v578;
        int32_t v580 = function_1e3eec0((int32_t)&g708); // 0x1e3e980
        g2 = v580;
        v574 = g9;
        g4 = v580;
        char v581 = v580; // 0x1e3e98a
        if (v581 == 120) {
            goto lab_0x1e3e9c2;
        } else {
            if (v581 == 88) {
                goto lab_0x1e3e9c2;
            } else {
                // 0x1e3e994
                *(int32_t *)(v574 + 68) = 1;
                int32_t v582 = g9; // 0x1e3e99c
                int32_t * v583 = (int32_t *)(v582 + 32); // 0x1e3e99c
                int32_t v584 = *v583; // 0x1e3e99c
                if (v584 == 120) {
                    int32_t * v585 = (int32_t *)(v582 + 28); // 0x1e3e9ad
                    int32_t v586 = *v585; // 0x1e3e9ad
                    *v585 = v586 - 1;
                    int32_t v587 = g3; // 0x1e3e9b1
                    int32_t v588 = g9; // 0x1e3e9b1
                    *(int32_t *)(v588 - 4) = v587;
                    int32_t v589 = g4; // 0x1e3e9b2
                    *(int32_t *)(v588 - 8) = v589;
                    int32_t v590 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3e9b3
                    g2 = v590;
                    g4 = 48;
                } else {
                    // 0x1e3e9a3
                    *v583 = 111;
                }
                goto lab_0x1e3e9d9;
            }
        }
    }
  lab_0x1e3e956:;
    int32_t v591 = g8; // 0x1e3e956
    int32_t v592 = v591 - 1; // 0x1e3e956
    g8 = v592;
    int32_t v593 = g9;
    if (v592 != 0) {
        goto lab_0x1e3e967;
    } else {
        int32_t v594 = *(int32_t *)(v593 + 60); // 0x1e3e959
        if (v594 == 0) {
            goto lab_0x1e3e967;
        } else {
            // 0x1e3e960
            *(char *)(v593 + 23) = 1;
            int32_t v595 = g4;
            v414 = v595;
            goto lab_0x1e3e976;
        }
    }
  lab_0x1e3e93d:;
    int32_t * v596 = (int32_t *)(v561 + 28); // 0x1e3e93d
    int32_t v597 = *v596; // 0x1e3e93d
    *v596 = v597 + 1;
    int32_t v598 = g3; // 0x1e3e941
    int32_t v599 = g9; // 0x1e3e941
    *(int32_t *)(v599 - 4) = v598;
    int32_t v600 = function_1e3eec0((int32_t)&g708); // 0x1e3e942
    g2 = v600;
    g4 = v600;
    goto lab_0x1e3e9d9;
  lab_0x1e3e4f0:
    // 0x1e3e4f0
    g8 = 349;
    v564 = v362;
    v565 = v366;
    goto lab_0x1e3e4f5;
  lab_0x1e3e967:;
    int32_t * v729 = (int32_t *)(v593 + 28); // 0x1e3e967
    int32_t v730 = *v729; // 0x1e3e967
    *v729 = v730 + 1;
    int32_t v731 = g3; // 0x1e3e96b
    int32_t v732 = g9; // 0x1e3e96b
    *(int32_t *)(v732 - 4) = v731;
    int32_t v733 = function_1e3eec0((int32_t)&g708); // 0x1e3e96c
    g2 = v733;
    g4 = v733;
    v414 = v733;
    goto lab_0x1e3e976;
  lab_0x1e3e4f5:;
    int32_t v601; // 0x1e3e54c
    while (true) {
        int32_t v602 = g442; // 0x1e3e4f5
        int32_t v603; // 0x1e3e51a
        if (v602 > 1) {
            // 0x1e3e4fe
            *(int32_t *)(v564 - 4) = 4;
            int32_t v604 = g4; // 0x1e3e500
            *(int32_t *)(v564 - 8) = v604;
            int32_t v605 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3e501
            g2 = v605;
            int32_t v606 = g9; // 0x1e3e506
            int32_t v607 = v606 + 8; // 0x1e3e506
            v601 = v607;
            v603 = v605;
        } else {
            int16_t * v608 = g122; // 0x1e3e50b
            int32_t v609 = (int32_t)v608; // 0x1e3e50b
            g5 = v609;
            g2 = 0;
            uint16_t v610 = *(int16_t *)(v609 + 2 * v565); // 0x1e3e513
            int32_t v611 = (int32_t)v610 & 4; // 0x1e3e517
            g2 = v611;
            v601 = v564;
            v603 = v611;
        }
        if (v603 == 0) {
            // break -> 0x1e3e53d
            break;
        }
        int32_t v612 = g8; // 0x1e3e51e
        g2 = v612;
        g8 = v612 - 1;
        if (v612 == 0) {
            // break -> 0x1e3e53d
            break;
        }
        int32_t v613 = g4; // 0x1e3e525
        int32_t v614 = g6; // 0x1e3e525
        *(char *)v614 = (char)v613;
        int32_t v615 = g6; // 0x1e3e527
        g6 = v615 + 1;
        int32_t v616 = g9; // 0x1e3e528
        int32_t * v617 = (int32_t *)(v616 + 64); // 0x1e3e528
        int32_t v618 = *v617; // 0x1e3e528
        *v617 = v618 + 1;
        int32_t v619 = g3; // 0x1e3e52c
        int32_t v620 = g9; // 0x1e3e52c
        *(int32_t *)(v620 - 4) = v619;
        int32_t * v621 = (int32_t *)(v620 + 28); // 0x1e3e52d
        int32_t v622 = *v621; // 0x1e3e52d
        *v621 = v622 + 1;
        int32_t v623 = function_1e3eec0((int32_t)&g708); // 0x1e3e531
        g2 = v623;
        int32_t v624 = g9; // 0x1e3e536
        int32_t v625 = v624 + 4; // 0x1e3e536
        g4 = v623;
        v564 = v625;
        v565 = v623;
        // continue -> 0x1e3e4f5
        continue;
    }
    int32_t v626 = g4; // 0x1e3e53d
    char v627 = g443; // 0x1e3e53d
    int32_t v628; // 0x1e3e5ac
    if ((char)v626 == v627) {
        int32_t v629 = g8; // 0x1e3e545
        g2 = v629;
        g8 = v629 - 1;
        if (v629 != 0) {
            int32_t * v630 = (int32_t *)(v601 + 28); // 0x1e3e54c
            int32_t v631 = *v630; // 0x1e3e54c
            *v630 = v631 + 1;
            int32_t v632 = g3; // 0x1e3e550
            int32_t v633 = g9; // 0x1e3e550
            *(int32_t *)(v633 - 4) = v632;
            int32_t v634 = g6; // 0x1e3e551
            g6 = v634 + 1;
            int32_t v635 = function_1e3eec0((int32_t)&g708); // 0x1e3e552
            g4 = v635;
            unsigned char v636 = g443; // 0x1e3e55c
            g2 = (int32_t)v636 | v635 & -256;
            int32_t v637 = g6; // 0x1e3e561
            *(char *)(v637 - 1) = v636;
            while (true) {
                int32_t v638 = g442; // 0x1e3e564
                int32_t v639;
                int32_t v640; // 0x1e3e589
                if (v638 > 1) {
                    int32_t v641 = g9; // 0x1e3e56d
                    *(int32_t *)(v641 - 4) = 4;
                    int32_t v642 = g4; // 0x1e3e56f
                    *(int32_t *)(v641 - 8) = v642;
                    int32_t v643 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3e570
                    v639 = v643;
                    v640 = v643;
                } else {
                    int16_t * v644 = g122; // 0x1e3e57a
                    int32_t v645 = (int32_t)v644; // 0x1e3e57a
                    g5 = v645;
                    g2 = 0;
                    int32_t v646 = g4; // 0x1e3e582
                    uint16_t v647 = *(int16_t *)(2 * v646 + v645); // 0x1e3e582
                    int32_t v648 = (int32_t)v647 & 4; // 0x1e3e586
                    v639 = v648;
                    v640 = v648;
                }
                // 0x1e3e589
                g2 = v639;
                if (v640 == 0) {
                    // break -> 0x1e3e5ac
                    break;
                }
                int32_t v649 = g8; // 0x1e3e58d
                g2 = v649;
                g8 = v649 - 1;
                if (v649 == 0) {
                    // break -> 0x1e3e5ac
                    break;
                }
                int32_t v650 = g4; // 0x1e3e594
                int32_t v651 = g6; // 0x1e3e594
                *(char *)v651 = (char)v650;
                int32_t v652 = g6; // 0x1e3e596
                g6 = v652 + 1;
                int32_t v653 = g9; // 0x1e3e597
                int32_t * v654 = (int32_t *)(v653 + 64); // 0x1e3e597
                int32_t v655 = *v654; // 0x1e3e597
                *v654 = v655 + 1;
                int32_t v656 = g3; // 0x1e3e59b
                int32_t v657 = g9; // 0x1e3e59b
                *(int32_t *)(v657 - 4) = v656;
                int32_t * v658 = (int32_t *)(v657 + 28); // 0x1e3e59c
                int32_t v659 = *v658; // 0x1e3e59c
                *v658 = v659 + 1;
                int32_t v660 = function_1e3eec0((int32_t)&g708); // 0x1e3e5a0
                g2 = v660;
                g4 = v660;
            }
            int32_t v661 = g9;
            v628 = v661;
        } else {
            v628 = v601;
        }
    } else {
        v628 = v601;
    }
    int32_t v662 = *(int32_t *)(v628 + 64); // 0x1e3e5ac
    if (v662 == 0) {
        goto lab_0x1e3e63d;
    } else {
        int32_t v663 = g4; // 0x1e3e5b7
        if (v663 == 101) {
            goto lab_0x1e3e5c1;
        } else {
            if (v663 != 69) {
                goto lab_0x1e3e63d;
            } else {
                goto lab_0x1e3e5c1;
            }
        }
    }
  lab_0x1e3e9c2:;
    int32_t * v664 = (int32_t *)(v574 + 32); // 0x1e3e9c2
    int32_t v665 = *v664; // 0x1e3e9c2
    *v664 = v665 + 1;
    int32_t v666 = g3; // 0x1e3e9c6
    int32_t v667 = g9; // 0x1e3e9c6
    *(int32_t *)(v667 - 4) = v666;
    int32_t v668 = function_1e3eec0((int32_t)&g708); // 0x1e3e9c7
    g2 = v668;
    int32_t v669 = g9; // 0x1e3e9cc
    *(int32_t *)(v669 + 36) = 120;
    int32_t v670 = g2; // 0x1e3e9d7
    g4 = v670;
    goto lab_0x1e3e9d9;
  lab_0x1e3e63d:;
    int32_t v671 = g9; // 0x1e3e63d
    int32_t * v672 = (int32_t *)(v671 + 28); // 0x1e3e63d
    int32_t v673 = *v672; // 0x1e3e63d
    *v672 = v673 - 1;
    int32_t v674 = g3; // 0x1e3e641
    int32_t v675 = g9; // 0x1e3e641
    *(int32_t *)(v675 - 4) = v674;
    int32_t v676 = g4; // 0x1e3e642
    *(int32_t *)(v675 - 8) = v676;
    int32_t v677 = function_1e3eef0((int32_t)&g708, (int32_t)&g708); // 0x1e3e643
    g2 = v677;
    int32_t v678 = g9; // 0x1e3e648
    int32_t v679 = v678 + 8; // 0x1e3e648
    int32_t v680 = *(int32_t *)(v678 + 72); // 0x1e3e64b
    if (v680 == 0) {
        v3 = v679;
        goto lab_0x1e3ed78_7;
    }
    char v681 = *(char *)(v678 + 29); // 0x1e3e656
    if (v681 == 0) {
        // 0x1e3e661
        g2 = v678 + 120;
        int32_t v682 = *(int32_t *)(v678 + 52); // 0x1e3e665
        g5 = v682;
        int32_t * v683 = (int32_t *)(v678 + 80); // 0x1e3e669
        int32_t v684 = *v683; // 0x1e3e669
        *v683 = v684 + 1;
        int32_t v685 = g2; // 0x1e3e66d
        int32_t v686 = g9; // 0x1e3e66d
        *(int32_t *)(v686 - 4) = v685;
        char v687 = *(char *)(v686 + 20); // 0x1e3e66e
        g2 = v687;
        int32_t v688 = g5; // 0x1e3e673
        *(int32_t *)(v686 - 8) = v688;
        int32_t v689 = g2; // 0x1e3e674
        int32_t v690 = v689 - 1; // 0x1e3e674
        g2 = v690;
        *(int32_t *)(v686 - 12) = v690;
        int32_t v691 = g6; // 0x1e3e676
        *(char *)v691 = 0;
        g2 = function_1e41c40();
    }
    goto lab_0x1e3ecd2;
  lab_0x1e3e5c1:;
    int32_t v692 = g8; // 0x1e3e5c1
    g2 = v692;
    g8 = v692 - 1;
    if (v692 == 0) {
        goto lab_0x1e3e63d;
    } else {
        int32_t v693 = g6; // 0x1e3e5c8
        *(char *)v693 = 101;
        int32_t v694 = g6; // 0x1e3e5cb
        g6 = v694 + 1;
        int32_t v695 = g9; // 0x1e3e5cc
        int32_t * v696 = (int32_t *)(v695 + 28); // 0x1e3e5cc
        int32_t v697 = *v696; // 0x1e3e5cc
        *v696 = v697 + 1;
        int32_t v698 = g3; // 0x1e3e5d0
        int32_t v699 = g9; // 0x1e3e5d0
        *(int32_t *)(v699 - 4) = v698;
        int32_t v700 = function_1e3eec0((int32_t)&g708); // 0x1e3e5d1
        g2 = v700;
        g4 = v700;
        if (v700 != 45) {
            if (v700 != 43) {
                goto lab_0x1e3e604;
            } else {
                goto lab_0x1e3e5eb;
            }
        } else {
            int32_t v701 = g6; // 0x1e3e5e0
            *(char *)v701 = 45;
            int32_t v702 = g6; // 0x1e3e5e3
            g6 = v702 + 1;
            goto lab_0x1e3e5eb;
        }
    }
  lab_0x1e3e604:;
    int32_t v703 = g442; // 0x1e3e604
    int32_t v704;
    int32_t v705; // 0x1e3e629
    if (v703 > 1) {
        int32_t v706 = g9; // 0x1e3e60d
        *(int32_t *)(v706 - 4) = 4;
        int32_t v707 = g4; // 0x1e3e60f
        *(int32_t *)(v706 - 8) = v707;
        int32_t v708 = function_1e40120((int32_t)&g708, (int32_t)&g708); // 0x1e3e610
        v704 = v708;
        v705 = v708;
    } else {
        int16_t * v709 = g122; // 0x1e3e61a
        int32_t v710 = (int32_t)v709; // 0x1e3e61a
        g5 = v710;
        g2 = 0;
        int32_t v711 = g4; // 0x1e3e622
        uint16_t v712 = *(int16_t *)(2 * v711 + v710); // 0x1e3e622
        int32_t v713 = (int32_t)v712 & 4; // 0x1e3e626
        v704 = v713;
        v705 = v713;
    }
    // 0x1e3e629
    g2 = v704;
    if (v705 == 0) {
        goto lab_0x1e3e63d;
    } else {
        int32_t v714 = g8; // 0x1e3e62d
        g2 = v714;
        g8 = v714 - 1;
        if (v714 == 0) {
            goto lab_0x1e3e63d;
        } else {
            int32_t v715 = g4; // 0x1e3e634
            int32_t v716 = g6; // 0x1e3e634
            *(char *)v716 = (char)v715;
            int32_t v717 = g6; // 0x1e3e636
            g6 = v717 + 1;
            int32_t v718 = g9; // 0x1e3e637
            int32_t * v719 = (int32_t *)(v718 + 64); // 0x1e3e637
            int32_t v720 = *v719; // 0x1e3e637
            *v719 = v720 + 1;
            goto lab_0x1e3e5f5;
        }
    }
  lab_0x1e3e5eb:;
    int32_t v721 = g8; // 0x1e3e5eb
    g2 = v721;
    g8 = v721 - 1;
    if (v721 != 0) {
        goto lab_0x1e3e5f5;
    } else {
        // 0x1e3e5f2
        g8 = v721;
        goto lab_0x1e3e604;
    }
  lab_0x1e3e5f5:;
    int32_t v722 = g9; // 0x1e3e5f5
    int32_t * v723 = (int32_t *)(v722 + 28); // 0x1e3e5f5
    int32_t v724 = *v723; // 0x1e3e5f5
    *v723 = v724 + 1;
    int32_t v725 = g3; // 0x1e3e5f9
    int32_t v726 = g9; // 0x1e3e5f9
    *(int32_t *)(v726 - 4) = v725;
    int32_t v727 = function_1e3eec0((int32_t)&g708); // 0x1e3e5fa
    g2 = v727;
    g4 = v727;
    goto lab_0x1e3e604;
  lab_0x1e3ed6a_2:;
    int32_t * v728 = (int32_t *)(v11 + 28); // 0x1e3ed6a
    *v728 = *v728 - 1;
    *(int32_t *)(g9 - 4) = g3;
    *(int32_t *)(g9 - 8) = g4;
    g2 = function_1e3eef0((int32_t)&g708, (int32_t)&g708);
    v3 = g9 + 8;
    goto lab_0x1e3ed78_7;
}

// Address range: 0x1e3ee80 - 0x1e3eebe
int32_t function_1e3ee80(int32_t a1) {
    int32_t v1 = g8; // bp-4
    int32_t result; // 0x1e3eeb6
    int32_t v2; // 0x1e3ee91
    if (g442 > 1) {
        // 0x1e3ee8a
        g8 = a1;
        v2 = function_1e40120(a1, 4);
        g2 = v2;
        result = g8;
    } else {
        int32_t v3 = (int32_t)g122; // 0x1e3ee9b
        g5 = v3;
        g2 = 0;
        int32_t v4 = (int32_t)*(int16_t *)(v3 + 2 * a1) & 4; // 0x1e3eeab
        g2 = v4;
        result = a1;
        v2 = v4;
    }
    if (v2 != 0) {
        // 0x1e3eeb2
        g2 = result;
        g8 = v1;
        return result;
    }
    int32_t result2 = (result & -33) - 7; // 0x1e3eeb9
    g2 = result2;
    g8 = v1;
    return result2;
}

