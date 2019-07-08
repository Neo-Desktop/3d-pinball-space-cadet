
// Address range: 0x1e230e0 - 0x1e231de
int32_t function_1e230e0(int32_t result, char * a2, uint32_t a3) {
    // 0x1e230e0
    g5 = a3;
    int32_t v1 = g6; // bp-4
    if (a3 == 0) {
        // 0x1e23163
        g2 = result;
        return result;
    }
    int32_t v2 = g8; // 0x1e230e9
    int32_t v3 = g4; // bp-12
    int32_t v4 = a3; // ebx
    int32_t v5 = (int32_t)a2; // 0x1e230ed
    int32_t v6 = v5; // esi
    int32_t v7 = result; // edi
    int32_t v8; // 0x1e23120
    int32_t v9; // 0x1e2317f
    int32_t v10; // 0x1e2310a
    int32_t v11; // 0x1e2314490
    int32_t v12; // 0x1e2314592
    int32_t v13; // 0x1e23169
    int32_t v14; // 0x1e231c937
    int32_t v15; // 0x1e2312828
    int32_t v16; // 0x1e2312829
    if ((v5 & 3) != 0) {
        int32_t v17 = result; // 0x1e23107
        int32_t v18 = g2; // 0x1e23104
        int32_t v19 = v5; // 0x1e23106
        while (true) {
            unsigned char v20 = *(char *)v19; // 0x1e23104
            g2 = (int32_t)v20 | v18 & -256;
            v6 = v19 + 1;
            *(char *)v17 = v20;
            int32_t v21 = v7 + 1; // 0x1e23109
            v7 = v21;
            v10 = g5 - 1;
            g5 = v10;
            if (v10 == 0) {
                // break -> 0x1e23132
                break;
            }
            int32_t v22 = g2; // 0x1e2310d
            if ((char)v22 == 0) {
                if ((v21 & 3) == 0) {
                    v14 = v21;
                    goto lab_0x1e23154;
                } else {
                    // 0x1e23142
                    *(char *)v21 = 0;
                    v11 = v7 + 1;
                    v7 = v11;
                    v12 = g5 - 1;
                    g5 = v12;
                    if (v12 == 0) {
                        goto lab_0x1e231d6;
                    } else {
                        goto lab_0x1e2314c;
                    }
                }
            }
            int32_t v23 = v6; // 0x1e23111
            if ((v23 & 3) == 0) {
                // 0x1e23119
                v4 = v10;
                g5 = v10 / 4;
                if (v10 >= 4) {
                    v13 = v21;
                    v9 = v23;
                    goto lab_0x1e23171;
                } else {
                    v16 = v21;
                    v8 = v10;
                    goto lab_0x1e23120;
                }
            }
            v17 = v21;
            v18 = v22;
            v19 = v23;
        }
        goto lab_0x1e23132;
    } else {
        // 0x1e230fd
        g5 = a3 / 4;
        if (a3 >= 4) {
            v13 = result;
            v9 = v5;
            goto lab_0x1e23171;
        } else {
            v15 = result;
            goto lab_0x1e23125;
        }
    }
  lab_0x1e23132:
    // 0x1e23132
    g2 = result;
    g4 = v3;
    g8 = v2;
    g6 = v1;
    return result;
  lab_0x1e23171:;
    int32_t v24; // 0x1e2316b
    while (true) {
        int32_t * v25 = (int32_t *)v9; // 0x1e23176
        int32_t v26 = *v25; // 0x1e23176
        int32_t v27 = v26 + 0x7efefeff ^ -1 - v26; // 0x1e2317d
        g2 = v27;
        uint32_t v28 = *v25; // 0x1e2317f
        g7 = v28;
        v6 = v9 + 4;
        if ((v27 & -0x7efeff00) != 0) {
            if ((char)v28 == 0) {
                // 0x1e231bb
                g7 = 0;
                *(int32_t *)v13 = 0;
                goto lab_0x1e231bf;
            }
            if ((v28 & 0xff00) == 0) {
                int32_t v29 = v28 & 255; // 0x1e231b1
                g7 = v29;
                *(int32_t *)v13 = v29;
                goto lab_0x1e231bf;
            }
            if ((v28 & 0xff0000) == 0) {
                int32_t v30 = v28 & 0xffff; // 0x1e231a7
                g7 = v30;
                *(int32_t *)v13 = v30;
                goto lab_0x1e231bf;
            }
            if (v28 < 0x1000000) {
                // 0x1e231a3
                *(int32_t *)v13 = v28;
                goto lab_0x1e231bf;
            }
        }
        // 0x1e23169
        *(int32_t *)v13 = v28;
        v24 = v7 + 4;
        v7 = v24;
        int32_t v31 = g5 - 1; // 0x1e2316e
        g5 = v31;
        if (v31 == 0) {
            // break -> 0x1e23120
            break;
        }
        // 0x1e23169
        v13 = v24;
        v9 = v6;
        // continue -> 0x1e23171
        continue;
    }
    // 0x1e23120
    v16 = v24;
    v8 = v4;
    goto lab_0x1e23120;
  lab_0x1e23125:;
    int32_t v48 = v15; // 0x1e23128
    int32_t v49 = g2; // 0x1e23125
    while (true) {
        int32_t v50 = v6; // 0x1e23125
        unsigned char v51 = *(char *)v50; // 0x1e23125
        g2 = (int32_t)v51 | v49 & -256;
        v6 = v50 + 1;
        *(char *)v48 = v51;
        int32_t v52 = v7 + 1; // 0x1e2312a
        v7 = v52;
        int32_t v53 = g2; // 0x1e2312b
        if ((char)v53 == 0) {
            // break -> 0x1e2315e
            break;
        }
        int32_t v54 = v4 - 1; // 0x1e2312f
        v4 = v54;
        if (v54 == 0) {
            goto lab_0x1e23132;
        }
        v48 = v52;
        v49 = v53;
    }
    goto lab_0x1e2315e;
  lab_0x1e23120:;
    int32_t v32 = v8 & 3; // 0x1e23120
    v4 = v32;
    if (v32 == 0) {
        goto lab_0x1e23132;
    } else {
        v15 = v16;
        goto lab_0x1e23125;
    }
  lab_0x1e2315e:;
    int32_t v33 = v4 - 1; // 0x1e2315e
    v4 = v33;
    if (v33 == 0) {
        // 0x1e23161
        g4 = v3;
        g8 = v2;
        // 0x1e23163
        g2 = result;
        g6 = v1;
        return result;
    }
    int32_t v34; // 0x1e2315d
    int32_t v35 = v34; // 0x1e2315b
    goto lab_0x1e2315b;
  lab_0x1e2315b:
    // 0x1e2315b
    *(char *)v35 = (char)g2;
    v34 = v7 + 1;
    v7 = v34;
    goto lab_0x1e2315e;
  lab_0x1e23154:
    // 0x1e23154
    v4 = v10;
    g5 = v10 / 4;
    int32_t v36; // 0x1e231c936
    if (v10 >= 4) {
        v36 = v14;
        goto lab_0x1e231c7;
    } else {
        v35 = v14;
        goto lab_0x1e2315b;
    }
  lab_0x1e231c7:
    // 0x1e231c7
    g2 = 0;
    *(int32_t *)v36 = 0;
    int32_t v37 = v7 + 4; // 0x1e231cb78
    v7 = v37;
    int32_t v38 = g5 - 1; // 0x1e231ce80
    g5 = v38;
    int32_t v39; // 0x1e231cb83
    int32_t v40; // 0x1e2315b39
    if (v38 != 0) {
        v39 = v37;
        goto lab_0x1e231c9;
    } else {
        v40 = v37;
        goto lab_0x1e231d1_2;
    }
  lab_0x1e231d6:
    // 0x1e231d6
    g2 = result;
    g4 = v3;
    g8 = v2;
    g6 = v1;
    return result;
  lab_0x1e2314c:
    if ((v11 & 3) != 0) {
        // 0x1e2314c
        *(char *)v11 = (char)g2;
        int32_t v41 = v7 + 1; // 0x1e23144
        v7 = v41;
        int32_t v42 = g5 - 1; // 0x1e23145
        g5 = v42;
        if (v42 == 0) {
            goto lab_0x1e231d6;
        } else {
            v12 = v42;
            v11 = v41;
            goto lab_0x1e2314c;
        }
    } else {
        v14 = v11;
        v10 = v12;
        goto lab_0x1e23154;
    }
  lab_0x1e231c9:
    // 0x1e231c9
    *(int32_t *)v39 = g2;
    int32_t v43 = v7 + 4; // 0x1e231cb
    v7 = v43;
    int32_t v44 = g5 - 1; // 0x1e231ce
    g5 = v44;
    if (v44 != 0) {
        v39 = v43;
        goto lab_0x1e231c9;
    } else {
        v40 = v43;
        goto lab_0x1e231d1_2;
    }
  lab_0x1e231d1_2:;
    int32_t v45 = v4 & 3; // 0x1e231d1
    v4 = v45;
    if (v45 != 0) {
        v35 = v40;
        goto lab_0x1e2315b;
    } else {
        goto lab_0x1e231d6;
    }
  lab_0x1e231bf:;
    int32_t v46 = v7 + 4; // 0x1e231bf
    v7 = v46;
    g2 = 0;
    int32_t v47 = g5 - 1; // 0x1e231c4
    g5 = v47;
    if (v47 == 0) {
        v40 = v46;
        goto lab_0x1e231d1_2;
    } else {
        v36 = v46;
        goto lab_0x1e231c7;
    }
}

// Address range: 0x1e231e0 - 0x1e232a7
int32_t function_1e231e0(void) {
    int32_t v1 = g675; // 0x1e231e0
    int32_t v2; // 0x1e2320b
    if (v1 != 0) {
        if (v1 < 20) {
            // 0x1e231ff
            g675 = 20;
            v2 = 20;
        } else {
            v2 = v1;
        }
    } else {
        // 0x1e231ea
        g675 = 512;
        v2 = 512;
    }
    // 0x1e23209
    g2 = v2;
    int32_t v3 = function_1e22760(v2, 4); // 0x1e23211
    g2 = v3;
    g673 = v3;
    if (v3 == 0) {
        // 0x1e23222
        g675 = 20;
        int32_t v4 = function_1e22760(20, 4); // 0x1e23230
        g2 = v4;
        g673 = v4;
        if (v4 == 0) {
            // 0x1e23241
            g2 = function_1e211b0(26);
        }
    }
    // 0x1e2324b
    g5 = (int32_t)&g140;
    g2 = 0;
    int32_t v5 = 0; // 0x1e23258
    g2 = v5 + 4;
    *(int32_t *)(g673 + v5) = (int32_t)&g140;
    int32_t v6 = g5 + 32; // 0x1e2325f
    g5 = v6;
    int32_t v7 = g2; // 0x1e23262
    while (v7 < 80) {
        // 0x1e23252
        v5 = v7;
        g2 = v5 + 4;
        *(int32_t *)(g673 + v5) = v6;
        v6 = g5 + 32;
        g5 = v6;
        v7 = g2;
    }
    int32_t v8 = 0; // edx
    int32_t v9 = &g141; // esi
    int32_t v10 = &g141; // 0x1e23293
    int32_t v11 = 0; // 0x1e2326e
    int32_t result; // 0x1e23287
    while (true) {
        int32_t v12 = v11 & 31; // 0x1e23275
        int32_t v13 = v11 / 8 & -4; // 0x1e23278
        g2 = v13;
        g5 = 4 * v12;
        int32_t v14 = *(int32_t *)(v13 + (int32_t)&g677); // 0x1e2327e
        g2 = v14;
        int32_t v15 = 36 * v12; // 0x1e23284
        g5 = v15;
        result = *(int32_t *)(v14 + v15);
        g2 = result;
        int32_t v16; // 0x1e23299
        int32_t v17; // 0x1e2329c
        if (result != -1 != result != 0) {
            // 0x1e23293
            *(int32_t *)v10 = -1;
            v17 = v8;
            v16 = v9;
        } else {
            v17 = v11;
            v16 = v10;
        }
        int32_t v18 = v16 + 32; // 0x1e23299
        v9 = v18;
        int32_t v19 = v17 + 1; // 0x1e2329c
        v8 = v19;
        if (v18 >= (int32_t)&g144) {
            // break -> 0x1e232a5
            break;
        }
        v10 = v18;
        v11 = v19;
    }
    // 0x1e232a5
    return result;
}

// Address range: 0x1e232b0 - 0x1e232c4
int32_t function_1e232b0(void) {
    int32_t result = function_1e23460(); // 0x1e232b0
    g2 = result;
    if (g91 == 0) {
        // 0x1e232c3
        return result;
    }
    int32_t result2 = function_1e23310(); // 0x1e232be
    g2 = result2;
    return result2;
}

// Address range: 0x1e232d0 - 0x1e2330e
int32_t function_1e232d0(int32_t a1) {
    // 0x1e232d0
    function_1e22490(9);
    g2 = g495;
    if (g495 == 0) {
        // 0x1e23301
        function_1e22500(9);
        g2 = 0;
        return 0;
    }
    // 0x1e232e3
    g5 = a1;
    function_1e22500(9);
    g2 = 1;
    return 1;
}

// Address range: 0x1e23310 - 0x1e233a8
int32_t function_1e23310(void) {
    // 0x1e23310
    g4 = 0;
    int32_t v1 = g3; // bp-16
    g3 = 3;
    g2 = function_1e22490(2);
    int32_t result; // 0x1e233a1
    if (g675 <= g3) {
        // 0x1e23397
        *(int32_t *)((int32_t)&v1 - 4) = 2;
        function_1e22500((int32_t)&g708);
        result = g4;
        g2 = result;
        return result;
    }
    // 0x1e2332d
    g6 = 12;
    g8 = *(int32_t *)0x1e4b0cc;
    int32_t v2 = 12; // 0x1e2333d
    while (true) {
        // 0x1e23338
        g2 = g673;
        int32_t v3 = *(int32_t *)(g673 + v2); // 0x1e2333d
        g2 = v3;
        int32_t v4; // 0x1e2338b
        if (v3 != 0) {
            // 0x1e23344
            if ((*(char *)(v3 + 12) & -125) != 0) {
                // 0x1e2334a
                *(int32_t *)(g9 - 4) = v3;
                int32_t v5 = function_1e23540((int32_t)&g708); // 0x1e2334b
                g2 = v5;
                if (v5 != -1) {
                    // 0x1e23358
                    g4++;
                }
            }
            int32_t v6 = g6; // 0x1e23359
            if (v6 >= 80) {
                // 0x1e2335e
                g2 = g673;
                int32_t v7 = *(int32_t *)(g673 + v6) + 32; // 0x1e23366
                g2 = v7;
                *(int32_t *)(g9 - 4) = v7;
                DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
                g2 = &g708;
                g5 = g673;
                *(int32_t *)(g9 - 4) = *(int32_t *)(g6 + g673);
                g2 = function_1e22600((int32_t)&g708);
                g5 = g673;
                *(int32_t *)(g6 + g673) = 0;
                v4 = g6;
            } else {
                v4 = v6;
            }
        } else {
            v4 = v2;
        }
        int32_t v8 = v4 + 4; // 0x1e2338b
        g6 = v8;
        int32_t v9 = g3 + 1; // 0x1e2338e
        g3 = v9;
        if (v9 >= g675) {
            // break -> 0x1e23397
            break;
        }
        v2 = v8;
    }
    // 0x1e23397
    *(int32_t *)(g9 - 4) = 2;
    function_1e22500((int32_t)&g708);
    result = g4;
    g2 = result;
    return result;
}

// Address range: 0x1e233b0 - 0x1e233ec
int32_t function_1e233b0(int32_t a1) {
    int32_t v1 = g8; // 0x1e233b0
    g8 = a1;
    int32_t v2 = function_1e233f0(a1, v1); // 0x1e233b6
    g2 = v2;
    if (v2 != 0) {
        // 0x1e233c2
        g2 = -1;
        g8 = v1;
        return -1;
    }
    int32_t v3 = g8; // 0x1e233c9
    if ((*(char *)(v3 + 13) & 64) == 0) {
        // 0x1e233e8
        g2 = 0;
        g8 = v1;
        return 0;
    }
    int32_t v4 = *(int32_t *)(v3 + 16); // 0x1e233cf
    g2 = v4;
    int32_t v5 = function_1e235e0(v4); // 0x1e233d3
    g8 = v1;
    int32_t result = v5 != 0; // 0x1e233e4
    g2 = result;
    return result;
}

// Address range: 0x1e233f0 - 0x1e23454
int32_t function_1e233f0(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e233f1
    int32_t v2 = g6; // 0x1e233f2
    g8 = 0;
    g6 = a1;
    int32_t v3 = *(int32_t *)(a1 + 12); // 0x1e233f9
    g2 = v3;
    unsigned char v4 = (char)v3 & 3; // 0x1e233fe
    g5 = (int32_t)v4 | v3 & -256;
    if (v4 == 2) {
        if ((v3 & 264) != 0) {
            int32_t v5 = *(int32_t *)(a1 + 8); // 0x1e2340d
            g2 = v5;
            uint32_t v6 = *(int32_t *)a1 - v5; // 0x1e23412
            if (v6 >= 1) {
                int32_t v7 = *(int32_t *)(a1 + 16); // 0x1e2341a
                g2 = v7;
                int32_t v8 = function_1e23690(v7, v5, v6); // 0x1e2341e
                g2 = v8;
                int32_t * v9 = (int32_t *)(g6 + 12); // 0x1e23439
                int32_t v10 = *v9; // 0x1e23439
                if (v8 != v6) {
                    // 0x1e23439
                    *v9 = v10 | 32;
                    g8 = -1;
                } else {
                    // 0x1e2342a
                    g2 = v10;
                    if ((char)v10 <= 255) {
                        int32_t v11 = v10 & -3; // 0x1e23431
                        g2 = v11;
                        *v9 = v11;
                    }
                }
            }
        }
    }
    // 0x1e23442
    *(int32_t *)g6 = *(int32_t *)(g6 + 8);
    g2 = g8;
    *(int32_t *)(g6 + 4) = 0;
    g6 = v2;
    g8 = v1;
    return g2;
}

// Address range: 0x1e23460 - 0x1e2346b
int32_t function_1e23460(void) {
    int32_t result = function_1e23470(1); // 0x1e23462
    g2 = result;
    return result;
}

// Address range: 0x1e23470 - 0x1e2353b
int32_t function_1e23470(int32_t a1) {
    // 0x1e23470
    g4 = 0;
    int32_t v1 = g3; // bp-20
    int32_t v2 = &v1; // 0x1e23478
    g6 = 0;
    g2 = function_1e22490(2);
    int32_t v3; // 0x1e2351e
    if (g675 > g4) {
        // 0x1e23495
        g3 = 0;
        g8 = a1;
        int32_t v4 = g675; // 0x1e235106
        int32_t v5 = v2; // 0x1e234ad
        int32_t v6 = 0; // 0x1e234a0
        while (true) {
            // 0x1e2349b
            g2 = g673;
            int32_t v7 = *(int32_t *)(g673 + v6); // 0x1e234a0
            g2 = v7;
            int32_t v8; // 0x1e2350c
            int32_t v9; // 0x1e234ad2
            int32_t v10; // 0x1e23510
            if (v7 != 0) {
                // 0x1e234a7
                if ((*(char *)(v7 + 12) & -125) != 0) {
                    // 0x1e234ad
                    *(int32_t *)(v5 - 4) = v7;
                    *(int32_t *)(v5 - 8) = g6;
                    function_1e22560((int32_t)&g708, (int32_t)&g708);
                    int32_t v11 = g9 + 8; // 0x1e234b4
                    g2 = g673;
                    int32_t v12 = *(int32_t *)(g3 + g673); // 0x1e234bc
                    g5 = v12;
                    int32_t v13 = *(int32_t *)(v12 + 12); // 0x1e234bf
                    g2 = v13;
                    int32_t v14; // 0x1e23502
                    if ((v13 & 131) != 0) {
                        int32_t v15 = g8; // 0x1e234c6
                        if (v15 != 1) {
                            if (v15 == 0) {
                                if ((v13 & 2) != 0) {
                                    // 0x1e234e4
                                    *(int32_t *)(g9 + 4) = v12;
                                    int32_t v16 = function_1e233b0((int32_t)&g708); // 0x1e234e5
                                    g2 = v16;
                                    if (v16 == -1) {
                                        // 0x1e234f2
                                        *(int32_t *)(g9 + 20) = -1;
                                        v14 = g9;
                                    } else {
                                        v14 = g9 + 4;
                                    }
                                } else {
                                    v14 = v11;
                                }
                            } else {
                                v14 = v11;
                            }
                        } else {
                            // 0x1e234cb
                            *(int32_t *)(g9 + 4) = v12;
                            int32_t v17 = function_1e233b0((int32_t)&g708); // 0x1e234cc
                            g2 = v17;
                            int32_t v18 = g9 + 4; // 0x1e234d1
                            if (v17 != -1) {
                                // 0x1e234d9
                                g4++;
                                v14 = v18;
                            } else {
                                v14 = v18;
                            }
                        }
                    } else {
                        v14 = v11;
                    }
                    // 0x1e234fa
                    g2 = g673;
                    int32_t v19 = *(int32_t *)(g3 + g673); // 0x1e234ff
                    g5 = v19;
                    *(int32_t *)(v14 - 4) = v19;
                    *(int32_t *)(v14 - 8) = g6;
                    g2 = function_1e225d0((int32_t)&g708, (int32_t)&g708);
                    v10 = g675;
                    v8 = g3;
                    v9 = g9 + 8;
                } else {
                    v10 = v4;
                    v8 = v6;
                    v9 = v5;
                }
            } else {
                v10 = v4;
                v8 = v6;
                v9 = v5;
            }
            int32_t v20 = v8 + 4; // 0x1e2350c
            g3 = v20;
            int32_t v21 = g6 + 1; // 0x1e2350f
            g6 = v21;
            if (v21 >= v10) {
                v3 = v9;
                // break -> 0x1e2351e
                break;
            }
            v4 = v10;
            v5 = v9;
            v6 = v20;
        }
    } else {
        // 0x1e2351a
        g8 = a1;
        v3 = v2;
    }
    // 0x1e2351e
    *(int32_t *)(v3 - 4) = 2;
    function_1e22500((int32_t)&g708);
    g2 = g4;
    int32_t result; // 0x1e2352f
    if (g8 != 1) {
        // 0x1e2352f
        result = *(int32_t *)(g9 + 20);
        g2 = result;
    } else {
        result = g4;
    }
    // 0x1e23533
    g3 = *(int32_t *)(g9 + 4);
    g6 = *(int32_t *)(g9 + 8);
    g8 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e23540 - 0x1e2357f
int32_t function_1e23540(int32_t a1) {
    int32_t v1 = g8; // 0x1e23540
    int32_t v2 = g6; // 0x1e23541
    g6 = -1;
    g8 = a1;
    int32_t v3 = a1 + 12; // 0x1e2354b
    if ((*(char *)v3 & 64) != 0) {
        // 0x1e23551
        *(int32_t *)v3 = 0;
        int32_t result = g6; // 0x1e23558
        g2 = result;
        g6 = v2;
        g8 = v1;
        return result;
    }
    // 0x1e2355d
    g2 = function_1e22520(a1, v2, v1);
    int32_t result2 = function_1e23580(g8); // 0x1e23567
    g2 = result2;
    function_1e22590(g8);
    g2 = result2;
    g6 = v2;
    g8 = v1;
    return result2;
}

// Address range: 0x1e23580 - 0x1e235df
int32_t function_1e23580(int32_t a1) {
    int32_t v1 = g8; // 0x1e23580
    int32_t v2 = g6; // 0x1e23581
    g6 = -1;
    g8 = a1;
    if ((*(char *)(a1 + 12) & -125) != 0) {
        int32_t v3 = function_1e233f0(a1, v2); // 0x1e23592
        g2 = v3;
        g6 = v3;
        g2 = function_1e23a10(g8);
        int32_t v4 = *(int32_t *)(g8 + 16); // 0x1e235a5
        g2 = v4;
        int32_t v5 = function_1e23910(v4); // 0x1e235a9
        g2 = v5;
        if (v5 >= 0) {
            int32_t v6 = *(int32_t *)(g8 + 28); // 0x1e235bc
            g2 = v6;
            if (v6 != 0) {
                // 0x1e235c3
                g2 = function_1e22600(v6);
                *(int32_t *)(g8 + 28) = 0;
            }
        } else {
            // 0x1e235b5
            g6 = -1;
        }
    }
    // 0x1e235d3
    *(int32_t *)(g8 + 12) = 0;
    g2 = g6;
    g8 = v1;
    return g6;
}

// Address range: 0x1e235e0 - 0x1e23682
int32_t function_1e235e0(uint32_t a1) {
    int32_t v1 = g4; // 0x1e235e0
    int32_t v2 = g6; // 0x1e235e6
    if ((int32_t)g679 <= a1) {
        goto lab_0x1e2366e;
    } else {
        int32_t v3 = a1 & 31; // 0x1e235ff
        g2 = v3;
        int32_t v4 = *(int32_t *)((a1 / 8 & -4) + (int32_t)&g677); // 0x1e23602
        g5 = v4;
        g2 = 4 * v3;
        int32_t v5 = 36 * v3; // 0x1e23607
        g6 = v5;
        if ((*(char *)(v5 + 4 + v4) & 1) == 0) {
            goto lab_0x1e2366e;
        } else {
            // 0x1e23611
            g2 = function_1e23dd0(a1);
            int32_t v6 = *(int32_t *)g4; // 0x1e2361a
            g2 = v6;
            if ((*(char *)(v6 + 4 + g6) & 1) == 0) {
                goto lab_0x1e2364f;
            } else {
                // 0x1e23623
                g6 = 0;
                int32_t hFile = function_1e23d80(g8); // 0x1e23629
                g2 = hFile;
                bool v7 = FlushFileBuffers((int32_t *)hFile); // 0x1e23632
                g2 = v7;
                int32_t v8; // 0x1e23644
                if (v7) {
                    // 0x1e23644
                    v8 = g6;
                } else {
                    int32_t errorCode = GetLastError(); // 0x1e2363c
                    g2 = errorCode;
                    g6 = errorCode;
                    v8 = errorCode;
                }
                if (v8 == 0) {
                    goto lab_0x1e2365f;
                } else {
                    int32_t v9 = function_1e23ae0(); // 0x1e23648
                    g2 = v9;
                    *(int32_t *)v9 = g6;
                    goto lab_0x1e2364f;
                }
            }
        }
    }
  lab_0x1e2366e:;
    int32_t v10 = function_1e23ad0(); // 0x1e2366e
    g6 = v2;
    *(int32_t *)v10 = 9;
    g2 = -1;
    g4 = v1;
    return -1;
  lab_0x1e2364f:
    // 0x1e2364f
    g6 = -1;
    int32_t v11 = function_1e23ad0(); // 0x1e23654
    g2 = v11;
    *(int32_t *)v11 = 9;
    goto lab_0x1e2365f;
  lab_0x1e2365f:
    // 0x1e2365f
    *(int32_t *)(g9 - 4) = g8;
    function_1e23e40((int32_t)&g708);
    int32_t result = g6; // 0x1e23668
    g2 = result;
    g6 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e23690 - 0x1e23708
int32_t function_1e23690(uint32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g8; // 0x1e23690
    int32_t v2 = g6; // bp-8
    if ((int32_t)g679 > a1) {
        int32_t v3 = a1 & 31; // 0x1e236a5
        int32_t v4 = a1 / 8 & -4; // 0x1e236a8
        g2 = v4;
        g5 = 4 * v3;
        int32_t v5 = *(int32_t *)(v4 + (int32_t)&g677); // 0x1e236ae
        g7 = v5;
        int32_t v6 = 36 * v3; // 0x1e236b4
        g2 = v6;
        if ((*(char *)(v6 + 4 + v5) & 1) != 0) {
            // 0x1e236be
            function_1e23dd0(a1);
            g2 = a3;
            g5 = a2;
            int32_t result = function_1e23710(g8, a2, a3); // 0x1e236d2
            g2 = result;
            function_1e23e40(g8);
            g2 = result;
            g6 = v2;
            g8 = v1;
            return result;
        }
    }
    int32_t v7 = function_1e23ad0(); // 0x1e236ea
    g2 = v7;
    *(int32_t *)v7 = 9;
    int32_t v8 = function_1e23ae0(); // 0x1e236f5
    g6 = v2;
    *(int32_t *)v8 = 0;
    g2 = -1;
    g8 = v1;
    return -1;
}

// Address range: 0x1e23710 - 0x1e2390b
int32_t function_1e23710(int32_t a1, int32_t lpBuffer, int32_t a3) {
    int32_t v1 = g3; // 0x1e23719
    int32_t v2 = v1; // bp-1064
    g6 = 0;
    g3 = a3;
    if (a3 == 0) {
        // 0x1e2372b
        g2 = 0;
        g3 = v1;
        return 0;
    }
    int32_t v3 = (a1 / 8 & -4) + (int32_t)&g677; // 0x1e23747
    int32_t v4 = a1 & 31; // 0x1e23752
    g2 = 4 * v4;
    int32_t v5 = 36 * v4; // 0x1e2375c
    g5 = v5;
    int32_t * v6 = (int32_t *)v3; // 0x1e2375f
    int32_t v7 = *v6; // 0x1e2375f
    g2 = v7;
    if ((*(char *)(v5 + 4 + v7) & 32) != 0) {
        // 0x1e2376c
        g2 = function_1e23ef0(a1, 0, 2);
    }
    // 0x1e23779
    g2 = v3;
    g5 = v5;
    int32_t v8 = *v6 + v5; // 0x1e23781
    g5 = v8;
    if (*(char *)(v8 + 4) > -1) {
        // 0x1e23815
        int32_t lpNumberOfBytesWritten; // bp-1044
        g2 = &lpNumberOfBytesWritten;
        int32_t hFile = *(int32_t *)v8; // 0x1e23824
        g5 = hFile;
        bool v9 = WriteFile((int32_t *)hFile, (int32_t *)lpBuffer, g3, &lpNumberOfBytesWritten, NULL); // 0x1e23828
        g2 = v9;
        if (!v9) {
          lab_0x1e23844:;
            int32_t errorCode = GetLastError(); // 0x1e23844
            g2 = errorCode;
            *(int32_t *)(g9 + 16) = errorCode;
        } else {
            // 0x1e23832
            g2 = v2;
        }
    } else {
        int32_t v10 = &v2; // 0x1e237ad
        while (true) {
            // 0x1e2379c
            g2 = lpBuffer;
            int32_t v11 = lpBuffer - *(int32_t *)(v10 + 1072); // 0x1e2379e
            g2 = v11;
            if (v11 >= g3) {
                // break -> 0x1e2384e
                break;
            }
            int32_t v12 = v10 + 36; // 0x1e237ad
            int32_t v13 = v10; // 0x1e237b3
            int32_t v14 = lpBuffer; // 0x1e237c0
            int32_t v15; // 0x1e237dc
            while (true) {
                // 0x1e237b1
                g2 = v14;
                int32_t v16 = v14 - *(int32_t *)(v13 + 1072); // 0x1e237b3
                g2 = v16;
                if (v16 >= g3) {
                    v15 = v13;
                    // break -> 0x1e237dc
                    break;
                }
                unsigned char v17 = *(char *)v14; // 0x1e237be
                int32_t v18 = (int32_t)v17 | v16 & -256; // 0x1e237be
                g2 = v18;
                lpBuffer = v14 + 1;
                int32_t v19; // 0x1e237ca
                int32_t v20; // 0x1e237c9
                if (v17 == 10) {
                    // 0x1e237c5
                    *(char *)v12 = 13;
                    g6++;
                    v20 = v12 + 1;
                    v12 = v20;
                    v19 = g2;
                } else {
                    v20 = v12;
                    v19 = v18;
                }
                // 0x1e237ca
                *(char *)v20 = (char)v19;
                int32_t v21 = v12 + 1; // 0x1e237cc
                v12 = v21;
                int32_t v22 = g9 + 36; // 0x1e237cf
                g5 = v22;
                int32_t v23 = v21 - v22; // 0x1e237d3
                g2 = v23;
                if (v23 >= 1024) {
                    v15 = g9;
                    // break -> 0x1e237dc
                    break;
                }
                // 0x1e237ca
                v12 = v21;
                v13 = g9;
                v14 = lpBuffer;
            }
            int32_t v24 = v15 + 36; // 0x1e237dc
            g2 = v24;
            *(int32_t *)(v15 - 4) = 0;
            g8 = v12 - g2;
            g5 = v24;
            int32_t v25 = v15 + 20; // 0x1e237e8
            g2 = v25;
            *(int32_t *)(v15 - 8) = v25;
            *(int32_t *)(v15 - 12) = g8;
            *(int32_t *)(v15 - 16) = g5;
            int32_t v26 = *(int32_t *)*(int32_t *)(v15 + 24); // 0x1e237f3
            g2 = v26;
            int32_t v27 = *(int32_t *)(v15 + 28); // 0x1e237f5
            g5 = v27;
            *(int32_t *)(v15 - 20) = *(int32_t *)(v27 + v26);
            bool v28 = WriteFile(&g708, &g708, (int32_t)&g708, &g708, (struct _OVERLAPPED *)&g708); // 0x1e237fd
            g2 = v28;
            if (!v28) {
                goto lab_0x1e23844;
            }
            int32_t v29 = *(int32_t *)(g9 + 20); // 0x1e23807
            g2 = v29;
            int32_t * v30 = (int32_t *)(g9 + 32); // 0x1e2380b
            *v30 = *v30 + v29;
            if (g2 < g8) {
                // break -> 0x1e2384e
                break;
            }
            // 0x1e23807
            v10 = g9;
        }
    }
    int32_t v31 = *(int32_t *)(g9 + 32); // 0x1e2384e
    if (v31 != 0) {
        // 0x1e238fa
        g2 = v31;
        g3 = *(int32_t *)g9;
        int32_t result = v31 - g6; // 0x1e238ff
        g2 = result;
        g8 = *(int32_t *)(g9 + 8);
        g4 = *(int32_t *)(g9 + 12);
        return result;
    }
    int32_t v32 = *(int32_t *)(g9 + 16); // 0x1e23859
    if (v32 != 0) {
        if (v32 != 5) {
            // 0x1e2388d
            g5 = v32;
            *(int32_t *)(g9 - 4) = v32;
            function_1e23a50((int32_t)&g708);
            g2 = -1;
            g3 = *(int32_t *)(g9 + 4);
            g8 = *(int32_t *)(g9 + 12);
            g4 = *(int32_t *)(g9 + 16);
            return -1;
        }
        int32_t v33 = function_1e23ad0(); // 0x1e23867
        g2 = v33;
        *(int32_t *)v33 = 9;
        int32_t v34 = function_1e23ae0(); // 0x1e23872
        g2 = v34;
        int32_t v35 = *(int32_t *)(g9 + 16); // 0x1e23877
        g5 = v35;
        g3 = *(int32_t *)g9;
        *(int32_t *)v34 = v35;
        g2 = -1;
        g8 = *(int32_t *)g9;
        g4 = *(int32_t *)(g9 + 4);
        return -1;
    }
    int32_t v36 = *(int32_t *)(g9 + 24); // 0x1e238aa
    g2 = v36;
    int32_t v37 = *(int32_t *)(g9 + 28); // 0x1e238ae
    g5 = v37;
    if ((*(char *)(v37 + 4 + *(int32_t *)v36) & 64) != 0) {
        int32_t v38 = *(int32_t *)(g9 + 1072); // 0x1e238bb
        g2 = v38;
        if (*(char *)v38 == 26) {
            // 0x1e238c7
            g2 = 0;
            g3 = *(int32_t *)g9;
            g8 = *(int32_t *)(g9 + 8);
            g4 = *(int32_t *)(g9 + 12);
            return 0;
        }
    }
    int32_t v39 = function_1e23ad0(); // 0x1e238d4
    g2 = v39;
    *(int32_t *)v39 = 28;
    int32_t v40 = function_1e23ae0(); // 0x1e238df
    g2 = v40;
    g3 = *(int32_t *)g9;
    *(int32_t *)v40 = 0;
    g2 = -1;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return -1;
}

// Address range: 0x1e23910 - 0x1e2397e
int32_t function_1e23910(uint32_t a1) {
    int32_t v1 = g8; // 0x1e23910
    int32_t v2 = g6; // bp-8
    if ((int32_t)g679 > a1) {
        int32_t v3 = a1 & 31; // 0x1e23925
        int32_t v4 = a1 / 8 & -4; // 0x1e23928
        g2 = v4;
        g5 = 4 * v3;
        int32_t v5 = *(int32_t *)(v4 + (int32_t)&g677); // 0x1e2392e
        g7 = v5;
        int32_t v6 = 36 * v3; // 0x1e23934
        g2 = v6;
        if ((*(char *)(v6 + 4 + v5) & 1) != 0) {
            // 0x1e2393e
            g2 = function_1e23dd0(a1);
            int32_t result = function_1e23980(g8); // 0x1e23948
            g2 = result;
            function_1e23e40(g8);
            g2 = result;
            g6 = v2;
            g8 = v1;
            return result;
        }
    }
    int32_t v7 = function_1e23ad0(); // 0x1e23960
    g2 = v7;
    *(int32_t *)v7 = 9;
    int32_t v8 = function_1e23ae0(); // 0x1e2396b
    g6 = v2;
    *(int32_t *)v8 = 0;
    g2 = -1;
    g8 = v1;
    return -1;
}

// Address range: 0x1e23980 - 0x1e23a09
int32_t function_1e23980(int32_t a1) {
    // 0x1e23980
    g8 = a1;
    int32_t v1; // 0x1e239aa
    if (a1 == 1) {
        goto lab_0x1e23990;
    } else {
        if (a1 != 2) {
            v1 = a1;
            goto lab_0x1e239aa;
        } else {
            goto lab_0x1e23990;
        }
    }
  lab_0x1e23990:;
    int32_t v2 = function_1e23d80(2); // 0x1e23992
    g2 = v2;
    g6 = v2;
    int32_t v3 = function_1e23d80(1); // 0x1e2399e
    g2 = v3;
    int32_t v4;
    if (g6 == v3) {
        v4 = 0;
        goto lab_0x1e239ca;
    } else {
        // 0x1e23990
        v1 = g8;
        goto lab_0x1e239aa;
    }
  lab_0x1e239ca:
    // 0x1e239ca
    g6 = v4;
    *(int32_t *)(g9 - 4) = g8;
    g2 = function_1e23ce0((int32_t)&g708);
    int32_t v5 = g6; // 0x1e239d3
    if (v5 == 0) {
        int32_t v6 = g8 / 8 & -4; // 0x1e239f3
        g2 = v6;
        int32_t v7 = *(int32_t *)(v6 + (int32_t)&g677); // 0x1e239f7
        g5 = v7;
        int32_t v8 = 36 * (g8 & 31); // 0x1e239fd
        g2 = v8;
        g8 = *(int32_t *)(g9 + 8);
        *(char *)(v8 + 4 + v7) = 0;
        g2 = 0;
        return 0;
    }
    // 0x1e239d7
    *(int32_t *)g9 = v5;
    function_1e23a50((int32_t)&g708);
    g2 = -1;
    g8 = *(int32_t *)(g9 + 8);
    return -1;
  lab_0x1e239aa:;
    int32_t hObject = function_1e23d80(v1); // 0x1e239ab
    g2 = hObject;
    bool handleClosed = CloseHandle((int32_t *)hObject); // 0x1e239b4
    g2 = handleClosed;
    if (handleClosed) {
        v4 = 0;
        goto lab_0x1e239ca;
    } else {
        int32_t errorCode = GetLastError(); // 0x1e239be
        g2 = errorCode;
        v4 = errorCode;
        goto lab_0x1e239ca;
    }
}

// Address range: 0x1e23a10 - 0x1e23a49
int32_t function_1e23a10(int32_t a1) {
    int32_t v1 = g8; // 0x1e23a10
    g8 = a1;
    int32_t result = *(int32_t *)(a1 + 12); // 0x1e23a15
    g2 = result;
    if ((result & 131) == 0) {
        // 0x1e23a47
        g8 = v1;
        return result;
    }
    int32_t result2; // 0x1e23a48
    if ((result & 8) != 0) {
        int32_t v2 = *(int32_t *)(a1 + 8); // 0x1e23a20
        g2 = v2;
        g2 = function_1e22600(v2);
        *(int32_t *)g8 = 0;
        int32_t * v3 = (int32_t *)(g8 + 12); // 0x1e23a32
        *v3 = *v3 & -1033;
        *(int32_t *)(g8 + 8) = 0;
        *(int32_t *)(g8 + 4) = 0;
        result2 = g2;
    } else {
        result2 = result;
    }
    // 0x1e23a47
    g8 = v1;
    return result2;
}

// Address range: 0x1e23a50 - 0x1e23ac3
int32_t function_1e23a50(int32_t a1) {
    int32_t v1 = function_1e23ae0(); // 0x1e23a51
    g5 = a1;
    int32_t v2 = 0; // esi
    *(int32_t *)v1 = a1;
    g2 = &g148;
    uint32_t v3 = g5;
    int32_t v4 = &g148; // 0x1e23a67
    while (true) {
        // 0x1e23a63
        if (*(int32_t *)v4 == v3) {
            // break -> 0x1e23a89
            break;
        }
        int32_t v5 = v4 + 8; // 0x1e23a67
        g2 = v5;
        v2++;
        if (v5 >= (int32_t)&g150) {
            if (v3 < 19) {
                goto lab_0x1e23a99;
            } else {
                if (v3 < 37) {
                    int32_t v6 = function_1e23ad0(); // 0x1e23a7c
                    g2 = v6;
                    *(int32_t *)v6 = 13;
                    return g2;
                }
                goto lab_0x1e23a99;
            }
        }
        v4 = v5;
    }
    int32_t v7 = function_1e23ad0(); // 0x1e23a89
    g2 = v7;
    int32_t v8 = *(int32_t *)(8 * g8 + (int32_t)&g149); // 0x1e23a8e
    g5 = v8;
    *(int32_t *)v7 = v8;
    return g2;
  lab_0x1e23a99:
    if (v3 < 188) {
        goto lab_0x1e23ab6;
    } else {
        if (v3 < 203) {
            int32_t v9 = function_1e23ad0(); // 0x1e23aa9
            g2 = v9;
            *(int32_t *)v9 = 8;
            return g2;
        }
        goto lab_0x1e23ab6;
    }
  lab_0x1e23ab6:;
    int32_t v10 = function_1e23ad0(); // 0x1e23ab6
    g2 = v10;
    *(int32_t *)v10 = 22;
    return g2;
}

// Address range: 0x1e23ad0 - 0x1e23ad9
int32_t function_1e23ad0(void) {
    int32_t result = function_1e22090() + 8; // 0x1e23ad5
    g2 = result;
    return result;
}

// Address range: 0x1e23ae0 - 0x1e23ae9
int32_t function_1e23ae0(void) {
    int32_t result = function_1e22090() + 12; // 0x1e23ae5
    g2 = result;
    return result;
}

// Address range: 0x1e23af0 - 0x1e23c2e
int32_t function_1e23af0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    // 0x1e23af0
    g4 = -1;
    g6 = 0;
    g8 = &g677;
    g2 = function_1e22490(18);
    int32_t v1 = g8; // 0x1e23b11
    int32_t v2; // 0x1e23b90
    while (true) {
      lab_0x1e23b11:;
        int32_t v3 = *(int32_t *)v1; // 0x1e23b11
        g3 = v3;
        if (v3 == 0) {
            // break -> 0x1e23bb5
            break;
        }
        // 0x1e23b1b
        g2 = v3 + 1152;
        if (v3 <= 0xfffffb7f) {
            int32_t v4 = v1; // 0x1e23b758
            while (true) {
                // 0x1e23b25
                int32_t v5; // 0x1e23b72
                int32_t v6; // 0x1e23b75
                if ((*(char *)(v3 + 4) & 1) == 0) {
                    // 0x1e23b2b
                    int32_t v7; // 0x1e23b58
                    int32_t v8; // 0x1e23b5b
                    if (*(int32_t *)(v3 + 8) == 0) {
                        // 0x1e23b31
                        *(int32_t *)(g9 - 4) = 17;
                        g2 = function_1e22490((int32_t)&g708);
                        int32_t v9 = g3; // 0x1e23b3b
                        int32_t v10; // 0x1e23b4e
                        if (*(int32_t *)(v9 + 8) == 0) {
                            int32_t v11 = v9 + 12; // 0x1e23b41
                            g2 = v11;
                            *(int32_t *)g9 = v11;
                            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
                            g2 = &g708;
                            int32_t * v12 = (int32_t *)(g3 + 8); // 0x1e23b4b
                            *v12 = *v12 + 1;
                            v10 = g9;
                        } else {
                            v10 = g9 + 4;
                        }
                        // 0x1e23b4e
                        *(int32_t *)(v10 - 4) = 17;
                        g2 = function_1e22500((int32_t)&g708);
                        v8 = g9 + 4;
                        v7 = g3;
                    } else {
                        v8 = g9;
                        v7 = v3;
                    }
                    int32_t v13 = v7 + 12; // 0x1e23b58
                    g2 = v13;
                    *(int32_t *)(v8 - 4) = v13;
                    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
                    g2 = &g708;
                    int32_t v14 = g3; // 0x1e23b62
                    if ((*(char *)(v14 + 4) & 1) == 0) {
                        // 0x1e23b82
                        g2 = v14;
                        g5 = 36;
                        *(int32_t *)v14 = -1;
                        v2 = g8;
                        int32_t v15 = g2 - *(int32_t *)v2; // 0x1e23b90
                        int64_t v16 = 0x100000000 * (int64_t)(v15 >> 31) | (int64_t)v15; // 0x1e23b93
                        int32_t v17 = v16 / (int64_t)g5; // 0x1e23b93
                        g2 = v17;
                        g4 = g6 + v17;
                        goto lab_0x1e23b98;
                    }
                    int32_t v18 = v14 + 12; // 0x1e23b68
                    g2 = v18;
                    *(int32_t *)(g9 - 4) = v18;
                    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
                    g2 = &g708;
                    v6 = g8;
                    v5 = g3;
                } else {
                    v6 = v4;
                    v5 = v3;
                }
                int32_t v19 = v5 + 36; // 0x1e23b72
                g3 = v19;
                int32_t v20 = *(int32_t *)v6 + 1152; // 0x1e23b77
                g2 = v20;
                if (v20 <= v19) {
                    v2 = v6;
                    // break -> 0x1e23b98
                    break;
                }
                v4 = v6;
                v3 = v19;
            }
        } else {
            v2 = v1;
        }
        goto lab_0x1e23b98;
    }
    // 0x1e23bb5
    *(int32_t *)(g9 - 4) = 1152;
    int32_t v21 = function_1e22670((int32_t)&g708); // 0x1e23bba
    g2 = v21;
    int32_t v22; // 0x1e23c1a
    if (v21 != 0) {
        int32_t v23 = *(int32_t *)(g9 + 20); // 0x1e23bc6
        g5 = v23;
        *(int32_t *)(4 * v23 + (int32_t)&g677) = v21;
        if (v21 <= 0xfffffb7f) {
            // branch -> 0x1e23c0a
        }
        // 0x1e23c0a
        *(int32_t *)(g9 - 4) = 32 * *(int32_t *)(g9 + 16);
        g2 = function_1e23dd0((int32_t)&g708);
        v22 = g9 + 4;
    } else {
        v22 = g9 + 4;
    }
    goto lab_0x1e23c1a_3;
  lab_0x1e23b98:
    // 0x1e23b98
    if (g4 != -1) {
        // 0x1e23c1a
        v22 = g9;
        goto lab_0x1e23c1a_3;
    }
    // 0x1e23b9d
    g6 += 32;
    g8 = v2 + 4;
    int32_t * v24 = (int32_t *)(g9 + 16); // 0x1e23ba3
    *v24 = *v24 + 1;
    int32_t v25 = g8; // 0x1e23ba7
    if (v25 >= (int32_t)&g679) {
        // 0x1e23c1a
        v22 = g9;
        goto lab_0x1e23c1a_3;
    }
    v1 = v25;
    goto lab_0x1e23b11;
  lab_0x1e23c1a_3:
    // 0x1e23c1a
    *(int32_t *)(v22 - 4) = 18;
    function_1e22500((int32_t)&g708);
    int32_t result = g4; // 0x1e23c24
    g2 = result;
    g3 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 12);
    g4 = *(int32_t *)(g9 + 16);
    return result;
}

// Address range: 0x1e23c30 - 0x1e23cd4
int32_t function_1e23c30(int32_t a1, int32_t hHandle) {
    // 0x1e23c30
    g5 = a1;
    int32_t v1 = g4; // 0x1e23c34
    int32_t v2 = g8; // 0x1e23c35
    int32_t v3 = g6; // 0x1e23c3c
    int32_t v4; // 0x1e23c57
    if ((int32_t)g679 > a1) {
        int32_t v5 = (a1 / 8 & -4) + (int32_t)&g677; // 0x1e23c47
        g6 = v5;
        int32_t v6 = a1 & 31; // 0x1e23c4f
        g2 = v6;
        g2 = 4 * v6;
        v4 = 36 * v6;
        if (*(int32_t *)(*(int32_t *)v5 + v4) != -1) {
            goto lab_0x1e23cb5;
        } else {
            // 0x1e23c60
            if (g80 != 1) {
                // 0x1e23ca6
                goto lab_0x1e23caa;
            } else {
                if (a1 == 0) {
                    // 0x1e23c79
                    g2 = SetStdHandle(-10, (int32_t *)hHandle);
                    goto lab_0x1e23caa;
                } else {
                    if (a1 == 1) {
                        // 0x1e23c88
                        g2 = SetStdHandle(-11, (int32_t *)hHandle);
                        goto lab_0x1e23caa;
                    } else {
                        if (a1 == 2) {
                            // 0x1e23c97
                            g2 = SetStdHandle(-12, (int32_t *)hHandle);
                            goto lab_0x1e23caa;
                        } else {
                            // 0x1e23ca6
                            goto lab_0x1e23caa;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x1e23cb5;
    }
  lab_0x1e23cb5:;
    int32_t v7 = function_1e23ad0(); // 0x1e23cb5
    g2 = v7;
    *(int32_t *)v7 = 9;
    int32_t v8 = function_1e23ae0(); // 0x1e23cc0
    g6 = v3;
    *(int32_t *)v8 = 0;
    g2 = -1;
    g8 = v2;
    g4 = v1;
    return -1;
  lab_0x1e23caa:;
    int32_t v9 = *(int32_t *)g6; // 0x1e23caa
    g2 = v9;
    g6 = *(int32_t *)g9;
    *(int32_t *)(v4 + v9) = hHandle;
    g2 = 0;
    g8 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 4);
    return 0;
}

// Address range: 0x1e23ce0 - 0x1e23d71
int32_t function_1e23ce0(int32_t a1) {
    // 0x1e23ce0
    g5 = a1;
    int32_t v1 = g8; // 0x1e23ce4
    int32_t v2 = g6; // bp-8
    int32_t v3 = &v2; // 0x1e23ce5
    int32_t nStdHandle; // 0x1e23d3f
    int32_t v4; // 0x1e23d45
    int32_t v5; // 0x1e23d47
    int32_t v6; // 0x1e23d04
    if ((int32_t)g679 > a1) {
        int32_t v7 = (a1 / 8 & -4) + (int32_t)&g677; // 0x1e23cf6
        g6 = v7;
        int32_t v8 = a1 & 31; // 0x1e23cfe
        g2 = 4 * v8;
        v6 = 36 * v8;
        int32_t v9 = *(int32_t *)v7 + v6; // 0x1e23d09
        g2 = v9;
        if ((*(char *)(v9 + 4) & 1) == 0) {
            goto lab_0x1e23d53;
        } else {
            // 0x1e23d11
            if (*(int32_t *)v9 == -1) {
                goto lab_0x1e23d53;
            } else {
                // 0x1e23d16
                if (g80 != 1) {
                    v5 = v3;
                    v4 = v7;
                    goto lab_0x1e23d45;
                } else {
                    if (a1 == 0) {
                        nStdHandle = -10;
                        goto lab_0x1e23d3f;
                    } else {
                        if (a1 == 1) {
                            nStdHandle = -11;
                            goto lab_0x1e23d3f;
                        } else {
                            if (a1 == 2) {
                                nStdHandle = -12;
                                goto lab_0x1e23d3f;
                            } else {
                                v5 = v3;
                                v4 = v7;
                                goto lab_0x1e23d45;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x1e23d53;
    }
  lab_0x1e23d53:;
    int32_t v10 = function_1e23ad0(); // 0x1e23d53
    g2 = v10;
    *(int32_t *)v10 = 9;
    int32_t v11 = function_1e23ae0(); // 0x1e23d5e
    g6 = v2;
    *(int32_t *)v11 = 0;
    g2 = -1;
    g8 = v1;
    return -1;
  lab_0x1e23d45:;
    int32_t v12 = *(int32_t *)v4; // 0x1e23d45
    g2 = v12;
    g6 = *(int32_t *)v5;
    *(int32_t *)(v12 + v6) = -1;
    g2 = 0;
    g8 = *(int32_t *)g9;
    return 0;
  lab_0x1e23d3f:
    // 0x1e23d3f
    g2 = SetStdHandle(nStdHandle, NULL);
    v5 = g9;
    v4 = g6;
    goto lab_0x1e23d45;
}

// Address range: 0x1e23d80 - 0x1e23dca
int32_t function_1e23d80(int32_t a1) {
    // 0x1e23d80
    g5 = a1;
    if ((int32_t)g679 > a1) {
        int32_t v1 = a1 & 31; // 0x1e23d8e
        g5 = 4 * v1;
        int32_t v2 = a1 / 8 & -4; // 0x1e23d97
        g2 = v2;
        int32_t v3 = *(int32_t *)(v2 + (int32_t)&g677); // 0x1e23d9d
        int32_t v4 = v3 + 36 * v1; // 0x1e23da3
        g2 = v4;
        if ((*(char *)(v4 + 4) & 1) != 0) {
            int32_t result = *(int32_t *)v4; // 0x1e23dab
            g2 = result;
            return result;
        }
    }
    int32_t v5 = function_1e23ad0(); // 0x1e23dae
    g2 = v5;
    *(int32_t *)v5 = 9;
    *(int32_t *)function_1e23ae0() = 0;
    g2 = -1;
    return -1;
}

// Address range: 0x1e23dd0 - 0x1e23e31
int32_t function_1e23dd0(int32_t a1) {
    int32_t v1 = g6; // bp-12
    int32_t v2 = &v1; // 0x1e23dd8
    int32_t v3 = a1 / 8 & -4; // 0x1e23ddc
    g5 = v3;
    int32_t v4 = a1 & 31; // 0x1e23ddf
    g2 = 4 * v4;
    int32_t v5 = v3 + (int32_t)&g677; // 0x1e23de5
    g6 = v5;
    int32_t v6 = 36 * v4; // 0x1e23deb
    g8 = v6;
    int32_t v7 = *(int32_t *)v5 + v6; // 0x1e23df0
    g4 = v7;
    int32_t v8; // 0x1e23e1f
    int32_t v9; // 0x1e23e21
    int32_t v10; // 0x1e23e26
    if (*(int32_t *)(v7 + 8) == 0) {
        // 0x1e23df8
        g2 = function_1e22490(17);
        int32_t v11; // 0x1e23e15
        if (*(int32_t *)(g4 + 8) == 0) {
            int32_t lpCriticalSection = g4 + 12; // 0x1e23e08
            g2 = lpCriticalSection;
            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
            g2 = &g708;
            int32_t * v12 = (int32_t *)(g4 + 8); // 0x1e23e12
            *v12 = *v12 + 1;
            v11 = g9;
        } else {
            v11 = v2;
        }
        // 0x1e23e15
        *(int32_t *)(v11 - 4) = 17;
        g2 = function_1e22500((int32_t)&g708);
        v10 = g9 + 4;
        v9 = g8;
        v8 = g6;
    } else {
        v10 = v2;
        v9 = v6;
        v8 = v5;
    }
    int32_t v13 = *(int32_t *)v8 + v9 + 12; // 0x1e23e23
    g2 = v13;
    *(int32_t *)(v10 - 4) = v13;
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
    g2 = &g708;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return &g708;
}

// Address range: 0x1e23e40 - 0x1e23e68
int32_t function_1e23e40(int32_t a1) {
    int32_t v1 = a1 & 31; // 0x1e23e46
    g5 = 4 * v1;
    int32_t v2 = a1 / 8 & -4; // 0x1e23e4f
    g2 = v2;
    int32_t v3 = 36 * v1; // 0x1e23e52
    g7 = v3;
    int32_t v4 = *(int32_t *)(v2 + (int32_t)&g677); // 0x1e23e55
    int32_t lpCriticalSection = v4 + v3 + 12; // 0x1e23e5d
    g2 = lpCriticalSection;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    return &g708;
}

// Address range: 0x1e23e70 - 0x1e23ee8
int32_t function_1e23e70(uint32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g6; // bp-8
    if ((int32_t)g679 > a1) {
        int32_t v2 = a1 & 31; // 0x1e23e85
        int32_t v3 = a1 / 8 & -4; // 0x1e23e88
        g2 = v3;
        g5 = 4 * v2;
        int32_t v4 = *(int32_t *)(v3 + (int32_t)&g677); // 0x1e23e8e
        g7 = v4;
        int32_t v5 = 36 * v2; // 0x1e23e94
        g2 = v5;
        if ((*(char *)(v5 + 4 + v4) & 1) != 0) {
            // 0x1e23e9e
            function_1e23dd0(a1);
            g2 = a3;
            g5 = a2;
            int32_t result = function_1e23ef0(g8, a2, a3); // 0x1e23eb2
            g2 = result;
            function_1e23e40(g8);
            g2 = result;
            g6 = v1;
            return result;
        }
    }
    int32_t v6 = function_1e23ad0(); // 0x1e23eca
    g2 = v6;
    *(int32_t *)v6 = 9;
    int32_t v7 = function_1e23ae0(); // 0x1e23ed5
    g6 = v1;
    *(int32_t *)v7 = 0;
    g2 = -1;
    return -1;
}

// Address range: 0x1e23ef0 - 0x1e23f72
int32_t function_1e23ef0(int32_t a1, int32_t lDistanceToMove, int32_t dwMoveMethod) {
    int32_t v1 = g8; // 0x1e23ef0
    int32_t v2 = g6; // 0x1e23ef1
    g8 = a1;
    int32_t hFile = function_1e23d80(a1); // 0x1e23ef7
    g2 = hFile;
    if (hFile == -1) {
        int32_t v3 = function_1e23ad0(); // 0x1e23f04
        g6 = v2;
        *(int32_t *)v3 = 9;
        g2 = -1;
        g8 = v1;
        return -1;
    }
    // 0x1e23f17
    g5 = dwMoveMethod;
    int32_t v4 = SetFilePointer((int32_t *)hFile, lDistanceToMove, NULL, dwMoveMethod); // 0x1e23f24
    g6 = v4;
    g2 = 0;
    if (v4 == -1) {
        int32_t errorCode = GetLastError(); // 0x1e23f36
        g2 = errorCode;
        if (errorCode != 0) {
            // 0x1e23f40
            function_1e23a50(errorCode);
            g2 = -1;
            g6 = hFile;
            g8 = lDistanceToMove;
            return -1;
        }
    }
    int32_t v5 = g8 / 8 & -4; // 0x1e23f5c
    g2 = v5;
    int32_t v6 = *(int32_t *)(v5 + (int32_t)&g677); // 0x1e23f5f
    g5 = v6;
    int32_t v7 = 36 * (g8 & 31); // 0x1e23f65
    g2 = v7;
    char * v8 = (char *)(v7 + 4 + v6); // 0x1e23f68
    *v8 = *v8 & -3;
    int32_t result = g6; // 0x1e23f6d
    g2 = result;
    g6 = hFile;
    g8 = lDistanceToMove;
    return result;
}

// Address range: 0x1e23f72 - 0x1e23f78
void _RtlUnwind_40_16(int32_t * TargetFrame, int32_t * TargetIp, struct _EXCEPTION_RECORD * ExceptionRecord, int32_t * ReturnValue) {
    // 0x1e23f72
    RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
    g2 = &g708;
}

// Address range: 0x1e23f78 - 0x1e23fe3
int32_t function_1e23f78(int32_t lpFilename, int32_t nSize, int32_t a3) {
    struct tagPAINTSTRUCT * hModule = g660; // 0x1e23f79
    g2 = (int32_t)hModule;
    int32_t nameSize = GetModuleFileNameA((int32_t *)hModule, (char *)lpFilename, nSize); // 0x1e23f8a
    g2 = nameSize;
    int32_t result;
    if (nameSize != 0) {
        // 0x1e23f94
        if (nameSize != nSize) {
            int32_t v1 = lpFilename + nameSize; // 0x1e23f98
            g7 = v1;
            int32_t v2; // 0x1e23fb7
            if (v1 >= lpFilename) {
                int32_t v3 = nameSize; // 0x1e23fab
                int32_t v4 = g5; // 0x1e23f9f
                while (true) {
                    unsigned char v5 = *(char *)v1; // 0x1e23f9f
                    int32_t v6 = (int32_t)v5 | v4 & -256; // 0x1e23f9f
                    g5 = v6;
                    if (v5 == 92) {
                        // break -> 0x1e23fb3
                        break;
                    }
                    if (v5 == 58) {
                        // break -> 0x1e23fb3
                        break;
                    }
                    int32_t v7 = v3 - 1; // 0x1e23fab
                    g2 = v7;
                    int32_t v8 = v1 - 1; // 0x1e23fac
                    g7 = v8;
                    if (v8 <= lpFilename) {
                        v2 = v7;
                        goto lab_0x1e23fb7;
                    }
                    v3 = v7;
                    v4 = v6;
                    v1 = v8;
                }
                // 0x1e23fb3
                *(char *)(v1 + 1) = 0;
                v2 = g2;
            } else {
                v2 = nameSize;
            }
          lab_0x1e23fb7:;
            int32_t v9 = v2 + 13; // 0x1e23fb7
            g2 = v9;
            if (v9 < nSize) {
                // 0x1e23fbe
                g2 = (int32_t)lstrcatA((char *)lpFilename, (char *)g8);
                result = 0;
            } else {
                // 0x1e23fcd
                g2 = (int32_t)lstrcatA((char *)lpFilename, "?");
                result = 1;
            }
        } else {
            result = 1;
        }
    } else {
        result = 1;
    }
    // 0x1e23fde
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e23fe3 - 0x1e24068
int32_t function_1e23fe3(int32_t a1, int32_t a2) {
    // 0x1e23fe3
    g8 = 500;
    int32_t lpString2 = function_1e25371(500); // 0x1e23fed
    g2 = lpString2;
    g6 = lpString2;
    if (lpString2 == 0) {
        // 0x1e24061
        g8 = *(int32_t *)(g9 + 8);
        return 0;
    }
    int32_t v1 = function_1e25371(g8); // 0x1e23ff9
    g2 = v1;
    char * lpString1 = (char *)v1; // 0x1e23ffe
    if (v1 != 0) {
        // 0x1e24007
        g3 = (int32_t)"HelpFile";
        int32_t v2 = function_1e25763(178); // 0x1e24019
        g2 = v2;
        g2 = function_1e2561a(0, g3, lpString2, v2, (int32_t)&g708);
        int32_t v3 = function_1e25763(166); // 0x1e24033
        g2 = v3;
        int32_t v4 = function_1e2561a(v3, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e24039
        g2 = v4;
        g2 = (int32_t)lstrcpyA(lpString1, (char *)lpString2);
        g2 = function_1e25401(lpString2);
        g2 = WinHelpA((int32_t *)g3, lpString1, 11, 0);
    }
    int32_t result = function_1e25401((int32_t)&g708); // 0x1e2405c
    g2 = result;
    // 0x1e24061
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e24068 - 0x1e24136
int32_t function_1e24068(int32_t hWnd, int32_t a2) {
    // 0x1e24068
    int32_t lpRect; // bp-52
    int32_t v1 = &lpRect; // 0x1e2406b
    g2 = v1;
    g2 = GetWindowRect((int32_t *)hWnd, (struct tagRECT *)&lpRect);
    int32_t lpRect2; // bp-36
    g5 = &lpRect2;
    int32_t * hWnd2 = (int32_t *)a2; // 0x1e24086
    g2 = GetWindowRect(hWnd2, (struct tagRECT *)&lpRect2);
    int32_t X; // bp-20
    int32_t v2 = &X; // 0x1e24088
    g5 = v2;
    int32_t * hWnd3 = GetDesktopWindow(); // 0x1e2408c
    g2 = (int32_t)hWnd3;
    GetWindowRect(hWnd3, (struct tagRECT *)&g708);
    g2 = 0;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    if (g170 != 0) {
        // 0x1e2409f
        X = 0;
        lpRect = 0;
        int32_t v6 = g1 ? -4 : 4; // 0x1e240b9
        int32_t v7 = v6 + v1; // 0x1e240b9
        int32_t v8 = v6 + v2; // 0x1e240b9
        *(int32_t *)v7 = *(int32_t *)v8;
        int32_t v9 = v7 + v6; // 0x1e240ba
        int32_t v10 = v8 + v6; // 0x1e240ba
        *(int32_t *)v9 = *(int32_t *)v10;
        *(int32_t *)(v9 + v6) = *(int32_t *)(v10 + v6);
        v4 = 0;
        v5 = 480;
        v3 = 640;
    } else {
        int32_t v11;
        v4 = v11;
        int32_t v12;
        v5 = v12;
        int32_t v13;
        v3 = v13;
    }
    int32_t v14;
    int32_t v15;
    int32_t v16 = v14 - v15 + lpRect2 - lpRect; // 0x1e240c9
    int32_t v17 = (v16 - (v16 >> 31)) / 2 + lpRect; // 0x1e240d1
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22 = v18 - v19 - v20 + v21; // 0x1e240df
    int32_t nHeight = v20 - v21; // 0x1e240e8
    int32_t v23 = (v22 - (v22 >> 31)) / 2 + v19; // 0x1e240f0
    g5 = v23;
    int32_t nWidth = v15 - lpRect2; // 0x1e240f2
    int32_t v24 = v17 + nWidth; // 0x1e240f5
    g2 = v24;
    int32_t v25; // 0x1e2410f
    if (v24 > v3) {
        // 0x1e240fd
        v25 = v3 - nWidth;
    } else {
        v25 = v17;
    }
    int32_t v26 = v23 + nHeight; // 0x1e24102
    g2 = v26;
    int32_t v27; // 0x1e2410d
    if (v26 > v5) {
        // 0x1e2410a
        v27 = v5 - nHeight;
        g5 = v27;
    } else {
        v27 = v23;
    }
    if (v25 < X) {
        // branch -> 0x1e24117
    } else {
        X = v25;
    }
    int32_t Y; // 0x1e24123
    if (v27 < v4) {
        // 0x1e2411c
        g5 = v4;
        Y = v4;
    } else {
        Y = v27;
    }
    int32_t result = MoveWindow(hWnd2, X, Y, nWidth, nHeight, false); // 0x1e24128
    g2 = result;
    g8 = X;
    return result;
}

// Address range: 0x1e24136 - 0x1e2424f
int32_t function_1e24136(int32_t a1, int32_t a2, char * a3) {
    // 0x1e24136
    int32_t lpString1; // bp-388
    int32_t v1 = &lpString1; // 0x1e24139
    g2 = v1;
    int32_t Reserved = 0; // esi
    g6 = *(int32_t *)0x1e4b1c4;
    lstrcpyA((char *)&lpString1, ",");
    int32_t lpdwDisposition; // bp-16
    g5 = &lpdwDisposition;
    int32_t phkResult; // bp-8
    g2 = &phkResult;
    int32_t v2 = RegCreateKeyExA(HKEY_CURRENT_USER, "Control Panel\\International", Reserved, (char *)Reserved, Reserved, 0xf003f, (struct _SECURITY_ATTRIBUTES *)Reserved, (int32_t **)&phkResult, &lpdwDisposition); // 0x1e24172
    g2 = v2;
    int32_t v3; // bp-12
    if (v2 == 0) {
        // 0x1e2417c
        int32_t lpcbData; // bp-20
        g2 = &lpcbData;
        g5 = v1;
        lpcbData = 10;
        int32_t * lpReserved = (int32_t *)Reserved; // 0x1e24198
        int32_t v4 = RegQueryValueExA((int32_t *)phkResult, "Locale", lpReserved, lpReserved, (char *)&lpString1, &lpcbData); // 0x1e24198
        g2 = v4;
        if (v4 != 0) {
            // 0x1e241a2
            g2 = v1;
            g2 = (int32_t)lstrcpyA((char *)&lpString1, "00000409");
        }
        int32_t v5 = &v3; // 0x1e241b0
        g2 = v5;
        g5 = v1;
        *(int32_t *)(g9 - 4) = v5;
        *(int32_t *)(g9 - 8) = (int32_t)"%d";
        *(int32_t *)(g9 - 12) = v1;
        g2 = function_1e3d750((int32_t)&g708, (int32_t)&g708);
        *(int32_t *)(g9 + 8) = phkResult;
        g2 = RegCloseKey(&g708);
    } else {
        int32_t v6;
        v3 = v6;
    }
    if (v3 != 409) {
        goto lab_0x1e2420d;
    } else {
        // 0x1e241da
        int32_t v7; // bp-188
        int32_t v8 = &v7; // 0x1e241da
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g2 = GetTimeZoneInformation((struct _TIME_ZONE_INFORMATION *)&g708);
        if (v7 < 240) {
            if (v7 != 0) {
                goto lab_0x1e2420d;
            } else {
                // 0x1e24208
                goto lab_0x1e2420d;
            }
        } else {
            if (v7 > 600) {
                goto lab_0x1e2420d;
            } else {
                // 0x1e24208
                goto lab_0x1e2420d;
            }
        }
    }
  lab_0x1e2420d:
    // 0x1e2420d
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = 103;
    int32_t v9 = function_1e25763((int32_t)&g708); // 0x1e24211
    g2 = v9;
    *(int32_t *)(g9 - 4) = v9;
    g5 = v1;
    *(int32_t *)(g9 - 8) = v1;
    g2 = (int32_t)lstrcpyA((char *)&g708, (char *)&g708);
    *(int32_t *)(g9 - 4) = 0;
    *(int32_t *)(g9 - 8) = g8 == 0 ? 102 : 101;
    g2 = function_1e25763((int32_t)&g708);
    *(int32_t *)(g9 - 4) = 0x2000;
    g5 = v1;
    *(int32_t *)(g9 - 8) = v1;
    *(int32_t *)(g9 - 12) = g2;
    *(int32_t *)(g9 - 16) = a1;
    int32_t result = MessageBoxA(&g708, (char *)&g708, (char *)&g708, (int32_t)&g708); // 0x1e24241
    g2 = result;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e2424f - 0x1e2427b
int32_t function_1e2424f(void) {
    // 0x1e2424f
    g2 = 0;
    if (g165 != 0) {
        // 0x1e24259
        g2 = function_1e258ef((int32_t)!g150);
    }
    int32_t result = function_1e2703d(); // 0x1e2426b
    g2 = result;
    g156 = 1;
    return result;
}

// Address range: 0x1e2427b - 0x1e242a3
int32_t function_1e2427b(int32_t a1) {
    // 0x1e2427b
    g2 = 0;
    if (!g150) {
        // 0x1e242a2
        return 0;
    }
    // 0x1e24285
    if (g165 != 0) {
        // 0x1e2428d
        g2 = function_1e258ef(0);
    }
    int32_t result = function_1e2703d(); // 0x1e24293
    g2 = result;
    g156 = 1;
    // 0x1e242a2
    return result;
}

// Address range: 0x1e242a3 - 0x1e242cf
int32_t function_1e242a3(void) {
    // 0x1e242a3
    g2 = function_1e2427b(g8);
    int32_t * cursorHandle = LoadCursorA(NULL, (char *)0x7f02); // 0x1e242b0
    g2 = (int32_t)cursorHandle;
    g2 = (int32_t)SetCursor(cursorHandle);
    g2 = function_1e26d6e(0);
    int32_t hCursor = g8; // 0x1e242c6
    int32_t result = (int32_t)SetCursor((int32_t *)hCursor); // 0x1e242c7
    g2 = result;
    g8 = hCursor;
    return result;
}

// Address range: 0x1e242cf - 0x1e24310
int32_t function_1e242cf(void) {
    // 0x1e242cf
    g2 = function_1e27bec();
    g2 = function_1e278d0();
    g2 = function_1e272a4();
    g2 = function_1e25763(170);
    int32_t lpText = function_1e25763(179); // 0x1e242f7
    g2 = lpText;
    int32_t v1 = MessageBoxA(NULL, (char *)lpText, (char *)&g708, (int32_t)&g708); // 0x1e242ff
    g2 = v1;
    int32_t result = function_1e21210(1); // 0x1e24307
    g2 = result;
    return result;
}

// Address range: 0x1e24310 - 0x1e24359
int32_t function_1e24310(int32_t a1) {
    int32_t threadHandle = (int32_t)GetCurrentThread(); // 0x1e24310
    g2 = threadHandle;
    g5 = a1;
    int32_t hThread; // bp-4
    if (a1 == -2) {
        // 0x1e24339
        hThread = -2;
    } else {
        if (a1 == -1) {
            // 0x1e2433d
            hThread = -1;
        } else {
            if (a1 == 0) {
                // 0x1e24341
                hThread = 0;
            } else {
                if (a1 == 1) {
                    // 0x1e24345
                    hThread = 1;
                } else {
                    if (a1 == 2) {
                        // 0x1e24349
                        hThread = 2;
                    } else {
                        if (a1 != 3) {
                            // 0x1e24356
                            return threadHandle;
                        }
                        // 0x1e2434d
                        hThread = 15;
                    }
                }
            }
        }
    }
    // 0x1e2434f
    *(int32_t *)((int32_t)&hThread - 4) = threadHandle;
    bool v1 = SetThreadPriority((int32_t *)hThread, (int32_t)&g708); // 0x1e24350
    int32_t result = v1; // 0x1e24350
    g2 = result;
    // 0x1e24356
    return result;
}

