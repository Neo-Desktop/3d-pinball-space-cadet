#include "pinball.h"

// Address range: 0x1e45650 - 0x1e458f6
int32_t function_1e45650(int32_t * a1, char * a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g4; // 0x1e45653
    int32_t v3 = g8; // 0x1e45654
    g8 = v1;
    int32_t v4 = g6; // bp-40
    int16_t * v5 = (int16_t *)(v1 + 10); // 0x1e4565a
    uint16_t v6 = *v5; // 0x1e4565a
    int32_t v7 = g5 & -0x10000; // 0x1e4565a
    g5 = v7 | (int32_t)v6;
    int32_t v8 = g3; // bp-44
    int32_t v9 = 0; // edi
    int32_t v10 = (int32_t)a2; // 0x1e45661
    int16_t v11 = *(int16_t *)(v10 + 10); // 0x1e45665
    uint16_t v12 = v6 & 0x7fff; // 0x1e4567f
    int32_t v13 = v7 | (int32_t)v12; // 0x1e4567f
    g5 = v13;
    uint16_t v14 = v11 & 0x7fff; // 0x1e45684
    int32_t v15 = ((int32_t)v14 | v10 & -0x10000) + v13; // 0x1e4568e
    g2 = v15;
    uint16_t v16 = (int16_t)v15; // 0x1e45691
    int32_t v17; // ebx
    int32_t v18; // 0x1e457de
    int32_t v19; // 0x1e45869
    int16_t v20; // 0x1e457de
    if (v12 == 0x7fff) {
        goto lab_0x1e458cc;
    } else {
        if (v14 == 0x7fff) {
            goto lab_0x1e458cc;
        } else {
            if (v16 < 0xbffe) {
                if (v16 < 0x3fc0) {
                    // 0x1e456bc
                    *(int32_t *)(v1 + 8) = 0;
                    *(int32_t *)(g8 + 4) = v9;
                    *(int32_t *)g8 = v9;
                    g6 = v4;
                    g8 = v3;
                    g4 = v2;
                    return g2;
                }
                if (v12 == 0) {
                    // 0x1e456d1
                    if ((*(int32_t *)(v1 + 8) & 0x7fffffff) == 0) {
                        // 0x1e456df
                        if (*(int32_t *)(v1 + 4) == 0) {
                            // 0x1e456e5
                            if (*a1 == 0) {
                                // 0x1e456ea
                                *v5 = 0;
                                g3 = v8;
                                g6 = v4;
                                g8 = v3;
                                g4 = v2;
                                return g2;
                            }
                        }
                    }
                }
                // 0x1e456f8
                g2 = 0;
                if (v14 == 0) {
                    // 0x1e456ff
                    if ((*(int32_t *)(v10 + 8) & 0x7fffffff) == 0) {
                        // 0x1e45711
                        if (*(int32_t *)(v10 + 4) == 0) {
                            // 0x1e45716
                            if (*(int32_t *)a2 == 0) {
                                // 0x1e4571a
                                *(int32_t *)(v1 + 8) = 0;
                                g6 = v4;
                                *(int32_t *)(g8 + 4) = g2;
                                *(int32_t *)g8 = g2;
                                g8 = v3;
                                g4 = v2;
                                return g2;
                            }
                        }
                    }
                }
                // 0x1e4572a
                g2 = 0;
                int32_t v21 = &v8; // 0x1e45748
                while (true) {
                    int32_t * v22 = (int32_t *)(v21 + 32); // 0x1e45734
                    v17 = 8;
                    g6 = 2 * *v22;
                    g2 = 5;
                    int32_t v23 = 5 - *v22; // 0x1e45744
                    g2 = v23;
                    *(int32_t *)(v21 + 40) = v23;
                    if (v23 >= 1) {
                        int32_t v24 = *(int32_t *)(g9 + 36); // 0x1e45750
                        g2 = v24;
                        int32_t v25 = g9 + 20 + v24; // 0x1e45754
                        int32_t v26 = g9; // 0x1e45768
                        while (true) {
                            // 0x1e45758
                            g5 = 0;
                            uint16_t v27 = *(int16_t *)(v17 + *(int32_t *)(v26 + 52)); // 0x1e4575e
                            g5 = v27;
                            g2 = 0;
                            g2 = (int32_t)*(int16_t *)(g8 + g6);
                            *(int32_t *)(v26 - 4) = v25;
                            int32_t v28 = g2 * g5; // 0x1e45769
                            g5 = v28;
                            *(int32_t *)(v26 - 8) = v28;
                            *(int32_t *)(v26 - 12) = *(int32_t *)v25;
                            int32_t v29 = function_1e44310((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e45771
                            g2 = v29;
                            int32_t v30; // 0x1e4578c
                            if (v29 != 0) {
                                int32_t v31 = *(int32_t *)(g9 + 48); // 0x1e4577d
                                g2 = v31;
                                int16_t * v32 = (int16_t *)(g9 + 36 + v31); // 0x1e45781
                                *v32 = *v32 + 1;
                                v30 = g9;
                            } else {
                                v30 = g9 + 12;
                            }
                            // 0x1e45786
                            g6 += 2;
                            v17 -= 2;
                            int32_t * v33 = (int32_t *)(v30 + 40); // 0x1e4578c
                            int32_t v34 = *v33 - 1; // 0x1e4578c
                            *v33 = v34;
                            if (v34 == 0) {
                                // break -> 0x1e45792
                                break;
                            }
                            // 0x1e45786
                            v26 = g9;
                        }
                    }
                    int32_t * v35 = (int32_t *)(g9 + 36); // 0x1e45792
                    *v35 = *v35 + 2;
                    int32_t * v36 = (int32_t *)(g9 + 32); // 0x1e45797
                    *v36 = *v36 + 1;
                    if (*(int32_t *)(g9 + 32) >= 5) {
                        // break -> 0x1e457a2
                        break;
                    }
                    v21 = g9;
                }
                int16_t * v37 = (int16_t *)(g9 + 18); // 0x1e457a2
                *v37 = *v37 - 0x3ffe;
                int16_t * v38 = (int16_t *)(g9 + 18); // 0x1e457a9
                int16_t v39 = *v38; // 0x1e457a9
                if (v39 > 0) {
                    // 0x1e457b1
                    g6 = -0x80000000;
                    int32_t v40; // 0x1e457d6
                    int16_t v41; // 0x1e457d6
                    if (*(int32_t *)(g9 + 28) <= -1) {
                        // 0x1e457b1
                        v41 = *v38;
                        v40 = g9;
                    } else {
                        int32_t v42 = g9; // 0x1e457bc67
                        while (true) {
                            int32_t v43 = v42 + 20; // 0x1e457bc
                            g2 = v43;
                            *(int32_t *)(v42 - 4) = v43;
                            g2 = function_1e443b0((int32_t)&g708);
                            int16_t * v44 = (int16_t *)(g9 + 22); // 0x1e457c6
                            *v44 = *v44 - 1;
                            int32_t v45 = g9 + 4; // 0x1e457cb
                            int16_t v46 = *(int16_t *)(g9 + 22); // 0x1e457ce
                            if (v46 >= 0 != v46 != 0) {
                                v41 = v46;
                                v40 = v45;
                                // break -> 0x1e457d6
                                break;
                            }
                            // 0x1e457bc
                            if ((*(int32_t *)(g9 + 32) & g6) != 0) {
                                v41 = v46;
                                v40 = v45;
                                // break -> 0x1e457d6
                                break;
                            }
                            v42 = v45;
                        }
                    }
                    if (v41 >= 0 == (v41 != 0)) {
                        v19 = v40;
                        goto lab_0x1e45823;
                    } else {
                        v20 = v41;
                        v18 = v40;
                        goto lab_0x1e457de;
                    }
                } else {
                    v20 = v39;
                    v18 = g9;
                    goto lab_0x1e457de;
                }
            } else {
                goto lab_0x1e458cc;
            }
        }
    }
  lab_0x1e458cc:
    // 0x1e458cc
    *(int32_t *)(v1 + 4) = 0;
    g3 = v8;
    g6 = v4;
    g2 = 0x10000 * (int32_t)(v11 ^ v6) | 0x7fff8000;
    *(int32_t *)g8 = 0;
    *(int32_t *)(g8 + 8) = g2;
    g8 = v3;
    g4 = v2;
    return g2;
  lab_0x1e457de:;
    int16_t v47 = v20 - 1; // 0x1e457de
    *(int16_t *)(v18 + 18) = v47;
    int32_t v48; // 0x1e4581a
    int32_t v49; // 0x1e4581e
    if (v47 >= 0) {
        // 0x1e45816
        v49 = g9;
        v48 = *(int32_t *)(g9 + 20);
    } else {
        int16_t * v50 = (int16_t *)(g9 + 18); // 0x1e457e5
        uint16_t v51 = *v50; // 0x1e457e5
        v17 = *(int32_t *)(g9 + 20);
        g6 = g6 & -0x10000 | (int32_t)-v51;
        *v50 = *v50 - v51;
        int32_t v52 = g9; // 0x1e45803
        int32_t v53; // 0x1e4580d
        while (true) {
            int32_t v54 = v52 + 20; // 0x1e457fb
            if ((*(int16_t *)v54 & (int16_t)1) != 0) {
                // 0x1e45802
                v17++;
            }
            // 0x1e45803
            g2 = v54;
            *(int32_t *)(v52 - 4) = v54;
            g2 = function_1e443f0((int32_t)&g708);
            v53 = g9 + 4;
            int32_t v55 = g6; // 0x1e45810
            uint16_t v56 = (int16_t)v55 - 1; // 0x1e45810
            g6 = (int32_t)v56 | v55 & -0x10000;
            if (v56 == 0) {
                // break -> 0x1e4581a
                break;
            }
            // 0x1e45803
            v52 = v53;
        }
        // 0x1e4581a
        v49 = v53;
        v48 = v17;
    }
    if (v48 != 0) {
        char * v57 = (char *)(v49 + 20); // 0x1e4581e
        *v57 = *v57 | 1;
        v19 = g9;
    } else {
        v19 = v49;
    }
    goto lab_0x1e45823;
  lab_0x1e45823:
    // 0x1e45823
    g2 = 0x8000;
    int16_t v58 = *(int16_t *)(v19 + 20); // 0x1e45828
    if (v58 <= -1 && v58 != -0x8000) {
        int32_t * v59 = (int32_t *)(v19 + 22); // 0x1e4582f
        int32_t v60 = *v59 + 1; // 0x1e4582f
        if (v60 != 0) {
            // 0x1e45869
            *v59 = v60;
        } else {
            // 0x1e45836
            g5 = 0;
            *v59 = 0;
            int32_t * v61 = (int32_t *)(g9 + 26); // 0x1e4583c
            int32_t v62 = *v61 + 1; // 0x1e4583c
            if (v62 != 0) {
                // 0x1e45863
                *v61 = v62;
            } else {
                // 0x1e45843
                *v61 = g5;
                int16_t * v63 = (int16_t *)(g9 + 30); // 0x1e45847
                int16_t v64 = *v63 + 1; // 0x1e45847
                if (v64 != 0) {
                    // 0x1e4585c
                    *v63 = v64;
                } else {
                    // 0x1e45850
                    *v63 = (int16_t)g2;
                    int16_t * v65 = (int16_t *)(g9 + 18); // 0x1e45855
                    *v65 = *v65 + 1;
                }
            }
        }
    }
    // 0x1e4586d
    if (*(int16_t *)(g9 + 18) >= 0x7fff) {
        // 0x1e45876
        *(int32_t *)(g8 + 4) = 0;
        int16_t v66 = *(int16_t *)(g9 + 16); // 0x1e4587d
        g2 = v66 == 0;
        g3 = *(int32_t *)g9;
        int32_t v67 = v66 == 0 ? -0x80000000 : 0; // 0x1e45886
        g2 = v67;
        g6 = *(int32_t *)(g9 + 4);
        g2 = v67 - 0x8000;
        *(int32_t *)g8 = 0;
        *(int32_t *)(g8 + 8) = g2;
        g8 = *(int32_t *)g9;
        g4 = *(int32_t *)(g9 + 4);
        return g2;
    }
    uint16_t v68 = *(int16_t *)(g9 + 22); // 0x1e458a0
    g2 = g2 & -0x10000 | (int32_t)v68;
    *(int16_t *)g8 = v68;
    uint16_t v69 = *(int16_t *)(g9 + 18); // 0x1e458a8
    int32_t v70 = g2 & -0x10000; // 0x1e458a8
    g2 = v70 | (int32_t)v69;
    int32_t v71 = *(int32_t *)(g9 + 24); // 0x1e458ad
    g5 = v71;
    g2 = (int32_t)(*(int16_t *)(g9 + 16) | v69) | v70;
    *(int32_t *)(g8 + 2) = v71;
    *(int16_t *)(g8 + 10) = (int16_t)g2;
    g3 = *(int32_t *)g9;
    *(int32_t *)(g8 + 6) = *(int32_t *)(g9 + 28);
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e45900 - 0x1e4597b
int32_t function_1e45900(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e45900
    g8 = &g482;
    int32_t v1 = a2; // edi
    if (a2 != 0) {
        int32_t v2; // 0x1e45915
        if (a2 < 0) {
            // 0x1e45915
            v2 = -a2;
            v1 = v2;
            g8 = &g483;
        } else {
            v2 = a2;
        }
        // 0x1e4591c
        g4 = a1;
        if (a3 == 0) {
            // 0x1e45927
            *(int16_t *)a1 = 0;
        } else {
            v1 = v2;
        }
        if (v1 != 0) {
            int32_t v3 = v1; // 0x1e45933
            while (true) {
                int32_t v4 = g8 + 84; // 0x1e45930
                g8 = v4;
                int32_t v5 = v3 / 8; // 0x1e45935
                g6 = v5;
                int32_t v6 = v3 & 7; // 0x1e45938
                g2 = v6;
                int32_t v7; // 0x1e45970
                if (v6 != 0) {
                    // 0x1e4593f
                    g2 = 3 * v6;
                    int32_t v8 = v4 + 12 * v6; // 0x1e45942
                    int32_t v9; // 0x1e45966
                    if (*(int16_t *)v8 <= 0xffff) {
                        int32_t v10 = g9 + 12; // 0x1e4594c
                        g5 = v10;
                        int32_t v11 = *(int32_t *)v8; // 0x1e45950
                        g2 = v11;
                        *(int32_t *)v10 = v11;
                        int32_t v12 = *(int32_t *)(v8 + 4); // 0x1e45954
                        g2 = v12;
                        *(int32_t *)(g5 + 4) = v12;
                        *(int32_t *)(g5 + 8) = *(int32_t *)(v8 + 8);
                        int32_t * v13 = (int32_t *)(g9 + 14); // 0x1e45962
                        *v13 = *v13 - 1;
                        v9 = g5;
                    } else {
                        v9 = v8;
                    }
                    // 0x1e45966
                    *(int32_t *)(g9 - 4) = v9;
                    *(int32_t *)(g9 - 8) = g4;
                    g2 = function_1e45650(&g708, (char *)&g708);
                    v7 = g6;
                } else {
                    v7 = v5;
                }
                if (v7 == 0) {
                    // break -> 0x1e45974
                    break;
                }
                v3 = v7;
            }
        }
    }
    // 0x1e45974
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e45980 - 0x1e459e9
int32_t function_1e45980(int32_t a1, int32_t a2) {
    int32_t v1 = g4; // 0x1e45984
    int32_t v2 = a1 & 31; // 0x1e45987
    g5 = 4 * v2;
    int32_t v3 = a1 / 8 & -4; // 0x1e45990
    g2 = v3;
    int32_t v4 = *(int32_t *)(v3 + (int32_t)&g677); // 0x1e45993
    int32_t v5 = 36 * v2; // 0x1e45999
    g2 = v5;
    int32_t v6 = v5 + 4 + v4; // 0x1e4599c
    g5 = v6;
    char * v7 = (char *)v6; // 0x1e459a2
    unsigned char v8 = *v7; // 0x1e459a2
    int32_t v9 = v1 & -256; // 0x1e459a2
    g2 = a2;
    int32_t v10;
    if (a2 != 0x8000) {
        if (a2 != 0x4000) {
            int32_t v11 = function_1e23ad0(); // 0x1e459d7
            g4 = v1;
            *(int32_t *)v11 = 22;
            g2 = -1;
            return -1;
        }
        // 0x1e459c1
        v10 = (int32_t)v8 | v9 | 128;
    } else {
        // 0x1e459b5
        v10 = (int32_t)(v8 & 127) | v9;
    }
    // 0x1e459c4
    *v7 = (char)v10;
    g4 = v1;
    int32_t result = (int32_t)(v8 & -128) == 0 ? 0x8000 : 0x4000; // 0x1e459d1
    g2 = result;
    return result;
}

// Address range: 0x1e459f0 - 0x1e45a1f
int32_t function_1e459f0(int32_t a1) {
    int32_t v1 = g5; // 0x1e459f0
    int32_t v2 = v1; // bp-4
    int32_t v3 = g2; // 0x1e459f1
    int32_t v4;
    int32_t v5 = &v4; // 0x1e459f6
    g5 = v5;
    int32_t v6; // 0x1e45a10
    int32_t v7; // 0x1e45a10
    if (v3 >= 0x1000) {
        int32_t v8 = v5 - 0x1000; // 0x1e459fc
        int32_t v9 = v3 - 0x1000; // 0x1e45a02
        while (v9 >= 0x1000) {
            // 0x1e459fc
            v8 -= 0x1000;
            v9 -= 0x1000;
        }
        // 0x1e45a10
        g5 = v8;
        g2 = v9;
        v7 = v9;
        v6 = v8;
    } else {
        v7 = v3;
        v6 = v5;
    }
    int32_t v10 = v6 - v7; // 0x1e45a10
    g5 = v10;
    g2 = &v2;
    g5 = v1;
    g2 = a1;
    *(int32_t *)(v10 - 4) = a1;
    return g2;
}

// Address range: 0x1e45a20 - 0x1e45a46
int32_t function_1e45a20(int32_t a1) {
    // 0x1e45a20
    g6 = a1;
    int32_t v1; // edi
    int32_t v2 = function_1e45a50(a1, v1, g3) + 1; // 0x1e45a2e
    g2 = v2;
    int32_t v3 = function_1e22670(v2); // 0x1e45a30
    g7 = v2;
    g2 = v3;
    int32_t result; // 0x1e45a3c
    if (v3 != 0) {
        // 0x1e45a3a
        result = function_1e45ad0(v3, g6);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e45a43
    return result;
}

// Address range: 0x1e45a50 - 0x1e45acb
int32_t function_1e45a50(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e45a50
    g5 = a1;
    int32_t v1; // 0x1e45a7e
    int32_t result; // 0x1e45aaa
    if ((a1 & 3) != 0) {
        int32_t v2 = a1; // 0x1e45a5e
        int32_t v3; // 0x1e45a5e
        while (true) {
            char v4 = *(char *)v2; // 0x1e45a5c
            char v5;
            g2 = (int32_t)v4 | (int32_t)v5 & -256;
            v3 = v2 + 1;
            g5 = v3;
            if (v4 == 0) {
                // break -> 0x1e45aa3
                break;
            }
            if ((v3 & 3) == 0) {
                // 0x1e45a6b
                g2 = v4;
                v1 = v3;
                goto lab_0x1e45a70;
            }
            v2 = v3;
            v5 = v4;
        }
        // 0x1e45aa3
        g5 = a1;
        result = v3 - 1 - a1;
        g2 = result;
        return result;
    }
    v1 = a1;
    goto lab_0x1e45a70;
  lab_0x1e45a70:
    while (true) {
        int32_t * v6 = (int32_t *)v1; // 0x1e45a70
        int32_t v7 = *v6; // 0x1e45a70
        int32_t v8 = v7 + 0x7efefeff ^ -1 - v7; // 0x1e45a7c
        g2 = v8;
        int32_t v9 = v1 + 4; // 0x1e45a7e
        g5 = v9;
        if ((v8 & -0x7efeff00) == 0) {
            v1 = v9;
            // continue -> 0x1e45a70
            continue;
        }
        uint32_t v10 = *v6; // 0x1e45a88
        g2 = v10;
        if ((char)v10 == 0) {
            // break -> 0x1e45ac1
            break;
        }
        if ((v10 & 0xff00) == 0) {
            // 0x1e45ab7
            g5 = a1;
            int32_t result2 = v1 + 1 - a1; // 0x1e45abe
            g2 = result2;
            return result2;
        }
        if ((v10 & 0xff0000) == 0) {
            // 0x1e45aad
            g5 = a1;
            int32_t result3 = v1 + 2 - a1; // 0x1e45ab4
            g2 = result3;
            return result3;
        }
        if (v10 >= 0x1000000) {
            v1 = v9;
            // continue -> 0x1e45a70
            continue;
        }
        // 0x1e45aa3
        g5 = a1;
        result = v9 - 1 - a1;
        g2 = result;
        return result;
    }
    // 0x1e45ac1
    g5 = a1;
    int32_t result4 = v1 - a1; // 0x1e45ac8
    g2 = result4;
    return result4;
}

// Address range: 0x1e45ad0 - 0x1e45ad7
int32_t function_1e45ad0(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // 0x1e45ad0
    g6 = a1;
    int32_t result = function_1e45b41(v1, (int32_t)&g708, (int32_t)&g708); // 0x1e45ad5
    g2 = result;
    return result;
}

// Address range: 0x1e45ae0 - 0x1e45b41
int32_t function_1e45ae0(int32_t a1) {
    // 0x1e45ae0
    g5 = a1;
    int32_t result; // 0x1e45b32
    if ((a1 & 3) != 0) {
        int32_t v1 = g2; // 0x1e45aed
        int32_t v2; // 0x1e45aef
        while (true) {
            unsigned char v3 = *(char *)a1; // 0x1e45aed
            int32_t v4 = (int32_t)v3 | v1 & -256; // 0x1e45aed
            g2 = v4;
            v2 = a1 + 1;
            g5 = v2;
            if (v3 == 0) {
                // break -> 0x1e45b2f
                break;
            }
            if ((v2 & 3) == 0) {
                a1 = v2;
                goto lab_0x1e45afc;
            }
            v1 = v4;
            a1 = v2;
        }
        // 0x1e45b2f
        g6 = v2 - 1;
        result = function_1e45b41((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = result;
        return result;
    }
  lab_0x1e45afc:;
    uint32_t result4; // 0x1e45b14
    while (true) {
        int32_t * v5 = (int32_t *)a1; // 0x1e45afc
        int32_t v6 = *v5; // 0x1e45afc
        int32_t v7 = v6 + 0x7efefeff; // 0x1e45b03
        g7 = v7;
        int32_t v8 = v7 ^ -1 - v6; // 0x1e45b08
        g2 = v8;
        int32_t v9 = a1 + 4; // 0x1e45b0a
        g5 = v9;
        if ((v8 & -0x7efeff00) == 0) {
            a1 = v9;
            // continue -> 0x1e45afc
            continue;
        }
        // 0x1e45b14
        result4 = *v5;
        g2 = result4;
        if ((char)result4 == 0) {
            // break -> 0x1e45b3e
            break;
        }
        if ((result4 & 0xff00) == 0) {
            // 0x1e45b39
            g6 = a1 + 1;
            int32_t result2 = function_1e45b41((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e45b3c
            g2 = result2;
            return result2;
        }
        if ((result4 & 0xff0000) == 0) {
            // 0x1e45b34
            g6 = a1 + 2;
            int32_t result3 = function_1e45b41((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e45b37
            g2 = result3;
            return result3;
        }
        if (result4 >= 0x1000000) {
            a1 = v9;
            // continue -> 0x1e45afc
            continue;
        }
        // 0x1e45b2f
        g6 = v9 - 1;
        result = function_1e45b41((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
        g2 = result;
        return result;
    }
    // 0x1e45b3e
    return result4;
}

// Address range: 0x1e45b41 - 0x1e45bc0
int32_t function_1e45b41(int32_t a1, int32_t result, int32_t a3) {
    // 0x1e45b41
    g5 = a3;
    if ((a3 & 3) != 0) {
        int32_t v1; // 0x1e45b4d
        while (true) {
            unsigned char v2 = *(char *)a3; // 0x1e45b4d
            v1 = g7 & -256 | (int32_t)v2;
            g7 = v1;
            g5 = a3 + 1;
            if (v2 == 0) {
                // break -> 0x1e45bb8
                break;
            }
            // 0x1e45b54
            *(char *)g6 = v2;
            g6++;
            int32_t v3 = g5; // 0x1e45b57
            if ((v3 & 3) == 0) {
                a3 = v3;
                goto lab_0x1e45b66;
            }
            a3 = v3;
        }
        // 0x1e45bb8
        *(char *)g6 = (char)v1;
        g2 = result;
        return result;
    }
  lab_0x1e45b66:;
    uint32_t v4; // 0x1e45b74
    while (true) {
        int32_t * v5 = (int32_t *)a3; // 0x1e45b6b
        int32_t v6 = *v5; // 0x1e45b6b
        int32_t v7 = v6 + 0x7efefeff ^ -1 - v6; // 0x1e45b72
        g2 = v7;
        v4 = *v5;
        g5 = a3 + 4;
        if ((v7 & -0x7efeff00) != 0) {
            if ((char)v4 == 0) {
                // break -> 0x1e45bb8
                break;
            }
            if ((v4 & 0xff00) == 0) {
                // 0x1e45baf
                *(int16_t *)g6 = (int16_t)v4;
                g2 = result;
                return result;
            }
            if ((v4 & 0xff0000) == 0) {
                // 0x1e45ba2
                *(int16_t *)g6 = (int16_t)v4;
                g2 = result;
                *(char *)(g6 + 2) = 0;
                return g2;
            }
            if (v4 < 0x1000000) {
                // 0x1e45b9a
                *(int32_t *)g6 = v4;
                g2 = result;
                return result;
            }
        }
        // 0x1e45b61
        *(int32_t *)g6 = v4;
        g6 += 4;
        a3 = g5;
        // continue -> 0x1e45b66
        continue;
    }
    // 0x1e45bb8
    *(char *)g6 = (char)v4;
    g2 = result;
    return result;
}

// Address range: 0x1e45bc0 - 0x1e45be3
int32_t function_1e45bc0(int32_t a1) {
    int32_t v1 = GetVersion(); // 0x1e45bc0
    g2 = v1;
    int32_t result;
    if (v1 <= 0xffffffff) {
        int32_t v2 = GetVersion(); // 0x1e45bcd
        g2 = v2;
        if ((char)v2 >= 4) {
            result = 0;
            // 0x1e45be0
            g2 = result;
            return result;
        }
    }
    result = a1;
    // 0x1e45be0
    g2 = result;
    return result;
}

// Address range: 0x1e45be3 - 0x1e45c22
int32_t function_1e45be3(int32_t a1) {
    int32_t v1 = waveOutGetNumDevs(); // 0x1e45be6
    g2 = v1;
    g5 = a1;
    if (v1 < a1) {
        // 0x1e45c1c
        g2 = 0;
        return 0;
    }
    if (a1 < 0) {
        // 0x1e45c1c
        g2 = 0;
        return 0;
    }
    if (v1 == 0) {
        // 0x1e45c1c
        g2 = 0;
        return 0;
    }
    // 0x1e45bfc
    int32_t v2; // bp-52
    g2 = &v2;
    int32_t v3 = waveOutGetDevCapsA(a1, (struct tagWAVEOUTCAPSA *)&v2, 52); // 0x1e45c04
    g2 = v3;
    if (v3 != 0) {
        // 0x1e45c1c
        g2 = 0;
        return 0;
    }
    // 0x1e45c0e
    uint32_t v4;
    int32_t result = v4 / 32 & 1; // 0x1e45c15
    // 0x1e45c1c
    g2 = result;
    return result;
}

// Address range: 0x1e45c22 - 0x1e45c88
int32_t function_1e45c22(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e45c80
    if (a2 == 0) {
        int32_t v1 = timeGetTime(); // 0x1e45c5b
        g5 = v1;
        int32_t v2 = (int32_t)g601; // 0x1e45c65
        g2 = v2;
        int32_t v3 = v1 - *(int32_t *)(v2 + 416); // 0x1e45c6a
        g5 = v3;
        int32_t v4 = *(int32_t *)(v2 + 388); // 0x1e45c70
        g5 = 1000;
        uint64_t v5 = (int64_t)v4 * (int64_t)v3 & 0xffffffff; // 0x1e45c7e
        uint64_t v6 = v5 / 1000; // 0x1e45c7e
        g7 = v5 % 1000;
        result = (int32_t)v6 & 248 | (int32_t)v6 & 0x7fff00;
        g2 = result;
    } else {
        // 0x1e45c2e
        int32_t v7; // bp-16
        g2 = &v7;
        v7 = 4;
        int32_t v8 = waveOutGetPosition(a1, (struct mmtime_tag *)&v7, 12); // 0x1e45c3e
        g2 = v8;
        g5 = (int32_t)g601;
        result = v8;
    }
    // 0x1e45c82
    return result;
}

// Address range: 0x1e45c88 - 0x1e45c93
int32_t function_1e45c88(int32_t a1, int32_t a2) {
    int32_t result = a2 + a1; // 0x1e45c8c
    g2 = result;
    return result;
}

// Address range: 0x1e45c93 - 0x1e45c9e
int32_t function_1e45c93(int32_t a1, int32_t a2) {
    int32_t result = a1 - a2; // 0x1e45c97
    g2 = result;
    return result;
}

// Address range: 0x1e45c9e - 0x1e45d55
int32_t function_1e45c9e(uint32_t a1) {
    int32_t v1 = (int32_t)g601; // 0x1e45c9f
    g2 = v1;
    int32_t v2 = 4; // bp-16
    int32_t v3 = *(int32_t *)(v1 + 12); // 0x1e45cb1
    g2 = v3;
    int32_t v4;
    if (v3 != 0) {
        // 0x1e45cb9
        g5 = &v2;
        g2 = waveOutGetPosition(v3, (struct mmtime_tag *)&v2, 12);
    } else {
        v4 = 0;
    }
    int32_t v5 = a1 - v4; // 0x1e45cd2
    int32_t v6 = (int32_t)g601; // 0x1e45cda
    if (v4 > a1 || v5 == 0) {
        int32_t v7 = v4 - a1; // 0x1e45ce0
        g2 = v7;
        *(int32_t *)(v6 + 424) = v7;
        int32_t v8 = (int32_t)g601; // 0x1e45ce8
        g5 = v8;
        *(int32_t *)(v8 + 436) = 0x1e45c93;
    } else {
        // 0x1e45cfa
        g2 = v5;
        *(int32_t *)(v6 + 424) = v5;
        int32_t v9 = (int32_t)g601; // 0x1e45d0b
        g5 = v9;
        *(int32_t *)(v9 + 436) = 0x1e45c88;
    }
    int32_t v10 = timeGetTime(); // 0x1e45d1b
    int32_t v11 = (int32_t)g601; // 0x1e45d23
    g5 = v11;
    uint32_t v12 = 1000 * a1; // 0x1e45d2d
    g2 = v12;
    uint32_t v13 = *(int32_t *)(v11 + 388); // 0x1e45d33
    int32_t v14 = v12 / v13;
    g2 = v14;
    g7 = v12 % v13;
    *(int32_t *)(v11 + 416) = v10 - v14;
    int32_t v15 = (int32_t)g601; // 0x1e45d41
    g5 = v15;
    g6 = *(int32_t *)g9;
    *(int32_t *)(v15 + 412) = a1;
    g8 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e45d55 - 0x1e45f8a
int32_t function_1e45d55(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int16_t a5) {
    int32_t v1 = (int32_t)g601; // 0x1e45d56
    g2 = v1;
    int32_t v2; // esi
    char * v3;
    char * v4;
    int32_t v5; // 0x1e45e6b302
    int32_t v6; // 0x1e45e79300
    int32_t v7; // 0x1e45e79301
    int32_t v8; // 0x1e45e8a
    int32_t v9; // 0x1e45f62306
    int32_t v10; // 0x1e45f79
    uint16_t v11; // 0x1e45df1
    if (*(int16_t *)(v1 + 382) != 2) {
        if (a4 != 1) {
            if (a5 != 0) {
                v4 = NULL;
                while (true) {
                  lab_0x1e45f08:
                    // 0x1e45f08
                    g5 = 128;
                    if (a4 > 0) {
                        // 0x1e45f13
                        g2 = a4;
                        int32_t v12 = (int32_t)v4 & 0xffff; // 0x1e45f35
                        int32_t v13 = a3 + 2; // 0x1e45f3c
                        int32_t v14 = (int32_t)*(int16_t *)(v13 - 2); // 0x1e45f22
                        g2 = v14;
                        int32_t v15 = (int32_t)*(int16_t *)v13 + v14; // 0x1e45f29
                        g2 = v15;
                        g2 = v12;
                        int32_t v16 = v13 + 4; // 0x1e45f3c
                        v2 = v16;
                        int32_t v17 = (int32_t)*(char *)(*(int32_t *)a2 + v12); // 0x1e45f42
                        unsigned char v18 = *(char *)(256 * v15 / 2 + (int32_t)&g602 + v17); // 0x1e45f46
                        int32_t v19 = (int32_t)v18 - 128; // 0x1e45f4e
                        g2 = v19;
                        int32_t v20 = v19 + 128; // 0x1e45f53
                        g5 = v20;
                        int32_t v21 = a4 - 1; // 0x1e45f55
                        while (v21 != 0) {
                            // 0x1e45f22
                            a2 += 4;
                            v13 = v16;
                            a4 = v21;
                            v14 = (int32_t)*(int16_t *)(v13 - 2);
                            g2 = v14;
                            v15 = (int32_t)*(int16_t *)v13 + v14;
                            g2 = v15;
                            g2 = v12;
                            v16 = v13 + 4;
                            v2 = v16;
                            v17 = (int32_t)*(char *)(*(int32_t *)a2 + v12);
                            v18 = *(char *)(256 * v15 / 2 + (int32_t)&g602 + v17);
                            v19 = (int32_t)v18 - 128;
                            g2 = v19;
                            v20 += v19;
                            g5 = v20;
                            v21 = a4 - 1;
                        }
                        if (v20 >= 0) {
                            v9 = v20;
                            goto lab_0x1e45f62;
                        } else {
                            // 0x1e45f5e
                            g5 = 0;
                            v10 = 0;
                            goto lab_0x1e45f6f;
                        }
                    } else {
                        v9 = 128;
                        goto lab_0x1e45f62;
                    }
                }
            }
        } else {
            // 0x1e45ea9
            g2 = a2;
            int32_t v22 = *(int32_t *)a2; // 0x1e45eaf
            g5 = v22;
            int32_t v23 = (int32_t)*(int16_t *)(a3 + 2); // 0x1e45eb1
            int32_t v24 = ((int32_t)*(int16_t *)a3 + v23) / 2; // 0x1e45ebd2
            g2 = v24;
            if (a5 != 0) {
                int32_t v25 = 256 * v24; // 0x1e45ed3
                int16_t v26 = a5 - 1;
                int32_t v27 = (int32_t)*(char *)v22; // 0x1e45ed6
                g2 = v27;
                g5 = v22 + 1;
                unsigned char v28 = *(char *)(v25 + (int32_t)&g602 + v27); // 0x1e45edd
                g2 = v28;
                *(char *)a1 = v28;
                g2 = g2 & -0x10000 | (int32_t)v26;
                while (v26 != 0) {
                    // 0x1e45ed6
                    v22 = g5;
                    a1++;
                    v26--;
                    v27 = (int32_t)*(char *)v22;
                    g2 = v27;
                    g5 = v22 + 1;
                    v28 = *(char *)(v25 + (int32_t)&g602 + v27);
                    g2 = v28;
                    *(char *)a1 = v28;
                    g2 = g2 & -0x10000 | (int32_t)v26;
                }
            }
        }
    } else {
        if (a4 != 1) {
            if (a5 != 0) {
                // 0x1e45de6
                v2 = 255;
                v11 = (a5 + 1) / 2;
                g2 = v1 & -0x10000 | (int32_t)v11;
                v3 = NULL;
                while (true) {
                  lab_0x1e45df8:
                    // 0x1e45df8
                    g5 = 128;
                    if (a4 > 0) {
                        // 0x1e45e05
                        g2 = a2;
                        int32_t v29 = a3; // 0x1e45e2f
                        int32_t v30 = a2;
                        g2 = v30;
                        int32_t v31 = *(int32_t *)v30 + ((int32_t)v3 & 0xffff); // 0x1e45e21
                        g2 = v31;
                        int32_t v32 = (int32_t)*(char *)v31; // 0x1e45e29
                        g2 = v32;
                        int32_t v33 = 256 * (int32_t)*(int16_t *)v29; // 0x1e45e2c
                        unsigned char v34 = *(char *)(v33 + (int32_t)&g602 + v32); // 0x1e45e32
                        int32_t v35 = v34; // 0x1e45e32
                        g2 = v35;
                        int32_t v36 = 256 * (int32_t)*(int16_t *)(v29 + 2); // 0x1e45e3e
                        int32_t v37 = v35; // 0x1e45e46
                        g2 = v31;
                        int32_t v38 = (int32_t)*(char *)(v31 + 1); // 0x1e45e4b
                        g2 = v38;
                        unsigned char v39 = *(char *)(v36 + (int32_t)&g602 + v38); // 0x1e45e4f
                        int32_t v40 = (int32_t)v39 - 128; // 0x1e45e57
                        g2 = v40;
                        int32_t v41 = 128 + v40; // 0x1e45e5c
                        g5 = v41;
                        int32_t v42 = a4 - 1; // 0x1e45e5e
                        while (v42 != 0) {
                            // 0x1e45e14
                            v29 += 4;
                            v30 += 4;
                            g2 = v30;
                            v31 = *(int32_t *)v30 + ((int32_t)v3 & 0xffff);
                            g2 = v31;
                            v32 = (int32_t)*(char *)v31;
                            g2 = v32;
                            v33 = 256 * (int32_t)*(int16_t *)v29;
                            v34 = *(char *)(v33 + (int32_t)&g602 + v32);
                            v35 = v34;
                            g2 = v35;
                            v36 = 256 * (int32_t)*(int16_t *)(v29 + 2);
                            v37 += v35 - 128;
                            g2 = v31;
                            v38 = (int32_t)*(char *)(v31 + 1);
                            g2 = v38;
                            v39 = *(char *)(v36 + (int32_t)&g602 + v38);
                            v40 = (int32_t)v39 - 128;
                            g2 = v40;
                            v41 += v40;
                            g5 = v41;
                            v42--;
                        }
                        if (v37 >= 0) {
                            v5 = v37;
                            v7 = v41;
                            goto lab_0x1e45e6b;
                        } else {
                            // 0x1e45e67
                            v6 = v41;
                            v8 = 0;
                            goto lab_0x1e45e71;
                        }
                    } else {
                        v5 = 128;
                        v7 = 128;
                        goto lab_0x1e45e6b;
                    }
                }
            }
        } else {
            // 0x1e45d77
            g2 = a2;
            int32_t v43 = (int32_t)*(int16_t *)(a3 + 2); // 0x1e45d7d
            g5 = g5 & -0x10000 | v43;
            int32_t v44 = (int32_t)*(int16_t *)a3; // 0x1e45d88
            int32_t v45 = a2 & -0x10000; // 0x1e45d88
            g2 = v44 | v45;
            if (a5 != 0) {
                int32_t v46 = 256 * v44; // 0x1e45d9b
                g5 = 256 * v43;
                g2 = (int32_t)((a5 + 1) / 2) | v45;
                int32_t v47 = *(int32_t *)a2; // 0x1e45da6
                unsigned char v48 = *(char *)v47; // 0x1e45da6
                unsigned char v49 = *(char *)(v46 + (int32_t)&g602 + (int32_t)v48); // 0x1e45daa
                *(char *)a1 = v49;
                int32_t v50 = v47 + 1; // 0x1e45db9
                unsigned char v51 = *(char *)v50; // 0x1e45db9
                unsigned char v52 = *(char *)((int32_t)v51 + (int32_t)&g602 + g5); // 0x1e45dbd
                *(char *)(a1 + 1) = v52;
                int32_t v53 = g2; // 0x1e45dcc
                uint16_t v54 = (int16_t)v53 - 1; // 0x1e45dcc
                g2 = (int32_t)v54 | v53 & -0x10000;
                while (v54 != 0) {
                    // 0x1e45da6
                    int32_t v55; // ebx
                    v55 = ((int32_t)v49 | v55 & -256) & -256 | (int32_t)v52;
                    v47 = v50 + 1;
                    a1 += 2;
                    v48 = *(char *)v47;
                    v49 = *(char *)(v46 + (int32_t)&g602 + (int32_t)v48);
                    *(char *)a1 = v49;
                    v50 = v47 + 1;
                    v51 = *(char *)v50;
                    v52 = *(char *)((int32_t)v51 + (int32_t)&g602 + g5);
                    *(char *)(a1 + 1) = v52;
                    v53 = g2;
                    v54 = (int16_t)v53 - 1;
                    g2 = (int32_t)v54 | v53 & -0x10000;
                }
            }
        }
    }
  lab_0x1e45f81_2:
    // 0x1e45f81
    return g2;
  lab_0x1e45f62:
    if (v9 > 255) {
        // 0x1e45f6a
        g5 = 255;
        v10 = 255;
    } else {
        v10 = v9;
    }
    goto lab_0x1e45f6f;
  lab_0x1e45f6f:
    // 0x1e45f6f
    *(char *)a1 = (char)v10;
    int16_t v56 = a5 - 1; // 0x1e45f7b
    if (v56 == 0) {
        // break -> 0x1e45f81
        goto lab_0x1e45f81_2;
    }
    a5 = v56;
    a1++;
    v4 = (char *)((int32_t)v4 + 1 & 0xffff);
    goto lab_0x1e45f08;
  lab_0x1e45e6b:
    // 0x1e45e6b
    if (v5 > v2) {
        // 0x1e45e6f
        v6 = v7;
        v8 = v2;
    } else {
        v6 = v7;
        v8 = v5;
    }
    goto lab_0x1e45e71;
  lab_0x1e45e71:
    if (v6 >= 0) {
        // 0x1e45e79
        if (v6 > v2) {
            // 0x1e45e7d
            g5 = v2;
        }
    } else {
        // 0x1e45e75
        g5 = 0;
    }
    // 0x1e45e7f
    *(char *)a1 = (char)v8;
    *(char *)(a1 + 1) = (char)g5;
    int16_t v57 = v11 - 1; // 0x1e45e94
    if (v57 == 0) {
        // break -> 0x1e45f81
        goto lab_0x1e45f81_2;
    }
    a1 += 2;
    v3 = (char *)((int32_t)v3 + 2 & 0xffff);
    v11 = v57;
    goto lab_0x1e45df8;
}

// Address range: 0x1e45f8a - 0x1e45fb2
int32_t function_1e45f8a(void) {
    // 0x1e45f8a
    g5 = &g596;
    int32_t v1 = &g596; // 0x1e45f8f
    int32_t v2 = v1 + 60; // 0x1e45f8f
    g2 = v2;
    *(int32_t *)v1 = v2;
    int32_t result = g2; // 0x1e45f94
    g5 = result;
    while (result < (int32_t)&g597) {
        // 0x1e45f8f
        v1 = result;
        v2 = v1 + 60;
        g2 = v2;
        *(int32_t *)v1 = v2;
        result = g2;
        g5 = result;
    }
    // 0x1e45f9d
    g598 = 0;
    g603 = &g596;
    return result;
}

// Address range: 0x1e45fb2 - 0x1e45fd4
int32_t function_1e45fb2(void) {
    int32_t v1 = g603; // 0x1e45fb2
    g2 = 0;
    int32_t result; // 0x1e45fd3
    if (v1 != 0) {
        // 0x1e45fc0
        g2 = v1;
        int32_t * v2 = (int32_t *)v1; // 0x1e45fc5
        int32_t v3 = *v2; // 0x1e45fc5
        g7 = v3;
        g603 = v3;
        *v2 = 0;
        result = g2;
    } else {
        result = 0;
    }
    // 0x1e45fd3
    return result;
}

// Address range: 0x1e45fd4 - 0x1e46021
int32_t function_1e45fd4(int32_t a1) {
    int32_t v1 = 10; // esi
    int32_t v2 = 10; // 0x1e460183
    while (true) {
        int32_t v3 = *(int32_t *)a1; // 0x1e45fe2
        g2 = v3;
        int32_t v4; // 0x1e46018
        if (v3 != 0) {
            // 0x1e45fe8
            *(int32_t *)(g9 - 4) = 32;
            *(int32_t *)(g9 - 8) = g2;
            *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 16);
            int32_t v5 = waveOutUnprepareHeader((int32_t)&g708, (struct wavehdr_tag *)&g708, (int32_t)&g708); // 0x1e45fef
            g2 = v5;
            *(int32_t *)(g9 - 4) = *(int32_t *)a1;
            int32_t v6 = (int32_t)GlobalHandle(&g708); // 0x1e45ff7
            g2 = v6;
            *(int32_t *)(g9 - 4) = v6;
            g2 = GlobalUnlock(&g708);
            *(int32_t *)(g9 - 4) = *(int32_t *)a1;
            int32_t v7 = (int32_t)GlobalHandle(&g708); // 0x1e46006
            g2 = v7;
            *(int32_t *)(g9 - 4) = v7;
            g2 = (int32_t)GlobalFree(&g708);
            *(int32_t *)a1 = 0;
            v4 = v1;
        } else {
            v4 = v2;
        }
        int32_t v8 = v4 - 1; // 0x1e46018
        v1 = v8;
        if (v8 == 0) {
            // break -> 0x1e4601b
            break;
        }
        v2 = v8;
        a1 += 4;
    }
    // 0x1e4601b
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e46021 - 0x1e46130
int32_t function_1e46021(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-16
    int32_t v2 = 0; // edi
    int32_t v3 = 0; // ebp
    int32_t v4 = &v1; // 0x1e4602f
    while (true) {
        // 0x1e4602f
        *(int32_t *)(v4 - 4) = 0x2b41;
        *(int32_t *)(v4 - 8) = 0x2000;
        int32_t v5 = (int32_t)GlobalAlloc((int32_t)&g708, (int32_t)&g708); // 0x1e46039
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        int32_t * v6 = GlobalLock(&g708); // 0x1e46040
        int32_t v7 = (int32_t)v6; // 0x1e46040
        g2 = v7;
        *(int32_t *)a1 = v7;
        if (v6 == NULL) {
            // break -> 0x1e460b3
            break;
        }
        int32_t v8 = v7 + 48; // 0x1e4604c
        g5 = v8;
        v2++;
        *v6 = v8;
        int32_t v9 = (int32_t)g601; // 0x1e46052
        g2 = v9;
        int32_t v10 = *(int32_t *)a1; // 0x1e46057
        g5 = v10;
        int32_t v11 = *(int32_t *)(v9 + 396); // 0x1e46059
        g7 = v11;
        *(int32_t *)(v10 + 4) = v11;
        int32_t v12 = *(int32_t *)a1; // 0x1e46062
        g5 = v12;
        *(int32_t *)(v12 + 16) = v3;
        int32_t v13 = *(int32_t *)a1; // 0x1e46067
        g5 = v13;
        *(int32_t *)(v13 + 20) = v3;
        int32_t v14 = *(int32_t *)a1; // 0x1e4606c
        g5 = v14;
        *(int32_t *)(v14 + 32) = 1;
        int32_t v15 = a1; // 0x1e46075
        int32_t v16 = *(int32_t *)v15; // 0x1e46075
        g5 = v16;
        a1 = v15 + 4;
        *(int32_t *)(v16 + 36) = v3;
        if (v2 >= 10) {
            // 0x1e46082
            g6 = 0;
            goto lab_0x1e46086;
        }
        // 0x1e4604c
        v4 = g9;
    }
    // 0x1e460b3
    if (g484 != 0) {
        // 0x1e460bc
        *(int32_t *)(g9 - 4) = 48;
        *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
        *(int32_t *)(g9 - 12) = (int32_t)"Unable to allocate memory for waveform data.  Try making more memory available by closing other applications.";
        *(int32_t *)(g9 - 16) = 0;
        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
    }
    int32_t v17 = v2 - 1; // 0x1e460d0
    if (v17 >= 0) {
        int32_t v18 = a1 + 4 * v17; // 0x1e460d3
        a1 = v18;
        *(int32_t *)(g9 - 4) = *(int32_t *)v18;
        int32_t v19 = (int32_t)GlobalHandle(&g708); // 0x1e460da
        g2 = v19;
        *(int32_t *)(g9 - 4) = v19;
        g2 = GlobalUnlock(&g708);
        *(int32_t *)(g9 - 4) = *(int32_t *)a1;
        int32_t v20 = (int32_t)GlobalHandle(&g708); // 0x1e460e9
        g2 = v20;
        *(int32_t *)(g9 - 4) = v20;
        g2 = (int32_t)GlobalFree(&g708);
        *(int32_t *)a1 = 0;
        int32_t v21 = a1 - 4; // 0x1e460f8
        a1 = v21;
        int32_t v22 = v17 - 1; // 0x1e460fb
        while (v22 >= 0) {
            // 0x1e460d8
            *(int32_t *)(g9 - 4) = *(int32_t *)v21;
            v19 = (int32_t)GlobalHandle(&g708);
            g2 = v19;
            *(int32_t *)(g9 - 4) = v19;
            g2 = GlobalUnlock(&g708);
            *(int32_t *)(g9 - 4) = *(int32_t *)a1;
            v20 = (int32_t)GlobalHandle(&g708);
            g2 = v20;
            *(int32_t *)(g9 - 4) = v20;
            g2 = (int32_t)GlobalFree(&g708);
            *(int32_t *)a1 = 0;
            v21 = a1 - 4;
            a1 = v21;
            v22--;
        }
    }
    // 0x1e460fe
    g2 = 0;
    int32_t result = 0; // 0x1e460b0
    goto lab_0x1e460ac;
  lab_0x1e460ac:
    // 0x1e460ac
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e46086:
    // 0x1e46086
    *(int32_t *)(g9 - 4) = 32;
    *(int32_t *)(g9 - 8) = *(int32_t *)a1;
    *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 20);
    int32_t v23 = waveOutPrepareHeader((int32_t)&g708, (struct wavehdr_tag *)&g708, (int32_t)&g708); // 0x1e4608e
    g2 = v23;
    if (v23 != 0) {
        // 0x1e46102
        if (g484 == 0) {
            goto lab_0x1e4611f;
        } else {
            // 0x1e4610b
            *(int32_t *)(g9 - 4) = 48;
            *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
            *(int32_t *)(g9 - 12) = (int32_t)"Unable to prepare wave header.";
            *(int32_t *)(g9 - 16) = 0;
            g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
            goto lab_0x1e4611f;
        }
    } else {
        int32_t v24 = a1; // 0x1e46098
        int32_t v25 = *(int32_t *)v24; // 0x1e46098
        g2 = v25;
        g6++;
        a1 = v24 + 4;
        char * v26 = (char *)(v25 + 16); // 0x1e4609e
        *v26 = *v26 | 1;
        if (g6 < 10) {
            goto lab_0x1e46086;
        } else {
            // 0x1e460a7
            g2 = 1;
            result = 1;
            goto lab_0x1e460ac;
        }
    }
  lab_0x1e4611f:
    // 0x1e4611f
    *(int32_t *)(g9 - 4) = a1;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g9 + 20);
    function_1e45fd4((int32_t)&g708);
    g2 = 0;
    result = 0;
    goto lab_0x1e460ac;
}

// Address range: 0x1e46130 - 0x1e461a6
int32_t function_1e46130(int32_t a1) {
    int32_t v1 = g486; // 0x1e46130
    int32_t v2 = g8; // bp-4
    if (v1 == 0) {
        // 0x1e4613a
        g2 = 0;
        // 0x1e461a2
        return 0;
    }
    // 0x1e4613e
    g2 = a1;
    if (v1 != a1) {
        int32_t v3 = v1; // esi
        int32_t v4 = *(int32_t *)(v1 + 44); // 0x1e4616b
        g5 = v4;
        if (v4 == 0) {
            // 0x1e46183
            g2 = 0;
            // 0x1e461a2
            return 0;
        }
        int32_t v5; // 0x1e46187
        int32_t v6; // 0x1e4618a
        while (true) {
            if (v4 == a1) {
                v6 = v1;
                v5 = a1;
                // break -> 0x1e4617f
                break;
            }
            // 0x1e46176
            v3 = v4;
            int32_t v7 = *(int32_t *)(v4 + 44); // 0x1e46178
            g5 = v7;
            if (v7 == 0) {
                v6 = v4;
                v5 = v7;
                // break -> 0x1e4617f
                break;
            }
            v1 = v4;
            v4 = v7;
        }
        if (v5 == 0) {
            // 0x1e46183
            g2 = 0;
            // 0x1e461a2
            return 0;
        }
        int32_t v8 = *(int32_t *)(v5 + 44); // 0x1e46187
        g7 = v8;
        *(int32_t *)(v6 + 44) = v8;
        if (g5 == g487) {
            // 0x1e46195
            g487 = v3;
        }
    } else {
        int32_t v9 = *(int32_t *)(a1 + 44); // 0x1e4614a
        g486 = v9;
        g5 = 0;
        if (v9 == 0) {
            // 0x1e4615d
            g487 = 0;
        }
    }
    // 0x1e4619b
    *(int32_t *)(g2 + 44) = 0;
    // 0x1e461a2
    g8 = v2;
    return g2;
}

// Address range: 0x1e461a6 - 0x1e46241
int32_t function_1e461a6(int32_t a1) {
    // 0x1e461a6
    g8 = a1;
    int32_t v1 = g3; // bp-16
    int32_t v2 = &v1; // 0x1e461ad
    if (*(int32_t *)(a1 + 16) == 0) {
        // 0x1e4623a
        g3 = *(int32_t *)v2;
        return g2;
    }
    int32_t v3 = a1 + 12; // 0x1e461b8
    g6 = v3;
    int32_t v4 = *(int32_t *)v3; // 0x1e461bb
    if (v4 == 0) {
        // 0x1e4623a
        g3 = *(int32_t *)v2;
        return g2;
    }
    int32_t v5 = (int32_t)g601; // 0x1e461c1
    g2 = v5;
    int32_t v6 = function_1e45c22(v4, *(int32_t *)(v5 + 420)); // 0x1e461cd
    g2 = v6;
    g3 = v6;
    g2 = waveOutReset(v4);
    g2 = function_1e45c9e(g3);
    int32_t v7 = g486; // 0x1e461e1
    if (v7 != 0) {
        *(int32_t *)(v7 + 32) = 1;
        int32_t v8 = g486; // 0x1e461f6
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g2 = function_1e46130((int32_t)&g708);
        while (g486 != 0) {
            // 0x1e461ea
            *(int32_t *)(g486 + 32) = 1;
            v8 = g486;
            g2 = v8;
            *(int32_t *)(g9 - 4) = v8;
            g2 = function_1e46130((int32_t)&g708);
        }
    }
    // 0x1e4620a
    *(int32_t *)(g9 - 4) = (int32_t)&g605;
    *(int32_t *)(g9 - 8) = *(int32_t *)g6;
    g2 = function_1e45fd4((int32_t)&g708);
    *(int32_t *)(g9 - 4) = (int32_t)&g606;
    *(int32_t *)(g9 - 8) = *(int32_t *)g6;
    g2 = function_1e45fd4((int32_t)&g708);
    *(int32_t *)(g9 - 4) = *(int32_t *)g6;
    g2 = waveOutClose((int32_t)&g708);
    *(int32_t *)(g9 - 4) = *(int32_t *)(g8 + 4);
    *(int32_t *)g6 = g4;
    g2 = DestroyWindow(&g708);
    *(int32_t *)(g8 + 4) = g4;
    // 0x1e4623a
    g3 = *(int32_t *)g9;
    return g2;
}

// Address range: 0x1e46241 - 0x1e46389
int32_t function_1e46241(void) {
    int32_t v1 = (int32_t)g601; // 0x1e46242
    g2 = v1;
    int32_t result; // 0x1e46331
    if (*(int32_t *)(v1 + 12) != 0) {
        // 0x1e4632d
        g2 = 0;
        result = 0;
        goto lab_0x1e4632f;
    } else {
        // 0x1e46253
        g2 = g607;
        int32_t * windowHandle = CreateWindowExA(0, "WavMix32", (char *)&g25, 0x8000000, 0, 0, 0, 0, NULL, NULL, (int32_t *)g607, NULL); // 0x1e46271
        int32_t v2 = (int32_t)windowHandle; // 0x1e46271
        g2 = v2;
        *(int32_t *)((int32_t)g601 + 4) = v2;
        int32_t v3 = (int32_t)g601; // 0x1e46280
        g5 = v3;
        int32_t v4 = *(int32_t *)(v3 + 4); // 0x1e46286
        g2 = v4;
        int32_t hWnd = 0; // 0x1e46289
        if (v4 != hWnd) {
            int32_t v5 = 0; // esi
            g2 = v3;
            int32_t v6 = *(int32_t *)(v3 + 24); // 0x1e462c7
            int32_t v7 = v3 + 12; // 0x1e462ca
            g2 = v7;
            int32_t v8 = waveOutOpen((int32_t *)v7, v6, (struct tWAVEFORMATEX *)(v3 + 380), v4, 0, 0x10000); // 0x1e462ce
            g2 = v8;
            if (v8 == v5) {
                int32_t v9 = (int32_t)g601; // 0x1e462fa
                g2 = v9;
                int32_t v10 = *(int32_t *)(v9 + 12); // 0x1e46300
                int32_t v11 = function_1e46021(v10, (int32_t)&g605); // 0x1e46303
                g2 = v11;
                if (v11 == 0) {
                    goto lab_0x1e46332;
                } else {
                    int32_t v12 = (int32_t)g601; // 0x1e46311
                    g2 = v12;
                    int32_t v13 = *(int32_t *)(v12 + 12); // 0x1e46316
                    int32_t v14 = function_1e46021(v13, (int32_t)&g606); // 0x1e46319
                    g2 = v14;
                    if (v14 == 0) {
                        goto lab_0x1e46332;
                    } else {
                        int32_t v15 = (int32_t)g601; // 0x1e46322
                        g2 = v15;
                        *(int32_t *)(v15 + 408) = g8;
                        // 0x1e4632d
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e4632f;
                    }
                }
            } else {
                int32_t v16 = (int32_t)g601; // 0x1e462da
                g2 = v16;
                DestroyWindow((int32_t *)*(int32_t *)(v16 + 4));
                int32_t v17 = (int32_t)g601; // 0x1e462e8
                g5 = v17;
                g2 = v8;
                *(int32_t *)(v17 + 4) = v5;
                result = g2;
                goto lab_0x1e4632f;
            }
        } else {
            // 0x1e4628d
            if (g484 != hWnd) {
                // 0x1e46295
                g2 = MessageBoxA((int32_t *)hWnd, "Failed to create callback window.", (char *)(int32_t)"WavMix32", 48);
            }
            // 0x1e462a4
            g2 = 1;
            result = 1;
            goto lab_0x1e4632f;
        }
    }
  lab_0x1e4632f:
    // 0x1e4632f
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e46332:
    // 0x1e46332
    *(int32_t *)(g9 - 4) = (int32_t)&g605;
    int32_t v18 = (int32_t)g601; // 0x1e46337
    g2 = v18;
    *(int32_t *)(g9 - 8) = *(int32_t *)(v18 + 12);
    g2 = function_1e45fd4((int32_t)&g708);
    *(int32_t *)(g9 - 4) = (int32_t)&g606;
    int32_t v19 = (int32_t)g601; // 0x1e46349
    g5 = v19;
    *(int32_t *)(g9 - 8) = *(int32_t *)(v19 + 12);
    g2 = function_1e45fd4((int32_t)&g708);
    int32_t v20 = (int32_t)g601; // 0x1e46357
    g5 = v20;
    *(int32_t *)(g9 - 4) = *(int32_t *)(v20 + 12);
    g2 = waveOutClose((int32_t)&g708);
    *(int32_t *)((int32_t)g601 + 12) = 0;
    int32_t v21 = (int32_t)g601; // 0x1e46373
    g5 = v21;
    *(int32_t *)(g9 - 4) = *(int32_t *)(v21 + 4);
    DestroyWindow(&g708);
    g2 = 1;
    result = 1;
    goto lab_0x1e4632f;
}

// Address range: 0x1e46389 - 0x1e46531
int32_t function_1e46389(int32_t a1) {
    // 0x1e46389
    int32_t v1; // 0x1e463d3
    if (a1 == 0) {
        goto lab_0x1e463a5;
    } else {
        // 0x1e46393
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e463a5;
        } else {
            // 0x1e4639a
            if (*(int16_t *)(a1 + 444) == 0x5432) {
                v1 = a1;
                goto lab_0x1e463d3;
            } else {
                goto lab_0x1e463a5;
            }
        }
    }
  lab_0x1e464cf:
    // 0x1e464cf
    *(int32_t *)(g9 - 4) = 1;
    *(int32_t *)(g9 - 8) = g5;
    int32_t v2 = function_1e466b3((int32_t)&g708, (int32_t)&g708); // 0x1e464d2
    g2 = v2;
    if (v2 == 0) {
        // break -> 0x1e4652a
        goto lab_0x1e4652a_2;
    }
    goto lab_0x1e46479;
  lab_0x1e463a5:
    // 0x1e463a5
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v1 = 0;
    goto lab_0x1e463d3;
  lab_0x1e463d3:;
    struct tWAVEFORMATEX * v15 = (struct tWAVEFORMATEX *)v1; // 0x1e463d3
    g601 = v15;
    int32_t result; // 0x1e4652e
    if (v1 != 0) {
        // 0x1e463ec
        if (*(int32_t *)(g9 + 16) == 0) {
            // 0x1e464dd
            g2 = v1;
            struct tWAVEFORMATEX * v16; // 0x1e46502
            if (*(int32_t *)(v1 + 16) != 0) {
                // 0x1e464e8
                *(int32_t *)(g9 - 4) = *(int32_t *)(v1 + 420);
                *(int32_t *)(g9 - 8) = *(int32_t *)(g2 + 12);
                int32_t v17 = function_1e45c22((int32_t)&g708, (int32_t)&g708); // 0x1e464f1
                g2 = v17;
                int32_t v18 = (int32_t)g601; // 0x1e464f6
                g5 = v18;
                *(int32_t *)(v18 + 412) = v17;
                v16 = g601;
            } else {
                v16 = v15;
            }
            int32_t v19 = (int32_t)v16; // 0x1e46502
            g2 = v19;
            *(int32_t *)(g9 - 4) = v19;
            function_1e461a6((int32_t)&g708);
            g5 = 0;
            *(int32_t *)((int32_t)g601 + 16) = 0;
            g2 = (int32_t)g601;
            if (g609 == g601) {
                // 0x1e46524
                g609 = (struct tWAVEFORMATEX *)g5;
            }
            // 0x1e4652a
            g2 = 0;
            result = 0;
            goto lab_0x1e4652c;
        } else {
            struct tWAVEFORMATEX * v20 = g609; // 0x1e463f7
            if (v20 == NULL) {
                // 0x1e4641e
                g2 = v1;
                if (*(int32_t *)(v1 + 20) == 0) {
                    // 0x1e46433
                    g2 = v1;
                    *(int32_t *)(g9 - 4) = 0;
                    g609 = (struct tWAVEFORMATEX *)g2;
                    *(int32_t *)(g9 - 8) = 0;
                    g2 = sndPlaySoundA((char *)&g708, (int32_t)&g708);
                    int32_t v21 = function_1e46241(); // 0x1e46447
                    g2 = v21;
                    if (v21 == 0) {
                        // 0x1e4645b
                        g8 = 0;
                        *(int32_t *)((int32_t)g601 + 16) = 1;
                        int32_t v22 = (int32_t)g601; // 0x1e46469
                        g2 = v22;
                        *(int32_t *)(g9 - 4) = *(int32_t *)(v22 + 412);
                        g2 = function_1e45c9e((int32_t)&g708);
                        while (true) {
                          lab_0x1e46479:
                            // 0x1e46479
                            g5 = 0;
                            int32_t v3 = (int32_t)g601; // 0x1e4647b
                            g2 = v3;
                            int32_t v4 = *(int32_t *)(v3 + 400); // 0x1e46480
                            g6 = v4;
                            if (v4 > 0) {
                                int32_t * v5 = (int32_t *)(v3 + 408); // 0x1e4648a
                                int32_t v6 = *v5; // 0x1e4648a
                                g2 = v6;
                                int32_t v7 = 0; // 0x1e4649b
                                int32_t v8; // 0x1e464b3
                                while (true) {
                                    int32_t v9 = *(int32_t *)v6; // 0x1e46490
                                    g7 = v9;
                                    if (*(int32_t *)(v9 + 32) != 0) {
                                        v8 = v7;
                                        // break -> 0x1e464a0
                                        break;
                                    }
                                    int32_t v10 = v6 + 4; // 0x1e46498
                                    g2 = v10;
                                    int32_t v11 = v7 + 1; // 0x1e4649b
                                    g5 = v11;
                                    if (v11 >= v4) {
                                        v8 = v11;
                                        // break -> 0x1e464a0
                                        break;
                                    }
                                    v7 = v11;
                                    v6 = v10;
                                }
                                if (v8 < v4) {
                                    // 0x1e464a8
                                    g2 = v3;
                                    int32_t v12 = *(int32_t *)(*v5 + 4 * v8); // 0x1e464b3
                                    g5 = v12;
                                    int32_t v13 = *(int32_t *)(v3 + 396); // 0x1e464b6
                                    g7 = v13;
                                    g6 = v12 + 48;
                                    *(int32_t *)(v12 + 4) = v13;
                                    *(int32_t *)g5 = g6;
                                    int32_t v14 = (int32_t)g609; // 0x1e464c4
                                    g2 = v14;
                                    *(int32_t *)(g5 + 40) = v14;
                                    *(int32_t *)(g5 + 32) = g8;
                                    goto lab_0x1e464cf;
                                } else {
                                    // 0x1e464a4
                                    g5 = 0;
                                    goto lab_0x1e464cf;
                                }
                            } else {
                                // 0x1e464a4
                                g5 = 0;
                                goto lab_0x1e464cf;
                            }
                        }
                        // 0x1e4652a
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e4652c;
                    } else {
                        // 0x1e46450
                        g609 = (struct tWAVEFORMATEX *)g8;
                        result = v21;
                        goto lab_0x1e4652c;
                    }
                } else {
                    // 0x1e46429
                    g2 = 12;
                    result = 12;
                    goto lab_0x1e4652c;
                }
            } else {
                int32_t v23 = (int32_t)v20 == v1 ? 0 : 4; // 0x1e46416
                g2 = v23;
                result = v23;
                goto lab_0x1e4652c;
            }
        }
    } else {
        // 0x1e463e2
        g2 = 5;
        result = 5;
        goto lab_0x1e4652c;
    }
  lab_0x1e4652c:
    // 0x1e4652c
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e46531 - 0x1e466b3
int32_t function_1e46531(int32_t a1, int32_t a2, uint32_t a3) {
    int32_t v1; // 0x1e4657c
    if (a1 == 0) {
        goto lab_0x1e4654e;
    } else {
        // 0x1e4653c
        if (*(int16_t *)a1 != 0x5432) {
            goto lab_0x1e4654e;
        } else {
            // 0x1e46543
            if (*(int16_t *)(a1 + 444) == 0x5432) {
                v1 = a1;
                goto lab_0x1e4657c;
            } else {
                goto lab_0x1e4654e;
            }
        }
    }
  lab_0x1e4654e:
    // 0x1e4654e
    g2 = MessageBeep(-1);
    g2 = wsprintfA("WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "Invalid session handle 0x%04X passed to WaveMix API");
    g2 = MessageBoxA(NULL, "WaveMix V 2.3 by Angel M. Diaz, Jr. (c) Microsoft 1993-1995", "WavMix32", 48);
    v1 = 0;
    goto lab_0x1e4657c;
  lab_0x1e4657c:;
    struct tWAVEFORMATEX * v2 = (struct tWAVEFORMATEX *)v1; // 0x1e4657c
    g601 = v2;
    if (v1 == 0) {
        // 0x1e4658b
        g2 = 5;
        // 0x1e466ae
        g3 = *(int32_t *)(g9 + 4);
        return 5;
    }
    // 0x1e46595
    g2 = a3;
    if (a3 >= 3) {
        // 0x1e4659d
        g2 = 10;
        // 0x1e466ae
        g3 = *(int32_t *)(g9 + 4);
        return 10;
    }
    // 0x1e465a7
    g5 = a2;
    if (a3 == 0) {
        if (a2 >= 16) {
            // 0x1e465b3
            g2 = 11;
            // 0x1e466ae
            g3 = *(int32_t *)(g9 + 4);
            return 11;
        }
    }
    if (a3 != 2) {
        goto lab_0x1e465d6;
    } else {
        if (a2 > 16) {
            goto lab_0x1e465cc;
        } else {
            if (a2 < 1) {
                goto lab_0x1e465cc;
            } else {
                goto lab_0x1e465d6;
            }
        }
    }
  lab_0x1e465d6:
    if (a3 == 0) {
        int32_t v3 = 4 * a2 + 244 + v1; // 0x1e465f3
        g2 = v3;
        int32_t * v4 = (int32_t *)v3; // 0x1e465fa
        if (*v4 != -1) {
            // 0x1e465ff
            g2 = 4;
            // 0x1e466ae
            g3 = *(int32_t *)(g9 + 4);
            return 4;
        }
        // 0x1e46609
        *v4 = 0;
        int32_t v5 = (int32_t)g601; // 0x1e4660f
        g2 = v5;
        uint16_t v6 = *(int16_t *)(v5 + 176); // 0x1e46614
        g2 = (int32_t)v6 | v5 & -0x10000;
        *(int16_t *)(v5 + 180 + 4 * g5) = v6;
        int32_t v7 = (int32_t)g601; // 0x1e46629
        uint16_t v8 = *(int16_t *)(v7 + 178); // 0x1e4662f
        g2 = g2 & -0x10000 | (int32_t)v8;
        *(int16_t *)(v7 + 182 + 4 * g5) = v8;
        int32_t v9 = (int32_t)g601; // 0x1e4663e
        g7 = v9;
        int32_t * v10 = (int32_t *)(v9 + 308); // 0x1e46644
        *v10 = *v10 + 1;
    } else {
        int32_t v11; // 0x1e46651
        if (a3 == 1) {
            // 0x1e4664c
            g5 = 16;
            v11 = 15;
        } else {
            // 0x1e465df
            v11 = a2 - 1;
        }
        // 0x1e46651
        g5 = v11;
        if (v11 >= 0) {
            int32_t v12 = 4 * v11; // 0x1e46654
            g5 = v12;
            g7 = 0;
            while (true) {
                int32_t v13 = v12 + 244 + (int32_t)v2; // 0x1e4665e
                g2 = v13;
                int32_t * v14 = (int32_t *)v13; // 0x1e46665
                int32_t v15; // 0x1e466a7
                if (*v14 == -1) {
                    // 0x1e4666a
                    *v14 = g7;
                    int32_t v16 = (int32_t)g601; // 0x1e4666c
                    g2 = v16;
                    uint16_t v17 = *(int16_t *)(v16 + 176); // 0x1e46671
                    g2 = (int32_t)v17 | v16 & -0x10000;
                    *(int16_t *)(v16 + 180 + g5) = v17;
                    int32_t v18 = (int32_t)g601; // 0x1e46686
                    uint16_t v19 = *(int16_t *)(v18 + 178); // 0x1e4668c
                    g2 = g2 & -0x10000 | (int32_t)v19;
                    *(int16_t *)(v18 + 182 + g5) = v19;
                    int32_t * v20 = (int32_t *)((int32_t)g601 + 308); // 0x1e466a1
                    *v20 = *v20 + 1;
                    v15 = g5;
                } else {
                    v15 = v12;
                }
                int32_t v21 = v15 - 4; // 0x1e466a7
                g5 = v21;
                if (v21 < 0) {
                    // break -> 0x1e466ac
                    break;
                }
                // 0x1e466a7
                v12 = v21;
                v2 = g601;
            }
        }
    }
    // 0x1e466ac
    g2 = 0;
    // 0x1e466ae
    g3 = *(int32_t *)(g9 + 4);
    return 0;
  lab_0x1e465cc:
    // 0x1e465cc
    g2 = 11;
    // 0x1e466ae
    g3 = *(int32_t *)(g9 + 4);
    return 11;
}

// Address range: 0x1e466b3 - 0x1e46983
int32_t function_1e466b3(int32_t a1, int32_t a2) {
    // 0x1e466b3
    g8 = a1;
    int32_t v1; // edi
    int32_t v2; // edx
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11; // 0x1e46727
    int32_t v12; // 0x1e4672a
    int32_t v13; // 0x1e4672a50
    int32_t v14; // 0x1e4689b
    int32_t v15; // 0x1e468d471
    int32_t result; // 0x1e46980
    int32_t v16; // 0x1e466d5
    int32_t v17; // 0x1e4671f
    int32_t v18; // 0x1e4671f47
    int32_t v19; // 0x1e46727
    int32_t v20; // 0x1e468b8
    int32_t v21; // 0x1e468d8
    if (a1 != 0) {
        int32_t v22 = &g599; // ebx
        v16 = (int32_t)g601 + 244;
        g7 = v16;
        v1 = 16;
        v13 = 16;
        v17 = &g599;
        v3 = 0;
        v6 = -1;
        while (true) {
          lab_0x1e466ee:;
            int32_t v23 = *(int32_t *)v16; // 0x1e466ee
            g2 = v23;
            switch (v23) {
                case -1: {
                    v12 = v13;
                    v11 = v16;
                    v18 = v17;
                    v4 = v3;
                    v7 = v6;
                    goto lab_0x1e46727;
                }
                case 0: {
                    goto lab_0x1e46727;
                }
                default: {
                    int32_t v24 = (int32_t)g601; // 0x1e466f9
                    g5 = v24;
                    uint32_t v25 = *(int32_t *)(v24 + 412); // 0x1e466ff
                    g5 = v25;
                    int32_t v26; // 0x1e4671f
                    while (true) {
                        // 0x1e46705
                        if (*(int32_t *)(v23 + 44) > v25) {
                            v26 = v23;
                            // break -> 0x1e46710
                            break;
                        }
                        int32_t v27 = *(int32_t *)v23; // 0x1e4670a
                        g2 = v27;
                        if (v27 == 0) {
                            v26 = v27;
                            // break -> 0x1e46710
                            break;
                        }
                        v23 = v27;
                    }
                    if (v26 != 0) {
                        uint32_t v28 = *(int32_t *)(v26 + 40); // 0x1e46714
                        g5 = v28;
                        *(int32_t *)v17 = v26;
                        int32_t v29 = v22 + 4; // 0x1e46724
                        v22 = v29;
                        v12 = v1;
                        v11 = g7;
                        v18 = v29;
                        v4 = v3 + 1;
                        v7 = v6 <= v28 ? v6 : v28;
                    } else {
                        v12 = v13;
                        v11 = v16;
                        v18 = v17;
                        v4 = v3;
                        v7 = v6;
                    }
                    goto lab_0x1e46727;
                }
            }
        }
      lab_0x1e4672d:
        if (v4 != 0) {
            int32_t v30 = *(int32_t *)a1; // 0x1e46747
            g2 = v30;
            int32_t v31 = (int32_t)g601; // 0x1e46749
            g5 = v31;
            uint16_t v32 = *(int16_t *)(v31 + 396); // 0x1e4674f
            int32_t v33 = *(int32_t *)(v31 + 412); // 0x1e4675d
            v22 = v33;
            if (v32 != 0) {
                int32_t v34 = v4;
                int32_t v35 = v7;
                int16_t v36 = v32;
                int32_t v37 = (int32_t)v32 | v19 & -0x10000;
                while (true) {
                    int32_t v38 = v35 - v33; // 0x1e4676c
                    int32_t v39;
                    int32_t v40;
                    int32_t v41;
                    int16_t v42;
                    int32_t v43;
                    if (v35 < v33 || v38 == 0) {
                        // 0x1e467ae
                        g2 = v37;
                        v1 = v37 + v33;
                        if (v34 == 0) {
                            v39 = 0;
                            v40 = v35;
                            v41 = v30;
                            v42 = v36;
                            v43 = v37;
                        } else {
                            // 0x1e467c6
                            g2 = v34;
                            int32_t v44 = v34;
                            int32_t v45 = v33; // 0x1e46815
                            int32_t v46 = 0;
                            int16_t * v47 = (int16_t *)&g610;
                            int32_t v48 = &g600;
                            int32_t v49 = &g599;
                            int32_t v50;
                            while (true) {
                                // 0x1e467e1
                                g2 = v49;
                                int32_t v51 = *(int32_t *)v49; // 0x1e467e4
                                g5 = v51;
                                uint32_t v52 = *(int32_t *)(v51 + 40); // 0x1e467e6
                                int16_t * v53;
                                int32_t v54;
                                if (v45 >= v52) {
                                    int32_t v55 = *(int32_t *)(v51 + 44); // 0x1e467f5
                                    g2 = v55;
                                    int32_t v56 = v1; // 0x1e467f8
                                    if (v56 > v55) {
                                        // 0x1e467fc
                                        v1 = v55;
                                    } else {
                                        v55 = v56;
                                    }
                                    int32_t v57 = v45 - v52; // 0x1e46800
                                    g2 = v57;
                                    int32_t v58; // 0x1e46823
                                    if (*(int16_t *)(v51 + 26) != 0) {
                                        int32_t * v59 = (int32_t *)(v51 + 36); // 0x1e4680b
                                        int32_t v60 = v57 % *v59;
                                        g2 = v60;
                                        int32_t v61 = *v59 - v60 + v45; // 0x1e46815
                                        if (v55 > v61) {
                                            // 0x1e4681b
                                            v1 = v61;
                                            v58 = v60;
                                        } else {
                                            v58 = v60;
                                        }
                                    } else {
                                        v58 = v57;
                                    }
                                    // 0x1e4681d
                                    g2 = v48;
                                    *(int32_t *)v48 = *(int32_t *)(v51 + 48) + v58;
                                    int32_t v62 = (int32_t)v47; // 0x1e4682a
                                    uint16_t v63 = *(int16_t *)(g5 + 56); // 0x1e4682d
                                    g2 = g2 & -0x10000 | (int32_t)v63;
                                    *v47 = v63;
                                    int32_t v64 = g5; // 0x1e4683c
                                    uint16_t v65 = *(int16_t *)(v64 + 58); // 0x1e4683c
                                    g5 = (int32_t)v65 | v64 & -0x10000;
                                    *(int16_t *)(v62 + 2) = v65;
                                    v50 = v46 + 1;
                                    v53 = (int16_t *)(v62 + 4);
                                    v54 = v48 + 4;
                                } else {
                                    // 0x1e467ed
                                    if (v1 > v52) {
                                        // 0x1e467f1
                                        v1 = v52;
                                        v50 = v46;
                                        v53 = v47;
                                        v54 = v48;
                                    } else {
                                        v50 = v46;
                                        v53 = v47;
                                        v54 = v48;
                                    }
                                }
                                int32_t v66 = v44 - 1; // 0x1e46848
                                if (v66 == 0) {
                                    // break -> 0x1e4684d
                                    break;
                                }
                                // 0x1e46844
                                v44 = v66;
                                v45 = v22;
                                v46 = v50;
                                v47 = v53;
                                v48 = v54;
                                v49 += 4;
                            }
                            if (v50 != 0) {
                                int32_t v67 = v1 - v22; // 0x1e46857
                                v1 = v67;
                                *(int32_t *)(g9 - 4) = v67;
                                *(int32_t *)(g9 - 8) = v50;
                                *(int32_t *)(g9 - 12) = (int32_t)&g610;
                                *(int32_t *)(g9 - 16) = (int32_t)&g600;
                                v22 += v1;
                                *(int32_t *)(g9 - 20) = v30;
                                int32_t v68 = v1; // 0x1e46877
                                int16_t v69 = v36 - (int16_t)v68; // 0x1e46877
                                v2 = 0;
                                int32_t v70 = v68 + v30; // 0x1e46884
                                g5 = 4 * v34 + (int32_t)&g599;
                                g2 = &g599;
                                v14 = &g599;
                                v5 = v34;
                                v8 = -1;
                                while (true) {
                                  lab_0x1e4689b:;
                                    int32_t v71 = *(int32_t *)v14; // 0x1e4689b
                                    if (v71 == 0) {
                                        // 0x1e468af
                                        v15 = v14;
                                        goto lab_0x1e468b5;
                                    } else {
                                        // 0x1e468a0
                                        int32_t v72;
                                        if (*(int32_t *)(v71 + 44) <= v22) {
                                            while (true) {
                                                // 0x1e468a7
                                                int32_t v73; // 0x1e468a7119
                                                int32_t v74 = *(int32_t *)v73; // 0x1e468a7
                                                v1 = v74;
                                                int32_t v75; // 0x1e468a9120
                                                *(int32_t *)v75 = v74;
                                                v72 = g2;
                                                if (v74 == 0) {
                                                    // break -> 0x1e468af
                                                    break;
                                                }
                                                int32_t v76 = *(int32_t *)v72;
                                                v1 = v76;
                                                uint32_t v77 = *(int32_t *)(v76 + 44); // 0x1e468a2
                                                uint32_t v78 = v22; // 0x1e468a2
                                                if (v77 > v78) {
                                                    // break -> 0x1e468af
                                                    break;
                                                }
                                                v75 = v72;
                                                v73 = v76;
                                            }
                                        } else {
                                            v72 = v14;
                                        }
                                        int32_t v79 = *(int32_t *)v72;
                                        if (v79 != 0) {
                                            uint32_t v80 = *(int32_t *)(v79 + 40); // 0x1e468c9
                                            g2 = v72 + 4;
                                            int32_t v81 = v2 + 1; // 0x1e468d7
                                            v2 = v81;
                                            v21 = v81;
                                            v9 = v8 <= v80 ? v8 : v80;
                                            goto lab_0x1e468d8;
                                        } else {
                                            v15 = v72;
                                            goto lab_0x1e468b5;
                                        }
                                    }
                                }
                              lab_0x1e468dd_2:
                                v39 = v20;
                                v40 = v10;
                                v41 = v70;
                                v42 = v69;
                                v43 = v69;
                            } else {
                                v39 = v34;
                                v40 = v35;
                                v41 = v30;
                                v42 = v36;
                                v43 = v37;
                            }
                        }
                    } else {
                        // 0x1e46771
                        v2 = v37;
                        int32_t v82 = v37 + v33; // 0x1e46775
                        g2 = v82;
                        if (v82 >= v35) {
                            // 0x1e4677d
                            v2 = v38;
                        } else {
                            v38 = v37;
                        }
                        // 0x1e46782
                        g2 = -0x7f7f7f80;
                        int32_t v83 = v38 / 4 & 0x3fff; // 0x1e46793
                        g5 = v83;
                        __asm_rep_stosd_memset((char *)v30, -128, v83);
                        v22 += v2;
                        int32_t v84 = v38 & 3; // 0x1e4679d
                        g5 = v84;
                        __asm_rep_stosb_memset((char *)((g1 ? -4 : 4) * v83 + v30), -128, v84);
                        g5 = 0;
                        int16_t v85 = v36 - (int16_t)v2; // 0x1e467a2
                        v39 = v34;
                        v40 = v35;
                        v41 = v2 + v30;
                        v42 = v85;
                        v43 = v85;
                    }
                    if (v42 == 0) {
                        // break -> 0x1e468e8
                        break;
                    }
                    // 0x1e468dd
                    v33 = v22;
                    v34 = v39;
                    v35 = v40;
                    v30 = v41;
                    v36 = v42;
                    v37 = v43;
                }
            }
            int32_t v86 = (int32_t)g601; // 0x1e468e8
            g2 = v86;
            int32_t v87 = *(int32_t *)(v86 + 412); // 0x1e468ed
            g5 = v87;
            g2 = 0;
            *(int32_t *)(a1 + 36) = v87;
            int32_t v88 = (int32_t)g601; // 0x1e468f8
            g7 = v88;
            int32_t v89 = *(int32_t *)(v88 + 396); // 0x1e468fe
            g5 = v89;
            int32_t * v90 = (int32_t *)(v88 + 412); // 0x1e46904
            *v90 = *v90 + v89;
            int32_t v91 = g2; // 0x1e4690a
            if (v91 != a2) {
                // 0x1e4690f
                *(int32_t *)(a1 + 44) = v91;
                if (g486 != g2) {
                    int32_t v92 = g487; // 0x1e46928
                    g2 = v92;
                    *(int32_t *)(v92 + 44) = a1;
                    g487 = a1;
                } else {
                    // 0x1e4691a
                    g487 = a1;
                    g486 = a1;
                }
                // 0x1e46936
                *(int32_t *)(g9 - 4) = 32;
                g2 = (int32_t)g601;
                *(int32_t *)(g9 - 8) = a1;
                *(int32_t *)(g9 - 12) = *(int32_t *)(g2 + 12);
                int32_t v93 = waveOutWrite((int32_t)&g708, (struct wavehdr_tag *)&g708, (int32_t)&g708); // 0x1e46941
                g2 = v93;
                if (v93 != 0) {
                    // 0x1e4694b
                    if (g484 != 0) {
                        // 0x1e46954
                        *(int32_t *)(g9 - 4) = 48;
                        *(int32_t *)(g9 - 8) = (int32_t)"WavMix32";
                        *(int32_t *)(g9 - 12) = (int32_t)"Failed to write block to device";
                        *(int32_t *)(g9 - 16) = 0;
                        g2 = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708);
                    }
                    // 0x1e46968
                    *(int32_t *)(a1 + 32) = 1;
                    *(int32_t *)(g9 - 4) = a1;
                    g2 = function_1e46130((int32_t)&g708);
                }
            }
            // 0x1e46975
            g2 = 1;
            result = 1;
        } else {
            if (a2 != 0) {
                // 0x1e46739
                *(int32_t *)(a1 + 32) = 1;
            }
            // 0x1e46740
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e466c3
        g2 = 0;
        result = 0;
    }
    // 0x1e4697a
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e468b5:;
    int32_t v94 = g5 - 4; // 0x1e468b5
    g5 = v94;
    v20 = v5 - 1;
    *(int32_t *)v15 = *(int32_t *)v94;
    if (v94 == (int32_t)&g599) {
        v10 = v8;
        // break -> 0x1e468dd
        goto lab_0x1e468dd_2;
    }
    // 0x1e468b5
    v21 = v2;
    v5 = v20;
    v9 = v8;
    goto lab_0x1e468d8;
  lab_0x1e468d8:
    if (v5 <= v21) {
        v20 = v5;
        v10 = v9;
        // break -> 0x1e468dd
        goto lab_0x1e468dd_2;
    }
    // 0x1e468d8
    v14 = g2;
    v8 = v9;
    goto lab_0x1e4689b;
  lab_0x1e46727:
    // 0x1e46727
    v19 = v11 + 4;
    g7 = v19;
    int32_t v95 = v12 - 1; // 0x1e4672a
    v1 = v95;
    if (v95 == 0) {
        // break -> 0x1e4672d
        goto lab_0x1e4672d;
    }
    v13 = v95;
    v17 = v18;
    v16 = v19;
    v3 = v4;
    v6 = v7;
    goto lab_0x1e466ee;
}

