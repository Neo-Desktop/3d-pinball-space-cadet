#include "pinball.h"

// Address range: 0x1e3a358 - 0x1e3a3f5
int32_t function_1e3a358(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3a358
    g2 = a1;
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1e3a360
    g5 = v1;
    int32_t v2 = *(int32_t *)(a1 + 8); // 0x1e3a364
    int32_t v3 = v2; // edx
    int32_t v4 = *(int32_t *)a1; // 0x1e3a368
    int32_t v5 = *(int32_t *)(a1 + 12); // 0x1e3a36b
    int32_t v6 = v5; // edi
    g2 = a2;
    int32_t v7 = *(int32_t *)a2; // 0x1e3a376
    g5 = v7;
    int32_t v8 = *(int32_t *)(a2 + 4); // 0x1e3a378
    int32_t v9 = *(int32_t *)(a2 + 8); // 0x1e3a37b
    int32_t v10 = *(int32_t *)(a2 + 12); // 0x1e3a384
    int32_t v11; // 0x1e3a3e1
    int32_t v12; // 0x1e3a38b
    if (v4 > v7) {
        // 0x1e3a389
        v12 = v2 - v7 + v4;
        v3 = v12;
        v11 = v7;
    } else {
        v12 = v2;
        v11 = v4;
    }
    int32_t v13; // 0x1e3a3dc
    int32_t v14; // 0x1e3a397
    if (v1 > v8) {
        // 0x1e3a395
        v14 = v5 - v8 + v1;
        v6 = v14;
        v13 = v8;
    } else {
        v14 = v5;
        v13 = v1;
    }
    int32_t v15 = v11 + v12; // 0x1e3a39f
    g2 = v15;
    if (v15 < v9 + v7) {
        int32_t v16 = v9 - v11; // 0x1e3a3be
        g2 = v16;
        v3 = v16 + v7;
    }
    int32_t v17 = v10 + v8; // 0x1e3a3c7
    g5 = v17;
    int32_t v18 = v13 + v14; // 0x1e3a3ca
    g2 = v18;
    if (v18 < v17) {
        // 0x1e3a3d0
        v6 = v10 - v13 + v8;
    }
    // 0x1e3a3d8
    g2 = a3;
    g5 = v13;
    *(int32_t *)a3 = v11;
    *(int32_t *)(g2 + 4) = g5;
    *(int32_t *)(g2 + 12) = v6;
    *(int32_t *)(g2 + 8) = v3;
    return g2;
}

// Address range: 0x1e3a3f5 - 0x1e3a408
int32_t function_1e3a3f5(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3a3f5
    g2 = a1;
    int32_t v1 = a1 & 3; // 0x1e3a3fb
    g5 = v1;
    int32_t result; // 0x1e3a402
    if (v1 != 0) {
        // 0x1e3a400
        result = a1 - v1 + 4;
        g2 = result;
    } else {
        result = a1;
    }
    // 0x1e3a405
    return result;
}

// Address range: 0x1e3a408 - 0x1e3a44f
int32_t function_1e3a408(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g8; // 0x1e3a409
    g8 = a1;
    int32_t v2 = g6; // 0x1e3a40e
    g6 = a2;
    int32_t v3 = function_1e3a3f5(a2, v2, v1, g4); // 0x1e3a414
    g2 = v3;
    *(int16_t *)(g8 + 4) = (int16_t)v3;
    g4 = a2;
    int32_t v4 = 2 * g2 * a2; // 0x1e3a427
    g2 = v4;
    int32_t v5 = function_1e25371(v4); // 0x1e3a42a
    g2 = v5;
    *(int32_t *)(g8 + 6) = v5;
    int32_t result;
    if (v5 != 0) {
        // 0x1e3a43d
        *(int16_t *)g8 = (int16_t)g6;
        *(int32_t *)(g8 + 10) = v5;
        *(int16_t *)(g8 + 2) = (int16_t)g4;
        result = 0;
    } else {
        result = -1;
    }
    // 0x1e3a449
    g2 = result;
    g6 = v4;
    g8 = a2;
    g4 = v2;
    return result;
}

// Address range: 0x1e3a44f - 0x1e3a477
int32_t function_1e3a44f(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g6; // bp-4
    g6 = v1;
    if (a1 == NULL) {
        // 0x1e3a458
        g2 = -1;
        // 0x1e3a473
        g6 = *(int32_t *)(int32_t)&v2;
        return -1;
    }
    int32_t v3 = *(int32_t *)(v1 + 6); // 0x1e3a45f
    g2 = v3;
    if (v3 != 0) {
        // 0x1e3a466
        g2 = function_1e25401(v3);
    }
    // 0x1e3a46c
    g2 = 0;
    *a1 = 0;
    int32_t v4 = g1 ? -4 : 4; // 0x1e3a46e
    int32_t v5 = v4 + v1; // 0x1e3a46e
    *(int32_t *)v5 = g2;
    int32_t v6 = v5 + v4; // 0x1e3a46f
    *(int32_t *)v6 = g2;
    *(int16_t *)(v6 + v4) = (int16_t)g2;
    // 0x1e3a473
    g6 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e3a477 - 0x1e3a4d9
int32_t function_1e3a477(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = a3; // edx
    int32_t v2 = g3; // bp-16
    int32_t result = (int32_t)*(int16_t *)(a1 + 2) - a5 - a3; // 0x1e3a48b
    g2 = result;
    int32_t v3 = 2 * (result * (int32_t)*(int16_t *)(a1 + 4) + a4); // 0x1e3a498
    if (a3 < 1) {
        // 0x1e3a4d2
        return result;
    }
    int32_t v4 = 0x10000 * a6; // 0x1e3a4b2
    int32_t v5 = a2 / 2; // 0x1e3a4bd
    int32_t v6 = v3 + *(int32_t *)(a1 + 6); // 0x1e3a4b5
    int32_t result2; // 0x1e3a4ca
    while (true) {
        // 0x1e3a4a5
        int32_t v7; // 0x1e3a4cc
        int32_t v8; // 0x1e3a4cd
        if (a2 >= 1) {
            // 0x1e3a4a9
            g2 = v4 | a6 & 0xffff;
            g5 = v5;
            __asm_rep_stosd_memset((char *)v6, v4 / 0x10000, v5);
            int32_t v9 = g1 ? -4 : 4; // 0x1e3a4bf
            int32_t v10 = (a2 & 1) != 0; // 0x1e3a4c1
            g5 = v10;
            __asm_rep_stosw_memset((char *)(v9 * v5 + v6), (int16_t)a6, v10);
            g5 = 0;
            v8 = v6 + 2 * a2;
            v7 = v1;
        } else {
            v8 = v6;
            v7 = a3;
        }
        // 0x1e3a4c6
        result2 = (int32_t)*(int16_t *)(a1 + 4) - a2;
        g2 = result2;
        int32_t v11 = v7 - 1; // 0x1e3a4cc
        v1 = v11;
        if (v11 == 0) {
            // break -> 0x1e3a4d2
            break;
        }
        a3 = v11;
        v6 = 2 * result2 + v8;
    }
    // 0x1e3a4d2
    g3 = v2;
    return result2;
}

// Address range: 0x1e3a4d9 - 0x1e3a5e4
int32_t function_1e3a4d9(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14) {
    // 0x1e3a4d9
    g2 = a3;
    int32_t v1 = *(int32_t *)(a3 + 16); // 0x1e3a4e1
    int32_t v2 = g3; // bp-24
    int32_t v3 = *(int32_t *)(a9 + 16); // 0x1e3a4eb
    int32_t v4; // 0x1e3a4f2
    if (v3 < 0) {
        // 0x1e3a4f2
        v4 = -v3;
    } else {
        v4 = v3;
    }
    // 0x1e3a4f4
    g5 = v4;
    int32_t v5; // 0x1e3a502
    if (v1 < 0) {
        // 0x1e3a4f8
        v5 = -v1;
    } else {
        v5 = v1;
    }
    // 0x1e3a4fa
    g2 = a6;
    int32_t v6 = v4 - a2; // 0x1e3a504
    g5 = v6;
    int16_t v7 = *(int16_t *)(a6 + 2); // 0x1e3a506
    g2 = a12;
    int32_t v8 = v6 - a11; // 0x1e3a514
    g5 = v8;
    int32_t v9 = (int32_t)*(int16_t *)(a12 + 2) - a2 - a14; // 0x1e3a522
    g2 = a9;
    int32_t * v10 = (int32_t *)(a9 + 20); // 0x1e3a52a
    int32_t v11 = *(int32_t *)(a9 + 8) + *v10 * v8 + a10; // 0x1e3a537
    g5 = v11;
    g2 = a3;
    int32_t * v12 = (int32_t *)(a3 + 20); // 0x1e3a53d
    int32_t v13 = *(int32_t *)(a3 + 8) + (v5 - a2 - a5) * *v12 + a4; // 0x1e3a54a
    g2 = a12;
    int16_t * v14 = (int16_t *)(a12 + 4); // 0x1e3a550
    int32_t v15 = 2 * ((int32_t)*v14 * v9 + a13) + *(int32_t *)(a12 + 6); // 0x1e3a55d
    g2 = a6;
    int16_t * v16 = (int16_t *)(a6 + 4); // 0x1e3a564
    int32_t v17 = 2 * (((int32_t)v7 - a2 - a8) * (int32_t)*v16 + a7); // 0x1e3a56f
    int32_t v18 = v17 + *(int32_t *)(a6 + 6); // 0x1e3a571
    g2 = a2;
    int32_t v19 = a2 - 1; // 0x1e3a576
    if (a2 == 0) {
        // 0x1e3a5da
        return 0;
    }
    int32_t result; // 0x1e3a5d3
    while (true) {
        int32_t v20; // 0x1e3a5a7
        int32_t v21; // 0x1e3a5ad
        int32_t v22; // 0x1e3a5c3
        int32_t v23; // 0x1e3a5d0
        if (a1 != 0) {
            int32_t v24 = v13; // 0x1e3a591
            int32_t v25 = v11; // 0x1e3a58f
            int32_t v26 = v18; // 0x1e3a58a
            int32_t v27 = a2; // 0x1e3a587
            int32_t v28 = v15; // 0x1e3a587
            int32_t v29 = a1;
            int32_t v30; // 0x1e3a599
            int32_t v31; // 0x1e3a59a
            int32_t v32; // 0x1e3a59b
            int32_t v33; // 0x1e3a59e
            while (true) {
                uint16_t v34 = *(int16_t *)v28; // 0x1e3a587
                int32_t v35 = (int32_t)v34 | v27 & -0x10000; // 0x1e3a587
                g2 = v35;
                int32_t v36; // 0x1e3a599
                int32_t v37; // 0x1e3a59a
                int32_t v38; // 0x1e3a59b
                int32_t v39; // 0x1e3a59e
                if (*(int16_t *)v26 >= v34) {
                    unsigned char v40 = *(char *)v25; // 0x1e3a58f
                    g2 = (int32_t)v40 | v35 & -256;
                    *(char *)v24 = v40;
                    uint16_t v41 = *(int16_t *)v15; // 0x1e3a593
                    g2 = g2 & -0x10000 | (int32_t)v41;
                    *(int16_t *)v18 = v41;
                    v37 = v13;
                    v36 = g5;
                    v39 = v18;
                    v38 = v15;
                } else {
                    v37 = v24;
                    v36 = v25;
                    v39 = v26;
                    v38 = v28;
                }
                // 0x1e3a599
                v30 = v36 + 1;
                g5 = v30;
                v31 = v37 + 1;
                v13 = v31;
                v32 = v38 + 2;
                v15 = v32;
                v33 = v39 + 2;
                v18 = v33;
                int32_t v42 = v29 - 1; // 0x1e3a5a1
                if (v42 == 0) {
                    // break -> 0x1e3a5a7
                    break;
                }
                // 0x1e3a599
                v24 = v31;
                v25 = v30;
                v26 = v33;
                v27 = g2;
                v28 = v32;
                v29 = v42;
            }
            // 0x1e3a5a7
            result = v19;
            v23 = v33;
            v22 = v32;
            v21 = v31;
            v20 = v30;
        } else {
            result = v19;
            v23 = v18;
            v22 = v15;
            v21 = v13;
            v20 = v11;
        }
        int32_t v43 = v20 - a1; // 0x1e3a5a7
        g5 = v43;
        g2 = a9;
        int32_t v44 = *v10 + v43; // 0x1e3a5af
        g5 = v44;
        g2 = a3;
        g2 = a12;
        g2 = a6;
        g2 = result;
        if (result == 0) {
            // break -> 0x1e3a5da
            break;
        }
        v19 = result - 1;
        v13 = *v12 + v21 - a1;
        v11 = v44;
        v18 = 2 * ((int32_t)*v16 - a1) + v23;
        a2 = result;
        v15 = 2 * ((int32_t)*v14 - a1) + v22;
    }
    // 0x1e3a5da
    g3 = v2;
    return result;
}

// Address range: 0x1e3a5e4 - 0x1e3a6a7
int32_t function_1e3a5e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    int32_t v1 = *(int32_t *)(a3 + 16); // 0x1e3a5ee
    g2 = v1;
    int32_t v2 = *(int32_t *)(a9 + 16); // 0x1e3a5f7
    int32_t v3; // 0x1e3a5fe
    if (v2 < 0) {
        // 0x1e3a5fe
        v3 = -v2;
    } else {
        v3 = v2;
    }
    // 0x1e3a600
    g5 = v3;
    int32_t v4; // 0x1e3a604
    if (v1 < 0) {
        // 0x1e3a604
        v4 = -v1;
        g2 = v4;
    } else {
        v4 = v1;
    }
    int32_t v5 = v4 - a5 - a2; // 0x1e3a60f
    g2 = v5;
    int32_t v6 = v3 - a2 - a11; // 0x1e3a612
    g5 = v6;
    int32_t v7 = (int32_t)*(int16_t *)(a6 + 2) - a2 - a8; // 0x1e3a61f
    int32_t * v8 = (int32_t *)(a9 + 20); // 0x1e3a622
    int32_t v9 = *(int32_t *)(a3 + 20) * v5; // 0x1e3a62e
    g5 = v9;
    int32_t v10 = *(int32_t *)(a9 + 8) + *v8 * v6 + a10; // 0x1e3a631
    int32_t v11 = *(int32_t *)(a3 + 8) + v9; // 0x1e3a634
    g5 = v11;
    int32_t v12 = a6; // ebx
    int32_t result = v11 + a4; // 0x1e3a63d
    g2 = result;
    int16_t * v13 = (int16_t *)(a6 + 4); // 0x1e3a63f
    int32_t v14 = 2 * ((int32_t)*v13 * v7 + a7); // 0x1e3a649
    g5 = v14;
    int32_t v15 = v14 + *(int32_t *)(a6 + 6); // 0x1e3a64b
    g5 = v15;
    if (a2 <= 0) {
        // 0x1e3a69e
        return result;
    }
    int32_t result2; // 0x1e3a689
    while (true) {
        int32_t v16; // 0x1e3a67d
        int32_t v17; // 0x1e3a683
        int32_t v18; // 0x1e3a699
        if (a1 > 0) {
            int32_t v19 = a1; // edi
            int32_t v20 = a1; // 0x1e3a67a13
            int32_t v21 = result; // 0x1e3a673
            int32_t v22 = v15; // 0x1e3a66c
            int32_t v23 = v10; // 0x1e3a671
            int32_t v24; // 0x1e3a675
            int32_t v25; // 0x1e3a676
            int32_t v26; // 0x1e3a677
            while (true) {
                char * v27 = (char *)v23; // 0x1e3a663
                int32_t v28; // 0x1e3a675
                int32_t v29; // 0x1e3a676
                int32_t v30; // 0x1e3a677
                int32_t v31; // 0x1e3a67a
                if (*v27 != 0) {
                    int32_t v32 = v12 & -0x10000 | a12 & 0xffff; // 0x1e3a668
                    v12 = v32;
                    if (*(int16_t *)v22 > (int16_t)a12) {
                        unsigned char v33 = *v27; // 0x1e3a671
                        v12 = (int32_t)v33 | v32 & -256;
                        *(char *)v21 = v33;
                        v31 = v19;
                        v30 = g5;
                        v29 = g2;
                        v28 = v10;
                    } else {
                        v31 = v20;
                        v30 = v22;
                        v29 = v21;
                        v28 = v23;
                    }
                } else {
                    v31 = v20;
                    v30 = v22;
                    v29 = v21;
                    v28 = v23;
                }
                // 0x1e3a675
                v24 = v28 + 1;
                v10 = v24;
                v25 = v29 + 1;
                g2 = v25;
                v26 = v30 + 2;
                g5 = v26;
                int32_t v34 = v31 - 1; // 0x1e3a67a
                v19 = v34;
                if (v34 == 0) {
                    // break -> 0x1e3a67d
                    break;
                }
                v20 = v34;
                v21 = v25;
                v22 = v26;
                v23 = v24;
            }
            v18 = v26;
            v17 = v25;
            v16 = v24;
        } else {
            v18 = v15;
            v17 = result;
            v16 = v10;
        }
        int32_t v35 = v17 - a1; // 0x1e3a683
        g2 = v35;
        result2 = *(int32_t *)(a3 + 20) + v35;
        g2 = result2;
        v12 = a6;
        int32_t v36 = a2 - 1; // 0x1e3a696
        int32_t v37 = 2 * ((int32_t)*v13 - a1) + v18; // 0x1e3a699
        g5 = v37;
        if (v36 == 0) {
            // break -> 0x1e3a69e
            break;
        }
        a2 = v36;
        result = result2;
        v15 = v37;
        v10 = *v8 + v16 - a1;
    }
    // 0x1e3a69e
    return result2;
}

// Address range: 0x1e3a6a7 - 0x1e3a6ca
int32_t function_1e3a6a7(int32_t a1, int32_t a2) {
    // 0x1e3a6a7
    g5 = a1;
    int32_t v1 = a1 + 4; // 0x1e3a6ac
    int32_t v2 = *(int32_t *)v1; // 0x1e3a6af
    g2 = v2;
    int32_t result; // 0x1e3a6c7
    if (*(int32_t *)a1 > v2) {
        // 0x1e3a6b9
        g7 = a2;
        *(int32_t *)(a1 + 8 + 4 * v2) = a2;
        int32_t * v3 = (int32_t *)v1; // 0x1e3a6c1
        int32_t v4 = *v3 + 1; // 0x1e3a6c3
        g2 = v4;
        *v3 = v4;
        result = g2;
    } else {
        // 0x1e3a6b5
        g2 = 0;
        result = 0;
    }
    // 0x1e3a6c6
    return result;
}

// Address range: 0x1e3a6ca - 0x1e3a705
int32_t function_1e3a6ca(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // bp-8
    int32_t v2 = a1 + 4; // 0x1e3a6d0
    int32_t v3 = *(int32_t *)v2; // 0x1e3a6d0
    g5 = v3;
    int32_t v4 = v3 - 1; // 0x1e3a6d3
    if (v4 < 0) {
      lab_0x1e3a6ec_2:
        // 0x1e3a6ec
        g2 = 0;
        // 0x1e3a6ee
        return 0;
    }
    int32_t v5 = a1 + 8; // 0x1e3a6da
    g2 = a2;
    int32_t v6 = v4; // 0x1e3a6f7
    int32_t v7 = 4 * v4 + v5; // 0x1e3a6e6
    while (true) {
        // 0x1e3a6e2
        if (*(int32_t *)v7 == a2) {
            // break -> 0x1e3a6f3
            break;
        }
        int32_t v8 = v6 - 1; // 0x1e3a6e9
        if (v8 < 0) {
            goto lab_0x1e3a6ec_2;
        }
        v6 = v8;
        v7 -= 4;
    }
    // 0x1e3a6f3
    *(int32_t *)(4 * v6 + v5) = *(int32_t *)(4 * v3 + v2);
    g2 = 1;
    int32_t * v9 = (int32_t *)(a1 + 4); // 0x1e3a700
    *v9 = *v9 - 1;
    // 0x1e3a6ee
    g6 = v1;
    return g2;
}

// Address range: 0x1e3a705 - 0x1e3a728
int32_t function_1e3a705(int32_t a1) {
    // 0x1e3a705
    g8 = a1;
    int32_t v1 = 4 * a1 + 12; // 0x1e3a70a
    g2 = v1;
    int32_t result = function_1e25371(v1); // 0x1e3a712
    g2 = result;
    if (result != 0) {
        // 0x1e3a71b
        *(int32_t *)result = g8;
        *(int32_t *)(result + 4) = 0;
    }
    // 0x1e3a724
    g8 = v1;
    return result;
}

// Address range: 0x1e3a728 - 0x1e3a739
int32_t function_1e3a728(int32_t a1) {
    // 0x1e3a728
    g2 = a1;
    int32_t result; // 0x1e3a731
    if (a1 != 0) {
        // 0x1e3a730
        result = function_1e25401(a1);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e3a736
    return result;
}

// Address range: 0x1e3a739 - 0x1e3a768
int32_t function_1e3a739(int32_t a1, int32_t a2) {
    // 0x1e3a739
    g2 = a1;
    int32_t v1 = g8; // bp-4
    int32_t v2 = &v1; // 0x1e3a73d
    if (a1 == 0) {
        // 0x1e3a764
        g8 = *(int32_t *)v2;
        return 0;
    }
    // 0x1e3a742
    g8 = a2;
    int32_t v3 = *(int32_t *)(a1 + 4) + a2; // 0x1e3a749
    g5 = v3;
    int32_t v4; // 0x1e3a764
    int32_t result; // 0x1e3a765
    if (*(int32_t *)a1 < v3) {
        int32_t v5 = 4 * v3 + 12; // 0x1e3a74f
        g5 = v5;
        int32_t v6 = function_1e2542e(a1, v5); // 0x1e3a758
        g2 = v6;
        int32_t v7 = g8 + *(int32_t *)(v6 + 4); // 0x1e3a760
        g5 = v7;
        *(int32_t *)v6 = v7;
        result = g2;
        v4 = g9;
    } else {
        result = a1;
        v4 = v2;
    }
    // 0x1e3a764
    g8 = *(int32_t *)v4;
    return result;
}

// Address range: 0x1e3a768 - 0x1e3a7a7
int32_t function_1e3a768(float80_t a1, float80_t a2, float80_t a3) {
    // 0x1e3a768
    g2 = (float32_t)a1;
    g5 = (float32_t)a2;
    int32_t v1 = (float32_t)a3; // edx
    float32_t v2 = *(float32_t *)((int32_t)(float32_t)a1 + 4); // 0x1e3a774
    float32_t v3 = *(float32_t *)((int32_t)(float32_t)a2 + 8); // 0x1e3a777
    float32_t v4 = *(float32_t *)((int32_t)(float32_t)a2 + 4); // 0x1e3a77a
    float32_t v5 = *(float32_t *)((int32_t)(float32_t)a1 + 8); // 0x1e3a77d
    *(float32_t *)(int32_t)(float32_t)a3 = (float32_t)((float80_t)v2 * (float80_t)v3 - (float80_t)v4 * (float80_t)v5);
    int32_t v6 = g2; // 0x1e3a784
    float32_t v7 = *(float32_t *)v6; // 0x1e3a784
    int32_t v8 = g5; // 0x1e3a786
    float32_t v9 = *(float32_t *)(v8 + 8); // 0x1e3a786
    float32_t v10 = *(float32_t *)v8; // 0x1e3a789
    float32_t v11 = *(float32_t *)(v6 + 8); // 0x1e3a78b
    *(float32_t *)(v1 + 4) = -(float32_t)((float80_t)v7 * (float80_t)v9 - (float80_t)v10 * (float80_t)v11);
    int32_t v12 = g2; // 0x1e3a795
    float32_t v13 = *(float32_t *)v12; // 0x1e3a795
    int32_t v14 = g5; // 0x1e3a797
    float32_t v15 = *(float32_t *)(v14 + 4); // 0x1e3a797
    float32_t v16 = *(float32_t *)v14; // 0x1e3a79a
    float32_t v17 = *(float32_t *)(v12 + 4); // 0x1e3a79c
    *(float32_t *)(v1 + 8) = (float32_t)((float80_t)v13 * (float80_t)v15 - (float80_t)v16 * (float80_t)v17);
    return g2;
}

// Address range: 0x1e3a7a7 - 0x1e3a7e5
int32_t function_1e3a7a7(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g2 = v1;
    float32_t v2 = *(float32_t *)a1; // 0x1e3a7ae
    float32_t v3 = *(float32_t *)(v1 + 8); // 0x1e3a7b2
    float32_t v4 = *(float32_t *)(v1 + 4); // 0x1e3a7ba
    float32_t v5 = (float80_t)v2 * (float80_t)v2 + (float80_t)v3 * (float80_t)v3 + (float80_t)v4 * (float80_t)v4; // bp-4
    uint32_t v6 = (int32_t)__asm_fnstsw(g10); // 0x1e3a7cc
    int32_t result = g2 & -0x10000 | v6; // 0x1e3a7cc
    g2 = result;
    int3_t v7 = g11; // 0x1e3a7d9
    float80_t v8;
    if ((v6 / 256 & 64) == 0) {
        // 0x1e3a7d9
        g11 = v7 - 1;
        v8 = sqrtl((float80_t)v5);
    } else {
        // 0x1e3a7d1
        g11 = v7 - 1;
        v8 = 0.0L;
    }
    // 0x1e3a7df
    g684 = v8;
    return result;
}

// Address range: 0x1e3a7e5 - 0x1e3a828
float80_t function_1e3a7e5(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3a7e5
    g2 = a1;
    float32_t * v1 = (float32_t *)a1; // 0x1e3a7ef
    float80_t v2 = (float80_t)*v1 * (float80_t)*v1; // 0x1e3a7f1
    int32_t v3 = a1 + 4; // 0x1e3a7f3
    g5 = v3;
    float32_t v4 = *(float32_t *)v3; // 0x1e3a7f6
    float80_t result = sqrtl(v2 + (float80_t)v4 * (float80_t)v4); // 0x1e3a7fc
    if (((int32_t)(float32_t)result & 0x7fffffff) != 0) {
        float80_t v5 = 1.0L / result; // 0x1e3a812
        *v1 = (float32_t)(v5 * (float80_t)*v1);
        float32_t * v6 = (float32_t *)g5; // 0x1e3a81b
        *v6 = (float32_t)(v5 * (float80_t)*v6);
    }
    // 0x1e3a81f
    g11--;
    return result;
}

// Address range: 0x1e3a828 - 0x1e3a8ce
int32_t function_1e3a828(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // 0x1e3a828
    g5 = a2;
    float80_t v2 = (float80_t)*(float32_t *)a2 - (float80_t)*(float32_t *)a1; // 0x1e3a837
    float32_t v3 = *(float32_t *)(a1 + 4); // 0x1e3a83f
    float80_t v4 = (float80_t)*(float32_t *)(a2 + 4) - (float80_t)v3; // 0x1e3a83f
    float32_t v5 = *(float32_t *)(a1 + 12); // 0x1e3a845
    float32_t v6 = *(float32_t *)(a1 + 16); // 0x1e3a84b
    float80_t v7 = v2 * (float80_t)v5 + v4 * (float80_t)v6; // 0x1e3a851
    uint32_t v8 = (int32_t)__asm_fnstsw(g10); // 0x1e3a85c
    int32_t v9 = g2 & -0x10000 | v8; // 0x1e3a85c
    g2 = v9;
    int32_t result2; // 0x1e3a8b8
    if ((v8 / 256 & 1) == 0) {
        float80_t v10 = v2; // 0x1e3a867
        g5 += 12;
        int32_t result = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10); // 0x1e3a877
        g2 = result;
        int3_t v11 = g11; // 0x1e3a879
        g11 = v11 - 1;
        float32_t v12 = *(float32_t *)g5; // 0x1e3a883
        float80_t v13 = v7 * v7 - (v4 * v4 + v10 * v10) + (float80_t)v12; // 0x1e3a883
        if ((result / 256 & 1) != 0) {
            // 0x1e3a887
            g684 = v7 - sqrtl(v13);
            // 0x1e3a8c8
            g3 = v1;
            return result;
        }
        // 0x1e3a88e
        g11 = v11;
        uint32_t v14 = (int32_t)__asm_fnstsw(g10); // 0x1e3a897
        int32_t v15 = g2 & -0x10000 | v14; // 0x1e3a897
        g2 = v15;
        if ((v14 / 256 & 1) == 0) {
            float80_t v16 = v7 - sqrtl(v13); // 0x1e3a8a1
            uint32_t v17 = (int32_t)__asm_fnstsw(g10); // 0x1e3a8ad
            int32_t v18 = g2 & -0x10000 | v17; // 0x1e3a8ad
            g2 = v18;
            if ((v17 / 256 & 1) == 0) {
                uint32_t v19 = (int32_t)__asm_fnstsw(g10); // 0x1e3a8b8
                result2 = g2 & -0x10000 | v19;
                g2 = result2;
                if ((v19 / 256 & 1) == 0) {
                    // 0x1e3a8bd
                    g11--;
                    g684 = v16;
                    // 0x1e3a8c8
                    g3 = v1;
                    return result2;
                }
            } else {
                result2 = v18;
            }
        } else {
            result2 = v15;
        }
    } else {
        result2 = v9;
    }
    // 0x1e3a8c2
    g11--;
    g684 = 1.0e+9L;
    // 0x1e3a8c8
    g3 = v1;
    return result2;
}

// Address range: 0x1e3a8ce - 0x1e3a97f
int32_t function_1e3a8ce(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2 = g6; // 0x1e3a8db
    int32_t v3 = a1 + 12; // 0x1e3a8df
    *(float32_t *)v3 = (float32_t)a4 - (float32_t)a2;
    float80_t v4 = a3; // 0x1e3a8e8
    float80_t v5 = (float80_t)(float32_t)a5 - v4; // 0x1e3a8e8
    *(float32_t *)(a1 + 16) = (float32_t)v5;
    g2 = (float32_t)function_1e3a7e5(v3, v2, g8);
    float80_t v6 = -(float80_t)*(float32_t *)v3; // 0x1e3a8f7
    g2 = *(int32_t *)(a1 + 16);
    *(float32_t *)(a1 + 4) = (float32_t)v6;
    *(int32_t *)a1 = g2;
    float32_t v7 = *(float32_t *)a1; // 0x1e3a904
    float80_t v8 = v4 * v6; // 0x1e3a909
    float80_t v9 = -(((float80_t)(float32_t)a2 * (float80_t)v7 + v8)); // 0x1e3a90b
    *(float32_t *)(a1 + 24) = (float32_t)v9;
    g11++;
    uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e3a91b
    g2 = g2 & -0x10000 | v10;
    if ((v10 / 256 & 1) == 0) {
        goto lab_0x1e3a955;
    } else {
        uint32_t v11 = (int32_t)__asm_fnstsw(g10); // 0x1e3a929
        g2 = g2 & -0x10000 | v11;
        if ((v11 / 256 & 65) == 0) {
            // 0x1e3a92e
            *(int32_t *)v3 = 0;
            uint32_t v12 = (int32_t)__asm_fnstsw(g10); // 0x1e3a93a
            g2 = g2 & -0x10000 | v12;
            if ((v12 / 256 & 65) == 0) {
                // 0x1e3a93f
                g2 = a3;
                g5 = a5;
                *(int32_t *)(a1 + 28) = a3;
            } else {
                // 0x1e3a94a
                g2 = a5;
                g5 = a3;
                *(int32_t *)(a1 + 28) = a5;
            }
            goto lab_0x1e3a974;
        } else {
            goto lab_0x1e3a955;
        }
    }
  lab_0x1e3a955:;
    uint32_t v13 = (int32_t)__asm_fnstsw(g10); // 0x1e3a95b
    g2 = g2 & -0x10000 | v13;
    if ((v13 / 256 & 65) == 0) {
        // 0x1e3a960
        g2 = a2;
        g5 = a4;
        *(int32_t *)(a1 + 28) = a2;
    } else {
        // 0x1e3a96b
        g2 = a4;
        g5 = a2;
        *(int32_t *)(a1 + 28) = a4;
    }
    goto lab_0x1e3a974;
  lab_0x1e3a974:
    // 0x1e3a974
    g6 = v3;
    *(int32_t *)(a1 + 32) = g5;
    g8 = v2;
    g3 = v1;
    return g2;
}

// Address range: 0x1e3a97f - 0x1e3aa3c
int32_t function_1e3a97f(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // 0x1e3a97f
    float32_t v2 = *(float32_t *)(a2 + 4); // 0x1e3a989
    g5 = a1;
    float32_t v3 = *(float32_t *)(a1 + 16); // 0x1e3a98f
    float32_t v4 = *(float32_t *)(a1 + 12); // 0x1e3a992
    float32_t v5 = *(float32_t *)a2; // 0x1e3a995
    float32_t v6 = (float80_t)v2 * (float80_t)v3 + (float80_t)v4 * (float80_t)v5; // bp-8
    uint32_t v7 = (int32_t)__asm_fnstsw(g10); // 0x1e3a9a2
    int32_t v8 = g2 & -0x10000 | v7; // 0x1e3a9a2
    g2 = v8;
    int32_t result; // 0x1e3aa26
    if ((v7 / 256 & 1) != 0) {
        float32_t v9 = *(float32_t *)a2; // 0x1e3a9ab
        int32_t v10 = g5; // 0x1e3a9ad
        float32_t v11 = *(float32_t *)v10; // 0x1e3a9ad
        float32_t v12 = *(float32_t *)(a2 + 4); // 0x1e3a9af
        float32_t v13 = *(float32_t *)(v10 + 4); // 0x1e3a9b2
        float32_t v14 = *(float32_t *)(a2 + 24); // 0x1e3a9b7
        v6 = -(float32_t)(((float80_t)v9 * (float80_t)v11 + (float80_t)v12 * (float80_t)v13 + (float80_t)v14) / (float80_t)v6);
        uint32_t v15 = (int32_t)__asm_fnstsw(g10); // 0x1e3a9ca
        int32_t v16 = g2 & -0x10000 | v15; // 0x1e3a9ca
        g2 = v16;
        if ((v15 / 256 & 65) != 0) {
            uint32_t v17 = (int32_t)__asm_fnstsw(g10); // 0x1e3a9d5
            int32_t v18 = g2 & -0x10000 | v17; // 0x1e3a9d5
            g2 = v18;
            if ((v17 / 256 & 1) == 0) {
                int3_t v19 = g11; // 0x1e3a9da
                int32_t v20 = g5; // 0x1e3a9da
                float32_t v21 = *(float32_t *)(v20 + 12); // 0x1e3a9da
                float32_t v22 = *(float32_t *)v20; // 0x1e3a9e7
                *(float32_t *)(a2 + 36) = (float32_t)((float80_t)v21 * (float80_t)v6 + (float80_t)v22);
                int32_t v23 = g5; // 0x1e3a9ec
                float32_t v24 = *(float32_t *)(v23 + 16); // 0x1e3a9ec
                float32_t v25 = *(float32_t *)(v23 + 4); // 0x1e3a9f2
                *(float32_t *)(a2 + 40) = (float32_t)((float80_t)v24 * (float80_t)v6 + (float80_t)v25);
                if ((*(int32_t *)(a2 + 12) & 0x7fffffff) != 0) {
                    // 0x1e3aa12
                    g11 = v19;
                    uint32_t v26 = (int32_t)__asm_fnstsw(g10); // 0x1e3aa1b
                    int32_t v27 = g2 & -0x10000 | v26; // 0x1e3aa1b
                    g2 = v27;
                    if ((v26 / 256 & 1) == 0) {
                        uint32_t v28 = (int32_t)__asm_fnstsw(g10); // 0x1e3aa26
                        result = g2 & -0x10000 | v28;
                        g2 = result;
                        if ((v28 / 256 & 65) != 0) {
                            // 0x1e3aa2b
                            g11--;
                            g684 = v6;
                            // 0x1e3aa36
                            g3 = v1;
                            return result;
                        }
                    } else {
                        result = v27;
                    }
                } else {
                    // 0x1e3a9f7
                    g11 = v19;
                    uint32_t v29 = (int32_t)__asm_fnstsw(g10); // 0x1e3a9fd
                    int32_t v30 = g2 & -0x10000 | v29; // 0x1e3a9fd
                    g2 = v30;
                    if ((v29 / 256 & 1) == 0) {
                        uint32_t v31 = (int32_t)__asm_fnstsw(g10); // 0x1e3aa08
                        int32_t result2 = g2 & -0x10000 | v31; // 0x1e3aa08
                        g2 = result2;
                        if ((v31 / 256 & 65) != 0) {
                            // 0x1e3aa0d
                            g11--;
                            g684 = v6;
                            // 0x1e3aa36
                            g3 = v1;
                            return result2;
                        }
                        result = result2;
                    } else {
                        result = v30;
                    }
                }
            } else {
                result = v18;
            }
        } else {
            result = v16;
        }
    } else {
        result = v8;
    }
    // 0x1e3aa30
    g11--;
    g684 = 1.0e+9L;
    // 0x1e3aa36
    g3 = v1;
    return result;
}

// Address range: 0x1e3aa3c - 0x1e3aa72
int32_t function_1e3aa3c(int32_t a1, int32_t a2) {
    // 0x1e3aa3c
    g2 = 1;
    g8 = a1;
    int32_t v1 = a1 + 32; // 0x1e3aa47
    g6 = v1;
    int32_t * v2 = (int32_t *)v1; // 0x1e3aa4a
    int32_t v3 = 1 - *v2; // 0x1e3aa4a
    g2 = v3;
    *v2 = v3;
    g2 = function_1e29a40(*(int32_t *)g8, *(int32_t *)(g8 + 4 + 4 * g2));
    int32_t v4 = *(int32_t *)g6; // 0x1e3aa5e
    g5 = v4;
    int32_t v5 = *(int32_t *)(4 * v4 + 20 + g8); // 0x1e3aa61
    int32_t v6 = function_1e325d2(v5, g8, 0x1e3aa3c); // 0x1e3aa65
    g2 = v6;
    g6 = v5;
    *(int32_t *)(g8 + 28) = v6;
    return g2;
}

// Address range: 0x1e3aa72 - 0x1e3aa88
int32_t function_1e3aa72(int32_t a1, int32_t a2) {
    // 0x1e3aa72
    g5 = a2;
    g2 = a1;
    *(int32_t *)(a1 + 32) = a2;
    int32_t result = function_1e3aa3c(0, a1); // 0x1e3aa80
    g2 = result;
    return result;
}

// Address range: 0x1e3aa88 - 0x1e3aabb
int32_t function_1e3aa88(int32_t a1) {
    // 0x1e3aa88
    g8 = a1;
    int32_t v1 = *(int32_t *)(a1 + 28); // 0x1e3aa8d
    g2 = v1;
    int32_t v2; // 0x1e3aa9a
    if (v1 != 0) {
        // 0x1e3aa94
        g2 = function_1e32771(v1);
        v2 = g8;
    } else {
        v2 = a1;
    }
    // 0x1e3aa9a
    *(int32_t *)(v2 + 28) = 0;
    int32_t v3 = *(int32_t *)(g9 + 12); // 0x1e3aaa1
    g2 = v3;
    int32_t result; // 0x1e3aab2
    if (v3 >= 0) {
        // 0x1e3aaa9
        *(int32_t *)(g8 + 32) = v3;
        *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 4 + 4 * g2);
        *(int32_t *)(g9 - 8) = *(int32_t *)g8;
        result = function_1e29a40((int32_t)&g708, (int32_t)&g708);
        g2 = result;
    } else {
        result = v3;
    }
    // 0x1e3aab7
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e3aabb - 0x1e3ab1b
int32_t function_1e3aabb(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // 0x1e3aabd
    g4 = g5;
    g6 = a2;
    g2 = function_1e29f8c(a1, a2, 1, v1);
    *(int32_t *)g4 = (int32_t)&g60;
    *(int32_t *)(g4 + 110) = g8;
    int32_t v2 = g4; // 0x1e3aadb
    g5 = v2;
    *(int32_t *)(v2 + 82) = g8;
    *(int32_t *)(g4 + 114) = g8;
    *(int32_t *)(g4 + 70) = g8;
    g2 = function_1e3ab39();
    int32_t v3 = function_1e3991a(g6, g8); // 0x1e3aaf2
    g2 = v3;
    float32_t v4 = *(float32_t *)v3; // 0x1e3aaf7
    int32_t v5 = g8; // 0x1e3aafe
    *(float32_t *)(g4 + 62) = v4;
    *(float32_t *)(g4 + 102) = (float32_t)(float80_t)v4;
    int32_t v6 = g6; // 0x1e3ab05
    int32_t v7 = function_1e3991a(v6, v5); // 0x1e3ab06
    g2 = v7;
    float32_t v8 = *(float32_t *)v7; // 0x1e3ab0b
    g2 = g4;
    g6 = v6;
    *(float32_t *)(g4 + 66) = v8;
    *(float32_t *)(g4 + 106) = (float32_t)(float80_t)v8;
    g8 = v5;
    g4 = 901;
    return g2;
}

// Address range: 0x1e3ab1b - 0x1e3ab39
int32_t function_1e3ab1b(char a1) {
    // 0x1e3ab1b
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e3ab2a
        g2 = function_1e3df60(g8);
    }
    // 0x1e3ab33
    g2 = g8;
    return g8;
}

// Address range: 0x1e3ab39 - 0x1e3abb9
int32_t function_1e3ab39(void) {
    int32_t v1 = g5; // 0x1e3ab3b
    int32_t v2 = *(int32_t *)(v1 + 110); // 0x1e3ab3b
    g2 = v2;
    g8 = v1;
    int32_t v3; // 0x1e3ab4a
    if (v2 != 0) {
        // 0x1e3ab44
        g2 = function_1e32771(v2);
        v3 = g8;
    } else {
        v3 = v1;
    }
    int32_t v4 = *(int32_t *)(v3 + 114); // 0x1e3ab4a
    g2 = v4;
    int32_t v5; // 0x1e3ab57
    if (v4 != 0) {
        // 0x1e3ab51
        *(int32_t *)(g9 - 4) = v4;
        g2 = function_1e32771((int32_t)&g708);
        v5 = g8;
    } else {
        v5 = v3;
    }
    // 0x1e3ab57
    int32_t v6; // 0x1e3ab6a
    if (*(int32_t *)(v5 + 82) != 0) {
        // 0x1e3ab5d
        *(int32_t *)(g9 - 4) = -1;
        int32_t v7 = g8 + 42; // 0x1e3ab5f
        g2 = v7;
        *(int32_t *)(g9 - 8) = v7;
        g2 = function_1e3aa88((int32_t)&g708);
        v6 = g8;
    } else {
        v6 = v5;
    }
    int32_t v8 = 0; // edi
    *(int32_t *)(v6 + 110) = 0;
    *(int32_t *)(g8 + 114) = v8;
    *(int32_t *)(g8 + 78) = v8;
    *(int32_t *)(g8 + 98) = v8;
    *(int32_t *)(g8 + 86) = v8;
    *(int32_t *)(g8 + 90) = v8;
    *(int32_t *)(g9 - 4) = v8;
    *(int32_t *)(g8 + 82) = v8;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 26);
    *(int32_t *)(g8 + 122) = 0x3f800000;
    *(int32_t *)(g8 + 94) = v8;
    g2 = function_1e29a40((int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g8 + 26);
    *(int32_t *)(g8 + 46) = v8;
    *(int32_t *)(g8 + 42) = g2;
    int32_t v9 = *(int32_t *)(g8 + 34); // 0x1e3ab9b
    g2 = v9;
    if (v9 != 0) {
        int32_t v10 = *(int32_t *)(v9 + 4); // 0x1e3aba2
        g2 = v10;
        int32_t v11 = *(int32_t *)(v10 + 8); // 0x1e3aba5
        g5 = v11;
        *(int32_t *)(g8 + 50) = v11;
    }
    // 0x1e3abab
    g2 = 0;
    g6 = *(int32_t *)g9;
    *(int32_t *)(g8 + 58) = 0;
    *(int32_t *)(g8 + 54) = g2;
    *(int32_t *)(g8 + 6) = g2;
    g8 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e3abb9 - 0x1e3ac0f
int32_t function_1e3abb9(int32_t a1) {
    g8 = a1;
    int32_t v1; // 0x1e3abcf
    int32_t v2; // 0x1e3abd2
    if (*(int32_t *)(a1 + 82) != 0) {
        int32_t v3 = a1 + 42; // 0x1e3abc6
        g2 = v3;
        g2 = function_1e3aa88(v3);
        v2 = g9;
        v1 = g8;
    } else {
        int32_t v4; // esi
        v2 = &v4;
        v1 = a1;
    }
    int32_t v5 = *(int32_t *)(v1 + 78); // 0x1e3abcf
    g2 = v5;
    *(int32_t *)(v2 - 4) = *(int32_t *)(v1 + 46 + 4 * v5);
    *(int32_t *)(v2 - 8) = *(int32_t *)(g8 + 26);
    function_1e29a40((int32_t)&g708, (int32_t)&g708);
    g2 = 0;
    *(int32_t *)(g8 + 86) = 0;
    *(int32_t *)(g8 + 90) = g2;
    *(int32_t *)(g8 + 82) = g2;
    *(int32_t *)(g8 + 110) = g2;
    int32_t v6 = g8; // 0x1e3abec
    int32_t v7 = g2; // 0x1e3abec
    int32_t v8; // 0x1e3abf9
    int32_t v9; // 0x1e3abf9
    if (*(int32_t *)(v6 + 94) != v7) {
        // 0x1e3abf1
        *(int32_t *)(g9 - 4) = v7;
        g5 = g8;
        *(int32_t *)(g9 - 8) = 20;
        *(int32_t *)(g8 + 94) = g2;
        v8 = g8;
        v9 = *(int32_t *)v8;
        g2 = v9;
    } else {
        v9 = v7;
        v8 = v6;
    }
    // 0x1e3abfd
    int32_t result; // 0x1e3ac06
    if (*(int32_t *)(v8 + 18) != 0) {
        // 0x1e3ac03
        *(int32_t *)(g9 - 4) = v8;
        *(int32_t *)(g9 - 8) = 60;
        result = function_1e328b9((int32_t)&g708, (int32_t)&g708);
        g2 = result;
    } else {
        result = v9;
    }
    // 0x1e3ac0b
    return result;
}

// Address range: 0x1e3ac0f - 0x1e3ac4e
int32_t function_1e3ac0f(void) {
    int32_t v1 = g5; // 0x1e3ac11
    int32_t v2 = *(int32_t *)(v1 + 102); // 0x1e3ac11
    g2 = v2;
    g6 = v1 + 110;
    *(int32_t *)(v1 + 62) = v2;
    int32_t v3 = g5; // 0x1e3ac1a
    g8 = v3;
    int32_t v4 = *(int32_t *)g6; // 0x1e3ac1c
    g2 = v4;
    int32_t v5 = *(int32_t *)(v3 + 106); // 0x1e3ac1e
    g5 = v5;
    *(int32_t *)(v3 + 66) = v5;
    if (v4 != 0) {
        // 0x1e3ac28
        g2 = function_1e32771(v4);
    }
    // 0x1e3ac2e
    g2 = 0;
    *(int32_t *)g6 = 0;
    int32_t * v6 = (int32_t *)(g9 + 12); // 0x1e3ac32
    int32_t v7 = g2; // 0x1e3ac32
    int32_t v8; // 0x1e3ac49
    int32_t result; // 0x1e3ac4b
    if (*v6 > v7) {
        // 0x1e3ac38
        *(int32_t *)(g9 - 4) = 0x1e3abb9;
        *(int32_t *)(g9 - 8) = g8;
        *(int32_t *)(g9 - 12) = *v6;
        int32_t v9 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3ac42
        g2 = v9;
        *(int32_t *)g6 = v9;
        result = g2;
        v8 = g9;
    } else {
        result = v7;
        v8 = g9;
    }
    // 0x1e3ac49
    g6 = *(int32_t *)v8;
    g8 = *(int32_t *)(v8 + 4);
    return result;
}

// Address range: 0x1e3ac4e - 0x1e3b166
int32_t function_1e3ac4e(int32_t a1, float80_t a2) {
    float32_t v1 = a2;
    g2 = a1;
    int32_t v2 = g8; // 0x1e3ac5e
    int32_t v3 = g6; // 0x1e3ac5f
    int32_t v4 = v3; // bp-20
    int32_t v5 = &v4; // 0x1e3ac5f
    int32_t v6 = g5; // 0x1e3ac60
    g8 = v6;
    int32_t v7; // 0x1e3ad08
    int32_t result; // 0x1e3b163
    if (a1 > 1020) {
        if (a1 == 1024) {
            // 0x1e3b11b
            g2 = v6;
            g5 = 0;
            int32_t v8 = *(int32_t *)(v6 + 30); // 0x1e3b124
            g2 = v8;
            if (*(int32_t *)(v8 + 214) > 0) {
                int32_t v9 = v6 + 134; // 0x1e3b12f
                g7 = v9;
                int32_t v10 = *(int32_t *)(v6 + 82); // 0x1e3b135
                g2 = v10;
                g5 = 1;
                *(int32_t *)v9 = v10;
                int32_t v11 = g7; // 0x1e3b13b
                g7 = v11 + 24;
                *(int32_t *)(v11 + 12) = *(int32_t *)(g8 + 98);
                *(int32_t *)(g7 - 28) = *(int32_t *)(g8 + 78);
                int32_t v12 = *(int32_t *)(g8 + 6); // 0x1e3b14a
                g2 = v12;
                *(int32_t *)(g7 - 32) = v12;
                int32_t v13 = *(int32_t *)(g8 + 30); // 0x1e3b150
                g2 = v13;
                int32_t v14 = g5; // 0x1e3b153
                while (*(int32_t *)(v13 + 214) > v14) {
                    // 0x1e3b135
                    v10 = *(int32_t *)(g8 + 82);
                    g2 = v10;
                    g5 = v14 + 1;
                    *(int32_t *)g7 = v10;
                    v11 = g7;
                    g7 = v11 + 24;
                    *(int32_t *)(v11 + 12) = *(int32_t *)(g8 + 98);
                    *(int32_t *)(g7 - 28) = *(int32_t *)(g8 + 78);
                    v12 = *(int32_t *)(g8 + 6);
                    g2 = v12;
                    *(int32_t *)(g7 - 32) = v12;
                    v13 = *(int32_t *)(g8 + 30);
                    g2 = v13;
                    v14 = g5;
                }
            }
        }
        // 0x1e3b15b
        g2 = 0;
        result = 0;
        goto lab_0x1e3b15d;
    } else {
        if (a1 == 1020) {
            int32_t v15 = *(int32_t *)(v6 + 30); // 0x1e3b06c
            g2 = v15;
            int32_t v16 = v6 + 82; // 0x1e3b06f
            g6 = v16;
            g4 = v6 + 78;
            int32_t v17 = 24 * *(int32_t *)(v15 + 218); // 0x1e3b07b
            g2 = v17;
            int32_t v18 = v17 + v6; // 0x1e3b07e
            g5 = v18;
            int32_t v19 = *(int32_t *)v16; // 0x1e3b081
            g2 = v19;
            *(int32_t *)(v18 + 134) = v19;
            *(int32_t *)(g5 + 146) = *(int32_t *)(g8 + 98);
            *(int32_t *)(g5 + 130) = *(int32_t *)g4;
            int32_t v20 = g5; // 0x1e3b09a
            g2 = v20;
            int32_t v21 = *(int32_t *)(g8 + 6); // 0x1e3b09c
            g7 = v21;
            *(int32_t *)(v20 + 126) = v21;
            g5 = g8;
            g2 = function_1e3dbc0((int32_t)v1, v4, v2);
            int32_t v22 = 24 * __ftol(); // 0x1e3b0bd
            g2 = v22;
            int32_t v23 = g8; // 0x1e3b0c0
            int32_t v24 = *(int32_t *)(v22 + 134 + v23); // 0x1e3b0c0
            g5 = v24;
            int32_t v25 = v23 + v22; // edx
            *(int32_t *)g6 = v24;
            int32_t v26 = *(int32_t *)(v25 + 146); // 0x1e3b0cc
            g5 = v26;
            *(int32_t *)(g8 + 98) = v26;
            int32_t v27 = *(int32_t *)(v25 + 130); // 0x1e3b0d7
            g2 = v27;
            *(int32_t *)g4 = v27;
            int32_t v28 = *(int32_t *)(v25 + 126); // 0x1e3b0df
            g7 = v28;
            *(int32_t *)(g8 + 6) = v28;
            if (v26 != 0) {
                int32_t v29 = g8; // 0x1e3b0e7
                g5 = v29;
                g2 = function_1e3ac4e(11, (float80_t)*(int32_t *)(v29 + 98));
            }
            // 0x1e3b0f9
            if (*(int32_t *)g4 != 0) {
                // 0x1e3b0fe
                *(int32_t *)(g9 - 4) = 0;
                g5 = g8;
                *(int32_t *)(g9 - 8) = 1;
                g2 = function_1e3ac4e((int32_t)&g708, (float80_t)(int80_t)&g708);
            }
            // 0x1e3b109
            if (*(int32_t *)g6 != 0) {
                // 0x1e3b10e
                *(int32_t *)(g9 - 4) = 0;
                g5 = g8;
                *(int32_t *)(g9 - 8) = 4;
                g2 = function_1e3ac4e((int32_t)&g708, (float80_t)(int80_t)&g708);
            }
            // 0x1e3b15b
            g2 = 0;
            result = 0;
            goto lab_0x1e3b15d;
        } else {
            // 0x1e3ac6a
            g701 = a1;
            switch (a1) {
                case 0: {
                    // 0x1e3ac8a
                    g2 = 0;
                    *(int32_t *)(v6 + 78) = 0;
                    int32_t v30 = g2; // 0x1e3ac8f
                    if (*(int32_t *)(g8 + 82) == v30) {
                        // 0x1e3ac98
                        if (*(int32_t *)(g8 + 86) == v30) {
                            // 0x1e3aca1
                            if (*(int32_t *)(g8 + 90) == v30) {
                                // 0x1e3acaa
                                g2 = function_1e29a40(*(int32_t *)(g8 + 26), *(int32_t *)(g8 + 46));
                            }
                        }
                    }
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 1: {
                    // 0x1e3acba
                    *(int32_t *)(v6 + 78) = 1;
                    g2 = 0;
                    if (*(int32_t *)(g8 + 82) == 0) {
                        // 0x1e3accc
                        if (*(int32_t *)(g8 + 86) == 0) {
                            // 0x1e3acd5
                            if (*(int32_t *)(g8 + 90) == 0) {
                                // 0x1e3acde
                                g2 = function_1e29a40(*(int32_t *)(g8 + 26), *(int32_t *)(g8 + 50));
                            }
                        }
                    }
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 2: {
                    int32_t v31 = *(int32_t *)(v6 + 78); // 0x1e3acee
                    g2 = v31;
                    result = v31;
                    goto lab_0x1e3b15d;
                }
                case 3: {
                    int32_t v32 = *(int32_t *)(v6 + 82); // 0x1e3acf6
                    g2 = v32;
                    result = v32;
                    goto lab_0x1e3b15d;
                }
                case 4: {
                    // 0x1e3acfe
                    g6 = 0;
                    g2 = function_1e3ac0f();
                    v7 = g8;
                    int32_t v33 = g6; // 0x1e3ad08
                    if (*(int32_t *)(v7 + 82) == v33) {
                        goto lab_0x1e3ad16;
                    } else {
                        // 0x1e3ad0d
                        if (*(int32_t *)(v7 + 70) != v33) {
                            // 0x1e3b15b
                            g2 = 0;
                            result = 0;
                            goto lab_0x1e3b15d;
                        } else {
                            goto lab_0x1e3ad16;
                        }
                    }
                }
                case 5: {
                    float32_t v34 = *(float32_t *)(v6 + 102); // 0x1e3ad39
                    *(float32_t *)(v6 + 62) = (float32_t)((float80_t)v34 * a2);
                    float32_t v35 = *(float32_t *)(g8 + 106); // 0x1e3ad42
                    *(float32_t *)(g8 + 66) = (float32_t)((float80_t)v35 * a2);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 6: {
                    int32_t v36 = *(int32_t *)(v6 + 102); // 0x1e3ad50
                    g2 = v36;
                    g5 = *(int32_t *)(v6 + 106);
                    *(int32_t *)(v6 + 62) = v36;
                    *(int32_t *)(g8 + 66) = g5;
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 7: {
                    // 0x1e3ad61
                    int32_t v37; // 0x1e3ad75
                    if (*(int32_t *)(v6 + 82) == 0) {
                        int32_t v38 = v6 + 42; // 0x1e3ad6a
                        g5 = v38;
                        g2 = function_1e3aa72(v38, *(int32_t *)(v6 + 78));
                        v37 = g8;
                    } else {
                        v37 = v6;
                    }
                    // 0x1e3ad73
                    g2 = 0;
                    g5 = v37;
                    *(int32_t *)(v37 + 90) = 0;
                    *(int32_t *)(g8 + 86) = g2;
                    *(int32_t *)(g9 - 4) = (int32_t)v1;
                    *(int32_t *)(g8 + 82) = 1;
                    *(int32_t *)(g8 + 94) = g2;
                    g2 = function_1e3ac0f();
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 8: {
                    // 0x1e3ad94
                    g6 = 0;
                    int32_t v39; // 0x1e3adc8
                    if (*(int32_t *)(v6 + 86) == 0) {
                        // 0x1e3ad9b
                        if (*(int32_t *)(v6 + 82) == 0) {
                            // 0x1e3adaf
                            g2 = function_1e29a40(*(int32_t *)(v6 + 26), *(int32_t *)(v6 + 46));
                        } else {
                            int32_t v40 = v6 + 42; // 0x1e3ada1
                            g2 = v40;
                            g2 = function_1e3aa88(v40);
                            *(int32_t *)(g8 + 82) = g6;
                        }
                        // 0x1e3adba
                        *(int32_t *)(g8 + 86) = 1;
                        *(int32_t *)(g8 + 90) = 0;
                        v39 = g9;
                    } else {
                        v39 = v5;
                    }
                    // 0x1e3adc8
                    *(int32_t *)(v39 - 4) = (int32_t)v1;
                    g5 = g8;
                    g2 = function_1e3ac0f();
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 9: {
                    // 0x1e3add7
                    g6 = 0;
                    int32_t v41; // 0x1e3ae0c
                    if (*(int32_t *)(v6 + 90) == 0) {
                        // 0x1e3adde
                        if (*(int32_t *)(v6 + 82) == 0) {
                            // 0x1e3adf3
                            g2 = function_1e29a40(*(int32_t *)(v6 + 26), *(int32_t *)(v6 + 50));
                        } else {
                            int32_t v42 = v6 + 42; // 0x1e3ade5
                            g2 = v42;
                            g2 = function_1e3aa88(v42);
                            *(int32_t *)(g8 + 82) = g6;
                        }
                        // 0x1e3adfe
                        *(int32_t *)(g8 + 90) = 1;
                        *(int32_t *)(g8 + 86) = 0;
                        v41 = g9;
                    } else {
                        v41 = v5;
                    }
                    // 0x1e3ae0c
                    *(int32_t *)(v41 - 4) = (int32_t)v1;
                    g5 = g8;
                    g2 = function_1e3ac0f();
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 11: {
                    // 0x1e3ae1b
                    g6 = v6 + 98;
                    g2 = function_1e3dbc0((int32_t)v1, v3, v2);
                    int32_t v43 = __ftol(); // 0x1e3ae2f
                    g2 = v43;
                    *(int32_t *)g6 = v43;
                    int32_t v44 = *(int32_t *)(g8 + 34) + 4; // 0x1e3ae39
                    int32_t v45 = *(int32_t *)v44; // 0x1e3ae3c
                    g2 = v45;
                    int32_t v46 = *(int32_t *)(v45 + 4); // 0x1e3ae3e
                    g2 = v46;
                    int32_t * v47 = (int32_t *)g6; // 0x1e3ae41
                    int32_t v48; // 0x1e3ae4d
                    if (*v47 > v46) {
                        // 0x1e3ae45
                        *v47 = v46;
                        v48 = g6;
                    } else {
                        v48 = g6;
                    }
                    // 0x1e3ae47
                    g2 = 0;
                    int32_t * v49 = (int32_t *)v48; // 0x1e3ae49
                    int32_t v50; // 0x1e3ae51
                    if (*v49 < 0) {
                        // 0x1e3ae4d
                        *v49 = 0;
                        v50 = g6;
                    } else {
                        v50 = v48;
                    }
                    // 0x1e3ae4f
                    g5 = *(int32_t *)v50;
                    *(int32_t *)(g8 + 46) = 0;
                    int32_t v51 = *(int32_t *)v44; // 0x1e3ae59
                    g2 = v51;
                    *(int32_t *)(g8 + 50) = *(int32_t *)(v51 + 8 + 4 * g5);
                    int32_t v52; // 0x1e3ae7e
                    if (*(int32_t *)(g8 + 82) == 0) {
                        // 0x1e3ae69
                        if (*(int32_t *)(g8 + 86) == 0) {
                            // 0x1e3ae73
                            g2 = 1;
                            if (*(int32_t *)(g8 + 90) == 0) {
                                // 0x1e3ae7e
                                v52 = *(int32_t *)(g8 + 78);
                                g2 = v52;
                            } else {
                                v52 = 1;
                            }
                        } else {
                            // 0x1e3ae6f
                            g2 = 0;
                            v52 = 0;
                        }
                    } else {
                        int32_t v53 = *(int32_t *)(g8 + 74); // 0x1e3ae64
                        g2 = v53;
                        v52 = v53;
                    }
                    // 0x1e3ae81
                    g2 = function_1e29a40(*(int32_t *)(g8 + 26), *(int32_t *)(g8 + 46 + 4 * v52));
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 12: {
                    int32_t v54 = *(int32_t *)(v6 + 98); // 0x1e3ae92
                    g5 = v54;
                    int32_t v55 = *(int32_t *)(v6 + 34); // 0x1e3ae95
                    g2 = v55;
                    int32_t v56 = v54 + 1; // 0x1e3ae98
                    g5 = v56;
                    int32_t v57 = *(int32_t *)(v55 + 4); // 0x1e3ae99
                    g7 = v57;
                    int32_t v58 = *(int32_t *)(v57 + 4); // 0x1e3ae9c
                    g2 = v58;
                    if (v56 > v58) {
                        // 0x1e3aea3
                        g5 = v58;
                    } else {
                        v58 = v56;
                    }
                    // 0x1e3aea5
                    g5 = v6;
                    g2 = function_1e3ac4e(11, (float80_t)v58);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 13: {
                    int32_t v59 = *(int32_t *)(v6 + 98) - 1; // 0x1e3aec2
                    int32_t v60;
                    int32_t v61; // 0x1e3aecc
                    if (v59 < 0) {
                        v60 = 0;
                        v61 = 0;
                    } else {
                        v60 = v59;
                        v61 = v59;
                    }
                    // 0x1e3aec7
                    g2 = v60;
                    g2 = function_1e3ac4e(11, (float80_t)v61);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 14: {
                    int32_t v62 = *(int32_t *)(v6 + 110); // 0x1e3aee1
                    g2 = v62;
                    int32_t v63; // 0x1e3aef0
                    if (v62 != 0) {
                        // 0x1e3aee8
                        g2 = function_1e32771(v62);
                        v63 = g8;
                    } else {
                        v63 = v6;
                    }
                    // 0x1e3aeee
                    g2 = 0;
                    *(int32_t *)(v63 + 110) = 0;
                    int32_t v64 = g8; // 0x1e3aef3
                    int32_t v65; // 0x1e3af05
                    if (*(int32_t *)(v64 + 82) != g2) {
                        // 0x1e3aef8
                        *(int32_t *)(g9 - 4) = -1;
                        int32_t v66 = g8 + 42; // 0x1e3aefa
                        g2 = v66;
                        *(int32_t *)(g9 - 8) = v66;
                        g2 = function_1e3aa88((int32_t)&g708);
                        v65 = g8;
                    } else {
                        v65 = v64;
                    }
                    // 0x1e3af03
                    g2 = 0;
                    g5 = *(int32_t *)(v65 + 78);
                    *(int32_t *)(v65 + 82) = 0;
                    *(int32_t *)(g8 + 86) = g2;
                    *(int32_t *)(g8 + 90) = g2;
                    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 46 + 4 * g5);
                    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 26);
                    g2 = function_1e29a40((int32_t)&g708, (int32_t)&g708);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 15: {
                    // 0x1e3af22
                    *(int32_t *)(v6 + 94) = 0;
                    int32_t v67 = g8; // 0x1e3af29
                    int32_t v68 = *(int32_t *)(v67 + 114); // 0x1e3af29
                    g2 = v68;
                    int32_t v69; // 0x1e3af38
                    if (v68 != 0) {
                        // 0x1e3af30
                        g2 = function_1e32771(v68);
                        v69 = g8;
                    } else {
                        v69 = v67;
                    }
                    // 0x1e3af36
                    g2 = 0;
                    g5 = v69;
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g8 + 114) = g2;
                    *(int32_t *)(g9 - 4) = 1;
                    g2 = function_1e3ac4e((int32_t)&g708, (float80_t)(int80_t)&g708);
                    *(int32_t *)(g9 - 4) = (int32_t)v1;
                    *(int32_t *)(g9 - 8) = 7;
                    g5 = g8;
                    g2 = function_1e3ac4e((int32_t)&g708, (float80_t)(int80_t)&g708);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 16: {
                    int32_t v70 = *(int32_t *)(v6 + 114); // 0x1e3af56
                    g2 = v70;
                    int32_t v71; // 0x1e3af63
                    if (v70 != 0) {
                        // 0x1e3af5d
                        g2 = function_1e32771(v70);
                        v71 = g9;
                    } else {
                        v71 = v5;
                    }
                    // 0x1e3af63
                    *(int32_t *)(v71 - 4) = (int32_t)v1;
                    *(int32_t *)(v71 - 8) = 7;
                    *(int32_t *)(g8 + 114) = 0;
                    g5 = g8;
                    g2 = function_1e3ac4e((int32_t)&g708, (float80_t)(int80_t)&g708);
                    *(int32_t *)(g8 + 94) = 1;
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 17: {
                    // 0x1e3af82
                    g2 = function_1e3dbc0((int32_t)v1, v3, v2);
                    g5 = g8;
                    int32_t v72 = (int32_t)(__ftol() == 0) + 1; // 0x1e3afa1
                    g2 = v72;
                    g2 = function_1e3ac4e(v72, 0.0L);
                    int32_t v73 = *(int32_t *)(g8 + 78); // 0x1e3afa8
                    g2 = v73;
                    result = v73;
                    goto lab_0x1e3b15d;
                }
                case 18: {
                    // 0x1e3afb0
                    g2 = function_1e3ac4e(17, a2);
                    g5 = g8;
                    g2 = function_1e3ac4e(14, 0.0L);
                    int32_t v74 = *(int32_t *)(g8 + 78); // 0x1e3afc7
                    g2 = v74;
                    result = v74;
                    goto lab_0x1e3b15d;
                }
                case 19: {
                    // 0x1e3afcf
                    g2 = function_1e3ac4e(1, 0.0L);
                    g5 = g8;
                    g2 = function_1e3ac4e(14, 0.0L);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 20: {
                    // 0x1e3afea
                    g6 = 0;
                    g2 = function_1e3ac4e(0, 0.0L);
                    g5 = g8;
                    g2 = function_1e3ac4e(14, (float80_t)(int80_t)g6);
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                case 21: {
                    int32_t v75 = *(int32_t *)(v6 + 78); // 0x1e3b004
                    g2 = v75 == 0;
                    g2 = function_1e3ac4e(17, (float80_t)(v75 == 0));
                    int32_t v76 = *(int32_t *)(g8 + 78); // 0x1e3b021
                    g2 = v76;
                    result = v76;
                    goto lab_0x1e3b15d;
                }
                case 22: {
                    int32_t v77 = *(int32_t *)(v6 + 78); // 0x1e3b029
                    g2 = v77 == 0;
                    g2 = function_1e3ac4e(18, (float80_t)(v77 == 0));
                    int32_t v78 = *(int32_t *)(g8 + 78); // 0x1e3b046
                    g2 = v78;
                    result = v78;
                    goto lab_0x1e3b15d;
                }
                case 23: {
                    // 0x1e3b04e
                    g2 = function_1e3dbc0((int32_t)v1, v3, v2);
                    int32_t v79 = __ftol(); // 0x1e3b05f
                    g2 = v79;
                    *(int32_t *)(g8 + 6) = v79;
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
                default: {
                    // 0x1e3b15b
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3b15d;
                }
            }
        }
    }
  lab_0x1e3b15d:
    // 0x1e3b15d
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e3ad16:
    // 0x1e3ad16
    g2 = 0;
    int32_t v80 = v7 + 42; // esi
    *(int32_t *)(v7 + 90) = 0;
    *(int32_t *)(v80 + 44) = g2;
    *(int32_t *)(v80 + 40) = 1;
    *(int32_t *)(v80 + 52) = g2;
    g2 = function_1e3aa72(v80, *(int32_t *)(v80 + 36));
    // 0x1e3b15b
    g2 = 0;
    result = 0;
    goto lab_0x1e3b15d;
}

// Address range: 0x1e3b1c6 - 0x1e3b27e
int32_t function_1e3b1c6(int32_t a1, uint32_t a2) {
    int32_t v1 = g6; // 0x1e3b1ce
    g4 = 0;
    g6 = a2;
    g2 = function_1e29f8c(a1, a2, 0, v1);
    int32_t v2 = function_1e3a705(4); // 0x1e3b1e2
    g2 = v2;
    *(int32_t *)(g8 + 46) = v2;
    *(int32_t *)g8 = (int32_t)&g61;
    int32_t v3 = g8; // 0x1e3b1f0
    g5 = v3;
    *(int32_t *)(v3 + 70) = g4;
    *(int32_t *)(g8 + 42) = 4;
    *(int32_t *)(g8 + 66) = g4;
    g2 = function_1e3b2a6();
    if (a2 >= 1) {
        int32_t v4 = function_1e3991a(a2, g4); // 0x1e3b20f
        g2 = v4;
        int32_t v5 = *(int32_t *)v4; // 0x1e3b214
        g2 = v5;
        int32_t v6; // bp-8
        g5 = &v6;
        *(int32_t *)(g8 + 54) = v5;
        g6 = 0;
        int32_t v7 = function_1e39996(a2, 1027, &v6); // 0x1e3b225
        g2 = v7;
        if (v6 > g4) {
            while (true) {
                // 0x1e3b232
                g2 = v7;
                *(int32_t *)(g9 - 4) = (int32_t)*(int16_t *)v7;
                g5 = a1;
                int32_t v8 = function_1e2e83c(v7); // 0x1e3b23c
                g2 = v8;
                if (v8 != 0) {
                    int32_t v9 = g8; // 0x1e3b248
                    int32_t v10 = *(int32_t *)(v9 + 46); // 0x1e3b248
                    g5 = v10;
                    int32_t v11 = *(int32_t *)v10; // 0x1e3b24b
                    g2 = v11;
                    if (*(int32_t *)(v10 + 4) == v11) {
                        // 0x1e3b252
                        *(int32_t *)(g9 - 4) = *(int32_t *)(v9 + 42);
                        *(int32_t *)(g9 - 8) = g5;
                        int32_t v12 = function_1e3a739(v8, (int32_t)&g708); // 0x1e3b256
                        g2 = v12;
                        *(int32_t *)(g8 + 46) = v12;
                    }
                    // 0x1e3b25e
                    *(int32_t *)(g9 - 4) = v8;
                    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 46);
                    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
                }
                int32_t v13 = g6 + 1; // 0x1e3b26d
                g6 = v13;
                if (v6 <= v13) {
                    // break -> 0x1e3b273
                    break;
                }
                v7 += 2;
            }
        }
    }
    int32_t result = g8; // 0x1e3b273
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e3b27e - 0x1e3b2a6
int32_t function_1e3b27e(char a1) {
    int32_t v1 = g5; // 0x1e3b27f
    g8 = v1;
    g2 = function_1e3a728(*(int32_t *)(v1 + 46));
    g5 = g8;
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e3b297
        g2 = function_1e3df60(g8);
    }
    // 0x1e3b2a0
    g2 = g8;
    return g8;
}

// Address range: 0x1e3b2a6 - 0x1e3b2dd
int32_t function_1e3b2a6(void) {
    int32_t v1 = g5; // 0x1e3b2a7
    int32_t v2 = *(int32_t *)(v1 + 70); // 0x1e3b2a7
    g2 = v2;
    g8 = v1;
    int32_t v3; // 0x1e3b2b6
    if (v2 != 0) {
        // 0x1e3b2b0
        g2 = function_1e32771(v2);
        v3 = g8;
    } else {
        v3 = v1;
    }
    // 0x1e3b2b6
    *(int32_t *)(v3 + 70) = 0;
    int32_t v4 = g8; // 0x1e3b2bd
    int32_t v5 = *(int32_t *)(v4 + 66); // 0x1e3b2bd
    g2 = v5;
    int32_t v6; // 0x1e3b2cc
    if (v5 != 0) {
        // 0x1e3b2c4
        *(int32_t *)(g9 - 4) = v5;
        g2 = function_1e32771((int32_t)&g708);
        v6 = g8;
    } else {
        v6 = v4;
    }
    // 0x1e3b2ca
    g2 = 0;
    g5 = *(int32_t *)(v6 + 54);
    *(int32_t *)(v6 + 66) = 0;
    *(int32_t *)(g8 + 58) = g2;
    *(int32_t *)(g8 + 62) = g2;
    *(int32_t *)(g8 + 50) = g5;
    g8 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e3b2dd - 0x1e3b2f5
int32_t function_1e3b2dd(int32_t a1, int32_t a2) {
    // 0x1e3b2dd
    g5 = a1;
    *(int32_t *)(a1 + 70) = 0;
    int32_t result = *(int32_t *)g5; // 0x1e3b2eb
    g2 = result;
    return result;
}

// Address range: 0x1e3b2f5 - 0x1e3b358
int32_t function_1e3b2f5(int32_t a1) {
    int32_t v1 = g5; // 0x1e3b2fd
    int32_t v2 = v1 + 70; // 0x1e3b2fd
    g6 = v2;
    g8 = v1;
    int32_t v3 = *(int32_t *)v2; // 0x1e3b302
    g2 = v3;
    int32_t v4; // 0x1e3b316
    if (v3 != 0) {
        // 0x1e3b308
        g2 = function_1e32771(v3);
        v4 = g6;
    } else {
        v4 = v2;
    }
    // 0x1e3b30e
    g2 = 0;
    *(int32_t *)v4 = 0;
    if (g2 < a1) {
        // 0x1e3b31d
        g5 = g8 + 50;
    } else {
        uint32_t v5 = (int32_t)__asm_fnstsw(g10); // 0x1e3b32a
        g2 = g2 & -0x10000 | v5;
        if ((v5 / 256 & 65) != 0) {
            // 0x1e3b348
            g2 = 0;
            *(int32_t *)(g8 + 58) = 0;
            *(int32_t *)(g8 + 62) = g2;
            // 0x1e3b350
            return g2;
        }
        // 0x1e3b32f
        g5 = g8 + 50;
        a1 = *(int32_t *)(g8 + 54);
    }
    // 0x1e3b335
    g2 = a1;
    *(int32_t *)(g9 - 4) = 0x1e3b2dd;
    *(int32_t *)g5 = g2;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = *(int32_t *)g5;
    int32_t v6 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3b33f
    g2 = v6;
    *(int32_t *)g6 = v6;
    // 0x1e3b350
    return g2;
}

// Address range: 0x1e3b358 - 0x1e3b37f
int32_t function_1e3b358(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g8; // 0x1e3b358
    int32_t v2 = *(int32_t *)(g5 + 46); // 0x1e3b359
    g5 = v2;
    g2 = 0;
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x1e3b35e
    g7 = v3;
    if (v3 < 1) {
      lab_0x1e3b378_2:
        // 0x1e3b378
        g2 = -1;
        // 0x1e3b37d
        g8 = v1;
        return -1;
    }
    int32_t v4 = v2 + 8; // 0x1e3b365
    g5 = v4;
    int32_t result = 0; // 0x1e3b373
    while (true) {
        // 0x1e3b368
        if (*(int32_t *)(*(int32_t *)v4 + 78) == 0) {
            // break -> 0x1e3b37d
            break;
        }
        int32_t v5 = v4 + 4; // 0x1e3b370
        g5 = v5;
        int32_t v6 = result + 1; // 0x1e3b373
        g2 = v6;
        if (v3 <= v6) {
            goto lab_0x1e3b378_2;
        }
        result = v6;
        v4 = v5;
    }
    // 0x1e3b37d
    g8 = v1;
    return result;
}

// Address range: 0x1e3b37f - 0x1e3b3a0
int32_t function_1e3b37f(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = *(int32_t *)(g5 + 46); // 0x1e3b37f
    g5 = v1;
    int32_t result = *(int32_t *)(v1 + 4) - 1; // 0x1e3b385
    g2 = result;
    if (result < 0) {
      lab_0x1e3b39a_2:
        // 0x1e3b39a
        g2 = -1;
        // 0x1e3b39f
        return -1;
    }
    int32_t v2 = v1 + 8 + 4 * result; // 0x1e3b388
    g5 = v2;
    while (true) {
        int32_t v3 = *(int32_t *)v2; // 0x1e3b38c
        g7 = v3;
        if (*(int32_t *)(v3 + 78) != 0) {
            // break -> 0x1e3b39f
            break;
        }
        int32_t v4 = v2 - 4; // 0x1e3b394
        g5 = v4;
        int32_t v5 = result - 1; // 0x1e3b397
        g2 = v5;
        if (v5 < 0) {
            goto lab_0x1e3b39a_2;
        }
        result = v5;
        v2 = v4;
    }
    // 0x1e3b39f
    return result;
}

// Address range: 0x1e3b3a0 - 0x1e3b3d5
int32_t function_1e3b3a0(void) {
    int32_t v1 = g6; // bp-8
    int32_t v2 = &v1; // 0x1e3b3a1
    int32_t v3 = g5; // 0x1e3b3a2
    int32_t v4 = *(int32_t *)(v3 + 46); // 0x1e3b3a2
    g2 = v4;
    int32_t result = *(int32_t *)(v4 + 4) - 1; // 0x1e3b3aa
    g2 = result;
    if (result < 0) {
        // 0x1e3b3d2
        g8 = *(int32_t *)(v2 + 4);
        return result;
    }
    int32_t v5 = 4 * result; // edi
    g2 = *(int32_t *)(v3 + 46);
    *(int32_t *)(v2 - 4) = 0;
    int32_t v6 = *(int32_t *)(g2 + 8 + v5); // 0x1e3b3b9
    g5 = v6;
    int32_t v7 = v2 - 8; // 0x1e3b3c7
    *(int32_t *)v7 = *(int32_t *)(v6 + 78) == 0 ? 8 : 9;
    int32_t result2 = *(int32_t *)g5; // 0x1e3b3c9
    g2 = result2;
    int32_t v8 = v5 - 4; // 0x1e3b3cd
    v5 = v8;
    while (v8 >= 0) {
        // 0x1e3b3b4
        v2 = v7;
        g2 = *(int32_t *)(v3 + 46);
        *(int32_t *)(v2 - 4) = 0;
        v6 = *(int32_t *)(g2 + 8 + v5);
        g5 = v6;
        v7 = v2 - 8;
        *(int32_t *)v7 = *(int32_t *)(v6 + 78) == 0 ? 8 : 9;
        result2 = *(int32_t *)g5;
        g2 = result2;
        v8 = v5 - 4;
        v5 = v8;
    }
    // 0x1e3b3d2
    g8 = *(int32_t *)(v7 + 4);
    return result2;
}

// Address range: 0x1e3b3d5 - 0x1e3b3eb
int32_t function_1e3b3d5(int32_t a1) {
    // 0x1e3b3d5
    g2 = a1;
    *(int32_t *)(a1 + 66) = 0;
    int32_t result = function_1e328b9(61, a1); // 0x1e3b3e3
    g2 = result;
    return result;
}

