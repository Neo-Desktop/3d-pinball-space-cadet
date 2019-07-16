#include "pinball.h"

// Address range: 0x1e32545 - 0x1e325b8
int32_t function_1e32545(int32_t a1) {
    // 0x1e32545
    g6 = a1;
    int32_t v1 = 20 * a1; // 0x1e3254d
    g8 = v1;
    int32_t v2 = function_1e25371(v1); // 0x1e32551
    g2 = v2;
    char * v3 = (char *)v2; // 0x1e32556
    g568 = v3;
    int32_t result;
    if (v2 == 0) {
        result = 1;
        // 0x1e325b3
        g2 = result;
        g6 = v1;
        return result;
    }
    // 0x1e32566
    g7 = 0;
    g566 = g6;
    g564 = 0;
    g205 = 1;
    char * v4; // 0x1e32596
    if (g6 >= 2) {
        // 0x1e32583
        g2 = v2;
        g7 = 20;
        int32_t v5 = g6 - 2; // 0x1e3258d12
        int32_t v6 = v2 + 20; // 0x1e3258e14
        g5 = v6;
        *(int32_t *)(v2 + 12) = v6;
        if (v5 != 0) {
            int32_t v7 = g7;
            int32_t v8 = (int32_t)g568 + v7; // 0x1e32588
            g2 = v8;
            g7 = v7 + 20;
            int32_t v9 = v5 - 1; // 0x1e3258d
            int32_t v10 = v8 + 20; // 0x1e3258e
            g5 = v10;
            *(int32_t *)(v8 + 12) = v10;
            while (v9 != 0) {
                // 0x1e32583
                v7 = g7;
                v8 = (int32_t)g568 + v7;
                g2 = v8;
                g7 = v7 + 20;
                v9--;
                v10 = v8 + 20;
                g5 = v10;
                *(int32_t *)(v8 + 12) = v10;
            }
        }
        // 0x1e32596
        v4 = g568;
    } else {
        v4 = v3;
    }
    // 0x1e32596
    g5 = 0;
    *(int32_t *)((int32_t)v4 - 8 + g8) = 0;
    g2 = (int32_t)g568;
    g565 = g568;
    g567 = (char *)g5;
    result = 0;
    // 0x1e325b3
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e325b8 - 0x1e325d2
int32_t function_1e325b8(void) {
    int32_t v1 = (int32_t)g568; // 0x1e325b8
    g2 = v1;
    int32_t result; // 0x1e325c2
    if (g568 != NULL) {
        // 0x1e325c1
        result = function_1e25401(v1);
        g2 = result;
    } else {
        result = v1;
    }
    // 0x1e325c7
    g568 = NULL;
    return result;
}

// Address range: 0x1e325d2 - 0x1e32692
int32_t function_1e325d2(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e325d2
    g11--;
    g684 = 1000.0L * (float80_t)(float32_t)a1;
    int32_t v1 = g6; // 0x1e325de
    g7 = (int32_t)g204 + __ftol();
    g2 = g566;
    int32_t result;
    if (g564 >= g566) {
        result = 0;
        // 0x1e3268c
        g2 = result;
        g6 = v1;
        return result;
    }
    int32_t v2 = (int32_t)g565; // 0x1e32600
    g5 = v2;
    int32_t v3 = v2 + 12; // 0x1e32608
    int32_t * v4 = (int32_t *)v3; // 0x1e3260b
    g565 = (char *)*v4;
    *v4 = 0;
    int32_t v5 = (int32_t)g567; // 0x1e32614
    int32_t v6 = v5; // ebx
    int32_t v7 = g564; // 0x1e3261a
    int32_t v8 = 0; // 0x1e3261a
    g2 = v5;
    int32_t v9; // 0x1e32636
    int32_t v10; // 0x1e32649
    if (v7 > v8) {
        int32_t v11 = v5; // 0x1e3263614
        int32_t v12 = v5; // 0x1e32628
        int32_t v13; // 0x1e3263611
        int32_t v14; // 0x1e3263613
        while (true) {
            // 0x1e32624
            if ((char *)*(int32_t *)v12 > (char *)g7) {
                v14 = v11;
                v13 = v12;
                // break -> 0x1e32636
                break;
            }
            // 0x1e32628
            v6 = v12;
            int32_t v15 = v8 + 1; // 0x1e3262a
            int32_t v16 = *(int32_t *)(v12 + 12); // 0x1e3262b
            g2 = v16;
            if (v15 >= v7) {
                v14 = v12;
                v13 = v16;
                // break -> 0x1e32636
                break;
            }
            v11 = v12;
            v12 = v16;
            v8 = v15;
        }
        v10 = v14;
        v9 = v13;
    } else {
        v10 = v5;
        v9 = v5;
    }
    int32_t v17; // 0x1e3265b
    if (v9 != v10) {
        int32_t v18 = *(int32_t *)(v10 + 12); // 0x1e32649
        g2 = v18;
        *(int32_t *)v3 = v18;
        *(int32_t *)(v6 + 12) = g5;
        v17 = g5;
    } else {
        // 0x1e3263a
        g2 = v5;
        *(int32_t *)v3 = v5;
        int32_t v19 = g5; // 0x1e32641
        g567 = (char *)v19;
        v17 = v19;
    }
    // 0x1e32651
    g2 = a2;
    g564++;
    *(int32_t *)v17 = g7;
    g7 = a3;
    *(int32_t *)(g5 + 4) = g2;
    *(int32_t *)(g5 + 8) = g7;
    *(int32_t *)(g5 + 16) = g205;
    int32_t v20 = g205 + 1; // 0x1e32670
    int32_t v21;
    if (v20 >= 0 != v20 != 0) {
        v21 = 1;
    } else {
        v21 = v20;
    }
    // 0x1e32689
    g205 = v21;
    result = *(int32_t *)(g5 + 16);
    // 0x1e3268c
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e32692 - 0x1e32771
int32_t function_1e32692(void) {
    int32_t v1 = 0; // ebx
    char * v2 = g567; // 0x1e3269d
    int32_t result; // 0x1e32768
    if (v2 == NULL) {
        result = 0;
    } else {
        int32_t v3 = 0; // 0x1e326be
        int32_t v4; // bp-24
        int32_t v5;
        char * v6; // 0x1e32701
        int32_t v7; // 0x1e327689
        while (true) {
            // 0x1e326a5
            g2 = (int32_t)v2;
            g5 = (int32_t)g204;
            if ((char *)*(int32_t *)v2 > g204) {
                v7 = v3;
                v6 = v2;
                // break -> 0x1e32701
                break;
            }
            // 0x1e326b4
            g5 = 5;
            v1 = v3 + 1;
            __asm_rep_movsd_memcpy((char *)&v4, v2, 5);
            int32_t v8 = (int32_t)g567; // 0x1e326c1
            int32_t v9 = v8 + 12; // 0x1e326c7
            g5 = v9;
            int32_t * v10 = (int32_t *)v9; // 0x1e326ca
            g567 = (char *)*v10;
            int32_t v11 = (int32_t)g565; // 0x1e326d1
            g2 = v11;
            *v10 = v11;
            g565 = (char *)v8;
            g564--;
            if (v5 != 0) {
                // branch -> 0x1e326f3
            }
            char * v12 = g567;
            if (v1 > 1) {
                v7 = v1;
                v6 = v12;
                // break -> 0x1e32701
                break;
            }
            if (v12 == NULL) {
                v7 = v1;
                v6 = v12;
                // break -> 0x1e32701
                break;
            }
            v3 = v1;
            v2 = v12;
        }
        if (v6 != NULL) {
            int32_t v13 = v7; // 0x1e327687
            char * v14 = v6; // 0x1e3271f
            while (true) {
                // 0x1e3270a
                g2 = (int32_t)v14;
                int32_t v15 = *(int32_t *)v14 + 100; // 0x1e32711
                g2 = v15;
                if ((char *)v15 > g204) {
                    result = v13;
                    // break -> 0x1e32768
                    break;
                }
                // 0x1e3271c
                g5 = 5;
                __asm_rep_movsd_memcpy((char *)&v4, v14, 5);
                int32_t v16 = (int32_t)g567; // 0x1e3272c
                g5 = v16;
                int32_t * v17 = (int32_t *)(v16 + 12); // 0x1e32735
                g567 = (char *)*v17;
                int32_t v18 = (int32_t)g565; // 0x1e3273c
                g2 = v18;
                *v17 = v18;
                g565 = (char *)g5;
                g564--;
                if (v5 != 0) {
                    // branch -> 0x1e3275e
                }
                int32_t v19 = v1 + 1; // 0x1e3275e
                v1 = v19;
                char * v20 = g567; // 0x1e3275f
                if (v20 == NULL) {
                    result = v19;
                    // break -> 0x1e32768
                    break;
                }
                v13 = v19;
                v14 = v20;
            }
        } else {
            result = v7;
        }
    }
    // 0x1e32768
    g2 = result;
    g6 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e32771 - 0x1e327ca
int32_t function_1e32771(int32_t a1) {
    int32_t v1 = g8; // bp-4
    g7 = 0;
    int32_t v2 = (int32_t)g567; // 0x1e32774
    g5 = 0;
    if (g564 <= 0) {
      lab_0x1e3279b_2:
        // 0x1e3279b
        g2 = 0;
        // 0x1e3279d
        return 0;
    }
    // 0x1e32784
    g2 = a1;
    int32_t v3 = 0; // 0x1e327a8
    int32_t v4 = 0; // 0x1e3278f
    while (true) {
        // 0x1e32788
        if (*(int32_t *)(v2 + 16) == a1) {
            // break -> 0x1e327a1
            break;
        }
        // 0x1e3278d
        g7 = v2;
        int32_t v5 = v4 + 1; // 0x1e3278f
        g5 = v5;
        int32_t v6 = *(int32_t *)(v2 + 12); // 0x1e32790
        if (g564 <= v5) {
            goto lab_0x1e3279b_2;
        }
        v3 = v6;
        v2 = v6;
        v4 = v5;
    }
    int32_t v7 = *(int32_t *)(v2 + 12); // 0x1e327a1
    g5 = v7;
    if (v3 == 0) {
        // 0x1e327ad
        g567 = (char *)v7;
    } else {
        // 0x1e327a8
        *(int32_t *)(v3 + 12) = v7;
    }
    int32_t v8 = (int32_t)g565; // 0x1e327b3
    g5 = v8;
    *(int32_t *)(v2 + 12) = v8;
    g565 = (char *)v2;
    g564--;
    // 0x1e3279d
    g8 = v1;
    return g2;
}

// Address range: 0x1e327ca - 0x1e32850
int32_t function_1e327ca(int32_t a1) {
    int32_t v1 = g3; // bp-16
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x1e327d2
    int32_t result = *v2; // 0x1e327d2
    g2 = result;
    if (result != 0) {
        // 0x1e32840
        return result;
    }
    // 0x1e327d9
    g2 = g206;
    int32_t * v3 = (int32_t *)(g206 + 254); // 0x1e327e0
    int32_t v4 = *v3; // 0x1e327e0
    g5 = v4;
    uint32_t v5 = *(int32_t *)(v4 + 4); // 0x1e327e6
    int32_t v6; // 0x1e327fa
    if (v5 >= 1) {
        // 0x1e327ed
        g5 = 0;
        int32_t v7 = 0; // 0x1e32839
        int32_t v8 = 0; // 0x1e32836
        while (true) {
            // 0x1e327ef
            g2 = g206;
            int32_t v9 = *v3; // 0x1e327f4
            v6 = *(int32_t *)(v8 + 8 + v9);
            g2 = v6;
            int32_t v10 = *(int32_t *)(v6 + 10); // 0x1e327fe
            if (v10 != 0) {
                int32_t v11 = *(int32_t *)a1; // 0x1e32822
                bool v12; // 0x1e3282d
                while (true) {
                    unsigned char v13 = *(char *)v10; // 0x1e3280d
                    int32_t v14 = v9 & -256; // 0x1e3280d
                    unsigned char v15 = *(char *)v11; // 0x1e3280f
                    if (v13 != v15) {
                        v12 = v13 < v15;
                        // break -> 0x1e32832
                        break;
                    }
                    if (v13 == 0) {
                        goto lab_0x1e32847;
                    }
                    unsigned char v16 = *(char *)(v10 + 1); // 0x1e32817
                    unsigned char v17 = *(char *)(v11 + 1); // 0x1e3281a
                    if (v16 != v17) {
                        v12 = v16 < v17;
                        // break -> 0x1e32832
                        break;
                    }
                    // 0x1e3281f
                    if (v16 == 0) {
                        goto lab_0x1e32847;
                    }
                    v11 += 2;
                    v9 = (int32_t)v16 | v14;
                    v10 += 2;
                }
                int32_t v18 = v12; // 0x1e3282d
                uint32_t v19 = v18 + v10; // 0x1e3282d
                bool v20 = v12 ? v10 < (int32_t)v12 - v18 | v19 != -1 : v10 < v19; // 0x1e3282d
                if (v12 == !v20) {
                    goto lab_0x1e32847;
                }
            }
            int32_t v21 = v8 + 4; // 0x1e32836
            g5 = v21;
            int32_t v22 = v7 + 1; // 0x1e32839
            if (v22 >= v5) {
                // break -> 0x1e3283e
                break;
            }
            v7 = v22;
            v8 = v21;
        }
    }
    // 0x1e3283e
    g2 = 0;
    int32_t result2 = 0; // 0x1e32844
    // 0x1e32840
    return result2;
  lab_0x1e32847:
    // 0x1e32847
    *v2 = v6;
    result2 = g2;
    g3 = v1;
    return result2;
}

// Address range: 0x1e32850 - 0x1e328b9
int32_t function_1e32850(int32_t a1) {
    // 0x1e32850
    g2 = a1;
    g206 = a1;
    g8 = 88;
    int32_t v1 = g3; // bp-16
    g6 = (int32_t)&g417;
    int32_t v2 = v1; // 0x1e32867
    int32_t v3 = (int32_t)&g417; // 0x1e32867
    while (true) {
        // 0x1e32867
        *(int32_t *)(v2 - 4) = *(int32_t *)v3;
        int32_t v4 = function_1e327ca((int32_t)&g708); // 0x1e32869
        g2 = v4;
        int32_t v5 = g6;
        int32_t v6; // 0x1e32895
        if (v4 != 0) {
            int32_t v7 = v5 + 4; // 0x1e32874
            g2 = v7;
            g3 = 0;
            *(int32_t *)(v4 + 18) = v7;
            int32_t v8 = g6; // 0x1e3287c
            int32_t v9 = g3; // 0x1e3287c
            if (*(int32_t *)(v8 + 8) > v9) {
                int32_t v10 = g9; // 0x1e32886
                int32_t v11 = *(int32_t *)(v8 + 12); // 0x1e32881
                g2 = v11;
                g5 = v4;
                *(int32_t *)(v10 - 4) = *(int32_t *)(v11 + 4 * v9);
                int32_t v12 = v10 - 8; // 0x1e32889
                *(int32_t *)v12 = g3;
                g2 = *(int32_t *)v4;
                int32_t v13 = g3 + 1; // 0x1e3288c
                g3 = v13;
                int32_t v14 = g6; // 0x1e32890
                while (*(int32_t *)(v14 + 8) > v13) {
                    // 0x1e32881
                    v10 = v12;
                    v11 = *(int32_t *)(v14 + 12);
                    g2 = v11;
                    g5 = v4;
                    *(int32_t *)(v10 - 4) = *(int32_t *)(v11 + 4 * v13);
                    v12 = v10 - 8;
                    *(int32_t *)v12 = g3;
                    g2 = *(int32_t *)v4;
                    v13 = g3 + 1;
                    g3 = v13;
                    v14 = g6;
                }
                v6 = v14;
            } else {
                v6 = v8;
            }
        } else {
            v6 = v5;
        }
        int32_t v15 = v6 + 16; // 0x1e32895
        g6 = v15;
        int32_t v16 = g8 - 1; // 0x1e32898
        g8 = v16;
        if (v16 == 0) {
            // break -> 0x1e3289b
            break;
        }
        // 0x1e32895
        v2 = g9;
        v3 = v15;
    }
    // 0x1e3289b
    g8 = g418;
    *(int32_t *)(g9 - 4) = *(int32_t *)(int32_t)&g418;
    int32_t result = function_1e327ca((int32_t)&g708); // 0x1e328a2
    g2 = result;
    int32_t v17 = g8 + 4; // 0x1e328a7
    g8 = v17;
    while (v17 < (int32_t)&g419) {
        // 0x1e328a0
        *(int32_t *)(g9 - 4) = *(int32_t *)v17;
        result = function_1e327ca((int32_t)&g708);
        g2 = result;
        v17 = g8 + 4;
        g8 = v17;
    }
    // 0x1e328b2
    g6 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e328b9 - 0x1e32907
int32_t function_1e328b9(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-16
    int32_t v2 = v1; // 0x1e328c0
    int32_t v3 = *(int32_t *)(a2 + 18); // 0x1e328c1
    int32_t v4; // 0x1e328f6
    if (v3 != 0) {
        int32_t v5; // 0x1e328ef
        if (a1 == 1019) {
            int32_t v6 = 0; // ebx
            int32_t * v7 = (int32_t *)(v3 + 4); // 0x1e328d4
            if (*v7 > 0) {
                int32_t v8 = *(int32_t *)a2; // 0x1e328d9
                g2 = v8;
                g3 = *(int32_t *)(v8 + 12);
                int32_t v9 = v2; // 0x1e328e3
                int32_t v10 = *(int32_t *)(v3 + 8); // 0x1e328de
                g2 = v10;
                g5 = a2;
                *(int32_t *)(v9 - 4) = *(int32_t *)v10;
                int32_t v11 = v9 - 8; // 0x1e328e6
                *(int32_t *)v11 = v6;
                int32_t v12 = v6 + 1; // 0x1e328e7
                v6 = v12;
                while (*v7 > v12) {
                    // 0x1e328de
                    v9 = v11;
                    v10 = *(int32_t *)(v3 + 8);
                    g2 = v10;
                    g5 = a2;
                    *(int32_t *)(v9 - 4) = *(int32_t *)(v10 + 4 * v12);
                    v11 = v9 - 8;
                    *(int32_t *)v11 = v6;
                    v12 = v6 + 1;
                    v6 = v12;
                }
                // 0x1e328ef
                v5 = v11;
            } else {
                v5 = v2;
            }
        } else {
            v5 = v2;
        }
        // 0x1e328ef
        *(int32_t *)(v5 - 4) = a2;
        int32_t v13 = v5 - 8; // 0x1e328f0
        *(int32_t *)v13 = *(int32_t *)(v5 + 20);
        v4 = v13;
    } else {
        v4 = v2;
    }
    // 0x1e328f6
    *(int32_t *)(v4 - 4) = a2;
    *(int32_t *)(v4 - 8) = *(int32_t *)(v4 + 20);
    int32_t result = function_1e38d82((int32_t)&g708, (int32_t)&g708); // 0x1e328fb
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e32907 - 0x1e32928
int32_t function_1e32907(int32_t a1) {
    int32_t result; // 0x1e32925
    if (a1 != 1011) {
        // 0x1e32907
        result = g2;
    } else {
        // 0x1e32911
        g2 = 0;
        g5 = g354;
        g207 = 0;
        int32_t v1 = *(int32_t *)g354; // 0x1e32921
        g2 = v1;
        result = v1;
    }
    // 0x1e32925
    return result;
}

// Address range: 0x1e32928 - 0x1e32955
int32_t function_1e32928(int32_t a1) {
    // 0x1e32928
    g2 = g358;
    g5 = g358;
    int32_t v1 = function_1e25763(0); // 0x1e32940
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e3294c
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e32955 - 0x1e32970
int32_t function_1e32955(void) {
    int32_t v1 = function_1e25763(16); // 0x1e3295e
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e3296a
    g2 = result;
    return result;
}

// Address range: 0x1e32970 - 0x1e329ab
int32_t function_1e32970(void) {
    // 0x1e32970
    g2 = g206;
    *(int32_t *)(g206 + 318) = 1;
    g5 = g300;
    g2 = *(int32_t *)g300;
    int32_t v1 = function_1e25763(15); // 0x1e32999
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e329a5
    g2 = result;
    return result;
}

// Address range: 0x1e329ab - 0x1e329e6
int32_t function_1e329ab(void) {
    // 0x1e329ab
    g2 = g206;
    *(int32_t *)(g206 + 310) = 1;
    g5 = g301;
    g2 = *(int32_t *)g301;
    int32_t v1 = function_1e25763(4); // 0x1e329d4
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e329e0
    g2 = result;
    return result;
}

// Address range: 0x1e329e6 - 0x1e32a34
int32_t function_1e329e6(void) {
    // 0x1e329e6
    g2 = g262;
    g5 = g262;
    g2 = *(int32_t *)g262;
    g5 = g276;
    g2 = *(int32_t *)g276;
    g5 = g299;
    int32_t v1 = function_1e25763(51); // 0x1e32a21
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e32a2d
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e32a34 - 0x1e32a62
int32_t function_1e32a34(void) {
    // 0x1e32a34
    g2 = g302;
    g2 = *(int32_t *)g302;
    g5 = g302;
    int32_t v1 = function_1e25763(52); // 0x1e32a50
    g2 = v1;
    g5 = g391;
    int32_t result = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e32a5c
    g2 = result;
    return result;
}

// Address range: 0x1e32a62 - 0x1e32ace
int32_t function_1e32a62(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t v1 = g206 + 342; // 0x1e32a68
    g5 = v1;
    int32_t * v2 = (int32_t *)v1; // 0x1e32a6e
    int32_t v3 = *v2; // 0x1e32a6e
    g2 = v3;
    int32_t result; // 0x1e32ac9
    if (v3 != 2) {
        int32_t v4 = v3 + 1; // 0x1e32a8c
        g2 = v4;
        *v2 = v4;
        g5 = g377;
        g2 = *(int32_t *)g377;
        g11++;
        int32_t v5 = function_1e25763(1); // 0x1e32aa5
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        int32_t v6 = *(int32_t *)(g206 + 222); // 0x1e32ac3
        g5 = v6;
        result = *(int32_t *)v6;
        g2 = result;
    } else {
        // 0x1e32a75
        g2 = function_1e32955();
        g5 = g206;
        *(int32_t *)(g206 + 342) = 0;
        result = g2;
    }
    // 0x1e32acd
    return result;
}

// Address range: 0x1e32ace - 0x1e32b02
int32_t function_1e32ace(int32_t a1) {
    // 0x1e32ace
    g2 = g206;
    int32_t * v1 = (int32_t *)(g206 + 334); // 0x1e32ad3
    *v1 = *v1 + 1;
    g5 = g365;
    g2 = *(int32_t *)g365;
    g11++;
    int32_t v2 = function_1e25763(9); // 0x1e32aee
    g2 = v2;
    g5 = g391;
    int32_t result = function_1e2fbc7(v2, (int32_t)&g708); // 0x1e32afa
    g2 = result;
    return result;
}

// Address range: 0x1e32b02 - 0x1e32b77
int32_t function_1e32b02(int32_t a1) {
    int32_t v1 = g8; // 0x1e32b09
    int32_t v2 = g206 + 310; // 0x1e32b0a
    g5 = v2;
    int32_t v3 = g6; // 0x1e32b10
    g2 = g206;
    int32_t * v4 = (int32_t *)v2; // 0x1e32b16
    g6 = *v4;
    int32_t v5 = 0; // edx
    *v4 = 0;
    *(int32_t *)(g206 + 318) = v5;
    g2 = g206;
    *(int32_t *)(g206 + 294) = v5;
    g5 = g206;
    g2 = function_1e2e6c7(a1);
    *(int32_t *)(g206 + 310) = g6;
    g6 = a1;
    *(int32_t *)(g206 + 318) = g8;
    g5 = g206;
    g8 = v3;
    g4 = v1;
    return g2;
}

// Address range: 0x1e32b77 - 0x1e32c37
int32_t function_1e32b77(int32_t a1) {
    // 0x1e32b77
    g2 = g325;
    int32_t v1 = *(int32_t *)(g325 + 6); // 0x1e32b82
    g2 = v1;
    if (v1 == 16) {
        // 0x1e32c30
        return 16;
    }
    if (v1 == 22) {
        // 0x1e32c30
        return 22;
    }
    if (v1 == 23) {
        // 0x1e32c30
        return 23;
    }
    // 0x1e32ba1
    g2 = g284;
    int32_t v2 = *(int32_t *)(g284 + 6); // 0x1e32baa
    if (a1 == 0) {
        if (v2 == 0) {
            // 0x1e32c30
            return g284;
        }
    }
    // 0x1e32bb3
    int32_t v3; // 0x1e32be3
    if (v2 == 3) {
        v3 = 1;
    } else {
        v3 = v2 + 1;
    }
    int32_t result = 3 - v3; // 0x1e32be3
    g2 = result;
    g5 = g284;
    if (*(int32_t *)(g284 + 78) != 0 || *(int32_t *)(g284 + 90) != 0) {
        // 0x1e32c30
        return result;
    }
    // 0x1e32c0c
    int32_t result2; // 0x1e32c17
    if (*(int32_t *)(g284 + 82) == 0) {
        // 0x1e32c11
        g2 = g283;
        result2 = *(int32_t *)g283;
        g2 = result2;
        g5 = g287;
    } else {
        result2 = result;
    }
    // 0x1e32c30
    return result2;
}

// Address range: 0x1e32c37 - 0x1e32c6e
int32_t function_1e32c37(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e32c6b
    if (a2 != 63) {
        // 0x1e32c37
        result = g2;
    } else {
        // 0x1e32c3e
        g2 = g232;
        g2 = *(int32_t *)g232;
        g5 = a1;
        int32_t v1 = *(int32_t *)a1; // 0x1e32c5a
        g2 = v1;
        g5 = g206;
        int32_t v2 = function_1e2e6c7(v1); // 0x1e32c66
        g2 = v2;
        result = v2;
    }
    // 0x1e32c6b
    return result;
}

// Address range: 0x1e32c6e - 0x1e32ca5
int32_t function_1e32c6e(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e32ca2
    if (a2 != 63) {
        // 0x1e32c6e
        result = g2;
    } else {
        // 0x1e32c75
        g2 = g233;
        g2 = *(int32_t *)g233;
        g5 = a1;
        int32_t v1 = *(int32_t *)a1; // 0x1e32c91
        g2 = v1;
        g5 = g206;
        int32_t v2 = function_1e2e6c7(v1); // 0x1e32c9d
        g2 = v2;
        result = v2;
    }
    // 0x1e32ca2
    return result;
}

// Address range: 0x1e32ca5 - 0x1e32cc6
int32_t function_1e32ca5(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e32cc3
    if (a1 != 63) {
        // 0x1e32ca5
        result = g2;
    } else {
        // 0x1e32cac
        g5 = a2;
        int32_t v1 = *(int32_t *)a2; // 0x1e32cb2
        g2 = v1;
        g5 = g206;
        int32_t v2 = function_1e2e6c7(v1); // 0x1e32cbe
        g2 = v2;
        result = v2;
    }
    // 0x1e32cc3
    return result;
}

// Address range: 0x1e32cc6 - 0x1e32ce8
int32_t function_1e32cc6(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e32ce5
    if (a1 != 63) {
        // 0x1e32cc6
        result = g2;
    } else {
        // 0x1e32ccd
        g5 = a2;
        int32_t v1 = *(int32_t *)a2; // 0x1e32cd1
        g2 = v1;
        g5 = g206;
        int32_t v2 = function_1e2e6c7(v1); // 0x1e32ce0
        g2 = v2;
        result = v2;
    }
    // 0x1e32ce5
    return result;
}

// Address range: 0x1e32ce8 - 0x1e32d05
int32_t function_1e32ce8(int32_t a1) {
    int32_t result; // 0x1e32d02
    if (a1 != 60) {
        // 0x1e32ce8
        result = g2;
    } else {
        // 0x1e32cef
        g2 = g236;
        int32_t v1 = *(int32_t *)g236; // 0x1e32cf6
        g2 = v1;
        g5 = g236;
        result = v1;
    }
    // 0x1e32d02
    return result;
}

// Address range: 0x1e32d05 - 0x1e32d22
int32_t function_1e32d05(int32_t a1) {
    int32_t result; // 0x1e32d1f
    if (a1 != 60) {
        // 0x1e32d05
        result = g2;
    } else {
        // 0x1e32d0c
        g2 = g237;
        int32_t v1 = *(int32_t *)g237; // 0x1e32d13
        g2 = v1;
        g5 = g237;
        result = v1;
    }
    // 0x1e32d1f
    return result;
}

// Address range: 0x1e32d22 - 0x1e32d7a
int32_t function_1e32d22(int32_t a1) {
    // 0x1e32d22
    g2 = a1;
    if (a1 == 53) {
        // 0x1e32d33
        g2 = g238;
        g5 = g238;
        int32_t result = *(int32_t *)g238; // 0x1e32d46
        g2 = result;
        g5 = g240;
        // 0x1e32d76
        return result;
    }
    int32_t result2; // 0x1e32d72
    if (a1 == 54) {
        // 0x1e32d59
        g2 = g238;
        g5 = g240;
        result2 = *(int32_t *)g240;
        g2 = result2;
    } else {
        result2 = a1;
    }
    // 0x1e32d76
    return result2;
}

// Address range: 0x1e32d7a - 0x1e32dd2
int32_t function_1e32d7a(int32_t a1) {
    // 0x1e32d7a
    g2 = a1;
    if (a1 == 53) {
        // 0x1e32d8b
        g2 = g239;
        g5 = g239;
        int32_t result = *(int32_t *)g239; // 0x1e32d9e
        g2 = result;
        g5 = g241;
        // 0x1e32dce
        return result;
    }
    int32_t result2; // 0x1e32dca
    if (a1 == 54) {
        // 0x1e32db1
        g2 = g239;
        g5 = g241;
        result2 = *(int32_t *)g241;
        g2 = result2;
    } else {
        result2 = a1;
    }
    // 0x1e32dce
    return result2;
}

// Address range: 0x1e32dd2 - 0x1e32ead
int32_t function_1e32dd2(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = v1;
    int32_t v2; // bp-68
    int32_t v3 = v2; // 0x1e32dd5
    if (a1 != 63) {
        // 0x1e32ea4
        return g2;
    }
    // 0x1e32de5
    g2 = g353;
    g5 = g353;
    if (g353 == 0) {
        // 0x1e32ea4
        return 0;
    }
    // 0x1e32dff
    g2 = g387;
    g6 = g353 - 1;
    g5 = g387;
    g4 = *(int32_t *)g387;
    int3_t v4; // fpu_stat_TOP
    g11 = v4 + 1;
    g5 = a2;
    int32_t v5 = *(int32_t *)a2; // 0x1e32e12
    g2 = v5;
    g5 = g206;
    g2 = function_1e2e6c7(v5);
    int32_t v6 = function_1e25763(21); // 0x1e32e27
    g2 = v6;
    g5 = v3;
    g2 = function_1e3d7a0(v3, (char *)v6);
    g5 = g391;
    g2 = function_1e2fbc7(v3, 0x40000000);
    g5 = g249;
    if (*(int32_t *)(g249 + 78) == g8) {
        // 0x1e32e58
        if (*(int32_t *)(g249 + 90) == g8) {
            // 0x1e32e5d
            if (*(int32_t *)(g249 + 82) == g8) {
                // 0x1e32e62
                g2 = *(int32_t *)g294;
                g5 = g294;
                g2 = *(int32_t *)g295;
                g5 = g295;
            }
        }
    }
    // 0x1e32e92
    *(int32_t *)(g9 - 4) = 0x3f800000;
    g2 = g353;
    *(int32_t *)(g9 - 8) = 44;
    int32_t result = g2; // 0x1e32ea0
    g5 = result;
    // 0x1e32ea4
    return result;
}

// Address range: 0x1e32ead - 0x1e32eca
int32_t function_1e32ead(int32_t a1) {
    int32_t result; // 0x1e32ec7
    if (a1 != 63) {
        // 0x1e32ead
        result = g2;
    } else {
        // 0x1e32eb4
        g2 = g353;
        int32_t v1 = *(int32_t *)g353; // 0x1e32ebb
        g2 = v1;
        g5 = g353;
        result = v1;
    }
    // 0x1e32ec7
    return result;
}

// Address range: 0x1e32eca - 0x1e32f60
int32_t function_1e32eca(int32_t result2, int32_t a2) {
    // 0x1e32eca
    g2 = result2;
    if (result2 == 52) {
        // 0x1e32ee1
        g5 = a2;
        g2 = *(int32_t *)a2;
        *(int32_t *)(a2 + 6) = 1;
        g684 = (float80_t)*(int32_t *)(a2 + 78);
        g5 = g245;
        int32_t result = *(int32_t *)g245; // 0x1e32f0a
        g2 = result;
        // 0x1e32f59
        return result;
    }
    if (result2 != 60) {
        // 0x1e32f59
        return result2;
    }
    int32_t v1 = a2 + 6; // 0x1e32f16
    g2 = v1;
    int32_t * v2 = (int32_t *)v1; // 0x1e32f19
    int32_t result3; // 0x1e32f53
    if (*v2 != 1) {
        // 0x1e32f4c
        g5 = 0;
        *v2 = 0;
        result3 = *(int32_t *)a2;
        g2 = result3;
        g5 = a2;
    } else {
        // 0x1e32f1e
        g5 = a2;
        *v2 = 2;
        g2 = *(int32_t *)a2;
        g684 = (float80_t)*(int32_t *)(a2 + 82);
        g5 = g245;
        int32_t v3 = *(int32_t *)g245; // 0x1e32f43
        g2 = v3;
        result3 = v3;
    }
    // 0x1e32f59
    return result3;
}

// Address range: 0x1e32f60 - 0x1e33050
int32_t function_1e32f60(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = v1;
    int32_t v2; // bp-68
    int32_t v3 = v2; // 0x1e32f63
    if (a1 != 63) {
        // 0x1e33049
        return g2;
    }
    // 0x1e32f71
    g8 = 0;
    g2 = g247;
    if (*(int32_t *)(g247 + 78) != 0) {
        goto lab_0x1e32f87;
    } else {
        // 0x1e32f7d
        if (*(int32_t *)(g247 + 90) != 0) {
            goto lab_0x1e32f87;
        } else {
            // 0x1e32f82
            if (*(int32_t *)(g247 + 82) == 0) {
                goto lab_0x1e32fc7;
            } else {
                goto lab_0x1e32f87;
            }
        }
    }
  lab_0x1e32f87:
    // 0x1e32f87
    g8 = 1;
    g2 = g206;
    g2 = function_1e32b02(*(int32_t *)(g206 + 302));
    int32_t v4 = function_1e25763(10); // 0x1e32fa1
    g2 = v4;
    g5 = v3;
    g2 = function_1e3d7a0(v3, (char *)v4);
    g5 = g391;
    g2 = function_1e2fbc7(v3, 0x40000000);
    goto lab_0x1e32fc7;
  lab_0x1e32fc7:
    // 0x1e32fc7
    g2 = g248;
    g5 = 0;
    if (*(int32_t *)(g248 + 78) != 0) {
        // 0x1e32fdd
        g8 |= 2;
        goto lab_0x1e32fe0;
    } else {
        // 0x1e32fd3
        if (*(int32_t *)(g248 + 90) != 0) {
            // 0x1e32fdd
            g8 |= 2;
            goto lab_0x1e32fe0;
        } else {
            // 0x1e32fd8
            if (*(int32_t *)(g248 + 82) == 0) {
                goto lab_0x1e32fe0;
            } else {
                // 0x1e32fdd
                g8 |= 2;
                goto lab_0x1e32fe0;
            }
        }
    }
  lab_0x1e32fe0:
    // 0x1e32fe0
    g2 = g249;
    g5 = 0;
    int32_t v5; // 0x1e33021
    int32_t result; // 0x1e33040
    if (*(int32_t *)(g249 + 78) != 0) {
        goto lab_0x1e32ff9;
    } else {
        // 0x1e32fec
        if (*(int32_t *)(g249 + 90) != 0) {
            goto lab_0x1e32ff9;
        } else {
            // 0x1e32ff1
            if (*(int32_t *)(g249 + 82) == 0) {
                int32_t v6 = g8;
                if (v6 != 0) {
                    v5 = v6;
                    goto lab_0x1e33017;
                } else {
                    // 0x1e32ffd
                    *(int32_t *)(g9 - 4) = 0;
                    g5 = a2;
                    int32_t v7 = *(int32_t *)a2; // 0x1e33002
                    g2 = v7;
                    *(int32_t *)(g9 - 8) = v7;
                    g5 = g206;
                    g2 = function_1e2e6c7((int32_t)&g708);
                    if (g8 == 0) {
                        // 0x1e3302d
                        g2 = g364;
                        result = g364;
                        goto lab_0x1e33040;
                    } else {
                        v5 = g8;
                        goto lab_0x1e33017;
                    }
                }
            } else {
                goto lab_0x1e32ff9;
            }
        }
    }
  lab_0x1e32ff9:
    // 0x1e32ff9
    v5 = g8 | 4;
    goto lab_0x1e33017;
  lab_0x1e33017:
    if (v5 == 1) {
        // 0x1e33034
        g2 = g361;
        result = g361;
        goto lab_0x1e33040;
    } else {
        if (v5 < 2) {
            goto lab_0x1e33026;
        } else {
            if (v5 > 3) {
                goto lab_0x1e33026;
            } else {
                // 0x1e3303b
                g2 = g362;
                result = g362;
                goto lab_0x1e33040;
            }
        }
    }
  lab_0x1e33040:
    // 0x1e33040
    g5 = result;
    // 0x1e33049
    return result;
  lab_0x1e33026:
    // 0x1e33026
    g2 = g363;
    result = g363;
    goto lab_0x1e33040;
}

// Address range: 0x1e33050 - 0x1e33070
int32_t function_1e33050(int32_t a1) {
    int32_t result; // 0x1e3306d
    if (a1 != 58) {
        // 0x1e33050
        result = g2;
    } else {
        // 0x1e33057
        g2 = g247;
        int32_t v1 = *(int32_t *)g247; // 0x1e33061
        g2 = v1;
        g5 = g247;
        result = v1;
    }
    // 0x1e3306d
    return result;
}

// Address range: 0x1e33070 - 0x1e3309b
int32_t function_1e33070(int32_t a1) {
    int32_t result; // 0x1e33098
    if (a1 != 63) {
        // 0x1e33070
        result = g2;
    } else {
        // 0x1e33077
        g2 = g256;
        g2 = *(int32_t *)g256;
        g5 = g257;
        int32_t v1 = *(int32_t *)g257; // 0x1e33094
        g2 = v1;
        result = v1;
    }
    // 0x1e33098
    return result;
}

// Address range: 0x1e3309b - 0x1e331e3
int32_t function_1e3309b(int32_t a1) {
    int32_t v1; // ebp
    int32_t v2 = v1; // 0x1e330a6
    if (a1 != 63) {
        // 0x1e331d9
        return g2;
    }
    // 0x1e330ad
    g2 = g249;
    int32_t v3; // 0x1e331bc
    if (*(int32_t *)(g249 + 78) == 0) {
        // 0x1e330bf
        if (*(int32_t *)(g249 + 90) == 0) {
            // 0x1e330c4
            if (*(int32_t *)(g249 + 82) == 0) {
                int32_t v4 = *(int32_t *)g294; // 0x1e330c9
                g2 = v4;
                int32_t v5 = 39; // bp-28
                g5 = g294;
                if (v4 != 0) {
                    // 0x1e330d8
                    g5 = g294;
                    g2 = *(int32_t *)g295;
                    g5 = g295;
                    int32_t v6 = 20; // bp-60
                    v3 = v6;
                } else {
                    v3 = v5;
                }
            } else {
                v3 = v2;
            }
        } else {
            v3 = v2;
        }
    } else {
        v3 = v2;
    }
    int32_t v7 = *(int32_t *)(v3 + 28); // 0x1e330fe
    g8 = v7;
    int32_t v8; // 0x1e33133
    if (g218 != v7) {
        // 0x1e33112
        if (v7 != g219) {
            // 0x1e33122
            g5 = g216;
            v8 = g216;
        } else {
            // 0x1e3311a
            g5 = g215;
            v8 = g215;
        }
    } else {
        // 0x1e3310a
        g5 = g214;
        v8 = g214;
    }
    // 0x1e33128
    g6 = 0;
    int32_t v9; // 0x1e331c0
    if (*(int32_t *)(v8 + 82) == 0) {
        // 0x1e33133
        *(int32_t *)(v3 - 4) = 0;
        g2 = *(int32_t *)g5;
        v9 = v3 - 8;
        int32_t * v10 = (int32_t *)v9; // 0x1e331c0
        if (*(int32_t *)(v8 + 78) != 0) {
            // 0x1e331bc
            *v10 = 20;
        } else {
            // 0x1e3313c
            *v10 = 19;
            *(int32_t *)(v3 - 12) = g6;
            g2 = *(int32_t *)g217;
            *(int32_t *)(v3 - 16) = 37;
            g5 = g217;
            g3 = *(int32_t *)g2;
            *(int32_t *)(v3 - 20) = g6;
            g5 = g217;
            *(int32_t *)v3 = g2;
            int32_t v11 = g9 - 4; // 0x1e3315b
            *(int32_t *)v11 = 38;
            if (*(int32_t *)(g9 + 12) == g2) {
                // 0x1e33165
                *(int32_t *)(g9 - 8) = 0x40a00000;
                *(int32_t *)(g9 - 12) = 7;
                *(int32_t *)(g9 - 16) = g6;
                g5 = g217;
                int32_t v12 = g9 - 20; // 0x1e33173
                *(int32_t *)v12 = g6;
                g2 = g209;
                int32_t v13; // 0x1e331a8
                if (*(int32_t *)(g209 + 78) < 3) {
                    // 0x1e33181
                    *(int32_t *)(g9 - 24) = g6;
                    g2 = g213;
                    *(int32_t *)(g9 - 28) = 12;
                    g5 = g2;
                    *(int32_t *)(g9 - 32) = 0x40000000;
                    *(int32_t *)(g9 - 36) = g6;
                    *(int32_t *)(g9 - 40) = 5;
                    int32_t v14 = function_1e25763(v1); // 0x1e33197
                    g2 = v14;
                    *(int32_t *)(g9 - 4) = v14;
                    g5 = g391;
                    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                    v13 = g9;
                } else {
                    v13 = v12;
                }
                // 0x1e331a8
                *(int32_t *)(v13 - 4) = 0x42700000;
                g2 = g213;
                int32_t v15 = v13 - 8; // 0x1e331b4
                *(int32_t *)v15 = 48;
                g5 = g2;
                v9 = v15;
            } else {
                v9 = v11;
            }
        }
    } else {
        v9 = v3;
    }
    // 0x1e331c4
    *(int32_t *)(v9 - 4) = 0;
    int32_t v16 = *(int32_t *)g8; // 0x1e331c6
    g2 = v16;
    *(int32_t *)(v9 - 8) = v16;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e331d4
    g2 = result;
    // 0x1e331d9
    return result;
}

// Address range: 0x1e331e3 - 0x1e33212
int32_t function_1e331e3(int32_t a1, int32_t a2) {
    if (a1 != 61) {
        // 0x1e3320d
        return g2;
    }
    // 0x1e331ec
    if (*(int32_t *)(a2 + 78) != 0) {
        // 0x1e331f6
        g2 = *(int32_t *)a2;
        g5 = a2;
    }
    // 0x1e3320d
    return g2;
}

// Address range: 0x1e33212 - 0x1e33309
int32_t function_1e33212(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    int32_t v2 = v1; // 0x1e3321d
    if (a1 != 63) {
        // 0x1e332ff
        return g2;
    }
    // 0x1e33224
    g8 = a2;
    int32_t v3; // 0x1e332e4
    if (g227 != a2) {
        // 0x1e33238
        if (g228 != a2) {
            // 0x1e33248
            g5 = g225;
            v3 = g225;
        } else {
            // 0x1e33240
            g5 = g224;
            v3 = g224;
        }
    } else {
        // 0x1e33230
        g5 = g223;
        v3 = g223;
    }
    // 0x1e3324e
    g6 = 0;
    int32_t v4; // 0x1e332ea
    if (*(int32_t *)(v3 + 82) == 0) {
        // 0x1e33259
        g2 = *(int32_t *)v3;
        int32_t v5; // bp-28
        if (*(int32_t *)(v3 + 78) != 0) {
            // 0x1e332e2
            v5 = 20;
            v4 = v5;
        } else {
            // 0x1e33262
            v5 = 19;
            int32_t v6 = *(int32_t *)g226; // 0x1e33270
            g2 = v6;
            g5 = g226;
            g3 = *(int32_t *)v6;
            g5 = g226;
            v1 = v6;
            int32_t v7 = 38; // bp-44
            if (v6 == 19) {
                // 0x1e3328b
                g5 = g226;
                int32_t v8 = 0; // bp-60
                g2 = g221;
                int32_t v9; // 0x1e332ce
                if (*(int32_t *)(g221 + 78) < 3) {
                    // 0x1e332a7
                    g2 = g222;
                    g5 = g222;
                    int32_t v10 = function_1e25763(6); // 0x1e332bd
                    g2 = v10;
                    g5 = g391;
                    g2 = function_1e2fbc7(v10, (int32_t)&g708);
                    v9 = g9;
                } else {
                    v9 = v8;
                }
                // 0x1e332ce
                *(int32_t *)(v9 - 4) = 0x42700000;
                g2 = g222;
                int32_t v11 = v9 - 8; // 0x1e332da
                *(int32_t *)v11 = 48;
                g5 = g2;
                v4 = v11;
            } else {
                v4 = v7;
            }
        }
    } else {
        v4 = v2;
    }
    // 0x1e332ea
    *(int32_t *)(v4 - 4) = 0;
    int32_t v12 = *(int32_t *)g8; // 0x1e332ec
    g2 = v12;
    *(int32_t *)(v4 - 8) = v12;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e332fa
    g2 = result;
    // 0x1e332ff
    return result;
}

// Address range: 0x1e33309 - 0x1e33407
int32_t function_1e33309(int32_t a1) {
    if (a1 != 63) {
        // 0x1e33403
        return g2;
    }
    // 0x1e33315
    g2 = g252;
    g5 = 0;
    int32_t v1; // 0x1e333cd
    if (*(int32_t *)(g252 + 78) != 0) {
        goto lab_0x1e3334f;
    } else {
        // 0x1e33321
        if (*(int32_t *)(g252 + 90) != 0) {
            goto lab_0x1e3334f;
        } else {
            // 0x1e33326
            if (*(int32_t *)(g252 + 82) != 0) {
                goto lab_0x1e3334f;
            } else {
                // 0x1e3332b
                g2 = g253;
                if (*(int32_t *)(g253 + 78) != 0) {
                    goto lab_0x1e3334f;
                } else {
                    // 0x1e33335
                    if (*(int32_t *)(g253 + 90) != 0) {
                        goto lab_0x1e3334f;
                    } else {
                        // 0x1e3333a
                        if (*(int32_t *)(g253 + 82) != 0) {
                            goto lab_0x1e3334f;
                        } else {
                            // 0x1e3333f
                            g2 = g388;
                            g5 = g388;
                            int32_t v2; // esi
                            v1 = v2;
                            goto lab_0x1e33376;
                        }
                    }
                }
            }
        }
    }
  lab_0x1e3334f:
    // 0x1e3334f
    function_1e32ace(0x40000000);
    g2 = g252;
    g5 = g253;
    int32_t v3 = 20; // bp-24
    g2 = *(int32_t *)g253;
    v1 = v3;
    goto lab_0x1e33376;
  lab_0x1e33376:;
    int32_t v4 = *(int32_t *)(v1 + 12); // 0x1e33376
    int32_t v5; // 0x1e333ee
    if (g250 != v4) {
        // 0x1e333b7
        g2 = g239;
        g5 = 0;
        if (*(int32_t *)(g239 + 78) != 0) {
            goto lab_0x1e333cd;
        } else {
            // 0x1e333c3
            if (*(int32_t *)(g239 + 90) != 0) {
                goto lab_0x1e333cd;
            } else {
                // 0x1e333c8
                if (*(int32_t *)(g239 + 82) == 0) {
                    v5 = v1;
                    goto lab_0x1e333ee;
                } else {
                    goto lab_0x1e333cd;
                }
            }
        }
    } else {
        // 0x1e33382
        g2 = g238;
        g5 = 0;
        if (*(int32_t *)(g238 + 78) != 0) {
            goto lab_0x1e33398;
        } else {
            // 0x1e3338e
            if (*(int32_t *)(g238 + 90) != 0) {
                goto lab_0x1e33398;
            } else {
                // 0x1e33393
                if (*(int32_t *)(g238 + 82) == 0) {
                    v5 = v1;
                    goto lab_0x1e333ee;
                } else {
                    goto lab_0x1e33398;
                }
            }
        }
    }
  lab_0x1e333cd:
    // 0x1e333cd
    *(int32_t *)(v1 - 4) = 0;
    g2 = g239;
    g2 = *(int32_t *)g239;
    *(int32_t *)(v1 - 8) = 4;
    *(int32_t *)(v1 - 12) = 0;
    g5 = g241;
    int32_t v6 = v1 - 16; // 0x1e333e8
    *(int32_t *)v6 = 4;
    goto lab_0x1e333ea;
  lab_0x1e33398:
    // 0x1e33398
    *(int32_t *)(v1 - 4) = 0;
    g2 = g238;
    g2 = *(int32_t *)g238;
    *(int32_t *)(v1 - 8) = 4;
    *(int32_t *)(v1 - 12) = 0;
    g5 = g240;
    int32_t v8 = v1 - 16; // 0x1e333b3
    *(int32_t *)v8 = 4;
    v6 = v8;
    goto lab_0x1e333ea;
  lab_0x1e333ea:
    // 0x1e333ea
    g2 = *(int32_t *)g5;
    v5 = v6;
    goto lab_0x1e333ee;
  lab_0x1e333ee:
    // 0x1e333ee
    *(int32_t *)(v5 - 4) = 0;
    int32_t v7 = *(int32_t *)v4; // 0x1e333f0
    g2 = v7;
    *(int32_t *)(v5 - 8) = v7;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e333fe
    g2 = result;
    // 0x1e33403
    return result;
}

// Address range: 0x1e33407 - 0x1e3347e
int32_t function_1e33407(int32_t result2) {
    // 0x1e33407
    g2 = result2;
    int32_t v1 = g6; // bp-8
    int32_t v2 = v1; // 0x1e3340c
    int32_t v3; // bp-24
    int32_t v4; // 0x1e33479
    if (result2 == 19) {
        // 0x1e33419
        g2 = g252;
        g5 = g252;
        g5 = g253;
        v3 = 9;
        int32_t result = *(int32_t *)g253; // 0x1e33435
        g2 = result;
        g419 = 1;
        v4 = v3;
        // 0x1e33479
        g6 = *(int32_t *)v4;
        g8 = *(int32_t *)(v4 + 4);
        return result;
    }
    if (result2 != 60) {
        v4 = v2;
        // 0x1e33479
        g6 = *(int32_t *)v4;
        g8 = *(int32_t *)(v4 + 4);
        return result2;
    }
    // 0x1e33445
    int32_t result3; // 0x1e33462
    if (g419 != 0) {
        // 0x1e3344f
        g2 = g252;
        g5 = g252;
        result3 = *(int32_t *)g252;
        g2 = result3;
        g5 = g253;
        v3 = 7;
        g419 = 0;
        v4 = v3;
    } else {
        result3 = 60;
        v4 = v2;
    }
    // 0x1e33479
    g6 = *(int32_t *)v4;
    g8 = *(int32_t *)(v4 + 4);
    return result3;
}

// Address range: 0x1e3347e - 0x1e33529
int32_t function_1e3347e(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e33525
        return g2;
    }
    // 0x1e3348a
    int32_t v1; // bp-8
    int32_t v2;
    int32_t * v3;
    if (g254 != a2) {
        // 0x1e334ce
        if (g255 != a2) {
            // 0x1e33525
            return g2;
        }
        // 0x1e334d6
        g2 = g257;
        g5 = 0;
        if (*(int32_t *)(g257 + 78) != 0) {
            v2 = g257;
            goto lab_0x1e3350c;
        } else {
            // 0x1e334e2
            if (*(int32_t *)(g257 + 90) != 0) {
                v2 = g257;
                goto lab_0x1e3350c;
            } else {
                // 0x1e334e7
                if (*(int32_t *)(g257 + 82) != 0) {
                    v2 = g257;
                    goto lab_0x1e3350c;
                } else {
                    // 0x1e334ec
                    v1 = 0;
                    v3 = &v1;
                    goto lab_0x1e33512;
                }
            }
        }
    } else {
        // 0x1e33496
        g2 = g256;
        g5 = 0;
        if (*(int32_t *)(g256 + 78) != 0) {
            v2 = g256;
            goto lab_0x1e3350c;
        } else {
            // 0x1e334a2
            if (*(int32_t *)(g256 + 90) != 0) {
                v2 = g256;
                goto lab_0x1e3350c;
            } else {
                // 0x1e334a7
                if (*(int32_t *)(g256 + 82) != 0) {
                    v2 = g256;
                    goto lab_0x1e3350c;
                } else {
                    // 0x1e334ac
                    v1 = 0;
                    v3 = &v1;
                    goto lab_0x1e33512;
                }
            }
        }
    }
  lab_0x1e3350c:
    // 0x1e3350c
    v1 = 0;
    g2 = g301;
    g2 = *(int32_t *)g301;
    g5 = v2;
    g2 = *(int32_t *)v2;
    int32_t v4 = 1; // bp-24
    v3 = &v4;
    goto lab_0x1e33512;
  lab_0x1e33512:;
    int32_t v5 = *(int32_t *)a2; // 0x1e33512
    g2 = v5;
    *(int32_t *)((int32_t)v3 - 4) = v5;
    g5 = g206;
    g2 = function_1e2e6c7(v1);
    // 0x1e33525
    return g2;
}

// Address range: 0x1e33529 - 0x1e335fc
int32_t function_1e33529(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = v1;
    int32_t v2; // bp-68
    int32_t v3 = v2; // 0x1e3352c
    if (a1 != 63) {
        // 0x1e335f5
        return g2;
    }
    // 0x1e3353a
    g2 = g259;
    g8 = 0;
    int32_t v4; // 0x1e335e3
    if (*(int32_t *)(g259 + 78) != 0) {
        goto lab_0x1e3358d;
    } else {
        // 0x1e33546
        if (*(int32_t *)(g259 + 90) != 0) {
            goto lab_0x1e3358d;
        } else {
            // 0x1e3354b
            if (*(int32_t *)(g259 + 82) != 0) {
                goto lab_0x1e3358d;
            } else {
                // 0x1e33550
                g5 = a2;
                int32_t v5 = *(int32_t *)a2; // 0x1e33554
                g2 = v5;
                g5 = g206;
                g2 = function_1e2e6c7(v5);
                g5 = g367;
                g2 = *(int32_t *)g367;
                g11++;
                int32_t v6 = function_1e25763(44); // 0x1e3357a
                g2 = v6;
                g5 = g391;
                g2 = function_1e2fbc7(v6, (int32_t)&g708);
                v4 = g9;
                goto lab_0x1e335e3;
            }
        }
    }
  lab_0x1e3358d:
    // 0x1e3358d
    g2 = g206;
    g2 = function_1e32b02(*(int32_t *)(g206 + 306));
    int32_t v7 = function_1e25763(3); // 0x1e335a2
    g2 = v7;
    g5 = v3;
    g2 = function_1e3d7a0(v3, (char *)v7);
    g5 = g391;
    g2 = function_1e2fbc7(v3, 0x40000000);
    g5 = g259;
    int32_t v8 = 20; // bp-100
    g5 = g366;
    v4 = v8;
    goto lab_0x1e335e3;
  lab_0x1e335e3:
    // 0x1e335e3
    *(int32_t *)(v4 - 4) = 0x41300000;
    g2 = g269;
    *(int32_t *)(v4 - 8) = 45;
    int32_t result = g2; // 0x1e335f1
    g5 = result;
    // 0x1e335f5
    return result;
}

// Address range: 0x1e335fc - 0x1e3367d
int32_t function_1e335fc(int32_t a1) {
    if (a1 != 63) {
        // 0x1e3367a
        return g2;
    }
    // 0x1e33603
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3360a
    int32_t v2 = *v1; // 0x1e3360a
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e33663
    if (v2 > 1) {
        // 0x1e3364d
        g2 = g263;
        g2 = *(int32_t *)g263;
        v3 = 8;
        g5 = g263;
        v4 = v3;
    } else {
        // 0x1e3361b
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e3363a
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e33663
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e33669
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e33675
    g2 = result;
    // 0x1e3367a
    return result;
}

// Address range: 0x1e3367d - 0x1e336fe
int32_t function_1e3367d(int32_t a1) {
    if (a1 != 63) {
        // 0x1e336fb
        return g2;
    }
    // 0x1e33684
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3368b
    int32_t v2 = *v1; // 0x1e3368b
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e336e4
    if (v2 > 3) {
        // 0x1e336ce
        g2 = g264;
        g2 = *(int32_t *)g264;
        v3 = 8;
        g5 = g264;
        v4 = v3;
    } else {
        // 0x1e3369c
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e336bb
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e336e4
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e336ea
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e336f6
    g2 = result;
    // 0x1e336fb
    return result;
}

// Address range: 0x1e336fe - 0x1e3377f
int32_t function_1e336fe(int32_t a1) {
    if (a1 != 63) {
        // 0x1e3377c
        return g2;
    }
    // 0x1e33705
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3370c
    int32_t v2 = *v1; // 0x1e3370c
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e33765
    if (v2 > 5) {
        // 0x1e3374f
        g2 = g265;
        g2 = *(int32_t *)g265;
        v3 = 8;
        g5 = g265;
        v4 = v3;
    } else {
        // 0x1e3371d
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e3373c
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e33765
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e3376b
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e33777
    g2 = result;
    // 0x1e3377c
    return result;
}

// Address range: 0x1e3377f - 0x1e33800
int32_t function_1e3377f(int32_t a1) {
    if (a1 != 63) {
        // 0x1e337fd
        return g2;
    }
    // 0x1e33786
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3378d
    int32_t v2 = *v1; // 0x1e3378d
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e337e6
    if (v2 > 7) {
        // 0x1e337d0
        g2 = g266;
        g2 = *(int32_t *)g266;
        v3 = 8;
        g5 = g266;
        v4 = v3;
    } else {
        // 0x1e3379e
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e337bd
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e337e6
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e337ec
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e337f8
    g2 = result;
    // 0x1e337fd
    return result;
}

// Address range: 0x1e33800 - 0x1e33881
int32_t function_1e33800(int32_t a1) {
    if (a1 != 63) {
        // 0x1e3387e
        return g2;
    }
    // 0x1e33807
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3380e
    int32_t v2 = *v1; // 0x1e3380e
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e33867
    if (v2 > 9) {
        // 0x1e33851
        g2 = g267;
        g2 = *(int32_t *)g267;
        v3 = 8;
        g5 = g267;
        v4 = v3;
    } else {
        // 0x1e3381f
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e3383e
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e33867
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e3386d
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e33879
    g2 = result;
    // 0x1e3387e
    return result;
}

// Address range: 0x1e33881 - 0x1e33902
int32_t function_1e33881(int32_t a1) {
    if (a1 != 63) {
        // 0x1e338ff
        return g2;
    }
    // 0x1e33888
    g2 = g269;
    int32_t * v1 = (int32_t *)g269; // 0x1e3388f
    int32_t v2 = *v1; // 0x1e3388f
    g2 = v2;
    g5 = g269;
    int32_t v3; // bp-16
    int32_t v4; // 0x1e338e8
    if (v2 > 11) {
        // 0x1e338d2
        g2 = g268;
        g2 = *(int32_t *)g268;
        v3 = 8;
        g5 = g268;
        v4 = v3;
    } else {
        // 0x1e338a0
        g2 = g269;
        g2 = *v1;
        v3 = 45;
        g5 = g269;
        int32_t v5 = function_1e25763(44); // 0x1e338bf
        g2 = v5;
        g5 = g391;
        g2 = function_1e2fbc7(v5, (int32_t)&g708);
        v4 = g9;
    }
    // 0x1e338e8
    g5 = *(int32_t *)(v4 + 8);
    *(int32_t *)(v4 - 4) = 0;
    int32_t v6 = *(int32_t *)g5; // 0x1e338ee
    g2 = v6;
    *(int32_t *)(v4 - 8) = v6;
    g5 = g206;
    int32_t result = function_1e2e6c7((int32_t)&g708); // 0x1e338fa
    g2 = result;
    // 0x1e338ff
    return result;
}

// Address range: 0x1e33902 - 0x1e33cb5
int32_t function_1e33902(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = v1;
    int32_t v2; // bp-72
    int32_t v3 = v2; // 0x1e33905
    if (a1 != 63) {
        // 0x1e33cac
        return g2;
    }
    // 0x1e33917
    g2 = g271;
    g4 = *(int32_t *)g271;
    g5 = g271;
    g6 = g271;
    g2 = g271;
    g2 = function_1e33cb5(41, g271);
    if (g271 == 0) {
        // 0x1e3395d
        g2 = a2;
        g5 = a2;
        g4 = *(int32_t *)a2;
        g5 = g206;
        g2 = function_1e2e6c7(a2);
        int32_t v4 = function_1e25763(12); // 0x1e33979
        g2 = v4;
        g5 = v3;
        g2 = function_1e3d7a0(v3, (char *)v4);
        g5 = g391;
        g2 = function_1e2fbc7(v3, 0x40000000);
    } else {
        if (g271 == 1) {
            // 0x1e339a4
            g2 = g206;
            g2 = function_1e32b02(*(int32_t *)(g206 + 314));
            int32_t v5 = function_1e25763(14); // 0x1e339b9
            g2 = v5;
            g5 = v3;
            g2 = function_1e3d7a0(v3, (char *)v5);
            g5 = g391;
            g2 = function_1e2fbc7(v3, 0x40000000);
            g5 = g206;
            *(int32_t *)(g206 + 314) = 0x4e20;
        } else {
            if (g271 == 2) {
                // 0x1e339f4
                g2 = g244;
                function_1e32eca(52, g244);
                g2 = a2;
                g5 = a2;
                g4 = *(int32_t *)a2;
                g5 = g206;
                g2 = function_1e2e6c7(a2);
                int32_t v6 = function_1e25763(2); // 0x1e33a1d
                g2 = v6;
                g5 = v3;
                g2 = function_1e3d7a0(v3, (char *)v6);
                g5 = g391;
                g2 = function_1e2fbc7(v3, 0x40000000);
            } else {
                if (g271 == 3) {
                    // 0x1e33a45
                    function_1e33407(19);
                    g2 = a2;
                    g5 = a2;
                    g4 = *(int32_t *)a2;
                    g5 = g206;
                    g2 = function_1e2e6c7(a2);
                    int32_t v7 = function_1e25763(8); // 0x1e33a6a
                    g2 = v7;
                    g5 = v3;
                    g2 = function_1e3d7a0(v3, (char *)v7);
                    g5 = g391;
                    g2 = function_1e2fbc7(v3, 0x40000000);
                } else {
                    if (g271 == 4) {
                        // 0x1e33a92
                        g2 = g271;
                        function_1e33cb5(0, g271);
                        g2 = a2;
                        g5 = a2;
                        g4 = *(int32_t *)a2;
                        g5 = g206;
                        int32_t v8 = function_1e2e6c7(a2); // 0x1e33ab1
                        g2 = v8;
                        g2 = function_1e34b0d(64, v8);
                    }
                }
            }
        }
    }
    // 0x1e33abe
    g2 = g272;
    g5 = 0;
    if (*(int32_t *)(g272 + 78) != 0) {
        goto lab_0x1e33ad4;
    } else {
        // 0x1e33aca
        if (*(int32_t *)(g272 + 90) != 0) {
            goto lab_0x1e33ad4;
        } else {
            // 0x1e33acf
            if (*(int32_t *)(g272 + 82) == 0) {
                goto lab_0x1e33b14;
            } else {
                goto lab_0x1e33ad4;
            }
        }
    }
  lab_0x1e33ad4:
    // 0x1e33ad4
    g8 = 1;
    g2 = g206;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g206 + 302);
    int32_t v9 = function_1e32b02((int32_t)&g708); // 0x1e33ae4
    g2 = v9;
    *(int32_t *)(g9 - 4) = v9;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 10;
    int32_t v10 = function_1e25763((int32_t)&g708); // 0x1e33aee
    g2 = v10;
    *(int32_t *)(g9 - 4) = v10;
    g5 = v3;
    *(int32_t *)(g9 - 8) = v3;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = 0x40000000;
    *(int32_t *)(g9 + 4) = v3;
    g5 = g391;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    goto lab_0x1e33b14;
  lab_0x1e33b14:
    // 0x1e33b14
    g2 = g273;
    g5 = 0;
    if (*(int32_t *)(g273 + 78) != 0) {
        // 0x1e33b2a
        g8 |= 2;
        goto lab_0x1e33b2d;
    } else {
        // 0x1e33b20
        if (*(int32_t *)(g273 + 90) != 0) {
            // 0x1e33b2a
            g8 |= 2;
            goto lab_0x1e33b2d;
        } else {
            // 0x1e33b25
            if (*(int32_t *)(g273 + 82) == 0) {
                goto lab_0x1e33b2d;
            } else {
                // 0x1e33b2a
                g8 |= 2;
                goto lab_0x1e33b2d;
            }
        }
    }
  lab_0x1e33b2d:
    // 0x1e33b2d
    g2 = g274;
    g5 = 0;
    if (*(int32_t *)(g274 + 78) != 0) {
        goto lab_0x1e33b47;
    } else {
        // 0x1e33b39
        if (*(int32_t *)(g274 + 90) != 0) {
            goto lab_0x1e33b47;
        } else {
            // 0x1e33b3e
            if (*(int32_t *)(g274 + 82) == 0) {
                goto lab_0x1e33c01;
            } else {
                goto lab_0x1e33b47;
            }
        }
    }
  lab_0x1e33b47:
    // 0x1e33b47
    g4 = 0;
    *(int32_t *)(g9 - 4) = 0;
    g2 = g274;
    g2 = *(int32_t *)g274;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g274;
    *(int32_t *)(g9 - 12) = g310;
    *(int32_t *)(g9 - 16) = 64;
    g2 = function_1e3459d((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = g4;
    g5 = g306;
    *(int32_t *)(g9 - 8) = 19;
    g2 = *(int32_t *)g5;
    g2 = function_1e32970();
    g2 = function_1e329ab();
    g2 = function_1e329e6();
    g2 = function_1e32a34();
    *(int32_t *)(g9 - 4) = g4;
    g5 = g256;
    *(int32_t *)(g9 - 8) = 19;
    g2 = *(int32_t *)g5;
    *(int32_t *)(g9 - 12) = g4;
    g5 = g257;
    *(int32_t *)(g9 - 16) = 19;
    g2 = *(int32_t *)g5;
    *(int32_t *)(g9 - 20) = g4;
    *(int32_t *)(g9 - 24) = 19;
    g2 = function_1e33407((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g244;
    *(int32_t *)(g9 - 8) = 52;
    g2 = function_1e32eca((int32_t)&g708, (int32_t)&g708);
    g5 = g206;
    int32_t v11; // 0x1e33bce
    if (*(int32_t *)(g206 + 346) != g4) {
        // 0x1e33bc9
        g2 = function_1e32955();
        v11 = g206;
    } else {
        v11 = g206;
    }
    // 0x1e33bce
    g5 = 0x186a0;
    int32_t v12 = v11 + 314; // 0x1e33bd8
    g2 = v12;
    int32_t * v13 = (int32_t *)v12; // 0x1e33bdd
    int32_t v14; // 0x1e33be3
    if (*v13 < 0x186a0) {
        // 0x1e33be1
        *v13 = 0x186a0;
        v14 = g206;
    } else {
        v14 = v11;
    }
    // 0x1e33be3
    g5 = 0x186a0;
    int32_t v15 = v14 + 306; // 0x1e33bed
    g2 = v15;
    int32_t * v16 = (int32_t *)v15; // 0x1e33bf2
    if (*v16 < 0x186a0) {
        // 0x1e33bf6
        *v16 = 0x186a0;
    }
    // 0x1e33bf8
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = 64;
    g2 = function_1e34b0d((int32_t)&g708, (int32_t)&g708);
    goto lab_0x1e33c01;
  lab_0x1e33c01:;
    // 0x1e33c01
    int32_t v17; // 0x1e33c82
    if (g8 == 0) {
        if (g271 == 1) {
            // 0x1e33c68
            g2 = g373;
            v17 = g373;
        } else {
            if (g271 == 2) {
                // 0x1e33c6f
                g2 = g374;
                v17 = g374;
            } else {
                if (g271 == 3) {
                    // 0x1e33c76
                    g2 = g375;
                    v17 = g375;
                } else {
                    if (g271 == 4) {
                        // 0x1e33c7d
                        g2 = g376;
                        v17 = g376;
                    } else {
                        // 0x1e33c61
                        g2 = g372;
                        v17 = g372;
                    }
                }
            }
        }
        goto lab_0x1e33c82;
    } else {
        if (g8 == 1) {
            // 0x1e33c3f
            g2 = g361;
            v17 = g361;
            goto lab_0x1e33c82;
        } else {
            if (g8 < 2) {
                goto lab_0x1e33c14;
            } else {
                if (g8 > 3) {
                    goto lab_0x1e33c14;
                } else {
                    // 0x1e33c46
                    g2 = g368;
                    v17 = g368;
                    goto lab_0x1e33c82;
                }
            }
        }
    }
  lab_0x1e33c82:
    // 0x1e33c82
    g5 = v17;
    goto lab_0x1e33c8c;
  lab_0x1e33c8c:
    // 0x1e33c8c
    *(int32_t *)(g9 - 4) = 0x40a00000;
    g2 = g272;
    *(int32_t *)(g9 - 8) = 7;
    g2 = a2;
    g5 = a2;
    *(int32_t *)(g9 - 12) = (int32_t)(float32_t)g684;
    *(int32_t *)(g9 - 16) = 55;
    // 0x1e33cac
    return g2;
  lab_0x1e33c14:
    // 0x1e33c14
    g2 = g369;
    g5 = g369;
    g5 = g370;
    g2 = *(int32_t *)g370;
    g5 = g371;
    goto lab_0x1e33c8c;
}

