#include "pinball.h"

// Address range: 0x1e33cb5 - 0x1e33d1d
int32_t function_1e33cb5(int32_t a1, int32_t a2) {
    // 0x1e33cb5
    g2 = a1;
    int32_t v1 = g6; // bp-12
    int32_t v2; // bp-20
    int32_t v3; // 0x1e33d0c
    int32_t v4; // 0x1e33d17
    int32_t result; // 0x1e33cd3
    if (a1 == 0) {
        // 0x1e33cce
        result = *(int32_t *)a2;
        g2 = result;
        v2 = 0;
        g5 = a2;
        v4 = &v2;
        goto lab_0x1e33d17;
    } else {
        if (a1 == 41) {
            // 0x1e33cdd
            g2 = *(int32_t *)a2;
            v2 = 41;
            g5 = a2;
            v3 = &v2;
            goto lab_0x1e33d0c;
        } else {
            if (a1 == 61) {
                int32_t v5 = *(int32_t *)a2; // 0x1e33cf6
                g2 = v5;
                v2 = 33;
                g5 = a2;
                int32_t v6 = 37; // bp-28
                int32_t v7 = &v6; // 0x1e33d04
                if (v5 == 0) {
                    result = 0;
                    v4 = v7;
                    goto lab_0x1e33d17;
                } else {
                    v3 = v7;
                    goto lab_0x1e33d0c;
                }
            } else {
                result = a1;
                v4 = &v1;
                goto lab_0x1e33d17;
            }
        }
    }
  lab_0x1e33d17:
    // 0x1e33d17
    g6 = *(int32_t *)v4;
    g8 = *(int32_t *)(v4 + 4);
    g3 = *(int32_t *)(v4 + 8);
    return result;
  lab_0x1e33d0c:
    // 0x1e33d0c
    *(int32_t *)(v3 - 4) = 0x42700000;
    g5 = a2;
    int32_t v8 = v3 - 8; // 0x1e33d13
    *(int32_t *)v8 = 43;
    result = g2;
    v4 = v8;
    goto lab_0x1e33d17;
}

// Address range: 0x1e33d1d - 0x1e33f65
int32_t function_1e33d1d(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = &v1;
    int32_t v2; // ebx
    int32_t v3 = v2; // 0x1e33d27
    int32_t v4; // esi
    int32_t v5 = v4; // 0x1e33d28
    int32_t v6; // edi
    int32_t v7 = &v6; // 0x1e33d29
    int32_t result; // 0x1e33f62
    int32_t v8; // 0x1e33dfd
    int32_t v9; // 0x1e33dd6
    if (a1 != 63) {
        // 0x1e33d1d
        result = g2;
        return result;
    } else {
        // 0x1e33d30
        v4 = a2;
        g6 = 1;
        if (g277 != a2) {
            int32_t v10 = a2 - g278; // 0x1e33d42
            g2 = v10;
            g6 = (int32_t)(v10 == 0) + 3;
        }
        int32_t v11 = g284 + 6; // 0x1e33d55
        g2 = v11;
        int32_t * v12 = (int32_t *)v11; // 0x1e33d58
        int32_t v13 = *v12; // 0x1e33d58
        if (v13 == 0) {
            // 0x1e33d97
            *(int32_t *)(v7 - 4) = 0;
            int32_t v14 = *(int32_t *)v4; // 0x1e33d99
            g2 = v14;
            g6--;
            *(int32_t *)(v7 - 8) = v14;
            g5 = g206;
            g2 = function_1e2e6c7(v6);
            g2 = *(int32_t *)(4 * g6 + (int32_t)&g289);
            *(int32_t *)(g9 - 4) = *(int32_t *)g8;
            *(int32_t *)(g9 - 8) = 16;
            g5 = *(int32_t *)(g2 + 4);
            int32_t v15 = g6; // 0x1e33dc2
            int32_t v16 = 4 * v15 + (int32_t)&g290; // 0x1e33dc2
            int32_t v17 = *(int32_t *)v16; // 0x1e33dcc
            g2 = v17;
            int32_t v18 = *(int32_t *)(v17 + 4); // 0x1e33dce
            g5 = v18;
            v9 = 2 - v15;
            g2 = v9;
            g2 = *(int32_t *)v18;
            *(float32_t *)(g9 - 12) = (float32_t)(float80_t)v9;
            *(int32_t *)(g9 - 4) = 11;
            *(int32_t *)(g9 - 8) = *(int32_t *)g8;
            *(int32_t *)(g9 - 12) = 16;
            g5 = *(int32_t *)(*(int32_t *)v16 + 4);
            int32_t v19 = *(int32_t *)(4 * g6 + (int32_t)&g288); // 0x1e33df4
            *(int32_t *)(g9 - 16) = *(int32_t *)g8;
            v8 = g9 - 20;
            *(int32_t *)v8 = 56;
            g5 = *(int32_t *)(v19 + 4);
            goto lab_0x1e33f42;
        } else {
            // 0x1e33d5e
            *v12 = 0;
            g2 = g283;
            g5 = g283;
            g2 = *(int32_t *)g283;
            g5 = g287;
            g2 = *(int32_t *)g287;
            g5 = g341;
            g2 = *(int32_t *)g341;
            int32_t v20; // bp-84
            if (v13 != g6) {
                int32_t v21 = *(int32_t *)v4; // 0x1e33ed5
                g2 = v21;
                v2 = v13 - 1;
                g5 = g206;
                g2 = function_1e2e6c7(v21);
                int32_t v22 = 4 * v2; // 0x1e33eec
                int32_t v23 = *(int32_t *)(v22 + (int32_t)&g289); // 0x1e33eec
                g2 = v23;
                g5 = *(int32_t *)(v23 + 4);
                int32_t * v24 = (int32_t *)(v22 + (int32_t)&g290); // 0x1e33f08
                int32_t v25 = *v24; // 0x1e33f08
                g2 = v25;
                int32_t v26 = *(int32_t *)(v25 + 4); // 0x1e33f0a
                g5 = v26;
                int32_t v27 = 2 - v2; // 0x1e33f12
                g2 = v27;
                g2 = *(int32_t *)v26;
                g5 = *(int32_t *)(*v24 + 4);
                int32_t v28 = *(int32_t *)(v22 + (int32_t)&g288); // 0x1e33f30
                v20 = 56;
                g5 = *(int32_t *)(v28 + 4);
                v9 = v27;
                v8 = &v20;
                goto lab_0x1e33f42;
            } else {
                // 0x1e33e13
                g2 = g206;
                if (*(int32_t *)(g206 + 346) == 0) {
                    int32_t v29 = function_1e25763(49); // 0x1e33e44
                    g2 = v29;
                    g5 = g391;
                    g2 = function_1e2fbc7(v29, (int32_t)&g708);
                    g2 = function_1e32928(0x40800000);
                    int32_t v30 = *(int32_t *)g8; // 0x1e33e61
                    g2 = v30;
                    g6--;
                    g5 = g206;
                    g2 = function_1e2e6c7(v30);
                    int32_t v31 = 4 * g6; // 0x1e33e78
                    int32_t v32 = *(int32_t *)(v31 + (int32_t)&g289); // 0x1e33e78
                    g2 = v32;
                    g5 = *(int32_t *)(v32 + 4);
                    int32_t * v33 = (int32_t *)(v31 + (int32_t)&g290); // 0x1e33e94
                    int32_t v34 = *v33; // 0x1e33e94
                    g2 = v34;
                    int32_t v35 = *(int32_t *)(v34 + 4); // 0x1e33e96
                    g5 = v35;
                    int32_t v36 = 2 - g6; // 0x1e33e9e
                    g2 = v36;
                    int32_t v37 = *(int32_t *)v35; // 0x1e33ea3
                    g2 = v37;
                    v20 = v36;
                    g5 = *(int32_t *)(*v33 + 4);
                    int32_t v38 = *(int32_t *)(v31 + (int32_t)&g288); // 0x1e33ebc
                    g5 = *(int32_t *)(v38 + 4);
                    result = v37;
                } else {
                    // 0x1e33e21
                    g2 = function_1e32a62(20, 0, 20, 0, 20, 0, v6, v5, v3, v1);
                    g5 = g206;
                    int32_t v39 = function_1e2e6c7(0x2710); // 0x1e33e31
                    g2 = v39;
                    result = v39;
                }
                return result;
            }
        }
    }
    // 0x1e33f5c
    return result;
  lab_0x1e33f42:
    // 0x1e33f42
    *(int32_t *)(v8 - 4) = 0x40000000;
    *(int32_t *)(v8 - 8) = 0;
    *(int32_t *)(v8 - 12) = 49;
    int32_t v40 = function_1e25763(v9); // 0x1e33f4b
    g2 = v40;
    *(int32_t *)(g9 - 4) = v40;
    g5 = g391;
    int32_t v41 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e33f57
    g2 = v41;
    result = v41;
    return result;
}

// Address range: 0x1e33f65 - 0x1e33f90
int32_t function_1e33f65(int32_t a1) {
    int32_t result; // 0x1e33f8d
    if (a1 != 1) {
        // 0x1e33f65
        result = g2;
    } else {
        // 0x1e33f6c
        g2 = g217;
        g2 = *(int32_t *)g217;
        g5 = g226;
        int32_t v1 = *(int32_t *)g226; // 0x1e33f89
        g2 = v1;
        result = v1;
    }
    // 0x1e33f8d
    return result;
}

// Address range: 0x1e33f90 - 0x1e33fbb
int32_t function_1e33f90(int32_t a1) {
    int32_t result; // 0x1e33fb8
    if (a1 != 1) {
        // 0x1e33f90
        result = g2;
    } else {
        // 0x1e33f97
        g2 = g217;
        g2 = *(int32_t *)g217;
        g5 = g226;
        int32_t v1 = *(int32_t *)g226; // 0x1e33fb4
        g2 = v1;
        result = v1;
    }
    // 0x1e33fb8
    return result;
}

// Address range: 0x1e33fbb - 0x1e34101
int32_t function_1e33fbb(int32_t a1) {
    // 0x1e33fbb
    g2 = a1;
    int32_t v1; // bp-24
    int32_t result; // 0x1e33fda
    if (a1 == 1015) {
        // 0x1e33fd6
        v1 = 67;
        result = function_1e38d82(67, 0);
        g2 = result;
    } else {
        if (a1 == 1016) {
            // 0x1e33fe4
            g2 = g355;
            g5 = g355;
            v1 = 37;
            g207 = 0;
            int32_t * v2;
            if (g355 == 0) {
                // 0x1e33ffe
                g2 = g355;
                int32_t v3 = 32; // bp-32
                g5 = g355;
                v2 = &v3;
            } else {
                v2 = &v1;
            }
            int32_t v4 = (int32_t)v2; // 0x1e3402e
            g2 = g357;
            int32_t v5 = 0; // esi
            int32_t v6; // 0x1e340ed
            if (*(int32_t *)(g357 + 78) == 0) {
                // 0x1e3401c
                if (*(int32_t *)(g357 + 90) == 0) {
                    // 0x1e34025
                    if (*(int32_t *)(g357 + 82) == 0) {
                        // 0x1e3402e
                        *(int32_t *)(v4 - 4) = 0;
                        g2 = g353;
                        *(int32_t *)(v4 - 8) = 20;
                        *(int32_t *)(v4 - 12) = v5;
                        g5 = g347;
                        *(int32_t *)(v4 - 16) = 19;
                        g2 = *(int32_t *)g5;
                        *(int32_t *)(v4 - 20) = 0x3e800000;
                        g5 = g353;
                        *(int32_t *)(v4 - 24) = 26;
                        *(int32_t *)(v4 - 28) = v5;
                        g2 = *(int32_t *)g294;
                        int32_t v7 = 0x3e4ccccd; // ebx
                        *(int32_t *)(v4 - 32) = 20;
                        g5 = g294;
                        *(int32_t *)(v4 - 36) = v7;
                        *(int32_t *)(v4 - 40) = 32;
                        *(int32_t *)(v4 - 44) = v7;
                        g5 = g294;
                        *(int32_t *)(v4 - 48) = 26;
                        g6 = g295;
                        *(int32_t *)(v4 - 52) = v5;
                        g2 = *(int32_t *)g6;
                        *(int32_t *)(v4 - 56) = 20;
                        g5 = g6;
                        g3 = *(int32_t *)g2;
                        *(int32_t *)(v4 - 60) = v7;
                        *(int32_t *)(v4 - 64) = 32;
                        *(int32_t *)(v4 - 68) = v7;
                        g5 = g6;
                        *(int32_t *)(v4 - 72) = 26;
                        g2 = g206;
                        *(int32_t *)(g206 + 302) = 0x61a8;
                        *(int32_t *)(g9 - 4) = g310;
                        *(int32_t *)(g9 - 8) = 65;
                        g2 = function_1e3459d(v1, 0);
                        *(int32_t *)(g9 - 4) = g8;
                        g5 = g269;
                        *(int32_t *)(g9 - 8) = 19;
                        *(int32_t *)(g9 - 12) = g8;
                        g5 = g357;
                        *(int32_t *)(g9 - 16) = 19;
                        *(int32_t *)(g9 - 20) = g8;
                        g5 = g236;
                        *(int32_t *)(g9 - 24) = 53;
                        *(int32_t *)(g9 - 28) = g8;
                        g5 = g237;
                        *(int32_t *)(g9 - 32) = 53;
                        v6 = g357;
                    } else {
                        v6 = g357;
                    }
                } else {
                    v6 = g357;
                }
            } else {
                v6 = g357;
            }
            // 0x1e340ed
            g5 = v6;
            *(int32_t *)(v6 + 6) = 0;
            result = g2;
        } else {
            result = a1;
        }
    }
    // 0x1e340fa
    return result;
}

// Address range: 0x1e34101 - 0x1e3411b
int32_t function_1e34101(int32_t a1) {
    if (a1 == 60) {
        // 0x1e34108
        g5 = g206;
        *(int32_t *)(g206 + 318) = 0;
    }
    // 0x1e34118
    return g2;
}

// Address range: 0x1e3411b - 0x1e34135
int32_t function_1e3411b(int32_t a1) {
    if (a1 == 60) {
        // 0x1e34122
        g5 = g206;
        *(int32_t *)(g206 + 310) = 0;
    }
    // 0x1e34132
    return g2;
}

// Address range: 0x1e34135 - 0x1e342a5
int32_t function_1e34135(int32_t a1, int32_t a2) {
    // 0x1e34135
    if (a1 != 63) {
        // 0x1e342a0
        return g2;
    }
    // 0x1e34142
    g8 = a2;
    g5 = 0;
    int32_t * v1 = (int32_t *)(a2 + 6); // 0x1e34148
    if (*v1 != 0) {
        // 0x1e342a0
        return g2;
    }
    // 0x1e34151
    *v1 = 1;
    g2 = g298;
    g6 = g297;
    int32_t v2 = g296; // 0x1e34166
    g2 = v2;
    int32_t v3 = *(int32_t *)(g297 + 6); // 0x1e3416b
    int32_t v4 = *(int32_t *)(v2 + 6); // 0x1e3416e
    int32_t v5; // bp-12
    int32_t v6; // 0x1e3422f
    int32_t v7; // 0x1e34238
    int32_t v8; // 0x1e34294
    int32_t v9; // 0x1e3428d
    if (v4 + v3 + *(int32_t *)(g298 + 6) != 3) {
        // 0x1e3428b
        v5 = 0;
        v9 = *(int32_t *)g8;
        g2 = v9;
        v8 = &v5;
        goto lab_0x1e34294;
    } else {
        // 0x1e3417a
        g2 = g299;
        int32_t v10 = g5; // 0x1e3417f
        if (*(int32_t *)(g299 + 78) != v10) {
            goto lab_0x1e341b4;
        } else {
            // 0x1e34184
            if (*(int32_t *)(g299 + 90) != v10) {
                goto lab_0x1e341b4;
            } else {
                // 0x1e34189
                if (*(int32_t *)(g299 + 82) != v10) {
                    goto lab_0x1e341b4;
                } else {
                    // 0x1e3418e
                    g2 = g325;
                    int32_t v11 = *(int32_t *)(g325 + 6); // 0x1e34193
                    g2 = v11;
                    if (v11 == 15) {
                        v7 = v2;
                        goto lab_0x1e34238;
                    } else {
                        if (v11 == 29) {
                            v7 = v2;
                        } else {
                            // 0x1e341a8
                            function_1e329e6();
                            g2 = g380;
                            v6 = g380;
                            goto lab_0x1e3422f;
                        }
                    }
                }
            }
        }
    }
  lab_0x1e34294:
    // 0x1e34294
    *(int32_t *)(v8 - 4) = v9;
    g5 = g206;
    g2 = function_1e2e6c7((int32_t)&g708);
    // 0x1e342a0
    return g2;
  lab_0x1e341b4:
    // 0x1e341b4
    g2 = g300;
    g5 = 0;
    if (*(int32_t *)(g300 + 78) != 0) {
        goto lab_0x1e341d6;
    } else {
        // 0x1e341c0
        if (*(int32_t *)(g300 + 90) != 0) {
            goto lab_0x1e341d6;
        } else {
            // 0x1e341c5
            if (*(int32_t *)(g300 + 82) != 0) {
                goto lab_0x1e341d6;
            } else {
                // 0x1e341ca
                function_1e32970();
                g2 = g378;
                v6 = g378;
                goto lab_0x1e3422f;
            }
        }
    }
  lab_0x1e341d6:
    // 0x1e341d6
    g2 = g301;
    g5 = 0;
    if (*(int32_t *)(g301 + 78) != 0) {
        goto lab_0x1e341f8;
    } else {
        // 0x1e341e2
        if (*(int32_t *)(g301 + 90) != 0) {
            goto lab_0x1e341f8;
        } else {
            // 0x1e341e7
            if (*(int32_t *)(g301 + 82) != 0) {
                goto lab_0x1e341f8;
            } else {
                // 0x1e341ec
                function_1e329ab();
                g2 = g379;
                v6 = g379;
                goto lab_0x1e3422f;
            }
        }
    }
  lab_0x1e341f8:
    // 0x1e341f8
    g2 = g302;
    g5 = 0;
    if (*(int32_t *)(g302 + 78) != 0) {
        goto lab_0x1e34215;
    } else {
        // 0x1e34204
        if (*(int32_t *)(g302 + 90) != 0) {
            goto lab_0x1e34215;
        } else {
            // 0x1e34209
            if (*(int32_t *)(g302 + 82) != 0) {
                goto lab_0x1e34215;
            } else {
                // 0x1e3420e
                function_1e32a34();
                goto lab_0x1e3422a;
            }
        }
    }
  lab_0x1e34215:
    // 0x1e34215
    v5 = 1;
    int32_t v12 = *(int32_t *)g8; // 0x1e34217
    g2 = v12;
    g5 = g206;
    function_1e2e6c7(v12);
    goto lab_0x1e3422a;
  lab_0x1e34238:;
    int32_t v13 = 0; // edi
    *(int32_t *)(v7 + 6) = 0;
    g2 = g296;
    g5 = g296;
    g2 = *(int32_t *)g296;
    *(int32_t *)(g9 - 4) = v13;
    *(int32_t *)(g9 - 8) = 50;
    g5 = g297;
    *(int32_t *)(g9 - 12) = v13;
    *(int32_t *)(g9 - 16) = 50;
    *(int32_t *)(g5 + 6) = v13;
    g5 = g297;
    g2 = *(int32_t *)g297;
    g5 = g298;
    *(int32_t *)(g9 - 4) = v13;
    *(int32_t *)(g9 - 8) = 50;
    *(int32_t *)(g5 + 6) = v13;
    g5 = g298;
    g2 = *(int32_t *)g298;
    int32_t v14 = g9 - 4; // 0x1e34280
    *(int32_t *)v14 = 1;
    g6 = *(int32_t *)g8;
    v8 = v14;
    v9 = g2;
    goto lab_0x1e34294;
  lab_0x1e3422a:
    // 0x1e3422a
    g2 = g381;
    v6 = g381;
    goto lab_0x1e3422f;
  lab_0x1e3422f:
    // 0x1e3422f
    g5 = v6;
    v7 = g296;
    goto lab_0x1e34238;
}

// Address range: 0x1e342a5 - 0x1e343e4
int32_t function_1e342a5(int32_t a1, int32_t a2) {
    // 0x1e342a5
    if (a1 != 63) {
        // 0x1e343df
        return g2;
    }
    int32_t * v1 = (int32_t *)(a2 + 6); // 0x1e342b6
    if (*v1 != 0) {
        // 0x1e343df
        return g2;
    }
    // 0x1e342c0
    *v1 = 1;
    g2 = g305;
    int32_t v2 = *(int32_t *)(g305 + 6); // 0x1e342d2
    g5 = v2;
    g2 = g303;
    int32_t v3 = *(int32_t *)(g304 + 6) + v2; // 0x1e342da
    g5 = v3;
    int32_t v4 = *(int32_t *)(g303 + 6) + v3; // 0x1e342dd
    g5 = v4;
    if (v4 != 3) {
        int32_t v5 = *(int32_t *)a2; // 0x1e343cc
        g2 = v5;
        g5 = g206;
        g2 = function_1e2e6c7(v5);
        // 0x1e343df
        return g2;
    }
    // 0x1e342e9
    g2 = g306;
    int32_t v6; // esi
    function_1e343e4(41, g306, g6, v6);
    g2 = g306;
    g6 = *(int32_t *)g306;
    g5 = g306;
    int32_t v7;
    int32_t v8;
    if (g306 == 1) {
        int32_t v9 = *(int32_t *)g8; // 0x1e34337
        g2 = v9;
        g5 = g206;
        v8 = function_1e2e6c7(v9);
        v7 = 53;
        goto lab_0x1e34373;
    } else {
        if (g306 == 2) {
            int32_t v10 = *(int32_t *)g8; // 0x1e34357
            g2 = v10;
            g5 = g206;
            v8 = function_1e2e6c7(v10);
            v7 = 54;
            goto lab_0x1e34373;
        } else {
            int32_t v11 = function_1e25763(55); // 0x1e34318
            g2 = v11;
            g5 = g391;
            g2 = function_1e2fbc7(v11, (int32_t)&g708);
            function_1e32ace(0x40800000);
            goto lab_0x1e34384;
        }
    }
  lab_0x1e34373:
    // 0x1e34373
    g2 = v8;
    int32_t v12 = function_1e25763(v7); // 0x1e34373
    g2 = v12;
    g5 = g391;
    function_1e2fbc7(v12, (int32_t)&g708);
    goto lab_0x1e34384;
  lab_0x1e34384:
    // 0x1e34384
    v6 = 0;
    *(int32_t *)(g303 + 6) = 0;
    g2 = g303;
    g5 = g303;
    *(int32_t *)(g9 - 4) = v6;
    *(int32_t *)(g9 - 8) = 50;
    g5 = g304;
    *(int32_t *)(g9 - 12) = v6;
    *(int32_t *)(g9 - 16) = 50;
    *(int32_t *)(g5 + 6) = v6;
    g5 = g304;
    g2 = *(int32_t *)g304;
    g5 = g305;
    *(int32_t *)(g9 - 4) = v6;
    *(int32_t *)(g9 - 8) = 50;
    *(int32_t *)(g5 + 6) = v6;
    g5 = g305;
    g2 = *(int32_t *)g305;
    // 0x1e343df
    return g2;
}

// Address range: 0x1e343e4 - 0x1e3444c
int32_t function_1e343e4(int32_t result2, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e343e4
    g2 = result2;
    int32_t v1 = g6; // bp-12
    int32_t v2; // bp-20
    int32_t v3; // 0x1e34446
    if (result2 == 0) {
        int32_t result = *(int32_t *)a2; // 0x1e34402
        g2 = result;
        v2 = 0;
        g5 = a2;
        v3 = &v2;
        // 0x1e34446
        g8 = *(int32_t *)(v3 + 4);
        g3 = *(int32_t *)(v3 + 8);
        return result;
    }
    int32_t v4; // 0x1e3443b
    if (result2 == 41) {
        // 0x1e3440c
        g2 = *(int32_t *)a2;
        v2 = 41;
        g5 = a2;
        v4 = &v2;
    } else {
        if (result2 != 61) {
            v3 = &v1;
            // 0x1e34446
            g8 = *(int32_t *)(v3 + 4);
            g3 = *(int32_t *)(v3 + 8);
            return result2;
        }
        int32_t v5 = *(int32_t *)a2; // 0x1e34425
        g2 = v5;
        v2 = 33;
        g5 = a2;
        int32_t v6 = 37; // bp-28
        int32_t v7 = &v6; // 0x1e34433
        if (v5 == 0) {
            v3 = v7;
            // 0x1e34446
            g8 = *(int32_t *)(v3 + 4);
            g3 = *(int32_t *)(v3 + 8);
            return 0;
        }
        v4 = v7;
    }
    // 0x1e3443b
    *(int32_t *)(v4 - 4) = 0x41f00000;
    g5 = a2;
    int32_t v8 = v4 - 8; // 0x1e34442
    *(int32_t *)v8 = 43;
    v3 = v8;
    // 0x1e34446
    g8 = *(int32_t *)(v3 + 4);
    g3 = *(int32_t *)(v3 + 8);
    return g2;
}

// Address range: 0x1e3444c - 0x1e3459d
int32_t function_1e3444c(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e34598
        return g2;
    }
    // 0x1e34459
    g5 = a2;
    int32_t * v1 = (int32_t *)(a2 + 6); // 0x1e3445f
    if (*v1 != 0) {
        // 0x1e34598
        return g2;
    }
    // 0x1e34468
    *v1 = 1;
    g2 = g309;
    g6 = g308;
    g2 = g307;
    int32_t v2 = *(int32_t *)(g308 + 6); // 0x1e34482
    int32_t v3 = *(int32_t *)(g307 + 6); // 0x1e34485
    if (v3 + v2 + *(int32_t *)(g309 + 6) != 3) {
        int32_t v4 = *(int32_t *)g5; // 0x1e34587
        g2 = v4;
        g5 = g206;
        g2 = function_1e2e6c7(v4);
        // 0x1e34598
        return g2;
    }
    int32_t v5 = *(int32_t *)g5; // 0x1e34493
    g2 = v5;
    g5 = g206;
    function_1e2e6c7(v5);
    g2 = g310;
    function_1e3459d(41, g310);
    g2 = g310;
    g5 = g310;
    int32_t v6; // bp-44
    if (g310 == 1) {
        // 0x1e344e7
        g2 = g206;
        v6 = 56;
        *(int32_t *)(g206 + 294) = 1;
    } else {
        if (g310 == 2) {
            // 0x1e34501
            g2 = g206;
            v6 = 57;
            *(int32_t *)(g206 + 294) = 2;
        } else {
            // 0x1e344c9
            g2 = g206;
            int32_t * v7 = (int32_t *)(g206 + 294); // 0x1e3451b
            if (g310 == 3) {
                // 0x1e3451b
                *v7 = 3;
                v6 = 58;
            } else {
                // 0x1e344d3
                *v7 = 4;
                v6 = 59;
            }
        }
    }
    int32_t v8 = function_1e25763(v6); // 0x1e34530
    g2 = v8;
    *(int32_t *)(g9 - 4) = v8;
    g5 = g391;
    function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g2 = g307;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = 50;
    *(int32_t *)(g2 + 6) = g8;
    g2 = g307;
    g5 = g307;
    g5 = g308;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = 50;
    *(int32_t *)(g5 + 6) = g8;
    g5 = g308;
    g2 = *(int32_t *)g308;
    g5 = g309;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = 50;
    *(int32_t *)(g5 + 6) = g8;
    g5 = g309;
    g2 = *(int32_t *)g309;
    // 0x1e34598
    return g2;
}

// Address range: 0x1e3459d - 0x1e3469d
int32_t function_1e3459d(int32_t result3, int32_t a2) {
    // 0x1e3459d
    g2 = result3;
    int32_t v1 = g6; // bp-12
    int32_t v2; // bp-20
    int32_t v3; // 0x1e34697
    if (result3 == 0) {
        int32_t result = *(int32_t *)a2; // 0x1e345cc
        g2 = result;
        v2 = 0;
        g5 = a2;
        v3 = &v2;
        // 0x1e34697
        g8 = *(int32_t *)(v3 + 4);
        g3 = *(int32_t *)(v3 + 8);
        return result;
    }
    int32_t v4; // bp-24
    int32_t * v5;
    if (result3 == 41) {
        // 0x1e345d9
        g2 = *(int32_t *)a2;
        v2 = 41;
        g5 = a2;
        v4 = 0x41f00000;
        v5 = &v4;
    } else {
        int32_t v6; // bp-28
        int32_t v7; // bp-32
        if (result3 == 61) {
            int32_t v8 = g206 + 294; // 0x1e345fb
            g5 = v8;
            int32_t * v9 = (int32_t *)v8; // 0x1e34601
            int32_t v10 = *v9; // 0x1e34601
            g2 = v10;
            if (v10 != 0) {
                int32_t v11 = v10 - 1; // 0x1e34607
                g2 = v11;
                *v9 = v11;
            }
            int32_t v12 = *(int32_t *)a2; // 0x1e3460f
            g2 = v12;
            v2 = 33;
            g5 = a2;
            v4 = 0;
            g5 = a2;
            v6 = 37;
            if (v12 == 0) {
                v3 = &v6;
                // 0x1e34697
                g8 = *(int32_t *)(v3 + 4);
                g3 = *(int32_t *)(v3 + 8);
                return 0;
            }
            // 0x1e34625
            v7 = 0x41f00000;
            v5 = &v7;
        } else {
            if (result3 == 64) {
                // 0x1e3462c
                g2 = g206;
                v2 = 19;
                g5 = *(int32_t *)a2;
                *(int32_t *)(g206 + 294) = 4;
                v4 = 0x41f00000;
                g5 = a2;
                v6 = 43;
                v7 = 0x40000000;
                int32_t v13 = function_1e25763(59); // 0x1e3465e
                g2 = v13;
                g5 = g391;
                int32_t result2 = function_1e2fbc7(v13, (int32_t)&g708); // 0x1e3466a
                g2 = result2;
                v3 = g9;
                // 0x1e34697
                g8 = *(int32_t *)(v3 + 4);
                g3 = *(int32_t *)(v3 + 8);
                return result2;
            }
            if (result3 != 65) {
                v3 = &v1;
                // 0x1e34697
                g8 = *(int32_t *)(v3 + 4);
                g3 = *(int32_t *)(v3 + 8);
                return result3;
            }
            // 0x1e34671
            g2 = g206;
            g5 = 0;
            v2 = 20;
            *(int32_t *)(g206 + 294) = 0;
            g2 = *(int32_t *)a2;
            g5 = a2;
            v4 = -0x40800000;
            v5 = &v4;
        }
    }
    int32_t v14 = (int32_t)v5 - 4; // 0x1e34691
    *(int32_t *)v14 = 43;
    g5 = a2;
    v3 = v14;
    // 0x1e34697
    g8 = *(int32_t *)(v3 + 4);
    g3 = *(int32_t *)(v3 + 8);
    return g2;
}

// Address range: 0x1e3469d - 0x1e3476a
int32_t function_1e3469d(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e34765
        return g2;
    }
    // 0x1e346aa
    g6 = a2;
    int32_t v1; // 0x1e346df
    if (g311 != a2) {
        // 0x1e346c4
        if (g312 != a2) {
            // 0x1e346da
            g2 = g316;
            v1 = g316;
        } else {
            // 0x1e346d3
            g2 = g315;
            v1 = g315;
        }
    } else {
        // 0x1e346b6
        g2 = g314;
        v1 = g314;
    }
    // 0x1e346df
    g5 = v1;
    int32_t v2 = *(int32_t *)a2; // 0x1e346e7
    g2 = v2;
    g5 = g206;
    function_1e2e6c7(v2);
    g2 = g317;
    g5 = g317;
    int32_t result; // 0x1e34757
    if (g317 != 3) {
        // 0x1e34757
        result = g389;
        g2 = result;
        g5 = result;
    } else {
        // 0x1e3470e
        g2 = g317;
        g5 = g317;
        g5 = g269;
        g2 = *(int32_t *)g269;
        g5 = g367;
        int3_t v3; // fpu_stat_TOP
        g11 = v3 + 1;
        int32_t v4 = function_1e25763(44); // 0x1e34744
        g2 = v4;
        g5 = g391;
        int32_t v5 = function_1e2fbc7(v4, (int32_t)&g708); // 0x1e34750
        g2 = v5;
        result = v5;
    }
    // 0x1e34765
    return result;
}

// Address range: 0x1e3476a - 0x1e34850
int32_t function_1e3476a(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e3484c
        return g2;
    }
    // 0x1e34776
    g2 = g321;
    if (g318 != a2) {
        char * v1 = (char *)(g321 + 6); // 0x1e347ba
        char v2 = *v1; // 0x1e347ba
        if (g319 != a2) {
            // 0x1e347ba
            *v1 = v2 | 4;
            g5 = g323;
        } else {
            // 0x1e347a7
            *v1 = v2 | 2;
            g5 = g322;
        }
    } else {
        char * v3 = (char *)(g321 + 6); // 0x1e3478e
        *v3 = *v3 | 1;
        g5 = g321;
    }
    // 0x1e347cb
    g2 = g325;
    g5 = 0;
    int32_t * v4;
    if (*(int32_t *)(g325 + 78) != 0) {
        goto lab_0x1e347e5;
    } else {
        // 0x1e347db
        if (*(int32_t *)(g325 + 90) != 0) {
            goto lab_0x1e347e5;
        } else {
            // 0x1e347e0
            if (*(int32_t *)(g325 + 82) == 0) {
                v4 = &g382;
                goto lab_0x1e3480c;
            } else {
                goto lab_0x1e347e5;
            }
        }
    }
  lab_0x1e347e5:
    // 0x1e347e5
    g2 = g325;
    if (*(int32_t *)(g325 + 82) != 0) {
        v4 = &g382;
        goto lab_0x1e3480c;
    } else {
        v4 = &g389;
        goto lab_0x1e3480c;
    }
  lab_0x1e3480c:;
    int32_t v5 = *v4;
    g2 = v5;
    g5 = v5;
    g2 = *(int32_t *)v5;
    int32_t v6 = *(int32_t *)a2; // 0x1e34813
    g2 = v6;
    g5 = g206;
    function_1e2e6c7(v6);
    g2 = g324;
    g5 = g324;
    if (g324 == 3) {
        // 0x1e3483a
        g2 = g324;
        g5 = g324;
    }
    // 0x1e3484c
    return g324;
}

// Address range: 0x1e34850 - 0x1e34921
int32_t function_1e34850(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e3491c
        return g2;
    }
    // 0x1e3485d
    g2 = g332;
    int32_t v1; // 0x1e348b2
    if (g326 != a2) {
        char * v2 = (char *)(g332 + 6); // 0x1e348a1
        char v3 = *v2; // 0x1e348a1
        if (g327 != a2) {
            // 0x1e348a1
            *v2 = v3 | 4;
            g5 = g334;
            v1 = g334;
        } else {
            // 0x1e3488e
            *v2 = v3 | 2;
            g5 = g333;
            v1 = g333;
        }
    } else {
        char * v4 = (char *)(g332 + 6); // 0x1e34875
        *v4 = *v4 | 1;
        g5 = g332;
        v1 = g332;
    }
    // 0x1e348b2
    g6 = *(int32_t *)v1;
    int32_t v5 = *(int32_t *)a2; // 0x1e348b8
    g2 = v5;
    g5 = g206;
    function_1e2e6c7(v5);
    g2 = g338;
    g5 = g338;
    int32_t result; // 0x1e3490e
    if (g338 != 3) {
        // 0x1e3490e
        result = g389;
        g2 = result;
        g5 = result;
    } else {
        // 0x1e348df
        g2 = g383;
        g5 = g383;
        g5 = g236;
        int32_t v6 = *(int32_t *)g236; // 0x1e348f7
        g2 = v6;
        g5 = g338;
        result = v6;
    }
    // 0x1e3491c
    return result;
}

// Address range: 0x1e34921 - 0x1e349f2
int32_t function_1e34921(int32_t a1, int32_t a2) {
    if (a1 != 63) {
        // 0x1e349ed
        return g2;
    }
    // 0x1e3492e
    g2 = g335;
    int32_t v1; // 0x1e34983
    if (g329 != a2) {
        char * v2 = (char *)(g335 + 6); // 0x1e34972
        char v3 = *v2; // 0x1e34972
        if (g330 != a2) {
            // 0x1e34972
            *v2 = v3 | 4;
            g5 = g337;
            v1 = g337;
        } else {
            // 0x1e3495f
            *v2 = v3 | 2;
            g5 = g336;
            v1 = g336;
        }
    } else {
        char * v4 = (char *)(g335 + 6); // 0x1e34946
        *v4 = *v4 | 1;
        g5 = g335;
        v1 = g335;
    }
    // 0x1e34983
    g6 = *(int32_t *)v1;
    int32_t v5 = *(int32_t *)a2; // 0x1e34989
    g2 = v5;
    g5 = g206;
    function_1e2e6c7(v5);
    g2 = g339;
    g5 = g339;
    int32_t result; // 0x1e349df
    if (g339 != 3) {
        // 0x1e349df
        result = g389;
        g2 = result;
        g5 = result;
    } else {
        // 0x1e349b0
        g2 = g383;
        g5 = g383;
        g5 = g237;
        int32_t v6 = *(int32_t *)g237; // 0x1e349c8
        g2 = v6;
        g5 = g339;
        result = v6;
    }
    // 0x1e349ed
    return result;
}

// Address range: 0x1e349f2 - 0x1e34a5c
int32_t function_1e349f2(int32_t a1) {
    int32_t v1; // esi
    int32_t v2 = &v1; // 0x1e349f7
    if (a1 != 63) {
        // 0x1e34a58
        return g2;
    }
    // 0x1e349fa
    g2 = g341;
    int32_t v3; // 0x1e34a3a
    if (*(int32_t *)(g341 + 78) == 0) {
        // 0x1e34a06
        if (*(int32_t *)(g341 + 90) == 0) {
            // 0x1e34a0b
            if (*(int32_t *)(g341 + 82) == 0) {
                // 0x1e34a10
                g2 = *(int32_t *)g341;
                g5 = g341;
                int32_t v4 = function_1e25763(93); // 0x1e34a29
                g2 = v4;
                g5 = g391;
                g2 = function_1e2fbc7(v4, (int32_t)&g708);
                v3 = g9;
            } else {
                v3 = v2;
            }
        } else {
            v3 = v2;
        }
    } else {
        v3 = v2;
    }
    // 0x1e34a3a
    g5 = *(int32_t *)(v3 + 12);
    *(int32_t *)(v3 - 4) = 0;
    int32_t v5 = *(int32_t *)g5; // 0x1e34a40
    g2 = v5;
    *(int32_t *)(v3 - 8) = v5;
    g5 = g206;
    g2 = function_1e2e6c7((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 1;
    int32_t result = function_1e32b77((int32_t)&g708); // 0x1e34a53
    g2 = result;
    // 0x1e34a58
    return result;
}

// Address range: 0x1e34a5c - 0x1e34ac0
int32_t function_1e34a5c(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = &v1;
    int32_t v2; // bp-68
    int32_t v3 = &v2; // 0x1e34a5f
    int32_t result; // 0x1e34abd
    if (a1 != 63) {
        // 0x1e34a5c
        result = g2;
    } else {
        // 0x1e34a6a
        g5 = a2;
        g6 = *(int32_t *)a2;
        g5 = g206;
        g2 = function_1e2e6c7(g2);
        int32_t v4 = function_1e25763(80); // 0x1e34a87
        g2 = v4;
        g5 = v3;
        g2 = function_1e3d7a0(v3, (char *)v4);
        g5 = g391;
        int32_t v5 = function_1e2fbc7(v3, 0x40000000); // 0x1e34aa8
        g2 = v5;
        g5 = g8;
        result = v5;
    }
    // 0x1e34ab8
    return result;
}

// Address range: 0x1e34ac0 - 0x1e34b0d
int32_t function_1e34ac0(int32_t result2, int32_t a2) {
    // 0x1e34ac0
    g2 = result2;
    if (result2 == 62) {
        int32_t result = function_1e32b77(0); // 0x1e34ad2
        g2 = result;
        // 0x1e34b0a
        return result;
    }
    if (result2 != 63) {
        // 0x1e34b0a
        return result2;
    }
    // 0x1e34ad9
    g2 = g262;
    g5 = 0;
    if (*(int32_t *)(g262 + 78) != 0) {
        // 0x1e34aef
        g5 = 1;
        goto lab_0x1e34af4;
    } else {
        // 0x1e34ae5
        if (*(int32_t *)(g262 + 90) != 0) {
            // 0x1e34aef
            g5 = 1;
            goto lab_0x1e34af4;
        } else {
            // 0x1e34aea
            if (*(int32_t *)(g262 + 82) == 0) {
                goto lab_0x1e34af4;
            } else {
                // 0x1e34aef
                g5 = 1;
                goto lab_0x1e34af4;
            }
        }
    }
  lab_0x1e34af4:
    // 0x1e34af4
    g5 = a2;
    int32_t v1 = *(int32_t *)a2; // 0x1e34af9
    g2 = v1;
    g5 = g206;
    int32_t result3 = function_1e2e6c7(v1); // 0x1e34b05
    g2 = result3;
    // 0x1e34b0a
    return result3;
}

// Address range: 0x1e34b0d - 0x1e34c17
int32_t function_1e34b0d(int32_t a1, int32_t a2) {
    // 0x1e34b0d
    g2 = a1;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e34b14
    if (a1 == 63) {
        // 0x1e34b34
        g4 = 0;
        g6 = *(int32_t *)a2;
        g5 = g206;
        g2 = function_1e2e6c7(63);
        int32_t v3 = function_1e25763(81); // 0x1e34b51
        g2 = v3;
        g5 = v2;
        g2 = function_1e3d7a0(v2, (char *)v3);
        g5 = g391;
        g2 = function_1e2fbc7(v2, 0x40000000);
        g5 = g345;
        g2 = *(int32_t *)g345;
        *(char *)(g8 + 5) = (char)g4;
        g5 = g390;
        g5 = g8;
        g11++;
    } else {
        if (a1 == 64) {
            if (a2 != 0) {
                int32_t v4 = function_1e25763(82); // 0x1e34bc4
                g2 = v4;
                g5 = v2;
                function_1e3d7a0(v2, (char *)v4);
            } else {
                int32_t v5 = function_1e25763(45); // 0x1e34bab
                g2 = v5;
                g5 = v2;
                function_1e3d7a0(v2, (char *)v5);
            }
            // 0x1e34bd6
            g2 = v2;
            g5 = g391;
            function_1e2fbc7(v2, 0x40000000);
            g2 = g345;
            g5 = g344;
            *(char *)(g344 + 5) = 1;
        } else {
            if (a1 == 1024) {
                // 0x1e34c05
                g2 = g344;
                *(char *)(g344 + 5) = 0;
            }
        }
    }
    // 0x1e34c0e
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e34c17 - 0x1e35304
int32_t function_1e34c17(int32_t a1) {
    // 0x1e34c17
    g2 = a1;
    int32_t v1 = g4; // 0x1e34c21
    int32_t v2; // esi
    int32_t v3 = v2; // 0x1e34c22
    int32_t v4 = g6; // 0x1e34c23
    int32_t v5 = v4; // bp-76
    int32_t v6; // bp-92
    if (a1 == 60) {
        // 0x1e34c34
        g2 = g358;
        g8 = 0;
        if (*(int32_t *)(g358 + 6) == 0) {
            // 0x1e34ca4
            g2 = g293;
            g5 = g293;
            // 0x1e352fb
            return g2;
        }
        // 0x1e34c40
        g2 = g206;
        g5 = g206;
        int32_t v7 = function_1e26339(1022, 0, v4, v3, v1); // 0x1e34c51
        g2 = v7;
        if (v7 != 0) {
            // 0x1e34c5e
            g2 = g387;
            g5 = g387;
            g11++;
            v6 = 16;
            int32_t v8 = *(int32_t *)(g206 + 266); // 0x1e34c79
            g5 = v8;
            g2 = *(int32_t *)v8;
            int32_t v9 = function_1e25763(177); // 0x1e34c8e
            g2 = v9;
            g5 = g392;
            g2 = function_1e2fbc7(v9, (int32_t)&g708);
        }
        // 0x1e352fb
        return g2;
    }
    if (a1 != 63) {
        // 0x1e352fb
        return g2;
    }
    // 0x1e34cbb
    if (g207 != 0) {
        // 0x1e34cc5
        g2 = g346;
        g5 = g279;
        v6 = 56;
        g2 = *(int32_t *)g279;
        // 0x1e352fb
        return g2;
    }
    // 0x1e34ce8
    g2 = g206;
    g8 = 0;
    int32_t * v10 = (int32_t *)(g206 + 370); // 0x1e34cef
    int32_t v11; // 0x1e34d2b
    int32_t * v12;
    if (*v10 == 0) {
        // 0x1e34ce8
        v12 = &v5;
        v11 = g357;
    } else {
        // 0x1e34cf7
        g2 = g357;
        g4 = *(int32_t *)g357;
        g5 = g358;
        v6 = 20;
        g2 = *(int32_t *)g358;
        v12 = &v6;
        v11 = g357;
    }
    int32_t v13 = (int32_t)v12; // 0x1e352c6
    g2 = v11;
    g5 = 0;
    if (*(int32_t *)(v11 + 78) != 0) {
        goto lab_0x1e352b8;
    } else {
        // 0x1e34d22
        if (*(int32_t *)(v11 + 90) != 0) {
            goto lab_0x1e352b8;
        } else {
            // 0x1e34d2b
            if (*(int32_t *)(v11 + 82) != 0) {
                goto lab_0x1e352b8;
            } else {
                // 0x1e34d34
                g2 = g358;
                if (*(int32_t *)(g358 + 78) != 0) {
                    goto lab_0x1e35259;
                } else {
                    // 0x1e34d42
                    if (*(int32_t *)(g358 + 90) != 0) {
                        goto lab_0x1e35259;
                    } else {
                        // 0x1e34d4b
                        if (*(int32_t *)(g358 + 82) != 0) {
                            goto lab_0x1e35259;
                        } else {
                            // 0x1e34d54
                            g2 = g206;
                            int32_t * v14 = (int32_t *)(g206 + 338); // 0x1e34d59
                            if (*v14 != 0) {
                                // 0x1e34d61
                                g2 = g385;
                                g5 = g206;
                                *v14 = *v14 - 1;
                                // 0x1e352fb
                                return g2;
                            }
                            // 0x1e34d80
                            g2 = g206;
                            int32_t v15; // 0x1e34e78
                            if (*v10 == 0) {
                                // 0x1e34d8e
                                *(int32_t *)(v13 - 4) = *(int32_t *)(g206 + 306);
                                int32_t v16 = function_1e32b02(v5); // 0x1e34d94
                                g2 = v16;
                                *(int32_t *)(g9 - 4) = v16;
                                *(int32_t *)(g9 - 8) = 0;
                                *(int32_t *)(g9 - 12) = 94;
                                int32_t v17 = function_1e25763((int32_t)&g708); // 0x1e34d9e
                                g2 = v17;
                                g5 = g9 + 16;
                                *(int32_t *)(g9 - 4) = v17;
                                *(int32_t *)(g9 - 8) = g5;
                                g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
                                g5 = g9 + 24;
                                *(int32_t *)(g9 + 8) = 0x40000000;
                                *(int32_t *)(g9 + 4) = g5;
                                g5 = g391;
                                g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                                v15 = g206;
                            } else {
                                v15 = g206;
                            }
                            int32_t v18 = v15 + 334; // 0x1e34dcc
                            g5 = v18;
                            int32_t * v19 = (int32_t *)v18; // 0x1e34dd2
                            int32_t v20 = *v19; // 0x1e34dd2
                            g2 = v20;
                            if (v20 == 0) {
                                // 0x1e34e78
                                g2 = v15;
                                g5 = v15;
                                int32_t v21 = *(int32_t *)(v15 + 326) - 1; // 0x1e34e89
                                g2 = v21;
                                *(int32_t *)(g9 - 4) = v21;
                                g2 = function_1e2e754((int32_t)&g708);
                                g5 = g206;
                                int32_t v22 = *(int32_t *)(g206 + 218); // 0x1e34e96
                                g2 = v22;
                                int32_t v23 = v22 - *(int32_t *)(g206 + 214); // 0x1e34e9c
                                g2 = v23;
                                if (v23 != -1) {
                                    goto lab_0x1e34ebe;
                                } else {
                                    // 0x1e34ea7
                                    if (*(int32_t *)(g206 + 326) != 0) {
                                        goto lab_0x1e34ebe;
                                    } else {
                                        // 0x1e34eb0
                                        g2 = g358;
                                        *(int32_t *)(g358 + 6) = 1;
                                        goto lab_0x1e34eda;
                                    }
                                }
                            } else {
                                int32_t v24 = v20 - 1; // 0x1e34ddc
                                g2 = v24;
                                *v19 = v24;
                                g5 = g384;
                                g2 = *(int32_t *)g384;
                                g11++;
                                g5 = g206;
                                int32_t v25 = *(int32_t *)(g206 + 218); // 0x1e34df2
                                g2 = v25;
                                if (v25 == 0) {
                                    // 0x1e34e25
                                    *(int32_t *)(g9 - 4) = -0x40800000;
                                    *(int32_t *)(g9 - 8) = 0;
                                    *(int32_t *)(g9 - 12) = 97;
                                    int32_t v26 = function_1e25763((int32_t)&g708); // 0x1e34e2e
                                    g2 = v26;
                                    *(int32_t *)(g9 - 4) = v26;
                                    g5 = g391;
                                    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                                } else {
                                    // 0x1e34dfc
                                    *(int32_t *)(g9 - 4) = -0x40800000;
                                    if (v25 == 1) {
                                        // 0x1e34e44
                                        *(int32_t *)(g9 - 8) = 0;
                                        *(int32_t *)(g9 - 12) = 98;
                                        int32_t v27 = function_1e25763((int32_t)&g708); // 0x1e34e4d
                                        g2 = v27;
                                        *(int32_t *)(g9 - 4) = v27;
                                        g5 = g391;
                                        g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                                    } else {
                                        // 0x1e34e01
                                        *(int32_t *)(g9 - 8) = 0;
                                        int32_t * v28 = (int32_t *)(g9 - 12); // 0x1e34e63
                                        if (v25 == 2) {
                                            // 0x1e34e63
                                            *v28 = 99;
                                            int32_t v29 = function_1e25763((int32_t)&g708); // 0x1e34e65
                                            g2 = v29;
                                            *(int32_t *)(g9 - 4) = v29;
                                            g5 = g391;
                                            g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                                        } else {
                                            // 0x1e34e0d
                                            *v28 = 100;
                                            int32_t v30 = function_1e25763((int32_t)&g708); // 0x1e34e0f
                                            g2 = v30;
                                            *(int32_t *)(g9 - 4) = v30;
                                            g5 = g391;
                                            g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
                                        }
                                    }
                                }
                                goto lab_0x1e34ee8;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1e352b8:
    // 0x1e352b8
    g2 = g385;
    g5 = g385;
    g11++;
    *(int32_t *)(v13 - 4) = 0;
    g5 = g357;
    *(int32_t *)(v13 - 8) = 19;
    g2 = *(int32_t *)g5;
    *(int32_t *)(v13 - 12) = -0x40800000;
    *(int32_t *)(v13 - 16) = 0;
    *(int32_t *)(v13 - 20) = 96;
    int32_t v31 = function_1e25763(v5); // 0x1e352dd
    g2 = v31;
    *(int32_t *)(g9 - 4) = v31;
    g5 = g391;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g5 = g384;
    // 0x1e352fb
    return g2;
  lab_0x1e35259:
    // 0x1e35259
    g2 = g385;
    v2 = 0;
    g5 = g385;
    g11++;
    *(int32_t *)(v13 - 4) = 0;
    g2 = g358;
    *(int32_t *)(v13 - 8) = 20;
    *(int32_t *)(v13 - 12) = v2;
    g5 = g357;
    *(int32_t *)(v13 - 16) = 19;
    g2 = *(int32_t *)g5;
    *(int32_t *)(v13 - 20) = 0x40000000;
    *(int32_t *)(v13 - 24) = v2;
    *(int32_t *)(v13 - 28) = 95;
    int32_t v32 = function_1e25763(v5); // 0x1e3528c
    g2 = v32;
    *(int32_t *)(g9 - 4) = v32;
    g5 = g391;
    g2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g5 = g384;
    g5 = g206;
    int32_t * v33 = (int32_t *)(g206 + 350); // 0x1e352b0
    *v33 = *v33 - 1;
    // 0x1e352fb
    return g2;
  lab_0x1e34ebe:
    // 0x1e34ebe
    g2 = g206;
    *(int32_t *)(g9 - 4) = 0;
    g5 = g2;
    *(int32_t *)(g9 - 8) = 1021;
    g5 = g358;
    *(int32_t *)(g358 + 6) = 0;
    goto lab_0x1e34eda;
  lab_0x1e34ee8:
    // 0x1e34ee8
    v2 = 0;
    g6 = 20;
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g9 - 12) = v2;
    *(int32_t *)(g9 - 16) = g6;
    *(int32_t *)(g9 - 20) = v2;
    *(int32_t *)(g9 - 24) = g6;
    *(int32_t *)(g9 - 28) = v2;
    *(int32_t *)(g9 - 32) = g6;
    *(int32_t *)(g9 - 36) = v2;
    *(int32_t *)(g9 - 40) = g6;
    *(int32_t *)(g9 - 44) = v2;
    *(int32_t *)(g9 - 48) = g6;
    *(int32_t *)(g9 - 52) = v2;
    *(int32_t *)(g9 - 56) = g6;
    *(int32_t *)(g9 - 60) = v2;
    *(int32_t *)(g9 - 64) = g6;
    *(int32_t *)(g9 - 68) = v2;
    *(int32_t *)(g9 - 72) = g6;
    *(int32_t *)(g9 - 76) = v2;
    *(int32_t *)(g9 - 80) = g6;
    *(int32_t *)(g9 - 84) = v2;
    *(int32_t *)(g9 - 88) = g6;
    *(int32_t *)(g9 - 92) = v2;
    *(int32_t *)(g9 - 96) = g6;
    *(int32_t *)(g9 - 100) = v2;
    *(int32_t *)(g9 - 104) = g6;
    *(int32_t *)(g9 - 108) = v2;
    *(int32_t *)(g9 - 112) = g6;
    *(int32_t *)(g9 - 116) = v2;
    *(int32_t *)(g9 - 120) = g6;
    *(int32_t *)(g9 - 124) = v2;
    *(int32_t *)(g9 - 128) = g6;
    *(int32_t *)(g9 - 132) = v2;
    *(int32_t *)(g9 - 136) = g6;
    *(int32_t *)(g9 - 140) = v2;
    *(int32_t *)(g9 - 144) = g6;
    *(int32_t *)(g9 - 148) = v2;
    *(int32_t *)(g9 - 152) = g6;
    *(int32_t *)(g9 - 156) = v2;
    *(int32_t *)(g9 - 160) = g6;
    *(int32_t *)(g9 - 164) = v2;
    *(int32_t *)(g9 - 168) = g6;
    *(int32_t *)(g9 - 172) = v2;
    *(int32_t *)(g9 - 176) = g6;
    *(int32_t *)(g9 - 180) = v2;
    *(int32_t *)(g9 - 184) = g6;
    *(int32_t *)(g9 - 188) = v2;
    *(int32_t *)(g9 - 192) = g6;
    *(int32_t *)(g9 - 196) = v2;
    *(int32_t *)(g9 - 200) = g6;
    *(int32_t *)(g9 - 204) = v2;
    *(int32_t *)(g9 - 208) = g6;
    *(int32_t *)(g9 - 212) = v2;
    *(int32_t *)(g9 - 216) = g6;
    *(int32_t *)(g9 - 220) = v2;
    *(int32_t *)(g9 - 224) = g6;
    *(int32_t *)(g9 - 228) = v2;
    *(int32_t *)(g9 - 232) = g6;
    *(int32_t *)(g9 - 236) = v2;
    *(int32_t *)(g9 - 240) = g6;
    *(int32_t *)(g9 - 244) = v2;
    *(int32_t *)(g9 - 248) = g6;
    *(int32_t *)(g9 - 252) = v2;
    *(int32_t *)(g9 - 256) = g6;
    *(int32_t *)(g9 - 260) = v2;
    *(int32_t *)(g9 - 264) = g6;
    *(int32_t *)(g9 - 268) = v2;
    *(int32_t *)(g9 - 272) = g6;
    *(int32_t *)(g9 - 276) = v2;
    *(int32_t *)(g9 - 280) = g6;
    *(int32_t *)(g9 - 284) = v2;
    *(int32_t *)(g9 - 288) = g6;
    *(int32_t *)(g9 - 292) = v2;
    *(int32_t *)(g9 - 296) = g6;
    *(int32_t *)(g9 - 300) = v2;
    *(int32_t *)(g9 - 304) = g6;
    *(int32_t *)(g9 - 308) = v2;
    *(int32_t *)(g9 - 312) = g6;
    *(int32_t *)(g9 - 316) = v2;
    g4 = 1024;
    *(int32_t *)(g9 - 320) = 1024;
    g2 = g269;
    g5 = g269;
    g2 = *(int32_t *)g269;
    *(int32_t *)(g9 - 324) = v2;
    *(int32_t *)(g9 - 328) = g4;
    g2 = function_1e34b0d((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    g5 = g345;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g284 + 6) = g8;
    *(int32_t *)(g321 + 6) = g8;
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = 34;
    *(int32_t *)(g322 + 6) = g8;
    *(int32_t *)(g323 + 6) = g8;
    g2 = g324;
    *(int32_t *)(g324 + 6) = g8;
    g5 = g356;
    *(int32_t *)(g9 - 4) = g8;
    g5 = g355;
    *(int32_t *)(g9 - 8) = 34;
    g2 = *(int32_t *)g5;
    *(int32_t *)(g9 - 12) = g8;
    g5 = g213;
    *(int32_t *)(g9 - 16) = g4;
    *(int32_t *)(g9 - 20) = g8;
    g5 = g222;
    *(int32_t *)(g9 - 24) = g4;
    *(int32_t *)(g9 - 28) = g8;
    g5 = g236;
    *(int32_t *)(g9 - 32) = g4;
    *(int32_t *)(g9 - 36) = g8;
    g5 = g237;
    *(int32_t *)(g9 - 40) = g4;
    *(int32_t *)(g9 - 44) = g8;
    g5 = g244;
    *(int32_t *)(g9 - 48) = g4;
    *(int32_t *)(g9 - 52) = g8;
    g5 = g296;
    *(int32_t *)(g9 - 56) = g4;
    *(int32_t *)(g9 - 60) = g8;
    g5 = g297;
    *(int32_t *)(g9 - 64) = g4;
    *(int32_t *)(g9 - 68) = g8;
    g5 = g298;
    *(int32_t *)(g9 - 72) = g4;
    *(int32_t *)(g9 - 76) = g8;
    g5 = g303;
    *(int32_t *)(g9 - 80) = g4;
    *(int32_t *)(g9 - 84) = g8;
    g5 = g304;
    *(int32_t *)(g9 - 88) = g4;
    *(int32_t *)(g9 - 92) = g8;
    g5 = g305;
    *(int32_t *)(g9 - 96) = g4;
    *(int32_t *)(g9 - 100) = g8;
    g5 = g307;
    *(int32_t *)(g9 - 104) = g4;
    *(int32_t *)(g9 - 108) = g8;
    g5 = g308;
    *(int32_t *)(g9 - 112) = g4;
    *(int32_t *)(g9 - 116) = g8;
    g5 = g309;
    *(int32_t *)(g9 - 120) = g4;
    g5 = g358;
    int32_t v34 = g8; // 0x1e351e2
    if (*(int32_t *)(g358 + 6) == v34) {
        // 0x1e351f6
        g5 = g325;
        g2 = 0;
        *(int32_t *)(g9 - 124) = 0;
        *(int32_t *)(g5 + 6) = g2;
    } else {
        // 0x1e351e7
        g2 = g325;
        *(int32_t *)(g9 - 124) = v34;
        *(int32_t *)(g2 + 6) = 32;
    }
    // 0x1e35202
    *(int32_t *)(g9 - 4) = 66;
    function_1e38d82((int32_t)&g708, (int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    g2 = g206;
    *(int32_t *)(g9 - 8) = 1012;
    g5 = g302;
    if (*(int32_t *)(g302 + 78) == g8) {
        // 0x1e35227
        if (*(int32_t *)(g302 + 90) == g8) {
            // 0x1e3522c
            if (*(int32_t *)(g302 + 82) == g8) {
                // 0x1e35231
                g2 = g206;
                *(int32_t *)(g206 + 306) = 0x61a8;
                // 0x1e352fb
                return g2;
            }
        }
    }
    // 0x1e35245
    *(int32_t *)(g9 - 12) = 0;
    g2 = g302;
    *(int32_t *)(g9 - 16) = 20;
    g5 = g2;
    // 0x1e352fb
    return g2;
  lab_0x1e34eda:
    // 0x1e34eda
    g2 = g385;
    g5 = g385;
    g11++;
    goto lab_0x1e34ee8;
}

// Address range: 0x1e35304 - 0x1e353ad
int32_t function_1e35304(int32_t a1) {
    if (a1 != 63) {
        // 0x1e353a9
        return g2;
    }
    // 0x1e35310
    g2 = g357;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e3532f
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e35334
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e353a9
                return g357;
            }
        }
    }
    // 0x1e35339
    g2 = g247;
    g5 = g247;
    int32_t result = *(int32_t *)g247; // 0x1e3537a
    g2 = result;
    g5 = g272;
    g5 = g269;
    g5 = g386;
    // 0x1e353a9
    return result;
}

// Address range: 0x1e353ad - 0x1e353ed
int32_t function_1e353ad(int32_t a1) {
    if (a1 != 63) {
        // 0x1e353ea
        return g2;
    }
    // 0x1e353b4
    g2 = g347;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e353c0
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e353c5
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e353ea
                return g347;
            }
        }
    }
    // 0x1e353ca
    g2 = g348;
    g2 = *(int32_t *)g348;
    g5 = g386;
    int32_t result = *(int32_t *)g386; // 0x1e353e3
    g2 = result;
    // 0x1e353ea
    return result;
}

// Address range: 0x1e353ed - 0x1e3542d
int32_t function_1e353ed(int32_t a1) {
    if (a1 != 63) {
        // 0x1e3542a
        return g2;
    }
    // 0x1e353f4
    g2 = g347;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e35400
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e35405
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e3542a
                return g347;
            }
        }
    }
    // 0x1e3540a
    g2 = g349;
    g2 = *(int32_t *)g349;
    g5 = g386;
    int32_t result = *(int32_t *)g386; // 0x1e35423
    g2 = result;
    // 0x1e3542a
    return result;
}

// Address range: 0x1e3542d - 0x1e3546d
int32_t function_1e3542d(int32_t a1) {
    if (a1 != 63) {
        // 0x1e3546a
        return g2;
    }
    // 0x1e35434
    g2 = g347;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e35440
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e35445
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e3546a
                return g347;
            }
        }
    }
    // 0x1e3544a
    g2 = g350;
    g2 = *(int32_t *)g350;
    g5 = g386;
    int32_t result = *(int32_t *)g386; // 0x1e35463
    g2 = result;
    // 0x1e3546a
    return result;
}

// Address range: 0x1e3546d - 0x1e354ad
int32_t function_1e3546d(int32_t a1) {
    if (a1 != 63) {
        // 0x1e354aa
        return g2;
    }
    // 0x1e35474
    g2 = g347;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e35480
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e35485
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e354aa
                return g347;
            }
        }
    }
    // 0x1e3548a
    g2 = g351;
    g2 = *(int32_t *)g351;
    g5 = g386;
    int32_t result = *(int32_t *)g386; // 0x1e354a3
    g2 = result;
    // 0x1e354aa
    return result;
}

// Address range: 0x1e354ad - 0x1e354ed
int32_t function_1e354ad(int32_t a1) {
    if (a1 != 63) {
        // 0x1e354ea
        return g2;
    }
    // 0x1e354b4
    g2 = g347;
    g5 = 0;
    if (*(int32_t *)(g347 + 78) == 0) {
        // 0x1e354c0
        if (*(int32_t *)(g347 + 90) == 0) {
            // 0x1e354c5
            if (*(int32_t *)(g347 + 82) == 0) {
                // 0x1e354ea
                return g347;
            }
        }
    }
    // 0x1e354ca
    g2 = g352;
    g2 = *(int32_t *)g352;
    g5 = g386;
    int32_t result = *(int32_t *)g386; // 0x1e354e3
    g2 = result;
    // 0x1e354ea
    return result;
}

// Address range: 0x1e354ed - 0x1e3551e
int32_t function_1e354ed(int32_t a1, int32_t a2) {
    if (a1 != 60) {
        // 0x1e3551a
        return g2;
    }
    // 0x1e354f5
    g5 = a2;
    int32_t * v1 = (int32_t *)(a2 + 6); // 0x1e354fc
    if (*v1 != 0) {
        // 0x1e35514
        *v1 = 0;
    } else {
        // 0x1e35501
        g2 = *(int32_t *)a2;
        *v1 = 1;
    }
    // 0x1e3551a
    return g2;
}

// Address range: 0x1e3551e - 0x1e35535
int32_t function_1e3551e(int32_t a1, int32_t a2) {
    int32_t result; // 0x1e35532
    if (a1 != 63) {
        // 0x1e3551e
        result = g2;
    } else {
        // 0x1e35525
        g5 = a2;
        int32_t v1 = *(int32_t *)a2; // 0x1e35529
        g2 = v1;
        result = v1;
    }
    // 0x1e35532
    return result;
}

// Address range: 0x1e35535 - 0x1e355ae
int32_t function_1e35535(void) {
    // 0x1e35535
    g4 = g355;
    g5 = g355;
    int32_t v1 = *(int32_t *)g355; // 0x1e35545
    g2 = v1;
    int32_t v2 = 37; // bp-84
    g6 = *(int32_t *)v1;
    int32_t v3; // 0x1e355a7
    int32_t result; // 0x1e35595
    if (v1 < 9) {
        // 0x1e35554
        g5 = g355;
        int32_t v4 = 1; // bp-96
        int32_t v5 = &v4; // 0x1e3555f
        int32_t v6 = *(int32_t *)(4 * v1 + (int32_t)&g421); // 0x1e35561
        g2 = function_1e25763(v6);
        int32_t v7 = function_1e25763(83); // 0x1e35572
        g2 = v7;
        g5 = v5;
        g2 = function_1e3d7a0(v5, (char *)v7);
        g5 = g392;
        result = function_1e2fbc7(v5, 0x41000000);
        g2 = result;
        g5 = g360;
        g11++;
        v3 = g9;
    } else {
        result = v1;
        v3 = &v2;
    }
    // 0x1e355a7
    g6 = *(int32_t *)v3;
    g4 = *(int32_t *)(v3 + 8);
    return result;
}

// Address range: 0x1e355ae - 0x1e35a2d
int32_t function_1e355ae(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e355ae
    g2 = g325;
    if (*(int32_t *)(g325 + 6) != 0) {
        // 0x1e35a29
        g8 = *(int32_t *)g9;
        return g2;
    }
    // 0x1e355be
    g2 = a1;
    int32_t v1; // 0x1e3562b
    int32_t v2; // 0x1e356b3
    int32_t v3; // 0x1e356d4
    int32_t v4; // 0x1e3573f
    int32_t v5; // 0x1e35769
    int32_t v6; // 0x1e357a5
    int32_t v7; // 0x1e357cf
    int32_t v8; // 0x1e3583c
    int32_t v9; // 0x1e35866
    if (a1 > 49) {
        if (a1 > 190) {
            goto lab_0x1e35a1f;
        } else {
            if (a1 == 190) {
                int32_t v10 = g424; // 0x1e3595b
                if (v10 == 13) {
                    int32_t v11 = function_1e392c2((int32_t)"drain_kicker"); // 0x1e35969
                    g2 = v11;
                    g423 = (char *)v11;
                    if (v11 == -1) {
                        // 0x1e35978
                        g423 = NULL;
                        // 0x1e35a29
                        g8 = *(int32_t *)g9;
                        return g2;
                    }
                    // 0x1e35987
                    g8 = 0;
                    int32_t v12 = function_1e39b58(*(int32_t *)&g620, v11, 12); // 0x1e35992
                    g2 = v12;
                    g423 = (char *)v12;
                    int32_t v13 = g8; // 0x1e3599c
                    if (v12 != v13) {
                        // 0x1e359a4
                        g2 = g325;
                        *(int32_t *)(g325 + 6) = 19;
                        g2 = function_1e38d82(66, v13);
                        g424 = g8;
                    }
                    // 0x1e35a29
                    g8 = *(int32_t *)g9;
                    return g2;
                }
                if (v10 == 46) {
                    int32_t v14 = function_1e392c2((int32_t)"drain_kicker"); // 0x1e359ce
                    g2 = v14;
                    g423 = (char *)v14;
                    int32_t v15 = v14 + 1; // 0x1e359d8
                    if (v15 == 0) {
                        // 0x1e359dd
                        g423 = NULL;
                        // 0x1e35a29
                        g8 = *(int32_t *)g9;
                        return g2;
                    }
                    // 0x1e359e9
                    g2 = v15;
                    g8 = 0;
                    int32_t v16 = function_1e39b58(*(int32_t *)&g620, v15, 12); // 0x1e359f5
                    g2 = v16;
                    g423 = (char *)v16;
                    int32_t v17 = g8; // 0x1e359ff
                    if (v16 != v17) {
                        // 0x1e35a03
                        g2 = g325;
                        *(int32_t *)(g325 + 6) = 19;
                        g2 = function_1e38d82(66, v17);
                        g424 = g8;
                    }
                    // 0x1e35a29
                    g8 = *(int32_t *)g9;
                    return g2;
                }
                goto lab_0x1e35a1f;
            } else {
                int32_t v18 = a1 - 65; // 0x1e355e4
                g2 = v18;
                g689 = v18;
                switch (a1) {
                    case 65: {
                        // 0x1e3562b
                        v1 = g424;
                        if (v1 == 5) {
                            goto lab_0x1e3565c;
                        } else {
                            if (v1 == 62) {
                                goto lab_0x1e3565c;
                            } else {
                                if (v1 == 82) {
                                    goto lab_0x1e3565c;
                                } else {
                                    if (v1 == 102) {
                                        goto lab_0x1e3565c;
                                    } else {
                                        if (v1 != 122) {
                                            goto lab_0x1e35a1f;
                                        } else {
                                            goto lab_0x1e3565c;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    case 66: {
                        // 0x1e35667
                        if (g424 == 0) {
                            // 0x1e35674
                            g424 = 81;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 67: {
                        int32_t v19 = g424; // 0x1e35683
                        if (v19 == 0) {
                            // 0x1e3568c
                            g424 = 1;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        if (v19 == 11) {
                            // 0x1e356a8
                            g424 = v19 + 1;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 68: {
                        // 0x1e356b3
                        v2 = g424;
                        if (v2 == 22) {
                            goto lab_0x1e356c9;
                        } else {
                            if (v2 != 23) {
                                goto lab_0x1e35a1f;
                            } else {
                                goto lab_0x1e356c9;
                            }
                        }
                    }
                    case 69: {
                        // 0x1e356d4
                        v3 = g424;
                        if (v3 == 3) {
                            goto lab_0x1e356fc;
                        } else {
                            if (v3 == 24) {
                                goto lab_0x1e356fc;
                            } else {
                                if (v3 == 28) {
                                    goto lab_0x1e356fc;
                                } else {
                                    if (v3 != 44) {
                                        goto lab_0x1e35a1f;
                                    } else {
                                        goto lab_0x1e356fc;
                                    }
                                }
                            }
                        }
                    }
                    case 71: {
                        // 0x1e35707
                        if (g424 == 0) {
                            // 0x1e35714
                            g424 = 101;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 72: {
                        // 0x1e35723
                        if (g424 == 0) {
                            // 0x1e35730
                            g424 = 21;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 73: {
                        // 0x1e3573f
                        v4 = g424;
                        if (v4 == 1) {
                            goto lab_0x1e3575e;
                        } else {
                            if (v4 == 10) {
                                goto lab_0x1e3575e;
                            } else {
                                if (v4 != 21) {
                                    goto lab_0x1e35a1f;
                                } else {
                                    goto lab_0x1e3575e;
                                }
                            }
                        }
                    }
                    case 77: {
                        // 0x1e35769
                        v5 = g424;
                        if (v5 == 4) {
                            goto lab_0x1e3579a;
                        } else {
                            if (v5 == 61) {
                                goto lab_0x1e3579a;
                            } else {
                                if (v5 == 81) {
                                    goto lab_0x1e3579a;
                                } else {
                                    if (v5 == 101) {
                                        goto lab_0x1e3579a;
                                    } else {
                                        if (v5 != 121) {
                                            goto lab_0x1e35a1f;
                                        } else {
                                            goto lab_0x1e3579a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    case 78: {
                        // 0x1e357a5
                        v6 = g424;
                        if (v6 == 2) {
                            goto lab_0x1e357c4;
                        } else {
                            if (v6 == 9) {
                                goto lab_0x1e357c4;
                            } else {
                                if (v6 != 25) {
                                    goto lab_0x1e35a1f;
                                } else {
                                    goto lab_0x1e357c4;
                                }
                            }
                        }
                    }
                    case 79: {
                        // 0x1e357cf
                        v7 = g424;
                        if (v7 == 8) {
                            goto lab_0x1e357e5;
                        } else {
                            if (v7 != 42) {
                                goto lab_0x1e35a1f;
                            } else {
                                goto lab_0x1e357e5;
                            }
                        }
                    }
                    case 81: {
                        // 0x1e357f0
                        if (g424 == 0) {
                            // 0x1e357fd
                            g424 = 41;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 82: {
                        int32_t v20 = g424; // 0x1e3580c
                        if (v20 == 0) {
                            // 0x1e35815
                            g424 = 121;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        if (v20 == 7) {
                            // 0x1e35831
                            g424 = v20 + 1;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 83: {
                        // 0x1e3583c
                        v8 = g424;
                        if (v8 == 12) {
                            goto lab_0x1e3585b;
                        } else {
                            if (v8 == 29) {
                                goto lab_0x1e3585b;
                            } else {
                                if (v8 != 45) {
                                    goto lab_0x1e35a1f;
                                } else {
                                    goto lab_0x1e3585b;
                                }
                            }
                        }
                    }
                    case 84: {
                        // 0x1e35866
                        v9 = g424;
                        if (v9 != 30) {
                            if (v9 == 27) {
                                goto lab_0x1e358a6;
                            } else {
                                if (v9 == 6) {
                                    goto lab_0x1e358a6;
                                } else {
                                    if (v9 != 43) {
                                        goto lab_0x1e35a1f;
                                    } else {
                                        goto lab_0x1e358a6;
                                    }
                                }
                            }
                        } else {
                            // 0x1e3586f
                            g2 = 1;
                            g5 = g206;
                            g157 = 1;
                            *(int32_t *)(g206 + 62) = 1;
                            goto lab_0x1e35a1f;
                        }
                    }
                    case 85: {
                        int32_t v21 = g424; // 0x1e358b1
                        if (v21 == 41) {
                            // 0x1e358be
                            g424 = v21 + 1;
                            // 0x1e35a29
                            g8 = *(int32_t *)g9;
                            return g2;
                        }
                        goto lab_0x1e35a1f;
                    }
                    case 88: {
                        // 0x1e358c9
                        if (g424 != 63) {
                            if (g424 != 83) {
                                if (g424 == 103) {
                                    // 0x1e35917
                                    function_1e34b0d(64, 0);
                                    g2 = g206;
                                    *(int32_t *)(g206 + 62) = 1;
                                    g424 = g8;
                                    // 0x1e35a29
                                    g8 = *(int32_t *)g9;
                                    return g2;
                                }
                                if (g424 == 123) {
                                    // 0x1e35945
                                    function_1e35535();
                                    g2 = g206;
                                    *(int32_t *)(g206 + 62) = 1;
                                }
                            } else {
                                // 0x1e358f6
                                g2 = 1;
                                g5 = g206;
                                g207 = 1;
                                *(int32_t *)(g206 + 62) = 1;
                            }
                        } else {
                            // 0x1e358d2
                            function_1e32ace(0x40000000);
                            g2 = g206;
                            *(int32_t *)(g206 + 62) = 1;
                        }
                        goto lab_0x1e35a1f;
                    }
                    default: {
                        goto lab_0x1e35a1f;
                    }
                }
            }
        }
    } else {
        if (a1 == 49) {
            // 0x1e3560f
            if (g424 == 0) {
                // 0x1e3561c
                g424 = 61;
                // 0x1e35a29
                g8 = *(int32_t *)g9;
                return g2;
            }
        } else {
            if (a1 == 32) {
                int32_t v22 = g424; // 0x1e355f7
                if (v22 == 26) {
                    // 0x1e35604
                    g424 = v22 + 1;
                    // 0x1e35a29
                    g8 = *(int32_t *)g9;
                    return g2;
                }
            }
        }
        goto lab_0x1e35a1f;
    }
  lab_0x1e35a1f:
    // 0x1e35a1f
    g424 = 0;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e3565c:
    // 0x1e3565c
    g424 = v1 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e356c9:
    // 0x1e356c9
    g424 = v2 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e356fc:
    // 0x1e356fc
    g424 = v3 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e3575e:
    // 0x1e3575e
    g424 = v4 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e3579a:
    // 0x1e3579a
    g424 = v5 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e357c4:
    // 0x1e357c4
    g424 = v6 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e357e5:
    // 0x1e357e5
    g424 = v7 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e3585b:
    // 0x1e3585b
    g424 = v8 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
  lab_0x1e358a6:
    // 0x1e358a6
    g424 = v9 + 1;
    // 0x1e35a29
    g8 = *(int32_t *)g9;
    return g2;
}

