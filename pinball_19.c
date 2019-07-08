
// Address range: 0x1e390d0 - 0x1e39105
int32_t function_1e390d0(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g2 = v1;
    g5 = 0;
    *(int32_t *)(v1 + 52) = 0;
    *(int32_t *)(g2 + 48) = g5;
    *(int32_t *)g2 = 0x3f733333;
    *(int32_t *)(g2 + 8) = g5;
    *(int32_t *)(g2 + 16) = g5;
    *(int32_t *)(g2 + 64) = g5;
    *(int32_t *)(g2 + 68) = g5;
    *(int32_t *)(g2 + 60) = g5;
    *(int32_t *)(g2 + 20) = 0x51a7a358;
    *(int32_t *)(g2 + 4) = 0x3f19999a;
    *(int32_t *)(g2 + 56) = g5;
    return g2;
}

// Address range: 0x1e39105 - 0x1e39201
int32_t function_1e39105(int32_t a1) {
    int32_t v1 = g427; // 0x1e3910a
    int32_t v2 = g8 & -0x10000 | 1; // 0x1e39111
    g8 = v2;
    int32_t result; // 0x1e3914d
    if (v1 > 1) {
        // 0x1e39119
        g5 = a1;
        int32_t v3; // 0x1e39120
        while (true) {
            // 0x1e3911d
            v3 = 20 * v2;
            g2 = v3;
            if (*(int32_t *)(v3 + (int32_t)&g624) == a1) {
                // break -> 0x1e39150
                break;
            }
            int32_t v4 = v2 + 1 & 0xffff | v2 & -0x10000; // 0x1e3912b
            g8 = v4;
            g2 = v4;
            if (v4 >= v1) {
                goto lab_0x1e39138_2;
            }
            v2 = v4;
        }
        // 0x1e39150
        g6 = v3;
        int32_t iReadWrite = 0; // ebx
        if (*(int32_t *)(v3 + (int32_t)&g625) == 0) {
            // 0x1e39164
            if (*(int32_t *)(v3 + (int32_t)&g623) == 0) {
                // 0x1e39170
                *(int32_t *)(v3 + (int32_t)&g626) = 0;
                int32_t v5 = *(int32_t *)(g6 + (int32_t)&g624); // 0x1e39176
                if (v5 > iReadWrite) {
                    // 0x1e39180
                    if (g517 == iReadWrite) {
                        int32_t v6 = (int32_t)g620; // 0x1e39189
                        g2 = v6;
                        int32_t v7 = function_1e39b58(v6, v5, iReadWrite); // 0x1e39190
                        g2 = v7;
                        if (v7 != 0) {
                            // 0x1e39199
                            if (*(int16_t *)v7 == 202) {
                                int32_t v8 = (int32_t)g620; // 0x1e391a2
                                g2 = v8;
                                int32_t lpPathName = function_1e39b58(v8, v5, 9); // 0x1e391a9
                                g2 = lpPathName;
                                g3 = lpPathName;
                                int32_t hFile = _lopen((char *)lpPathName, iReadWrite); // 0x1e391b2
                                g2 = hFile;
                                int32_t v9 = _llseek(hFile, iReadWrite, 2); // 0x1e391c3
                                g2 = v9;
                                *(float32_t *)(g6 + (int32_t)&g626) = (float32_t)(9.0909090909090903591e-5L * (float80_t)v9);
                                g2 = _lclose(iReadWrite);
                                int32_t v10 = function_1e27918(g3); // 0x1e391e8
                                g2 = v10;
                                *(int32_t *)(g6 + (int32_t)&g623) = v10;
                            }
                        }
                    }
                }
            }
        }
        // 0x1e391f3
        g2 = g8;
        int32_t * v11 = (int32_t *)(g6 + (int32_t)&g625); // 0x1e391f6
        *v11 = *v11 + 1;
        result = g2;
        goto lab_0x1e39146;
    } else {
        goto lab_0x1e39138_2;
    }
  lab_0x1e39138_2:
    // 0x1e39138
    function_1e3907a(25, 26);
    g2 = -1;
    result = -1;
    goto lab_0x1e39146;
  lab_0x1e39146:
    // 0x1e39146
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e39201 - 0x1e39248
int32_t function_1e39201(void) {
    int32_t v1 = g6; // bp-8
    g8 = 1;
    int32_t v2; // 0x1e39228
    if ((int32_t)g427 > 1) {
        // 0x1e39210
        g6 = &g628;
        int32_t v3 = &g628; // 0x1e39215
        *(int32_t *)((int32_t)&v1 - 4) = *(int32_t *)v3;
        g2 = function_1e27940((int32_t)&g708);
        int32_t v4 = g6 + 20; // 0x1e3921c
        g6 = v4;
        int32_t v5 = g8 + 1; // 0x1e3921f
        g8 = v5;
        while (v5 < (int32_t)g427) {
            // 0x1e39215
            *(int32_t *)(g9 - 4) = *(int32_t *)v4;
            g2 = function_1e27940((int32_t)&g708);
            v4 = g6 + 20;
            g6 = v4;
            v5 = g8 + 1;
            g8 = v5;
        }
        // 0x1e39228
        v2 = 20 * v5;
    } else {
        v2 = 20;
    }
    // 0x1e39228
    g8 = v2;
    int32_t v6 = *(int32_t *)(v2 + (int32_t)&g627); // 0x1e3922b
    g2 = v6;
    int32_t result; // 0x1e39236
    if (v6 != 0) {
        // 0x1e39235
        *(int32_t *)(g9 - 4) = v6;
        result = function_1e25401((int32_t)&g708);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e3923b
    g427 = 1;
    return result;
}

// Address range: 0x1e39248 - 0x1e392c2
int32_t function_1e39248(int32_t a1) {
    // 0x1e39248
    g2 = a1;
    int16_t * v1 = (int16_t *)a1; // 0x1e3924e
    g620 = v1;
    int32_t v2 = g8 & -0x10000; // 0x1e39253
    g8 = v2;
    int32_t v3 = g6; // bp-12
    int32_t v4 = &v3; // 0x1e39256
    int32_t v5; // 0x1e392b7
    if ((int32_t)*v1 > v2) {
        int32_t v6 = 0; // edi
        int32_t v7 = v4; // 0x1e3925e
        int32_t v8 = 0; // 0x1e3925e
        while (true) {
            // 0x1e3925e
            *(int32_t *)(v7 - 4) = v8;
            g2 = (int32_t)g620;
            int32_t v9 = g8; // 0x1e39264
            *(int32_t *)(v7 - 8) = v9;
            *(int32_t *)(v7 - 12) = g2;
            int32_t v10 = function_1e39b58((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39269
            g2 = v10;
            if (v10 != 0) {
                // 0x1e39272
                if (*(int16_t *)v10 == 202) {
                    int64_t v11 = g427; // 0x1e39279
                    int32_t v12 = v11; // 0x1e39279
                    int16_t * v13 = g620; // 0x1e39280
                    g2 = (int32_t)v13;
                    g621 = v13;
                    if (v12 < 65) {
                        int32_t v14 = 20 * 0x100000000 * v11 / 0x100000000; // 0x1e39291
                        g2 = v14;
                        g427 = v12 + 1;
                        *(int32_t *)(v14 + (int32_t)&g623) = v6;
                        *(int32_t *)(g2 + (int32_t)&g624) = v9;
                    }
                }
            }
            int32_t v15 = g8; // 0x1e392a6
            int32_t v16 = v15 + 1 & 0xffff | v15 & -0x10000; // 0x1e392a6
            g8 = v16;
            int16_t * v17 = g620; // 0x1e392a8
            g2 = (int32_t)v17;
            if ((int32_t)*v17 <= v16) {
                // break -> 0x1e392b2
                break;
            }
            // 0x1e392a6
            v7 = g9;
            v8 = v6;
        }
        // 0x1e392b2
        v5 = g9;
    } else {
        v5 = v4;
    }
    int32_t result = g427; // 0x1e392b2
    g2 = result;
    g6 = *(int32_t *)v5;
    g622 = g427;
    return result;
}

// Address range: 0x1e392c2 - 0x1e392d4
int32_t function_1e392c2(int32_t a1) {
    int32_t result = function_1e39c40(*(int32_t *)&g620, a1); // 0x1e392cc
    g2 = result;
    return result;
}

// Address range: 0x1e392d4 - 0x1e39319
int32_t function_1e392d4(int32_t a1) {
    // 0x1e392d4
    g2 = a1;
    if (a1 < 0) {
        int32_t result = function_1e3907a(0, 17); // 0x1e392e0
        g2 = result;
        // 0x1e39316
        return result;
    }
    int32_t v1 = function_1e39b58(*(int32_t *)&g620, a1, 10); // 0x1e392f0
    g2 = v1;
    if (v1 == 0) {
        // 0x1e392f9
        g2 = 1;
        // 0x1e39316
        return 1;
    }
    uint16_t v2 = *(int16_t *)v1; // 0x1e39300
    g5 = g5 & -0x10000 | (int32_t)v2;
    int32_t v3 = v1 + 2; // 0x1e39303
    g2 = v3;
    int32_t result2; // 0x1e39313
    if (v2 == 100) {
        // 0x1e39313
        result2 = (int32_t)*(int16_t *)v3;
        g2 = result2;
    } else {
        // 0x1e3930c
        g2 = 1;
        result2 = 1;
    }
    // 0x1e39316
    return result2;
}

// Address range: 0x1e39319 - 0x1e3943a
int32_t function_1e39319(int32_t a1) {
    // 0x1e39319
    g8 = a1;
    int32_t result; // 0x1e39437
    if (a1 >= 0) {
        int16_t * v1 = g620; // 0x1e39335
        int32_t v2 = (int32_t)v1; // 0x1e39335
        g2 = v2;
        int32_t v3 = function_1e39b58(v2, a1, 0); // 0x1e3933c
        g2 = v3;
        if (v3 != 0) {
            // 0x1e39353
            if (*(int16_t *)v3 == 300) {
                int32_t v4 = (int32_t)g620; // 0x1e3936a
                g2 = v4;
                int32_t v5 = function_1e39b58(v4, a1, 11); // 0x1e39371
                g2 = v5;
                g4 = v5;
                if (v5 != 0) {
                    int32_t v6 = (int32_t)g620; // 0x1e3938c
                    g2 = v6;
                    g8 = a1 & -0x10000;
                    int32_t v7 = function_1e39be0(v6, a1, 11); // 0x1e39396
                    g2 = v7;
                    int32_t v8 = v7 / 4; // 0x1e3939d
                    g6 = v8;
                    if ((int16_t)v8 >= 1) {
                        // 0x1e393a9
                        g3 = (int32_t)v1;
                        int32_t v9 = g8; // 0x1e393af
                        while (true) {
                            int32_t v10 = g4; // 0x1e393ad
                            g8 = v9 + 1 & 0xffff | v9 & -0x10000;
                            g2 = v10;
                            g4 = v10 + 4;
                            *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v10;
                            int32_t v11 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e393bc
                            g2 = v11;
                            int32_t v12 = __ftol(); // 0x1e393c4
                            g2 = v12;
                            if (v12 == 301) {
                                int32_t v13 = g4; // 0x1e393ec
                                int32_t v14 = *(int32_t *)v13; // 0x1e393ec
                                g2 = v14;
                                g4 = v13 + 4;
                                *(int32_t *)g3 = v14;
                            } else {
                                if (v12 == 302) {
                                    int32_t v15 = g4; // 0x1e393f6
                                    int32_t v16 = *(int32_t *)v15; // 0x1e393f6
                                    g2 = v16;
                                    g4 = v15 + 4;
                                    *(int32_t *)(g3 + 4) = v16;
                                } else {
                                    if (v12 != 304) {
                                        // 0x1e393e1
                                        *(int32_t *)(g9 - 4) = 21;
                                        *(int32_t *)(g9 - 8) = 9;
                                        int32_t v17 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e393e5
                                        g2 = v17;
                                        result = v17;
                                        goto lab_0x1e39433;
                                    }
                                    int32_t v18 = g4; // 0x1e39400
                                    g2 = v18;
                                    g4 = v18 + 4;
                                    *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v18;
                                    int32_t v19 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3940d
                                    g2 = v19;
                                    int32_t v20 = __ftol(); // 0x1e39415
                                    g2 = v20;
                                    g5 = v20;
                                    *(int32_t *)(g9 - 4) = v20;
                                    int32_t v21 = function_1e39105((int32_t)&g708); // 0x1e3941e
                                    g2 = v21;
                                    *(int32_t *)(g3 + 16) = v21;
                                }
                            }
                            int32_t v22 = g8; // 0x1e39426
                            int32_t v23 = v22 + 1 & 0xffff | v22 & -0x10000; // 0x1e39426
                            if (g6 <= v23) {
                                // break -> 0x1e39431
                                break;
                            }
                            v9 = v23;
                        }
                    }
                    // 0x1e39431
                    g2 = 0;
                    result = 0;
                } else {
                    int32_t v24 = function_1e3907a(11, 21); // 0x1e39380
                    g2 = v24;
                    result = v24;
                }
            } else {
                int32_t v25 = function_1e3907a(3, 21); // 0x1e3935e
                g2 = v25;
                result = v25;
            }
        } else {
            int32_t v26 = function_1e3907a(1, 21); // 0x1e39349
            g2 = v26;
            result = v26;
        }
    } else {
        int32_t v27 = function_1e3907a(0, 21); // 0x1e39329
        g2 = v27;
        result = v27;
    }
    goto lab_0x1e39433;
  lab_0x1e39433:
    // 0x1e39433
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e3943a - 0x1e395a1
int32_t function_1e3943a(int32_t a1) {
    // 0x1e3943a
    g8 = a1;
    int32_t result; // 0x1e3959e
    if (a1 >= 0) {
        int16_t * v1 = g620; // 0x1e39456
        int32_t v2 = (int32_t)v1; // 0x1e39456
        g2 = v2;
        int32_t v3 = function_1e39b58(v2, a1, 0); // 0x1e3945d
        g2 = v3;
        if (v3 != 0) {
            // 0x1e39474
            if (*(int16_t *)v3 == 400) {
                int32_t v4 = (int32_t)g620; // 0x1e3948b
                g2 = v4;
                int32_t v5 = function_1e39b58(v4, a1, 11); // 0x1e39492
                g2 = v5;
                g4 = v5;
                if (v5 != 0) {
                    int32_t v6 = (int32_t)g620; // 0x1e394ad
                    g2 = v6;
                    g6 &= -0x10000;
                    int32_t v7 = function_1e39be0(v6, a1, 11); // 0x1e394b7
                    g2 = v7;
                    int32_t v8 = v7 / 4; // 0x1e394be
                    g3 = v8;
                    if ((int16_t)v8 >= 1) {
                        // 0x1e394ca
                        g8 = (int32_t)v1;
                        int32_t v9 = g6; // 0x1e394d0
                        while (true) {
                            int32_t v10 = g4; // 0x1e394ce
                            g6 = v9 + 1 & 0xffff | v9 & -0x10000;
                            g2 = v10;
                            g4 = v10 + 4;
                            *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v10;
                            int32_t v11 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e394dd
                            g2 = v11;
                            int32_t v12 = __ftol(); // 0x1e394e5
                            g2 = v12;
                            if (v12 == 401) {
                                int32_t v13 = g4; // 0x1e39522
                                int32_t v14 = *(int32_t *)v13; // 0x1e39522
                                g2 = v14;
                                g4 = v13 + 4;
                                *(int32_t *)g8 = v14;
                            } else {
                                if (v12 == 402) {
                                    int32_t v15 = g4; // 0x1e3952b
                                    int32_t v16 = *(int32_t *)v15; // 0x1e3952b
                                    g2 = v16;
                                    g4 = v15 + 4;
                                    *(int32_t *)(g8 + 4) = v16;
                                } else {
                                    if (v12 == 403) {
                                        int32_t v17 = g4; // 0x1e39535
                                        int32_t v18 = *(int32_t *)v17; // 0x1e39535
                                        g2 = v18;
                                        g4 = v17 + 4;
                                        *(int32_t *)(g8 + 8) = v18;
                                    } else {
                                        if (v12 == 404) {
                                            int32_t v19 = g6; // 0x1e3953f
                                            int32_t v20 = g4; // 0x1e39541
                                            int32_t v21 = *(int32_t *)v20; // 0x1e39541
                                            g2 = v21;
                                            g6 = v19 + 2 & 0xffff | v19 & -0x10000;
                                            *(int32_t *)(g8 + 12) = v21;
                                            int32_t v22 = v20 + 4; // 0x1e3954b
                                            int32_t v23 = *(int32_t *)v22; // 0x1e3954b
                                            g2 = v23;
                                            int32_t v24 = v22 + 4; // ebx
                                            *(int32_t *)(g8 + 16) = v23;
                                            int32_t v25 = *(int32_t *)v24; // 0x1e39553
                                            g2 = v25;
                                            g4 = v24 + 4;
                                            *(int32_t *)(g8 + 20) = v25;
                                        } else {
                                            if (v12 == 405) {
                                                int32_t v26 = g4; // 0x1e3955d
                                                int32_t v27 = *(int32_t *)v26; // 0x1e3955d
                                                g2 = v27;
                                                g4 = v26 + 4;
                                                *(int32_t *)(g8 + 24) = v27;
                                            } else {
                                                if (v12 != 406) {
                                                    // 0x1e39517
                                                    *(int32_t *)(g9 - 4) = 20;
                                                    *(int32_t *)(g9 - 8) = 10;
                                                    int32_t v28 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e3951b
                                                    g2 = v28;
                                                    result = v28;
                                                    goto lab_0x1e3959a;
                                                }
                                                int32_t v29 = g4; // 0x1e39567
                                                g2 = v29;
                                                g4 = v29 + 4;
                                                *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v29;
                                                int32_t v30 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39574
                                                g2 = v30;
                                                int32_t v31 = __ftol(); // 0x1e3957c
                                                g2 = v31;
                                                g5 = v31;
                                                *(int32_t *)(g9 - 4) = v31;
                                                int32_t v32 = function_1e39105((int32_t)&g708); // 0x1e39585
                                                g2 = v32;
                                                *(int32_t *)(g8 + 28) = v32;
                                            }
                                        }
                                    }
                                }
                            }
                            int32_t v33 = g6; // 0x1e3958d
                            int32_t v34 = v33 + 1 & 0xffff | v33 & -0x10000; // 0x1e3958d
                            if (g3 <= v34) {
                                // break -> 0x1e39598
                                break;
                            }
                            v9 = v34;
                        }
                    }
                    // 0x1e39598
                    g2 = 0;
                    result = 0;
                } else {
                    int32_t v35 = function_1e3907a(11, 20); // 0x1e394a1
                    g2 = v35;
                    result = v35;
                }
            } else {
                int32_t v36 = function_1e3907a(4, 20); // 0x1e3947f
                g2 = v36;
                result = v36;
            }
        } else {
            int32_t v37 = function_1e3907a(1, 20); // 0x1e3946a
            g2 = v37;
            result = v37;
        }
    } else {
        int32_t v38 = function_1e3907a(0, 20); // 0x1e3944a
        g2 = v38;
        result = v38;
    }
    goto lab_0x1e3959a;
  lab_0x1e3959a:
    // 0x1e3959a
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e395a1 - 0x1e39641
int32_t function_1e395a1(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // 0x1e395a2
    g8 = a1;
    int32_t v2 = function_1e392d4(a1); // 0x1e395a8
    g2 = v2;
    g6 = g6 & -0x10000 | v2 & 0xffff;
    int16_t v3 = v2; // 0x1e395b0
    if (v3 >= 0 != v3 != 0) {
        int32_t result = function_1e3907a(12, 24); // 0x1e395b9
        g2 = result;
        // 0x1e3963c
        g8 = *(int32_t *)(g9 + 4);
        return result;
    }
    int32_t v4 = (int32_t)g620; // 0x1e395c2
    g2 = v4;
    int32_t v5 = function_1e39b58(v4, g8, 0); // 0x1e395c9
    g2 = v5;
    if (v5 == 0) {
        int32_t result2 = function_1e3907a(1, 24); // 0x1e395d6
        g2 = result2;
        // 0x1e3963c
        g8 = *(int32_t *)(g9 + 4);
        return result2;
    }
    // 0x1e395dd
    if (*(int16_t *)v5 != 200) {
        int32_t result3 = function_1e3907a(5, 24); // 0x1e395e8
        g2 = result3;
        // 0x1e3963c
        g8 = *(int32_t *)(g9 + 4);
        return result3;
    }
    int32_t v6 = g6; // 0x1e395ef
    g5 = v6;
    g2 = v1;
    if (v6 < v1) {
        int32_t result4 = function_1e3907a(12, 24); // 0x1e395fe
        g2 = result4;
        // 0x1e3963c
        g8 = *(int32_t *)(g9 + 4);
        return result4;
    }
    if (v1 != 0) {
        int32_t v7 = g8 + v1; // 0x1e39609
        g8 = v7;
        int32_t v8 = (int32_t)g620; // 0x1e3960e
        g2 = v8;
        int32_t v9 = function_1e39b58(v8, v7, 0); // 0x1e39614
        g2 = v9;
        if (v9 == 0) {
            int32_t result5 = function_1e3907a(1, 24); // 0x1e39621
            g2 = result5;
            // 0x1e3963c
            g8 = *(int32_t *)(g9 + 4);
            return result5;
        }
        // 0x1e39628
        if (*(int16_t *)v9 != 201) {
            int32_t result6 = function_1e3907a(6, 24); // 0x1e39633
            g2 = result6;
            // 0x1e3963c
            g8 = *(int32_t *)(g9 + 4);
            return result6;
        }
    }
    // 0x1e3963a
    g2 = g8;
    int32_t result7 = g8; // 0x1e3963e
    // 0x1e3963c
    g8 = *(int32_t *)(g9 + 4);
    return result7;
}

// Address range: 0x1e39641 - 0x1e398f4
int32_t function_1e39641(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e39641
    function_1e390d0((int32_t *)a3);
    g2 = a1;
    int32_t v1; // ebx
    int32_t result; // 0x1e398b0
    int32_t v2; // 0x1e3966d
    if (a1 >= 0) {
        // 0x1e39668
        v2 = function_1e395a1(a1, a2);
        g2 = v2;
        g6 = v2;
        if (v2 >= 0) {
            int32_t v3 = (int32_t)g620; // 0x1e39688
            g2 = v3;
            v1 = g8 + 68;
            int32_t v4 = function_1e39b58(v3, v2, 1); // 0x1e39692
            *(int32_t *)(g8 + 64) = v4;
            int32_t v5 = (int32_t)g620; // 0x1e3969d
            g2 = v5;
            int32_t v6 = function_1e39b58(v5, v2, 12); // 0x1e396a3
            g2 = v6;
            *(int32_t *)v1 = v6;
            if (v6 != 0) {
                int32_t v7 = v6 + 14; // 0x1e396ae
                g5 = v7;
                *(int32_t *)(v6 + 6) = v7;
                int32_t v8 = *(int32_t *)v1; // 0x1e396b4
                g2 = v8;
                int32_t v9 = *(int32_t *)(v8 + 6); // 0x1e396b6
                g5 = v9;
                *(int32_t *)(v8 + 10) = v9;
            }
            int32_t v10 = (int32_t)g620; // 0x1e396be
            g2 = v10;
            int32_t v11 = function_1e39b58(v10, v2, 10); // 0x1e396c5
            g2 = v11;
            g4 = v11;
            if (v11 == 0) {
                goto lab_0x1e39829;
            } else {
                int32_t v12 = (int32_t)g620; // 0x1e396d6
                g2 = v12;
                g3 &= -0x10000;
                int32_t v13 = function_1e39be0(v12, v2, 10) / 2; // 0x1e396e5
                g2 = v13;
                int32_t v14 = g3; // 0x1e396ec
                if (v13 > v14) {
                    while (true) {
                        int32_t v15 = g4; // 0x1e396f5
                        int32_t v16 = (int32_t)*(int16_t *)v15 | v13 & -0x10000; // 0x1e396f5
                        g2 = v16;
                        int32_t v17 = v15 + 2; // 0x1e396f8
                        int32_t v18 = v14 & -0x10000; // 0x1e396fe
                        g3 = v14 + 1 & 0xffff | v18;
                        if (v16 > 300) {
                            if (v16 == 304) {
                                // 0x1e39794
                                g3 = v14 + 2 & 0xffff | v18;
                                g2 = v17;
                                int32_t v19 = (int32_t)*(int16_t *)v17; // 0x1e39798
                                g5 = v19;
                                *(int32_t *)(g9 - 4) = v19;
                                int32_t v20 = function_1e39105((int32_t)&g708); // 0x1e3979f
                                g2 = v20;
                                *(int32_t *)(g8 + 16) = v20;
                            } else {
                                if (v16 == 400) {
                                    // 0x1e397a9
                                    g5 = (int32_t)*(int16_t *)v17;
                                    int32_t v21 = g8 + 20; // 0x1e397ac
                                    g2 = v21;
                                    *(int32_t *)(g9 - 4) = v21;
                                    *(int32_t *)(g9 - 8) = g5;
                                    int32_t v22 = function_1e3943a((int32_t)&g708); // 0x1e397b1
                                    g2 = v22;
                                    if (v22 != 0) {
                                        // 0x1e398c9
                                        *(int32_t *)(g9 - 4) = 18;
                                        *(int32_t *)(g9 - 8) = 14;
                                        int32_t v23 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e398cd
                                        g2 = v23;
                                        result = v23;
                                        goto lab_0x1e398a9;
                                    }
                                    int32_t v24 = g3; // 0x1e397be
                                    g3 = v24 + 1 & 0xffff | v24 & -0x10000;
                                    g4 += 2;
                                } else {
                                    if (v16 == 406) {
                                        // 0x1e397c5
                                        g3 = v14 + 2 & 0xffff | v18;
                                        g2 = v17;
                                        int32_t v25 = (int32_t)*(int16_t *)v17; // 0x1e397c9
                                        g5 = v25;
                                        *(int32_t *)(g9 - 4) = v25;
                                        int32_t v26 = function_1e39105((int32_t)&g708); // 0x1e397d0
                                        g2 = v26;
                                        *(int32_t *)(g8 + 48) = v26;
                                    } else {
                                        if (v16 == 602) {
                                            // 0x1e397da
                                            g3 = v14 + 2 & 0xffff | v18;
                                            g2 = 1;
                                            int32_t v27 = (int32_t)*(char *)v17; // 0x1e397e1
                                            g5 = g5 & -256 | v27;
                                            g4 = v15 + 4;
                                            uint32_t v28 = v27 & 31; // 0x1e397e6
                                            int32_t v29; // 0x1e397e6
                                            if (v28 != 0) {
                                                // bb
                                                v29 = 1 << v28;
                                                g2 = v29;
                                            } else {
                                                v29 = 1;
                                            }
                                            int32_t * v30 = (int32_t *)(g8 + 52); // 0x1e397e8
                                            *v30 = *v30 | v29;
                                        } else {
                                            if (v16 == 1100) {
                                                // 0x1e397ed
                                                g3 = v14 + 2 & 0xffff | v18;
                                                g2 = v17;
                                                int32_t v31 = (int32_t)*(int16_t *)v17; // 0x1e397f1
                                                g5 = v31;
                                                *(int32_t *)(g9 - 4) = v31;
                                                int32_t v32 = function_1e39105((int32_t)&g708); // 0x1e397f8
                                                g2 = v32;
                                                *(int32_t *)(g8 + 56) = v32;
                                            } else {
                                                if (v16 == 1101) {
                                                    // 0x1e39802
                                                    g3 = v14 + 2 & 0xffff | v18;
                                                    g2 = v17;
                                                    int32_t v33 = (int32_t)*(int16_t *)v17; // 0x1e39806
                                                    g5 = v33;
                                                    *(int32_t *)(g9 - 4) = v33;
                                                    int32_t v34 = function_1e39105((int32_t)&g708); // 0x1e3980d
                                                    g2 = v34;
                                                    *(int32_t *)(g8 + 60) = v34;
                                                } else {
                                                    if (v16 != 1500) {
                                                        goto lab_0x1e3970e_2;
                                                    }
                                                    // 0x1e39817
                                                    g3 = v14 + 9 & 0xffff | v18;
                                                    g4 = v15 + 18;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (v16 == 300) {
                                // 0x1e39778
                                g2 = (int32_t)*(int16_t *)v17;
                                *(int32_t *)(g9 - 4) = g8;
                                *(int32_t *)(g9 - 8) = g2;
                                int32_t v35 = function_1e39319((int32_t)&g708); // 0x1e3977d
                                g2 = v35;
                                if (v35 != 0) {
                                    // break -> 0x1e398be
                                    break;
                                }
                                int32_t v36 = g3; // 0x1e3978a
                                g3 = v36 + 1 & 0xffff | v36 & -0x10000;
                                g4 += 2;
                            } else {
                                if (v16 != 100) {
                                    goto lab_0x1e3970e_2;
                                }
                                // 0x1e39763
                                if (*(int32_t *)(g9 + 28) != 0) {
                                    // 0x1e398b3
                                    *(int32_t *)(g9 - 4) = 18;
                                    *(int32_t *)(g9 - 8) = 7;
                                    int32_t v37 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e398b7
                                    g2 = v37;
                                    result = v37;
                                    goto lab_0x1e398a9;
                                }
                                // 0x1e3976e
                                g3 = v14 + 2 & 0xffff | v18;
                                g4 = v15 + 4;
                            }
                        }
                        int32_t v38 = g3; // 0x1e3981e
                        if ((int32_t)*(int16_t *)(g9 + 18) <= v38) {
                            goto lab_0x1e39829;
                        }
                        // 0x1e3981e
                        v14 = v38;
                        v13 = g2;
                    }
                    // 0x1e398be
                    *(int32_t *)(g9 - 4) = 18;
                    *(int32_t *)(g9 - 8) = 15;
                    int32_t v39 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e398c2
                    g2 = v39;
                    result = v39;
                    goto lab_0x1e398a9;
                } else {
                    goto lab_0x1e39829;
                }
            }
        } else {
            int32_t v40 = function_1e3907a(16, 18); // 0x1e3967c
            g2 = v40;
            result = v40;
            goto lab_0x1e398a9;
        }
    } else {
        int32_t v41 = function_1e3907a(0, 18); // 0x1e3965e
        g2 = v41;
        result = v41;
        goto lab_0x1e398a9;
    }
  lab_0x1e3970e_2:
    // 0x1e3970e
    *(int32_t *)(g9 - 4) = 18;
    *(int32_t *)(g9 - 8) = 9;
    int32_t v42 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e39712
    g2 = v42;
    result = v42;
    goto lab_0x1e398a9;
  lab_0x1e39829:;
    int32_t * v43 = (int32_t *)(g8 + 52); // 0x1e39829
    if (*v43 == 0) {
        // 0x1e3982f
        *v43 = 1;
    }
    // 0x1e39836
    *(int32_t *)(g9 - 4) = 11;
    g2 = (int32_t)g620;
    *(int32_t *)(g9 - 8) = v2;
    *(int32_t *)(g9 - 12) = g2;
    int32_t v44 = function_1e39b58((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3983f
    g2 = v44;
    if (v44 == 0) {
        // 0x1e398a7
        g2 = 0;
        result = 0;
        goto lab_0x1e398a9;
    } else {
        // 0x1e3984a
        v1 = v44 + 4;
        if (*(int32_t *)v44 != 0x44160000) {
            // 0x1e398a7
            g2 = 0;
            result = 0;
            goto lab_0x1e398a9;
        } else {
            // 0x1e39855
            *(int32_t *)(g9 - 4) = 11;
            g2 = (int32_t)g620;
            *(int32_t *)(g9 - 8) = v2;
            *(int32_t *)(g9 - 12) = g2;
            g6 = g8 + 8;
            uint32_t v45 = function_1e39be0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39861
            g7 = 0;
            g5 = v1;
            g4 = v1 + 4;
            int32_t v46 = v45 / 8 - 2; // 0x1e39879
            g2 = v46;
            *(int32_t *)g6 = v46;
            *(float64_t *)g9 = (float64_t)*(float32_t *)g5;
            int32_t v47 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39886
            g2 = v47;
            int32_t v48 = __ftol(); // 0x1e39894
            g2 = v48;
            int16_t v49 = v48; // 0x1e39899
            if (v49 != 0) {
                int32_t * v50 = (int32_t *)g6; // 0x1e398e5
                if (v49 != 1) {
                    // 0x1e398e2
                    if (v48 == *v50) {
                        goto lab_0x1e398a4;
                    } else {
                        // 0x1e398e9
                        *(int32_t *)(g9 - 4) = 18;
                        *(int32_t *)(g9 - 8) = 8;
                        int32_t v51 = function_1e3907a((int32_t)&g708, (int32_t)&g708); // 0x1e398ed
                        g2 = v51;
                        result = v51;
                        goto lab_0x1e398a9;
                    }
                } else {
                    // 0x1e398da
                    *v50 = 2;
                    goto lab_0x1e398a4;
                }
            } else {
                // 0x1e3989e
                *(int32_t *)g6 = 1;
                goto lab_0x1e398a4;
            }
        }
    }
  lab_0x1e398a9:
    // 0x1e398a9
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
  lab_0x1e398a4:
    // 0x1e398a4
    *(int32_t *)(g8 + 12) = g4;
    // 0x1e398a7
    g2 = 0;
    result = 0;
    goto lab_0x1e398a9;
}

// Address range: 0x1e398f4 - 0x1e3991a
int32_t function_1e398f4(int32_t a1) {
    // 0x1e398f4
    g2 = a1;
    int32_t result;
    if (a1 >= 0) {
        // 0x1e39909
        result = function_1e39b58(*(int32_t *)&g620, a1, 3);
    } else {
        // 0x1e398fc
        g2 = function_1e3907a(0, 19);
        result = 0;
    }
    // 0x1e39917
    g2 = result;
    return result;
}

// Address range: 0x1e3991a - 0x1e39996
int32_t function_1e3991a(int32_t a1, int32_t a2) {
    // 0x1e3991a
    g2 = a1;
    int32_t result;
    int32_t v1; // 0x1e3998b
    if (a1 >= 0) {
        int32_t v2 = function_1e395a1(a1, a2); // 0x1e39933
        g2 = v2;
        g6 = v2;
        if (v2 >= 0) {
            int32_t v3 = g9; // 0x1e39947
            int32_t v4 = g8; // 0x1e39944
            while (true) {
                // 0x1e39944
                g2 = v4;
                *(int32_t *)(v3 - 4) = v4;
                *(int32_t *)(v3 - 8) = 11;
                *(int32_t *)(v3 - 12) = v2;
                *(int32_t *)(v3 - 16) = (int32_t)g620;
                int32_t v5 = function_1e39bf6((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39951
                g2 = v5;
                g4 = v5;
                if (v5 == 0) {
                    // break -> 0x1e39980
                    break;
                }
                // 0x1e3995c
                *(float64_t *)(g9 - 8) = (float64_t)*(float32_t *)v5;
                int32_t v6 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39964
                g2 = v6;
                int32_t v7 = __ftol(); // 0x1e3996c
                g2 = v7;
                if (v7 == *(int32_t *)(g9 + 24)) {
                    // 0x1e39991
                    v1 = g9;
                    result = v5 + 4;
                    goto lab_0x1e3998b;
                }
                int32_t v8 = g8; // 0x1e3997a
                int32_t v9 = v8 + 1 & 0xffff | v8 & -0x10000; // 0x1e3997a
                g8 = v9;
                v3 = g9;
                v4 = v9;
            }
            // 0x1e39980
            *(int32_t *)(g9 - 4) = 22;
            *(int32_t *)(g9 - 8) = 13;
        }
    }
    // 0x1e39984
    g2 = function_1e3907a((int32_t)&g708, (int32_t)&g708);
    v1 = g9;
    result = 0;
    goto lab_0x1e3998b;
  lab_0x1e3998b:
    // 0x1e3998b
    g2 = result;
    g6 = *(int32_t *)v1;
    g8 = *(int32_t *)(v1 + 4);
    g4 = *(int32_t *)(v1 + 8);
    return result;
}

// Address range: 0x1e39996 - 0x1e39a10
int32_t function_1e39996(int32_t a1, int32_t a2, int32_t * a3) {
    int32_t v1 = (int32_t)a3;
    int32_t v2 = g4 & -0x10000; // 0x1e3999a
    int32_t v3 = g6; // bp-16
    int32_t result;
    if (a1 >= 0) {
        int32_t v4 = &v3; // 0x1e399b4
        while (true) {
            // 0x1e399b1
            g2 = v2;
            *(int32_t *)(v4 - 4) = v2;
            *(int32_t *)(v4 - 8) = 10;
            *(int32_t *)(v4 - 12) = a1;
            *(int32_t *)(v4 - 16) = (int32_t)g620;
            int32_t v5 = function_1e39bf6((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e399be
            g2 = v5;
            g6 = v5;
            if (v5 == 0) {
                // break -> 0x1e399d7
                break;
            }
            int32_t v6 = (int32_t)*(int16_t *)v5; // 0x1e399c9
            g2 = v6;
            if (v6 == a2) {
                // 0x1e399f2
                *(int32_t *)(g9 - 4) = 10;
                g2 = (int32_t)g620;
                *(int32_t *)(g9 - 8) = a1;
                *(int32_t *)(g9 - 12) = g2;
                int32_t v7 = function_1e39be0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e399fb
                int32_t v8 = v7 >> 31; // 0x1e39a00
                g7 = v8;
                g5 = v1;
                int32_t v9 = (v7 - v8) / 2 - 1; // 0x1e39a08
                g2 = v9;
                *a3 = v9;
                result = v5 + 2;
                goto lab_0x1e399eb;
            }
            int32_t v10 = v2; // 0x1e399d1
            v4 = g9;
            v2 = v10 + 1 & 0xffff | v10 & -0x10000;
        }
        // 0x1e399d7
        *(int32_t *)(g9 - 4) = 23;
        *(int32_t *)(g9 - 8) = 2;
        g2 = function_1e3907a((int32_t)&g708, (int32_t)&g708);
        g5 = v1;
        *a3 = 0;
    } else {
        // 0x1e399a6
        g2 = function_1e3907a(0, 22);
    }
    result = 0;
    goto lab_0x1e399eb;
  lab_0x1e399eb:
    // 0x1e399eb
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e39a10 - 0x1e39a41
int32_t function_1e39a10(int32_t a1) {
    int32_t v1 = g8; // 0x1e39a10
    int32_t v2 = v1; // bp-4
    float80_t v3;
    int32_t v4; // 0x1e39a3d
    int32_t result; // 0x1e39a3e
    if (a1 < 1) {
        // 0x1e39a10
        result = g2;
        v4 = &v2;
        v3 = 0.0L;
    } else {
        int32_t v5 = *(int32_t *)(20 * a1 + (int32_t)&g623); // 0x1e39a24
        int32_t v6 = function_1e27a56(v5, 0, 7, 5, 0, v1); // 0x1e39a2a
        g2 = v6;
        result = v6;
        v4 = g9;
        v3 = (float80_t)*(float32_t *)(g8 + (int32_t)&g626);
    }
    // 0x1e39a3d
    g11--;
    g684 = v3;
    g8 = *(int32_t *)v4;
    return result;
}

// Address range: 0x1e39a41 - 0x1e39aaf
int32_t function_1e39a41(int32_t a1, int32_t a2, int32_t a3, int32_t result) {
    // 0x1e39a41
    g5 = &g613;
    g2 = a1;
    int32_t v1 = &g613; // 0x1e39a51
    while (true) {
        int32_t v2 = a1 + 16; // edi
        *(int32_t *)v1 = *(int32_t *)a1;
        int32_t v3 = v1 + 16; // 0x1e39a5f18
        int32_t v4 = 3; // 0x1e39a6220
        if (v4 != 0) {
            int32_t v5 = v2;
            *(int32_t *)v3 = *(int32_t *)v5;
            int32_t v6 = v4 - 1; // 0x1e39a62
            while (v6 != 0) {
                // 0x1e39a58
                v3 += 16;
                v5 += 16;
                *(int32_t *)v3 = *(int32_t *)v5;
                v6--;
            }
        }
        int32_t v7 = g5 + 4; // 0x1e39a65
        g5 = v7;
        int32_t v8 = g2 + 4; // 0x1e39a68
        g2 = v8;
        if (v7 >= (int32_t)&g614) {
            // break -> 0x1e39a73
            break;
        }
        v1 = v7;
        a1 = v8;
    }
    // 0x1e39a73
    g5 = a2;
    g617 = 0;
    g616 = 0;
    g615 = 0;
    g2 = result;
    g619 = a2;
    g611 = a3;
    g612 = result;
    g618 = 0x3f800000;
    return result;
}

// Address range: 0x1e39aaf - 0x1e39ac5
int32_t function_1e39aaf(int32_t result, int32_t a2) {
    // 0x1e39aaf
    g2 = result;
    g5 = a2;
    g611 = result;
    g612 = a2;
    return result;
}

// Address range: 0x1e39ac5 - 0x1e39aeb
int32_t function_1e39ac5(int32_t a1) {
    // 0x1e39ac5
    int32_t v1; // bp-12
    g2 = &v1;
    int32_t v2 = &g613; // bp-24
    g2 = function_1e3d6e6(&g613, a1, &v1);
    g5 = &v2;
    int32_t result = function_1e3a7a7(&v2); // 0x1e39ae0
    g2 = result;
    return result;
}

// Address range: 0x1e39aeb - 0x1e39b58
int32_t function_1e39aeb(int32_t a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e39aeb
    float32_t v1; // bp-20
    g2 = &v1;
    g2 = function_1e3d6e6(&g613, a1, (int32_t *)&v1);
    int32_t v2 = __ftol(); // 0x1e39b2d
    g2 = v2;
    *a2 = v2;
    int32_t v3 = __ftol(); // 0x1e39b43
    g2 = v3;
    g11 -= 3;
    *(int32_t *)((int32_t)a2 + 4) = v3;
    g8 = &g613;
    return g2;
}

// Address range: 0x1e39b58 - 0x1e39b95
int32_t function_1e39b58(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e39b58
    g2 = a1;
    int32_t v1 = g8; // 0x1e39b5c
    int32_t v2 = *(int32_t *)(a1 + 6); // 0x1e39b61
    g5 = v2;
    int32_t v3 = *(int32_t *)(v2 + 4 * a2); // 0x1e39b64
    g5 = 0;
    int32_t v4 = (int32_t)*(int16_t *)v3 | a2 & -0x10000; // 0x1e39b69
    g7 = v4;
    int32_t result;
    if (v4 <= 0) {
      lab_0x1e39b8a_3:
        result = 0;
        // 0x1e39b8c
        g2 = result;
        g8 = v1;
        return result;
    }
    int32_t v5 = 0; // 0x1e39b82
    int32_t v6 = v3 + 2; // 0x1e39b90
    while (true) {
        int32_t v7 = (int32_t)*(int16_t *)v6; // 0x1e39b74
        g2 = v7;
        if (v7 == a3) {
            // break -> 0x1e39b90
            break;
        }
        if (v7 > a3) {
            goto lab_0x1e39b8a_3;
        }
        int32_t v8 = v5 + 1; // 0x1e39b82
        g5 = v8;
        g2 = v4;
        if (v4 <= v8) {
            goto lab_0x1e39b8a_3;
        }
        v5 = v8;
        v6 += 10;
    }
    // 0x1e39b90
    result = *(int32_t *)(v6 + 6);
    // 0x1e39b8c
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e39b95 - 0x1e39be0
int32_t function_1e39b95(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e39b95
    g2 = a1;
    int32_t v1 = g6; // 0x1e39b9d
    int32_t v2 = *(int32_t *)(a1 + 6); // 0x1e39b9e
    g5 = v2;
    int32_t v3 = *(int32_t *)(v2 + 4 * a2); // 0x1e39ba6
    g7 = v3;
    int32_t v4 = (int32_t)*(int16_t *)v3 | v2 & -0x10000; // 0x1e39bab
    g5 = v4;
    int32_t result;
    if (v4 <= 0) {
        result = 0;
      lab_0x1e39bd5:
        // 0x1e39bd5
        g2 = result;
        g6 = v1;
        return result;
    }
    int32_t v5 = v3 + 2; // 0x1e39bb3
    g7 = v5;
    int32_t v6 = 0; // 0x1e39bcb
    int32_t v7 = 0; // 0x1e39bc3
    while (true) {
        int32_t v8 = (int32_t)*(int16_t *)v5; // 0x1e39bb6
        g2 = v8;
        int32_t v9; // 0x1e39bbe6
        if (v8 != a3) {
            if (v8 > a3) {
                // break -> 0x1e39bd3
                break;
            }
            v9 = v7;
        } else {
            if (v7 == a4) {
                // 0x1e39bdb
                result = *(int32_t *)(v5 + 2);
                goto lab_0x1e39bd5;
            }
            // 0x1e39bc3
            v9 = v7 + 1;
        }
        int32_t v10 = v5 + 10; // 0x1e39bc8
        g7 = v10;
        int32_t v11 = v6 + 1; // 0x1e39bcb
        g2 = v4;
        if (v4 <= v11) {
            // break -> 0x1e39bd3
            break;
        }
        v6 = v11;
        v7 = v9;
        v5 = v10;
    }
    result = 0;
    // 0x1e39bd5
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e39be0 - 0x1e39bf6
int32_t function_1e39be0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = function_1e39b95(a1, a2, a3, 0); // 0x1e39bee
    g2 = result;
    return result;
}

// Address range: 0x1e39bf6 - 0x1e39c40
int32_t function_1e39bf6(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e39bf6
    g2 = a1;
    int32_t v1 = g6; // 0x1e39bff
    int32_t v2 = *(int32_t *)(a1 + 6); // 0x1e39c00
    g5 = v2;
    int32_t v3 = *(int32_t *)(v2 + 4 * a2); // 0x1e39c05
    g5 = 0;
    int32_t v4 = (int32_t)*(int16_t *)v3 | a2 & -0x10000; // 0x1e39c0a
    g7 = v4;
    int32_t result;
    if (v4 <= 0) {
        result = 0;
      lab_0x1e39c36:
        // 0x1e39c36
        g2 = result;
        g6 = v1;
        return result;
    }
    int32_t v5 = 0; // 0x1e39c2c
    int32_t v6 = 0; // 0x1e39c24
    int32_t v7 = v3 + 2; // 0x1e39c29
    while (true) {
        int32_t v8 = (int32_t)*(int16_t *)v7; // 0x1e39c15
        g2 = v8;
        int32_t v9; // 0x1e39c1e6
        if (v8 != a3) {
            if (v8 > a3) {
                // break -> 0x1e39c34
                break;
            }
            v9 = v6;
        } else {
            if (v6 == a4) {
                // 0x1e39c3b
                result = *(int32_t *)(v7 + 6);
                goto lab_0x1e39c36;
            }
            // 0x1e39c24
            v9 = v6 + 1;
        }
        int32_t v10 = v5 + 1; // 0x1e39c2c
        g5 = v10;
        g2 = v4;
        if (v4 <= v10) {
            // break -> 0x1e39c34
            break;
        }
        v5 = v10;
        v6 = v9;
        v7 += 10;
    }
    result = 0;
    // 0x1e39c36
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e39c40 - 0x1e39c9f
int32_t function_1e39c40(int32_t a1, int32_t lpString) {
    // 0x1e39c40
    g8 = lpString;
    uint32_t v1 = lstrlenA((char *)lpString); // 0x1e39c49
    g2 = v1;
    uint16_t v2 = *(int16_t *)a1; // 0x1e39c55
    int32_t v3 = (int32_t)v2 - 1; // edi
    int32_t result;
    if (v2 >= 1) {
        while (true) {
            // 0x1e39c5c
            *(int32_t *)(g9 - 4) = 3;
            *(int32_t *)(g9 - 8) = v3;
            *(int32_t *)(g9 - 12) = a1;
            int32_t v4 = function_1e39b58((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39c60
            g2 = v4;
            if (v4 != 0) {
                // 0x1e39c69
                g7 = 0;
                int32_t v5; // 0x1e39c86
                if (v1 >= 1) {
                    int32_t v6 = g5; // 0x1e39c6f
                    int32_t v7 = 0; // 0x1e39c77
                    while (true) {
                        unsigned char v8 = *(char *)(v7 + g8); // 0x1e39c6f
                        int32_t v9 = (int32_t)v8 | v6 & -256; // 0x1e39c6f
                        g5 = v9;
                        if (*(char *)(v7 + v4) != v8) {
                            v5 = v7;
                            // break -> 0x1e39c7c
                            break;
                        }
                        int32_t v10 = v7 + 1; // 0x1e39c77
                        g7 = v10;
                        if (v1 <= v10) {
                            v5 = v10;
                            // break -> 0x1e39c7c
                            break;
                        }
                        v6 = v9;
                        v7 = v10;
                    }
                } else {
                    v5 = 0;
                }
                if (v1 == v5) {
                    // 0x1e39c80
                    if (*(char *)(g8 + v5) == 0) {
                        // 0x1e39c86
                        if (*(char *)(v5 + v4) == 0) {
                            // 0x1e39c9b
                            result = v3;
                            goto lab_0x1e39c94;
                        }
                    }
                }
            }
            int32_t v11 = v3 - 1; // 0x1e39c8c
            v3 = v11;
            if (v11 < 0) {
                result = -1;
                // break -> 0x1e39c94
                break;
            }
        }
    } else {
        result = -1;
    }
    goto lab_0x1e39c94;
  lab_0x1e39c94:
    // 0x1e39c94
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e39c9f - 0x1e39cc6
int32_t function_1e39c9f(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = function_1e39c40(a1, a2); // 0x1e39ca9
    g2 = v1;
    int32_t result;
    if (v1 >= 0) {
        // 0x1e39cb2
        result = function_1e39b58(a1, v1, a3);
    } else {
        result = 0;
    }
    // 0x1e39cc2
    g2 = result;
    g3 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e39cc6 - 0x1e39d60
int32_t function_1e39cc6(int32_t a1) {
    // 0x1e39cc6
    g8 = a1;
    int32_t v1 = g3; // bp-24
    g6 = 0;
    int32_t v2; // 0x1e39d3b
    if (*(int16_t *)a1 > 0) {
        int32_t v3 = &v1; // 0x1e39cea
        int32_t v4 = a1; // 0x1e39cdc
        while (true) {
            int32_t v5 = *(int32_t *)(v4 + 6); // 0x1e39cdc
            g5 = v5;
            int32_t v6 = *(int32_t *)(v3 + 20); // 0x1e39cdf
            g2 = v6;
            int32_t v7 = *(int32_t *)(v6 + v5); // 0x1e39ce3
            int16_t * v8 = (int16_t *)v7; // 0x1e39ce3
            g3 = v7;
            int32_t v9; // 0x1e39d2e
            if (v7 != 0) {
                // 0x1e39cea
                *(int32_t *)(v3 + 16) = 0;
                if (*v8 > 0) {
                    int32_t v10 = v7 + 2; // 0x1e39cf9
                    g4 = v10;
                    while (true) {
                        int32_t v11 = *(int32_t *)(v10 + 6); // 0x1e39cfc
                        g2 = v11;
                        int32_t v12; // 0x1e39d17
                        if (v11 != 0) {
                            // 0x1e39d03
                            int32_t v13; // 0x1e39d0f
                            if (*(int16_t *)v10 == 1) {
                                // 0x1e39d09
                                *(int32_t *)(g9 - 4) = v11;
                                g2 = function_1e273a9((int32_t)&g708);
                                v13 = g4;
                            } else {
                                v13 = v10;
                            }
                            // 0x1e39d0f
                            *(int32_t *)(g9 - 4) = *(int32_t *)(v13 + 6);
                            g2 = function_1e25401((int32_t)&g708);
                            v12 = g4;
                        } else {
                            v12 = v10;
                        }
                        // 0x1e39d17
                        g4 = v12 + 10;
                        int32_t * v14 = (int32_t *)(g9 + 16); // 0x1e39d1a
                        *v14 = *v14 + 1;
                        int32_t v15 = (int32_t)*v8; // 0x1e39d1e
                        g2 = v15;
                        if (v15 <= *(int32_t *)(g9 + 16)) {
                            // break -> 0x1e39d28
                            break;
                        }
                        // 0x1e39d17
                        v10 = g4;
                    }
                }
                // 0x1e39d28
                *(int32_t *)(g9 - 4) = v7;
                g2 = function_1e25401((int32_t)&g708);
                v9 = g9;
            } else {
                v9 = v3;
            }
            int32_t * v16 = (int32_t *)(v9 + 20); // 0x1e39d2e
            *v16 = *v16 + 4;
            int32_t v17 = g8; // 0x1e39d33
            int32_t v18 = (int32_t)*(int16_t *)v17; // 0x1e39d33
            g2 = v18;
            int32_t v19 = g6 + 1; // 0x1e39d36
            g6 = v19;
            if (v18 <= v19) {
                v2 = v17;
                // break -> 0x1e39d3b
                break;
            }
            // 0x1e39d2e
            v3 = g9;
            v4 = v17;
        }
    } else {
        v2 = a1;
    }
    int32_t v20 = *(int32_t *)(v2 + 2); // 0x1e39d3b
    g2 = v20;
    int32_t v21; // 0x1e39d48
    if (v20 != 0) {
        // 0x1e39d42
        *(int32_t *)(g9 - 4) = v20;
        g2 = function_1e25401((int32_t)&g708);
        v21 = g8;
    } else {
        v21 = v2;
    }
    // 0x1e39d48
    *(int32_t *)(g9 - 4) = *(int32_t *)(v21 + 6);
    g2 = function_1e25401((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    int32_t result = function_1e25401((int32_t)&g708); // 0x1e39d51
    g2 = result;
    g3 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e39d60 - 0x1e39d7e
int32_t function_1e39d60(int32_t hFile) {
    // 0x1e39d60
    int32_t lpBuffer; // bp-1
    g2 = &lpBuffer;
    unsigned char v1;
    int32_t result = _lread(hFile, &lpBuffer, 1) & -256 | (int32_t)v1; // 0x1e39d74
    g2 = result;
    return result;
}

// Address range: 0x1e39d7e - 0x1e39d9c
int32_t function_1e39d7e(int32_t hFile, int32_t a2) {
    // 0x1e39d7e
    int32_t lpBuffer; // bp-4
    g2 = &lpBuffer;
    _lread(hFile, &lpBuffer, 4);
    g2 = hFile;
    return hFile;
}

// Address range: 0x1e39d9c - 0x1e3a08c
int32_t function_1e39d9c(int32_t lpFileName) {
    int32_t v1 = g3; // bp-4
    g2 = 0;
    g3 = &v1;
    int32_t lpReOpenBuff; // bp-364
    g5 = &lpReOpenBuff;
    int32_t hFile = OpenFile((char *)lpFileName, (struct _OFSTRUCT *)&lpReOpenBuff, 0); // 0x1e39db8
    g2 = hFile;
    int32_t result; // 0x1e3a089
    int32_t v2; // 0x1e39e05
    int16_t * v3; // 0x1e39e0a
    if (hFile == -1) {
        // 0x1e3a081
        g2 = 0;
        result = 0;
        goto lab_0x1e3a083;
    } else {
        // 0x1e39dca
        int32_t lpBuffer; // bp-228
        int32_t v4 = &lpBuffer; // 0x1e39dcf
        g2 = v4;
        g2 = _lread(hFile, &lpBuffer, 183);
        g5 = v4;
        int32_t v5 = lstrcmpA("PARTOUT(4.0)RESOURCE", (char *)&lpBuffer); // 0x1e39deb
        g2 = v5;
        if (v5 == 0) {
            // 0x1e39e03
            v2 = function_1e25371(10);
            g2 = v2;
            v3 = (int16_t *)v2;
            g8 = v2;
            if (v2 != 0) {
                // 0x1e39e1e
                int32_t lpString; // bp-157
                int32_t v6 = &lpString; // 0x1e39e1e
                g2 = v6;
                int32_t v7 = lstrlenA((char *)&lpString); // 0x1e39e25
                g2 = v7;
                if (v7 < 1) {
                    // 0x1e39e6e
                    *(int32_t *)(v2 + 2) = 0;
                    goto lab_0x1e39e75;
                } else {
                    // 0x1e39e2f
                    g2 = v6;
                    int32_t v8 = lstrlenA((char *)&lpString) + 1; // 0x1e39e3c
                    g2 = v8;
                    int32_t lpString1 = function_1e25371(v8); // 0x1e39e3e
                    g2 = lpString1;
                    *(int32_t *)(v2 + 2) = lpString1;
                    if (lpString1 != 0) {
                        // 0x1e39e5e
                        g5 = v6;
                        g2 = (int32_t)lstrcpyA((char *)lpString1, (char *)&lpString);
                        goto lab_0x1e39e75;
                    } else {
                        // 0x1e39e4a
                        g2 = _lclose(hFile);
                        g2 = function_1e25401(v2);
                        // 0x1e3a081
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3a083;
                    }
                }
            } else {
                // 0x1e39e10
                g2 = _lclose(hFile);
                // 0x1e3a081
                g2 = 0;
                result = 0;
                goto lab_0x1e3a083;
            }
        } else {
            // 0x1e39df5
            g2 = _lclose(hFile);
            // 0x1e3a081
            g2 = 0;
            result = 0;
            goto lab_0x1e3a083;
        }
    }
  lab_0x1e3a083:
    // 0x1e3a083
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    g3 = v1;
    return result;
  lab_0x1e39e75:;
    // 0x1e39e75
    uint16_t v9;
    int32_t v10 = v9; // 0x1e39e75
    if (v9 == 0) {
        goto lab_0x1e39ebf;
    } else {
        // 0x1e39e7d
        *(int32_t *)(g9 - 4) = v10;
        int32_t v11 = function_1e25371((int32_t)&g708); // 0x1e39e7e
        g2 = v11;
        g6 = v11;
        int32_t * v12 = (int32_t *)(g9 - 4); // 0x1e39eae
        if (v11 != 0) {
            // 0x1e39eae
            *v12 = v10;
            *(int32_t *)(g9 - 8) = v11;
            *(int32_t *)(g9 - 12) = hFile;
            g2 = _lread((int32_t)&g708, &g708, (int32_t)&g708);
            *(int32_t *)(g9 - 4) = v11;
            g2 = function_1e25401((int32_t)&g708);
            goto lab_0x1e39ebf;
        } else {
            // 0x1e39e89
            *v12 = hFile;
            g2 = _lclose((int32_t)&g708);
            *(int32_t *)(g9 - 4) = v2;
            g2 = function_1e25401((int32_t)&g708);
            int32_t v13 = *(int32_t *)(v2 + 2); // 0x1e39e98
            g2 = v13;
            if (v13 != 0) {
                // 0x1e39ea3
                *(int32_t *)(g9 - 4) = v13;
                g2 = function_1e25401((int32_t)&g708);
            }
            // 0x1e3a081
            g2 = 0;
            result = 0;
            goto lab_0x1e3a083;
        }
    }
  lab_0x1e39ebf:;
    // 0x1e39ebf
    uint16_t v14;
    int32_t v15 = v14; // 0x1e39ebf
    int32_t v16 = 4 * v15; // 0x1e39ec3
    g2 = v16;
    *(int32_t *)(g9 - 4) = v16;
    int32_t v17 = function_1e25371((int32_t)&g708); // 0x1e39ec7
    g2 = v17;
    int32_t * v18 = (int32_t *)(v2 + 6); // 0x1e39ecc
    *v18 = v17;
    if (v17 != 0) {
        // 0x1e39eef
        g6 = 0;
        if (v14 != 0) {
            // 0x1e39efb
            int32_t v19; // bp-44
            int32_t v20 = &v19; // 0x1e39f89
            int16_t v21;
            int32_t v22 = v21; // 0x1e39fc9
            int16_t v23;
            int32_t v24 = v23; // 0x1e39fd7
            int16_t v25;
            int32_t v26 = v25; // 0x1e39ffb
            int16_t v27;
            int32_t v28 = v27; // 0x1e3a005
            while (true) {
                // 0x1e39efb
                *(int32_t *)(g9 - 4) = hFile;
                int32_t v29 = function_1e39d60((int32_t)&g708); // 0x1e39efe
                g2 = v29;
                char v30 = v29; // 0x1e39f03
                int32_t v31;
                if (v30 < 1) {
                    v31 = 0;
                } else {
                    // 0x1e39f0a
                    v31 = v29 - 1;
                }
                int32_t v32 = 10 * v31 + 12; // 0x1e39f15
                g2 = v32;
                *(int32_t *)(g9 - 4) = v32;
                int32_t v33 = 0x1000000 * v29 / 0x1000000; // 0x1e39f19
                int32_t v34 = function_1e25371(v33); // 0x1e39f19
                g2 = v34;
                int32_t v35 = *v18; // 0x1e39f1e
                g5 = v35;
                *(int32_t *)(4 * g6 + v35) = v34;
                int32_t v36 = *v18; // 0x1e39f24
                g5 = v36;
                int32_t v37 = *(int32_t *)(4 * g6 + v36); // 0x1e39f27
                if (v37 == 0) {
                    // break -> 0x1e3a065
                    break;
                }
                // 0x1e39f32
                g2 = g2 & -0x10000 | v33;
                *(int16_t *)v37 = (int16_t)v29;
                if (v30 > 0) {
                    // 0x1e39f4b
                    g4 = v37 + 2;
                    int32_t v38 = 0;
                    while (true) {
                        // 0x1e39f4e
                        *(int32_t *)(g9 - 4) = hFile;
                        int32_t v39 = function_1e39d60((int32_t)&g708) & -0xff01; // 0x1e39f56
                        g2 = v39;
                        g5 = v39;
                        *(int16_t *)g4 = (int16_t)v39;
                        int32_t v40 = g5; // 0x1e39f60
                        int16_t v41 = *(int16_t *)(2 * v40 + (int32_t)&g428); // 0x1e39f63
                        int32_t v42 = v41; // 0x1e39f63
                        g2 = v42;
                        int32_t hFile2; // 0x1e39f75
                        if (v41 < 0) {
                            // 0x1e39f72
                            *(int32_t *)(g9 - 4) = hFile;
                            hFile2 = function_1e39d7e(v40, v42);
                            g2 = hFile2;
                        } else {
                            hFile2 = v42;
                        }
                        int32_t * v43 = (int32_t *)(g9 - 4); // 0x1e3a00e
                        if (v40 != 1) {
                            // 0x1e3a00e
                            *v43 = hFile2;
                            int32_t v44 = function_1e25371(hFile2); // 0x1e3a011
                            g2 = v44;
                            *(int32_t *)(g4 + 6) = v44;
                            if (v44 == 0) {
                                goto lab_0x1e3a065;
                            }
                            // 0x1e3a01d
                            *(int32_t *)(g9 - 4) = hFile2;
                            *(int32_t *)(g9 - 8) = v44;
                            *(int32_t *)(g9 - 12) = hFile;
                            g2 = _hread((int32_t)&g708, &g708, (int32_t)&g708);
                        } else {
                            // 0x1e39f87
                            *v43 = 14;
                            g2 = v20;
                            *(int32_t *)(g9 - 8) = v20;
                            *(int32_t *)(g9 - 12) = hFile;
                            g2 = _hread(hFile2, &g708, (int32_t)&g708);
                            *(int32_t *)(g9 - 4) = 37;
                            int32_t v45 = function_1e25371((int32_t)&g708); // 0x1e39f98
                            g2 = v45;
                            g5 = v45;
                            *(int32_t *)(g4 + 6) = v45;
                            if (v45 == 0) {
                                goto lab_0x1e3a065;
                            }
                            unsigned char v46;
                            if ((v46 & 2) == 0) {
                                // 0x1e39fc9
                                g7 = v22;
                                *(int32_t *)(g9 - 4) = (int32_t)v46 & 1;
                                *(int32_t *)(g9 - 8) = g7;
                                g2 = v24;
                                *(int32_t *)(g9 - 12) = v24;
                                *(int32_t *)(g9 - 16) = v45;
                                int32_t v47 = function_1e27346((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39fdd
                                g2 = v47;
                                if (v47 != 0) {
                                    goto lab_0x1e3a065;
                                }
                            } else {
                                // 0x1e39fb0
                                g2 = v22;
                                *(int32_t *)(g9 - 4) = v22;
                                *(int32_t *)(g9 - 8) = v24;
                                *(int32_t *)(g9 - 12) = v45;
                                int32_t v48 = function_1e27332((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e39fbb
                                g2 = v48;
                                if (v48 != 0) {
                                    goto lab_0x1e3a065;
                                }
                            }
                            // 0x1e39fe6
                            g5 = *(int32_t *)(g4 + 6);
                            *(int32_t *)(g9 - 8) = *(int32_t *)(g5 + 8);
                            *(int32_t *)(g9 - 12) = hFile;
                            g2 = _hread((int32_t)&g708, &g708, (int32_t)&g708);
                            int32_t v49 = *(int32_t *)(g4 + 6); // 0x1e39ff8
                            g5 = v49;
                            g7 = v26;
                            *(int32_t *)(v49 + 29) = v26;
                            int32_t v50 = *(int32_t *)(g4 + 6); // 0x1e3a002
                            g5 = v50;
                            g2 = v28;
                            *(int32_t *)(v50 + 33) = v28;
                        }
                        // 0x1e3a02a
                        g5 = g6 + 1;
                        *(int32_t *)(g4 + 2) = hFile2;
                        g4 += 10;
                        *v3 = (int16_t)g5;
                        int32_t v51 = v38 + 1; // 0x1e3a039
                        g2 = v33;
                        if (v33 <= v51) {
                            // break -> 0x1e3a052
                            break;
                        }
                        v38 = v51;
                    }
                }
                // 0x1e3a052
                g2 = v15;
                int32_t v52 = g6 + 1; // 0x1e3a05c
                g6 = v52;
                if (v14 <= (int16_t)v52) {
                    // break -> 0x1e3a065
                    break;
                }
            }
        }
        goto lab_0x1e3a065;
    } else {
        // 0x1e39ed3
        *(int32_t *)(g9 - 4) = v2;
        g2 = function_1e25401((int32_t)&g708);
        int32_t v53 = *(int32_t *)(v2 + 2); // 0x1e39ed9
        g2 = v53;
        if (v53 != 0) {
            // 0x1e39ee4
            *(int32_t *)(g9 - 4) = v53;
            g2 = function_1e25401((int32_t)&g708);
        }
        // 0x1e3a081
        g2 = 0;
        result = 0;
        goto lab_0x1e3a083;
    }
  lab_0x1e3a065:
    // 0x1e3a065
    *(int32_t *)(g9 - 4) = hFile;
    g2 = _lclose((int32_t)&g708);
    int32_t v54 = (int32_t)*v3; // 0x1e3a06e
    g5 = v54;
    g2 = v2;
    if (v54 == v15) {
        result = v2;
        goto lab_0x1e3a083;
    } else {
        // 0x1e3a07b
        *(int32_t *)(g9 - 4) = v2;
        g2 = function_1e39cc6((int32_t)&g708);
        // 0x1e3a081
        g2 = 0;
        result = 0;
        goto lab_0x1e3a083;
    }
}

// Address range: 0x1e3a08c - 0x1e3a159
int32_t function_1e3a08c(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3a08c
    g2 = a2;
    int32_t v1; // bp-1028
    int32_t v2 = &v1; // 0x1e3a093
    if (a2 == 0) {
        // 0x1e3a0a0
        g2 = (int32_t)GetStockObject(15);
    }
    int32_t v3 = a1; // edx
    int32_t v4; // ebx
    int32_t result;
    int32_t v5; // 0x1e3a0cc
    if (a1 != 0) {
        int32_t v6 = *(int32_t *)(a1 + 32); // 0x1e3a0b6
        v4 = v6;
        if (v6 == 0) {
            uint16_t v7 = *(int16_t *)(a1 + 14); // 0x1e3a0bd
            int32_t v8 = v7; // 0x1e3a0bd
            g5 = g5 & -0x10000 | v8;
            if (v7 < 9) {
                // 0x1e3a0c7
                v4 = 1;
                uint32_t v9 = v8 & 31; // 0x1e3a0cc
                if (v9 != 0) {
                    // bb
                    v5 = 1 << v9;
                    v4 = v5;
                } else {
                    v5 = 1;
                }
            } else {
                v5 = v6;
            }
        } else {
            v5 = v6;
        }
        // 0x1e3a0ce
        if (v5 != 3) {
            goto lab_0x1e3a0db;
        } else {
            // 0x1e3a0d3
            if (*(int32_t *)(a1 + 16) != 3) {
                goto lab_0x1e3a0db;
            } else {
                // 0x1e3a0db
                result = 1;
                goto lab_0x1e3a150;
            }
        }
    } else {
        // 0x1e3a0af
        result = 0;
        goto lab_0x1e3a150;
    }
  lab_0x1e3a0db:;
    // 0x1e3a0db
    int32_t v10; // 0x1e3a0e4
    if (v5 < 1) {
        result = 1;
        goto lab_0x1e3a150;
    } else {
        // 0x1e3a0df
        g5 = a3;
        v10 = *(int32_t *)a1 + a1;
        if (a3 == 0) {
            goto lab_0x1e3a0f0;
        } else {
            // 0x1e3a0eb
            if (a3 < 3) {
                // 0x1e3a140
                g2 = 0;
                *(int16_t *)v10 = (int16_t)0;
                int32_t v11 = g2 + 1; // 0x1e3a143
                g2 = v11;
                while (v11 < v4) {
                    // 0x1e3a140
                    v10 += 2;
                    *(int16_t *)v10 = (int16_t)v11;
                    v11 = g2 + 1;
                    g2 = v11;
                }
                // 0x1e3a150
                result = 1;
                goto lab_0x1e3a150;
            } else {
                goto lab_0x1e3a0f0;
            }
        }
    }
  lab_0x1e3a150:
    // 0x1e3a150
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
  lab_0x1e3a0f0:
    // 0x1e3a0f0
    g5 = 256;
    int32_t v12; // 0x1e3a0fb
    if (v5 >= 256) {
        // 0x1e3a0f9
        v4 = 256;
        v12 = 256;
    } else {
        v12 = v5;
    }
    int32_t v13 = v12; // edi
    g5 = v2;
    *(int32_t *)(g9 - 4) = v2;
    *(int32_t *)(g9 - 8) = v13;
    *(int32_t *)(g9 - 12) = 0;
    *(int32_t *)(g9 - 16) = g2;
    int32_t v14 = GetPaletteEntries(&g708, (int32_t)&g708, (int32_t)&g708, (struct tagPALETTEENTRY *)&g708); // 0x1e3a108
    g2 = v14;
    if (v4 >= 1) {
        int32_t v15 = v10 + 2; // 0x1e3a112
        v10 = v15;
        g2 = v2;
        while (true) {
            unsigned char v16 = *(char *)v2; // 0x1e3a11b
            g5 = g5 & -256 | (int32_t)v16;
            g2 = v2 + 4;
            *(char *)v15 = v16;
            int32_t v17 = v10; // 0x1e3a122
            v10 = v17 + 4;
            unsigned char v18 = *(char *)(g2 - 3); // 0x1e3a125
            v3 = v3 & -256 | (int32_t)v18;
            int32_t v19 = v13 - 1; // 0x1e3a128
            v13 = v19;
            *(char *)(v17 - 1) = v18;
            unsigned char v20 = *(char *)(g2 - 2); // 0x1e3a12c
            v4 = v4 & -256 | (int32_t)v20;
            *(char *)(v10 - 6) = v20;
            *(char *)(v10 - 3) = 0;
            if (v19 == 0) {
                result = 1;
                // break -> 0x1e3a150
                break;
            }
            // 0x1e3a11b
            v15 = v10;
            v2 = g2;
        }
    } else {
        result = 1;
    }
    goto lab_0x1e3a150;
}

// Address range: 0x1e3a159 - 0x1e3a2a2
int32_t function_1e3a159(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = a1; // esi
    int32_t v2 = a2 * a1; // 0x1e3a167
    int32_t v3 = (((v2 >> 31 & 7) + v2) / 8 + 3 & -4) * a3; // 0x1e3a17d
    int32_t dwBytes = v3 + 1064; // 0x1e3a180
    g2 = dwBytes;
    int32_t * hMem = GlobalAlloc(66, dwBytes); // 0x1e3a189
    int32_t v4 = (int32_t)hMem; // 0x1e3a189
    g2 = v4;
    int32_t * v5 = GlobalLock(hMem); // 0x1e3a190
    int32_t v6 = (int32_t)v5; // 0x1e3a190
    g2 = v6;
    g5 = v6;
    int32_t result;
    if (v5 != NULL) {
        // 0x1e3a1a3
        g2 = 0;
        *v5 = 40;
        *(int32_t *)(v6 + 4) = a2;
        *(int32_t *)(v6 + 8) = a3;
        *(int16_t *)(v6 + 12) = 1;
        *(int16_t *)(v6 + 14) = (int16_t)v1;
        *(int32_t *)(v6 + 16) = g2;
        *(int32_t *)(v6 + 20) = v3;
        *(int32_t *)(v6 + 24) = g2;
        *(int32_t *)(v6 + 28) = g2;
        int32_t * v7 = (int32_t *)(v6 + 32); // 0x1e3a1ca
        *v7 = g2;
        *(int32_t *)(v6 + 36) = g2;
        if (v1 != 4) {
            // 0x1e3a1db
            if (v1 == 8) {
                // 0x1e3a1e0
                *v7 = 256;
            }
        } else {
            // 0x1e3a1d2
            *v7 = 16;
        }
        int32_t v8 = *v5 + v6; // 0x1e3a1eb
        int32_t v9 = *v7; // 0x1e3a1ed
        int32_t v10 = (v9 >> 31 & 15) + v9; // 0x1e3a1f4
        g2 = v10 / 16;
        if (v10 >= 16) {
            int32_t v11 = 4; // ebx
            v1 = 1;
            *(int32_t *)v8 = 0;
            int32_t v12 = v11 + v8; // 0x1e3a20b
            *(int32_t *)v12 = 0x800000;
            int32_t v13 = v11 + v12; // 0x1e3a213
            *(int32_t *)v13 = 0x8000;
            int32_t v14 = v11 + v13; // 0x1e3a21b
            *(int32_t *)v14 = 0x808000;
            int32_t v15 = v11 + v14; // 0x1e3a223
            *(int32_t *)v15 = 128;
            int32_t v16 = v11 + v15; // 0x1e3a22b
            *(int32_t *)v16 = 0x800080;
            int32_t v17 = v11 + v16; // 0x1e3a233
            *(int32_t *)v17 = 0x8080;
            int32_t v18 = v11 + v17; // 0x1e3a23b
            *(int32_t *)v18 = 0xc0c0c0;
            int32_t v19 = v11 + v18; // 0x1e3a243
            *(int32_t *)v19 = 0x808080;
            int32_t v20 = v11 + v19; // 0x1e3a24b
            *(int32_t *)v20 = 0xff0000;
            int32_t v21 = v11 + v20; // 0x1e3a253
            *(int32_t *)v21 = 0xff00;
            int32_t v22 = v11 + v21; // 0x1e3a25b
            *(int32_t *)v22 = 0xffff00;
            int32_t v23 = v11 + v22; // 0x1e3a263
            *(int32_t *)v23 = 255;
            int32_t v24 = v11 + v23; // 0x1e3a26b
            *(int32_t *)v24 = 0xff00ff;
            int32_t v25 = v11 + v24; // 0x1e3a273
            *(int32_t *)v25 = 0xffff;
            int32_t v26 = v11 + v25; // 0x1e3a27b
            *(int32_t *)v26 = 0xffffff;
            int32_t v27 = *v7; // 0x1e3a285
            int32_t v28 = ((v27 >> 31 & 15) + v27) / 16; // 0x1e3a28e
            g2 = v28;
            while (v28 > v1) {
                // 0x1e3a208
                v8 = v11 + v26;
                v1++;
                *(int32_t *)v8 = 0;
                v12 = v11 + v8;
                *(int32_t *)v12 = 0x800000;
                v13 = v11 + v12;
                *(int32_t *)v13 = 0x8000;
                v14 = v11 + v13;
                *(int32_t *)v14 = 0x808000;
                v15 = v11 + v14;
                *(int32_t *)v15 = 128;
                v16 = v11 + v15;
                *(int32_t *)v16 = 0x800080;
                v17 = v11 + v16;
                *(int32_t *)v17 = 0x8080;
                v18 = v11 + v17;
                *(int32_t *)v18 = 0xc0c0c0;
                v19 = v11 + v18;
                *(int32_t *)v19 = 0x808080;
                v20 = v11 + v19;
                *(int32_t *)v20 = 0xff0000;
                v21 = v11 + v20;
                *(int32_t *)v21 = 0xff00;
                v22 = v11 + v21;
                *(int32_t *)v22 = 0xffff00;
                v23 = v11 + v22;
                *(int32_t *)v23 = 255;
                v24 = v11 + v23;
                *(int32_t *)v24 = 0xff00ff;
                v25 = v11 + v24;
                *(int32_t *)v25 = 0xffff;
                v26 = v11 + v25;
                *(int32_t *)v26 = 0xffffff;
                v27 = *v7;
                v28 = ((v27 >> 31 & 15) + v27) / 16;
                g2 = v28;
            }
            result = v6;
        } else {
            result = v6;
        }
    } else {
        result = 0;
    }
    // 0x1e3a29b
    g2 = result;
    g3 = v4;
    g6 = 66;
    return result;
}

// Address range: 0x1e3a2a2 - 0x1e3a358
int32_t function_1e3a2a2(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3a2a2
    g2 = a1;
    int32_t v1 = *(int32_t *)a1; // 0x1e3a2aa
    g5 = v1;
    int32_t v2 = *(int32_t *)(a1 + 4); // 0x1e3a2ad
    int32_t v3 = v2; // edx
    int32_t v4 = *(int32_t *)(a1 + 8); // 0x1e3a2b1
    int32_t v5 = v4; // esi
    int32_t v6 = *(int32_t *)(a1 + 12); // 0x1e3a2b5
    int32_t v7 = v6; // edi
    int32_t * v8 = (int32_t *)a2; // 0x1e3a2bc
    int32_t v9 = *v8; // 0x1e3a2bc
    g2 = v9;
    int32_t v10 = *(int32_t *)(a2 + 4); // 0x1e3a2bf
    int32_t v11 = *(int32_t *)(a2 + 8) + v9; // 0x1e3a2c2
    g2 = v11;
    int32_t v12 = *(int32_t *)(a2 + 12) + v10; // 0x1e3a2cc
    int32_t v13 = v4 + v1; // 0x1e3a2d2
    g2 = v13;
    int32_t v14 = *v8; // 0x1e3a2d9
    g2 = v14;
    int32_t result;
    if (v13 < v14) {
        goto lab_0x1e3a34c;
    } else {
        if (v11 > v1) {
            int32_t v15 = v6 + v2; // 0x1e3a2e8
            g2 = v15;
            if (v15 < v10) {
                goto lab_0x1e3a34c;
            } else {
                if (v12 > v2) {
                    int32_t v16 = *v8; // 0x1e3a2f5
                    int32_t v17; // 0x1e3a2fd
                    int32_t v18; // 0x1e3a2ff
                    if (v1 < v16) {
                        // 0x1e3a2fa
                        v17 = v4 - v16 + v1;
                        v5 = v17;
                        v18 = *v8;
                        g5 = v18;
                    } else {
                        v17 = v4;
                        v18 = v1;
                    }
                    int32_t v19 = v18 + v17; // 0x1e3a302
                    g2 = v19;
                    int32_t v20; // 0x1e3a30f
                    if (v19 > v11) {
                        // 0x1e3a30d
                        v20 = v11 - v18;
                        v5 = v20;
                    } else {
                        v20 = v17;
                    }
                    int32_t v21; // 0x1e3a317
                    if (v2 < v10) {
                        // 0x1e3a315
                        v21 = v6 - v10 + v2;
                        v7 = v21;
                        v3 = v10;
                    } else {
                        v21 = v6;
                        v10 = v2;
                    }
                    int32_t v22 = v10 + v21; // 0x1e3a31b
                    g2 = v22;
                    int32_t v23; // 0x1e3a328
                    if (v22 > v12) {
                        // 0x1e3a324
                        v23 = v12 - v10;
                        v7 = v23;
                    } else {
                        v23 = v21;
                    }
                    if (v20 == 0) {
                        goto lab_0x1e3a34c;
                    } else {
                        if (v23 == 0) {
                            goto lab_0x1e3a34c;
                        } else {
                            // 0x1e3a332
                            g2 = a3;
                            if (a3 != 0) {
                                // 0x1e3a33a
                                *(int32_t *)a3 = v18;
                                *(int32_t *)(a3 + 4) = v3;
                                *(int32_t *)(a3 + 8) = v5;
                                *(int32_t *)(a3 + 12) = v7;
                                result = 1;
                            } else {
                                result = 1;
                            }
                            goto lab_0x1e3a34e;
                        }
                    }
                } else {
                    goto lab_0x1e3a34c;
                }
            }
        } else {
            goto lab_0x1e3a34c;
        }
    }
  lab_0x1e3a34c:
    result = 0;
    goto lab_0x1e3a34e;
  lab_0x1e3a34e:
    // 0x1e3a34e
    g2 = result;
    return result;
}

