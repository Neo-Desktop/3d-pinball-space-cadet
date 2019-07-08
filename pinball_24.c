
// Address range: 0x1e3eec0 - 0x1e3eee3
int32_t function_1e3eec0(int32_t a1) {
    // 0x1e3eec0
    g7 = a1;
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x1e3eec4
    int32_t v2 = *v1 - 1; // 0x1e3eec7
    g2 = v2;
    *v1 = v2;
    int32_t v3 = g7; // 0x1e3eed9
    if (v2 < 0) {
        int32_t result = function_1e41790(v3); // 0x1e3eeda
        g2 = result;
        return result;
    }
    int32_t * v4 = (int32_t *)v3; // 0x1e3eecd
    int32_t v5 = *v4; // 0x1e3eecd
    g5 = v5;
    *v4 = v5 + 1;
    g2 = 0;
    int32_t result2 = (int32_t)*(char *)g5; // 0x1e3eed6
    g2 = result2;
    return result2;
}

// Address range: 0x1e3eef0 - 0x1e3ef08
int32_t function_1e3eef0(int32_t a1, int32_t a2) {
    // 0x1e3eef0
    g2 = a1;
    int32_t result; // 0x1e3eeff
    if (a1 != -1) {
        // 0x1e3eef9
        g5 = a2;
        result = function_1e41890(a1, a2);
        g2 = result;
    } else {
        result = a1;
    }
    // 0x1e3ef07
    return result;
}

// Address range: 0x1e3ef10 - 0x1e3ef3b
int32_t function_1e3ef10(int32_t a1, int32_t a2) {
    // 0x1e3ef10
    g8 = a1;
    int32_t v1 = g6; // bp-12
    g6 = a2;
    *(int32_t *)((int32_t)&v1 - 4) = a2;
    int32_t * v2 = (int32_t *)g8; // 0x1e3ef1c
    *v2 = *v2 + 1;
    int32_t v3 = function_1e3eec0((int32_t)&g708); // 0x1e3ef1e
    g2 = v3;
    g4 = v3;
    *(int32_t *)g9 = v3;
    int32_t v4 = function_1e41720((int32_t)&g708); // 0x1e3ef29
    g2 = v4;
    int32_t v5 = g9 + 4; // 0x1e3ef2e
    while (v4 != 0) {
        // 0x1e3ef1b
        *(int32_t *)(v5 - 4) = g6;
        v2 = (int32_t *)g8;
        *v2 = *v2 + 1;
        v3 = function_1e3eec0((int32_t)&g708);
        g2 = v3;
        g4 = v3;
        *(int32_t *)g9 = v3;
        v4 = function_1e41720((int32_t)&g708);
        g2 = v4;
        v5 = g9 + 4;
    }
    int32_t result = g4; // 0x1e3ef35
    g2 = result;
    g6 = *(int32_t *)v5;
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e3ef40 - 0x1e3f08d
int32_t function_1e3ef40(int32_t a1, int32_t * a2) {
    int32_t v1 = g4; // 0x1e3ef40
    int32_t v2 = g8; // 0x1e3ef41
    int32_t v3 = g6; // 0x1e3ef42
    int32_t v4 = g3; // bp-16
    int32_t v5 = &v4; // 0x1e3ef43
    g6 = a1;
    g8 = *(int32_t *)(a1 + 16);
    int32_t * v6 = (int32_t *)(a1 + 12); // 0x1e3ef4b
    int32_t v7 = *v6; // 0x1e3ef4b
    g2 = v7;
    if ((v7 & 130) == 0) {
        goto lab_0x1e3f07d;
    } else {
        if ((v7 & 64) != 0) {
            goto lab_0x1e3f07d;
        } else {
            int32_t v8; // 0x1e3ef85
            if ((v7 & 1) != 0) {
                // 0x1e3ef62
                *(int32_t *)(a1 + 4) = 0;
                int32_t v9 = g6; // 0x1e3ef69
                int32_t * v10 = (int32_t *)(v9 + 12); // 0x1e3ef69
                int32_t v11 = *v10; // 0x1e3ef69
                g2 = v11;
                if ((v11 & 16) == 0) {
                    // 0x1e3eff4
                    g3 = v4;
                    *v10 = v11 | 32;
                    g2 = -1;
                    g6 = v3;
                    g8 = v2;
                    g4 = v1;
                    return -1;
                }
                int32_t v12 = *(int32_t *)(v9 + 8); // 0x1e3ef74
                g2 = v12;
                *(int32_t *)v9 = v12;
                int32_t * v13 = (int32_t *)(g6 + 12); // 0x1e3ef79
                *v13 = *v13 & -2;
                v8 = g6;
            } else {
                v8 = a1;
            }
            int32_t * v14 = (int32_t *)(v8 + 12); // 0x1e3ef7d
            g3 = 0;
            int32_t v15 = *v14 | 2; // 0x1e3ef82
            g2 = v15;
            *v14 = v15;
            int32_t v16 = g2 & -17; // 0x1e3ef88
            g2 = v16;
            *(int32_t *)(g6 + 12) = v16;
            *(int32_t *)(g6 + 4) = 0;
            int32_t v17 = g6; // 0x1e3ef95
            if ((*(int32_t *)(v17 + 12) & 268) != 0) {
                goto lab_0x1e3efc4;
            } else {
                if (v17 == (int32_t)&g142) {
                    goto lab_0x1e3efae;
                } else {
                    if (v17 != (int32_t)&g143) {
                        // 0x1e3efbb
                        g2 = function_1e41920(v17);
                        goto lab_0x1e3efc4;
                    } else {
                        goto lab_0x1e3efae;
                    }
                }
            }
        }
    }
  lab_0x1e3f07d:
    // 0x1e3f07d
    *v6 = v7 | 32;
    g2 = -1;
    g6 = v3;
    g8 = v2;
    g4 = v1;
    return -1;
  lab_0x1e3efc4:;
    int32_t v18 = g6; // 0x1e3efc4
    int32_t v19; // 0x1e3f053
    if ((*(int32_t *)(v18 + 12) & 264) == 0) {
        // 0x1e3f047
        g4 = 1;
        int32_t v20;
        int32_t v21 = &v20; // 0x1e3f04c
        g2 = v21;
        v19 = function_1e23690(g8, v21, 1);
        g2 = v19;
    } else {
        int32_t v22 = *(int32_t *)(v18 + 8); // 0x1e3efcd
        g2 = v22;
        int32_t * v23 = (int32_t *)v18; // 0x1e3efd0
        g4 = *v23 - v22;
        int32_t v24 = v22 + 1; // 0x1e3efd4
        g2 = v24;
        *v23 = v24;
        int32_t v25 = g6; // 0x1e3efd7
        int32_t v26 = *(int32_t *)(v25 + 24) - 1; // 0x1e3efda
        g2 = v26;
        *(int32_t *)(v25 + 4) = v26;
        int32_t v27; // 0x1e3f03c
        int32_t v28; // 0x1e3f03c
        if (g4 < 1) {
            // 0x1e3f004
            g2 = &g112;
            int32_t v29 = g8; // 0x1e3f009
            int32_t v30; // 0x1e3f027
            if (v29 != -1) {
                int32_t v31 = v29 & 31; // 0x1e3f015
                int32_t v32 = v29 / 8 & -4; // 0x1e3f018
                g2 = v32;
                g5 = 4 * v31;
                int32_t v33 = 36 * v31; // 0x1e3f024
                g7 = v33;
                v30 = *(int32_t *)(v32 + (int32_t)&g677) + v33;
                g2 = v30;
            } else {
                v30 = &g112;
            }
            // 0x1e3f029
            if ((*(char *)(v30 + 4) & 32) == 0) {
                // 0x1e3f029
                v28 = v30;
                v27 = g9;
            } else {
                int32_t v34 = function_1e23e70(v29, 0, 2); // 0x1e3f034
                g2 = v34;
                v28 = v34;
                v27 = v5;
            }
        } else {
            int32_t v35 = *(int32_t *)(g6 + 8); // 0x1e3efe3
            g2 = v35;
            int32_t v36 = function_1e23690(g8, v35, g4); // 0x1e3efe8
            g2 = v36;
            g3 = v36;
            v28 = v36;
            v27 = v5;
        }
        unsigned char v37 = *(char *)(v27 + 20); // 0x1e3f03c
        g2 = (int32_t)v37 | v28 & -256;
        int32_t v38 = *(int32_t *)(g6 + 8); // 0x1e3f040
        g5 = v38;
        *(char *)v38 = v37;
        v19 = g3;
    }
    // 0x1e3f05d
    if (v19 == g4) {
        int32_t v39 = *(int32_t *)(g9 + 20); // 0x1e3f06f
        g2 = v39;
        g3 = *(int32_t *)g9;
        int32_t result = v39 & 255; // 0x1e3f074
        g2 = result;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        g4 = *(int32_t *)(g9 + 12);
        return result;
    }
    // 0x1e3f061
    g2 = -1;
    g3 = *(int32_t *)g9;
    int32_t * v40 = (int32_t *)(g6 + 12); // 0x1e3f067
    *v40 = *v40 | 32;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return g2;
  lab_0x1e3efae:;
    int32_t v41 = function_1e41970(g8, v4, v3, v2, v1); // 0x1e3efaf
    g2 = v41;
    if (v41 != 0) {
        goto lab_0x1e3efc4;
    } else {
        // 0x1e3efbb
        g2 = function_1e41920(g6);
        goto lab_0x1e3efc4;
    }
}

// Address range: 0x1e3f090 - 0x1e3f927
int32_t function_1e3f090(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x1e3f090
    g2 = (int32_t)a1;
    unsigned char v1 = *(char *)a1; // 0x1e3f0af
    int32_t v2 = (int32_t)v1 | g4 & -256; // 0x1e3f0af
    g4 = v2;
    int32_t v3 = g3; // bp-600
    int32_t v4 = &v3; // 0x1e3f0b1
    int32_t v5;
    int32_t v6; // 0x1e3f2d6
    int32_t v7; // 0x1e3f10b
    if (v1 != 0) {
        v7 = v4;
        while (true) {
          lab_0x1e3f0ce:
            // 0x1e3f0ce
            if (*(int32_t *)(v7 + 36) < 0) {
                v6 = v7;
                // break -> 0x1e3f2d6
                break;
            }
            char v8 = v2; // 0x1e3f0d9
            if (v8 < 32) {
                v5 = 0;
                goto lab_0x1e3f0f5;
            } else {
                if (v8 > 120) {
                    v5 = 0;
                    goto lab_0x1e3f0f5;
                } else {
                    // 0x1e3f0e3
                    g5 = v2;
                    g2 = 0;
                    unsigned char v9 = *(char *)(v2 + (int32_t)&g65); // 0x1e3f0e8
                    int32_t v10 = v9; // 0x1e3f0e8
                    g2 = v10;
                    v5 = v10 & 15;
                    goto lab_0x1e3f0f5;
                }
            }
        }
    } else {
        v6 = v4;
    }
  lab_0x1e3f2d6:;
    int32_t result = *(int32_t *)(v6 + 36); // 0x1e3f2d6
    g2 = result;
    g3 = *(int32_t *)v6;
    g6 = *(int32_t *)(v6 + 4);
    g4 = *(int32_t *)(v6 + 12);
    return result;
  lab_0x1e3f0f5:
    // 0x1e3f0f5
    g2 = v5;
    int32_t * v11 = (int32_t *)(v7 + 60); // 0x1e3f0f5
    int32_t v12 = *v11; // 0x1e3f0f5
    g5 = v12;
    char v13 = *(char *)(8 * v5 + (int32_t)&g66 + v12); // 0x1e3f0f9
    int32_t v14 = v13 / 16; // 0x1e3f100
    g5 = v14;
    g2 = v14;
    *v11 = v14;
    int32_t v15 = g2; // 0x1e3f115
    g709 = v15;
    int32_t v16; // 0x1e3f31d
    switch (v15) {
        case 0: {
            goto lab_0x1e3f263;
        }
        case 1: {
            // 0x1e3f11c
            *(int32_t *)(g9 + 76) = 0;
            g8 = 0;
            g3 = -1;
            *(int32_t *)(g9 + 72) = 0;
            *(int32_t *)(g9 + 48) = 0;
            *(int32_t *)(g9 + 52) = 0;
            *(int32_t *)(g9 + 56) = g8;
            goto lab_0x1e3f2be;
        }
        case 2: {
            int32_t v17 = g4; // 0x1e3f14c
            g5 = v17 - 32;
            g2 = 0;
            unsigned char v18 = *(char *)(v17 + (int32_t)&g17 - 32); // 0x1e3f15d
            int32_t v19 = v18; // 0x1e3f15d
            g2 = v19;
            g710 = v19;
            switch (v18) {
                case 0: {
                    // 0x1e3f16a
                    g8 |= 2;
                    // break -> 0x1e3f2be
                    break;
                }
                case 1: {
                    // 0x1e3f172
                    g8 |= 128;
                    // break -> 0x1e3f2be
                    break;
                }
                case 2: {
                    // 0x1e3f17d
                    g8 |= 1;
                    // break -> 0x1e3f2be
                    break;
                }
                case 3: {
                    // 0x1e3f185
                    g8 |= 4;
                    // break -> 0x1e3f2be
                    break;
                }
                case 4: {
                    // 0x1e3f18d
                    g8 |= 8;
                    // break -> 0x1e3f2be
                    break;
                }
            }
            goto lab_0x1e3f2be;
        }
        case 3: {
            int32_t v20 = g4; // 0x1e3f195
            if ((char)v20 != 42) {
                int32_t * v21 = (int32_t *)(g9 + 48); // 0x1e3f1c4
                int32_t v22 = *v21; // 0x1e3f1c4
                g2 = v22;
                g7 = 5 * v22;
                int32_t v23 = v20 - 48 + 10 * v22; // 0x1e3f1ce
                g5 = v23;
                *v21 = v23;
            } else {
                int32_t v24 = g9 + 612; // 0x1e3f19a
                g2 = v24;
                *(int32_t *)(g9 - 4) = v24;
                int32_t v25 = function_1e3fb10((int32_t)&g708); // 0x1e3f1a2
                g2 = v25;
                *(int32_t *)(g9 + 52) = v25;
                if (v25 < 0) {
                    int32_t v26 = -v25; // 0x1e3f1b6
                    g2 = v26;
                    g8 |= 4;
                    *(int32_t *)(g9 + 52) = v26;
                }
            }
            goto lab_0x1e3f2be;
        }
        case 4: {
            // 0x1e3f1db
            g3 = 0;
            goto lab_0x1e3f2be;
        }
        case 5: {
            int32_t v27 = g4; // 0x1e3f1e2
            if ((char)v27 != 42) {
                int32_t v28 = g3; // 0x1e3f20b
                g2 = 5 * v28;
                g5 = v27;
                g3 = v27 - 48 + 10 * v28;
            } else {
                int32_t v29 = g9 + 612; // 0x1e3f1e7
                g2 = v29;
                *(int32_t *)(g9 - 4) = v29;
                int32_t v30 = function_1e3fb10((int32_t)&g708); // 0x1e3f1ef
                g2 = v30;
                g3 = v30;
                if (v30 < 0) {
                    // 0x1e3f201
                    g3 = -1;
                }
            }
            goto lab_0x1e3f2be;
        }
        case 6: {
            int32_t v31 = g4; // 0x1e3f21b
            g5 = v31 - 73;
            g2 = 0;
            unsigned char v32 = *(char *)(v31 + (int32_t)&g18 - 73); // 0x1e3f22c
            int32_t v33 = v32; // 0x1e3f22c
            g2 = v33;
            g711 = v33;
            switch (v32) {
                case 0: {
                    int32_t * v34 = (int32_t *)(g9 + 608); // 0x1e3f239
                    int32_t v35 = *v34; // 0x1e3f239
                    g2 = v35;
                    if (*(char *)v35 != 54) {
                        // 0x1e3f25b
                        *(int32_t *)(g9 + 60) = 0;
                        goto lab_0x1e3f263;
                    } else {
                        // 0x1e3f245
                        if (*(char *)(v35 + 1) != 52) {
                            // 0x1e3f25b
                            *(int32_t *)(g9 + 60) = 0;
                            goto lab_0x1e3f263;
                        } else {
                            // 0x1e3f24b
                            *v34 = *v34 + 2;
                            g8 |= 0x8000;
                            goto lab_0x1e3f2be;
                        }
                    }
                }
                case 1: {
                    // 0x1e3f2e5
                    g8 |= 32;
                    goto lab_0x1e3f2be;
                }
                case 2: {
                    // 0x1e3f2ea
                    g8 |= 16;
                    goto lab_0x1e3f2be;
                }
                case 3: {
                    // 0x1e3f2ef
                    g8 |= 2048;
                    goto lab_0x1e3f2be;
                }
                default: {
                    goto lab_0x1e3f2be;
                }
            }
        }
        case 7: {
            int32_t v36 = g4; // 0x1e3f2f7
            g5 = v36 - 67;
            g2 = 0;
            unsigned char v37 = *(char *)(v36 + (int32_t)&g19 - 67); // 0x1e3f308
            int32_t v38 = v37; // 0x1e3f308
            g2 = v38;
            g712 = v38;
            switch (v37) {
                case 0: {
                    int32_t v39 = g8; // 0x1e3f315
                    if ((v39 & 2096) == 0) {
                        // 0x1e3f31d
                        v16 = v39 | 2048;
                        g8 = v16;
                    } else {
                        v16 = v39;
                    }
                    goto lab_0x1e3f323;
                }
                case 1: {
                    goto lab_0x1e3f364;
                }
                case 2: {
                    goto lab_0x1e3f364;
                }
                case 3: {
                    int32_t v40 = g8; // 0x1e3f38c
                    if ((v40 & 2096) == 0) {
                        // 0x1e3f394
                        g8 = v40 | 2048;
                    }
                    goto lab_0x1e3f39a;
                }
                case 4: {
                    // 0x1e3f4c8
                    *(int32_t *)(g9 + 68) = 7;
                    goto lab_0x1e3f4d0;
                }
                case 5: {
                    int32_t v41 = g9 + 612; // 0x1e3f402
                    g2 = v41;
                    *(int32_t *)(g9 - 4) = v41;
                    int32_t v42 = function_1e3fb10((int32_t)&g708); // 0x1e3f40a
                    int16_t * v43 = (int16_t *)v42; // 0x1e3f40a
                    g2 = v42;
                    if (v42 == 0) {
                        goto lab_0x1e3f450;
                    } else {
                        int32_t v44 = *(int32_t *)(v42 + 4); // 0x1e3f416
                        g5 = v44;
                        if (v44 == 0) {
                            goto lab_0x1e3f450;
                        } else {
                            int32_t * v45 = (int32_t *)(g9 + 60); // 0x1e3f43c
                            if ((g8 & 2048) == 0) {
                                // 0x1e3f43c
                                *v45 = 0;
                                g6 = (int32_t)*v43;
                                *(int32_t *)(g9 + 24) = v44;
                            } else {
                                // 0x1e3f425
                                *v45 = 1;
                                g6 = (int32_t)*v43 / 2;
                                *(int32_t *)(g9 + 24) = v44;
                            }
                            goto lab_0x1e3f7c3;
                        }
                    }
                }
                case 6: {
                    // 0x1e3f2f7
                    v16 = g8;
                    goto lab_0x1e3f323;
                }
                case 7: {
                    goto lab_0x1e3f46e;
                }
                case 8: {
                    goto lab_0x1e3f36f;
                }
                case 9: {
                    goto lab_0x1e3f46e;
                }
                case 10: {
                    int32_t v46 = g9 + 612; // 0x1e3f47b
                    g2 = v46;
                    *(int32_t *)(g9 - 4) = v46;
                    int32_t v47 = function_1e3fb10((int32_t)&g708); // 0x1e3f483
                    g2 = v47;
                    int32_t v48 = *(int32_t *)(g9 + 40); // 0x1e3f488
                    g5 = v48;
                    if ((g8 & 32) == 0) {
                        // 0x1e3f49c
                        *(int32_t *)v47 = v48;
                    } else {
                        // 0x1e3f497
                        *(int16_t *)v47 = (int16_t)v48;
                    }
                    // 0x1e3f49e
                    *(int32_t *)(g9 + 72) = 1;
                    goto lab_0x1e3f7c3;
                }
                case 11: {
                    // 0x1e3f4ab
                    *(int32_t *)(g9 + 64) = 8;
                    int32_t v49 = g8; // 0x1e3f4b3
                    if ((char)v49 <= 255) {
                        // 0x1e3f4bb
                        g8 = v49 | 512;
                    }
                    goto lab_0x1e3f4f7;
                }
                case 12: {
                    // 0x1e3f4c3
                    g3 = 8;
                    // 0x1e3f4c8
                    *(int32_t *)(g9 + 68) = 7;
                    goto lab_0x1e3f4d0;
                }
                case 13: {
                    goto lab_0x1e3f39a;
                }
                case 14: {
                    // 0x1e3f51c
                    *(int32_t *)(g9 + 64) = 10;
                    goto lab_0x1e3f4f7;
                }
                case 15: {
                    // 0x1e3f526
                    *(int32_t *)(g9 + 68) = 39;
                    goto lab_0x1e3f4d0;
                }
                default: {
                    goto lab_0x1e3f7c3;
                }
            }
        }
        default: {
            goto lab_0x1e3f2be;
        }
    }
  lab_0x1e3f263:
    // 0x1e3f263
    g5 = (int32_t)g122;
    g2 = g4 & 255;
    *(int32_t *)(g9 + 56) = 0;
    if (*(char *)(g5 + 1 + 2 * g2) <= 255) {
        int32_t v50 = g9 + 36; // 0x1e3f27c
        g2 = v50;
        g5 = *(int32_t *)(g9 + 604);
        *(int32_t *)(g9 - 4) = v50;
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = g4;
        int32_t v51 = function_1e3fa40((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f28d
        g2 = v51;
        int32_t * v52 = (int32_t *)(g9 + 620); // 0x1e3f292
        int32_t v53 = *v52; // 0x1e3f292
        g5 = v53;
        g4 = g4 & -256 | (int32_t)*(char *)v53;
        *v52 = *v52 + 1;
    }
    int32_t v54 = g9 + 36; // 0x1e3f2a5
    g2 = v54;
    g5 = *(int32_t *)(g9 + 604);
    *(int32_t *)(g9 - 4) = v54;
    *(int32_t *)(g9 - 8) = g5;
    *(int32_t *)(g9 - 12) = g4;
    int32_t v55 = function_1e3fa40((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f2b6
    g2 = v55;
    goto lab_0x1e3f2be;
  lab_0x1e3f2be:;
    int32_t * v56 = (int32_t *)(g9 + 608); // 0x1e3f2be
    g2 = *v56;
    *v56 = *v56 + 1;
    unsigned char v57 = *(char *)g2; // 0x1e3f2cc
    int32_t v58 = g4 & -256 | (int32_t)v57; // 0x1e3f2cc
    g4 = v58;
    if (v57 == 0) {
        v6 = g9;
        // break -> 0x1e3f2d6
        goto lab_0x1e3f2d6;
    }
    v2 = v58;
    v7 = g9;
    goto lab_0x1e3f0ce;
  lab_0x1e3f364:
    // 0x1e3f364
    *(int32_t *)(g9 + 76) = 1;
    int32_t v59 = g4; // 0x1e3f36c
    g4 = v59 + 32 & 255 | v59 & -256;
    goto lab_0x1e3f36f;
  lab_0x1e3f46e:
    // 0x1e3f46e
    *(int32_t *)(g9 + 64) = 10;
    g8 |= 64;
    goto lab_0x1e3f4f7;
  lab_0x1e3f36f:
    // 0x1e3f36f
    g8 |= 64;
    int32_t v60 = g9 + 88; // 0x1e3f372
    g2 = v60;
    *(int32_t *)(g9 + 24) = v60;
    int32_t v61 = g3; // 0x1e3f37a
    if (v61 >= 0) {
        if (v61 == 0) {
            // 0x1e3f6d9
            if ((char)g4 == 103) {
                // 0x1e3f6de
                g3 = 1;
            }
        }
    } else {
        // 0x1e3f382
        g3 = 6;
    }
    int32_t * v62 = (int32_t *)(g9 + 612); // 0x1e3f6e3
    *v62 = *v62 + 8;
    int32_t v63 = *(int32_t *)(g9 + 612); // 0x1e3f6eb
    g2 = v63;
    int32_t v64 = v63 - 8; // 0x1e3f6f2
    int32_t v65 = *(int32_t *)v64; // 0x1e3f6f2
    g5 = v65;
    g2 = v64;
    *(int32_t *)(g9 + 80) = v65;
    g2 = *(int32_t *)(g9 + 76);
    *(int32_t *)(g9 + 84) = *(int32_t *)(v63 - 4);
    *(int32_t *)(g9 - 4) = g2;
    g5 = g4;
    *(int32_t *)(g9 - 8) = g3;
    *(int32_t *)(g9 - 12) = g5;
    g5 = g9 + 80;
    *(int32_t *)(g9 - 16) = g9 + 88;
    *(int32_t *)(g9 - 20) = g5;
    g6 = g8;
    g2 = function_1e41c40();
    int32_t v66 = g9 + 20; // 0x1e3f71f
    int32_t v67 = g6 & 128; // 0x1e3f722
    g6 = v67;
    int32_t v68; // 0x1e3f745
    if (v67 != 0) {
        // 0x1e3f72a
        if (g3 == 0) {
            int32_t v69 = g9 + 108; // 0x1e3f72e
            g2 = v69;
            *(int32_t *)(g9 + 16) = v69;
            g2 = function_1e41c40();
            v68 = g9 + 4;
        } else {
            v68 = v66;
        }
    } else {
        v68 = v66;
    }
    // 0x1e3f73c
    int32_t v70; // 0x1e3f760
    if ((char)g4 == 103) {
        if (v67 == 0) {
            int32_t v71 = v68 + 88; // 0x1e3f745
            g2 = v71;
            *(int32_t *)(v68 - 4) = v71;
            g2 = function_1e41c40();
            v70 = g9 + 4;
        } else {
            v70 = v68;
        }
    } else {
        v70 = v68;
    }
    // 0x1e3f753
    int32_t v72; // 0x1e3f768
    if (*(char *)(v70 + 88) == 45) {
        // 0x1e3f75a
        g8 |= 256;
        int32_t v73 = v70 + 89; // 0x1e3f760
        g2 = v73;
        *(int32_t *)(v70 + 24) = v73;
        v72 = g9;
    } else {
        v72 = v70;
    }
    // 0x1e3f768
    g5 = -1;
    g2 = 0;
    int32_t v74 = *(int32_t *)(v72 + 24); // 0x1e3f773
    int32_t v75 = -1; // 0x1e3f773
    int32_t v76; // 0x1e3f775
    while (true) {
        if (v75 == 0) {
            v76 = 0;
            // break -> bb117
            break;
        }
        int32_t v77 = (g1 ? -1 : 1) + v74; // 0x1e3f773
        int32_t v78 = v75 - 1; // 0x1e3f773
        g5 = v78;
        if (*(char *)v74 == 0) {
            v76 = v78;
            // break -> bb117
            break;
        }
        v74 = v77;
        v75 = v78;
    }
    // bb117
    g5 = -1 - v76;
    g6 = -2 - v76;
    goto lab_0x1e3f7c3;
  lab_0x1e3f39a:;
    int32_t v155 = 0x7fffffff; // ebx
    int32_t v156 = g3; // 0x1e3f39f
    if (v156 != -1) {
        // 0x1e3f3a4
        v155 = v156;
    }
    int32_t v157 = g9 + 612; // 0x1e3f3a6
    g2 = v157;
    *(int32_t *)(g9 - 4) = v157;
    int32_t v158 = function_1e3fb10((int32_t)&g708); // 0x1e3f3ae
    g2 = v158;
    *(int32_t *)(g9 + 28) = v158;
    int32_t v159 = g9 + 4; // 0x1e3f3b7
    if ((g8 & 2064) == 0) {
        int32_t * v160 = (int32_t *)(g9 + 28); // 0x1e3f797
        int32_t v161; // 0x1e3f7bf
        if (*v160 == 0) {
            int32_t v162 = *(int32_t *)&g434; // 0x1e3f79e
            g2 = v162;
            *v160 = v162;
            v161 = g9;
        } else {
            v161 = v159;
        }
        int32_t * v163 = (int32_t *)(v161 + 24); // 0x1e3f7a7
        int32_t v164 = *v163; // 0x1e3f7a7
        int32_t v165 = v155; // 0x1e3f7ab
        g2 = v165;
        int32_t v166 = v165 - 1; // 0x1e3f7ad
        g4 = v166;
        int32_t v167; // 0x1e3f7bf
        if (v165 != 0) {
            int32_t v168 = v164; // 0x1e3f7b7
            while (true) {
                // 0x1e3f7b2
                if (*(char *)v168 == 0) {
                    v167 = v168;
                    // break -> 0x1e3f7bf
                    break;
                }
                int32_t v169 = v168 + 1; // 0x1e3f7b7
                g2 = v166;
                int32_t v170 = v166 - 1; // 0x1e3f7ba
                g4 = v170;
                if (v166 == 0) {
                    v167 = v169;
                    // break -> 0x1e3f7bf
                    break;
                }
                v166 = v170;
                v168 = v169;
            }
        } else {
            v167 = v164;
        }
        // 0x1e3f7bf
        g6 = v167 - *v163;
    } else {
        int32_t v171; // 0x1e3f3d9
        if (v158 == 0) {
            int32_t v172 = *(int32_t *)&g435; // 0x1e3f3ca
            g2 = v172;
            *(int32_t *)(g9 + 28) = v172;
            v171 = g9;
        } else {
            v171 = v159;
        }
        int32_t v173 = v155; // 0x1e3f3d7
        g2 = v173;
        *(int32_t *)(v171 + 56) = 1;
        int32_t v174 = v155 - 1; // 0x1e3f3e1
        g4 = v174;
        int32_t v175 = *(int32_t *)(v171 + 24);
        int32_t v176; // 0x1e3f3f6
        if (v173 != 0) {
            int32_t v177 = v175; // 0x1e3f3ec
            int32_t v178; // 0x1e3f3f626
            while (true) {
                // 0x1e3f3e6
                if (*(int16_t *)v177 == 0) {
                    v178 = v177;
                    // break -> 0x1e3f3f6
                    break;
                }
                int32_t v179 = v177 + 2; // 0x1e3f3ec
                g2 = v174;
                int32_t v180 = v174 - 1; // 0x1e3f3f1
                g4 = v180;
                if (v174 == 0) {
                    v178 = v179;
                    // break -> 0x1e3f3f6
                    break;
                }
                v174 = v180;
                v177 = v179;
            }
            v176 = v178;
        } else {
            v176 = v175;
        }
        // 0x1e3f3f6
        g6 = (v176 - *(int32_t *)(g9 + 24)) / 2;
    }
    goto lab_0x1e3f7c3;
  lab_0x1e3f7c3:;
    // 0x1e3f7c3
    int32_t v79; // 0x1e3f813
    int32_t v80; // 0x1e3f819
    if (*(int32_t *)(g9 + 72) != 0) {
        goto lab_0x1e3f2be;
    } else {
        int32_t v81 = g8; // 0x1e3f7ce
        if ((v81 & 64) == 0) {
            v79 = v81;
            v80 = g9;
            goto lab_0x1e3f809;
        } else {
            if ((v81 & 256) == 0) {
                if ((v81 & 1) == 0) {
                    if ((v81 & 2) == 0) {
                        v79 = v81;
                        v80 = g9;
                        goto lab_0x1e3f809;
                    } else {
                        // 0x1e3f7fc
                        *(char *)(g9 + 18) = 32;
                        goto lab_0x1e3f801;
                    }
                } else {
                    // 0x1e3f7ed
                    *(char *)(g9 + 18) = 43;
                    goto lab_0x1e3f801;
                }
            } else {
                // 0x1e3f7de
                *(char *)(g9 + 18) = 45;
                goto lab_0x1e3f801;
            }
        }
    }
  lab_0x1e3f323:;
    int32_t v82 = g9 + 612; // 0x1e3f329
    g2 = v82;
    *(int32_t *)(g9 - 4) = v82;
    int32_t v83; // 0x1e3f78d
    if ((v16 & 2064) == 0) {
        // 0x1e3f77c
        g6 = 1;
        int32_t v84 = function_1e3fb10((int32_t)&g708); // 0x1e3f781
        g2 = v84;
        *(char *)(g9 + 92) = (char)v84;
        v83 = g9 + 4;
    } else {
        // 0x1e3f337
        *(int32_t *)g9 = function_1e3fb40((int32_t)&g708);
        int32_t v85 = g9 + 92; // 0x1e3f340
        g2 = v85;
        *(int32_t *)(g9 - 4) = v85;
        int32_t v86 = function_1e419a0((int32_t)&g708, (int32_t)&g708); // 0x1e3f345
        g2 = v86;
        g6 = v86;
        if (v86 < 0) {
            // 0x1e3f357
            *(int32_t *)(g9 + 80) = 1;
            v83 = g9;
        } else {
            v83 = g9 + 8;
        }
    }
    int32_t v87 = v83 + 88; // 0x1e3f78d
    g2 = v87;
    *(int32_t *)(v83 + 24) = v87;
    goto lab_0x1e3f7c3;
  lab_0x1e3f4d0:
    // 0x1e3f4d0
    *(int32_t *)(g9 + 64) = 16;
    if ((char)g8 <= 255) {
        // 0x1e3f4e0
        *(char *)(g9 + 18) = 48;
        *(int32_t *)(g9 + 52) = 2;
        int32_t v88 = *(int32_t *)(g9 + 68); // 0x1e3f4ed
        unsigned char v89 = (char)v88 + 81; // 0x1e3f4f1
        g2 = (int32_t)v89 | v88 & -256;
        *(char *)(g9 + 19) = v89;
    }
    goto lab_0x1e3f4f7;
  lab_0x1e3f450:;
    int32_t v149 = *(int32_t *)&g434; // 0x1e3f450
    g5 = -1;
    int32_t v150 = v149; // edi
    *(int32_t *)(g9 + 28) = v149;
    g2 = 0;
    int32_t v151 = g5; // 0x1e3f462
    int32_t v152; // 0x1e3f464
    while (true) {
        if (v151 == 0) {
            v152 = 0;
            // break -> bb94
            break;
        }
        int32_t v153 = v150; // 0x1e3f462
        v150 = (g1 ? -1 : 1) + v153;
        int32_t v154 = v151 - 1; // 0x1e3f462
        g5 = v154;
        if (*(char *)v153 == 0) {
            v152 = v154;
            // break -> bb94
            break;
        }
        v151 = v154;
    }
    // bb94
    g5 = -1 - v152;
    g6 = -2 - v152;
    goto lab_0x1e3f7c3;
  lab_0x1e3f4f7:;
    int32_t v90 = g8; // 0x1e3f4f7
    int32_t v91;
    int32_t v92; // 0x1e3f596
    if ((int16_t)v90 > -1) {
        int32_t v93 = g9 + 612; // 0x1e3f571
        g2 = v93;
        *(int32_t *)(g9 - 4) = v93;
        int32_t v94 = function_1e3fb10((int32_t)&g708); // 0x1e3f58e
        if ((v90 & 32) == 0) {
            // 0x1e3f56b
            g2 = v94;
            if ((v90 & 64) == 0) {
                v92 = v94;
                v91 = g9;
                goto lab_0x1e3f596;
            } else {
                // 0x1e3f57b
                *(int32_t *)(g9 + 32) = v94;
                int32_t v95 = g2 >> 31; // 0x1e3f587
                g7 = v95;
                *(int32_t *)(g9 + 36) = v95;
                goto lab_0x1e3f5a2;
            }
        } else {
            if ((v90 & 64) == 0) {
                int32_t v96 = v94 & 0xffff; // 0x1e3f563
                g2 = v96;
                v92 = v96;
                v91 = g9;
                goto lab_0x1e3f596;
            } else {
                // 0x1e3f548
                g2 = v94;
                *(int32_t *)(g9 + 32) = v94;
                int32_t v97 = g2 >> 31; // 0x1e3f557
                g7 = v97;
                *(int32_t *)(g9 + 36) = v97;
                goto lab_0x1e3f5a2;
            }
        }
    } else {
        int32_t v98 = g9 + 612; // 0x1e3f4ff
        g2 = v98;
        *(int32_t *)(g9 - 4) = v98;
        int32_t v99 = function_1e3fb20((int32_t)&g708); // 0x1e3f507
        g2 = v99;
        *(int32_t *)(g9 + 32) = v99;
        *(int32_t *)(g9 + 36) = g7;
        goto lab_0x1e3f5a2;
    }
  lab_0x1e3f809:;
    int32_t v100 = *(int32_t *)(v80 + 48); // 0x1e3f809
    g2 = v100;
    int32_t v101 = v100 - *(int32_t *)(v80 + 52) - g6; // 0x1e3f811
    g2 = v101;
    *(int32_t *)(v80 + 40) = v101;
    int32_t v102; // 0x1e3f846
    if ((v79 & 12) == 0) {
        int32_t v103 = g9 + 36; // 0x1e3f81f
        g2 = v103;
        g5 = *(int32_t *)(g9 + 604);
        *(int32_t *)(g9 - 4) = v103;
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 40);
        *(int32_t *)(g9 - 16) = 32;
        int32_t v104 = function_1e3fa90((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f833
        g2 = v104;
        v102 = g9 + 16;
    } else {
        v102 = g9;
    }
    int32_t v105 = v102 + 36; // 0x1e3f83b
    g2 = v105;
    g5 = *(int32_t *)(v102 + 604);
    g7 = *(int32_t *)(v102 + 52);
    *(int32_t *)(v102 - 4) = v105;
    g2 = v102 + 18;
    *(int32_t *)(v102 - 8) = g5;
    *(int32_t *)(v102 - 12) = g7;
    *(int32_t *)(v102 - 16) = g2;
    int32_t v106 = function_1e3fad0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f852
    g2 = v106;
    int32_t v107 = g9 + 16; // 0x1e3f857
    int32_t v108 = g8; // 0x1e3f85a
    int32_t v109; // 0x1e3f8ea
    if ((v108 & 8) != 0) {
        if ((v108 & 4) == 0) {
            int32_t v110 = g9 + 52; // 0x1e3f86a
            g2 = v110;
            g5 = *(int32_t *)(g9 + 620);
            g7 = *(int32_t *)(g9 + 56);
            *(int32_t *)(g9 + 12) = v110;
            *(int32_t *)(g9 + 8) = g5;
            *(int32_t *)(g9 + 4) = g7;
            *(int32_t *)g9 = 48;
            int32_t v111 = function_1e3fa90((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f87e
            g2 = v111;
            v109 = g9 + 16;
        } else {
            v109 = v107;
        }
    } else {
        v109 = v107;
    }
    // 0x1e3f886
    int32_t v112; // 0x1e3f911
    if (*(int32_t *)(v109 + 56) == 0) {
        goto lab_0x1e3f8df;
    } else {
        int32_t v113 = g6; // 0x1e3f88d
        if (v113 < 1) {
            goto lab_0x1e3f8df;
        } else {
            // 0x1e3f891
            g4 = *(int32_t *)(v109 + 24);
            int32_t v114 = v113 - 1; // 0x1e3f895
            g2 = v114;
            *(int32_t *)(v109 + 28) = v114;
            int32_t v115 = g9; // 0x1e3f8a8
            while (true) {
                int32_t v116 = g4; // 0x1e3f89c
                g2 = v116;
                g5 = v115 + 20;
                int32_t v117 = (int32_t)*(int16_t *)v116 | v116 & -0x10000; // 0x1e3f8a2
                g2 = v117;
                g4 = v116 + 2;
                *(int32_t *)(v115 - 4) = v117;
                *(int32_t *)(v115 - 8) = g5;
                int32_t v118 = function_1e419a0((int32_t)&g708, (int32_t)&g708); // 0x1e3f8aa
                g2 = v118;
                if (v118 < 1) {
                    v112 = g9 + 8;
                    // break -> 0x1e3f8fa
                    break;
                }
                int32_t v119 = g9 + 44; // 0x1e3f8b6
                g5 = v119;
                g7 = *(int32_t *)(g9 + 612);
                *(int32_t *)(g9 + 4) = v119;
                *(int32_t *)g9 = g7;
                *(int32_t *)(g9 - 4) = v118;
                int32_t v120 = g9 + 28; // 0x1e3f8c4
                g2 = v120;
                *(int32_t *)(g9 - 8) = v120;
                int32_t v121 = function_1e3fad0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f8c9
                g2 = v121;
                int32_t * v122 = (int32_t *)(g9 + 44); // 0x1e3f8ce
                int32_t v123 = *v122; // 0x1e3f8ce
                g5 = v123;
                *v122 = *v122 - 1;
                int32_t v124 = g9 + 16; // 0x1e3f8d6
                if (v123 == 0) {
                    v112 = v124;
                    // break -> 0x1e3f8fa
                    break;
                }
                v115 = v124;
            }
            goto lab_0x1e3f8fa;
        }
    }
  lab_0x1e3f8df:;
    int32_t v125 = v109 + 36; // 0x1e3f8df
    g2 = v125;
    g5 = *(int32_t *)(v109 + 604);
    g7 = *(int32_t *)(v109 + 24);
    *(int32_t *)(v109 - 4) = v125;
    *(int32_t *)(v109 - 8) = g5;
    *(int32_t *)(v109 - 12) = g6;
    *(int32_t *)(v109 - 16) = g7;
    int32_t v126 = function_1e3fad0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f8f2
    g2 = v126;
    v112 = g9 + 16;
    goto lab_0x1e3f8fa;
  lab_0x1e3f5a2:;
    int32_t * v130 = (int32_t *)(g9 + 32);
    if ((g8 & 64) == 0) {
        goto lab_0x1e3f5d9;
    } else {
        int32_t v145 = *v130; // 0x1e3f5aa
        if (v145 >= 0 == (v145 != 0)) {
            goto lab_0x1e3f5d9;
        } else {
            int32_t v146 = *(int32_t *)(g9 + 28); // 0x1e3f5b3
            if (v145 >= 0) {
                goto lab_0x1e3f5d9;
            } else {
                // 0x1e3f5ba
                g2 = v146;
                int32_t v147 = -v146; // 0x1e3f5c2
                g2 = v147;
                g5 = *v130 + (int32_t)(v146 != 0);
                *(int32_t *)(g9 + 40) = v147;
                int32_t v148 = -g5; // 0x1e3f5cb
                g5 = v148;
                g8 |= 256;
                *(int32_t *)(g9 + 44) = v148;
                goto lab_0x1e3f5e9;
            }
        }
    }
  lab_0x1e3f8fa:
    // 0x1e3f8fa
    if ((g8 & 4) != 0) {
        int32_t v127 = v112 + 36; // 0x1e3f906
        g2 = v127;
        g5 = *(int32_t *)(v112 + 604);
        g7 = *(int32_t *)(v112 + 40);
        *(int32_t *)(v112 - 4) = v127;
        *(int32_t *)(v112 - 8) = g5;
        *(int32_t *)(v112 - 12) = g7;
        *(int32_t *)(v112 - 16) = 32;
        int32_t v128 = function_1e3fa90((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3f91a
        g2 = v128;
    }
    goto lab_0x1e3f2be;
  lab_0x1e3f801:
    // 0x1e3f801
    *(int32_t *)(g9 + 52) = 1;
    v79 = g8;
    v80 = g9;
    goto lab_0x1e3f809;
  lab_0x1e3f5d9:;
    int32_t v129 = *(int32_t *)(g9 + 28); // 0x1e3f5d9
    g2 = v129;
    g5 = *v130;
    *(int32_t *)(g9 + 40) = v129;
    *(int32_t *)(g9 + 44) = g5;
    goto lab_0x1e3f5e9;
  lab_0x1e3f596:
    // 0x1e3f596
    *(int32_t *)(v91 + 32) = v92;
    *(int32_t *)(g9 + 32) = 0;
    goto lab_0x1e3f5a2;
  lab_0x1e3f5e9:
    // 0x1e3f5e9
    if ((int16_t)g8 > -1) {
        // 0x1e3f5f1
        *(int32_t *)(g9 + 44) = 0;
    }
    // 0x1e3f5fb
    if (g3 >= 0) {
        // 0x1e3f606
        g8 &= -9;
    } else {
        // 0x1e3f5ff
        g3 = 1;
    }
    // 0x1e3f609
    int32_t v131; // 0x1e3f61f
    if (*(int32_t *)(g9 + 44) == 0) {
        // 0x1e3f610
        if (*(int32_t *)(g9 + 40) == 0) {
            // 0x1e3f617
            *(int32_t *)(g9 + 52) = 0;
            v131 = g9;
        } else {
            v131 = g9;
        }
    } else {
        v131 = g9;
    }
    int32_t v132 = v131 + 599; // 0x1e3f61f
    g2 = v132;
    *(int32_t *)(v131 + 24) = v132;
    while (true) {
        int32_t v133 = g3; // 0x1e3f62a
        g2 = v133;
        g3 = v133 - 1;
        int32_t * v134 = (int32_t *)(g9 + 44);
        if (v133 >= 0 != v133 != 0) {
            // 0x1e3f631
            if (*v134 == 0) {
                // 0x1e3f638
                if (*(int32_t *)(g9 + 40) == 0) {
                    // break -> 0x1e3f69a
                    break;
                }
            }
        }
        int32_t v135 = *(int32_t *)(g9 + 64); // 0x1e3f63f
        g2 = v135;
        g5 = *v134;
        *(int32_t *)(g9 + 28) = v135;
        g2 = *(int32_t *)(g9 + 40);
        *(int32_t *)(g9 + 32) = v135 >> 31;
        int32_t v136 = *(int32_t *)(g9 + 32); // 0x1e3f658
        *(int32_t *)(g9 - 4) = v136;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 12) = g5;
        *(int32_t *)(g9 - 16) = g2;
        int32_t v137 = __aullrem(); // 0x1e3f660
        g2 = v137;
        g4 = v137 + 48;
        g5 = *(int32_t *)(g9 + 44);
        g2 = *(int32_t *)(g9 + 40);
        g7 = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 4) = v136;
        *(int32_t *)(g9 - 8) = g7;
        *(int32_t *)(g9 - 12) = g5;
        *(int32_t *)(g9 - 16) = g2;
        int32_t v138 = __aulldiv(); // 0x1e3f678
        g2 = v138;
        *(int32_t *)(g9 + 40) = v138;
        *(int32_t *)(g9 + 44) = g7;
        if (g4 > 57) {
            // 0x1e3f68a
            g4 += *(int32_t *)(g9 + 68);
        }
        int32_t * v139 = (int32_t *)(g9 + 24); // 0x1e3f68e
        g2 = *v139;
        *v139 = *v139 - 1;
        *(char *)g2 = (char)g4;
    }
    int32_t * v140 = (int32_t *)(g9 + 24); // 0x1e3f6a1
    g6 = g9 + 599 - *v140;
    *v140 = *v140 + 1;
    int32_t v141;
    int32_t * v142; // 0x1e3f6b5
    if ((g8 & 512) == 0) {
        goto lab_0x1e3f7c3;
    } else {
        // 0x1e3f6b5
        v142 = (int32_t *)(g9 + 24);
        int32_t v143 = *v142; // 0x1e3f6b5
        g2 = v143;
        v141 = g6;
        if (*(char *)v143 != 48) {
            goto lab_0x1e3f6c6;
        } else {
            if (v141 != 0) {
                goto lab_0x1e3f7c3;
            } else {
                goto lab_0x1e3f6c6;
            }
        }
    }
  lab_0x1e3f6c6:
    // 0x1e3f6c6
    g6 = v141 + 1;
    *v142 = *v142 - 1;
    int32_t v144 = *(int32_t *)(g9 + 24); // 0x1e3f6cb
    g2 = v144;
    *(char *)v144 = 48;
    goto lab_0x1e3f7c3;
}

// Address range: 0x1e3fa40 - 0x1e3fa81
int32_t function_1e3fa40(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3fa40
    g7 = a2;
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x1e3fa44
    int32_t v2 = *v1 - 1; // 0x1e3fa47
    g2 = v2;
    *v1 = v2;
    int32_t v3; // 0x1e3fa66
    if (v2 < 0) {
        // 0x1e3fa60
        g5 = a1;
        v3 = function_1e3ef40(a1, (int32_t *)g7);
        g2 = v3;
    } else {
        int32_t v4 = *(int32_t *)g7; // 0x1e3fa4d
        g2 = v4;
        g5 = g5 & -256 | a1 & 255;
        *(char *)v4 = (char)a1;
        int32_t * v5 = (int32_t *)g7; // 0x1e3fa55
        int32_t v6 = *v5; // 0x1e3fa55
        g5 = v6;
        g2 = 0;
        g2 = (int32_t)*(char *)v6;
        int32_t v7 = v6 + 1; // 0x1e3fa5b
        g5 = v7;
        *v5 = v7;
        v3 = g2;
    }
    // 0x1e3fa6e
    g2 = a3;
    int32_t * v8 = (int32_t *)a3; // 0x1e3fa7e
    if (v3 != -1) {
        // 0x1e3fa7e
        *v8 = *v8 + 1;
        return g2;
    }
    // 0x1e3fa77
    *v8 = -1;
    return g2;
}

// Address range: 0x1e3fa90 - 0x1e3fac1
int32_t function_1e3fa90(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3fa90
    g8 = a1;
    int32_t v1 = g3; // bp-16
    int32_t v2 = &v1; // 0x1e3fa9b
    g4 = a3;
    g3 = a4;
    g2 = a2;
    g6 = a2 - 1;
    int32_t v3; // 0x1e3fabc
    int32_t result; // 0x1e3faae
    if (a2 >= 1) {
        int32_t v4 = v2; // 0x1e3faab17
        while (true) {
            // 0x1e3faab
            *(int32_t *)(v4 - 4) = a4;
            *(int32_t *)(v4 - 8) = g4;
            *(int32_t *)(v4 - 12) = g8;
            result = function_1e3fa40((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            g2 = result;
            int32_t v5 = g9 + 12; // 0x1e3fab3
            if (*(int32_t *)g3 == -1) {
                v3 = v5;
                // break -> 0x1e3fabc
                break;
            }
            int32_t v6 = g6;
            g2 = v6;
            g6 = v6 - 1;
            if (v6 < 1) {
                result = v6;
                v3 = v5;
                // break -> 0x1e3fabc
                break;
            }
            a4 = g3;
            v4 = v5;
        }
    } else {
        result = a2;
        v3 = v2;
    }
    // 0x1e3fabc
    g3 = *(int32_t *)v3;
    g6 = *(int32_t *)(v3 + 4);
    g8 = *(int32_t *)(v3 + 8);
    g4 = *(int32_t *)(v3 + 12);
    return result;
}

// Address range: 0x1e3fad0 - 0x1e3fb07
int32_t function_1e3fad0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3fad0
    g8 = a1;
    int32_t v1 = g3; // bp-16
    int32_t v2 = &v1; // 0x1e3fadb
    g4 = a3;
    g3 = a4;
    g2 = a2;
    g6 = a2 - 1;
    int32_t v3; // 0x1e3fb02
    int32_t result; // 0x1e3faf4
    if (a2 >= 1) {
        int32_t v4 = v2; // 0x1e3faed18
        while (true) {
            // 0x1e3faeb
            g2 = a1;
            *(int32_t *)(v4 - 4) = a4;
            g8++;
            *(int32_t *)(v4 - 8) = g4;
            int32_t v5 = (int32_t)*(char *)g2; // 0x1e3faf0
            g5 = v5;
            *(int32_t *)(v4 - 12) = v5;
            result = function_1e3fa40((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            g2 = result;
            int32_t v6 = g9 + 12; // 0x1e3faf9
            if (*(int32_t *)g3 == -1) {
                v3 = v6;
                // break -> 0x1e3fb02
                break;
            }
            int32_t v7 = g6;
            g2 = v7;
            g6 = v7 - 1;
            if (v7 < 1) {
                result = v7;
                v3 = v6;
                // break -> 0x1e3fb02
                break;
            }
            // 0x1e3faeb
            a1 = g8;
            a4 = g3;
            v4 = v6;
        }
    } else {
        result = a2;
        v3 = v2;
    }
    // 0x1e3fb02
    g3 = *(int32_t *)v3;
    g6 = *(int32_t *)(v3 + 4);
    g8 = *(int32_t *)(v3 + 8);
    g4 = *(int32_t *)(v3 + 12);
    return result;
}

// Address range: 0x1e3fb10 - 0x1e3fb1f
int32_t function_1e3fb10(int32_t a1) {
    // 0x1e3fb10
    g2 = a1;
    int32_t * v1 = (int32_t *)a1; // 0x1e3fb14
    int32_t v2 = *v1 + 4; // 0x1e3fb16
    g5 = v2;
    *v1 = v2;
    int32_t result = *(int32_t *)(g5 - 4); // 0x1e3fb1b
    g2 = result;
    return result;
}

// Address range: 0x1e3fb20 - 0x1e3fb35
int32_t function_1e3fb20(int32_t a1) {
    // 0x1e3fb20
    g2 = a1;
    int32_t * v1 = (int32_t *)a1; // 0x1e3fb24
    int32_t v2 = *v1 + 8; // 0x1e3fb26
    g5 = v2;
    *v1 = v2;
    int32_t v3 = g5; // 0x1e3fb2b
    int32_t v4 = v3 - 8; // 0x1e3fb2b
    int32_t result = *(int32_t *)v4; // 0x1e3fb2b
    g2 = result;
    g7 = *(int32_t *)(v3 - 4);
    g5 = v4;
    return result;
}

// Address range: 0x1e3fb40 - 0x1e3fb50
int32_t function_1e3fb40(int32_t a1) {
    // 0x1e3fb40
    g2 = a1;
    int32_t * v1 = (int32_t *)a1; // 0x1e3fb44
    int32_t v2 = *v1 + 4; // 0x1e3fb46
    g5 = v2;
    *v1 = v2;
    int32_t result = g2 & -0x10000 | (int32_t)*(int16_t *)(g5 - 4); // 0x1e3fb4b
    g2 = result;
    return result;
}

// Address range: 0x1e3fb50 - 0x1e3fb63
int32_t function_1e3fb50(void) {
    int32_t result = function_1e41ae0(0x10000, 0x30000); // 0x1e3fb5a
    g2 = result;
    return result;
}

// Address range: 0x1e3fb70 - 0x1e3fbbf
int32_t __ms_p5_test_fdiv(void) {
    // 0x1e3fb70
    int32_t v1; // fpsw
    int32_t v2;
    int32_t result; // 0x1e3fbbe
    if ((__asm_fnstsw(v1) & 256) == 0) {
        v2 = 0;
        result = 0;
    } else {
        v2 = 1;
        result = 1;
    }
    // 0x1e3fbbb
    g2 = v2;
    return result;
}

// Address range: 0x1e3fbf0 - 0x1e3fc55
int32_t function_1e3fbf0(int32_t a1) {
    int32_t v1 = g6; // 0x1e3fbf1
    int32_t v2 = v1; // bp-8
    g8 = a1;
    int32_t v3 = (int32_t)*(char *)a1; // 0x1e3fbf6
    g2 = v3;
    int32_t v4; // 0x1e3fc44
    int32_t v5 = function_1e41130(v3, v1, v4); // 0x1e3fbfa
    g2 = v5;
    int32_t v6; // 0x1e3fc3d
    if (v5 != 101) {
        // 0x1e3fc07
        g6 = 1;
        int32_t v7 = &v2; // 0x1e3fc18
        int32_t v8 = 1; // 0x1e3fc0d
        while (true) {
            int32_t v9 = g8 + 1; // 0x1e3fc0c
            g8 = v9;
            int32_t v10 = (int32_t)*(char *)v9; // 0x1e3fc15
            int32_t v11; // 0x1e3fc183
            int32_t v12; // 0x1e3fc1b
            if (g442 > v8) {
                // 0x1e3fc15
                g2 = v10;
                *(int32_t *)(v7 - 4) = 4;
                *(int32_t *)(v7 - 8) = g2;
                v12 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                g2 = v12;
                v11 = g9 + 8;
            } else {
                // 0x1e3fc25
                g5 = v10;
                int32_t v13 = (int32_t)g122; // 0x1e3fc28
                g7 = v13;
                g2 = 0;
                int32_t v14 = (int32_t)*(int16_t *)(v13 + 2 * v10) & 4; // 0x1e3fc34
                g2 = v14;
                v12 = v14;
                v11 = v7;
            }
            if (v12 == 0) {
                v6 = v12;
                // break -> 0x1e3fc3b
                break;
            }
            // 0x1e3fc37
            v7 = v11;
            v8 = g6;
        }
    } else {
        v6 = 101;
    }
    char * v15 = (char *)g8; // 0x1e3fc3b
    g5 = g5 & -256 | (int32_t)*v15;
    g2 = (int32_t)g443 | v6 & -256;
    *v15 = g443;
    v4 = g8 + 1;
    int32_t v16 = g5; // 0x1e3fc47
    char * v17 = (char *)v4; // 0x1e3fc45
    int32_t v18 = (int32_t)*v17 | g7 & -256; // edx
    g2 = v16 & 255 | g2 & -256;
    *v17 = (char)v16;
    int32_t v19 = g5 & -256 | v18 & 255; // 0x1e3fc4b
    g5 = v19;
    int32_t result = g2; // 0x1e3fc4e
    while ((char)result != 0) {
        // 0x1e3fc45
        v16 = v19;
        v4++;
        v17 = (char *)v4;
        v18 = (int32_t)*v17 | v18 & -256;
        g2 = v16 & 255 | result & -256;
        *v17 = (char)v16;
        v19 = g5 & -256 | v18 & 255;
        g5 = v19;
        result = g2;
    }
    // 0x1e3fc52
    return result;
}

// Address range: 0x1e3fc60 - 0x1e3fcb9
int32_t function_1e3fc60(int32_t a1) {
    // 0x1e3fc60
    int32_t result; // 0x1e3fc78
    if (*(char *)a1 != 0) {
        int32_t v1 = a1; // 0x1e3fc72
        int32_t v2 = g2; // 0x1e3fc69
        while (true) {
            int32_t v3 = v2 & -256 | (int32_t)g443; // 0x1e3fc69
            g2 = v3;
            if (*(char *)v1 == g443) {
                result = v1;
                // break -> 0x1e3fc78
                break;
            }
            int32_t v4 = v1 + 1; // 0x1e3fc72
            if (*(char *)v4 == 0) {
                result = v4;
                // break -> 0x1e3fc78
                break;
            }
            v1 = v4;
            v2 = v3;
        }
    } else {
        result = a1;
    }
    // 0x1e3fc78
    g2 = result;
    int32_t v5 = result + 1; // 0x1e3fc7a
    if (*(char *)result == 0) {
        // 0x1e3fcb8
        return result;
    }
    // 0x1e3fc80
    int32_t v6; // 0x1e3fc95
    if (*(char *)v5 != 0) {
        int32_t v7 = result; // 0x1e3fc85
        int32_t v8 = v5; // 0x1e3fc8f
        while (true) {
            unsigned char v9 = *(char *)v8; // 0x1e3fc85
            int32_t v10 = (int32_t)v9 | v7 & -256; // 0x1e3fc85
            g2 = v10;
            if (v9 == 101) {
                v6 = v8;
                // break -> 0x1e3fc95
                break;
            }
            if (v9 == 69) {
                v6 = v8;
                // break -> 0x1e3fc95
                break;
            }
            int32_t v11 = v8 + 1; // 0x1e3fc8f
            if (*(char *)v11 == 0) {
                v6 = v11;
                // break -> 0x1e3fc95
                break;
            }
            v7 = v10;
            v8 = v11;
        }
    } else {
        v6 = v5;
    }
    // 0x1e3fc95
    g2 = v6;
    int32_t v12 = v6 - 1; // 0x1e3fc97
    int32_t v13; // 0x1e3fcad
    if (*(char *)v12 == 48) {
        int32_t v14 = v12 - 1; // 0x1e3fc9d
        v13 = v14;
        while (*(char *)v14 == 48) {
            // 0x1e3fc9d
            v14--;
            v13 = v14;
        }
    } else {
        v13 = v12;
    }
    int32_t v15 = g5 & -256 | (int32_t)g443; // 0x1e3fca3
    g5 = v15;
    int32_t v16; // 0x1e3fcb0
    int32_t v17; // 0x1e3fcb1
    if (*(char *)v13 == g443) {
        // 0x1e3fcad
        v16 = v13 - 1;
        v17 = v6;
    } else {
        v16 = v13;
        v17 = v6;
    }
    unsigned char v18 = *(char *)v17; // 0x1e3fcae
    g5 = (int32_t)v18 | v15 & -256;
    int32_t v19 = v16 + 1; // 0x1e3fcb0
    g2 = v17 + 1;
    *(char *)v19 = v18;
    int32_t v20 = g5; // 0x1e3fcb4
    int32_t result2 = g2;
    while ((char)v20 != 0) {
        // 0x1e3fcae
        v17 = result2;
        v18 = *(char *)v17;
        g5 = (int32_t)v18 | v20 & -256;
        v19++;
        g2 = v17 + 1;
        *(char *)v19 = v18;
        v20 = g5;
        result2 = g2;
    }
    // 0x1e3fcb8
    return result2;
}

// Address range: 0x1e3fcc0 - 0x1e3fcd7
int32_t function_1e3fcc0(int32_t a1) {
    // 0x1e3fcc0
    g2 = a1;
    int32_t v1; // fpsw
    int32_t v2;
    int32_t result; // 0x1e3fcd6
    if ((__asm_fnstsw(v1) & 0x4100) == 0) {
        v2 = 0;
        result = 0;
    } else {
        v2 = 1;
        result = 1;
    }
    // 0x1e3fcd6
    g2 = v2;
    return result;
}

// Address range: 0x1e3fce0 - 0x1e3fd2c
int32_t function_1e3fce0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3fce0
    g2 = a3;
    if (a1 == 0) {
        // 0x1e3fd11
        int32_t v1; // bp-12
        g5 = &v1;
        g2 = function_1e42130(&v1, a3);
        g5 = v1;
        *(int32_t *)a2 = v1;
        return g2;
    }
    // 0x1e3fcef
    int32_t v2; // bp-8
    g5 = &v2;
    function_1e420f0(&v2, a3);
    g2 = v2;
    *(int32_t *)a2 = v2;
    *(int32_t *)(a2 + 4) = g5;
    return g2;
}

// Address range: 0x1e3fd30 - 0x1e3fda7
int32_t function_1e3fd30(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3fd30
    int32_t v1; // bp-40
    int32_t v2 = &v1; // 0x1e3fd30
    g5 = v2;
    g2 = a1;
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x1e3fd43
    g7 = v3;
    int32_t v4 = *(int32_t *)a1; // 0x1e3fd46
    g5 = v4;
    int32_t v5; // bp-24
    function_1e42200(v4, v3, &v1, &v5, g6, g8);
    g8 = a3;
    g6 = a2;
    int32_t v6 = a3 + 1; // 0x1e3fd5e
    g2 = v6;
    int32_t v7;
    int32_t v8; // 0x1e3fd7c
    if (a3 >= 0 != a3 != 0) {
        v7 = 0;
        v8 = 0;
    } else {
        v7 = 1;
        v8 = 1;
    }
    // 0x1e3fd6e
    g5 = v7;
    int32_t v9 = v1 == 45; // 0x1e3fd78
    g2 = v9;
    int32_t v10 = v9 + v8 + a2; // 0x1e3fd7e
    g5 = v10;
    g2 = function_1e42170(v10, v6, &v1);
    g5 = v2;
    function_1e3fdb0(g6, a3, a4, &v1, 0);
    g2 = g6;
    return g6;
}

// Address range: 0x1e3fdb0 - 0x1e3fe93
int32_t function_1e3fdb0(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5) {
    int32_t v1 = (int32_t)a4;
    int32_t v2 = g6; // 0x1e3fdb7
    int32_t v3; // ebx
    int32_t v4; // 0x1e3fdf9
    int32_t v5; // 0x1e3fdfe
    if ((char)a5 == 0) {
        // 0x1e3fdeb
        g6 = a1;
        v3 = a2;
        g8 = v1;
        v4 = v1;
        v5 = a1;
    } else {
        // 0x1e3fdba
        g8 = v1;
        g6 = a1;
        v3 = a2;
        g5 = 1;
        int32_t v6 = (int32_t)(*a4 == 45) + a1; // 0x1e3fdd7
        g2 = v6;
        int32_t v7; // 0x1e3fddf
        if (a2 >= 0 != a2 != 0) {
            // 0x1e3fddd
            g5 = 0;
            v7 = 0;
        } else {
            v7 = 1;
        }
        // 0x1e3fddf
        g2 = function_1e400f0(v6, v7);
        v4 = g8;
        v5 = g6;
    }
    // 0x1e3fdf7
    g5 = v5;
    if (*(int32_t *)v4 == 45) {
        // 0x1e3fdfe
        g5 = v5 + 1;
        *(char *)v5 = 45;
    }
    int32_t v8 = v3; // 0x1e3fe04
    int32_t v9; // 0x1e3fe23
    if (v8 >= 1) {
        int32_t v10 = g5; // 0x1e3fe08
        int32_t v11 = v10 + 1; // 0x1e3fe08
        unsigned char v12 = *(char *)v11; // 0x1e3fe0b
        g2 = g2 & -256 | (int32_t)v12;
        *(char *)v10 = v12;
        g5 = v11;
        g2 = g2 & -256 | (int32_t)g443;
        *(char *)v11 = g443;
        v9 = v3;
    } else {
        v9 = v8;
    }
    int32_t v13 = v9 + (int32_t)((char)a5 == 0) + g5; // 0x1e3fe23
    v3 = v13;
    g5 = 0x30302b65;
    g2 = (int32_t)"e+000";
    *(int32_t *)v13 = 0x30302b65;
    g2 = g2 & -0x10000 | 48;
    *(int16_t *)(v3 + 4) = 48;
    if (a3 != 0) {
        // 0x1e3fe41
        *(char *)v3 = 69;
    }
    int32_t v14 = v3 + 1; // 0x1e3fe44
    int32_t v15 = *(int32_t *)(g8 + 12); // 0x1e3fe45
    g2 = v15;
    if (*(char *)v15 != 48) {
        int32_t v16 = *(int32_t *)(g8 + 4); // 0x1e3fe4d
        int32_t v17 = v16 - 1; // 0x1e3fe50
        g5 = v17;
        int32_t v18; // 0x1e3fe63
        if (v17 < 0) {
            // 0x1e3fe53
            g5 = 1 - v16;
            *(char *)v14 = 45;
            v18 = g5;
        } else {
            v18 = v17;
        }
        int32_t v19 = v14 + 1; // 0x1e3fe58
        int32_t v20; // 0x1e3fe6d
        if (v18 >= 100) {
            int64_t v21 = (0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) / 100; // 0x1e3fe66
            g2 = v21;
            char * v22 = (char *)v19; // 0x1e3fe68
            *v22 = *v22 + (char)v21;
            int32_t v23 = g5; // 0x1e3fe6a
            int64_t v24 = 0x100000000 * (int64_t)(v23 >> 31) | (int64_t)v23; // 0x1e3fe6d
            int64_t v25 = 100; // 0x1e3fe6d
            g2 = v24 / v25;
            v20 = v24 % v25;
            g5 = v20;
        } else {
            v20 = v18;
        }
        int32_t v26 = v19 + 1; // 0x1e3fe71
        int32_t v27; // 0x1e3fe86
        if (v20 >= 10) {
            int64_t v28 = (0x100000000 * (int64_t)(v20 >> 31) | (int64_t)v20) / 10; // 0x1e3fe7f
            g2 = v28;
            char * v29 = (char *)v26; // 0x1e3fe81
            *v29 = *v29 + (char)v28;
            int32_t v30 = g5; // 0x1e3fe83
            int64_t v31 = 0x100000000 * (int64_t)(v30 >> 31) | (int64_t)v30; // 0x1e3fe86
            int64_t v32 = 10; // 0x1e3fe86
            g2 = v31 / v32;
            v27 = v31 % v32;
            g5 = v27;
        } else {
            v27 = v20;
        }
        char * v33 = (char *)(v26 + 1); // 0x1e3fe8a
        *v33 = *v33 + (char)v27;
    }
    int32_t result = g6; // 0x1e3fe8d
    g2 = result;
    g6 = v2;
    return result;
}

// Address range: 0x1e3fea0 - 0x1e3ff08
int32_t function_1e3fea0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3fea0
    int32_t v1; // bp-40
    int32_t v2 = &v1; // 0x1e3fea0
    g5 = v2;
    g2 = a1;
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x1e3feb3
    g7 = v3;
    int32_t v4 = *(int32_t *)a1; // 0x1e3feb6
    g5 = v4;
    int32_t v5; // bp-24
    function_1e42200(v4, v3, &v1, &v5, g6, g8);
    g5 = v2;
    g8 = a3;
    g6 = a2;
    int32_t v6 = (int32_t)(v1 == 45) + a2; // 0x1e3fee4
    g2 = v6;
    int32_t v7;
    function_1e42170(v6, v7 + a3, &v1);
    g2 = v2;
    function_1e3ff10(g6, g8, &v1, 0);
    g2 = g6;
    return g6;
}

// Address range: 0x1e3ff10 - 0x1e3ffce
int32_t function_1e3ff10(int32_t result, int32_t a2, int32_t * a3, int32_t a4) {
    int32_t v1 = (int32_t)a3;
    g8 = v1;
    int32_t v2 = *(int32_t *)(v1 + 4) - 1; // 0x1e3ff1b
    g5 = v2;
    int32_t v3; // 0x1e3ff52
    int32_t v4; // 0x1e3ff57
    if ((char)a4 == 0) {
        // 0x1e3ff48
        g3 = a2;
        v3 = v1;
        v4 = result;
    } else {
        // 0x1e3ff23
        g3 = a2;
        int32_t v5 = (int32_t)(*a3 == 45) + result; // 0x1e3ff37
        g2 = v5;
        if (v2 == a2) {
            int32_t v6 = v5 + v2; // 0x1e3ff3d
            g2 = v6;
            *(char *)v6 = 48;
            *(char *)(g2 + 1) = 0;
            v3 = g8;
            v4 = result;
        } else {
            v3 = v1;
            v4 = result;
        }
    }
    // 0x1e3ff50
    int32_t v7; // 0x1e3ff5d
    int32_t v8; // 0x1e3ff76
    if (*(int32_t *)v3 == 45) {
        // 0x1e3ff57
        *(char *)v4 = 45;
        v8 = v4 + 1;
        v7 = g8;
    } else {
        v8 = v4;
        v7 = v3;
    }
    int32_t v9 = *(int32_t *)(v7 + 4); // 0x1e3ff5d
    g2 = v9;
    if (v9 >= 0 == (v9 != 0)) {
        // 0x1e3ff76
        g6 = v8 + v9;
    } else {
        // 0x1e3ff64
        g6 = v8 + 1;
        g2 = function_1e400f0(v8, 1);
        *(char *)(g6 - 1) = 48;
    }
    // 0x1e3ff78
    if (g3 >= 1) {
        int32_t v10 = g6; // 0x1e3ff7e
        int32_t v11 = v10 + 1; // 0x1e3ff7f
        g6 = v11;
        g2 = (int32_t)g443 | function_1e400f0(v10, 1) & -256;
        *(char *)v10 = g443;
        int32_t v12 = *(int32_t *)(g8 + 4); // 0x1e3ff90
        if (v12 < 0) {
            int32_t v13 = -v12; // 0x1e3ffa2
            g8 = v13;
            int32_t v14; // 0x1e3ffaa
            if ((char)a4 == 0) {
                // 0x1e3ffa2
                if (g3 <= v13) {
                    // 0x1e3ffa8
                    g8 = g3;
                    v14 = g3;
                } else {
                    v14 = v13;
                }
            } else {
                v14 = v13;
            }
            // 0x1e3ffaa
            function_1e400f0(v11, v14);
            g2 = 0x30303030;
            int32_t v15 = g8 / 4; // 0x1e3ffbb
            g5 = v15;
            __asm_rep_stosd_memset((char *)v11, 48, v15);
            int32_t v16 = g8 & 3; // 0x1e3ffc2
            g5 = v16;
            __asm_rep_stosb_memset((char *)((g1 ? -4 : 4) * v15 + v11), 48, v16);
            g5 = 0;
        }
    }
    // 0x1e3ffc7
    g2 = result;
    g6 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e3ffd0 - 0x1e4007b
int32_t function_1e3ffd0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e3ffd0
    int32_t v1; // bp-40
    int32_t v2 = &v1; // 0x1e3ffd0
    g5 = v2;
    g2 = a1;
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x1e3ffe5
    g7 = v3;
    int32_t v4 = *(int32_t *)a1; // 0x1e3ffe8
    g5 = v4;
    int32_t v5; // bp-24
    function_1e42200(v4, v3, &v1, &v5, g3, g6);
    g8 = a2;
    int32_t v6;
    int32_t v7 = v6 - 1; // 0x1e40000
    g4 = v7;
    g6 = a3;
    int32_t v8 = (int32_t)(v1 == 45) + a2; // 0x1e4000f
    g3 = v8;
    g2 = v2;
    int32_t v9 = function_1e42170(v8, a3, &v1); // 0x1e40019
    g5 = v7;
    int32_t v10 = g4 - v7; // 0x1e40026
    g2 = (int32_t)(v10 < 0 != ((v10 ^ g4) & (g4 ^ v7)) < 0) | v9 & -256;
    int32_t v11 = g6;
    if (v7 >= 0xfffffffc) {
        if (v11 > v7) {
            int32_t result; // 0x1e4004d
            if (v10 < 0 == ((v10 ^ g4) & (g4 ^ v7)) < 0) {
                // 0x1e40044
                g2 = v2;
                result = function_1e3ff10(g8, v11, &v1, 1);
                g2 = result;
                return result;
            }
            int32_t v12 = g3; // 0x1e40038
            g2 = v12;
            int32_t v13 = v12 + 1; // 0x1e4003a
            g3 = v13;
            while (*(char *)v12 != 0) {
                // 0x1e40038
                v12 = v13;
                g2 = v12;
                v13 = v12 + 1;
                g3 = v13;
            }
            // 0x1e40040
            *(char *)(v12 - 1) = 0;
            // 0x1e40044
            g2 = v2;
            result = function_1e3ff10(g8, g6, &v1, 1);
            g2 = result;
            return result;
        }
    }
    // 0x1e4005d
    g2 = v2;
    g5 = a4;
    int32_t result2 = function_1e3fdb0(g8, v11, a4, &v1, 1); // 0x1e4006b
    g2 = result2;
    return result2;
}

// Address range: 0x1e40080 - 0x1e400e5
int32_t function_1e40080(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e40080
    g2 = a3;
    int32_t result; // 0x1e400dc
    if (a3 == 101) {
        // 0x1e400c8
        g5 = a4;
        g2 = a1;
        result = function_1e3fd30(a1, a2, a4, a5);
        g2 = result;
        return result;
    }
    if (a3 == 69) {
        // 0x1e400c8
        g5 = a4;
        g2 = a1;
        result = function_1e3fd30(a1, a2, a4, a5);
        g2 = result;
        return result;
    }
    if (a3 != 102) {
        // 0x1e400ab
        g5 = a4;
        g2 = a1;
        int32_t result2 = function_1e3ffd0(a1, a2, a4, a5); // 0x1e400bf
        g2 = result2;
        return result2;
    }
    // 0x1e40093
    g2 = a4;
    g5 = a2;
    int32_t result3 = function_1e3fea0(a1, a2, a4); // 0x1e400a2
    g2 = result3;
    return result3;
}

