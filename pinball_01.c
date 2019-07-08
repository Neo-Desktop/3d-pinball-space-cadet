
// ------------------------ Functions -------------------------

// Address range: 0x1e21000 - 0x1e21166
int32_t entry_point(void) {
    int32_t v1 = __readfsdword(0); // 0x1e21000
    g2 = v1;
    __writefsdword(0, (int32_t)&v1);
    int32_t v2; // bp-116
    int32_t v3 = &v2; // 0x1e2101d
    uint32_t v4 = GetVersion(); // 0x1e21026
    int32_t v5 = g83; // 0x1e21033
    g86 = v5;
    g82 = v4 / 0x10000;
    int32_t v6 = v4 & 255; // 0x1e21049
    g85 = v6;
    int32_t v7 = v5 | 256 * v6; // 0x1e21056
    g2 = v7;
    g84 = v7;
    int32_t v8 = function_1e22100(); // 0x1e21061
    g2 = v8;
    if (v8 == 0) {
        // 0x1e2106a
        g2 = function_1e211b0(28);
    }
    int32_t v9 = function_1e22010(); // 0x1e21074
    g2 = v9;
    if (v9 == 0) {
        // 0x1e2107d
        g2 = function_1e211b0(16);
    }
    // 0x1e21087
    g2 = function_1e21e30(0);
    g2 = function_1e21e20();
    char * commandLine = GetCommandLineA(); // 0x1e21098
    g2 = (int32_t)commandLine;
    g682 = commandLine;
    int32_t v10 = function_1e21980(); // 0x1e210a3
    g2 = v10;
    g78 = (char *)v10;
    if (v10 == 0) {
        // 0x1e210ba
        g2 = function_1e21210(-1);
        goto lab_0x1e210c4;
    } else {
        // 0x1e210b1
        if (g682 != NULL) {
            goto lab_0x1e210c4;
        } else {
            // 0x1e210ba
            g2 = function_1e21210(-1);
            goto lab_0x1e210c4;
        }
    }
  lab_0x1e210c4:
    // 0x1e210c4
    g2 = function_1e21710();
    g2 = function_1e21620();
    int32_t v11 = function_1e211e0(); // 0x1e210ce
    g2 = v11;
    int32_t v12 = (int32_t)g682; // 0x1e210d3
    g8 = v12;
    unsigned char v13 = *g682; // 0x1e210d9
    g2 = (int32_t)v13 | v11 & -256;
    int32_t v14; // 0x1e21112
    int32_t v15; // 0x1e21117
    if (v13 == 34) {
        int32_t v16 = v12 + 1; // 0x1e210eb
        g8 = v16;
        char * v17 = (char *)v16; // 0x1e210ec
        if (*v17 == 34) {
            v15 = v16;
            goto lab_0x1e21117;
        } else {
            unsigned char v18 = *v17; // 0x1e210f4272
            int32_t v19 = v18; // 0x1e210f4273
            g4 = v19 | g4 & -256;
            if (v18 != 0) {
                int32_t v20 = g9; // 0x1e210fe
                while (true) {
                    // 0x1e210fa
                    g2 = v19;
                    *(int32_t *)(v20 - 4) = v19;
                    int32_t v21 = function_1e215c0((int32_t)&g708); // 0x1e210ff
                    g2 = v21;
                    int32_t v22 = g8;
                    int32_t v23; // 0x1e2110c
                    if (v21 != 0) {
                        // 0x1e2110b
                        v23 = v22 + 1;
                    } else {
                        v23 = v22;
                    }
                    int32_t v24 = v23 + 1; // 0x1e2110c
                    g8 = v24;
                    char * v25 = (char *)v24; // 0x1e2110d
                    if (*v25 == 34) {
                        v14 = v24;
                        // break -> 0x1e21112
                        break;
                    }
                    unsigned char v26 = *v25; // 0x1e210f4
                    int32_t v27 = v26; // 0x1e210f4
                    g4 = v27 | g4 & -256;
                    if (v26 == 0) {
                        v14 = v24;
                        // break -> 0x1e21112
                        break;
                    }
                    v20 = g9 + 4;
                    v19 = v27;
                }
            } else {
                v14 = v16;
            }
            // 0x1e21112
            if (*(char *)v14 != 34) {
                goto lab_0x1e21118;
            } else {
                v15 = v14;
                goto lab_0x1e21117;
            }
        }
    } else {
        if (v13 >= 33) {
            int32_t v28 = v12 + 1; // 0x1e210e3
            g8 = v28;
            v14 = v28;
            while (*(char *)v28 >= 33) {
                // 0x1e210e3
                v28++;
                g8 = v28;
                v14 = v28;
            }
        } else {
            v14 = v12;
        }
        goto lab_0x1e21118;
    }
  lab_0x1e21117:;
    int32_t v29 = v15 + 1; // 0x1e21117
    g8 = v29;
    v14 = v29;
    goto lab_0x1e21118;
  lab_0x1e21118:
    // 0x1e21118
    if (*(char *)v14 != 0) {
        int32_t v30 = v14; // 0x1e21122
        while (true) {
            // 0x1e2111d
            if (*(char *)v30 >= 33) {
                // break -> 0x1e21128
                break;
            }
            int32_t v31 = v30 + 1; // 0x1e21122
            g8 = v31;
            if (*(char *)v31 == 0) {
                // break -> 0x1e21128
                break;
            }
            v30 = v31;
        }
    }
    // 0x1e21128
    g2 = v3;
    *(int32_t *)(g9 - 4) = v3;
    GetStartupInfoA(NULL);
    g2 = 10;
    *(int32_t *)(g9 - 4) = 10;
    *(int32_t *)(g9 - 8) = g8;
    *(int32_t *)(g9 - 12) = 0;
    *(int32_t *)(g9 - 16) = 0;
    int32_t moduleHandle = (int32_t)GetModuleHandleA((char *)&g708); // 0x1e21152
    g2 = moduleHandle;
    *(int32_t *)(g9 - 4) = moduleHandle;
    int32_t v32 = function_1e24bc6((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e21159
    g2 = v32;
    *(int32_t *)(g9 - 4) = v32;
    g2 = function_1e21210((int32_t)&g708);
    int32_t result = function_1e2118d((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e21164
    g2 = result;
    return result;
}

// Address range: 0x1e21166 - 0x1e21181
int32_t function_1e21166(void) {
    int32_t v1 = g3; // 0x1e21166
    int32_t v2 = *(int32_t *)(v1 - 20); // 0x1e21166
    g2 = v2;
    int32_t v3 = *(int32_t *)v2; // 0x1e21169
    g2 = v3;
    int32_t v4 = *(int32_t *)v3; // 0x1e2116b
    g2 = v4;
    *(int32_t *)(v1 - 32) = v4;
    int32_t v5 = g3; // 0x1e21170
    int32_t v6 = *(int32_t *)(v5 - 20); // 0x1e21170
    g2 = v6;
    int32_t v7 = *(int32_t *)(v5 - 32); // 0x1e21174
    g2 = v7;
    int32_t result = function_1e21440(v7, v6); // 0x1e21178
    g2 = result;
    return result;
}

// Address range: 0x1e2118d - 0x1e211a7
int32_t function_1e2118d(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2118d
    *(int32_t *)(g3 - 4) = -1;
    int32_t v1 = *(int32_t *)(g3 - 16); // 0x1e21197
    g2 = v1;
    __writefsdword(0, v1);
    return g2;
}

// Address range: 0x1e211b0 - 0x1e211da
int32_t function_1e211b0(int32_t a1) {
    // 0x1e211b0
    if (g79 == 1) {
        // 0x1e211b9
        g2 = function_1e22220();
    }
    // 0x1e211be
    g2 = a1;
    g2 = function_1e22260(a1);
    int32_t result = function_1e21230(255); // 0x1e211d0
    g2 = result;
    return result;
}

// Address range: 0x1e211e0 - 0x1e21210
int32_t function_1e211e0(void) {
    // 0x1e211e0
    g2 = g431;
    if (g431 != 0) {
        // 0x1e211e9
        g2 = function_1e3d890();
    }
    // 0x1e211eb
    g2 = function_1e21330(&g72, &g73);
    int32_t result = function_1e21330(&g70, &g71); // 0x1e21207
    g2 = result;
    return result;
}

// Address range: 0x1e21210 - 0x1e21222
int32_t function_1e21210(int32_t a1) {
    // 0x1e21210
    g2 = a1;
    int32_t result = function_1e21250(a1, 0, 0); // 0x1e21219
    g2 = result;
    return result;
}

// Address range: 0x1e21230 - 0x1e21242
int32_t function_1e21230(int32_t a1) {
    // 0x1e21230
    g2 = a1;
    int32_t result = function_1e21250(a1, 1, 0); // 0x1e21239
    g2 = result;
    return result;
}

// Address range: 0x1e21250 - 0x1e212fd
int32_t function_1e21250(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e21250
    g2 = function_1e21310(g6, g8, g4);
    g8 = a1;
    if (g93 == 1) {
        int32_t * processHandle = GetCurrentProcess(); // 0x1e21266
        g2 = (int32_t)processHandle;
        g2 = TerminateProcess(processHandle, (int32_t)&g708);
    }
    // 0x1e21273
    g92 = 1;
    int32_t v1 = *(int32_t *)(g9 + 24); // 0x1e21282
    char v2 = v1; // 0x1e21282
    g4 = v1;
    g91 = v2;
    int32_t v3; // 0x1e212cd
    if (*(int32_t *)(g9 + 20) == 0) {
        // 0x1e2128e
        if (g681 != 0) {
            int32_t v4 = g680 - 4; // 0x1e2129d
            g6 = v4;
            if (v4 >= g681) {
                g2 = *(int32_t *)v4;
                int32_t v5 = v4 - 4; // 0x1e212b0
                g6 = v5;
                while (v5 >= g681) {
                    // 0x1e212a8
                    v4 = v5;
                    g2 = *(int32_t *)v4;
                    v5 = v4 - 4;
                    g6 = v5;
                }
            }
        }
        // 0x1e212bb
        *(int32_t *)(g9 - 4) = (int32_t)&g75;
        *(int32_t *)(g9 - 8) = (int32_t)&g74;
        g2 = function_1e21330(&g708, &g708);
        v3 = g9 + 8;
    } else {
        v3 = g9;
    }
    // 0x1e212cd
    *(int32_t *)(v3 - 4) = (int32_t)&g77;
    *(int32_t *)(v3 - 8) = (int32_t)&g76;
    g2 = function_1e21330(&g708, &g708);
    if (v2 == 0) {
        // 0x1e212ec
        g93 = 1;
        *(int32_t *)(g9 + 4) = g8;
        ExitProcess((int32_t)&g708);
        // UNREACHABLE
    }
    int32_t result = function_1e21320(); // 0x1e212e3
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e212fd - 0x1e21301
int32_t function_1e212fd(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e212fd
    return g2;
}

// Address range: 0x1e21310 - 0x1e2131b
int32_t function_1e21310(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = function_1e22490(13); // 0x1e21312
    g2 = result;
    return result;
}

// Address range: 0x1e21320 - 0x1e2132b
int32_t function_1e21320(void) {
    int32_t result = function_1e22500(13); // 0x1e21322
    g2 = result;
    return result;
}

// Address range: 0x1e21330 - 0x1e21350
int32_t function_1e21330(int32_t * a1, int32_t * a2) {
    int32_t v1 = g6; // 0x1e21331
    if (a2 <= a1) {
        // 0x1e2134d
        g6 = v1;
        int32_t result;
        return result;
    }
    int32_t result2; // 0x1e2133e
    for (int32_t i = (int32_t)a1; i < (uint32_t)(int32_t)a2 - 3; i += 4) {
        // 0x1e2133e
        result2 = *(int32_t *)i;
        g2 = result2;
    }
    // 0x1e2134d
    g6 = v1;
    return result2;
}

// Address range: 0x1e2141d - 0x1e21426
int32_t function_1e2141d(void) {
    // 0x1e2141d
    return g2;
}

// Address range: 0x1e21440 - 0x1e2158f
int32_t function_1e21440(int32_t a1, int32_t ExceptionInfo) {
    int32_t v1 = function_1e22090(); // 0x1e21444
    g2 = v1;
    g8 = v1;
    g5 = a1;
    int32_t v2 = *(int32_t *)(v1 + 80); // 0x1e2144f
    g2 = v2;
    int32_t v3 = function_1e21590(a1, v2); // 0x1e21454
    g2 = v3;
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(v3 + 8); // 0x1e21464
        int32_t v5 = *v4; // 0x1e21464
        if (v5 != 0) {
            if (v5 == 5) {
                // 0x1e21474
                *v4 = 0;
                g2 = 1;
                return 1;
            }
            if (v5 == 1) {
                // 0x1e2148a
                g2 = -1;
                return -1;
            }
            int32_t * v6 = (int32_t *)(g8 + 84); // 0x1e21494
            g5 = ExceptionInfo;
            *v6 = ExceptionInfo;
            int32_t * v7 = (int32_t *)(v3 + 4); // 0x1e2149e
            if (*v7 != 8) {
                // 0x1e21562
                *v4 = 0;
                g2 = *v7;
            } else {
                int32_t v8 = g96 + g95; // 0x1e214b4
                g5 = v8;
                if (v8 > g95) {
                    int32_t v9 = 12 * g95; // 0x1e214bd
                    g5 = v9;
                    int32_t v10 = g95; // 0x1e214c6
                    g5 = v9 + 12;
                    *(int32_t *)(v9 + 8 + *(int32_t *)(g8 + 80)) = 0;
                    while (g95 + g96 > v10 + 1) {
                        // 0x1e214c0
                        v10++;
                        v9 = g5;
                        g5 = v9 + 12;
                        *(int32_t *)(v9 + 8 + *(int32_t *)(g8 + 80)) = 0;
                    }
                }
                int32_t * v11 = (int32_t *)(g8 + 88); // 0x1e214df
                int32_t v12 = *(int32_t *)v3; // 0x1e214e2
                g2 = v12;
                if (v12 != -0x3fffff72) {
                    if (v12 != -0x3fffff70) {
                        if (v12 != -0x3fffff6f) {
                            if (v12 != -0x3fffff6d) {
                                if (v12 != -0x3fffff73) {
                                    if (v12 != -0x3fffff71) {
                                        if (v12 == -0x3fffff6e) {
                                            // 0x1e2154b
                                            *v11 = 138;
                                        }
                                    } else {
                                        // 0x1e2153b
                                        *v11 = 134;
                                    }
                                } else {
                                    // 0x1e2152b
                                    *v11 = 130;
                                }
                            } else {
                                // 0x1e2151b
                                *v11 = 133;
                            }
                        } else {
                            // 0x1e2150b
                            *v11 = 132;
                        }
                    } else {
                        // 0x1e214fb
                        *v11 = 129;
                    }
                } else {
                    // 0x1e214eb
                    *v11 = 131;
                }
                int32_t * v13 = (int32_t *)(g8 + 88); // 0x1e21552
                g2 = *v13;
                *v13 = *v11;
            }
            // 0x1e21572
            g2 = -1;
            *(int32_t *)(g8 + 84) = *v6;
            return g2;
        }
    }
    // 0x1e2157f
    g5 = ExceptionInfo;
    int32_t result = UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)ExceptionInfo); // 0x1e21584
    g2 = result;
    return result;
}

// Address range: 0x1e21590 - 0x1e215bf
int32_t function_1e21590(int32_t a1, int32_t a2) {
    // 0x1e21590
    g2 = a2;
    int32_t v1 = a2; // 0x1e2159f
    int32_t v2; // 0x1e215bb
    int32_t v3; // 0x1e215b2
    while (true) {
        // 0x1e2159b
        if (*(int32_t *)v1 == a1) {
            v3 = a1;
            v2 = v1;
            // break -> 0x1e215b2
            break;
        }
        int32_t v4 = v1 + 12; // 0x1e2159f
        int32_t v5 = 12 * g97 + a2; // 0x1e215ab
        g5 = v5;
        if (v5 <= v4) {
            // 0x1e2159f
            v3 = *(int32_t *)v4;
            v2 = v4;
            goto lab_0x1e215b2;
        }
        v1 = v4;
    }
  lab_0x1e215b2:;
    int32_t result = v3 == a1 ? v2 : 0; // 0x1e215bb
    g2 = result;
    return result;
}

// Address range: 0x1e215c0 - 0x1e215d2
int32_t function_1e215c0(int32_t a1) {
    // 0x1e215c0
    g2 = a1;
    int32_t result = function_1e215e0(a1, 0, 4); // 0x1e215c9
    g2 = result;
    return result;
}

// Address range: 0x1e215e0 - 0x1e2161a
int32_t function_1e215e0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e215e0
    g5 = 0;
    int32_t v1 = a1 & 255; // 0x1e215e4
    g7 = v1;
    unsigned char v2 = *(char *)(v1 + (int32_t)&g100); // 0x1e215e8
    int32_t v3 = v2; // 0x1e215e8
    g5 = v3;
    if ((v3 & a3) != 0) {
        // 0x1e21614
        g2 = 1;
        return 1;
    }
    // 0x1e215f4
    g2 = a2;
    g5 = 0;
    if (a2 == 0) {
        // 0x1e21611
        g2 = 0;
        return 0;
    }
    // 0x1e2160d
    g5 = 0;
    uint16_t v4 = *(int16_t *)(2 * v1 + (int32_t)&g124); // 0x1e21603
    int32_t v5 = (int32_t)v4 & a2; // 0x1e2160b
    g5 = v5;
    if (v5 != 0) {
        // 0x1e21614
        g2 = 1;
        return 1;
    }
    // 0x1e21611
    g2 = 0;
    return 0;
}

// Address range: 0x1e21620 - 0x1e21705
int32_t function_1e21620(void) {
    int32_t v1 = (int32_t)g78; // 0x1e21623
    g7 = v1;
    g8 = 0;
    int32_t v2 = g3; // bp-20
    int32_t v3 = &v2; // 0x1e2162e
    int32_t v4; // 0x1e2164e
    if (*g78 != 0) {
        int32_t v5 = 0; // 0x1e21639
        while (true) {
            // 0x1e21634
            int32_t v6; // 0x1e21639
            if (*(char *)v1 != 61) {
                // 0x1e21639
                v6 = v5 + 1;
                g8 = v6;
            } else {
                v6 = v5;
            }
            // 0x1e2163a
            g6 = v1;
            g5 = -1;
            g2 = 0;
            int32_t v7 = v1; // 0x1e21643
            int32_t v8 = -1; // 0x1e21643
            int32_t v9; // 0x1e21645
            while (true) {
                if (v8 == 0) {
                    v9 = 0;
                    // break -> bb39
                    break;
                }
                int32_t v10 = (g1 ? -1 : 1) + v7; // 0x1e21643
                g6 = v10;
                int32_t v11 = v8 - 1; // 0x1e21643
                g5 = v11;
                if (*(char *)v7 == 0) {
                    v9 = v11;
                    // break -> bb39
                    break;
                }
                v7 = v10;
                v8 = v11;
            }
            int32_t v12 = -1 - v9; // 0x1e21645
            g5 = v12;
            int32_t v13 = v1 + v12; // 0x1e21647
            g7 = v13;
            if (*(char *)v13 == 0) {
                v4 = v6;
                // break -> 0x1e2164e
                break;
            }
            v5 = v6;
            v1 = v13;
        }
    } else {
        v4 = 0;
    }
    int32_t v14 = 4 * v4 + 4; // 0x1e2164e
    g2 = v14;
    int32_t v15 = function_1e22670(v14); // 0x1e21656
    g2 = v15;
    g89 = v15;
    g4 = v15;
    if (v15 == 0) {
        // 0x1e21669
        g2 = function_1e211b0(9);
    }
    int32_t v16 = (int32_t)g78; // 0x1e21673
    g3 = v16;
    g2 = v16;
    int32_t v17; // 0x1e216e4
    if (*g78 != 0) {
        int32_t v18 = v3; // 0x1e2168e
        while (true) {
            // 0x1e21681
            g6 = v16;
            g5 = -1;
            g2 = 0;
            int32_t v19 = v16; // 0x1e2168a
            int32_t v20 = -1; // 0x1e2168a
            int32_t v21; // 0x1e2168c
            while (true) {
                if (v20 == 0) {
                    v21 = 0;
                    // break -> bb43
                    break;
                }
                int32_t v22 = (g1 ? -1 : 1) + v19; // 0x1e2168a
                g6 = v22;
                int32_t v23 = v20 - 1; // 0x1e2168a
                g5 = v23;
                if (*(char *)v19 == 0) {
                    v21 = v23;
                    // break -> bb43
                    break;
                }
                v19 = v22;
                v20 = v23;
            }
            int32_t v24 = -1 - v21; // 0x1e2168c
            g5 = v24;
            *(int32_t *)(v18 + 16) = v24;
            int32_t v25 = g3; // 0x1e21692
            int32_t v26; // 0x1e216d5
            if (*(char *)v25 != 61) {
                // 0x1e21698
                *(int32_t *)(g9 - 4) = g5;
                int32_t v27 = function_1e22670((int32_t)&g708); // 0x1e21699
                g2 = v27;
                *(int32_t *)g4 = v27;
                if (g2 == 0) {
                    // 0x1e216a7
                    *(int32_t *)(g9 - 4) = 9;
                    g2 = function_1e211b0((int32_t)&g708);
                }
                // 0x1e216b1
                g5 = -1;
                g2 = 0;
                int32_t v28 = g3; // 0x1e216ba
                int32_t v29 = -1; // 0x1e216ba
                int32_t v30; // 0x1e216bc
                int32_t v31; // 0x1e216be
                while (true) {
                    if (v29 == 0) {
                        v31 = v28;
                        v30 = 0;
                        // break -> bb48
                        break;
                    }
                    int32_t v32 = (g1 ? -1 : 1) + v28; // 0x1e216ba
                    int32_t v33 = v29 - 1; // 0x1e216ba
                    g5 = v33;
                    if (*(char *)v28 == 0) {
                        v31 = v32;
                        v30 = v33;
                        // break -> bb48
                        break;
                    }
                    v28 = v32;
                    v29 = v33;
                }
                int32_t v34 = -1 - v30; // 0x1e216bc
                g2 = v34;
                int32_t v35 = v34 / 4; // 0x1e216c2
                g5 = v35;
                int32_t v36 = g4; // 0x1e216c7
                int32_t v37 = *(int32_t *)v36; // 0x1e216c7
                g4 = v36 + 4;
                __asm_rep_movsd_memcpy((char *)v37, (char *)(v31 - v34), v35);
                int32_t v38 = (g1 ? -4 : 4) * v35 + v37; // 0x1e216cc
                char * v39 = (char *)v38; // 0x1e216cc
                int32_t v40 = g2 & 3; // 0x1e216d0
                g5 = v40;
                __asm_rep_movsb_memcpy(v39, v39, v40);
                int32_t v41 = (g1 ? -1 : 1) * v40 + v38; // 0x1e216d3
                g6 = v41;
                g8 = v41;
                g5 = 0;
                v26 = g3;
            } else {
                v26 = v25;
            }
            int32_t v42 = *(int32_t *)(g9 + 16) + v26; // 0x1e216d5
            g3 = v42;
            if (*(char *)v42 == 0) {
                // break -> 0x1e216df
                break;
            }
            v18 = g9;
            v16 = v42;
        }
        // 0x1e216df
        v17 = g9;
    } else {
        v17 = v3;
    }
    int32_t v43 = (int32_t)g78; // 0x1e216df
    g2 = v43;
    *(int32_t *)(v17 - 4) = v43;
    g2 = function_1e22600((int32_t)&g708);
    g78 = NULL;
    *(int32_t *)g4 = 0;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return g2;
}

// Address range: 0x1e21710 - 0x1e217ab
int32_t function_1e21710(void) {
    int32_t v1 = g6; // bp-16
    int32_t v2 = 260; // bp-20
    int32_t v3 = &v2; // 0x1e21715
    g8 = (int32_t)&g490;
    GetModuleFileNameA(NULL, (char *)&g490, 260);
    int32_t v4 = (int32_t)g682; // 0x1e21728
    g2 = v4;
    int32_t v5 = g8; // 0x1e2172d
    g90 = (char *)v5;
    if (*g682 != 0) {
        // 0x1e21738
        g8 = v4;
    } else {
        v4 = v5;
    }
    // 0x1e2173e
    g2 = &v1;
    g5 = v3;
    function_1e217b0(v4, 0, 0, &v2, &v1);
    int32_t v6 = v1 + 4 * v2; // 0x1e2175c
    g2 = v6;
    int32_t v7 = function_1e22670(v6); // 0x1e21761
    g2 = v7;
    g6 = v7;
    if (v7 == 0) {
        // 0x1e2176f
        g2 = function_1e211b0(8);
    }
    // 0x1e21779
    g5 = v3;
    int32_t v8 = 4 * v2 + v7; // 0x1e21787
    g2 = v8;
    function_1e217b0(g8, v7, v8, &v2, &v1);
    int32_t result = v2 - 1; // 0x1e21799
    g2 = result;
    g88 = v7;
    g6 = 0;
    g87 = result;
    return result;
}

// Address range: 0x1e217b0 - 0x1e21980
int32_t function_1e217b0(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5) {
    // 0x1e217b0
    g5 = (int32_t)a5;
    int32_t v1 = g4; // 0x1e217b4
    int32_t v2 = (int32_t)a4; // edx
    g2 = a3;
    *a5 = 0;
    *a4 = 1;
    int32_t v3;
    if (a2 != 0) {
        // 0x1e217d7
        v2 = a2;
        *(int32_t *)a2 = g2;
        v3 = a2 + 4;
    } else {
        v3 = 0;
    }
    int32_t v4 = a1; // 0x1e217e2
    int32_t v5; // 0x1e21827
    int32_t v6; // 0x1e2180d
    int32_t v7; // 0x1e21872
    if (*(char *)v4 == 34) {
        int32_t v8 = v4 + 1; // 0x1e2182d
        a1 = v8;
        if (*(char *)v8 != 34) {
            while (true) {
                unsigned char v9 = *(char *)v8; // 0x1e21833
                int32_t v10 = v9; // 0x1e21833
                g4 = g4 & -256 | v10;
                if (v9 == 0) {
                    // break -> 0x1e21863
                    break;
                }
                // 0x1e21839
                v2 = v10;
                if ((*(char *)(v10 + (int32_t)&g100) & 4) != 0) {
                    int32_t * v11 = (int32_t *)g5; // 0x1e21846
                    *v11 = *v11 + 1;
                    int32_t v12 = g2; // 0x1e21848
                    if (v12 != 0) {
                        int32_t v13 = a1; // 0x1e2184c
                        unsigned char v14 = *(char *)v13; // 0x1e2184c
                        v2 = v2 & -256 | (int32_t)v14;
                        a1 = v13 + 1;
                        *(char *)v12 = v14;
                        g2++;
                    }
                }
                int32_t * v15 = (int32_t *)g5; // 0x1e21852
                *v15 = *v15 + 1;
                int32_t v16 = g2; // 0x1e21854
                if (v16 != 0) {
                    unsigned char v17 = *(char *)a1; // 0x1e21858
                    v2 = v2 & -256 | (int32_t)v17;
                    *(char *)v16 = v17;
                    g2++;
                }
                int32_t v18 = a1 + 1; // 0x1e2185d
                a1 = v18;
                if (*(char *)v18 == 34) {
                    // break -> 0x1e21863
                    break;
                }
                v8 = v18;
            }
        }
        int32_t * v19 = (int32_t *)g5; // 0x1e21863
        *v19 = *v19 + 1;
        int32_t v20 = g2; // 0x1e21865
        if (v20 != 0) {
            // 0x1e21869
            *(char *)v20 = 0;
            g2++;
        }
        int32_t v21 = a1; // 0x1e2186d
        if (*(char *)v21 == 34) {
            // 0x1e21872
            v7 = v21 + 1;
            a1 = v7;
        } else {
            v7 = v21;
        }
        goto lab_0x1e21873;
    } else {
        while (true) {
            int32_t * v22 = (int32_t *)g5; // 0x1e217e7
            *v22 = *v22 + 1;
            int32_t v23 = g2; // 0x1e217e9
            int32_t v24; // 0x1e217f1
            if (v23 != 0) {
                unsigned char v25 = *(char *)a1; // 0x1e217ed
                v2 = v2 & -256 | (int32_t)v25;
                *(char *)v23 = v25;
                v24 = g2 + 1;
                g2 = v24;
            } else {
                v24 = 0;
            }
            int32_t v26 = a1; // 0x1e217f2
            int32_t v27 = (int32_t)*(char *)v26; // 0x1e217f2
            int32_t v28 = v2 & -256 | v27; // 0x1e217f2
            v2 = v28;
            int32_t v29 = v26 + 1; // 0x1e217f4
            a1 = v29;
            if ((*(char *)(v27 + (int32_t)&g100) & 4) != 0) {
                int32_t * v30 = (int32_t *)g5; // 0x1e21802
                *v30 = *v30 + 1;
                int32_t v31 = g2; // 0x1e21804
                int32_t v32; // 0x1e2180c
                if (v31 != 0) {
                    // 0x1e21808
                    *(char *)v31 = *(char *)a1;
                    v32 = g2 + 1;
                    g2 = v32;
                } else {
                    v32 = 0;
                }
                // 0x1e2180d
                v6 = a1 + 1;
                a1 = v6;
                v5 = v32;
            } else {
                v5 = v24;
                v6 = v29;
                v2 = v28;
            }
            char v33 = v2; // 0x1e2180e
            if (v33 == 32) {
                // break -> 0x1e2181c
                break;
            }
            if (v33 == 0) {
                int32_t v34 = v6 - 1; // 0x1e21820
                a1 = v34;
                v7 = v34;
                goto lab_0x1e21873;
            }
            if (v33 == 9) {
                goto lab_0x1e21823;
            }
        }
        goto lab_0x1e21823;
    }
  lab_0x1e218e8:;
    // 0x1e218e8
    int32_t v35; // 0x1e218e8
    g3 = v35;
    int32_t v36 = v35 - 1; // 0x1e218ea
    v2 = v36;
    int32_t v37; // 0x1e2190032
    int32_t v38; // 0x1e2194a
    int32_t v39; // 0x1e21900
    if (v35 != 0) {
        int32_t v40 = v36; // 0x1e218f727
        int32_t v41; // 0x1e218fb
        while (true) {
            int32_t v42 = g2; // 0x1e218ef
            int32_t v43; // 0x1e218f7
            if (v42 != 0) {
                // 0x1e218f3
                *(char *)v42 = 92;
                g2++;
                v43 = v2;
            } else {
                v43 = v40;
            }
            // 0x1e218f7
            g3 = v43;
            int32_t * v44 = (int32_t *)g5; // 0x1e218f9
            *v44 = *v44 + 1;
            v41 = v2 - 1;
            v2 = v41;
            if (v43 == 0) {
                // break -> 0x1e21900
                break;
            }
            v40 = v41;
        }
        // 0x1e21900
        v39 = v41;
        v38 = a1;
    } else {
        v39 = v36;
        v38 = v37;
    }
    unsigned char v45 = *(char *)v38; // 0x1e21900
    int32_t v46 = v45; // 0x1e21900
    v2 = v46 | v39 & -256;
    if (v45 == 0) {
        // break -> 0x1e21955
        goto lab_0x1e21955_3;
    }
    // 0x1e21906
    int32_t v47; // edi
    if (v47 == 0) {
        if (v45 == 32) {
            // break -> 0x1e21955
            goto lab_0x1e21955_3;
        }
        if (v45 == 9) {
            // break -> 0x1e21955
            goto lab_0x1e21955_3;
        }
    }
    // 0x1e21914
    int32_t v48; // ebx
    if (v48 == 0) {
        // 0x1e2194f
        a1 = v38 + 1;
        // continue -> 0x1e218ae
        goto lab_0x1e218ae_3;
    }
    int32_t v49 = g2; // 0x1e21918
    char v50 = *(char *)(v46 + (int32_t)&g100); // 0x1e21941
    if (v49 == 0) {
        if ((v50 & 4) != 0) {
            // 0x1e2194a
            a1 = v38 + 1;
            int32_t * v51 = (int32_t *)g5; // 0x1e2194b
            *v51 = *v51 + 1;
        }
        int32_t * v52 = (int32_t *)g5; // 0x1e2194d
        *v52 = *v52 + 1;
        // 0x1e2194f
        a1++;
        // continue -> 0x1e218ae
        goto lab_0x1e218ae_3;
    }
    int32_t v53; // 0x1e21931
    int32_t v54; // 0x1e21932
    if ((v50 & 4) != 0) {
        // 0x1e21929
        *(char *)v49 = v45;
        g2++;
        int32_t * v55 = (int32_t *)g5; // 0x1e2192d
        *v55 = *v55 + 1;
        v53 = g2;
        v54 = a1 + 1;
    } else {
        v53 = v49;
        v54 = v38;
    }
    // 0x1e2192f
    g2 = v53 + 1;
    a1 = v54 + 1;
    *(char *)v53 = *(char *)v54;
    int32_t * v56 = (int32_t *)g5; // 0x1e21936
    *v56 = *v56 + 1;
    goto lab_0x1e218ae;
  lab_0x1e218e5:;
    // 0x1e218e5
    int32_t v63; // 0x1e218e5
    int32_t v68 = v63 / 2; // 0x1e218e5
    v2 = v68;
    int32_t v64; // 0x1e2190031
    v37 = v64;
    v35 = v68;
    goto lab_0x1e218e8;
  lab_0x1e21873:
    // 0x1e21873
    v47 = 0;
    int32_t v69;
    if (*(char *)v7 != 0) {
        int32_t v70 = v7; // 0x1e2187e19
        int32_t v71 = v3;
        while (true) {
            int32_t v72 = v2; // 0x1e2187e
            int32_t v73 = v70; // 0x1e2188a
            char * v74; // 0x1e2187e
            while (true) {
                // 0x1e2187e
                v74 = (char *)v73;
                unsigned char v75 = *v74; // 0x1e2187e
                int32_t v76 = (int32_t)v75 | v72 & -256; // 0x1e2187e
                if (v75 != 32) {
                    if (v75 != 9) {
                        // break -> 0x1e2188d
                        break;
                    }
                }
                int32_t v77 = v73 + 1; // 0x1e2188a
                a1 = v77;
                v72 = v76;
                v73 = v77;
            }
            // 0x1e2188d
            if (*v74 == 0) {
                v69 = v71;
                // break -> 0x1e21964
                break;
            }
            int32_t v78;
            if (v71 != 0) {
                // 0x1e2189d
                *(int32_t *)v71 = g2;
                v78 = v71 + 4;
            } else {
                v78 = 0;
            }
            // 0x1e218a8
            *a4 = *a4 + 1;
          lab_0x1e218ae_3:
            while (true) {
              lab_0x1e218ae:
                // 0x1e218ae
                v48 = 1;
                int32_t v57 = a1; // 0x1e218b5
                int32_t v58; // 0x1e218cf
                if (*(char *)v57 == 92) {
                    int32_t v59 = 0; // 0x1e218bb
                    int32_t v60 = v57; // 0x1e218ba
                    while (true) {
                        int32_t v61 = v60 + 1; // 0x1e218ba
                        a1 = v61;
                        int32_t v62 = v59 + 1; // 0x1e218bb
                        if (*(char *)v61 != 92) {
                            v63 = v62;
                            v58 = v61;
                            // break -> 0x1e218c1
                            break;
                        }
                        v59 = v62;
                        v60 = v61;
                    }
                } else {
                    v63 = 0;
                    v58 = v57;
                }
                // 0x1e218c1
                if (*(char *)v58 != 34) {
                    v37 = v58;
                    v35 = v63;
                    goto lab_0x1e218e8;
                } else {
                    if ((v63 & 1) != 0) {
                        v64 = v58;
                        goto lab_0x1e218e5;
                    } else {
                        int32_t v65 = v47; // 0x1e218cb
                        if (v65 == 0) {
                            // 0x1e218dc
                            v48 = 0;
                            int32_t v66 = v58; // 0x1e2190030
                            // 0x1e218de
                            v47 = v65 == 0;
                            v64 = v66;
                            goto lab_0x1e218e5;
                        } else {
                            int32_t v67 = v58 + 1; // 0x1e218cf
                            if (*(char *)v67 != 34) {
                                // 0x1e218dc
                                v48 = 0;
                                // 0x1e218de
                                v47 = v65 == 0;
                                v64 = v58;
                                goto lab_0x1e218e5;
                            } else {
                                // 0x1e218d8
                                a1 = v67;
                                // 0x1e218de
                                v47 = v65 == 0;
                                v64 = v67;
                                goto lab_0x1e218e5;
                            }
                        }
                    }
                }
            }
          lab_0x1e21955_3:;
            int32_t v79 = g2; // 0x1e21955
            if (v79 != 0) {
                // 0x1e21959
                *(char *)v79 = 0;
                g2++;
            }
            int32_t * v80 = (int32_t *)g5; // 0x1e2195d
            *v80 = *v80 + 1;
            int32_t v81 = a1; // 0x1e21875
            if (*(char *)v81 == 0) {
                v69 = v78;
                // break -> 0x1e21964
                break;
            }
            v70 = v81;
            v71 = v78;
        }
    } else {
        v69 = v3;
    }
    if (v69 != 0) {
        // 0x1e2196b
        *(int32_t *)v69 = 0;
    }
    // 0x1e21975
    g4 = v1;
    *a4 = *a4 + 1;
    return g2;
  lab_0x1e21823:
    if (v5 != 0) {
        // 0x1e21827
        *(char *)(v5 - 1) = 0;
        v7 = a1;
    } else {
        v7 = v6;
    }
    goto lab_0x1e21873;
}

// Address range: 0x1e21980 - 0x1e21b0c
int32_t function_1e21980(void) {
    int32_t result2 = g4; // bp-8
    int32_t v1 = g8; // 0x1e21984
    int32_t v2 = g6; // 0x1e21985
    g4 = 0;
    int32_t v3 = g3; // bp-20
    g6 = 0;
    g8 = *(int32_t *)0x1e4b0ec;
    int32_t v4 = g98; // 0x1e21991
    int32_t v5; // 0x1e21a7e
    int32_t v6; // 0x1e219ad
    if (v4 == 0) {
        int32_t v7 = (int32_t)GetEnvironmentStringsW(); // 0x1e21999
        g2 = v7;
        int32_t v8 = g4; // 0x1e2199b
        g6 = v7;
        if (v7 == v8) {
            char * v9 = GetEnvironmentStrings(); // 0x1e219ad
            v6 = (int32_t)v9;
            g2 = v6;
            g4 = v6;
            if (v9 == NULL) {
                // 0x1e219c5
                g2 = 0;
                g3 = v3;
                g6 = v2;
                g8 = v1;
                g4 = result2;
                return 0;
            }
            // 0x1e219b9
            g98 = 2;
            v5 = 2;
        } else {
            // 0x1e219a1
            g98 = 1;
            v6 = v8;
            v5 = 1;
        }
    } else {
        v6 = 0;
        v5 = v4;
    }
    if (v5 == 1) {
        int32_t v10 = g6; // 0x1e219dc
        int32_t v11; // 0x1e219e0
        if (v10 == 0) {
            int16_t * v12 = GetEnvironmentStringsW(); // 0x1e219e0
            v11 = (int32_t)v12;
            g2 = v11;
            g6 = v11;
            if (v12 == NULL) {
                // 0x1e219e8
                g2 = 0;
                g3 = v3;
                g6 = v2;
                g8 = v1;
                g4 = result2;
                return 0;
            }
        } else {
            v11 = v10;
        }
        int16_t * lpWideCharStr = (int16_t *)v11; // 0x1e219f2
        int32_t v13; // 0x1e21a0c
        if (*lpWideCharStr != 0) {
            int32_t v14 = v11; // 0x1e219fa
            int32_t v15; // 0x1e21a03
            while (true) {
                int32_t v16 = v14 + 2; // 0x1e219fa
                if (*(int16_t *)v16 != 0) {
                    v14 = v16;
                    // continue -> 0x1e219fa
                    continue;
                }
                // 0x1e21a03
                v15 = v14 + 4;
                if (*(int16_t *)v15 == 0) {
                    // break -> 0x1e21a0c
                    break;
                }
                v14 = v15;
            }
            v13 = v15;
        } else {
            v13 = v11;
        }
        int32_t cchWideChar = (v13 - v11) / 2 + 1; // 0x1e21a15
        g8 = cchWideChar;
        int32_t cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL); // 0x1e21a20
        g2 = cbMultiByte;
        g3 = cbMultiByte;
        if (cbMultiByte != 0) {
            int32_t lpMultiByteStr = function_1e22670(cbMultiByte); // 0x1e21a2d
            g2 = lpMultiByteStr;
            int32_t result = lpMultiByteStr; // ebx
            if (lpMultiByteStr != 0) {
                int32_t lpWideCharStr2 = g6; // 0x1e21a42
                int32_t v17 = WideCharToMultiByte(0, 0, (int16_t *)lpWideCharStr2, g8, (char *)lpMultiByteStr, cbMultiByte, NULL, NULL); // 0x1e21a47
                g2 = v17;
                if (v17 == 0) {
                    // 0x1e21a51
                    g2 = function_1e22600(result);
                    result = 0;
                }
                // 0x1e21a5c
                FreeEnvironmentStringsW((int16_t *)g6);
                g2 = result;
                g3 = g6;
                g6 = 0;
                g8 = 0;
                g4 = lpWideCharStr2;
                return result;
            }
        }
        // 0x1e21a6d
        FreeEnvironmentStringsW((int16_t *)g6);
        g2 = 0;
        g3 = g6;
        g6 = 0;
        g8 = 0;
        g4 = v11;
        return 0;
    }
    if (v5 != 2) {
        // 0x1e21b02
        g2 = 0;
        g3 = v3;
        g6 = v2;
        g8 = v1;
        g4 = result2;
        return 0;
    }
    int32_t v18; // 0x1e21a8b
    if (v6 == 0) {
        char * v19 = GetEnvironmentStrings(); // 0x1e21a8b
        v18 = (int32_t)v19;
        g2 = v18;
        g4 = v18;
        if (v19 == NULL) {
            // 0x1e21a97
            g2 = 0;
            g3 = v3;
            g6 = v2;
            g8 = v1;
            g4 = result2;
            return 0;
        }
    } else {
        v18 = v6;
    }
    // 0x1e21aa1
    int32_t v20; // 0x1e21ab6
    if (*(char *)v18 != 0) {
        int32_t v21 = v18; // 0x1e21aa8
        while (true) {
            int32_t v22 = v21 + 1; // 0x1e21aa8
            if (*(char *)v22 != 0) {
                v21 = v22;
                // continue -> 0x1e21aa8
                continue;
            }
            int32_t v23 = v21 + 2; // 0x1e21aaf
            if (*(char *)v23 == 0) {
                v20 = v23;
                // break -> 0x1e21ab6
                break;
            }
            v21 = v23;
        }
    } else {
        v20 = v18;
    }
    int32_t v24 = v20 - v18 + 1; // 0x1e21ab8
    g3 = v24;
    int32_t v25 = function_1e22670(v24); // 0x1e21aba
    g2 = v25;
    if (v25 == 0) {
        // 0x1e21aca
        FreeEnvironmentStringsA((char *)g4);
        g2 = 0;
        g3 = g4;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return 0;
    }
    int32_t v26 = g3 / 4; // 0x1e21ae3
    g5 = v26;
    __asm_rep_movsd_memcpy((char *)v25, (char *)g4, v26);
    char * v27 = (char *)((g1 ? -4 : 4) * v26 + v25); // 0x1e21ae6
    int32_t v28 = g3 & 3; // 0x1e21aeb
    g5 = v28;
    __asm_rep_movsb_memcpy(v27, v27, v28);
    g5 = 0;
    FreeEnvironmentStringsA((char *)&g708);
    g2 = result2;
    g3 = (int32_t)(char *)g4;
    g6 = v3;
    g8 = v2;
    g4 = v1;
    return result2;
}

// Address range: 0x1e21b10 - 0x1e21d33
int32_t function_1e21b10(int32_t a1) {
    int32_t v1 = g4; // 0x1e21b13
    int32_t v2 = g8; // bp-32
    int32_t v3 = g6; // 0x1e21b15
    int32_t v4 = g3; // bp-40
    function_1e22490(25);
    g2 = a1;
    int32_t CodePage = function_1e21d40(a1); // 0x1e21b26
    g2 = CodePage;
    g3 = CodePage;
    if (g101 == CodePage) {
        // 0x1e21b38
        function_1e22500(25);
        g2 = 0;
        g3 = v4;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return 0;
    }
    if (CodePage == 0) {
        // 0x1e21b50
        g2 = function_1e21df0();
        function_1e22500(25);
        g2 = 0;
        g3 = v4;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return 0;
    }
    int32_t v5 = 0; // bp-24
    g2 = &g108;
    int32_t v6 = 0; // 0x1e21b81
    int32_t v7 = &g108; // 0x1e21b7e
    while (true) {
        // 0x1e21b76
        if (*(int32_t *)v7 == CodePage) {
            // break -> 0x1e21c19
            break;
        }
        int32_t v8 = v7 + 48; // 0x1e21b7e
        g2 = v8;
        int32_t v9 = v6 + 1; // 0x1e21b81
        v5 = v9;
        if (v8 >= (int32_t)&g112) {
            // 0x1e21b8c
            int32_t lpCPInfo; // bp-20
            int32_t v10 = &lpCPInfo; // 0x1e21b8c
            g2 = v10;
            g2 = GetCPInfo(CodePage, (struct _cpinfo *)&lpCPInfo);
            if (g106 == 0) {
                // 0x1e21d1c
                function_1e22500(25);
                g2 = -1;
                g3 = CodePage;
                g6 = v10;
                g8 = v4;
                g4 = v3;
                return -1;
            }
            // 0x1e21d03
            g2 = function_1e21df0();
            function_1e22500(25);
            g2 = 0;
            g3 = CodePage;
            g6 = v10;
            g8 = v4;
            g4 = v3;
            return 0;
        }
        v6 = v9;
        v7 = v8;
    }
    // 0x1e21c19
    g2 = 0;
    g5 = 64;
    __asm_rep_stosd_memset((char *)&g99, 0, 64);
    int32_t v11 = g1 ? -256 : 256; // 0x1e21c25
    *(char *)(v11 + (int32_t)&g99) = (char)g2;
    g5 = v5;
    int32_t v12 = g2; // 0x1e21c36
    while (true) {
        int32_t v13 = 6 * v5 + v12; // 0x1e21c36
        g5 = v13;
        int32_t v14 = 8 * v13; // 0x1e21c39
        int32_t v15 = v14 + (int32_t)&g111; // 0x1e21c39
        int32_t v16 = v15; // esi
        int32_t v17; // 0x1e21c76
        if (*(char *)v15 != 0) {
            unsigned char v18 = *(char *)(v14 + (int32_t)&g111 + 1); // 0x1e21c4548
            int32_t v19 = v13 & -256; // 0x1e21c4550
            g5 = (int32_t)v18 | v19;
            if (v18 != 0) {
                while (true) {
                    unsigned char v20 = *(char *)v15; // 0x1e21c50
                    int32_t v21 = v20; // 0x1e21c50
                    int32_t v22; // 0x1e21c67
                    if (v18 >= v20) {
                        unsigned char v23 = *(char *)(g2 + (int32_t)&g107); // 0x1e21c58
                        int32_t v24 = (int32_t)v23 | v19; // 0x1e21c58
                        g5 = v24;
                        char * v25 = (char *)(v21 + (int32_t)&g100); // 0x1e21c5e
                        *v25 = *v25 | (char)v24;
                        int32_t v26 = v21 + 1; // 0x1e21c64
                        v22 = v16;
                        while ((int32_t)*(char *)(v22 + 1) >= v26) {
                            // 0x1e21c5e
                            v21 = v26;
                            v25 = (char *)(v21 + (int32_t)&g100);
                            *v25 = *v25 | (char)g5;
                            v26 = v21 + 1;
                            v22 = v16;
                        }
                    } else {
                        v22 = v15;
                    }
                    int32_t v27 = v22 + 2; // 0x1e21c6e
                    v16 = v27;
                    if (*(char *)v27 == 0) {
                        // break -> 0x1e21c76
                        break;
                    }
                    unsigned char v28 = *(char *)(v22 + 3); // 0x1e21c45
                    int32_t v29 = g5 & -256; // 0x1e21c45
                    g5 = (int32_t)v28 | v29;
                    if (v28 == 0) {
                        // break -> 0x1e21c76
                        break;
                    }
                    v19 = v29;
                    v18 = v28;
                    v15 = v27;
                }
            }
            // 0x1e21c76
            v17 = g2;
        } else {
            v17 = v12;
        }
        int32_t v30 = v17 + 1; // 0x1e21c76
        g2 = v30;
        if (v30 >= 4) {
            // break -> 0x1e21c7c
            break;
        }
        // 0x1e21c76
        v12 = v30;
    }
    // 0x1e21c7c
    g101 = CodePage;
    g102 = function_1e21d90(CodePage);
    int32_t v31 = 16 * v5; // 0x1e21c99
    g2 = v31;
    int32_t v32 = 32 * v5; // 0x1e21c9c
    int32_t v33 = *(int32_t *)(v31 + (int32_t)&g110 + v32); // 0x1e21c9c
    int32_t v34 = v31 + (int32_t)&g109 + v32; // 0x1e21ca5
    g5 = v34;
    int32_t v35 = *(int32_t *)v34; // 0x1e21cac
    g2 = v35;
    int32_t v36 = *(int32_t *)(v34 + 8); // 0x1e21cae
    g5 = v36;
    g103 = v35;
    g104 = v33;
    g105 = v36;
    function_1e22500(25);
    g2 = 0;
    g3 = v4;
    g6 = v3;
    g8 = v2;
    g4 = v1;
    return 0;
}

// Address range: 0x1e21d40 - 0x1e21d8d
int32_t function_1e21d40(int32_t a1) {
    // 0x1e21d40
    g106 = 0;
    g2 = a1;
    if (a1 == -2) {
        // 0x1e21d53
        g106 = 1;
        int32_t result = GetOEMCP(); // 0x1e21d5d
        g2 = result;
        return result;
    }
    if (a1 == -3) {
        // 0x1e21d68
        g106 = 1;
        int32_t result2 = GetACP(); // 0x1e21d72
        g2 = result2;
        return result2;
    }
    int32_t result3; // 0x1e21d87
    if (a1 == -4) {
        // 0x1e21d7d
        g106 = 1;
        result3 = (int32_t)g130;
        g2 = result3;
    } else {
        result3 = a1;
    }
    // 0x1e21d8c
    return result3;
}

// Address range: 0x1e21d90 - 0x1e21dc8
int32_t function_1e21d90(int32_t a1) {
    // 0x1e21d90
    g2 = a1 - 932;
    g5 = 0;
    unsigned char v1 = *(char *)(a1 + (int32_t)&g12 - 932); // 0x1e21da0
    int32_t v2 = v1; // 0x1e21da0
    g5 = v2;
    g685 = v2;
    switch (v1) {
        case 0: {
            // 0x1e21db0
            g2 = 1041;
            return 1041;
        }
        case 1: {
            // 0x1e21db6
            g2 = 2052;
            return 2052;
        }
        case 2: {
            // 0x1e21dbc
            g2 = 1042;
            return 1042;
        }
        case 3: {
            // 0x1e21dc2
            g2 = 1028;
            return 1028;
        }
    }
    // 0x1e21dad
    g2 = 0;
    return 0;
}

// Address range: 0x1e21df0 - 0x1e21e1c
int32_t function_1e21df0(void) {
    // 0x1e21df0
    g2 = 0;
    g5 = 64;
    __asm_rep_stosd_memset((char *)&g99, 0, 64);
    *(char *)((g1 ? -256 : 256) + (int32_t)&g99) = 0;
    g103 = 0;
    g5 = &g103;
    g101 = 0;
    g102 = 0;
    g104 = 0;
    g105 = 0;
    return 0;
}

// Address range: 0x1e21e20 - 0x1e21e2b
int32_t function_1e21e20(void) {
    int32_t result = function_1e21b10(-3); // 0x1e21e22
    g2 = result;
    return result;
}

// Address range: 0x1e21e30 - 0x1e22010
int32_t function_1e21e30(int32_t a1) {
    int32_t v1 = function_1e22670(1152); // 0x1e21e3c
    g2 = v1;
    g8 = v1;
    int32_t v2; // 0x1e21e54
    if (v1 == 0) {
        // 0x1e21e4a
        g2 = function_1e211b0(27);
        v2 = g8;
    } else {
        v2 = v1;
    }
    // 0x1e21e54
    g2 = v2 + 1152;
    g677 = v2;
    g679 = false;
    if (v2 <= 0xfffffb7f) {
        // 0x1e21e6e
        g5 = 0;
        *(char *)(v2 + 4) = (char)0;
        int32_t v3 = g8; // 0x1e21e78
        g8 = v3 + 36;
        *(int32_t *)v3 = -1;
        *(char *)(g8 - 31) = (char)10;
        *(int32_t *)(g8 - 28) = g5;
        int32_t v4 = g677 + 1152; // 0x1e21e8d
        g2 = v4;
        while (v4 > g8) {
            // 0x1e21e75
            *(char *)(g8 + 4) = (char)g5;
            v3 = g8;
            g8 = v3 + 36;
            *(int32_t *)v3 = -1;
            *(char *)(g8 - 31) = (char)10;
            *(int32_t *)(g8 - 28) = g5;
            v4 = g677 + 1152;
            g2 = v4;
        }
    }
    // 0x1e21e96
    int32_t lpStartupInfo; // bp-68
    g2 = &lpStartupInfo;
    GetStartupInfoA((struct _STARTUPINFOA *)&lpStartupInfo);
    g2 = &g708;
    int32_t v5; // edi
    int16_t v6;
    int32_t v7; // 0x1e21f3e
    int32_t v8; // 0x1e21f5a14
    if (v6 != 0) {
        // 0x1e21ead
        int32_t v9;
        if (v9 != 0) {
            int32_t v10 = *(int32_t *)v9; // 0x1e21ebc
            g3 = v10;
            int32_t v11 = v9 + 4; // 0x1e21ebe
            g4 = v11;
            g8 = v10 + v11;
            int32_t v12; // 0x1e21ed2
            if (v10 >= 2048) {
                // 0x1e21ecd
                g3 = 2048;
                v12 = 2048;
            } else {
                v12 = v10;
            }
            // 0x1e21ed2
            int32_t v13; // 0x1e21f28
            if (g679 < ((v12 & 1) != 0)) {
                // 0x1e21eda
                g6 = &g678;
                while (true) {
                    // 0x1e21edf
                    *(int32_t *)(g9 - 4) = 1152;
                    int32_t v14 = function_1e22670((int32_t)&g708); // 0x1e21ee4
                    g2 = v14;
                    if (v14 == 0) {
                        // break -> 0x1e21f38
                        break;
                    }
                    // 0x1e21ef0
                    g5 = v14 + 1152;
                    *(int32_t *)g6 = v14;
                    int32_t v15 = g2; // 0x1e21eff
                    if (g5 > v15) {
                        // 0x1e21f03
                        g5 = 0;
                        *(char *)(v15 + 4) = (char)0;
                        int32_t v16 = g2; // 0x1e21f08
                        g2 = v16 + 36;
                        *(int32_t *)v16 = -1;
                        *(char *)(g2 - 31) = 10;
                        *(int32_t *)(g2 - 28) = g5;
                        while (*(int32_t *)g6 + 1152 > g2) {
                            // 0x1e21f05
                            *(char *)(g2 + 4) = (char)g5;
                            v16 = g2;
                            g2 = v16 + 36;
                            *(int32_t *)v16 = -1;
                            *(char *)(g2 - 31) = 10;
                            *(int32_t *)(g2 - 28) = g5;
                        }
                    }
                    // 0x1e21f25
                    g6 += 4;
                    v13 = g3;
                    if (g679 >= ((v13 & 1) != 0)) {
                        goto lab_0x1e21f38;
                    }
                }
            } else {
                v13 = v12;
              lab_0x1e21f38:
                // 0x1e21f38
                v5 = 0;
                if (v13 >= 1) {
                    // 0x1e21f3e
                    v8 = 0;
                    v7 = g8;
                    while (true) {
                      lab_0x1e21f3e:;
                        int32_t v17 = *(int32_t *)v7; // 0x1e21f3e
                        g5 = v17;
                        if (v17 == -1) {
                            goto lab_0x1e21f7e;
                        } else {
                            unsigned char v18 = *(char *)g4; // 0x1e21f45
                            int32_t v19 = v18; // 0x1e21f45
                            g2 = g2 & -256 | v19;
                            if ((v18 & 1) == 0) {
                                goto lab_0x1e21f7e;
                            } else {
                                // 0x1e21f4b
                                if ((v19 & 8) != 0) {
                                    goto lab_0x1e21f5a;
                                } else {
                                    // 0x1e21f4f
                                    *(int32_t *)(g9 - 4) = v17;
                                    int32_t v20 = GetFileType(&g708); // 0x1e21f50
                                    g2 = v20;
                                    if (v20 == 0) {
                                        goto lab_0x1e21f7e;
                                    } else {
                                        // 0x1e21f4f
                                        v7 = g8;
                                        v8 = v5;
                                        goto lab_0x1e21f5a;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1e21f87:;
    int32_t v21 = 0; // esi
    v5 = 0;
    int32_t v22 = 0; // 0x1e21f9d
    int32_t v23; // 0x1e21f91
    while (true) {
      lab_0x1e21f8b:
        // 0x1e21f8b
        v23 = g677 + v22;
        if (*(int32_t *)v23 != -1) {
            char * v24 = (char *)(v23 + 4); // 0x1e21fef
            *v24 = *v24 | -128;
            goto lab_0x1e21ff3;
        } else {
            // 0x1e21f98
            g2 = -10;
            *(char *)(v23 + 4) = -127;
            int32_t v25; // 0x1e21fb3
            if (v22 == 0) {
                // 0x1e21f98
                v25 = g2;
            } else {
                int32_t v26 = v5 == 1 ? -11 : -12; // 0x1e21fb0
                g2 = v26;
                v25 = v26;
            }
            // 0x1e21fb3
            *(int32_t *)(g9 - 4) = v25;
            int32_t * v27 = GetStdHandle((int32_t)&g708); // 0x1e21fb4
            int32_t v28 = (int32_t)v27; // 0x1e21fb4
            g2 = v28;
            if (v27 == (int32_t *)-1) {
                goto lab_0x1e21fe9;
            } else {
                // 0x1e21fc1
                *(int32_t *)(g9 - 4) = v28;
                int32_t v29 = GetFileType(&g708); // 0x1e21fc2
                g2 = v29;
                if (v29 == 0) {
                    goto lab_0x1e21fe9;
                } else {
                    // 0x1e21fcc
                    g2 = v29 & 255;
                    *(int32_t *)v23 = v28;
                    int32_t v30 = g2; // 0x1e21fd3
                    if (v30 != 2) {
                        // 0x1e21fde
                        if (v30 == 3) {
                            char * v31 = (char *)(v23 + 4); // 0x1e21fe3
                            *v31 = *v31 | 8;
                        }
                    } else {
                        char * v32 = (char *)(v23 + 4); // 0x1e21fd8
                        *v32 = *v32 | 64;
                    }
                    goto lab_0x1e21ff3;
                }
            }
        }
    }
  lab_0x1e21ffc:;
    int32_t v33 = g679; // 0x1e21ffc
    g2 = v33;
    *(int32_t *)(g9 - 4) = v33;
    int32_t result = SetHandleCount((int32_t)&g708); // 0x1e22002
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
  lab_0x1e21ff3:;
    int32_t v34 = v21 + 36; // 0x1e21ff3
    v21 = v34;
    v5++;
    if (v34 >= 108) {
        // break -> 0x1e21ffc
        goto lab_0x1e21ffc;
    }
    v22 = v34;
    goto lab_0x1e21f8b;
  lab_0x1e21fe9:;
    char * v35 = (char *)(v23 + 4); // 0x1e21fe9
    *v35 = *v35 | 64;
    goto lab_0x1e21ff3;
  lab_0x1e21f7e:;
    int32_t v36 = v5 + 1; // 0x1e21f7e
    v5 = v36;
    g4++;
    int32_t v37 = g8 + 4; // 0x1e21f80
    g8 = v37;
    if (((v36 & 1) != 0) >= ((g3 & 1) != 0)) {
        // break -> 0x1e21f87
        goto lab_0x1e21f87;
    }
    v8 = v36;
    v7 = v37;
    goto lab_0x1e21f3e;
  lab_0x1e21f5a:;
    int32_t v38 = v8 & 31; // 0x1e21f61
    int32_t v39 = v8 / 8 & -4; // 0x1e21f64
    g2 = v39;
    g5 = 4 * v38;
    int32_t v40 = *(int32_t *)(v39 + (int32_t)&g677); // 0x1e21f6a
    int32_t v41 = *(int32_t *)v7; // 0x1e21f70
    g2 = v41;
    int32_t v42 = v40 + 36 * v38; // 0x1e21f75
    g5 = v42;
    *(int32_t *)v42 = v41;
    *(char *)(g5 + 4) = *(char *)g4;
    goto lab_0x1e21f7e;
}

// Address range: 0x1e22010 - 0x1e22070
int32_t function_1e22010(void) {
    int32_t v1 = g8; // 0x1e22010
    int32_t v2 = v1; // bp-4
    g2 = function_1e22460(v1);
    int32_t v3 = TlsAlloc(); // 0x1e22016
    g2 = v3;
    g113 = v3;
    if (v3 == -1) {
        // 0x1e22026
        g2 = 0;
        g8 = v2;
        return 0;
    }
    int32_t v4 = function_1e22760(1, 116); // 0x1e2202e
    g2 = v4;
    if (v4 == 0) {
        // 0x1e2206c
        g2 = 0;
        g8 = *(int32_t *)(int32_t)&v2;
        return 0;
    }
    // 0x1e2203c
    g2 = g113;
    int32_t * lpTlsValue = (int32_t *)v4; // 0x1e22043
    bool v5 = TlsSetValue(g113, lpTlsValue); // 0x1e22043
    g2 = v5;
    if (v5) {
        // 0x1e2204d
        g2 = function_1e22070(v4);
        *lpTlsValue = GetCurrentThreadId();
        g2 = 1;
        *(int32_t *)(v4 + 4) = -1;
        g8 = g113;
        return g2;
    }
    // 0x1e2206c
    g2 = 0;
    g8 = *(int32_t *)g9;
    return 0;
}

// Address range: 0x1e22070 - 0x1e22083
int32_t function_1e22070(int32_t a1) {
    // 0x1e22070
    g2 = a1;
    *(int32_t *)(a1 + 80) = (int32_t)&g94;
    *(int32_t *)(g2 + 20) = 1;
    return g2;
}

// Address range: 0x1e22090 - 0x1e220ff
int32_t function_1e22090(void) {
    // 0x1e22090
    g8 = GetLastError();
    g2 = g113;
    int32_t v1 = g113; // bp-12
    int32_t * v2 = TlsGetValue(g113); // 0x1e220a0
    int32_t v3 = (int32_t)v2; // 0x1e220a0
    g2 = v3;
    g6 = v3;
    int32_t v4; // 0x1e220e9
    if (v2 != NULL) {
        goto lab_0x1e220f3;
    } else {
        int32_t lpTlsValue = function_1e22760(1, 116); // 0x1e220b0
        g2 = lpTlsValue;
        g6 = lpTlsValue;
        if (lpTlsValue == 0) {
            v4 = &v1;
            goto lab_0x1e220e9;
        } else {
            // 0x1e220be
            g2 = g113;
            bool v5 = TlsSetValue(g113, (int32_t *)lpTlsValue); // 0x1e220c5
            g2 = v5;
            if (!v5) {
                // 0x1e220be
                v4 = g9;
                goto lab_0x1e220e9;
            } else {
                // 0x1e220cf
                g2 = function_1e22070(g6);
                int32_t threadId = GetCurrentThreadId(); // 0x1e220d8
                g2 = threadId;
                *(int32_t *)g6 = threadId;
                *(int32_t *)(g6 + 4) = -1;
                goto lab_0x1e220f3;
            }
        }
    }
  lab_0x1e220f3:
    // 0x1e220f3
    *(int32_t *)(g9 - 4) = g8;
    SetLastError((int32_t)&g708);
    int32_t result = g6; // 0x1e220fa
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e220e9:
    // 0x1e220e9
    *(int32_t *)(v4 - 4) = 16;
    g2 = function_1e211b0((int32_t)&g708);
    goto lab_0x1e220f3;
}

// Address range: 0x1e22100 - 0x1e22139
int32_t function_1e22100(void) {
    int32_t * v1 = HeapCreate(0, 0x1000, 0); // 0x1e22109
    int32_t v2 = (int32_t)v1; // 0x1e22109
    g2 = v2;
    g676 = v2;
    if (v1 == NULL) {
        // 0x1e22118
        g2 = 0;
        return 0;
    }
    int32_t v3 = function_1e22810(); // 0x1e2211b
    g2 = v3;
    if (v3 != 0) {
        // 0x1e22133
        g2 = 1;
        return 1;
    }
    // 0x1e22124
    g2 = g676;
    HeapDestroy((int32_t *)g676);
    g2 = 0;
    return 0;
}

// Address range: 0x1e2213c - 0x1e22201
int32_t function_1e2213c(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e2213c
    int32_t v1; // 0x1e22190
    int32_t v2 = v1; // 0x1e2213c
    char * v3; // bp-4
    int32_t v4 = (int32_t)&v3; // 0x1e2213c
    int32_t v5; // edx
    int32_t v6 = (int32_t)((char)(v5 / 256) ^ *(char *)&g2); // 0x1e2213e
    *(char *)v2 = (char)(v6 ^ v2);
    v3 = (char *)v4;
    int32_t v7 = &a1; // 0x1e22147
    g2 = a1;
    int32_t result; // 0x1e22200
    if ((*(int32_t *)(a1 + 4) & 6) != 0) {
        // 0x1e221e4
        __local_unwind2();
        g2 = 1;
        result = 1;
    } else {
        g2 = v7;
        *(int32_t *)(a2 - 4) = v7;
        int32_t v8 = *(int32_t *)(a2 + 12); // 0x1e22171
        if (v8 != -1) {
            int32_t v9 = a2; // 0x1e221cb13
            int32_t v10 = *(int32_t *)(a2 + 8); // 0x1e2217f
            while (true) {
                // 0x1e2217c
                g5 = 3 * v8;
                int32_t v11; // 0x1e221cb
                if (*(int32_t *)(v10 + 4 + 12 * v8) != 0) {
                    int32_t * v12 = (int32_t *)(g9 - 4); // 0x1e22186
                    *v12 = v8;
                    int32_t * v13 = (int32_t *)(g9 - 8); // 0x1e22187
                    *v13 = v4;
                    int32_t v14 = *v13; // 0x1e2218f
                    v4 = v14;
                    v1 = *v12;
                    int32_t v15 = *(int32_t *)(v14 + 12); // 0x1e22191
                    int32_t v16 = g2; // 0x1e22194
                    if (v16 != 0) {
                        if (v16 < 0) {
                            // 0x1e221d6
                            g2 = 0;
                            result = 0;
                            return result;
                        }
                        int32_t v17 = *(int32_t *)(v15 + 8); // edi
                        *v12 = v15;
                        g2 = __global_unwind2();
                        v4 = v15 + 16;
                        *(int32_t *)g9 = v1;
                        *(int32_t *)(g9 - 4) = v15;
                        g2 = __local_unwind2();
                        g5 = 3 * v1;
                        *(int32_t *)(g9 + 4) = 1;
                        g2 = *(int32_t *)(v17 + 8 + 4 * g5);
                        g2 = __NLG_Notify();
                        int32_t v18 = *(int32_t *)(4 * g5 + v17); // 0x1e221c1
                        g2 = v18;
                        *(int32_t *)(v15 + 12) = v18;
                        v11 = v15;
                    } else {
                        v11 = v15;
                    }
                } else {
                    v1 = v8;
                    v11 = v9;
                }
                int32_t v19 = *(int32_t *)(v11 + 8); // 0x1e221cb
                g5 = 3 * v1;
                int32_t v20 = *(int32_t *)(v19 + 12 * v1); // 0x1e221d1
                if (v20 == -1) {
                    // break -> 0x1e221dd
                    break;
                }
                v9 = v11;
                v10 = v19;
                v8 = v20;
            }
        }
        // 0x1e221dd
        g2 = 1;
        result = 1;
    }
    return result;
    // 0x1e221f9
    return result;
}

