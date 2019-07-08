
// Address range: 0x1e30f8d - 0x1e30fc1
int32_t function_1e30f8d(int32_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(g5 + 32); // 0x1e30f8e
    g2 = v1;
    int32_t v2 = g8; // 0x1e30f91
    int32_t v3 = g6; // 0x1e30f94
    if (v1 == 0) {
        // 0x1e30fbd
        g6 = v3;
        g8 = v2;
        return 0;
    }
    int32_t v4 = v1 - 4; // 0x1e30f97
    g6 = v4;
    int32_t v5 = *(int32_t *)v4; // 0x1e30f9a
    int32_t v6 = 16 * v5; // 0x1e30f9e
    g5 = v6;
    int32_t v7 = v5 - 1; // 0x1e30fa1
    g8 = v7;
    int32_t v8; // 0x1e30fb4
    if (v7 >= 0) {
        int32_t v9 = v6 + v1 - 16; // 0x1e30fa7
        g4 = v9;
        g5 = v9;
        g2 = function_1e30f07();
        int32_t v10 = g8 - 1; // 0x1e30fb1
        g8 = v10;
        while (v10 >= 0) {
            // 0x1e30fa7
            v9 = g4 - 16;
            g4 = v9;
            g5 = v9;
            g2 = function_1e30f07();
            v10 = g8 - 1;
            g8 = v10;
        }
        // 0x1e30fb4
        v8 = g6;
    } else {
        v8 = v4;
    }
    int32_t result = function_1e3df60(v8); // 0x1e30fb5
    g2 = result;
    // 0x1e30fbd
    g6 = v3;
    g8 = v2;
    return result;
}

// Address range: 0x1e30fc1 - 0x1e311c3
int32_t function_1e30fc1(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e30fc1
    int32_t v1; // bp-32
    int32_t v2 = &v1; // 0x1e30fc4
    int32_t v3 = g8; // 0x1e30fc8
    int32_t v4 = g6; // 0x1e30fc9
    g8 = a1;
    int32_t v5 = g5; // 0x1e30fcd
    int32_t v6 = v5 + 8; // 0x1e30fcd
    g4 = v6;
    g6 = v5;
    int32_t v7 = *(int32_t *)(a1 + 42); // 0x1e30fd2
    g2 = v7;
    float80_t v8 = v7; // 0x1e30fdb
    float32_t v9 = *(float32_t *)(v5 + 24); // 0x1e30fde
    float32_t v10 = *(float32_t *)v6; // 0x1e30fe1
    g2 = function_1e3dbc0((int32_t)(float32_t)((v8 - (float80_t)v9) * (float80_t)v10), v4, v3);
    g2 = *(int32_t *)(g6 + 16) - 1;
    g11++;
    uint32_t v11 = (int32_t)__asm_fnstsw(g10); // 0x1e30ffa
    g2 = g2 & -0x10000 | v11;
    int3_t v12; // 0x1e31021
    if ((v11 / 256 & 65) == 0) {
        float32_t v13 = *(float32_t *)(g6 + 24); // 0x1e3100e
        float32_t v14 = *(float32_t *)g4; // 0x1e31014
        int32_t v15 = function_1e3dbc0((int32_t)(float32_t)((v8 - (float80_t)v13) * (float80_t)v14), (int32_t)&g708, (int32_t)&g708); // 0x1e31019
        g2 = v15;
        v12 = g11;
    } else {
        // 0x1e30fff
        g2 = *(int32_t *)(g6 + 16) - 1;
        v12 = g11 - 1;
    }
    // 0x1e31021
    g11 = v12 + 1;
    uint32_t v16 = (int32_t)__asm_fnstsw(g10); // 0x1e31029
    g2 = g2 & -0x10000 | v16;
    int3_t v17; // 0x1e31090
    if ((v16 / 256 & 1) == 0) {
        // 0x1e31088
        g2 = 0;
        v17 = g11;
    } else {
        float32_t v18 = *(float32_t *)(g6 + 24); // 0x1e31031
        float32_t v19 = *(float32_t *)g4; // 0x1e31037
        int32_t v20 = function_1e3dbc0((int32_t)(float32_t)((v8 - (float80_t)v18) * (float80_t)v19), (int32_t)&g708, (int32_t)&g708); // 0x1e3103c
        g2 = v20;
        int32_t v21 = *(int32_t *)(g6 + 16) - 1; // 0x1e31047
        g2 = v21;
        g11++;
        uint32_t v22 = (int32_t)__asm_fnstsw(g10); // 0x1e31050
        g2 = g2 & -0x10000 | v22;
        int3_t v23; // 0x1e31077
        float80_t v24; // 0x1e31077
        if ((v22 / 256 & 65) == 0) {
            float32_t v25 = *(float32_t *)(g6 + 24); // 0x1e31064
            float32_t v26 = *(float32_t *)g4; // 0x1e3106a
            int32_t v27 = function_1e3dbc0((int32_t)(float32_t)((v8 - (float80_t)v25) * (float80_t)v26), (int32_t)&g708, (int32_t)&g708); // 0x1e3106f
            g2 = v27;
            v24 = g684;
            v23 = g11;
        } else {
            int32_t v28 = *(int32_t *)(g6 + 16) - 1; // 0x1e31058
            g2 = v28;
            v24 = v28;
            v23 = g11 - 1;
        }
        // 0x1e31077
        g2 = v21;
        g5 = (float32_t)v24;
        v17 = v23 + 1;
    }
    // 0x1e31090
    g11 = v17 - 1;
    int32_t v29 = __ftol(); // 0x1e31093
    g2 = v29;
    g4 = v29;
    int32_t v30 = *(int32_t *)(g8 + 46); // 0x1e3109d
    g2 = v30;
    float80_t v31 = v30; // 0x1e310a3
    int32_t v32 = g6; // 0x1e310a6
    float32_t v33 = *(float32_t *)(v32 + 28); // 0x1e310a6
    float32_t v34 = *(float32_t *)(v32 + 12); // 0x1e310a9
    *(float64_t *)(g9 - 8) = (float64_t)((v31 - (float80_t)v33) * (float80_t)v34);
    g2 = function_1e3dbc0(v30, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g6 + 20) - 1;
    g11++;
    uint32_t v35 = (int32_t)__asm_fnstsw(g10); // 0x1e310c3
    g2 = g2 & -0x10000 | v35;
    int3_t v36; // 0x1e310eb
    if ((v35 / 256 & 65) == 0) {
        int32_t v37 = g6; // 0x1e310d7
        float32_t v38 = *(float32_t *)(v37 + 28); // 0x1e310d7
        float32_t v39 = *(float32_t *)(v37 + 12); // 0x1e310dd
        *(float64_t *)(g9 - 8) = (float64_t)((v31 - (float80_t)v38) * (float80_t)v39);
        int32_t v40 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e310e3
        g2 = v40;
        v36 = g11;
    } else {
        // 0x1e310c8
        g2 = *(int32_t *)(g6 + 20) - 1;
        v36 = g11 - 1;
    }
    // 0x1e310eb
    g11 = v36 + 1;
    uint32_t v41 = (int32_t)__asm_fnstsw(g10); // 0x1e310f3
    g2 = g2 & -0x10000 | v41;
    int3_t v42; // 0x1e3115c
    if ((v41 / 256 & 1) == 0) {
        // 0x1e31154
        g2 = 0;
        v42 = g11;
    } else {
        int32_t v43 = g6; // 0x1e310fb
        float32_t v44 = *(float32_t *)(v43 + 28); // 0x1e310fb
        float32_t v45 = *(float32_t *)(v43 + 12); // 0x1e31101
        *(float64_t *)(g9 - 8) = (float64_t)((v31 - (float80_t)v44) * (float80_t)v45);
        int32_t v46 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31107
        g2 = v46;
        int32_t v47 = *(int32_t *)(g6 + 20) - 1; // 0x1e31112
        g2 = v47;
        g11++;
        uint32_t v48 = (int32_t)__asm_fnstsw(g10); // 0x1e3111b
        g2 = g2 & -0x10000 | v48;
        int3_t v49; // 0x1e31143
        float80_t v50; // 0x1e31143
        if ((v48 / 256 & 65) == 0) {
            int32_t v51 = g6; // 0x1e3112f
            float32_t v52 = *(float32_t *)(v51 + 28); // 0x1e3112f
            float32_t v53 = *(float32_t *)(v51 + 12); // 0x1e31135
            *(float64_t *)(g9 - 8) = (float64_t)((v31 - (float80_t)v52) * (float80_t)v53);
            int32_t v54 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3113b
            g2 = v54;
            v50 = g684;
            v49 = g11;
        } else {
            int32_t v55 = *(int32_t *)(g6 + 20) - 1; // 0x1e31123
            g2 = v55;
            v50 = v55;
            v49 = g11 - 1;
        }
        // 0x1e31143
        g2 = v47;
        g5 = (float32_t)v50;
        v42 = v49 + 1;
    }
    // 0x1e3115c
    g11 = v42 - 1;
    int32_t v56 = __ftol(); // 0x1e3115f
    g2 = v56;
    int32_t v57 = 16 * (g4 + *(int32_t *)(g6 + 16) * v56); // 0x1e3116a
    g2 = v57;
    int32_t v58 = *(int32_t *)(g6 + 32) + v57; // 0x1e3116d
    g2 = v58;
    int32_t v59 = *(int32_t *)(v58 + 12); // 0x1e31172
    g5 = v59;
    int32_t v60 = *(int32_t *)(v59 + 4) - 1; // 0x1e31178
    g2 = v60;
    int32_t result; // 0x1e311c0
    if (v60 >= 0) {
        int32_t v61 = 4 * v60; // 0x1e3117b
        while (true) {
            int32_t v62 = *(int32_t *)(v58 + 12); // 0x1e31182
            g2 = v62;
            int32_t v63 = *(int32_t *)(v61 + 8 + v62); // 0x1e31185
            g5 = v63;
            int32_t v64 = *(int32_t *)v63; // 0x1e31189
            g7 = v64;
            int32_t v65; // 0x1e311b0
            if (*(char *)v64 != 0) {
                int32_t v66 = *(int32_t *)(v63 + 4); // 0x1e31190
                g2 = v66;
                if ((*(int32_t *)(g8 + 110) & v66) != 0) {
                    // 0x1e31198
                    g5 = *(int32_t *)(v63 + 8);
                    g2 = v2;
                    *(int32_t *)(g9 - 4) = v2;
                    *(int32_t *)(g9 - 8) = g8;
                    int32_t v67 = *(int32_t *)g5; // 0x1e311a0
                    g2 = v67;
                    if (v67 != 0) {
                        // 0x1e311a9
                        g2 = v2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = a2;
                        v65 = function_1e30cff((int32_t)&g708, &g708);
                        g2 = v65;
                    } else {
                        v65 = 0;
                    }
                } else {
                    v65 = v66;
                }
            } else {
                v65 = v62;
            }
            int32_t v68 = v61 - 4; // 0x1e311b5
            if (v68 < 0) {
                result = v65;
                // break -> 0x1e311ba
                break;
            }
            // 0x1e311b5
            v61 = v68;
        }
    } else {
        result = v60;
    }
    // 0x1e311ba
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e311c3 - 0x1e31324
int32_t function_1e311c3(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x1e311c3
    g2 = a1;
    int32_t v1 = g6; // bp-32
    int32_t v2 = &v1; // 0x1e311d1
    int32_t v3; // ebx
    int32_t v4;
    int32_t v5;
    int32_t result;
    int32_t v6;
    int32_t v7; // 0x1e312d8
    int32_t v8; // 0x1e3131b
    int32_t v9; // 0x1e3121f
    int32_t v10; // 0x1e31206
    int32_t v11; // 0x1e31238
    if (a1 >= 0) {
        if (a1 < 10) {
            // 0x1e311e1
            g7 = a2;
            if (a2 >= 0) {
                if (a2 < 15) {
                    int32_t v12 = g5; // 0x1e311f5
                    g7 = a7;
                    int32_t v13 = 16 * (*(int32_t *)(v12 + 16) * a2 + a1); // 0x1e31200
                    int32_t v14 = *(int32_t *)(v12 + 32) + v13; // 0x1e31203
                    v10 = 4 * a7 + 36 + v12;
                    g5 = v10;
                    int32_t * v15 = (int32_t *)(v14 + 4); // 0x1e31210
                    int32_t v16 = *v15; // 0x1e31210
                    g2 = v16;
                    v3 = 1;
                    v9 = 4 * *(int32_t *)(v16 + 4) - 4;
                    g2 = v9;
                    if (v9 >= 0) {
                        v4 = a7;
                        while (true) {
                          lab_0x1e3122f:
                            // 0x1e3122f
                            g2 = v14;
                            g7 = v9;
                            int32_t v17 = *v15; // 0x1e31235
                            g5 = v17;
                            v11 = *(int32_t *)(v9 + 8 + v17);
                            if (*(char *)(v11 + 12) != 0) {
                                v5 = v4;
                                v6 = v10;
                                goto lab_0x1e3130f;
                            } else {
                                int32_t v18 = *(int32_t *)(v11 + 8); // 0x1e31246
                                g2 = v18;
                                if (*(char *)v18 == 0) {
                                    v5 = v4;
                                    v6 = v10;
                                    goto lab_0x1e3130f;
                                } else {
                                    // 0x1e31252
                                    g2 = a5;
                                    int32_t v19 = *(int32_t *)(a5 + 40); // 0x1e31255
                                    g5 = v19;
                                    if ((*(int32_t *)(v11 + 17) & v19) == 0) {
                                        v5 = v4;
                                        v6 = v10;
                                        goto lab_0x1e3130f;
                                    } else {
                                        int32_t v20 = a6 + 134; // 0x1e31261
                                        g5 = v20;
                                        int32_t * v21 = (int32_t *)v20; // 0x1e31267
                                        int32_t v22 = *v21; // 0x1e31267
                                        g2 = v22;
                                        if (v22 != 0) {
                                            // 0x1e31271
                                            if (*(int32_t *)(a6 + 114) != v11) {
                                                if (v22 != v3) {
                                                    // 0x1e31282
                                                    if (*(int32_t *)(a6 + 118) != v11) {
                                                        if (v22 != 2) {
                                                            // 0x1e31294
                                                            if (*(int32_t *)(a6 + 122) != v11) {
                                                                if (v22 != 3) {
                                                                    // 0x1e312a6
                                                                    if (*(int32_t *)(a6 + 126) != v11) {
                                                                        if (v22 != 4) {
                                                                            // 0x1e312b8
                                                                            if (*(int32_t *)(a6 + 130) != v11) {
                                                                                // 0x1e312c4
                                                                                g2 = 0;
                                                                                if (v22 == 5) {
                                                                                    goto lab_0x1e312dc;
                                                                                } else {
                                                                                    int32_t v23 = *v21 - v11 < v3; // 0x1e312d4
                                                                                    g2 = v23;
                                                                                    v7 = v23;
                                                                                    goto lab_0x1e312d8_2;
                                                                                }
                                                                            } else {
                                                                                // 0x1e312c0
                                                                                g2 = v3;
                                                                                v7 = v3;
                                                                                goto lab_0x1e312d8_2;
                                                                            }
                                                                        } else {
                                                                            // 0x1e312b4
                                                                            g2 = 0;
                                                                            goto lab_0x1e312dc;
                                                                        }
                                                                    } else {
                                                                        // 0x1e312ab
                                                                        g2 = v3;
                                                                        v7 = v3;
                                                                        goto lab_0x1e312d8_2;
                                                                    }
                                                                } else {
                                                                    // 0x1e312a2
                                                                    g2 = 0;
                                                                    goto lab_0x1e312dc;
                                                                }
                                                            } else {
                                                                // 0x1e31299
                                                                g2 = v3;
                                                                v7 = v3;
                                                                goto lab_0x1e312d8_2;
                                                            }
                                                        } else {
                                                            // 0x1e31290
                                                            g2 = 0;
                                                            goto lab_0x1e312dc;
                                                        }
                                                    } else {
                                                        // 0x1e31287
                                                        g2 = v3;
                                                        v7 = v3;
                                                        goto lab_0x1e312d8_2;
                                                    }
                                                } else {
                                                    // 0x1e3127e
                                                    g2 = 0;
                                                    goto lab_0x1e312dc;
                                                }
                                            } else {
                                                // 0x1e31276
                                                g2 = v3;
                                                v7 = v3;
                                                goto lab_0x1e312d8_2;
                                            }
                                        } else {
                                            // 0x1e3126d
                                            g2 = 0;
                                            goto lab_0x1e312dc;
                                        }
                                    }
                                }
                            }
                        }
                      lab_0x1e31225:
                        // 0x1e31225
                        v8 = g9;
                        result = v5;
                    } else {
                        v8 = v2;
                        result = a7;
                    }
                } else {
                    v8 = v2;
                    result = a7;
                }
            } else {
                v8 = v2;
                result = a7;
            }
        } else {
            v8 = v2;
            result = a7;
        }
    } else {
        v8 = v2;
        result = a7;
    }
    // 0x1e31318
    g2 = result;
    g6 = *(int32_t *)v8;
    g8 = *(int32_t *)(v8 + 4);
    g4 = *(int32_t *)(v8 + 8);
    return result;
  lab_0x1e3130f:;
    int32_t v24 = v9 - 4; // 0x1e3130f
    if (v24 < 0) {
        // break -> 0x1e31225
        goto lab_0x1e31225;
    }
    v9 = v24;
    v10 = v6;
    v4 = v5;
    goto lab_0x1e3122f;
  lab_0x1e312d8_2:
    if (v7 != 0) {
        v5 = v4;
        v6 = v10;
        goto lab_0x1e3130f;
    } else {
        goto lab_0x1e312dc;
    }
  lab_0x1e312dc:
    // 0x1e312dc
    g5 = v10;
    g2 = *(int32_t *)v11;
    *(int32_t *)(g9 - 4) = a5;
    *(int32_t *)g5 = v11;
    int32_t v25 = v4 + 1; // 0x1e312e6
    *(char *)(v11 + 12) = (char)v3;
    int32_t v26 = v10 + 4; // 0x1e312ee
    g5 = a3;
    g11++;
    uint32_t v27 = (int32_t)__asm_fnstsw(g10); // 0x1e312fd
    g2 = g2 & -0x10000 | v27;
    if ((v27 / 256 & 1) != 0) {
        // 0x1e31302
        g5 = (float32_t)g684;
        g2 = a3;
        g7 = a4;
        *(int32_t *)a3 = (int32_t)(float32_t)g684;
        *(int32_t *)g7 = v11;
        v5 = v25;
        v6 = v26;
    } else {
        v5 = v25;
        v6 = v26;
    }
    goto lab_0x1e3130f;
}

// Address range: 0x1e31324 - 0x1e319ac
float80_t function_1e31324(int32_t * a1, int32_t a2, int32_t * a3) {
    int32_t v1 = (int32_t)a3;
    int32_t v2 = (int32_t)a1;
    float32_t result = 1.0e+9f; // bp-36
    int32_t v3 = g8; // 0x1e31339
    int32_t v4 = g6; // 0x1e3133a
    int32_t v5 = g5; // 0x1e3133b
    g8 = v5;
    g5 = v2;
    g6 = v5 + 16;
    int32_t v6 = *a1; // 0x1e31346
    g7 = v6;
    float80_t v7 = v6; // 0x1e3134b
    float80_t v8 = v7 - (float80_t)*(float32_t *)(v5 + 24); // 0x1e3134e
    float80_t v9 = v8 * (float80_t)*(float32_t *)(v5 + 8); // 0x1e31351
    g2 = function_1e3dbc0((int32_t)(float32_t)v9, v4, v3);
    g2 = *(int32_t *)g6 - 1;
    g11++;
    uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e3136a
    g2 = g2 & -0x10000 | v10;
    int3_t v11; // 0x1e31391
    if ((v10 / 256 & 65) == 0) {
        int32_t v12 = g8; // 0x1e3137d
        float80_t v13 = v7 - (float80_t)*(float32_t *)(v12 + 24); // 0x1e3137d
        float80_t v14 = v13 * (float80_t)*(float32_t *)(v12 + 8); // 0x1e31383
        int32_t v15 = function_1e3dbc0((int32_t)(float32_t)v14, (int32_t)&g708, (int32_t)&g708); // 0x1e31389
        g2 = v15;
        v11 = g11;
    } else {
        // 0x1e3136f
        g2 = *(int32_t *)g6 - 1;
        v11 = g11 - 1;
    }
    // 0x1e31391
    g11 = v11 + 1;
    uint32_t v16 = (int32_t)__asm_fnstsw(g10); // 0x1e31399
    g2 = g2 & -0x10000 | v16;
    int3_t v17; // 0x1e31400
    if ((v16 / 256 & 1) == 0) {
        // 0x1e313f8
        g2 = 0;
        v17 = g11;
    } else {
        int32_t v18 = g8; // 0x1e313a1
        float80_t v19 = v7 - (float80_t)*(float32_t *)(v18 + 24); // 0x1e313a1
        float80_t v20 = v19 * (float80_t)*(float32_t *)(v18 + 8); // 0x1e313a7
        int32_t v21 = function_1e3dbc0((int32_t)(float32_t)v20, (int32_t)&g708, (int32_t)&g708); // 0x1e313ad
        g2 = v21;
        g2 = *(int32_t *)g6 - 1;
        g11++;
        uint32_t v22 = (int32_t)__asm_fnstsw(g10); // 0x1e313c0
        g2 = g2 & -0x10000 | v22;
        int3_t v23; // 0x1e313e7
        float80_t v24; // 0x1e313e7
        if ((v22 / 256 & 65) == 0) {
            int32_t v25 = g8; // 0x1e313d3
            float80_t v26 = v7 - (float80_t)*(float32_t *)(v25 + 24); // 0x1e313d3
            float80_t v27 = v26 * (float80_t)*(float32_t *)(v25 + 8); // 0x1e313d9
            int32_t v28 = function_1e3dbc0((int32_t)(float32_t)v27, (int32_t)&g708, (int32_t)&g708); // 0x1e313df
            g2 = v28;
            v24 = g684;
            v23 = g11;
        } else {
            int32_t v29 = *(int32_t *)g6 - 1; // 0x1e313c7
            g2 = v29;
            v24 = v29;
            v23 = g11 - 1;
        }
        // 0x1e313e7
        float32_t v30;
        g2 = v30;
        g5 = (float32_t)v24;
        v17 = v23 + 1;
    }
    // 0x1e31400
    g11 = v17 - 1;
    g4 = g8 + 20;
    int32_t v31 = __ftol(); // 0x1e31406
    g2 = v2;
    int32_t v32 = v2 + 4; // 0x1e31414
    int32_t v33 = *(int32_t *)v32; // 0x1e31414
    g5 = v33;
    float80_t v34 = v33; // 0x1e3141a
    int32_t v35 = g8; // 0x1e3141d
    float80_t v36 = v34 - (float80_t)*(float32_t *)(v35 + 28); // 0x1e3141d
    float80_t v37 = v36 * (float80_t)*(float32_t *)(v35 + 12); // 0x1e31420
    *(float64_t *)(g9 - 8) = (float64_t)v37;
    g2 = function_1e3dbc0(v33, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)g4 - 1;
    g11++;
    uint32_t v38 = (int32_t)__asm_fnstsw(g10); // 0x1e31439
    g2 = g2 & -0x10000 | v38;
    int3_t v39; // 0x1e31460
    if ((v38 / 256 & 65) == 0) {
        int32_t v40 = g8; // 0x1e3144c
        float80_t v41 = v34 - (float80_t)*(float32_t *)(v40 + 28); // 0x1e3144c
        float80_t v42 = v41 * (float80_t)*(float32_t *)(v40 + 12); // 0x1e31452
        *(float64_t *)(g9 - 8) = (float64_t)v42;
        int32_t v43 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31458
        g2 = v43;
        v39 = g11;
    } else {
        // 0x1e3143e
        g2 = *(int32_t *)g4 - 1;
        v39 = g11 - 1;
    }
    // 0x1e31460
    g11 = v39 + 1;
    uint32_t v44 = (int32_t)__asm_fnstsw(g10); // 0x1e31468
    g2 = g2 & -0x10000 | v44;
    int3_t v45; // 0x1e314cf
    if ((v44 / 256 & 1) == 0) {
        // 0x1e314c7
        g2 = 0;
        v45 = g11;
    } else {
        int32_t v46 = g8; // 0x1e31470
        float80_t v47 = v34 - (float80_t)*(float32_t *)(v46 + 28); // 0x1e31470
        float80_t v48 = v47 * (float80_t)*(float32_t *)(v46 + 12); // 0x1e31476
        *(float64_t *)(g9 - 8) = (float64_t)v48;
        int32_t v49 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3147c
        g2 = v49;
        g2 = *(int32_t *)g4 - 1;
        g11++;
        uint32_t v50 = (int32_t)__asm_fnstsw(g10); // 0x1e3148f
        g2 = g2 & -0x10000 | v50;
        int3_t v51; // 0x1e314b6
        float80_t v52; // 0x1e314b6
        if ((v50 / 256 & 65) == 0) {
            int32_t v53 = g8; // 0x1e314a2
            float80_t v54 = v34 - (float80_t)*(float32_t *)(v53 + 28); // 0x1e314a2
            float80_t v55 = v54 * (float80_t)*(float32_t *)(v53 + 12); // 0x1e314a8
            *(float64_t *)(g9 - 8) = (float64_t)v55;
            int32_t v56 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e314ae
            g2 = v56;
            v52 = g684;
            v51 = g11;
        } else {
            int32_t v57 = *(int32_t *)g4 - 1; // 0x1e31496
            g2 = v57;
            v52 = v57;
            v51 = g11 - 1;
        }
        // 0x1e314b6
        g5 = (float32_t)v52;
        v45 = v51 + 1;
    }
    // 0x1e314cf
    g11 = v45 - 1;
    int32_t v58 = __ftol(); // 0x1e314d2
    g2 = v2;
    float32_t * v59 = (float32_t *)(v2 + 24); // 0x1e314e3
    float80_t v60 = (float80_t)*(float32_t *)(v2 + 12) * (float80_t)*v59; // 0x1e314e3
    float80_t v61 = v60 + (float80_t)*(float32_t *)a1; // 0x1e314e6
    int32_t v62 = g8; // 0x1e314eb
    float80_t v63 = v61 - (float80_t)*(float32_t *)(v62 + 24); // 0x1e314eb
    float80_t v64 = v63 * (float80_t)*(float32_t *)(v62 + 8); // 0x1e314ee
    *(float64_t *)(g9 - 8) = (float64_t)v64;
    int32_t v65 = function_1e3dbc0((int32_t)(float32_t)v61, (int32_t)&g708, (int32_t)&g708); // 0x1e314f4
    g2 = v65;
    g2 = *(int32_t *)g6 - 1;
    g11++;
    uint32_t v66 = (int32_t)__asm_fnstsw(g10); // 0x1e31507
    g2 = g2 & -0x10000 | v66;
    int3_t v67; // 0x1e3152e
    if ((v66 / 256 & 65) == 0) {
        int32_t v68 = g8; // 0x1e3151a
        float80_t v69 = v61 - (float80_t)*(float32_t *)(v68 + 24); // 0x1e3151a
        float80_t v70 = v69 * (float80_t)*(float32_t *)(v68 + 8); // 0x1e31520
        *(float64_t *)(g9 - 8) = (float64_t)v70;
        int32_t v71 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31526
        g2 = v71;
        v67 = g11;
    } else {
        // 0x1e3150c
        g2 = *(int32_t *)g6 - 1;
        v67 = g11 - 1;
    }
    // 0x1e3152e
    g11 = v67 + 1;
    uint32_t v72 = (int32_t)__asm_fnstsw(g10); // 0x1e31536
    g2 = g2 & -0x10000 | v72;
    int3_t v73; // 0x1e3159d
    if ((v72 / 256 & 1) == 0) {
        // 0x1e31595
        g2 = 0;
        v73 = g11;
    } else {
        int32_t v74 = g8; // 0x1e3153e
        float80_t v75 = v61 - (float80_t)*(float32_t *)(v74 + 24); // 0x1e3153e
        float80_t v76 = v75 * (float80_t)*(float32_t *)(v74 + 8); // 0x1e31544
        *(float64_t *)(g9 - 8) = (float64_t)v76;
        int32_t v77 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3154a
        g2 = v77;
        g2 = *(int32_t *)g6 - 1;
        g11++;
        uint32_t v78 = (int32_t)__asm_fnstsw(g10); // 0x1e3155d
        g2 = g2 & -0x10000 | v78;
        int3_t v79; // 0x1e31584
        float80_t v80; // 0x1e31584
        if ((v78 / 256 & 65) == 0) {
            int32_t v81 = g8; // 0x1e31570
            float80_t v82 = v61 - (float80_t)*(float32_t *)(v81 + 24); // 0x1e31570
            float80_t v83 = v82 * (float80_t)*(float32_t *)(v81 + 8); // 0x1e31576
            *(float64_t *)(g9 - 8) = (float64_t)v83;
            int32_t v84 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3157c
            g2 = v84;
            v80 = g684;
            v79 = g11;
        } else {
            int32_t v85 = *(int32_t *)g6 - 1; // 0x1e31564
            g2 = v85;
            v80 = v85;
            v79 = g11 - 1;
        }
        // 0x1e31584
        g5 = (float32_t)v80;
        v73 = v79 + 1;
    }
    // 0x1e3159d
    g11 = v73 - 1;
    int32_t v86 = __ftol(); // 0x1e315a0
    g2 = v2;
    float80_t v87 = (float80_t)*(float32_t *)(v2 + 16) * (float80_t)*v59; // 0x1e315b1
    float80_t v88 = v87 + (float80_t)*(float32_t *)v32; // 0x1e315b4
    int32_t v89 = g8; // 0x1e315ba
    float80_t v90 = v88 - (float80_t)*(float32_t *)(v89 + 28); // 0x1e315ba
    float80_t v91 = v90 * (float80_t)*(float32_t *)(v89 + 12); // 0x1e315bd
    *(float64_t *)(g9 - 8) = (float64_t)v91;
    int32_t v92 = function_1e3dbc0((int32_t)(float32_t)v88, (int32_t)&g708, (int32_t)&g708); // 0x1e315c3
    g2 = v92;
    g2 = *(int32_t *)g4 - 1;
    g11++;
    uint32_t v93 = (int32_t)__asm_fnstsw(g10); // 0x1e315d6
    g2 = g2 & -0x10000 | v93;
    int3_t v94; // 0x1e315fd
    if ((v93 / 256 & 65) == 0) {
        int32_t v95 = g8; // 0x1e315e9
        float80_t v96 = v88 - (float80_t)*(float32_t *)(v95 + 28); // 0x1e315e9
        float80_t v97 = v96 * (float80_t)*(float32_t *)(v95 + 12); // 0x1e315ef
        *(float64_t *)(g9 - 8) = (float64_t)v97;
        int32_t v98 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e315f5
        g2 = v98;
        v94 = g11;
    } else {
        // 0x1e315db
        g2 = *(int32_t *)g4 - 1;
        v94 = g11 - 1;
    }
    // 0x1e315fd
    g11 = v94 + 1;
    uint32_t v99 = (int32_t)__asm_fnstsw(g10); // 0x1e31605
    g2 = g2 & -0x10000 | v99;
    float64_t v100;
    int3_t v101; // 0x1e3166c
    if ((v99 / 256 & 1) == 0) {
        // 0x1e31664
        g2 = 0;
        v101 = g11;
        v100 = 0.0;
    } else {
        int32_t v102 = g8; // 0x1e3160d
        float80_t v103 = v88 - (float80_t)*(float32_t *)(v102 + 28); // 0x1e3160d
        float80_t v104 = v103 * (float80_t)*(float32_t *)(v102 + 12); // 0x1e31613
        *(float64_t *)(g9 - 8) = (float64_t)v104;
        int32_t v105 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31619
        g2 = v105;
        g2 = *(int32_t *)g4 - 1;
        g11++;
        uint32_t v106 = (int32_t)__asm_fnstsw(g10); // 0x1e3162c
        g2 = g2 & -0x10000 | v106;
        int3_t v107; // 0x1e31653
        float80_t v108; // 0x1e31653
        if ((v106 / 256 & 65) == 0) {
            int32_t v109 = g8; // 0x1e3163f
            float80_t v110 = v88 - (float80_t)*(float32_t *)(v109 + 28); // 0x1e3163f
            float80_t v111 = v110 * (float80_t)*(float32_t *)(v109 + 12); // 0x1e31645
            *(float64_t *)(g9 - 8) = (float64_t)v111;
            int32_t v112 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3164b
            g2 = v112;
            v108 = g684;
            v107 = g11;
        } else {
            int32_t v113 = *(int32_t *)g4 - 1; // 0x1e31633
            g2 = v113;
            v108 = v113;
            v107 = g11 - 1;
        }
        // 0x1e31653
        float32_t v114;
        g2 = v114;
        g5 = (float32_t)v108;
        v101 = v107 + 1;
        v100 = v108;
    }
    // 0x1e3166c
    g11 = v101 - 1;
    g684 = v100;
    int32_t v115 = __ftol(); // 0x1e3166f
    g2 = v115;
    uint32_t v116 = (int32_t)__asm_fnstsw(g10) / 256; // 0x1e3167f
    g2 = (v116 & 1) == 0 ? -1 : 1;
    int16_t v117 = __asm_fnstsw(g10); // 0x1e31695
    int32_t v118 = (v117 & 0x4100) != 0 ? -1 : 1;
    g2 = v58;
    int32_t v119;
    if (v115 != v58) {
        // 0x1e3171c
        g2 = v31;
        if (v86 != v31) {
            // 0x1e31791
            g6 = v31;
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = a2;
            *(int32_t *)(g9 - 12) = v2;
            int32_t v120 = &result; // 0x1e317ad
            g2 = v120;
            *(int32_t *)(g9 - 16) = v1;
            *(int32_t *)(g9 - 20) = v120;
            *(int32_t *)(g9 - 24) = v58;
            g5 = g8;
            *(int32_t *)(g9 - 28) = g6;
            float80_t v121 = (v34 - v88) / (v7 - v61); // 0x1e317b8
            float80_t v122 = v34 - v7 * v121; // 0x1e317be
            g684 = v122;
            int32_t v123 = function_1e311c3(v118, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e317c4
            g2 = v123;
            int32_t v124 = g6;
            if ((v116 & 1) == 0) {
                if ((v117 & 0x4100) != 0) {
                    while (true) {
                        float80_t v125 = (float80_t)(float32_t)v124 * (float80_t)*(float32_t *)&g5; // 0x1e3193c
                        float80_t v126 = v122 + v121 * (v125 + (float80_t)*(float32_t *)(g8 + 24)); // 0x1e31944
                        g684 = v126;
                        uint32_t v127 = (int32_t)__asm_fnstsw(g10); // 0x1e3194d
                        g2 = g2 & -0x10000 | v127;
                        if ((v127 / 256 & 65) == 0) {
                            // 0x1e31952
                            g6--;
                        } else {
                            // 0x1e31955
                            g684 = v126;
                            uint32_t v128 = (int32_t)__asm_fnstsw(g10); // 0x1e3195b
                            g2 = g2 & -0x10000 | v128;
                            if ((v128 / 256 & 64) != 0) {
                                // 0x1e31960
                                g6--;
                            }
                            // 0x1e31961
                            g4--;
                        }
                        // 0x1e31962
                        *(int32_t *)(g9 - 4) = v123;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = v120;
                        *(int32_t *)(g9 - 24) = g4;
                        *(int32_t *)(g9 - 28) = g6;
                        g5 = g8;
                        int32_t v129 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31976
                        g2 = v129;
                        int32_t v130 = g6; // 0x1e3197e
                        if (v130 > v86) {
                            v124 = v130;
                            v123 = v129;
                            // continue -> 0x1e31927
                            continue;
                        }
                        // 0x1e31983
                        if (g4 <= v115) {
                            v119 = v129;
                            // break -> 0x1e31988
                            break;
                        }
                        v124 = v130;
                        v123 = v129;
                    }
                } else {
                    while (true) {
                        int32_t v131 = g4 + 1; // 0x1e318be
                        g5 = v131;
                        float80_t v132 = (float80_t)(float32_t)v124 * (float80_t)(float32_t)v131; // 0x1e318d6
                        float80_t v133 = v122 + v121 * (v132 + (float80_t)*(float32_t *)(g8 + 24)); // 0x1e318de
                        g684 = v133;
                        uint32_t v134 = (int32_t)__asm_fnstsw(g10); // 0x1e318e7
                        g2 = g2 & -0x10000 | v134;
                        if ((v134 / 256 & 1) == 0) {
                            // 0x1e318ef
                            g684 = v133;
                            g4 = g5;
                            uint32_t v135 = (int32_t)__asm_fnstsw(g10); // 0x1e318f7
                            g2 = g2 & -0x10000 | v135;
                            if ((v135 / 256 & 64) != 0) {
                                // 0x1e318fc
                                g6--;
                                g4 = g5;
                            }
                        } else {
                            // 0x1e318ec
                            g6--;
                        }
                        // 0x1e318ff
                        *(int32_t *)(g9 - 4) = v123;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = v120;
                        *(int32_t *)(g9 - 24) = g4;
                        *(int32_t *)(g9 - 28) = g6;
                        g5 = g8;
                        int32_t v136 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31913
                        g2 = v136;
                        int32_t v137 = g6; // 0x1e3191b
                        if (v137 > v86) {
                            v124 = v137;
                            v123 = v136;
                            // continue -> 0x1e318be
                            continue;
                        }
                        // 0x1e31920
                        if (g4 >= v115) {
                            v119 = v136;
                            // break -> 0x1e31988
                            break;
                        }
                        v124 = v137;
                        v123 = v136;
                    }
                }
            } else {
                if ((v117 & 0x4100) != 0) {
                    while (true) {
                        int32_t v138 = v124 + 1; // 0x1e3184d
                        g5 = v138;
                        float80_t v139 = v138;
                        float80_t v140 = v139 * v139; // 0x1e31865
                        float80_t v141 = v122 + v121 * (v140 + (float80_t)*(float32_t *)(g8 + 24)); // 0x1e3186d
                        g684 = v141;
                        uint32_t v142 = (int32_t)__asm_fnstsw(g10); // 0x1e31876
                        g2 = g2 & -0x10000 | v142;
                        if ((v142 / 256 & 65) == 0) {
                            // 0x1e3187b
                            g6 = g5;
                        } else {
                            // 0x1e3187f
                            g684 = v141;
                            uint32_t v143 = (int32_t)__asm_fnstsw(g10); // 0x1e31885
                            g2 = g2 & -0x10000 | v143;
                            if ((v143 / 256 & 64) != 0) {
                                // 0x1e3188a
                                g6 = g5;
                            }
                            // 0x1e3188c
                            g4--;
                        }
                        // 0x1e3188d
                        *(int32_t *)(g9 - 4) = v123;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = v120;
                        *(int32_t *)(g9 - 24) = g4;
                        *(int32_t *)(g9 - 28) = g6;
                        g5 = g8;
                        int32_t v144 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e318a1
                        g2 = v144;
                        int32_t v145 = g6; // 0x1e318a9
                        if (v145 < v86) {
                            v124 = v145;
                            v123 = v144;
                            // continue -> 0x1e3184d
                            continue;
                        }
                        // 0x1e318ae
                        if (g4 <= v115) {
                            v119 = v144;
                            // break -> 0x1e31988
                            break;
                        }
                        v124 = v145;
                        v123 = v144;
                    }
                } else {
                    while (true) {
                        int32_t v146 = g4 + 1; // 0x1e317dc
                        g5 = v146;
                        int32_t v147 = v124 + 1; // 0x1e317df
                        g7 = v147;
                        float80_t v148 = (float80_t)(float32_t)v147 * (float80_t)(float32_t)v146; // 0x1e317f7
                        float80_t v149 = v122 + v121 * (v148 + (float80_t)*(float32_t *)(g8 + 24)); // 0x1e317ff
                        g684 = v149;
                        uint32_t v150 = (int32_t)__asm_fnstsw(g10); // 0x1e31808
                        g2 = g2 & -0x10000 | v150;
                        if ((v150 / 256 & 1) == 0) {
                            // 0x1e31811
                            g684 = v149;
                            g4 = g5;
                            uint32_t v151 = (int32_t)__asm_fnstsw(g10); // 0x1e31819
                            g2 = g2 & -0x10000 | v151;
                            if ((v151 / 256 & 64) != 0) {
                                // 0x1e3181e
                                g6 = g7;
                                g4 = g5;
                            }
                        } else {
                            // 0x1e3180d
                            g6 = g7;
                        }
                        // 0x1e31822
                        *(int32_t *)(g9 - 4) = v123;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = v120;
                        *(int32_t *)(g9 - 24) = g4;
                        *(int32_t *)(g9 - 28) = g6;
                        g5 = g8;
                        int32_t v152 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31836
                        g2 = v152;
                        int32_t v153 = g6; // 0x1e3183e
                        if (v153 < v86) {
                            v124 = v153;
                            v123 = v152;
                            // continue -> 0x1e317dc
                            continue;
                        }
                        // 0x1e31843
                        if (g4 >= v115) {
                            v119 = v152;
                            // break -> 0x1e31988
                            break;
                        }
                        v124 = v153;
                        v123 = v152;
                    }
                }
            }
            goto lab_0x1e31988;
        } else {
            // 0x1e31724
            g6 = v58;
            if ((v117 & 0x4100) != 0) {
                if (v115 > v58) {
                    // 0x1e31988
                    goto lab_0x1e319a0;
                } else {
                    // 0x1e31768
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = a2;
                    *(int32_t *)(g9 - 12) = v2;
                    *(int32_t *)(g9 - 16) = v1;
                    *(int32_t *)(g9 - 20) = (int32_t)&result;
                    *(int32_t *)(g9 - 24) = g6;
                    g5 = g8;
                    g6--;
                    *(int32_t *)(g9 - 28) = v31;
                    int32_t v154 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3177f
                    g2 = v154;
                    v119 = v154;
                    while (g6 >= v115) {
                        // 0x1e31768
                        *(int32_t *)(g9 - 4) = v154;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = (int32_t)&result;
                        *(int32_t *)(g9 - 24) = g6;
                        g5 = g8;
                        g6--;
                        *(int32_t *)(g9 - 28) = v31;
                        v154 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                        g2 = v154;
                        v119 = v154;
                    }
                    goto lab_0x1e31988;
                }
            } else {
                if (v115 < v58) {
                    // 0x1e31988
                    goto lab_0x1e319a0;
                } else {
                    // 0x1e31736
                    *(int32_t *)(g9 - 4) = 0;
                    *(int32_t *)(g9 - 8) = a2;
                    *(int32_t *)(g9 - 12) = v2;
                    *(int32_t *)(g9 - 16) = v1;
                    *(int32_t *)(g9 - 20) = (int32_t)&result;
                    *(int32_t *)(g9 - 24) = g6;
                    g5 = g8;
                    g6++;
                    *(int32_t *)(g9 - 28) = v31;
                    int32_t v155 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3174d
                    g2 = v155;
                    v119 = v155;
                    while (g6 <= v115) {
                        // 0x1e31736
                        *(int32_t *)(g9 - 4) = v155;
                        *(int32_t *)(g9 - 8) = a2;
                        *(int32_t *)(g9 - 12) = v2;
                        *(int32_t *)(g9 - 16) = v1;
                        *(int32_t *)(g9 - 20) = (int32_t)&result;
                        *(int32_t *)(g9 - 24) = g6;
                        g5 = g8;
                        g6++;
                        *(int32_t *)(g9 - 28) = v31;
                        v155 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                        g2 = v155;
                        v119 = v155;
                    }
                    goto lab_0x1e31988;
                }
            }
        }
    } else {
        // 0x1e316af
        g6 = v31;
        if ((v116 & 1) == 0) {
            if (v86 > v31) {
                // 0x1e31988
                goto lab_0x1e319a0;
            } else {
                // 0x1e316f3
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = a2;
                *(int32_t *)(g9 - 12) = v2;
                *(int32_t *)(g9 - 16) = v1;
                *(int32_t *)(g9 - 20) = (int32_t)&result;
                g5 = g8;
                *(int32_t *)(g9 - 24) = v58;
                *(int32_t *)(g9 - 28) = g6;
                g6--;
                int32_t v156 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3170a
                g2 = v156;
                v119 = v156;
                while (g6 >= v86) {
                    // 0x1e316f3
                    *(int32_t *)(g9 - 4) = v156;
                    *(int32_t *)(g9 - 8) = a2;
                    *(int32_t *)(g9 - 12) = v2;
                    *(int32_t *)(g9 - 16) = v1;
                    *(int32_t *)(g9 - 20) = (int32_t)&result;
                    g5 = g8;
                    *(int32_t *)(g9 - 24) = v58;
                    *(int32_t *)(g9 - 28) = g6;
                    g6--;
                    v156 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                    g2 = v156;
                    v119 = v156;
                }
                goto lab_0x1e31988;
            }
        } else {
            if (v86 < v31) {
                // 0x1e31988
                goto lab_0x1e319a0;
            } else {
                // 0x1e316c1
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = a2;
                *(int32_t *)(g9 - 12) = v2;
                *(int32_t *)(g9 - 16) = v1;
                *(int32_t *)(g9 - 20) = (int32_t)&result;
                g5 = g8;
                *(int32_t *)(g9 - 24) = v58;
                *(int32_t *)(g9 - 28) = g6;
                g6++;
                int32_t v157 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e316d8
                g2 = v157;
                v119 = v157;
                while (g6 <= v86) {
                    // 0x1e316c1
                    *(int32_t *)(g9 - 4) = v157;
                    *(int32_t *)(g9 - 8) = a2;
                    *(int32_t *)(g9 - 12) = v2;
                    *(int32_t *)(g9 - 16) = v1;
                    *(int32_t *)(g9 - 20) = (int32_t)&result;
                    g5 = g8;
                    *(int32_t *)(g9 - 24) = v58;
                    *(int32_t *)(g9 - 28) = g6;
                    g6++;
                    v157 = function_1e311c3((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                    g2 = v157;
                    v119 = v157;
                }
                goto lab_0x1e31988;
            }
        }
    }
  lab_0x1e31988:
    // 0x1e31988
    if (v119 > 0) {
        // 0x1e3198e
        g2 = v119;
        int32_t v158 = g8 + 36; // 0x1e31994
        int32_t v159 = *(int32_t *)v158; // 0x1e31994
        g5 = v159;
        int32_t v160 = v119 - 1; // 0x1e31999
        g2 = v160;
        *(char *)(v159 + 12) = 0;
        while (v160 != 0) {
            // 0x1e31994
            v158 += 4;
            v159 = *(int32_t *)v158;
            g5 = v159;
            v160 = g2 - 1;
            g2 = v160;
            *(char *)(v159 + 12) = 0;
        }
    }
    goto lab_0x1e319a0;
  lab_0x1e319a0:
    // 0x1e319a0
    g11--;
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e319ac - 0x1e319ad
int32_t function_1e319ac(void) {
    // 0x1e319ac
    return g2;
}

// Address range: 0x1e319ad - 0x1e320db
int32_t function_1e319ad(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)g563; // 0x1e319b6
    g2 = v1;
    int32_t v2 = g8; // 0x1e319bc
    g4 = a1;
    int32_t v3 = g6; // 0x1e319c0
    float80_t v4 = sqrtl((float80_t)*(float32_t *)(a1 + 12)); // 0x1e319c4
    float80_t v5 = v4 + 0.001L * (float80_t)*g563; // 0x1e319ce
    float32_t * v6 = (float32_t *)a1; // 0x1e319d7
    float80_t v7 = (float80_t)*v6 - v5; // 0x1e319d9
    float32_t * v8 = (float32_t *)(a1 + 4); // 0x1e319de
    float80_t v9 = (float80_t)*v8 - v5; // 0x1e319e1
    g8 = v1;
    g6 = v1 + 16;
    float80_t v10 = v5 + (float80_t)*v6; // 0x1e319ed
    float80_t v11 = v5 + (float80_t)*v8; // 0x1e319f5
    float80_t v12 = v7 - (float80_t)*(float32_t *)(v1 + 24); // 0x1e319fe
    float80_t v13 = v12 * (float80_t)*(float32_t *)(v1 + 8); // 0x1e31a01
    g2 = function_1e3dbc0((int32_t)(float32_t)v13, v3, v2);
    g2 = *(int32_t *)g6 - 1;
    g11++;
    uint32_t v14 = (int32_t)__asm_fnstsw(g10); // 0x1e31a1a
    g2 = g2 & -0x10000 | v14;
    int3_t v15; // 0x1e31a41
    if ((v14 / 256 & 65) == 0) {
        int32_t v16 = g8; // 0x1e31a2d
        float80_t v17 = v7 - (float80_t)*(float32_t *)(v16 + 24); // 0x1e31a2d
        float80_t v18 = v17 * (float80_t)*(float32_t *)(v16 + 8); // 0x1e31a33
        int32_t v19 = function_1e3dbc0((int32_t)(float32_t)v18, (int32_t)&g708, (int32_t)&g708); // 0x1e31a39
        g2 = v19;
        v15 = g11;
    } else {
        // 0x1e31a1f
        g2 = *(int32_t *)g6 - 1;
        v15 = g11 - 1;
    }
    // 0x1e31a41
    g11 = v15 + 1;
    uint32_t v20 = (int32_t)__asm_fnstsw(g10); // 0x1e31a49
    g2 = g2 & -0x10000 | v20;
    int3_t v21; // 0x1e31ab0
    if ((v20 / 256 & 1) == 0) {
        // 0x1e31aa8
        g2 = 0;
        v21 = g11;
    } else {
        int32_t v22 = g8; // 0x1e31a51
        float80_t v23 = v7 - (float80_t)*(float32_t *)(v22 + 24); // 0x1e31a51
        float80_t v24 = v23 * (float80_t)*(float32_t *)(v22 + 8); // 0x1e31a57
        int32_t v25 = function_1e3dbc0((int32_t)(float32_t)v24, (int32_t)&g708, (int32_t)&g708); // 0x1e31a5d
        g2 = v25;
        g2 = *(int32_t *)g6 - 1;
        g11++;
        uint32_t v26 = (int32_t)__asm_fnstsw(g10); // 0x1e31a70
        g2 = g2 & -0x10000 | v26;
        int3_t v27; // 0x1e31a97
        float80_t v28; // 0x1e31a97
        if ((v26 / 256 & 65) == 0) {
            int32_t v29 = g8; // 0x1e31a83
            float80_t v30 = v7 - (float80_t)*(float32_t *)(v29 + 24); // 0x1e31a83
            float80_t v31 = v30 * (float80_t)*(float32_t *)(v29 + 8); // 0x1e31a89
            int32_t v32 = function_1e3dbc0((int32_t)(float32_t)v31, (int32_t)&g708, (int32_t)&g708); // 0x1e31a8f
            g2 = v32;
            v28 = g684;
            v27 = g11;
        } else {
            int32_t v33 = *(int32_t *)g6 - 1; // 0x1e31a77
            g2 = v33;
            v28 = v33;
            v27 = g11 - 1;
        }
        // 0x1e31a97
        g5 = (float32_t)v28;
        v21 = v27 + 1;
    }
    // 0x1e31ab0
    g11 = v21 - 1;
    int32_t v34 = __ftol(); // 0x1e31ab3
    g2 = v34;
    g8 = v34;
    int32_t v35 = (int32_t)g563; // 0x1e31abd
    g6 = v35;
    float32_t v36 = *(float32_t *)(v35 + 28); // 0x1e31ac6
    float32_t v37 = *(float32_t *)(v35 + 12); // 0x1e31ac9
    *(float64_t *)(g9 - 8) = (float64_t)((v9 - (float80_t)v36) * (float80_t)v37);
    int32_t v38 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31acf
    g2 = v38;
    g2 = *(int32_t *)(g6 + 20) - 1;
    g11++;
    uint32_t v39 = (int32_t)__asm_fnstsw(g10); // 0x1e31ae3
    g2 = g2 & -0x10000 | v39;
    int3_t v40; // 0x1e31b0b
    if ((v39 / 256 & 65) == 0) {
        int32_t v41 = g6; // 0x1e31af7
        float80_t v42 = v9 - (float80_t)*(float32_t *)(v41 + 28); // 0x1e31af7
        float80_t v43 = v42 * (float80_t)*(float32_t *)(v41 + 12); // 0x1e31afd
        *(float64_t *)(g9 - 8) = (float64_t)v43;
        int32_t v44 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31b03
        g2 = v44;
        v40 = g11;
    } else {
        // 0x1e31ae8
        g2 = *(int32_t *)(g6 + 20) - 1;
        v40 = g11 - 1;
    }
    // 0x1e31b0b
    g11 = v40 + 1;
    uint32_t v45 = (int32_t)__asm_fnstsw(g10); // 0x1e31b13
    g2 = g2 & -0x10000 | v45;
    int3_t v46; // 0x1e31b7c
    if ((v45 / 256 & 1) == 0) {
        // 0x1e31b74
        g2 = 0;
        v46 = g11;
    } else {
        int32_t v47 = g6; // 0x1e31b1b
        float80_t v48 = v9 - (float80_t)*(float32_t *)(v47 + 28); // 0x1e31b1b
        float80_t v49 = v48 * (float80_t)*(float32_t *)(v47 + 12); // 0x1e31b21
        *(float64_t *)(g9 - 8) = (float64_t)v49;
        int32_t v50 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31b27
        g2 = v50;
        g2 = *(int32_t *)(g6 + 20) - 1;
        g11++;
        uint32_t v51 = (int32_t)__asm_fnstsw(g10); // 0x1e31b3b
        g2 = g2 & -0x10000 | v51;
        int3_t v52; // 0x1e31b63
        float80_t v53; // 0x1e31b63
        if ((v51 / 256 & 65) == 0) {
            int32_t v54 = g6; // 0x1e31b4f
            float80_t v55 = v9 - (float80_t)*(float32_t *)(v54 + 28); // 0x1e31b4f
            float80_t v56 = v55 * (float80_t)*(float32_t *)(v54 + 12); // 0x1e31b55
            *(float64_t *)(g9 - 8) = (float64_t)v56;
            int32_t v57 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31b5b
            g2 = v57;
            v53 = g684;
            v52 = g11;
        } else {
            int32_t v58 = *(int32_t *)(g6 + 20) - 1; // 0x1e31b43
            g2 = v58;
            v53 = v58;
            v52 = g11 - 1;
        }
        // 0x1e31b63
        g5 = (float32_t)v53;
        v46 = v52 + 1;
    }
    // 0x1e31b7c
    g11 = v46 - 1;
    int32_t v59 = __ftol(); // 0x1e31b7f
    g2 = v59;
    int32_t v60 = (int32_t)g563; // 0x1e31b87
    g6 = v60;
    float32_t v61 = *(float32_t *)(v60 + 24); // 0x1e31b93
    float32_t v62 = *(float32_t *)(v60 + 8); // 0x1e31b96
    *(float64_t *)(g9 - 8) = (float64_t)((v10 - (float80_t)v61) * (float80_t)v62);
    g2 = function_1e3dbc0(v59, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g6 + 16) - 1;
    g11++;
    uint32_t v63 = (int32_t)__asm_fnstsw(g10); // 0x1e31bb0
    g2 = g2 & -0x10000 | v63;
    int3_t v64; // 0x1e31bd8
    if ((v63 / 256 & 65) == 0) {
        int32_t v65 = g6; // 0x1e31bc4
        float80_t v66 = v10 - (float80_t)*(float32_t *)(v65 + 24); // 0x1e31bc4
        float80_t v67 = v66 * (float80_t)*(float32_t *)(v65 + 8); // 0x1e31bca
        *(float64_t *)(g9 - 8) = (float64_t)v67;
        int32_t v68 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31bd0
        g2 = v68;
        v64 = g11;
    } else {
        // 0x1e31bb5
        g2 = *(int32_t *)(g6 + 16) - 1;
        v64 = g11 - 1;
    }
    // 0x1e31bd8
    g11 = v64 + 1;
    uint32_t v69 = (int32_t)__asm_fnstsw(g10); // 0x1e31be0
    g2 = g2 & -0x10000 | v69;
    int3_t v70; // 0x1e31c49
    if ((v69 / 256 & 1) == 0) {
        // 0x1e31c41
        g2 = 0;
        v70 = g11;
    } else {
        int32_t v71 = g6; // 0x1e31be8
        float80_t v72 = v10 - (float80_t)*(float32_t *)(v71 + 24); // 0x1e31be8
        float80_t v73 = v72 * (float80_t)*(float32_t *)(v71 + 8); // 0x1e31bee
        *(float64_t *)(g9 - 8) = (float64_t)v73;
        int32_t v74 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31bf4
        g2 = v74;
        g2 = *(int32_t *)(g6 + 16) - 1;
        g11++;
        uint32_t v75 = (int32_t)__asm_fnstsw(g10); // 0x1e31c08
        g2 = g2 & -0x10000 | v75;
        int3_t v76; // 0x1e31c30
        float80_t v77; // 0x1e31c30
        if ((v75 / 256 & 65) == 0) {
            int32_t v78 = g6; // 0x1e31c1c
            float80_t v79 = v10 - (float80_t)*(float32_t *)(v78 + 24); // 0x1e31c1c
            float80_t v80 = v79 * (float80_t)*(float32_t *)(v78 + 8); // 0x1e31c22
            *(float64_t *)(g9 - 8) = (float64_t)v80;
            int32_t v81 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31c28
            g2 = v81;
            v77 = g684;
            v76 = g11;
        } else {
            int32_t v82 = *(int32_t *)(g6 + 16) - 1; // 0x1e31c10
            g2 = v82;
            v77 = v82;
            v76 = g11 - 1;
        }
        // 0x1e31c30
        g5 = (float32_t)v77;
        v70 = v76 + 1;
    }
    // 0x1e31c49
    g11 = v70 - 1;
    int32_t v83 = __ftol(); // 0x1e31c4c
    g2 = v83;
    int32_t v84 = (int32_t)g563; // 0x1e31c54
    g6 = v84;
    float32_t v85 = *(float32_t *)(v84 + 28); // 0x1e31c60
    float32_t v86 = *(float32_t *)(v84 + 12); // 0x1e31c63
    *(float64_t *)(g9 - 8) = (float64_t)((v11 - (float80_t)v85) * (float80_t)v86);
    g2 = function_1e3dbc0(v83, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g6 + 20) - 1;
    g11++;
    uint32_t v87 = (int32_t)__asm_fnstsw(g10); // 0x1e31c7d
    g2 = g2 & -0x10000 | v87;
    int3_t v88; // 0x1e31ca5
    if ((v87 / 256 & 65) == 0) {
        int32_t v89 = g6; // 0x1e31c91
        float80_t v90 = v11 - (float80_t)*(float32_t *)(v89 + 28); // 0x1e31c91
        float80_t v91 = v90 * (float80_t)*(float32_t *)(v89 + 12); // 0x1e31c97
        *(float64_t *)(g9 - 8) = (float64_t)v91;
        int32_t v92 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31c9d
        g2 = v92;
        v88 = g11;
    } else {
        // 0x1e31c82
        g2 = *(int32_t *)(g6 + 20) - 1;
        v88 = g11 - 1;
    }
    // 0x1e31ca5
    g11 = v88 + 1;
    uint32_t v93 = (int32_t)__asm_fnstsw(g10); // 0x1e31cad
    g2 = g2 & -0x10000 | v93;
    if ((v93 / 256 & 1) == 0) {
        // 0x1e31d0e
        g2 = 0;
    } else {
        int32_t v94 = g6; // 0x1e31cb5
        float80_t v95 = v11 - (float80_t)*(float32_t *)(v94 + 28); // 0x1e31cb5
        float80_t v96 = v95 * (float80_t)*(float32_t *)(v94 + 12); // 0x1e31cbb
        *(float64_t *)(g9 - 8) = (float64_t)v96;
        int32_t v97 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31cc1
        g2 = v97;
        g2 = *(int32_t *)(g6 + 20) - 1;
        g11++;
        uint32_t v98 = (int32_t)__asm_fnstsw(g10); // 0x1e31cd5
        g2 = g2 & -0x10000 | v98;
        int3_t v99; // 0x1e31cfd
        float80_t v100; // 0x1e31cfd
        if ((v98 / 256 & 65) == 0) {
            int32_t v101 = g6; // 0x1e31ce9
            float80_t v102 = v11 - (float80_t)*(float32_t *)(v101 + 28); // 0x1e31ce9
            float80_t v103 = v102 * (float80_t)*(float32_t *)(v101 + 12); // 0x1e31cef
            *(float64_t *)(g9 - 8) = (float64_t)v103;
            int32_t v104 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31cf5
            g2 = v104;
            v100 = g684;
            v99 = g11;
        } else {
            int32_t v105 = *(int32_t *)(g6 + 20) - 1; // 0x1e31cdd
            g2 = v105;
            v100 = v105;
            v99 = g11 - 1;
        }
        // 0x1e31cfd
        g11 = v99 + 1;
        g5 = (float32_t)v100;
    }
    int32_t v106 = g8 - 1; // 0x1e31d16
    int32_t v107;
    if (v106 >= 0 != v106 != 0) {
        v107 = 0;
    } else {
        v107 = v106;
    }
    // 0x1e31d1d
    g8 = v107;
    int32_t v108 = v59 - 1; // 0x1e31d20
    int32_t v109;
    int32_t v110; // 0x1e31d2a
    if (v108 >= 0 != v108 != 0) {
        v109 = 0;
        v110 = 0;
    } else {
        v109 = v108;
        v110 = v108;
    }
    // 0x1e31d27
    g2 = v109;
    int32_t v111 = (int32_t)g563; // 0x1e31d2d
    g2 = v111;
    int32_t v112 = v83 + 1; // 0x1e31d32
    g5 = v112;
    int32_t v113 = *(int32_t *)(v111 + 16) - 1; // 0x1e31d36
    if (v113 >= v112) {
        // branch -> 0x1e31d3d
    } else {
        v112 = v113;
    }
    // 0x1e31d3d
    g2 = v112;
    g11--;
    g2 = v111;
    int32_t v114 = *(int32_t *)(v111 + 20) - 1; // 0x1e31d50
    g6 = v114;
    int32_t v115 = __ftol() + 1; // 0x1e31d51
    g2 = v115;
    if (v114 >= v115) {
        // 0x1e31d56
        g6 = v115;
    } else {
        v115 = v114;
    }
    int32_t v116 = (int32_t)g563; // 0x1e31d58
    g2 = v116;
    int32_t v117 = g8; // 0x1e31d60
    float80_t v118 = (float80_t)v117 * (float80_t)*g563; // 0x1e31d66
    float32_t v119 = v118 + (float80_t)*(float32_t *)(v116 + 24); // 0x1e31d71
    float80_t v120 = (float80_t)v110 * (float80_t)*(float32_t *)(v116 + 4); // 0x1e31d77
    float32_t v121 = v120 + (float80_t)*(float32_t *)(v116 + 28); // 0x1e31d7d
    float32_t v122;
    float32_t v123; // bp-124
    float32_t v124;
    float32_t v125;
    float32_t v126;
    float32_t v127;
    int32_t v128;
    int3_t v129; // 0x1e31da2
    int3_t v130; // 0x1e3209e
    int32_t result; // 0x1e320b0
    int32_t v131; // 0x1e31e2d
    int32_t v132; // 0x1e31ee9
    if (v112 >= v117) {
        // 0x1e31d8e
        v131 = &v119;
        v132 = &v123;
        float32_t * v133 = g563; // 0x1e320b0111
        int3_t v134 = g11; // 0x1e31da2110
        while (true) {
            // 0x1e31d8e
            g2 = v110;
            float32_t v135;
            float32_t v136;
            float32_t v137;
            float32_t v138;
            float32_t * v139; // 0x1e320b0
            int3_t v140; // 0x1e320be
            if (v115 >= v110) {
                v129 = v134;
                v128 = v110;
                v124 = v121;
                v125 = v138;
                v122 = v137;
                while (true) {
                  lab_0x1e31da2:
                    // 0x1e31da2
                    g11 = v129;
                    uint32_t v141 = (int32_t)__asm_fnstsw(g10); // 0x1e31da8
                    g2 = g2 & -0x10000 | v141;
                    if ((v141 / 256 & 1) == 0) {
                        // 0x1e31db1
                        g2 = (int32_t)g563;
                        uint32_t v142 = (int32_t)__asm_fnstsw(g10); // 0x1e31dc4
                        g2 = g2 & -0x10000 | v142;
                        if ((v142 / 256 & 1) == 0) {
                            uint32_t v143 = (int32_t)__asm_fnstsw(g10); // 0x1e31dd3
                            g2 = g2 & -0x10000 | v143;
                            if ((v143 / 256 & 1) == 0) {
                                // 0x1e31ddc
                                g2 = (int32_t)g563;
                                uint32_t v144 = (int32_t)__asm_fnstsw(g10); // 0x1e31df0
                                g2 = g2 & -0x10000 | v144;
                                if ((v144 / 256 & 1) == 0) {
                                    uint32_t v145 = (int32_t)__asm_fnstsw(g10); // 0x1e31e01
                                    g2 = g2 & -0x10000 | v145;
                                    if ((v145 / 256 & 65) == 0) {
                                        goto lab_0x1e31e2d;
                                    } else {
                                        uint32_t v146 = (int32_t)__asm_fnstsw(g10); // 0x1e31e0b
                                        g2 = g2 & -0x10000 | v146;
                                        if ((v146 / 256 & 1) == 0) {
                                            uint32_t v147 = (int32_t)__asm_fnstsw(g10); // 0x1e31e19
                                            g2 = g2 & -0x10000 | v147;
                                            if ((v147 / 256 & 65) == 0) {
                                                goto lab_0x1e31e2d;
                                            } else {
                                                uint32_t v148 = (int32_t)__asm_fnstsw(g10); // 0x1e31e24
                                                g2 = g2 & -0x10000 | v148;
                                                if ((v148 / 256 & 1) == 0) {
                                                    v126 = v125;
                                                    goto lab_0x1e3205f;
                                                } else {
                                                    goto lab_0x1e31e2d;
                                                }
                                            }
                                        } else {
                                            goto lab_0x1e31e2d;
                                        }
                                    }
                                } else {
                                    v127 = v125;
                                    goto lab_0x1e32093;
                                }
                            } else {
                                v127 = v125;
                                goto lab_0x1e32093;
                            }
                        } else {
                            v127 = v125;
                            goto lab_0x1e32093;
                        }
                    } else {
                        v127 = v125;
                        goto lab_0x1e32093;
                    }
                }
              lab_0x1e320b0:
                // 0x1e320b0
                v140 = v130;
                v139 = g563;
                v136 = v127;
                v135 = v122;
            } else {
                v140 = v134;
                v139 = v133;
                v136 = v138;
                v135 = v137;
            }
            // 0x1e320b0
            result = (int32_t)v139;
            g2 = result;
            g5 = v121;
            int32_t v149 = v117 + 1; // 0x1e320b8
            float32_t v150 = (float80_t)v119 + (float80_t)*v139; // 0x1e320cf
            v119 = v150;
            g11 = v140;
            if (v112 < v149) {
                // break -> 0x1e320d2
                break;
            }
            v119 = v150;
            v133 = v139;
            v134 = v140;
            v117 = v149;
            v138 = v136;
            v137 = v135;
        }
    } else {
        result = v116;
    }
    // 0x1e320d2
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e32093:;
    int32_t v151 = (int32_t)g563; // 0x1e32093
    g2 = v151;
    int32_t v152 = v128 + 1; // 0x1e32098
    g5 = v152;
    v130 = g11;
    float80_t v153 = (float80_t)v124 + (float80_t)*(float32_t *)(v151 + 4); // 0x1e320a1
    if (v115 < v152) {
        // break -> 0x1e320b0
        goto lab_0x1e320b0;
    }
    v129 = v130;
    v128 = v152;
    v124 = v153;
    v125 = v127;
    goto lab_0x1e31da2;
  lab_0x1e31e2d:;
    int32_t v154 = *(int32_t *)&v119; // 0x1e31e335
    float32_t v155;
    *(int32_t *)&v155 = v154;
    float32_t v156; // bp-68
    *(int32_t *)&v156 = v154;
    int32_t v157 = g1 ? -4 : 4; // 0x1e31e33
    int32_t v158 = v157 + (int32_t)&v156; // 0x1e31e33
    int32_t v159 = v157 + v131; // 0x1e31e33
    *(int32_t *)v158 = *(int32_t *)v159;
    int32_t v160 = v158 + v157; // 0x1e31e34
    int32_t v161 = v159 + v157; // 0x1e31e34
    *(int32_t *)v160 = *(int32_t *)v161;
    g6 = v160 + v157;
    g8 = v161 + v157;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g4 + 8);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
    *(int32_t *)(g9 - 12) = *(int32_t *)g4;
    *(int32_t *)(g9 - 20) = (int32_t)v124;
    *(int32_t *)(g9 - 24) = (int32_t)v119;
    float80_t v162 = function_1e30e04(v155, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31e47
    g2 = (float32_t)v162;
    g11++;
    uint32_t v163 = (int32_t)__asm_fnstsw(g10); // 0x1e31e4f
    g2 = g2 & -0x10000 | v163;
    if ((v163 / 256 & 65) == 0) {
        // 0x1e31e58
        *(int32_t *)(g9 - 4) = *(int32_t *)(g4 + 8);
        *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
        *(int32_t *)(g9 - 12) = *(int32_t *)g4;
        g2 = (int32_t)g563;
        float80_t v164 = (float80_t)*g563 + (float80_t)v119; // 0x1e31e67
        v156 = v164;
        *(int32_t *)(g9 - 20) = (int32_t)v125;
        *(int32_t *)(g9 - 24) = (int32_t)v156;
        float80_t v165 = function_1e30e04((float32_t)(int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31e76
        g2 = (float32_t)v165;
        g11++;
        uint32_t v166 = (int32_t)__asm_fnstsw(g10); // 0x1e31e7e
        g2 = g2 & -0x10000 | v166;
        if ((v166 / 256 & 65) == 0) {
            // 0x1e31e87
            *(int32_t *)(g9 - 4) = *(int32_t *)(g4 + 8);
            *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
            *(int32_t *)(g9 - 12) = *(int32_t *)g4;
            int32_t v167 = (int32_t)g563; // 0x1e31e8f
            g2 = v167;
            float80_t v168 = (float80_t)v125 + (float80_t)*(float32_t *)(v167 + 4); // 0x1e31e97
            float32_t v169 = v168; // 0x1e31e9a
            *(int32_t *)(g9 - 20) = (int32_t)v169;
            *(int32_t *)(g9 - 24) = (int32_t)v156;
            float80_t v170 = function_1e30e04((float32_t)(int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31ea6
            g2 = (float32_t)v170;
            g11++;
            uint32_t v171 = (int32_t)__asm_fnstsw(g10); // 0x1e31eae
            g2 = g2 & -0x10000 | v171;
            if ((v171 / 256 & 65) == 0) {
                // 0x1e31eb7
                *(int32_t *)(g9 - 4) = *(int32_t *)(g4 + 8);
                *(int32_t *)(g9 - 8) = *(int32_t *)(g4 + 4);
                *(int32_t *)(g9 - 12) = *(int32_t *)g4;
                g2 = (int32_t)g563;
                float80_t v172 = (float80_t)v156 - (float80_t)*g563; // 0x1e31ec7
                v156 = v172;
                *(int32_t *)(g9 - 20) = (int32_t)v169;
                *(int32_t *)(g9 - 24) = (int32_t)v156;
                float80_t v173 = function_1e30e04((float32_t)(int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e31ed5
                g2 = (float32_t)v173;
                g11++;
                uint32_t v174 = (int32_t)__asm_fnstsw(g10); // 0x1e31edd
                g2 = g2 & -0x10000 | v174;
                if ((v174 / 256 & 65) == 0) {
                    // 0x1e31ee6
                    *(int32_t *)&v123 = *(int32_t *)&v119;
                    int32_t v175 = g1 ? -4 : 4; // 0x1e31eec
                    int32_t v176 = v175 + v132; // 0x1e31eec
                    int32_t v177 = v175 + v131; // 0x1e31eec
                    *(int32_t *)v176 = *(int32_t *)v177;
                    int32_t v178 = v176 + v175; // 0x1e31eed
                    int32_t v179 = v177 + v175; // 0x1e31eed
                    *(int32_t *)v178 = *(int32_t *)v179;
                    g6 = v178 + v175;
                    g8 = v179 + v175;
                    g2 = (int32_t)g563;
                    *(int32_t *)(g9 - 4) = g4;
                    g5 = *(int32_t *)g2;
                    g2 = v132;
                    *(int32_t *)(g9 - 8) = v132;
                    g2 = function_1e3a828((int32_t)v123, (int32_t)&g708);
                    g11++;
                    uint32_t v180 = (int32_t)__asm_fnstsw(g10); // 0x1e31f17
                    g2 = g2 & -0x10000 | v180;
                    if ((v180 / 256 & 1) == 0) {
                        // 0x1e31f20
                        g2 = (int32_t)g563;
                        *(int32_t *)(g9 - 4) = g4;
                        float32_t v181 = *(float32_t *)g2; // 0x1e31f2d
                        g5 = v132;
                        *(int32_t *)(g9 - 8) = v132;
                        float32_t v182 = (float80_t)v181 + (float80_t)v123; // 0x1e31f36
                        v123 = v182;
                        g2 = function_1e3a828((int32_t)v182, (int32_t)&g708);
                        g11++;
                        uint32_t v183 = (int32_t)__asm_fnstsw(g10); // 0x1e31f44
                        g2 = g2 & -0x10000 | v183;
                        if ((v183 / 256 & 1) == 0) {
                            // 0x1e31f4d
                            g2 = (int32_t)g563;
                            *(int32_t *)(g9 - 4) = g4;
                            g5 = *(int32_t *)(g2 + 4);
                            g2 = v132;
                            *(int32_t *)(g9 - 8) = v132;
                            g2 = function_1e3a828(0, 0x3f800000);
                            g11++;
                            uint32_t v184 = (int32_t)__asm_fnstsw(g10); // 0x1e31f76
                            g2 = g2 & -0x10000 | v184;
                            if ((v184 / 256 & 1) == 0) {
                                // 0x1e31f7f
                                g2 = (int32_t)g563;
                                *(int32_t *)(g9 - 4) = g4;
                                g5 = v132;
                                *(int32_t *)(g9 - 8) = v132;
                                float80_t v185 = (float80_t)v122 + (float80_t)*(float32_t *)(g2 + 4); // 0x1e31f96
                                float32_t v186 = v185; // 0x1e31f96
                                g2 = function_1e3a828((int32_t)v186, (int32_t)&g708);
                                g11++;
                                uint32_t v187 = (int32_t)__asm_fnstsw(g10); // 0x1e31fa4
                                g2 = g2 & -0x10000 | v187;
                                if ((v187 / 256 & 1) == 0) {
                                    // 0x1e31fad
                                    g2 = (int32_t)g563;
                                    *(int32_t *)(g9 - 4) = g4;
                                    g5 = *(int32_t *)g2;
                                    g2 = v132;
                                    *(int32_t *)(g9 - 8) = v132;
                                    g2 = function_1e3a828(-0x40800000, 0);
                                    g11++;
                                    uint32_t v188 = (int32_t)__asm_fnstsw(g10); // 0x1e31fd5
                                    g2 = g2 & -0x10000 | v188;
                                    if ((v188 / 256 & 1) == 0) {
                                        // 0x1e31fde
                                        g2 = (int32_t)g563;
                                        *(int32_t *)(g9 - 4) = g4;
                                        float32_t v189 = *(float32_t *)g2; // 0x1e31fee
                                        g5 = v132;
                                        *(int32_t *)(g9 - 8) = v132;
                                        float32_t v190 = (float80_t)v123 - (float80_t)v189; // 0x1e31ff4
                                        v123 = v190;
                                        g2 = function_1e3a828((int32_t)v190, (int32_t)&g708);
                                        g11++;
                                        uint32_t v191 = (int32_t)__asm_fnstsw(g10); // 0x1e32002
                                        g2 = g2 & -0x10000 | v191;
                                        if ((v191 / 256 & 1) == 0) {
                                            // 0x1e32007
                                            g2 = (int32_t)g563;
                                            *(int32_t *)(g9 - 4) = g4;
                                            g5 = *(int32_t *)(g2 + 4);
                                            g2 = v132;
                                            *(int32_t *)(g9 - 8) = v132;
                                            g2 = function_1e3a828(0, -0x40800000);
                                            g11++;
                                            uint32_t v192 = (int32_t)__asm_fnstsw(g10); // 0x1e32030
                                            g2 = g2 & -0x10000 | v192;
                                            if ((v192 / 256 & 1) == 0) {
                                                // 0x1e32035
                                                g2 = (int32_t)g563;
                                                *(int32_t *)(g9 - 4) = g4;
                                                g5 = v132;
                                                *(int32_t *)(g9 - 8) = v132;
                                                float32_t v193 = v185 - (float80_t)*(float32_t *)(g2 + 4); // 0x1e3204c
                                                g2 = function_1e3a828((int32_t)v193, (int32_t)&g708);
                                                g11++;
                                                uint32_t v194 = (int32_t)__asm_fnstsw(g10); // 0x1e3205a
                                                g2 = g2 & -0x10000 | v194;
                                                if ((v194 / 256 & 1) == 0) {
                                                    v127 = v169;
                                                    v122 = v193;
                                                    goto lab_0x1e32093;
                                                } else {
                                                    v126 = v169;
                                                    v122 = v193;
                                                    goto lab_0x1e3205f;
                                                }
                                            } else {
                                                v126 = v169;
                                                v122 = v186;
                                                goto lab_0x1e3205f;
                                            }
                                        } else {
                                            v126 = v169;
                                            v122 = v186;
                                            goto lab_0x1e3205f;
                                        }
                                    } else {
                                        v126 = v169;
                                        v122 = v186;
                                        goto lab_0x1e3205f;
                                    }
                                } else {
                                    v126 = v169;
                                    v122 = v186;
                                    goto lab_0x1e3205f;
                                }
                            } else {
                                v126 = v169;
                                goto lab_0x1e3205f;
                            }
                        } else {
                            v126 = v169;
                            goto lab_0x1e3205f;
                        }
                    } else {
                        v126 = v169;
                        goto lab_0x1e3205f;
                    }
                } else {
                    v126 = v169;
                    goto lab_0x1e3205f;
                }
            } else {
                v126 = v169;
                goto lab_0x1e3205f;
            }
        } else {
            v126 = v125;
            goto lab_0x1e3205f;
        }
    } else {
        v126 = v125;
        goto lab_0x1e3205f;
    }
  lab_0x1e3205f:
    if (a2 != 0) {
        // 0x1e32065
        *(int32_t *)(g9 - 4) = a2;
        *(int32_t *)(g9 - 8) = v128;
        *(int32_t *)(g9 - 12) = v117;
        g5 = (int32_t)g563;
        g2 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
    }
    if (a3 != 0) {
        // 0x1e3207f
        *(int32_t *)(g9 - 4) = a3;
        *(int32_t *)(g9 - 8) = v128;
        *(int32_t *)(g9 - 12) = v117;
        g5 = (int32_t)g563;
        g2 = function_1e30f54((int32_t)&g708, (int32_t)&g708);
        v127 = v126;
    } else {
        v127 = v126;
    }
    goto lab_0x1e32093;
}

// Address range: 0x1e320db - 0x1e32545
int32_t function_1e320db(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g3; // bp-4
    g2 = (int32_t)g563;
    g3 = &v1;
    int32_t v2 = __ftol(); // esi
    g2 = (int32_t)g563;
    g11 -= 2;
    int32_t v3 = __ftol(); // 0x1e32106
    g2 = v3;
    int32_t v4 = (int32_t)g563; // 0x1e32128
    int32_t v5 = v4 + 24; // 0x1e32130
    g4 = v5;
    int32_t v6 = v4 + 8; // 0x1e32133
    g6 = v6;
    g8 = v4 + 16;
    float80_t v7 = (float32_t)a2 - (float32_t)v2; // 0x1e32145
    float32_t v8 = *(float32_t *)v5; // 0x1e32148
    float32_t v9 = *(float32_t *)v6; // 0x1e3214a
    int32_t v10 = function_1e3dbc0((int32_t)(float32_t)((v7 - (float80_t)v8) * (float80_t)v9), (int32_t)&g708, (int32_t)&g708); // 0x1e3214f
    g2 = v10;
    g2 = *(int32_t *)g8 - 1;
    g11++;
    uint32_t v11 = (int32_t)__asm_fnstsw(g10); // 0x1e32162
    g2 = g2 & -0x10000 | v11;
    int3_t v12; // 0x1e32187
    if ((v11 / 256 & 65) == 0) {
        float32_t v13 = *(float32_t *)g4; // 0x1e32175
        float32_t v14 = *(float32_t *)g6; // 0x1e3217a
        int32_t v15 = function_1e3dbc0((int32_t)(float32_t)((v7 - (float80_t)v13) * (float80_t)v14), (int32_t)&g708, (int32_t)&g708); // 0x1e3217f
        g2 = v15;
        v12 = g11;
    } else {
        // 0x1e32167
        g2 = *(int32_t *)g8 - 1;
        v12 = g11 - 1;
    }
    // 0x1e32187
    g11 = v12 + 1;
    uint32_t v16 = (int32_t)__asm_fnstsw(g10); // 0x1e3218f
    g2 = g2 & -0x10000 | v16;
    float32_t v17;
    int3_t v18; // 0x1e321f2
    if ((v16 / 256 & 1) == 0) {
        // 0x1e321ea
        g2 = 0;
        v18 = g11;
    } else {
        float32_t v19 = *(float32_t *)g4; // 0x1e32197
        float32_t v20 = *(float32_t *)g6; // 0x1e3219c
        int32_t v21 = function_1e3dbc0((int32_t)(float32_t)((v7 - (float80_t)v19) * (float80_t)v20), (int32_t)&g708, (int32_t)&g708); // 0x1e321a1
        g2 = v21;
        g2 = *(int32_t *)g8 - 1;
        g11++;
        uint32_t v22 = (int32_t)__asm_fnstsw(g10); // 0x1e321b4
        g2 = g2 & -0x10000 | v22;
        int3_t v23; // 0x1e321d9
        float80_t v24; // 0x1e321d9
        if ((v22 / 256 & 65) == 0) {
            float32_t v25 = *(float32_t *)g4; // 0x1e321c7
            float32_t v26 = *(float32_t *)g6; // 0x1e321cc
            int32_t v27 = function_1e3dbc0((int32_t)(float32_t)((v7 - (float80_t)v25) * (float80_t)v26), (int32_t)&g708, (int32_t)&g708); // 0x1e321d1
            g2 = v27;
            v24 = g684;
            v23 = g11;
        } else {
            int32_t v28 = *(int32_t *)g8 - 1; // 0x1e321bb
            g2 = v28;
            v24 = v28;
            v23 = g11 - 1;
        }
        // 0x1e321d9
        g2 = v17;
        g5 = (float32_t)v24;
        v18 = v23 + 1;
    }
    // 0x1e321f2
    g11 = v18 - 1;
    int32_t v29 = __ftol(); // 0x1e321f5
    g2 = v29;
    float80_t v30 = (float32_t)a1 - (float32_t)v3; // 0x1e321fa
    g8 = v29;
    int32_t v31 = (int32_t)g563; // 0x1e321ff
    g4 = v31;
    int32_t v32 = v31 + 28; // 0x1e32208
    g6 = v32;
    float32_t v33 = *(float32_t *)v32; // 0x1e3220b
    float32_t v34 = *(float32_t *)(v31 + 12); // 0x1e3220d
    *(float64_t *)(g9 - 8) = (float64_t)((v30 - (float80_t)v33) * (float80_t)v34);
    int32_t v35 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32213
    g2 = v35;
    g2 = *(int32_t *)(g4 + 20) - 1;
    g11++;
    uint32_t v36 = (int32_t)__asm_fnstsw(g10); // 0x1e32227
    g2 = g2 & -0x10000 | v36;
    int3_t v37; // 0x1e3224e
    if ((v36 / 256 & 65) == 0) {
        float32_t v38 = *(float32_t *)g6; // 0x1e3223b
        float32_t v39 = *(float32_t *)(g4 + 12); // 0x1e32240
        *(float64_t *)(g9 - 8) = (float64_t)((v30 - (float80_t)v38) * (float80_t)v39);
        int32_t v40 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32246
        g2 = v40;
        v37 = g11;
    } else {
        // 0x1e3222c
        g2 = *(int32_t *)(g4 + 20) - 1;
        v37 = g11 - 1;
    }
    // 0x1e3224e
    g11 = v37 + 1;
    uint32_t v41 = (int32_t)__asm_fnstsw(g10); // 0x1e32256
    g2 = g2 & -0x10000 | v41;
    int3_t v42; // 0x1e322bd
    if ((v41 / 256 & 1) == 0) {
        // 0x1e322b5
        g2 = 0;
        v42 = g11;
    } else {
        float32_t v43 = *(float32_t *)g6; // 0x1e3225e
        float32_t v44 = *(float32_t *)(g4 + 12); // 0x1e32263
        *(float64_t *)(g9 - 8) = (float64_t)((v30 - (float80_t)v43) * (float80_t)v44);
        int32_t v45 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32269
        g2 = v45;
        g2 = *(int32_t *)(g4 + 20) - 1;
        g11++;
        uint32_t v46 = (int32_t)__asm_fnstsw(g10); // 0x1e3227d
        g2 = g2 & -0x10000 | v46;
        int3_t v47; // 0x1e322a4
        float80_t v48; // 0x1e322a4
        if ((v46 / 256 & 65) == 0) {
            float32_t v49 = *(float32_t *)g6; // 0x1e32291
            float32_t v50 = *(float32_t *)(g4 + 12); // 0x1e32296
            *(float64_t *)(g9 - 8) = (float64_t)((v30 - (float80_t)v49) * (float80_t)v50);
            int32_t v51 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3229c
            g2 = v51;
            v48 = g684;
            v47 = g11;
        } else {
            int32_t v52 = *(int32_t *)(g4 + 20) - 1; // 0x1e32285
            g2 = v52;
            v48 = v52;
            v47 = g11 - 1;
        }
        // 0x1e322a4
        g2 = v17;
        g5 = (float32_t)v48;
        v42 = v47 + 1;
    }
    // 0x1e322bd
    g11 = v42 - 1;
    int32_t v53 = __ftol(); // 0x1e322c0
    g2 = v53;
    float80_t v54 = (float32_t)a4 + (float32_t)v2; // 0x1e322c5
    g6 = v53;
    int32_t v55 = (int32_t)g563; // 0x1e322ca
    g4 = v55;
    float32_t v56 = *(float32_t *)(v55 + 24); // 0x1e322d3
    float32_t v57 = *(float32_t *)(v55 + 8); // 0x1e322d6
    *(float64_t *)(g9 - 8) = (float64_t)((v54 - (float80_t)v56) * (float80_t)v57);
    int32_t v58 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e322dc
    g2 = v58;
    g2 = *(int32_t *)(g4 + 16) - 1;
    g11++;
    uint32_t v59 = (int32_t)__asm_fnstsw(g10); // 0x1e322f0
    g2 = g2 & -0x10000 | v59;
    int3_t v60; // 0x1e32318
    if ((v59 / 256 & 65) == 0) {
        int32_t v61 = g4; // 0x1e32304
        float32_t v62 = *(float32_t *)(v61 + 24); // 0x1e32304
        float32_t v63 = *(float32_t *)(v61 + 8); // 0x1e3230a
        *(float64_t *)(g9 - 8) = (float64_t)((v54 - (float80_t)v62) * (float80_t)v63);
        int32_t v64 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32310
        g2 = v64;
        v60 = g11;
    } else {
        // 0x1e322f5
        g2 = *(int32_t *)(g4 + 16) - 1;
        v60 = g11 - 1;
    }
    // 0x1e32318
    g11 = v60 + 1;
    uint32_t v65 = (int32_t)__asm_fnstsw(g10); // 0x1e32320
    g2 = g2 & -0x10000 | v65;
    int3_t v66; // 0x1e32389
    if ((v65 / 256 & 1) == 0) {
        // 0x1e32381
        g2 = 0;
        v66 = g11;
    } else {
        int32_t v67 = g4; // 0x1e32328
        float32_t v68 = *(float32_t *)(v67 + 24); // 0x1e32328
        float32_t v69 = *(float32_t *)(v67 + 8); // 0x1e3232e
        *(float64_t *)(g9 - 8) = (float64_t)((v54 - (float80_t)v68) * (float80_t)v69);
        int32_t v70 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32334
        g2 = v70;
        g2 = *(int32_t *)(g4 + 16) - 1;
        g11++;
        uint32_t v71 = (int32_t)__asm_fnstsw(g10); // 0x1e32348
        g2 = g2 & -0x10000 | v71;
        int3_t v72; // 0x1e32370
        float80_t v73; // 0x1e32370
        if ((v71 / 256 & 65) == 0) {
            int32_t v74 = g4; // 0x1e3235c
            float32_t v75 = *(float32_t *)(v74 + 24); // 0x1e3235c
            float32_t v76 = *(float32_t *)(v74 + 8); // 0x1e32362
            *(float64_t *)(g9 - 8) = (float64_t)((v54 - (float80_t)v75) * (float80_t)v76);
            int32_t v77 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32368
            g2 = v77;
            v73 = g684;
            v72 = g11;
        } else {
            int32_t v78 = *(int32_t *)(g4 + 16) - 1; // 0x1e32350
            g2 = v78;
            v73 = v78;
            v72 = g11 - 1;
        }
        // 0x1e32370
        g2 = v17;
        g5 = (float32_t)v73;
        v66 = v72 + 1;
    }
    // 0x1e32389
    g11 = v66 - 1;
    int32_t v79 = __ftol(); // 0x1e3238c
    g2 = v79;
    float80_t v80 = (float32_t)a3 + (float32_t)v3; // 0x1e32391
    int32_t v81 = (int32_t)g563; // 0x1e32394
    g4 = v81;
    float32_t v82 = *(float32_t *)(v81 + 28); // 0x1e323a0
    float32_t v83 = *(float32_t *)(v81 + 12); // 0x1e323a3
    *(float64_t *)(g9 - 8) = (float64_t)((v80 - (float80_t)v82) * (float80_t)v83);
    g2 = function_1e3dbc0(v79, (int32_t)&g708, (int32_t)&g708);
    g2 = *(int32_t *)(g4 + 20) - 1;
    g11++;
    uint32_t v84 = (int32_t)__asm_fnstsw(g10); // 0x1e323bd
    g2 = g2 & -0x10000 | v84;
    int3_t v85; // 0x1e323e5
    if ((v84 / 256 & 65) == 0) {
        int32_t v86 = g4; // 0x1e323d1
        float32_t v87 = *(float32_t *)(v86 + 28); // 0x1e323d1
        float32_t v88 = *(float32_t *)(v86 + 12); // 0x1e323d7
        *(float64_t *)(g9 - 8) = (float64_t)((v80 - (float80_t)v87) * (float80_t)v88);
        int32_t v89 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e323dd
        g2 = v89;
        v85 = g11;
    } else {
        // 0x1e323c2
        g2 = *(int32_t *)(g4 + 20) - 1;
        v85 = g11 - 1;
    }
    // 0x1e323e5
    g11 = v85 + 1;
    uint32_t v90 = (int32_t)__asm_fnstsw(g10); // 0x1e323ed
    g2 = g2 & -0x10000 | v90;
    int3_t v91; // 0x1e32456
    if ((v90 / 256 & 1) == 0) {
        // 0x1e3244e
        g2 = 0;
        v91 = g11;
    } else {
        int32_t v92 = g4; // 0x1e323f5
        float32_t v93 = *(float32_t *)(v92 + 28); // 0x1e323f5
        float32_t v94 = *(float32_t *)(v92 + 12); // 0x1e323fb
        *(float64_t *)(g9 - 8) = (float64_t)((v80 - (float80_t)v93) * (float80_t)v94);
        int32_t v95 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32401
        g2 = v95;
        g2 = *(int32_t *)(g4 + 20) - 1;
        g11++;
        uint32_t v96 = (int32_t)__asm_fnstsw(g10); // 0x1e32415
        g2 = g2 & -0x10000 | v96;
        int3_t v97; // 0x1e3243d
        float80_t v98; // 0x1e3243d
        if ((v96 / 256 & 65) == 0) {
            int32_t v99 = g4; // 0x1e32429
            float32_t v100 = *(float32_t *)(v99 + 28); // 0x1e32429
            float32_t v101 = *(float32_t *)(v99 + 12); // 0x1e3242f
            *(float64_t *)(g9 - 8) = (float64_t)((v80 - (float80_t)v100) * (float80_t)v101);
            int32_t v102 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e32435
            g2 = v102;
            v98 = g684;
            v97 = g11;
        } else {
            int32_t v103 = *(int32_t *)(g4 + 20) - 1; // 0x1e3241d
            g2 = v103;
            v98 = v103;
            v97 = g11 - 1;
        }
        // 0x1e3243d
        float32_t v104;
        g2 = v104;
        g5 = (float32_t)v98;
        v91 = v97 + 1;
    }
    // 0x1e32456
    g11 = v91 - 1;
    int32_t v105 = __ftol(); // 0x1e32459
    int32_t v106 = g8; // 0x1e32461
    int32_t v107 = (int32_t)g563; // 0x1e32467
    g2 = v107;
    int32_t v108 = g6; // 0x1e3246c
    float32_t v109 = *g563; // 0x1e3246f
    float32_t v110 = *(float32_t *)(v107 + 24); // 0x1e32471
    float32_t v111 = (float80_t)(float32_t)v106 * (float80_t)v109 + (float80_t)v110; // 0x1e32477
    int32_t result; // 0x1e32520
    if (v79 >= v106) {
        float32_t v112 = *(float32_t *)(v107 + 4); // 0x1e3247a
        float32_t v113 = *(float32_t *)(v107 + 28); // 0x1e32480
        float32_t * v114 = g563; // 0x1e3252076
        int3_t v115 = g11; // 0x1e324a471
        int32_t v116 = v108; // 0x1e32494
        while (true) {
            // 0x1e32494
            g4 = v116;
            int32_t v117; // 0x1e3251f
            float32_t * v118; // 0x1e32520
            int3_t v119; // 0x1e3252b
            if (v105 >= v116) {
                int3_t v120 = v115; // 0x1e324a4
                int3_t v121; // 0x1e32514
                while (true) {
                    uint32_t v122 = (int32_t)__asm_fnstsw(g10); // 0x1e324aa
                    g2 = g2 & -0x10000 | v122;
                    if ((v122 / 256 & 65) != 0) {
                        // 0x1e324af
                        g2 = (int32_t)g563;
                        uint32_t v123 = (int32_t)__asm_fnstsw(g10); // 0x1e324bc
                        g2 = g2 & -0x10000 | v123;
                        if ((v123 / 256 & 1) == 0) {
                            uint32_t v124 = (int32_t)__asm_fnstsw(g10); // 0x1e324c7
                            g2 = g2 & -0x10000 | v124;
                            if ((v124 / 256 & 65) != 0) {
                                // 0x1e324cc
                                g2 = (int32_t)g563;
                                uint32_t v125 = (int32_t)__asm_fnstsw(g10); // 0x1e324da
                                g2 = g2 & -0x10000 | v125;
                                if ((v125 / 256 & 1) == 0) {
                                    if (a5 != 0) {
                                        // 0x1e324e5
                                        *(int32_t *)(g9 - 4) = a5;
                                        *(int32_t *)(g9 - 8) = g4;
                                        *(int32_t *)(g9 - 12) = g8;
                                        g5 = (int32_t)g563;
                                        g2 = function_1e30f1c((int32_t)&g708, (int32_t)&g708);
                                    }
                                    if (a6 != 0) {
                                        // 0x1e324fb
                                        *(int32_t *)(g9 - 4) = a6;
                                        *(int32_t *)(g9 - 8) = g4;
                                        *(int32_t *)(g9 - 12) = g8;
                                        g5 = (int32_t)g563;
                                        g2 = function_1e30f54((int32_t)&g708, (int32_t)&g708);
                                    }
                                }
                            }
                        }
                    }
                    int32_t v126 = g4 + 1; // 0x1e3250b
                    g4 = v126;
                    g2 = (int32_t)g563;
                    v121 = v120;
                    if (v105 < v126) {
                        // break -> 0x1e3251f
                        break;
                    }
                    v120 = v121;
                }
                // 0x1e3251f
                v119 = v121;
                v118 = g563;
                v117 = g8;
            } else {
                v119 = v115;
                v118 = v114;
                v117 = v106;
            }
            int32_t v127 = v117 + 1; // 0x1e3251f
            g8 = v127;
            result = (int32_t)v118;
            g2 = result;
            g5 = (float32_t)((float80_t)(float32_t)v108 * (float80_t)v112 + (float80_t)v113);
            g11 = v119;
            if (v79 < v127) {
                // break -> 0x1e3253c
                break;
            }
            // 0x1e3251f
            v114 = v118;
            v106 = v127;
            v111 += *v118;
            v115 = v119;
            v116 = g6;
        }
    } else {
        result = v107;
    }
    // 0x1e3253c
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
}

