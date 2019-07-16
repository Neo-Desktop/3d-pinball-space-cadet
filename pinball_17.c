#include "pinball.h"

// Address range: 0x1e35a8d - 0x1e35b95
int32_t function_1e35a8d(void) {
    // 0x1e35a8d
    g8 = 0;
    g2 = g259;
    g5 = g259;
    int32_t v1 = 19; // bp-88
    int32_t v2 = v1; // 0x1e35a9e
    int32_t v3;
    int32_t v4; // 0x1e35ac6
    if (v3 > 0) {
        // 0x1e35ab2
        g2 = *(int32_t *)g356;
        int32_t v5 = v2; // 0x1e35ab6
        *(int32_t *)(v5 - 4) = 0x40000000;
        g5 = g356;
        int32_t v6 = v5 - 8; // 0x1e35abd
        *(int32_t *)v6 = 41;
        int32_t v7; // ebx
        int32_t v8 = v7 - 1; // 0x1e35ac1
        while (v8 != 0) {
            // 0x1e35ab6
            v5 = v6;
            *(int32_t *)(v5 - 4) = 0x40000000;
            g5 = g356;
            v6 = v5 - 8;
            *(int32_t *)v6 = 41;
            v8--;
        }
        // 0x1e35ac4
        v4 = v6;
    } else {
        v4 = v2;
    }
    // 0x1e35ac4
    g2 = *(int32_t *)g356;
    *(int32_t *)(v4 - 4) = 0;
    *(int32_t *)(v4 - 8) = 37;
    g5 = g356;
    int32_t v9 = g2; // ebp
    *(int32_t *)(v4 - 12) = 0;
    int32_t v10 = v4 - 16; // 0x1e35ad4
    *(int32_t *)v10 = 38;
    g5 = g356;
    int32_t v11 = g2; // 0x1e35ada
    int32_t v12; // 0x1e35b83
    if (v9 != v11) {
        int32_t v13 = 3 * v11; // 0x1e35b67
        int32_t v14 = v13 >> 31 & 3; // 0x1e35b6b
        g7 = v14;
        int32_t v15 = (v14 + v13) / 4; // 0x1e35b70
        g2 = v15;
        if (v15 <= v9) {
            // 0x1e35b77
            *(int32_t *)(v4 - 20) = -0x40800000;
            g2 = g355;
            v12 = v4 - 24;
            *(int32_t *)v12 = 27;
            g5 = g2;
        } else {
            v12 = v10;
        }
    } else {
        // 0x1e35ae2
        g8 = 1;
        *(int32_t *)(v4 - 20) = 0x40a00000;
        *(int32_t *)(v4 - 24) = 16;
        g5 = g356;
        g4 = g355;
        *(int32_t *)(v4 - 28) = 0;
        g2 = *(int32_t *)g4;
        *(int32_t *)(v4 - 32) = 34;
        g5 = g4;
        g3 = *(int32_t *)g2;
        *(int32_t *)(v4 - 36) = 0;
        g5 = g4;
        int32_t v16 = v4 - 40; // 0x1e35b08
        *(int32_t *)v16 = 37;
        int32_t v17 = g2; // 0x1e35b0c
        g6 = v17;
        if (v17 < 9) {
            // 0x1e35b13
            *(int32_t *)(v4 - 44) = 0x40a00000;
            g5 = g4;
            *(int32_t *)(v4 - 48) = 41;
            *(int32_t *)(v4 - 52) = g8;
            int32_t v18 = *(int32_t *)(4 * g6 + (int32_t)&g421); // 0x1e35b1f
            *(int32_t *)(v4 - 56) = v18;
            int32_t v19 = function_1e25763((int32_t)&g708); // 0x1e35b26
            g2 = v19;
            *(int32_t *)(g9 - 4) = v19;
            *(int32_t *)(g9 - 8) = 0;
            *(int32_t *)(g9 - 12) = 83;
            int32_t v20 = function_1e25763((int32_t)&g708); // 0x1e35b30
            g2 = v20;
            g5 = g9 + 20;
            *(int32_t *)(g9 - 4) = v20;
            *(int32_t *)(g9 - 8) = g5;
            g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
            g5 = g9 + 28;
            *(int32_t *)(g9 + 8) = 0x41000000;
            *(int32_t *)(g9 + 4) = g5;
            g5 = g392;
            g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
            g5 = g360;
            g11++;
            v12 = g9;
        } else {
            v12 = v16;
        }
    }
    // 0x1e35b89
    g2 = g8;
    g3 = *(int32_t *)v12;
    g6 = *(int32_t *)(v12 + 4);
    g4 = *(int32_t *)(v12 + 12);
    return g8;
}

// Address range: 0x1e35b95 - 0x1e35c09
int32_t function_1e35b95(int32_t a1, int32_t result) {
    // 0x1e35b95
    g2 = a1;
    if (a1 == 63) {
        // 0x1e35baa
        g2 = result;
        if (g242 != result) {
            // 0x1e35bb6
            if (g243 != result) {
                // 0x1e35c06
                return result;
            }
        }
        // 0x1e35bbe
        g2 = g325;
        *(int32_t *)(g325 + 6) = 1;
        int32_t result2 = function_1e38d82(66, 0); // 0x1e35bce
        g2 = result2;
        // 0x1e35c06
        return result2;
    }
    if (a1 == 66) {
        // 0x1e35bd5
        g5 = g392;
        int32_t result3 = function_1e2f83c(); // 0x1e35bdb
        g2 = result3;
        g423 = NULL;
        // 0x1e35c06
        return result3;
    }
    int32_t result4; // 0x1e35c01
    if (a1 == 67) {
        int32_t v1 = function_1e25763(50); // 0x1e35bf5
        g2 = v1;
        g5 = g392;
        result4 = function_1e2fbc7(v1, (int32_t)&g708);
        g2 = result4;
    } else {
        result4 = a1;
    }
    // 0x1e35c06
    return result4;
}

// Address range: 0x1e35c09 - 0x1e35cb7
int32_t function_1e35c09(int32_t result) {
    // 0x1e35c09
    g2 = result;
    int32_t v1; // bp-128
    int32_t v2 = v1; // 0x1e35c0d
    if (result < 66) {
        // 0x1e35cae
        return result;
    }
    if (result > 67) {
        // 0x1e35cae
        return result;
    }
    char * v3 = g423; // 0x1e35c25
    int32_t v4 = (int32_t)v3; // 0x1e35c25
    g2 = v4;
    unsigned char v5 = *v3; // 0x1e35c2a
    g2 = (int32_t)v5 | (v4 & -256);
    if (v5 == 0) {
        // 0x1e35c74
        g2 = g347;
        g5 = 0;
        int32_t result2; // 0x1e35ca9
        if (*(int32_t *)(g347 + 78) == 0) {
            // 0x1e35c80
            if (*(int32_t *)(g347 + 90) == 0) {
                // 0x1e35c85
                if (*(int32_t *)(g347 + 82) == 0) {
                    // 0x1e35c8a
                    g2 = g325;
                    *(int32_t *)(g325 + 6) = 1;
                    // 0x1e35ca5
                    result2 = function_1e38d82(67, 0);
                    g2 = result2;
                    // 0x1e35cae
                    return result2;
                }
            }
        }
        // 0x1e35c98
        g5 = g325;
        *(int32_t *)(g325 + 6) = 0;
        // 0x1e35ca5
        result2 = function_1e38d82(67, 0);
        g2 = result2;
        // 0x1e35cae
        return result2;
    }
    // 0x1e35c30
    g5 = v2;
    int32_t v6 = (int32_t)v3; // 0x1e35c34
    g2 = v6;
    unsigned char v7 = *v3 ^ -91; // 0x1e35c3b
    g2 = (int32_t)v7 | (v6 & -256);
    *(char *)v2 = v7;
    int32_t v8 = g5 + 1; // 0x1e35c3f
    g5 = v8;
    int32_t v9 = (int32_t)g423 + 1; // 0x1e35c40
    char * v10 = (char *)v9; // 0x1e35c40
    g423 = v10;
    while (*v10 != 0) {
        // 0x1e35c34
        g7 = v9;
        v3 = v10;
        v6 = (int32_t)v3;
        g2 = v6;
        v7 = *v3 ^ -91;
        g2 = (int32_t)v7 | (v6 & -256);
        *(char *)v8 = v7;
        v8 = g5 + 1;
        g5 = v8;
        v9 = (int32_t)g423 + 1;
        v10 = (char *)v9;
        g423 = v10;
    }
    // 0x1e35c51
    g2 = v9;
    unsigned char v11 = *v10; // 0x1e35c58
    g2 = (int32_t)v11 | (v9 & -256);
    *(char *)v8 = v11;
    g423 = (char *)((int32_t)g423 + 1);
    g5 = g392;
    int32_t result3 = function_1e2fbc7(v2, 0x40400000); // 0x1e35c6d
    g2 = result3;
    // 0x1e35cae
    return result3;
}

// Address range: 0x1e35cb7 - 0x1e36200
int32_t function_1e35cb7(int32_t result2, int32_t a2) {
    // 0x1e35cb7
    g2 = result2;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e35cbe
    int32_t v3 = g6; // bp-80
    g6 = 0;
    int32_t result; // 0x1e35cfe
    if (result2 == 45) {
        // 0x1e35cec
        if (g269 == a2) {
            // 0x1e35cfb
            result = function_1e38d82(67, a2);
            g2 = result;
        } else {
            result = 45;
        }
        // 0x1e361f7
        return result;
    }
    if (result2 == 47) {
        // 0x1e35d08
        if (g269 == a2) {
            int32_t v4 = function_1e38d82(67, a2); // 0x1e35d1a
            g2 = v4;
            result = v4;
        } else {
            result = 47;
        }
        // 0x1e361f7
        return result;
    }
    int32_t v5; // esi
    int32_t v6; // bp-112
    int32_t v7; // bp-120
    int32_t * v8;
    int32_t v9; // 0x1e36054
    if (result2 == 63) {
        // 0x1e35d24
        v5 = a2;
        int32_t v10;
        if (g318 == a2) {
            // 0x1e35d2f
            g6 = 1;
            v10 = 1;
        } else {
            v10 = 0;
        }
        // 0x1e35d34
        int32_t v11;
        if (g319 == a2) {
            // 0x1e35d3c
            g6 = 2;
            v11 = 2;
        } else {
            v11 = v10;
        }
        // 0x1e35d41
        if (g320 != a2) {
            // 0x1e35d4e
            g5 = 0;
            if (v11 == 0) {
                // 0x1e35ea6
                if (g246 != a2) {
                    // 0x1e361f7
                    return 63;
                }
                // 0x1e35eb2
                g2 = g249;
                g5 = 0;
                if (*(int32_t *)(g249 + 78) == 0) {
                    // 0x1e35ebe
                    if (*(int32_t *)(g249 + 90) == 0) {
                        // 0x1e35ec3
                        if (*(int32_t *)(g249 + 82) == 0) {
                            // 0x1e361f7
                            return g249;
                        }
                    }
                }
                // 0x1e35ecc
                v5 = 0;
                g2 = g269;
                g5 = g269;
                if (g269 == 0) {
                    // 0x1e361f7
                    return 0;
                }
                // 0x1e35ee4
                g2 = g249;
                g5 = g325;
                g2 = *(int32_t *)g325;
                g5 = g356;
                v6 = 26;
                g5 = g410;
                if (*(int32_t *)(g410 + 78) != 0) {
                    goto lab_0x1e35f25;
                } else {
                    // 0x1e35f1b
                    if (*(int32_t *)(g410 + 90) != 0) {
                        goto lab_0x1e35f25;
                    } else {
                        // 0x1e35f20
                        if (*(int32_t *)(g410 + 82) == 0) {
                            v8 = &v6;
                            goto lab_0x1e35f34;
                        } else {
                            goto lab_0x1e35f25;
                        }
                    }
                }
            } else {
                goto lab_0x1e35d58;
            }
        } else {
            // 0x1e35d4e
            g6 = 3;
            g5 = 0;
            goto lab_0x1e35d58;
        }
    } else {
        int32_t * v12;
        if (result2 == 66) {
            // 0x1e35fd4
            g2 = g325;
            g5 = g325;
            g5 = g356;
            g2 = *(int32_t *)g356;
            g5 = g324;
            g5 = g249;
            v6 = 34;
            *(int32_t *)(g249 + 6) = 0;
            g2 = g321;
            *(int32_t *)(g321 + 6) = 0;
            g5 = g294;
            v7 = 20;
            g6 = g295;
            g2 = *(int32_t *)g295;
            g5 = g295;
            g2 = g416;
            int32_t v13 = 20; // bp-144
            g5 = g416;
            v12 = &v13;
        } else {
            if (result2 != 67) {
                // 0x1e361f7
                return result2;
            }
            v12 = &v3;
        }
        // 0x1e3604d
        v9 = (int32_t)v12;
        g2 = g269;
        *(int32_t *)(v9 - 4) = 0;
        g5 = g269;
        *(int32_t *)(v9 - 8) = 37;
        g4 = *(int32_t *)g269;
        if (g269 != 0) {
            // 0x1e360cc
            g2 = g249;
            if (*(int32_t *)(g249 + 78) != 0) {
                goto lab_0x1e3614d;
            } else {
                // 0x1e360d8
                if (*(int32_t *)(g249 + 90) != 0) {
                    goto lab_0x1e3614d;
                } else {
                    // 0x1e360dd
                    if (*(int32_t *)(g249 + 82) != 0) {
                        goto lab_0x1e3614d;
                    } else {
                        // 0x1e360e2
                        *(int32_t *)(v9 - 12) = -0x40800000;
                        *(int32_t *)(v9 - 16) = 0;
                        *(int32_t *)(v9 - 20) = 104;
                        int32_t v14 = function_1e25763(v3); // 0x1e360ea
                        g2 = v14;
                        *(int32_t *)(g9 - 4) = v14;
                        g5 = g392;
                        function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                        g2 = g410;
                        int32_t v15 = g8; // 0x1e36100
                        if (*(int32_t *)(g410 + 78) != v15) {
                            goto lab_0x1e3610f;
                        } else {
                            // 0x1e36105
                            if (*(int32_t *)(g410 + 90) != v15) {
                                goto lab_0x1e3610f;
                            } else {
                                // 0x1e3610a
                                if (*(int32_t *)(g410 + 82) == v15) {
                                    goto lab_0x1e3611e;
                                } else {
                                    goto lab_0x1e3610f;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            // 0x1e36061
            *(int32_t *)(v9 - 12) = -0x40800000;
            *(int32_t *)(v9 - 16) = 0;
            *(int32_t *)(v9 - 20) = 105;
            int32_t v16 = function_1e25763(v3); // 0x1e36069
            g2 = v16;
            *(int32_t *)(g9 - 4) = v16;
            g5 = g392;
            function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
            g2 = g410;
            if (*(int32_t *)(g410 + 78) != g8) {
                goto lab_0x1e3608e;
            } else {
                // 0x1e36084
                if (*(int32_t *)(g410 + 90) != g8) {
                    goto lab_0x1e3608e;
                } else {
                    // 0x1e36089
                    if (*(int32_t *)(g410 + 82) == g8) {
                        goto lab_0x1e3609d;
                    } else {
                        goto lab_0x1e3608e;
                    }
                }
            }
        }
    }
  lab_0x1e35d58:;
    int32_t v17 = g321 + 6; // 0x1e35d5d
    g2 = v17;
    int32_t * v18 = (int32_t *)v17; // 0x1e35d60
    if (*v18 == 7) {
        // 0x1e35d65
        g6 = 4;
        *v18 = 0;
    }
    // 0x1e35d6c
    g2 = g355;
    g5 = g355;
    int32_t v19 = g355 - 1; // 0x1e35d7b
    g2 = v19;
    g691 = v19;
    int32_t v20; // 0x1e35e7e
    switch (g355) {
        case 1: {
            int32_t v21 = g6; // 0x1e35d8c
            if (v21 == 1) {
                // 0x1e35da5
                g2 = 3;
                v20 = 3;
            } else {
                if (v21 == 2) {
                    // 0x1e35daf
                    g2 = 4;
                    v20 = 4;
                } else {
                    if (v21 == 3) {
                        // 0x1e35db9
                        g2 = 2;
                        v20 = 2;
                    } else {
                        // 0x1e35d9b
                        g2 = 5;
                        v20 = 5;
                    }
                }
            }
            goto lab_0x1e35e71;
        }
        case 2: {
            goto lab_0x1e35dc3;
        }
        case 3: {
            goto lab_0x1e35dc3;
        }
        case 4: {
            goto lab_0x1e35df7;
        }
        case 5: {
            goto lab_0x1e35df7;
        }
        case 6: {
            goto lab_0x1e35e22;
        }
        case 7: {
            goto lab_0x1e35e22;
        }
        case 8: {
            goto lab_0x1e35e48;
        }
        case 9: {
            goto lab_0x1e35e48;
        }
        default: {
            result = v19;
            return result;
        }
    }
  lab_0x1e3614d:
    // 0x1e3614d
    g2 = g249;
    *(int32_t *)(v9 - 12) = 1;
    int32_t v22 = *(int32_t *)(g2 + 6); // 0x1e36156
    g5 = v22;
    int32_t v23 = *(int32_t *)(4 * v22 + (int32_t)&g422); // 0x1e36159
    *(int32_t *)(v9 - 16) = v23;
    int32_t v24 = function_1e25763(v3); // 0x1e36160
    g2 = v24;
    *(int32_t *)(g9 - 4) = v24;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 106;
    int32_t v25 = function_1e25763((int32_t)&g708); // 0x1e36169
    g2 = v25;
    *(int32_t *)(g9 - 4) = v25;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = -0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g5 = g411;
    if (*(int32_t *)(g411 + 78) != g8) {
        goto lab_0x1e361a4;
    } else {
        // 0x1e3619a
        if (*(int32_t *)(g411 + 90) != g8) {
            goto lab_0x1e361a4;
        } else {
            // 0x1e3619f
            if (*(int32_t *)(g411 + 82) == g8) {
                goto lab_0x1e361b3;
            } else {
                goto lab_0x1e361a4;
            }
        }
    }
  lab_0x1e3608e:
    // 0x1e3608e
    *(int32_t *)(g9 - 4) = 0;
    g2 = g410;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e3609d;
  lab_0x1e35f25:
    // 0x1e35f25
    g2 = g410;
    v7 = 20;
    g5 = g410;
    v8 = &v7;
    goto lab_0x1e35f34;
  lab_0x1e35dc3:;
    int32_t v33 = g6; // 0x1e35dc3
    if (v33 == 1) {
        // 0x1e35ddc
        g2 = 9;
        v20 = 9;
    } else {
        if (v33 == 2) {
            // 0x1e35de6
            g2 = 11;
            v20 = 11;
        } else {
            if (v33 == 3) {
                // 0x1e35df0
                g2 = 10;
                v20 = 10;
            } else {
                // 0x1e35dd2
                g2 = 16;
                v20 = 16;
            }
        }
    }
    goto lab_0x1e35e71;
  lab_0x1e35df7:;
    int32_t v34 = g6; // 0x1e35df7
    if (v34 == 1) {
        // 0x1e35e0d
        g2 = 6;
        v20 = 6;
    } else {
        if (v34 == 2) {
            // 0x1e35e14
            g2 = 8;
            v20 = 8;
        } else {
            if (v34 == 3) {
                // 0x1e35e1b
                g2 = 7;
                v20 = 7;
            } else {
                // 0x1e35e06
                g2 = 15;
                v20 = 15;
            }
        }
    }
    goto lab_0x1e35e71;
  lab_0x1e35e22:;
    int32_t v35 = g6; // 0x1e35e22
    if (v35 == 1) {
        // 0x1e35e33
        g2 = 12;
        v20 = 12;
        goto lab_0x1e35e71;
    } else {
        if (v35 == 2) {
            // 0x1e35e3a
            g2 = 13;
            v20 = 13;
            goto lab_0x1e35e71;
        } else {
            if (v35 == 3) {
                // 0x1e35e41
                g2 = 14;
                v20 = 14;
                goto lab_0x1e35e71;
            } else {
                // 0x1e35e6c
                g2 = 17;
                v20 = 17;
                goto lab_0x1e35e71;
            }
        }
    }
  lab_0x1e35e48:;
    int32_t v36 = g6; // 0x1e35e48
    if (v36 == 1) {
        // 0x1e35e5e
        g2 = 15;
        v20 = 15;
        goto lab_0x1e35e71;
    } else {
        if (v36 == 2) {
            // 0x1e35e65
            g2 = 16;
            v20 = 16;
            goto lab_0x1e35e71;
        } else {
            if (v36 == 3) {
                // 0x1e35e6c
                g2 = 17;
                v20 = 17;
                goto lab_0x1e35e71;
            } else {
                // 0x1e35e57
                g2 = 18;
                v20 = 18;
                goto lab_0x1e35e71;
            }
        }
    }
  lab_0x1e361a4:
    // 0x1e361a4
    *(int32_t *)(g9 - 4) = 0;
    g2 = g411;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e361b3;
  lab_0x1e3609d:
    // 0x1e3609d
    g2 = g412;
    g5 = 0;
    if (*(int32_t *)(g412 + 78) != 0) {
        goto lab_0x1e360b3;
    } else {
        // 0x1e360a9
        if (*(int32_t *)(g412 + 90) != 0) {
            goto lab_0x1e360b3;
        } else {
            // 0x1e360ae
            if (*(int32_t *)(g412 + 82) == 0) {
                goto lab_0x1e360c2;
            } else {
                goto lab_0x1e360b3;
            }
        }
    }
  lab_0x1e35f34:;
    int32_t v26 = (int32_t)v8; // 0x1e35f4a
    g2 = g411;
    g5 = 0;
    if (*(int32_t *)(g411 + 78) != 0) {
        goto lab_0x1e35f4a;
    } else {
        // 0x1e35f40
        if (*(int32_t *)(g411 + 90) != 0) {
            goto lab_0x1e35f4a;
        } else {
            // 0x1e35f45
            if (*(int32_t *)(g411 + 82) == 0) {
                goto lab_0x1e35f59;
            } else {
                goto lab_0x1e35f4a;
            }
        }
    }
  lab_0x1e35e71:
    // 0x1e35e71
    *(int32_t *)(g249 + 6) = v20;
    g5 = g249;
    g2 = *(int32_t *)g249;
    g5 = g325;
    v6 = 67;
    int32_t result3 = function_1e38d82(67, v5); // 0x1e35e9c
    g2 = result3;
    // 0x1e361f7
    return result3;
  lab_0x1e361b3:
    // 0x1e361b3
    g2 = g412;
    g5 = 0;
    if (*(int32_t *)(g412 + 78) != 0) {
        goto lab_0x1e361c9;
    } else {
        // 0x1e361bf
        if (*(int32_t *)(g412 + 90) != 0) {
            goto lab_0x1e361c9;
        } else {
            // 0x1e361c4
            if (*(int32_t *)(g412 + 82) == 0) {
                goto lab_0x1e361d8;
            } else {
                goto lab_0x1e361c9;
            }
        }
    }
  lab_0x1e360b3:
    // 0x1e360b3
    *(int32_t *)(g9 - 4) = 0;
    g2 = g412;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e360c2;
  lab_0x1e35f4a:
    // 0x1e35f4a
    *(int32_t *)(v26 - 4) = 0;
    g2 = g411;
    int32_t v32 = v26 - 8; // 0x1e35f53
    *(int32_t *)v32 = 20;
    g5 = g2;
    v26 = v32;
    goto lab_0x1e35f59;
  lab_0x1e361c9:
    // 0x1e361c9
    *(int32_t *)(g9 - 4) = 0;
    g2 = g412;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e361d8;
  lab_0x1e3610f:
    // 0x1e3610f
    *(int32_t *)(g9 - 4) = 0;
    g2 = g410;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e3611e;
  lab_0x1e360c2:
    // 0x1e360c2
    g2 = g411;
    int32_t result4 = g411; // 0x1e361e9
    goto lab_0x1e361dd;
  lab_0x1e35f59:
    // 0x1e35f59
    g2 = g412;
    g5 = 0;
    int32_t v28; // 0x1e35f78
    if (*(int32_t *)(g412 + 78) != 0) {
        goto lab_0x1e35f6f;
    } else {
        // 0x1e35f65
        if (*(int32_t *)(g412 + 90) != 0) {
            goto lab_0x1e35f6f;
        } else {
            // 0x1e35f6a
            if (*(int32_t *)(g412 + 82) == 0) {
                v28 = v26;
                goto lab_0x1e35f7e;
            } else {
                goto lab_0x1e35f6f;
            }
        }
    }
  lab_0x1e361d8:
    // 0x1e361d8
    g2 = g410;
    result4 = g410;
    goto lab_0x1e361dd;
  lab_0x1e3611e:
    // 0x1e3611e
    g2 = g411;
    g5 = 0;
    if (*(int32_t *)(g411 + 78) != 0) {
        goto lab_0x1e36134;
    } else {
        // 0x1e3612a
        if (*(int32_t *)(g411 + 90) != 0) {
            goto lab_0x1e36134;
        } else {
            // 0x1e3612f
            if (*(int32_t *)(g411 + 82) == 0) {
                goto lab_0x1e36143;
            } else {
                goto lab_0x1e36134;
            }
        }
    }
  lab_0x1e361dd:
    // 0x1e361dd
    g5 = 0;
    if (*(int32_t *)(result4 + 78) != 0 || *(int32_t *)(result4 + 90) != 0) {
        // 0x1e361f7
        return result4;
    }
    // 0x1e361e9
    if (*(int32_t *)(result4 + 82) == 0) {
        // 0x1e361ee
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = 7;
        int32_t v27 = g2; // 0x1e361f3
        g5 = v27;
        result = v27;
    } else {
        result = result4;
    }
    // 0x1e361f7
    return result;
  lab_0x1e35f6f:
    // 0x1e35f6f
    *(int32_t *)(v26 - 4) = 0;
    g2 = g412;
    v28 = v26 - 8;
    *(int32_t *)v28 = 20;
    g5 = g2;
    goto lab_0x1e35f7e;
  lab_0x1e36134:
    // 0x1e36134
    *(int32_t *)(g9 - 4) = 0;
    g2 = g411;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    goto lab_0x1e36143;
  lab_0x1e35f7e:
    // 0x1e35f7e
    g2 = g249;
    g5 = g325;
    *(int32_t *)(v28 - 4) = 0;
    *(int32_t *)(v28 - 8) = 66;
    *(int32_t *)(g5 + 6) = *(int32_t *)(g2 + 6);
    g2 = function_1e38d82(v6, -0x40800000);
    int32_t v29 = *(int32_t *)(4 * g8 + (int32_t)&g419); // 0x1e35f98
    *(int32_t *)(g9 - 4) = v29;
    int32_t v30 = function_1e32b02((int32_t)&g708); // 0x1e35f9f
    g2 = v30;
    *(int32_t *)(g9 - 4) = v30;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 77;
    int32_t v31 = function_1e25763((int32_t)&g708); // 0x1e35fa9
    g2 = v31;
    *(int32_t *)(g9 - 4) = v31;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = 0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    int32_t result5 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e35fca
    g2 = result5;
    // 0x1e361f7
    return result5;
  lab_0x1e36143:
    // 0x1e36143
    g2 = g412;
    result4 = g412;
    goto lab_0x1e361dd;
}

// Address range: 0x1e36224 - 0x1e36397
int32_t function_1e36224(int32_t result, int32_t a2) {
    // 0x1e36224
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e3622b
    int32_t v3 = g8; // bp-72
    if (result != 63) {
        int32_t v4; // 0x1e36363
        if (result == 66) {
            // 0x1e36334
            g2 = g401;
            g5 = g404;
            g2 = *(int32_t *)g404;
            g5 = g249;
            *(int32_t *)(g249 + 6) = 8;
            v4 = g9;
        } else {
            if (result != 67) {
                // 0x1e36390
                return result;
            }
            v4 = v3;
        }
        // 0x1e3635e
        g2 = g249;
        *(int32_t *)(v4 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v4 - 8) = 0;
        *(int32_t *)(v4 - 12) = 107;
        int32_t v5 = function_1e25763(v3); // 0x1e3636a
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e3638b
        g2 = result2;
        // 0x1e36390
        return result2;
    }
    // 0x1e3624b
    g7 = a2;
    if (g209 != a2) {
        // 0x1e36256
        if (g210 != a2) {
            // 0x1e3625e
            if (g211 != a2) {
                // 0x1e36266
                if (g212 != a2) {
                    // 0x1e36390
                    return 63;
                }
            }
        }
    }
    int32_t v6 = g249 + 6; // 0x1e3627c
    g2 = v6;
    int32_t * v7 = (int32_t *)v6; // 0x1e3627f
    int32_t v8 = *v7 - 1; // 0x1e36281
    g5 = v8;
    *v7 = v8;
    if (v8 != 0) {
        int32_t result3 = function_1e38d82(67, g7); // 0x1e3632d
        g2 = result3;
        // 0x1e36390
        return result3;
    }
    // 0x1e3628a
    g2 = g401;
    g2 = *(int32_t *)g401;
    g5 = g404;
    g2 = *(int32_t *)g404;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v9 = function_1e25763(108); // 0x1e362c6
    g2 = v9;
    g5 = g392;
    g2 = function_1e2fbc7(v9, (int32_t)&g708);
    g2 = function_1e32b02(0x7a120);
    int32_t v10 = function_1e25763(78); // 0x1e362e5
    g2 = v10;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v10);
    int32_t v11 = function_1e35a8d(); // 0x1e362f9
    g2 = v11;
    int32_t result4; // 0x1e36394
    if (v11 == 0) {
        // 0x1e36306
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v11;
    }
    // 0x1e36390
    return result4;
}

// Address range: 0x1e36397 - 0x1e364d3
int32_t function_1e36397(int32_t result, int32_t a2) {
    // 0x1e36397
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e3639e
    int32_t v3 = g8; // bp-72
    if (result != 63) {
        int32_t v4; // 0x1e3649f
        if (result == 66) {
            // 0x1e3647e
            g2 = g410;
            g5 = g249;
            *(int32_t *)(g249 + 6) = 3;
            v4 = g9;
        } else {
            if (result != 67) {
                // 0x1e364cc
                return result;
            }
            v4 = v3;
        }
        // 0x1e3649a
        g2 = g249;
        *(int32_t *)(v4 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v4 - 8) = 0;
        *(int32_t *)(v4 - 12) = 110;
        int32_t v5 = function_1e25763(v3); // 0x1e364a6
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e364c7
        g2 = result2;
        // 0x1e364cc
        return result2;
    }
    // 0x1e363be
    g5 = a2;
    if (g246 != a2) {
        // 0x1e364cc
        return 63;
    }
    int32_t v6 = g249 + 6; // 0x1e363d7
    g2 = v6;
    int32_t * v7 = (int32_t *)v6; // 0x1e363da
    int32_t v8 = *v7 - 1; // 0x1e363dc
    g7 = v8;
    *v7 = v8;
    if (v8 != 0) {
        int32_t result3 = function_1e38d82(67, g5); // 0x1e36477
        g2 = result3;
        // 0x1e364cc
        return result3;
    }
    // 0x1e363e5
    g2 = g410;
    g2 = *(int32_t *)g410;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v9 = function_1e25763(111); // 0x1e36414
    g2 = v9;
    g5 = g392;
    g2 = function_1e2fbc7(v9, (int32_t)&g708);
    g2 = function_1e32b02(0x7a120);
    int32_t v10 = function_1e25763(78); // 0x1e36433
    g2 = v10;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v10);
    int32_t v11 = function_1e35a8d(); // 0x1e36447
    g2 = v11;
    int32_t result4; // 0x1e364d0
    if (v11 == 0) {
        // 0x1e36450
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v11;
    }
    // 0x1e364cc
    return result4;
}

// Address range: 0x1e364d3 - 0x1e36671
int32_t function_1e364d3(int32_t result, int32_t result3) {
    // 0x1e364d3
    g2 = result;
    int32_t v1 = g3; // bp-76
    int32_t v2; // bp-108
    int32_t v3; // bp-112
    int32_t v4; // bp-132
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e365d3
            g2 = g249;
            *(int32_t *)(g249 + 6) = 3;
            g4 = 0x3e4ccccd;
            g5 = *(int32_t *)g294;
            g5 = g294;
            g2 = *(int32_t *)g295;
            v2 = 20;
            g5 = g295;
            v3 = 0x3e4ccccd;
            g5 = g295;
            g2 = g400;
            g3 = *(int32_t *)g400;
            v4 = 7;
            g5 = g400;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e36668
                return result;
            }
            v5 = &v1;
        }
        int32_t v6 = (int32_t)v5; // 0x1e36639
        g2 = g249;
        *(int32_t *)(v6 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 112;
        int32_t v7 = function_1e25763(v1); // 0x1e36640
        g2 = v7;
        g5 = g9 + 16;
        *(int32_t *)(g9 - 4) = v7;
        *(int32_t *)(g9 - 8) = g5;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        g5 = g9 + 24;
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = g5;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e36663
        g2 = result2;
        // 0x1e36668
        return result2;
    }
    // 0x1e364f9
    g2 = result3;
    if (g218 != result3) {
        // 0x1e36505
        if (g219 != result3) {
            // 0x1e3650d
            if (g220 != result3) {
                // 0x1e36668
                return result3;
            }
        }
    }
    int32_t v8 = g249 + 6; // 0x1e36524
    g5 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e36527
    int32_t v10 = *v9 - 1; // 0x1e36529
    g7 = v10;
    *v9 = v10;
    if (v10 != 0) {
        int32_t result4 = function_1e38d82(67, g2); // 0x1e365c9
        g2 = result4;
        // 0x1e36668
        return result4;
    }
    // 0x1e36532
    g2 = g400;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v11 = function_1e25763(113); // 0x1e3655d
    g2 = v11;
    v2 = v11;
    int32_t v12 = v2; // 0x1e36562
    g5 = g392;
    g2 = function_1e2fbc7(v11, (int32_t)&g708);
    v3 = 0x7a120;
    int32_t v13 = v3; // 0x1e3656e
    g2 = function_1e32b02(0x7a120);
    int32_t v14 = function_1e25763(78); // 0x1e3657c
    g2 = v14;
    g5 = v12;
    v4 = v12;
    g2 = function_1e3d7a0(v12, (char *)v14);
    int32_t v15 = function_1e35a8d(); // 0x1e36591
    g2 = v15;
    int32_t result5; // 0x1e3666e
    if (v15 == 0) {
        // 0x1e3659e
        g2 = v13;
        v4 = v13;
        g5 = g392;
        function_1e2fbc7(v13, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result5 = g359;
    } else {
        result5 = v15;
    }
    // 0x1e36668
    return result5;
}

// Address range: 0x1e36671 - 0x1e368ea
int32_t function_1e36671(int32_t result, int32_t a2) {
    // 0x1e36671
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e36678
    int32_t v3 = g6; // bp-76
    int32_t * v4;
    if (result == 63) {
        // 0x1e36699
        g5 = a2;
        if (g296 == a2) {
            goto lab_0x1e366e8;
        } else {
            // 0x1e366a4
            if (g297 == a2) {
                goto lab_0x1e366e8;
            } else {
                // 0x1e366ac
                if (g298 == a2) {
                    goto lab_0x1e366e8;
                } else {
                    // 0x1e366b4
                    if (g303 == a2) {
                        goto lab_0x1e366e8;
                    } else {
                        // 0x1e366bc
                        if (g304 == a2) {
                            goto lab_0x1e366e8;
                        } else {
                            // 0x1e366c4
                            if (g305 == a2) {
                                goto lab_0x1e366e8;
                            } else {
                                // 0x1e366cc
                                if (g307 == a2) {
                                    goto lab_0x1e366e8;
                                } else {
                                    // 0x1e366d4
                                    if (g308 == a2) {
                                        goto lab_0x1e366e8;
                                    } else {
                                        // 0x1e366dc
                                        if (g309 != a2) {
                                            result = 63;
                                            return result;
                                        } 
                                            goto lab_0x1e366e8;
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (result == 66) {
            // 0x1e367b9
            g2 = g249;
            int32_t v5 = 0; // esi
            *(int32_t *)(g249 + 6) = 9;
            *(int32_t *)(g296 + 6) = v5;
            g5 = g296;
            g2 = *(int32_t *)g296;
            *(int32_t *)(g297 + 6) = v5;
            g5 = g297;
            g2 = *(int32_t *)g297;
            *(int32_t *)(g298 + 6) = v5;
            g5 = g298;
            g2 = *(int32_t *)g298;
            *(int32_t *)(g303 + 6) = v5;
            g5 = g303;
            g2 = *(int32_t *)g303;
            *(int32_t *)(g304 + 6) = v5;
            g5 = g304;
            g2 = *(int32_t *)g304;
            *(int32_t *)(g305 + 6) = v5;
            g5 = g305;
            g2 = *(int32_t *)g305;
            *(int32_t *)(g307 + 6) = v5;
            g5 = g307;
            g2 = *(int32_t *)g307;
            *(int32_t *)(g308 + 6) = v5;
            g5 = g308;
            g2 = *(int32_t *)g308;
            *(int32_t *)(g309 + 6) = v5;
            g5 = g309;
            g2 = *(int32_t *)g309;
            g5 = g396;
            g5 = g402;
            g5 = g408;
            int32_t v6 = 7; // bp-172
            g6 = *(int32_t *)g408;
            v4 = &v6;
            goto lab_0x1e368b0;
        } else {
            if (result == 67) {
                v4 = &v3;
                goto lab_0x1e368b0;
            } else {
                return result;
            }
        }
    }
  lab_0x1e366e8:;
    int32_t v7 = g249 + 6; // 0x1e366f2
    g2 = v7;
    int32_t * v8 = (int32_t *)v7; // 0x1e366f5
    int32_t v9 = *v8 - 1; // 0x1e366f7
    g7 = v9;
    *v8 = v9;
    if (v9 != 0) {
        int32_t v10 = function_1e38d82(67, g5); // 0x1e367af
        g2 = v10;
        result = v10;
    } else {
        // 0x1e36700
        g2 = g396;
        g5 = g402;
        g2 = *(int32_t *)g402;
        g5 = g408;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 1;
        g2 = function_1e38d82(66, 0);
        int32_t v11 = function_1e25763(115); // 0x1e36745
        g2 = v11;
        g5 = g392;
        g2 = function_1e2fbc7(v11, (int32_t)&g708);
        g2 = function_1e32b02(0xb71b0);
        int32_t v12 = function_1e25763(78); // 0x1e36764
        g2 = v12;
        g5 = v2;
        g2 = function_1e3d7a0(v2, (char *)v12);
        int32_t v13 = function_1e35a8d(); // 0x1e36778
        g2 = v13;
        if (v13 == 0) {
            // 0x1e36785
            g2 = v2;
            g5 = g392;
            function_1e2fbc7(v2, 0x41000000);
            g2 = g359;
            g5 = g359;
            g11++;
            result = g359;
        } else {
            result = v13;
        }
    }
    return result;
  lab_0x1e368e2:
    // 0x1e368e2
    return result;
  lab_0x1e368b0:;
    int32_t v14 = (int32_t)v4; // 0x1e368b5
    g2 = g249;
    *(int32_t *)(v14 - 4) = *(int32_t *)(g249 + 6);
    *(int32_t *)(v14 - 8) = 0;
    *(int32_t *)(v14 - 12) = 114;
    int32_t v15 = function_1e25763(v3); // 0x1e368bc
    g2 = v15;
    *(int32_t *)(g9 - 4) = v15;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = -0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    int32_t v16 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e368dd
    g2 = v16;
    result = v16;
    goto lab_0x1e368e2;
}

// Address range: 0x1e368ea - 0x1e36a8e
int32_t function_1e368ea(int32_t result, int32_t a2) {
    // 0x1e368ea
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e368f1
    int32_t v3 = g8; // bp-72
    if (result != 63) {
        int32_t v4; // 0x1e36a63
        if (result == 66) {
            // 0x1e36a32
            g2 = g339;
            g5 = g339;
            g2 = *(int32_t *)g339;
            *(int32_t *)(g335 + 6) = 0;
            g7 = g399;
            g5 = g399;
            g2 = *(int32_t *)g399;
            v4 = g9;
        } else {
            if (result != 67) {
                // 0x1e36a87
                return result;
            }
            v4 = v3;
        }
        // 0x1e36a5e
        g2 = g335;
        *(int32_t *)(v4 - 4) = -0x40800000;
        *(int32_t *)(v4 - 8) = 0;
        *(int32_t *)(v4 - 12) = *(int32_t *)(g2 + 6) == 15 ? 118 : 117;
        int32_t v5 = function_1e25763(v3); // 0x1e36a76
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e36a82
        g2 = result2;
        // 0x1e36a87
        return result2;
    }
    // 0x1e36911
    int32_t result3; // 0x1e36a8b
    if (g329 != a2) {
        // 0x1e36920
        if (g330 != a2) {
            // 0x1e3692c
            if (g331 != a2) {
                // 0x1e36938
                if (g270 != a2) {
                    // 0x1e36a87
                    return 63;
                }
                // 0x1e36944
                g2 = g335;
                if (*(int32_t *)(g335 + 6) != 15) {
                    // 0x1e36a87
                    return g335;
                }
                int32_t v6 = g397; // 0x1e36955
                g2 = v6;
                g5 = v6;
                g2 = *(int32_t *)v6;
                g5 = g325;
                *(int32_t *)(g325 + 6) = 1;
                g2 = function_1e38d82(66, 0);
                int32_t v7 = function_1e25763(119); // 0x1e36984
                g2 = v7;
                g5 = g392;
                g2 = function_1e2fbc7(v7, (int32_t)&g708);
                g2 = function_1e32b02(0xf4240);
                int32_t v8 = function_1e25763(78); // 0x1e369a3
                g2 = v8;
                g5 = v2;
                g2 = function_1e3d7a0(v2, (char *)v8);
                int32_t v9 = function_1e35a8d(); // 0x1e369b7
                g2 = v9;
                if (v9 == 0) {
                    // 0x1e369c4
                    g2 = v2;
                    g5 = g392;
                    function_1e2fbc7(v2, 0x41000000);
                    g2 = g359;
                    g5 = g359;
                    g11++;
                    result3 = g359;
                } else {
                    result3 = v9;
                }
                // 0x1e36a87
                return result3;
            }
        }
    }
    // 0x1e369eb
    g2 = g335;
    int32_t * v10 = (int32_t *)(g335 + 6); // 0x1e369f0
    if (*v10 == 7) {
        // 0x1e369fa
        g2 = g399;
        g2 = *(int32_t *)g399;
        int32_t v11 = g397; // 0x1e36a0f
        g5 = v11;
        g2 = *(int32_t *)v11;
        g5 = g335;
        *v10 = 15;
        int32_t v12 = function_1e38d82(67, a2); // 0x1e36a2b
        g2 = v12;
        result3 = v12;
    } else {
        result3 = g335;
    }
    // 0x1e36a87
    return result3;
}

// Address range: 0x1e36a8e - 0x1e36c34
int32_t function_1e36a8e(int32_t result, int32_t a2) {
    // 0x1e36a8e
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e36a95
    int32_t v3 = g8; // bp-72
    if (result != 63) {
        int32_t v4; // 0x1e36c06
        if (result == 66) {
            // 0x1e36bd5
            g2 = g338;
            g5 = g338;
            g2 = *(int32_t *)g338;
            *(int32_t *)(g332 + 6) = 0;
            g7 = g406;
            g5 = g406;
            g2 = *(int32_t *)g406;
            v4 = g9;
        } else {
            if (result != 67) {
                // 0x1e36c2d
                return result;
            }
            v4 = v3;
        }
        // 0x1e36c01
        g2 = g332;
        *(int32_t *)(v4 - 4) = -0x40800000;
        *(int32_t *)(v4 - 8) = 0;
        *(int32_t *)(v4 - 12) = *(int32_t *)(g2 + 6) == 15 ? 120 : 176;
        int32_t v5 = function_1e25763(v3); // 0x1e36c1c
        g2 = v5;
        *(int32_t *)(g9 - 4) = v5;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e36c28
        g2 = result2;
        // 0x1e36c2d
        return result2;
    }
    // 0x1e36ab5
    int32_t result3; // 0x1e36c31
    if (g326 != a2) {
        // 0x1e36ac4
        if (g327 != a2) {
            // 0x1e36ad0
            if (g328 != a2) {
                // 0x1e36adc
                if (g277 != a2) {
                    // 0x1e36ae4
                    if (g278 != a2) {
                        // 0x1e36aec
                        if (g279 != a2) {
                            // 0x1e36c2d
                            return 63;
                        }
                    }
                }
                // 0x1e36af8
                g2 = g332;
                if (*(int32_t *)(g332 + 6) != 15) {
                    // 0x1e36c2d
                    return g332;
                }
                // 0x1e36b07
                g2 = g325;
                *(int32_t *)(g325 + 6) = 1;
                g2 = function_1e38d82(66, 0);
                int32_t v6 = function_1e25763(121); // 0x1e36b25
                g2 = v6;
                g5 = g392;
                g2 = function_1e2fbc7(v6, (int32_t)&g708);
                g2 = function_1e32b02(0xf4240);
                int32_t v7 = function_1e25763(78); // 0x1e36b44
                g2 = v7;
                g5 = v2;
                g2 = function_1e3d7a0(v2, (char *)v7);
                int32_t v8 = function_1e35a8d(); // 0x1e36b58
                g2 = v8;
                if (v8 == 0) {
                    // 0x1e36b65
                    g2 = v2;
                    g5 = g392;
                    function_1e2fbc7(v2, 0x41000000);
                    g2 = g359;
                    g5 = g359;
                    g11++;
                    result3 = g359;
                } else {
                    result3 = v8;
                }
                // 0x1e36c2d
                return result3;
            }
        }
    }
    int32_t v9 = g332 + 6; // 0x1e36b91
    g2 = v9;
    int32_t * v10 = (int32_t *)v9; // 0x1e36b94
    if (*v10 == 7) {
        // 0x1e36b9d
        *v10 = 15;
        g2 = g287;
        g5 = g287;
        g2 = *(int32_t *)g287;
        g5 = g406;
        g2 = *(int32_t *)g406;
        g2 = function_1e38d82(67, a2);
        int32_t v11 = function_1e32b77(1); // 0x1e36bce
        g2 = v11;
        result3 = v11;
    } else {
        result3 = v9;
    }
    // 0x1e36c2d
    return result3;
}

// Address range: 0x1e36c34 - 0x1e36e25
int32_t function_1e36c34(int32_t result3, int32_t result2) {
    // 0x1e36c34
    g2 = result3;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e36c3b
    int32_t v3 = g8; // bp-72
    int32_t v4 = v3; // 0x1e36c41
    int32_t v5; // bp-80
    int32_t result; // 0x1e36c72
    if (result3 == 11) {
        // 0x1e36c60
        g2 = result2;
        if (g221 == result2) {
            // 0x1e36c6f
            v5 = 67;
            result = function_1e38d82(67, result2);
            g2 = result;
        } else {
            result = result2;
        }
        // 0x1e36e1e
        return result;
    }
    int32_t * v6;
    int32_t v7; // 0x1e36c9b
    int32_t v8; // 0x1e36cd4
    if (result3 == 63) {
        // 0x1e36c7c
        g2 = result2;
        if (g343 != result2) {
            // 0x1e36e1e
            return result2;
        }
        // 0x1e36c8b
        g2 = g221;
        g5 = 0;
        if (*(int32_t *)(g221 + 78) == 0) {
            // 0x1e36e1e
            return g221;
        }
        // 0x1e36c9b
        v7 = g409;
        g2 = v7;
        if (*(int32_t *)(v7 + 78) != 0) {
            goto lab_0x1e36caf;
        } else {
            // 0x1e36ca5
            if (*(int32_t *)(v7 + 90) != 0) {
                goto lab_0x1e36caf;
            } else {
                // 0x1e36caa
                if (*(int32_t *)(v7 + 82) == 0) {
                    v8 = v4;
                    goto lab_0x1e36cbe;
                } else {
                    goto lab_0x1e36caf;
                }
            }
        }
    } else {
        int32_t v9; // 0x1e36d7e
        if (result3 == 66) {
            // 0x1e36d68
            g2 = g222;
            v5 = 11;
            g5 = g222;
            v9 = v5;
        } else {
            if (result3 != 67) {
                // 0x1e36e1e
                return result3;
            }
            v9 = v4;
        }
        // 0x1e36d77
        g2 = g221;
        *(int32_t *)(v9 - 4) = -0x40800000;
        int32_t v10 = 0; // 0x1e36d83
        if (*(int32_t *)(g2 + 78) != v10) {
            // 0x1e36dc6
            *(int32_t *)(v9 - 8) = 0;
            *(int32_t *)(v9 - 12) = 123;
            int32_t v11 = function_1e25763(v3); // 0x1e36dcb
            g2 = v11;
            *(int32_t *)(g9 - 4) = v11;
            g5 = g392;
            function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
            int32_t v12 = g409; // 0x1e36ddc
            g2 = v12;
            if (*(int32_t *)(v12 + 78) != g8) {
                goto lab_0x1e36df0;
            } else {
                // 0x1e36de6
                if (*(int32_t *)(v12 + 90) != g8) {
                    goto lab_0x1e36df0;
                } else {
                    // 0x1e36deb
                    if (*(int32_t *)(v12 + 82) == g8) {
                        v6 = &g407;
                        goto lab_0x1e36e04;
                    } else {
                        goto lab_0x1e36df0;
                    }
                }
            }
        } else {
            // 0x1e36d88
            *(int32_t *)(v9 - 8) = v10;
            *(int32_t *)(v9 - 12) = 122;
            int32_t v13 = function_1e25763(v3); // 0x1e36d8b
            g2 = v13;
            *(int32_t *)(g9 - 4) = v13;
            g5 = g392;
            function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
            int32_t v14 = g407; // 0x1e36d9c
            g2 = v14;
            int32_t v15 = g8; // 0x1e36da1
            if (*(int32_t *)(v14 + 78) != v15) {
                goto lab_0x1e36db0;
            } else {
                // 0x1e36da6
                if (*(int32_t *)(v14 + 90) != v15) {
                    goto lab_0x1e36db0;
                } else {
                    // 0x1e36dab
                    if (*(int32_t *)(v14 + 82) == v15) {
                        v6 = &g409;
                        goto lab_0x1e36e04;
                    } else {
                        goto lab_0x1e36db0;
                    }
                }
            }
        }
    }
  lab_0x1e36caf:
    // 0x1e36caf
    g2 = v7;
    v5 = 20;
    g5 = v7;
    v8 = v5;
    goto lab_0x1e36cbe;
  lab_0x1e36cbe:;
    int32_t v16 = g407; // 0x1e36cbe
    g2 = v16;
    g5 = 0;
    if (*(int32_t *)(v16 + 78) != 0) {
        goto lab_0x1e36cd4;
    } else {
        // 0x1e36cca
        if (*(int32_t *)(v16 + 90) != 0) {
            goto lab_0x1e36cd4;
        } else {
            // 0x1e36ccf
            if (*(int32_t *)(v16 + 82) == 0) {
                goto lab_0x1e36ce3;
            } else {
                goto lab_0x1e36cd4;
            }
        }
    }
  lab_0x1e36df0:
    // 0x1e36df0
    *(int32_t *)(g9 - 4) = 0;
    g2 = g409;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    v6 = &g407;
    goto lab_0x1e36e04;
  lab_0x1e36db0:
    // 0x1e36db0
    *(int32_t *)(g9 - 4) = 0;
    g2 = g407;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    v6 = &g409;
    goto lab_0x1e36e04;
  lab_0x1e36cd4:
    // 0x1e36cd4
    *(int32_t *)(v8 - 4) = 0;
    g2 = g407;
    int32_t v22 = v8 - 8; // 0x1e36cdd
    *(int32_t *)v22 = 20;
    g5 = g2;
    v8 = v22;
    goto lab_0x1e36ce3;
  lab_0x1e36e04:;
    int32_t result4 = *v6;
    g2 = result4;
    g5 = 0;
    if (*(int32_t *)(result4 + 78) != 0 || *(int32_t *)(result4 + 90) != 0) {
        // 0x1e36e1e
        return result4;
    }
    // 0x1e36e10
    if (*(int32_t *)(result4 + 82) == 0) {
        // 0x1e36e15
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = 7;
        int32_t v17 = g2; // 0x1e36e1a
        g5 = v17;
        result = v17;
    } else {
        result = result4;
    }
    // 0x1e36e1e
    return result;
  lab_0x1e36ce3:
    // 0x1e36ce3
    g2 = g325;
    *(int32_t *)(v8 - 4) = 0;
    *(int32_t *)(v8 - 8) = 66;
    *(int32_t *)(g2 + 6) = 1;
    g2 = function_1e38d82(v3, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 0x40800000;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 124;
    int32_t v18 = function_1e25763((int32_t)&g708); // 0x1e36d01
    g2 = v18;
    *(int32_t *)(g9 - 4) = v18;
    g5 = g392;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 0xf4240;
    int32_t v19 = function_1e32b02((int32_t)&g708); // 0x1e36d17
    g2 = v19;
    *(int32_t *)(g9 - 4) = v19;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 78;
    int32_t v20 = function_1e25763((int32_t)&g708); // 0x1e36d20
    g2 = v20;
    *(int32_t *)(g9 - 4) = v20;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = 8;
    int32_t v21 = function_1e35a8d(); // 0x1e36d34
    g2 = v21;
    if (v21 == 0) {
        // 0x1e36d41
        *(int32_t *)(g9 - 4) = 0x41000000;
        g2 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g5 = g392;
        function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
        g2 = g359;
        g5 = g359;
        g11++;
        result = g359;
    } else {
        result = v21;
    }
    // 0x1e36e1e
    return result;
}

// Address range: 0x1e36e25 - 0x1e37186
int32_t function_1e36e25(int32_t result, int32_t a2) {
    // 0x1e36e25
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e36e2c
    int32_t v3 = g6; // bp-76
    int32_t * v4;
    if (result == 63) {
        // 0x1e36e4d
        g7 = a2;
        if (g296 == a2) {
            goto lab_0x1e36f1c;
        } else {
            // 0x1e36e5c
            if (g297 == a2) {
                goto lab_0x1e36f1c;
            } else {
                // 0x1e36e68
                if (g298 == a2) {
                    goto lab_0x1e36f1c;
                } else {
                    // 0x1e36e74
                    if (g303 == a2) {
                        goto lab_0x1e36f1c;
                    } else {
                        // 0x1e36e80
                        if (g304 == a2) {
                            goto lab_0x1e36f1c;
                        } else {
                            // 0x1e36e8c
                            if (g305 == a2) {
                                goto lab_0x1e36f1c;
                            } else {
                                // 0x1e36e98
                                if (g307 == a2) {
                                    goto lab_0x1e36f1c;
                                } else {
                                    // 0x1e36ea0
                                    if (g308 == a2) {
                                        goto lab_0x1e36f1c;
                                    } else {
                                        // 0x1e36ea8
                                        if (g309 == a2) {
                                            goto lab_0x1e36f1c;
                                        } else {
                                            // 0x1e36eb0
                                            if (g311 == a2) {
                                                goto lab_0x1e36f1c;
                                            } else {
                                                // 0x1e36eb8
                                                if (g312 == a2) {
                                                    goto lab_0x1e36f1c;
                                                } else {
                                                    // 0x1e36ec0
                                                    if (g313 == a2) {
                                                        goto lab_0x1e36f1c;
                                                    } else {
                                                        // 0x1e36ec8
                                                        if (g318 == a2) {
                                                            goto lab_0x1e36f1c;
                                                        } else {
                                                            // 0x1e36ed0
                                                            if (g319 == a2) {
                                                                goto lab_0x1e36f1c;
                                                            } else {
                                                                // 0x1e36ed8
                                                                if (g320 == a2) {
                                                                    goto lab_0x1e36f1c;
                                                                } else {
                                                                    // 0x1e36ee0
                                                                    if (g326 == a2) {
                                                                        goto lab_0x1e36f1c;
                                                                    } else {
                                                                        // 0x1e36ee8
                                                                        if (g327 == a2) {
                                                                            goto lab_0x1e36f1c;
                                                                        } else {
                                                                            // 0x1e36ef0
                                                                            if (g328 == a2) {
                                                                                goto lab_0x1e36f1c;
                                                                            } else {
                                                                                // 0x1e36ef8
                                                                                if (g329 == a2) {
                                                                                    goto lab_0x1e36f1c;
                                                                                } else {
                                                                                    // 0x1e36f00
                                                                                    if (g330 == a2) {
                                                                                        goto lab_0x1e36f1c;
                                                                                    } else {
                                                                                        // 0x1e36f08
                                                                                        if (g331 == a2) {
                                                                                            goto lab_0x1e36f1c;
                                                                                        } else {
                                                                                            // 0x1e36f10
                                                                                            if (g340 != a2) {
                                                                                                result = 63;
                                                                                                return result;
                                                                                            } 
                                                                                                goto lab_0x1e36f1c;
                                                                                            
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (result == 66) {
            // 0x1e37007
            g2 = g249;
            int32_t v5 = 0; // esi
            *(int32_t *)(g249 + 6) = 15;
            *(int32_t *)(g296 + 6) = v5;
            g5 = g296;
            g2 = *(int32_t *)g296;
            *(int32_t *)(g297 + 6) = v5;
            g5 = g297;
            g2 = *(int32_t *)g297;
            *(int32_t *)(g298 + 6) = v5;
            g5 = g298;
            g2 = *(int32_t *)g298;
            *(int32_t *)(g303 + 6) = v5;
            g5 = g303;
            g2 = *(int32_t *)g303;
            *(int32_t *)(g304 + 6) = v5;
            g5 = g304;
            g2 = *(int32_t *)g304;
            *(int32_t *)(g305 + 6) = v5;
            g5 = g305;
            g2 = *(int32_t *)g305;
            *(int32_t *)(g307 + 6) = v5;
            g5 = g307;
            g2 = *(int32_t *)g307;
            *(int32_t *)(g308 + 6) = v5;
            g5 = g308;
            g2 = *(int32_t *)g308;
            *(int32_t *)(g309 + 6) = v5;
            g5 = g309;
            g2 = *(int32_t *)g309;
            g5 = g317;
            g5 = g324;
            g5 = g338;
            g5 = g339;
            g5 = g399;
            g5 = g401;
            g5 = g403;
            g5 = g406;
            g5 = g412;
            int32_t v6 = 7; // bp-220
            g6 = *(int32_t *)g412;
            v4 = &v6;
            goto lab_0x1e3714c;
        } else {
            if (result == 67) {
                v4 = &v3;
                goto lab_0x1e3714c;
            } else {
                return result;
            }
        }
    }
  lab_0x1e36f1c:;
    int32_t v7 = g249 + 6; // 0x1e36f26
    g2 = v7;
    int32_t * v8 = (int32_t *)v7; // 0x1e36f29
    int32_t v9 = *v8 - 1; // 0x1e36f2b
    g5 = v9;
    *v8 = v9;
    if (v9 != 0) {
        int32_t v10 = function_1e38d82(67, g7); // 0x1e36ffd
        g2 = v10;
        result = v10;
    } else {
        // 0x1e36f34
        g2 = g399;
        g5 = g401;
        g2 = *(int32_t *)g401;
        g5 = g403;
        g5 = g406;
        g5 = g412;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 1;
        g2 = function_1e38d82(66, 0);
        int32_t v11 = function_1e25763(126); // 0x1e36f93
        g2 = v11;
        g5 = g392;
        g2 = function_1e2fbc7(v11, (int32_t)&g708);
        g2 = function_1e32b02(0xb71b0);
        int32_t v12 = function_1e25763(78); // 0x1e36fb2
        g2 = v12;
        g5 = v2;
        g2 = function_1e3d7a0(v2, (char *)v12);
        int32_t v13 = function_1e35a8d(); // 0x1e36fc6
        g2 = v13;
        if (v13 == 0) {
            // 0x1e36fd3
            g2 = v2;
            g5 = g392;
            function_1e2fbc7(v2, 0x41000000);
            g2 = g359;
            g5 = g359;
            g11++;
            result = g359;
        } else {
            result = v13;
        }
    }
    return result;
  lab_0x1e3717e:
    // 0x1e3717e
    return result;
  lab_0x1e3714c:;
    int32_t v14 = (int32_t)v4; // 0x1e37151
    g2 = g249;
    *(int32_t *)(v14 - 4) = *(int32_t *)(g249 + 6);
    *(int32_t *)(v14 - 8) = 0;
    *(int32_t *)(v14 - 12) = 125;
    int32_t v15 = function_1e25763(v3); // 0x1e37158
    g2 = v15;
    *(int32_t *)(g9 - 4) = v15;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = -0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    int32_t v16 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37179
    g2 = v16;
    result = v16;
    goto lab_0x1e3717e;
}

// Address range: 0x1e37186 - 0x1e373e6
int32_t function_1e37186(int32_t result2, int32_t a2) {
    // 0x1e37186
    g2 = result2;
    int32_t v1; // bp-68
    int32_t v2 = v1; // 0x1e3718d
    int32_t v3 = g8; // bp-72
    int32_t * v4;
    int32_t v5; // 0x1e37212
    if (result2 == 63) {
        // 0x1e371ad
        g7 = a2;
        if (g296 == a2) {
            goto lab_0x1e372ef;
        } else {
            // 0x1e371bc
            if (g297 == a2) {
                goto lab_0x1e372ef;
            } else {
                // 0x1e371c8
                if (g298 == a2) {
                    goto lab_0x1e372ef;
                } else {
                    // 0x1e371d4
                    if (g270 != a2) {
                        // 0x1e373df
                        return 63;
                    }
                    // 0x1e371e0
                    g2 = g262;
                    g5 = 0;
                    if (*(int32_t *)(g262 + 78) == 0) {
                        // 0x1e371ec
                        if (*(int32_t *)(g262 + 90) == 0) {
                            // 0x1e371f1
                            if (*(int32_t *)(g262 + 82) == 0) {
                                // 0x1e373df
                                return g262;
                            }
                        }
                    }
                    int32_t v6 = g249 + 6; // 0x1e37204
                    g2 = v6;
                    int32_t * v7 = (int32_t *)v6; // 0x1e37207
                    int32_t v8 = *v7 - 1; // 0x1e37209
                    g5 = v8;
                    *v7 = v8;
                    if (v8 != 0) {
                        int32_t result = function_1e38d82(67, g7); // 0x1e372e5
                        g2 = result;
                        // 0x1e373df
                        return result;
                    }
                    // 0x1e37212
                    v5 = g396;
                    g2 = v5;
                    int32_t v9 = 0; // 0x1e37217
                    if (*(int32_t *)(v5 + 78) != v9) {
                        goto lab_0x1e37226;
                    } else {
                        // 0x1e3721c
                        if (*(int32_t *)(v5 + 90) != v9) {
                            goto lab_0x1e37226;
                        } else {
                            // 0x1e37221
                            if (*(int32_t *)(v5 + 82) == v9) {
                                goto lab_0x1e37235;
                            } else {
                                goto lab_0x1e37226;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (result2 == 66) {
            // 0x1e372fc
            g2 = g262;
            g5 = g276;
            g2 = *(int32_t *)g276;
            g5 = g249;
            *(int32_t *)(g249 + 6) = 1;
        } else {
            if (result2 != 67) {
                // 0x1e373df
                return result2;
            }
        }
        // 0x1e37326
        g2 = g262;
        if (*(int32_t *)(g262 + 78) != 0) {
            goto lab_0x1e3737f;
        } else {
            // 0x1e37332
            if (*(int32_t *)(g262 + 90) != 0) {
                goto lab_0x1e3737f;
            } else {
                // 0x1e37337
                if (*(int32_t *)(g262 + 82) != 0) {
                    goto lab_0x1e3737f;
                } else {
                    // 0x1e3733c
                    *(int32_t *)(g9 - 4) = -0x40800000;
                    *(int32_t *)(g9 - 8) = 0;
                    *(int32_t *)(g9 - 12) = 127;
                    int32_t v10 = function_1e25763(v3); // 0x1e37344
                    g2 = v10;
                    *(int32_t *)(g9 - 4) = v10;
                    g5 = g392;
                    function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                    int32_t v11 = g397; // 0x1e37355
                    g2 = v11;
                    if (*(int32_t *)(v11 + 78) != g8) {
                        goto lab_0x1e37369;
                    } else {
                        // 0x1e3735f
                        if (*(int32_t *)(v11 + 90) != g8) {
                            goto lab_0x1e37369;
                        } else {
                            // 0x1e37364
                            if (*(int32_t *)(v11 + 82) == g8) {
                                v4 = &g396;
                                goto lab_0x1e373c5;
                            } else {
                                goto lab_0x1e37369;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1e372ef:;
    int32_t result3 = function_1e38d82(67, a2); // 0x1e372f2
    g2 = result3;
    // 0x1e373df
    return result3;
  lab_0x1e3737f:
    // 0x1e3737f
    *(int32_t *)(g9 - 4) = -0x40800000;
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = 128;
    int32_t v12 = function_1e25763(v3); // 0x1e3738c
    g2 = v12;
    *(int32_t *)(g9 - 4) = v12;
    g5 = g392;
    function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    int32_t v13 = g396; // 0x1e3739d
    g2 = v13;
    if (*(int32_t *)(v13 + 78) != g8) {
        goto lab_0x1e373b1;
    } else {
        // 0x1e373a7
        if (*(int32_t *)(v13 + 90) != g8) {
            goto lab_0x1e373b1;
        } else {
            // 0x1e373ac
            if (*(int32_t *)(v13 + 82) == g8) {
                v4 = &g397;
                goto lab_0x1e373c5;
            } else {
                goto lab_0x1e373b1;
            }
        }
    }
  lab_0x1e373b1:
    // 0x1e373b1
    *(int32_t *)(g9 - 4) = 0;
    g2 = g396;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    v4 = &g397;
    goto lab_0x1e373c5;
  lab_0x1e373c5:;
    int32_t result4 = *v4;
    g2 = result4;
    g5 = 0;
    if (*(int32_t *)(result4 + 78) != 0 || *(int32_t *)(result4 + 90) != 0) {
        // 0x1e373df
        return result4;
    }
    // 0x1e373d1
    int32_t result5; // 0x1e373e3
    if (*(int32_t *)(result4 + 82) == 0) {
        // 0x1e373d6
        *(int32_t *)(g9 - 4) = 0;
        *(int32_t *)(g9 - 8) = 7;
        int32_t v14 = g2; // 0x1e373db
        g5 = v14;
        result5 = v14;
    } else {
        result5 = result4;
    }
    // 0x1e373df
    return result5;
  lab_0x1e37226:
    // 0x1e37226
    g2 = v5;
    g5 = v5;
    goto lab_0x1e37235;
  lab_0x1e37369:
    // 0x1e37369
    *(int32_t *)(g9 - 4) = 0;
    g2 = g397;
    *(int32_t *)(g9 - 8) = 20;
    g5 = g2;
    v4 = &g396;
    goto lab_0x1e373c5;
  lab_0x1e37235:;
    int32_t v15 = g397; // 0x1e37235
    g2 = v15;
    g5 = 0;
    if (*(int32_t *)(v15 + 78) != 0) {
        goto lab_0x1e3724b;
    } else {
        // 0x1e37241
        if (*(int32_t *)(v15 + 90) != 0) {
            goto lab_0x1e3724b;
        } else {
            // 0x1e37246
            if (*(int32_t *)(v15 + 82) == 0) {
                goto lab_0x1e3725a;
            } else {
                goto lab_0x1e3724b;
            }
        }
    }
  lab_0x1e3724b:
    // 0x1e3724b
    *(int32_t *)(g9 - 4) = 0;
    g2 = g397;
    int32_t v16 = g9 - 8; // 0x1e37254
    *(int32_t *)v16 = 20;
    g5 = g2;
    g9 = v16;
    goto lab_0x1e3725a;
  lab_0x1e3725a:
    // 0x1e3725a
    g2 = g325;
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = 66;
    *(int32_t *)(g2 + 6) = 1;
    g2 = function_1e38d82(v3, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 0x40800000;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 129;
    int32_t v17 = function_1e25763((int32_t)&g708); // 0x1e3727b
    g2 = v17;
    *(int32_t *)(g9 - 4) = v17;
    g5 = g392;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = 0xb71b0;
    int32_t v18 = function_1e32b02((int32_t)&g708); // 0x1e37291
    g2 = v18;
    *(int32_t *)(g9 - 4) = v18;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 78;
    int32_t v19 = function_1e25763((int32_t)&g708); // 0x1e3729a
    g2 = v19;
    *(int32_t *)(g9 - 4) = v19;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = 7;
    int32_t v20 = function_1e35a8d(); // 0x1e372ae
    g2 = v20;
    if (v20 == 0) {
        // 0x1e372bb
        *(int32_t *)(g9 - 4) = 0x41000000;
        g2 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g5 = g392;
        function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
        g2 = g359;
        g5 = g359;
        g11++;
        result5 = g359;
    } else {
        result5 = v20;
    }
    // 0x1e373df
    return result5;
}

