
// Address range: 0x1e22220 - 0x1e2225d
int32_t function_1e22220(void) {
    // 0x1e22220
    g2 = g79;
    if (g79 != 1) {
        if (g79 != 0 || g80 != 1) {
            // 0x1e2225c
            return g79;
        }
    }
    // 0x1e22237
    function_1e22260(252);
    g2 = g116;
    int32_t result = function_1e22260(255); // 0x1e22254
    g2 = result;
    // 0x1e2225c
    return result;
}

// Address range: 0x1e22260 - 0x1e22456
int32_t function_1e22260(int32_t a1) {
    // 0x1e22260
    g5 = 0;
    g2 = &g114;
    g7 = a1;
    int32_t v1 = g8; // bp-432
    int32_t v2 = &v1; // 0x1e22275
    int32_t v3 = g3; // bp-440
    int32_t v4 = &v3; // 0x1e22277
    int32_t v5 = 0; // 0x1e2227f
    int32_t v6 = &g114; // 0x1e2227c
    int32_t v7; // 0x1e2228e
    int32_t v8; // 0x1e2245550
    while (true) {
        // 0x1e22278
        if (*(int32_t *)v6 == a1) {
            v8 = v6;
            v7 = v5;
            // break -> 0x1e22287
            break;
        }
        int32_t v9 = v6 + 8; // 0x1e2227c
        g2 = v9;
        int32_t v10 = v5 + 1; // 0x1e2227f
        g5 = v10;
        if (v9 >= (int32_t)&g116) {
            v8 = v9;
            v7 = v10;
            // break -> 0x1e22287
            break;
        }
        v5 = v10;
        v6 = v9;
    }
    int32_t v11 = 8 * v7; // 0x1e22287
    g4 = v11;
    int32_t v12; // 0x1e2244b
    int32_t result; // 0x1e22455
    if (*(int32_t *)(v11 + (int32_t)&g114) != a1) {
        result = v8;
        v12 = v4;
        goto lab_0x1e2244b;
    } else {
        // 0x1e2229b
        if (g79 == 1) {
            goto lab_0x1e22407;
        } else {
            if (g79 != 0) {
                goto lab_0x1e222be;
            } else {
                // 0x1e222b1
                if (g80 == 1) {
                    goto lab_0x1e22407;
                } else {
                    goto lab_0x1e222be;
                }
            }
        }
    }
  lab_0x1e2244b:
    // 0x1e2244b
    g3 = *(int32_t *)v12;
    g6 = *(int32_t *)(v12 + 4);
    g8 = *(int32_t *)(v12 + 8);
    g4 = *(int32_t *)(v12 + 12);
    return result;
  lab_0x1e22407:;
    int32_t v13 = g677; // 0x1e22407
    int32_t v14; // 0x1e22427
    int32_t v15; // 0x1e2242d
    int32_t v16; // 0x1e22415
    if (v13 == 0) {
        goto lab_0x1e2241d;
    } else {
        // 0x1e22410
        g2 = v13;
        v16 = *(int32_t *)(v13 + 72);
        if (v16 != -1) {
            v15 = v4;
            v14 = v11;
            goto lab_0x1e22427;
        } else {
            goto lab_0x1e2241d;
        }
    }
  lab_0x1e2241d:;
    int32_t v17 = (int32_t)GetStdHandle(-12); // 0x1e2241f
    g2 = v17;
    v16 = v17;
    v15 = g9;
    v14 = g4;
    goto lab_0x1e22427;
  lab_0x1e222be:
    if (a1 != 252) {
        // 0x1e222ca
        int32_t lpFilename; // bp-260
        g2 = &lpFilename;
        int32_t nameSize = GetModuleFileNameA(NULL, (char *)&lpFilename, 260); // 0x1e222df
        g2 = nameSize;
        int32_t v26; // bp-272
        int32_t v27;
        if ((nameSize & 255) != 0) {
            // 0x1e222ca
            v27 = &v26;
        } else {
            int32_t v28 = &v26; // 0x1e222ea
            g5 = 5;
            __asm_rep_movsd_memcpy((char *)&v26, "<program name unknown>", 5);
            g5 = 0;
            g8 = (g1 ? -20 : 20) + v28 + (g1 ? -2 : 2) + (g1 ? -1 : 1);
            v27 = v28;
        }
        int32_t v29 = v27; // ebp
        g5 = -1;
        g2 = 0;
        int32_t v30 = v27; // 0x1e22310
        int32_t v31 = -1; // 0x1e22310
        int32_t v32; // 0x1e22312
        while (true) {
            if (v31 == 0) {
                v32 = 0;
                // break -> bb115
                break;
            }
            int32_t v33 = v31 - 1; // 0x1e22310
            g5 = v33;
            if (*(char *)v30 == 0) {
                v32 = v33;
                // break -> bb115
                break;
            }
            v30 += (g1 ? -1 : 1);
            v31 = v33;
        }
        // bb115
        g5 = -1 - v32;
        int32_t v34; // bp-456
        if (v32 <= 0xffffffc2) {
            // 0x1e22319
            g6 = v27;
            g5 = -1;
            g2 = 0;
            v34 = 3;
            int32_t v35 = v27; // 0x1e22329
            int32_t v36 = -1; // 0x1e22329
            int32_t v37; // 0x1e2232b
            while (true) {
                if (v36 == 0) {
                    v37 = 0;
                    // break -> bb118
                    break;
                }
                int32_t v38 = (g1 ? -1 : 1) + v35; // 0x1e22329
                g6 = v38;
                int32_t v39 = v36 - 1; // 0x1e22329
                g5 = v39;
                if (*(char *)v35 == 0) {
                    v37 = v39;
                    // break -> bb118
                    break;
                }
                v35 = v38;
                v36 = v39;
            }
            // bb118
            g5 = -1 - v37;
            int32_t v40 = 123 - v37 + (int32_t)&v34; // 0x1e2232d
            v29 = v40;
            g2 = function_1e230e0(v40, "...", (int32_t)&g708);
        }
        // 0x1e2233f
        g5 = 6;
        __asm_rep_movsd_memcpy((char *)&v1, "Runtime Error!\n\nProgram: ", 6);
        g5 = -1;
        g2 = 0;
        int32_t v41 = g1 ? -1 : 1; // 0x1e2235a
        int32_t v42 = -1; // 0x1e2235a
        int32_t v43; // 0x1e2235c
        int32_t v44; // 0x1e2235e
        while (true) {
            if (v42 == 0) {
                v44 = v29;
                v43 = 0;
                // break -> bb123
                break;
            }
            int32_t v45 = v29 + v41; // 0x1e2235a
            int32_t v46 = v42 - 1; // 0x1e2235a
            g5 = v46;
            if (*(char *)v29 == 0) {
                v44 = v45;
                v43 = v46;
                // break -> bb123
                break;
            }
            v29 = v45;
            v42 = v46;
        }
        int32_t v47 = -1 - v43; // 0x1e2235c
        g5 = -1;
        g2 = 0;
        int32_t v48 = v2; // 0x1e2236f
        int32_t v49 = -1; // 0x1e2236f
        int32_t v50; // 0x1e22371
        while (true) {
            if (v49 == 0) {
                v50 = v48;
                // break -> bb126
                break;
            }
            int32_t v51 = v48 + v41; // 0x1e2236f
            int32_t v52 = v49 - 1; // 0x1e2236f
            g5 = v52;
            if (*(char *)v48 == 0) {
                v50 = v51;
                // break -> bb126
                break;
            }
            v48 = v51;
            v49 = v52;
        }
        int32_t v53 = v50 - 1; // 0x1e22371
        int32_t v54 = v47 / 4; // 0x1e22374
        g5 = v54;
        __asm_rep_movsd_memcpy((char *)v53, (char *)(v44 - v47), v54);
        char * v55 = (char *)((g1 ? -4 : 4) * v54 + v53); // 0x1e22377
        int32_t v56 = v47 & 3; // 0x1e2237b
        g5 = v56;
        __asm_rep_movsb_memcpy(v55, v55, v56);
        int32_t v57 = g1 ? -1 : 1; // 0x1e2237e
        g5 = -1;
        g2 = 0;
        int32_t v58 = (int32_t)"\n\n"; // 0x1e2238c
        int32_t v59 = -1; // 0x1e2238c
        int32_t v60; // 0x1e2238e
        int32_t v61; // 0x1e22390
        while (true) {
            if (v59 == 0) {
                v61 = v58;
                v60 = 0;
                // break -> bb130
                break;
            }
            int32_t v62 = v58 + v57; // 0x1e2238c
            int32_t v63 = v59 - 1; // 0x1e2238c
            g5 = v63;
            if (*(char *)v58 == 0) {
                v61 = v62;
                v60 = v63;
                // break -> bb130
                break;
            }
            v58 = v62;
            v59 = v63;
        }
        int32_t v64 = -1 - v60; // 0x1e2238e
        g5 = -1;
        g2 = 0;
        int32_t v65 = v2; // 0x1e223a1
        int32_t v66 = -1; // 0x1e223a1
        int32_t v67; // 0x1e223a3
        while (true) {
            if (v66 == 0) {
                v67 = v65;
                // break -> bb133
                break;
            }
            int32_t v68 = v65 + v57; // 0x1e223a1
            int32_t v69 = v66 - 1; // 0x1e223a1
            g5 = v69;
            if (*(char *)v65 == 0) {
                v67 = v68;
                // break -> bb133
                break;
            }
            v65 = v68;
            v66 = v69;
        }
        int32_t v70 = v67 - 1; // 0x1e223a3
        int32_t v71 = v64 / 4; // 0x1e223a6
        g5 = v71;
        __asm_rep_movsd_memcpy((char *)v70, (char *)(v61 - v64), v71);
        char * v72 = (char *)((g1 ? -4 : 4) * v71 + v70); // 0x1e223a9
        int32_t v73 = v64 & 3; // 0x1e223ad
        g5 = v73;
        __asm_rep_movsb_memcpy(v72, v72, v73);
        int32_t v74 = g1 ? -1 : 1; // 0x1e223b0
        g5 = 0;
        g5 = -1;
        g2 = 0;
        int32_t v75 = *(int32_t *)(g4 + (int32_t)&g115); // 0x1e223bf
        int32_t v76 = -1; // 0x1e223bf
        int32_t v77; // 0x1e223c1
        int32_t v78; // 0x1e223c3
        while (true) {
            if (v76 == 0) {
                v78 = v75;
                v77 = 0;
                // break -> bb137
                break;
            }
            int32_t v79 = v75 + v74; // 0x1e223bf
            int32_t v80 = v76 - 1; // 0x1e223bf
            g5 = v80;
            if (*(char *)v75 == 0) {
                v78 = v79;
                v77 = v80;
                // break -> bb137
                break;
            }
            v75 = v79;
            v76 = v80;
        }
        int32_t v81 = -1 - v77; // 0x1e223c1
        g7 = v81;
        g5 = -1;
        g2 = 0;
        int32_t v82 = v2; // 0x1e223d4
        int32_t v83 = -1; // 0x1e223d4
        int32_t v84; // 0x1e223d6
        while (true) {
            if (v83 == 0) {
                v84 = v82;
                // break -> bb140
                break;
            }
            int32_t v85 = v82 + v74; // 0x1e223d4
            int32_t v86 = v83 - 1; // 0x1e223d4
            g5 = v86;
            if (*(char *)v82 == 0) {
                v84 = v85;
                // break -> bb140
                break;
            }
            v82 = v85;
            v83 = v86;
        }
        int32_t v87 = v84 - 1; // 0x1e223d6
        int32_t v88 = v81 / 4; // 0x1e223d9
        g5 = v88;
        __asm_rep_movsd_memcpy((char *)v87, (char *)(v78 - v81), v88);
        int32_t v89 = (g1 ? -4 : 4) * v88 + v87; // 0x1e223dc
        char * v90 = (char *)v89; // 0x1e223dc
        v34 = 0x12010;
        int32_t v91 = g7 & 3; // 0x1e223e5
        g5 = v91;
        __asm_rep_movsb_memcpy(v90, v90, v91);
        g6 = (g1 ? -1 : 1) * v91 + v89;
        g5 = 0;
        g2 = v2;
        int32_t result2 = function_1e23040(&v1); // 0x1e223f4
        g2 = result2;
        g3 = 0;
        g6 = (int32_t)(char *)&lpFilename;
        g8 = 260;
        g4 = v3;
        return result2;
    }
    result = v8;
    v12 = v4;
    goto lab_0x1e2244b;
  lab_0x1e22427:
    // 0x1e22427
    g7 = *(int32_t *)(v14 + (int32_t)&g115);
    *(int32_t *)(v15 - 4) = 0;
    int32_t v18 = g7; // edi
    *(int32_t *)(v15 - 8) = v15 + 16;
    g5 = -1;
    g2 = 0;
    int32_t v19 = -1; // 0x1e2243d
    int32_t v20; // 0x1e2243f
    while (true) {
        if (v19 == 0) {
            v20 = 0;
            // break -> bb145
            break;
        }
        int32_t v21 = v18; // 0x1e2243d
        v18 = (g1 ? -1 : 1) + v21;
        int32_t v22 = v19 - 1; // 0x1e2243d
        g5 = v22;
        if (*(char *)v21 == 0) {
            v20 = v22;
            // break -> bb145
            break;
        }
        v19 = v22;
    }
    int32_t v23 = -2 - v20; // 0x1e22441
    g5 = v23;
    *(int32_t *)(v15 - 12) = v23;
    *(int32_t *)(v15 - 16) = g7;
    *(int32_t *)(v15 - 20) = v16;
    bool v24 = WriteFile(&g708, &g708, (int32_t)&g708, &g708, (struct _OVERLAPPED *)&g708); // 0x1e22445
    int32_t v25 = v24; // 0x1e22445
    g2 = v25;
    result = v25;
    v12 = g9;
    goto lab_0x1e2244b;
}

// Address range: 0x1e22460 - 0x1e2248a
int32_t function_1e22460(int32_t a1) {
    int32_t lpCriticalSection = *(int32_t *)&g121; // 0x1e22461
    g2 = lpCriticalSection;
    InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    int32_t lpCriticalSection2 = *(int32_t *)&g120; // 0x1e2246f
    g5 = lpCriticalSection2;
    InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    int32_t lpCriticalSection3 = *(int32_t *)&g119; // 0x1e22478
    g2 = lpCriticalSection3;
    InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection3);
    int32_t lpCriticalSection4 = *(int32_t *)&g118; // 0x1e22480
    g2 = lpCriticalSection4;
    InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection4);
    g2 = &g708;
    return &g708;
}

// Address range: 0x1e22490 - 0x1e224f8
int32_t function_1e22490(int32_t a1) {
    // 0x1e22490
    g2 = a1;
    int32_t v1 = g6; // bp-12
    int32_t v2 = &v1; // 0x1e22498
    int32_t v3 = 4 * a1 + (int32_t)&g117; // 0x1e22499
    g6 = v3;
    int32_t v4 = *(int32_t *)v3; // 0x1e224a0
    int32_t v5; // 0x1e224ed
    int32_t v6; // 0x1e224eb
    if (v4 == 0) {
        int32_t lpCriticalSection = function_1e22670(24); // 0x1e224a7
        g2 = lpCriticalSection;
        g8 = lpCriticalSection;
        if (lpCriticalSection == 0) {
            // 0x1e224b5
            g2 = function_1e211b0(17);
        }
        // 0x1e224bf
        g2 = function_1e22490(17);
        int32_t v7; // 0x1e224e1
        if (*(int32_t *)g6 != 0) {
            // 0x1e224d9
            g2 = function_1e22600(lpCriticalSection);
            v7 = v2;
        } else {
            // 0x1e224cf
            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
            g2 = &g708;
            *(int32_t *)g6 = lpCriticalSection;
            v7 = g9;
        }
        // 0x1e224e1
        *(int32_t *)(v7 - 4) = 17;
        g2 = function_1e22500((int32_t)&g708);
        v5 = g9 + 4;
        v6 = *(int32_t *)g6;
    } else {
        v5 = v2;
        v6 = v4;
    }
    // 0x1e224eb
    g2 = v6;
    *(int32_t *)(v5 - 4) = v6;
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
    g2 = &g708;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = *(int32_t *)(g9 + 8);
    return &g708;
}

// Address range: 0x1e22500 - 0x1e22517
int32_t function_1e22500(int32_t a1) {
    // 0x1e22500
    g2 = a1;
    int32_t lpCriticalSection = *(int32_t *)(4 * a1 + (int32_t)&g117); // 0x1e22507
    g5 = lpCriticalSection;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    g3 = lpCriticalSection;
    return &g708;
}

// Address range: 0x1e22520 - 0x1e22556
int32_t function_1e22520(uint32_t a1, int32_t a2, int32_t a3) {
    // 0x1e22520
    g2 = a1;
    if (a1 >= (int32_t)&g140) {
        if (a1 <= (int32_t)&g145) {
            int32_t v1 = (a1 - (int32_t)&g140) / 32 + 28; // 0x1e2253d
            g2 = v1;
            int32_t result = function_1e22490(v1); // 0x1e22541
            g2 = result;
            return result;
        }
    }
    int32_t lpCriticalSection = a1 + 32; // 0x1e2254a
    g2 = lpCriticalSection;
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    g3 = lpCriticalSection;
    return &g708;
}

// Address range: 0x1e22560 - 0x1e22588
int32_t function_1e22560(int32_t a1, int32_t a2) {
    // 0x1e22560
    g2 = a1;
    if (a1 < 20) {
        int32_t v1 = a1 + 28; // 0x1e2256c
        g2 = v1;
        int32_t result = function_1e22490(v1); // 0x1e22570
        g2 = result;
        return result;
    }
    int32_t lpCriticalSection = a2 + 32; // 0x1e2257c
    g2 = lpCriticalSection;
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    g3 = lpCriticalSection;
    return &g708;
}

// Address range: 0x1e22590 - 0x1e225c6
int32_t function_1e22590(uint32_t a1) {
    // 0x1e22590
    g2 = a1;
    if (a1 >= (int32_t)&g140) {
        if (a1 <= (int32_t)&g145) {
            int32_t v1 = (a1 - (int32_t)&g140) / 32 + 28; // 0x1e225ad
            g2 = v1;
            int32_t result = function_1e22500(v1); // 0x1e225b1
            g2 = result;
            return result;
        }
    }
    int32_t lpCriticalSection = a1 + 32; // 0x1e225ba
    g2 = lpCriticalSection;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    g3 = lpCriticalSection;
    return &g708;
}

// Address range: 0x1e225d0 - 0x1e225f8
int32_t function_1e225d0(int32_t a1, int32_t a2) {
    // 0x1e225d0
    g2 = a1;
    if (a1 < 20) {
        int32_t v1 = a1 + 28; // 0x1e225dc
        g2 = v1;
        int32_t result = function_1e22500(v1); // 0x1e225e0
        g2 = result;
        return result;
    }
    int32_t lpCriticalSection = a2 + 32; // 0x1e225ec
    g2 = lpCriticalSection;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    g2 = &g708;
    g3 = lpCriticalSection;
    return &g708;
}

// Address range: 0x1e22600 - 0x1e2266d
int32_t function_1e22600(int32_t lpMem) {
    int32_t v1 = g8; // bp-12
    g8 = lpMem;
    if (lpMem == 0) {
        // 0x1e22668
        g8 = *(int32_t *)(int32_t)&v1;
        return g2;
    }
    // 0x1e2260c
    function_1e22490(9);
    int32_t v2; // bp-8
    g2 = &v2;
    int32_t v3; // bp-4
    g5 = &v3;
    int32_t v4 = function_1e22ac0(lpMem, &v3, &v2); // 0x1e22621
    g2 = v4;
    if (v4 != 0) {
        g5 = v3;
        g2 = v2;
        g2 = function_1e22b20(v3, v2, v4);
        int32_t result = function_1e22500(9); // 0x1e22642
        g2 = result;
        g8 = v1;
        return result;
    }
    // 0x1e2264f
    function_1e22500(9);
    g2 = g676;
    int32_t result2 = HeapFree((int32_t *)g676, 0, (int32_t *)lpMem); // 0x1e22662
    g2 = result2;
    // 0x1e22668
    g8 = *(int32_t *)g9;
    return result2;
}

// Address range: 0x1e22670 - 0x1e22684
int32_t function_1e22670(int32_t a1) {
    // 0x1e22670
    g2 = g147;
    g5 = a1;
    int32_t result = function_1e22690(a1, g147); // 0x1e2267b
    g2 = result;
    return result;
}

// Address range: 0x1e22690 - 0x1e226da
int32_t function_1e22690(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e22690
    int32_t v2 = g6; // bp-8
    g8 = a1;
    if (a1 >= 0xffffffe1) {
        // 0x1e2269b
        g2 = 0;
        g8 = v1;
        return 0;
    }
    int32_t v3; // 0x1e226b22
    if (a1 == 0) {
        // 0x1e226a4
        g8 = 1;
        v3 = 1;
    } else {
        v3 = a1;
    }
    // 0x1e226a9
    g6 = a2;
    int32_t v4 = &v2; // 0x1e226b7
    int32_t v5 = v3; // 0x1e226b7
    int32_t result; // 0x1e226b8
    int32_t v6; // 0x1e226bd
    while (true) {
        // 0x1e226ad
        g2 = 0;
        if (v5 < 0xffffffe1) {
            // 0x1e226c0
            *(int32_t *)(v4 - 4) = v5;
            result = function_1e226e0((int32_t)&g708);
            g2 = result;
            v6 = g9 + 4;
            if (result != 0) {
                // break -> 0x1e226d7
                break;
            }
        } else {
            result = 0;
            v6 = v4;
        }
        if (a2 == 0) {
            // break -> 0x1e226d7
            break;
        }
        // 0x1e226c8
        *(int32_t *)(v6 - 4) = g8;
        int32_t v7 = function_1e232d0((int32_t)&g708); // 0x1e226c9
        g2 = v7;
        int32_t v8 = g9 + 4; // 0x1e226ce
        if (v7 == 0) {
            // 0x1e226d5
            g2 = 0;
            result = 0;
            v6 = v8;
            goto lab_0x1e226d7;
        }
        // 0x1e226c8
        v4 = v8;
        v5 = g8;
    }
  lab_0x1e226d7:
    // 0x1e226d7
    g6 = *(int32_t *)v6;
    g8 = *(int32_t *)(v6 + 4);
    return result;
}

// Address range: 0x1e226e0 - 0x1e22733
int32_t function_1e226e0(int32_t a1) {
    int32_t v1 = g8; // 0x1e226e0
    int32_t v2 = g6; // 0x1e226e1
    int32_t dwBytes = a1 + 15 & -16; // 0x1e226e9
    g6 = dwBytes;
    if (g136 < dwBytes) {
        // branch -> 0x1e22721
    } else {
        // 0x1e226f4
        function_1e22490(9);
        int32_t v3 = g6 / 16; // 0x1e22700
        g2 = v3;
        int32_t result = function_1e22b70(v3); // 0x1e22704
        g2 = result;
        g2 = function_1e22500(9);
        if (result != 0) {
            // 0x1e2271c
            g2 = result;
            g6 = v2;
            g8 = v1;
            return result;
        }
        // 0x1e226f4
        dwBytes = g6;
    }
    // 0x1e22721
    g2 = g676;
    int32_t result2 = (int32_t)HeapAlloc((int32_t *)g676, 0, dwBytes); // 0x1e2272a
    g2 = result2;
    g6 = g676;
    g8 = 0;
    return result2;
}

// Address range: 0x1e22740 - 0x1e22758
int32_t function_1e22740(int32_t a1) {
    // 0x1e22740
    g5 = a1;
    g2 = a1;
    int32_t v1 = a1; // 0x1e22746
    g7 = v1;
    int32_t v2 = v1 + 2; // 0x1e22748
    g2 = v2;
    while (*(int16_t *)v1 != 0) {
        // 0x1e22746
        v1 = v2;
        g7 = v1;
        v2 = v1 + 2;
        g2 = v2;
    }
    int32_t result = (v2 - a1) / 2 - 1; // 0x1e22756
    g2 = result;
    return result;
}

// Address range: 0x1e22760 - 0x1e2280b
int32_t function_1e22760(int32_t a1, int32_t a2) {
    int32_t v1 = a2 * a1; // 0x1e22767
    g8 = v1;
    int32_t v2 = g3; // bp-16
    int32_t v3; // 0x1e2278b2
    if (v1 < 0xffffffe1) {
        if (v1 == 0) {
            // 0x1e2277e
            g8 = 16;
            v3 = 16;
        } else {
            int32_t v4 = v1 + 15 & -16; // 0x1e22779
            g8 = v4;
            v3 = v4;
        }
    } else {
        v3 = v1;
    }
    int32_t v5 = &v2; // 0x1e22798
    uint32_t v6 = v3; // 0x1e22790
    int32_t result;
    while (true) {
        // 0x1e22789
        g3 = 0;
        int32_t v7; // 0x1e227df
        if (v6 < 0xffffffe1) {
            // 0x1e22790
            int32_t v8; // 0x1e227d6
            if (v6 > g136) {
                v8 = v5;
            } else {
                // 0x1e22798
                *(int32_t *)(v5 - 4) = 9;
                function_1e22490((int32_t)&g708);
                int32_t v9 = g8 / 16; // 0x1e227a4
                g2 = v9;
                *(int32_t *)g9 = v9;
                int32_t v10 = function_1e22b70((int32_t)&g708); // 0x1e227a8
                g2 = v10;
                g3 = v10;
                *(int32_t *)g9 = 9;
                g2 = function_1e22500((int32_t)&g708);
                int32_t v11 = g3; // 0x1e227bc
                if (v11 != 0) {
                    // 0x1e227d2
                    g2 = 0;
                    int32_t v12 = g8 / 4; // 0x1e227c6
                    g5 = v12;
                    __asm_rep_stosd_memset((char *)v11, 0, v12);
                    int32_t v13 = (g1 ? -4 : 4) * v12 + v11; // 0x1e227c9
                    int32_t v14 = g8 & 3; // 0x1e227cd
                    g5 = v14;
                    __asm_rep_stosb_memset((char *)v13, 0, v14);
                    g6 = (g1 ? -1 : 1) * v14 + v13;
                    g5 = 0;
                    result = g3;
                    if (result != 0) {
                        // break -> 0x1e22804
                        break;
                    }
                    // 0x1e227d2
                    v8 = g9;
                } else {
                    v8 = g9 + 4;
                }
            }
            // 0x1e227e3
            *(int32_t *)(v8 - 4) = g8;
            g2 = g676;
            *(int32_t *)(v8 - 8) = 8;
            *(int32_t *)(v8 - 12) = g2;
            int32_t * v15 = HeapAlloc(&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e227df
            v7 = (int32_t)v15;
            g2 = v7;
            g3 = v7;
            if (v15 != NULL) {
                result = v7;
                // break -> 0x1e22804
                break;
            }
        } else {
            v7 = 0;
        }
        // 0x1e227e7
        if (g147 == 0) {
            result = v7;
            // break -> 0x1e22804
            break;
        }
        // 0x1e227f0
        *(int32_t *)(g9 - 4) = g8;
        int32_t v16 = function_1e232d0((int32_t)&g708); // 0x1e227f1
        g2 = v16;
        int32_t v17 = g9 + 4; // 0x1e227f6
        if (v16 == 0) {
            // 0x1e227fd
            g2 = 0;
            g3 = *(int32_t *)v17;
            g6 = *(int32_t *)(g9 + 8);
            g8 = *(int32_t *)(g9 + 12);
            g4 = *(int32_t *)(g9 + 16);
            return 0;
        }
        // 0x1e227f0
        v5 = v17;
        v6 = g8;
    }
    // 0x1e22804
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e22810 - 0x1e22980
int32_t function_1e22810(void) {
    int32_t v1 = g3; // bp-16
    int32_t v2; // 0x1e22822
    int32_t v3; // 0x1e22896
    if (g133 != 0) {
        // 0x1e22889
        g2 = g676;
        int32_t * v4 = HeapAlloc((int32_t *)g676, 0, 2068); // 0x1e22896
        v3 = (int32_t)v4;
        g2 = v3;
        if (v4 == NULL) {
            // 0x1e228a6
            g2 = 0;
            g3 = g676;
            g6 = 0;
            g8 = 2068;
            g4 = v1;
            return 0;
        }
        // 0x1e22889
        v2 = g9;
    } else {
        // 0x1e2281d
        v3 = &g131;
        v2 = &v1;
    }
    // 0x1e22822
    *(int32_t *)(v2 - 4) = 4;
    *(int32_t *)(v2 - 8) = 0x2000;
    *(int32_t *)(v2 - 12) = 0x400000;
    *(int32_t *)(v2 - 16) = 0;
    int32_t * memory = VirtualAlloc(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e22836
    int32_t v5 = (int32_t)memory; // 0x1e22836
    g2 = v5;
    if (memory != NULL) {
        // 0x1e22842
        *(int32_t *)(g9 - 4) = 4;
        *(int32_t *)(g9 - 8) = 0x1000;
        *(int32_t *)(g9 - 12) = 0x10000;
        *(int32_t *)(g9 - 16) = v5;
        int32_t * memory2 = VirtualAlloc(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2284f
        g2 = (int32_t)memory2;
        if (memory2 != NULL) {
            // 0x1e22859
            if (v3 != (int32_t)&g131) {
                // 0x1e228ad
                *(int32_t *)v3 = (int32_t)&g131;
                int32_t v6 = *(int32_t *)&g132; // 0x1e228b3
                g2 = v6;
                *(int32_t *)(v3 + 4) = v6;
                *(int32_t *)&g132 = v3;
                int32_t v7 = *(int32_t *)(v3 + 4); // 0x1e228c1
                g2 = v7;
                *(int32_t *)v7 = v3;
            } else {
                // 0x1e22861
                if (g131 == 0) {
                    // 0x1e2286a
                    g131 = &g131;
                }
                // 0x1e22874
                if (*(int32_t *)&g132 == 0) {
                    // 0x1e2287d
                    *(int32_t *)&g132 = (int32_t)&g131;
                }
            }
            int32_t v8 = 0; // ebp
            g2 = 240;
            g5 = 255;
            g7 = 241;
            *(int32_t *)(v3 + 2064) = v5;
            *(int32_t *)(v3 + 8) = v8;
            *(int32_t *)(v3 + 12) = 16;
            int32_t v9 = v8; // 0x1e228e7
            while (true) {
                int32_t v10 = v3 + v9; // 0x1e228e7
                if (v9 < 16) {
                    // 0x1e228ef
                    *(char *)(v10 + 16) = (char)g2;
                } else {
                    // 0x1e228f4
                    *(char *)(v10 + 16) = (char)g5;
                }
                // 0x1e228f7
                v8++;
                *(char *)(v10 + 1040) = (char)g7;
                if (v8 >= 1024) {
                    // break -> 0x1e22906
                    break;
                }
                v9 = v8;
            }
            // 0x1e22906
            g2 = 0;
            g5 = 0x4000;
            __asm_rep_stosd_memset((char *)v5, 0, 0x4000);
            g5 = 0;
            int32_t v11 = *(int32_t *)(v3 + 2064) + 0x10000; // 0x1e22917
            g2 = v11;
            int32_t v12 = v5; // 0x1e2291c
            int32_t result; // 0x1e2294d
            if (v11 > v12) {
                // 0x1e22920
                g7 = 240;
                g5 = 255;
                int32_t v13 = v12 + 8; // 0x1e2292a
                g2 = v13;
                *(int32_t *)v12 = v13;
                *(int32_t *)(v5 + 4) = g7;
                *(char *)(v5 + 248) = (char)g5;
                int32_t v14 = v5 + 0x1000; // 0x1e22938
                v5 = v14;
                int32_t v15 = *(int32_t *)(v3 + 2064) + 0x10000; // 0x1e22944
                g2 = v15;
                result = v3;
                while (v15 > v14) {
                    // 0x1e2292a
                    v12 = v14;
                    v13 = v12 + 8;
                    g2 = v13;
                    *(int32_t *)v12 = v13;
                    *(int32_t *)(v5 + 4) = g7;
                    *(char *)(v5 + 248) = (char)g5;
                    v14 = v5 + 0x1000;
                    v5 = v14;
                    v15 = *(int32_t *)(v3 + 2064) + 0x10000;
                    g2 = v15;
                    result = v3;
                }
            } else {
                result = v3;
            }
            // 0x1e2294d
            g2 = result;
            g3 = *(int32_t *)g9;
            g6 = *(int32_t *)(g9 + 4);
            g8 = *(int32_t *)(g9 + 8);
            g4 = *(int32_t *)(g9 + 12);
            return result;
        }
        // 0x1e22954
        *(int32_t *)(g9 - 4) = 0x8000;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = v5;
        g2 = VirtualFree(&g708, (int32_t)&g708, (int32_t)&g708);
    }
    // 0x1e22962
    if (v3 != (int32_t)&g131) {
        // 0x1e2296a
        *(int32_t *)(g9 - 4) = v3;
        g2 = g676;
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = g2;
        g2 = HeapFree(&g708, (int32_t)&g708, &g708);
    }
    // 0x1e22979
    g2 = 0;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return 0;
}

// Address range: 0x1e22980 - 0x1e229de
int32_t function_1e22980(int32_t a1) {
    int32_t lpAddress = *(int32_t *)(a1 + 2064); // 0x1e2298c
    g2 = lpAddress;
    int32_t v1 = VirtualFree((int32_t *)lpAddress, 0, 0x8000); // 0x1e22993
    g2 = v1;
    int32_t result; // 0x1e229a1
    if (*(int32_t *)&g134 == a1) {
        // 0x1e229a1
        result = *(int32_t *)(a1 + 4);
        g2 = result;
        *(int32_t *)&g134 = result;
    } else {
        result = v1;
    }
    if (a1 == (int32_t)&g131) {
        // 0x1e229d2
        g133 = 0;
        g8 = lpAddress;
        return result;
    }
    int32_t * lpMem = (int32_t *)a1; // 0x1e229b1
    int32_t v2 = *lpMem; // 0x1e229b1
    g2 = v2;
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x1e229b3
    g5 = v3;
    *(int32_t *)v3 = v2;
    int32_t v4 = *(int32_t *)a1; // 0x1e229bb
    g2 = v4;
    int32_t v5 = *(int32_t *)(a1 + 4); // 0x1e229bd
    g7 = v5;
    *(int32_t *)(v4 + 4) = v5;
    g5 = g676;
    int32_t result2 = HeapFree((int32_t *)g676, 0, lpMem); // 0x1e229ca
    g2 = result2;
    g8 = g676;
    return result2;
}

// Address range: 0x1e229e0 - 0x1e22ab7
int32_t function_1e229e0(int32_t a1) {
    int32_t v1 = *(int32_t *)&g132; // 0x1e229e6
    g8 = v1;
    int32_t v2 = g3; // bp-20
    int32_t v3 = &v2; // 0x1e22a05
    int32_t v4; // ebp
    int32_t v5; // ebx
    int32_t v6; // edi
    int32_t v7; // 0x1e22a12
    int32_t v8; // 0x1e22aaf
    while (true) {
        // 0x1e229ed
        int32_t v9; // 0x1e22a9c
        if (*(int32_t *)(v1 + 2064) != 0) {
            // 0x1e229fa
            v4 = 1023;
            v5 = v1 + 1039;
            *(int32_t *)(v3 + 16) = 0;
            v6 = 0x3ff000;
            v7 = v5;
            while (true) {
              lab_0x1e22a12:
                // 0x1e22a12
                if (*(char *)v7 != -16) {
                    goto lab_0x1e22a56;
                } else {
                    // 0x1e22a17
                    *(int32_t *)(g9 - 4) = 0x4000;
                    g2 = *(int32_t *)(g8 + 2064);
                    *(int32_t *)(g9 - 8) = 0x1000;
                    int32_t v10 = v6 + g2; // 0x1e22a27
                    g2 = v10;
                    *(int32_t *)(g9 - 12) = v10;
                    bool v11 = VirtualFree(&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e22a2a
                    g2 = v11;
                    if (!v11) {
                        goto lab_0x1e22a56;
                    } else {
                        // 0x1e22a34
                        *(char *)v5 = -1;
                        g135--;
                        int32_t * v12 = (int32_t *)(g8 + 12); // 0x1e22a3d
                        int32_t v13 = *v12; // 0x1e22a3d
                        g2 = v13;
                        if (v13 == -1) {
                            // 0x1e22a49
                            *v12 = v4;
                            goto lab_0x1e22a4c;
                        } else {
                            if (v4 < v13) {
                                // 0x1e22a49
                                *v12 = v4;
                                goto lab_0x1e22a4c;
                            } else {
                                goto lab_0x1e22a4c;
                            }
                        }
                    }
                }
            }
          lab_0x1e22a62_2:;
            int32_t v14 = g8; // 0x1e22a67
            g2 = v14;
            int32_t v15 = *(int32_t *)(v14 + 4); // 0x1e22a69
            g8 = v15;
            if (*(int32_t *)(g9 + 16) != 0) {
                // 0x1e22a6e
                if (*(char *)(v14 + 16) == -1) {
                    // 0x1e22a74
                    g7 = 1;
                    int32_t v16 = v14 + 17; // 0x1e22a79
                    g5 = v16;
                    int32_t v17 = 1; // 0x1e22a81
                    int32_t v18; // 0x1e22a8b
                    while (true) {
                        // 0x1e22a7c
                        if (*(char *)v16 != -1) {
                            v18 = v17;
                            // break -> 0x1e22a8b
                            break;
                        }
                        int32_t v19 = v17 + 1; // 0x1e22a81
                        g7 = v19;
                        int32_t v20 = v16 + 1; // 0x1e22a82
                        g5 = v20;
                        if (v19 >= 1024) {
                            v18 = 1024;
                            // break -> 0x1e22a8b
                            break;
                        }
                        v17 = v19;
                        v16 = v20;
                    }
                    if (v18 == 1024) {
                        // 0x1e22a93
                        *(int32_t *)(g9 - 4) = v14;
                        g2 = function_1e22980((int32_t)&g708);
                        v8 = g9 + 4;
                        v9 = g8;
                    } else {
                        v8 = g9;
                        v9 = v15;
                    }
                } else {
                    v8 = g9;
                    v9 = v15;
                }
            } else {
                v8 = g9;
                v9 = v15;
            }
        } else {
            v8 = v3;
            v9 = v1;
        }
        // 0x1e22a9c
        if (v9 == *(int32_t *)&g132) {
            // break -> 0x1e22aaf
            break;
        }
        int32_t v21 = *(int32_t *)(v8 + 24); // 0x1e22aa4
        if (v21 >= 0 != v21 != 0) {
            // break -> 0x1e22aaf
            break;
        }
        v3 = v8;
        v1 = v9;
    }
    // 0x1e22aaf
    g3 = *(int32_t *)v8;
    g6 = *(int32_t *)(v8 + 4);
    g8 = *(int32_t *)(v8 + 8);
    g4 = *(int32_t *)(v8 + 12);
    return g2;
  lab_0x1e22a56:;
    int32_t v22 = v6 - 0x1000; // 0x1e22a56
    v6 = v22;
    v4--;
    int32_t v23 = v5 - 1; // 0x1e22a5d
    v5 = v23;
    if (v22 < 0) {
        // break -> 0x1e22a62
        goto lab_0x1e22a62_2;
    }
    v7 = v23;
    goto lab_0x1e22a12;
  lab_0x1e22a4c:;
    int32_t * v24 = (int32_t *)(g9 + 16); // 0x1e22a4c
    *v24 = *v24 + 1;
    int32_t * v25 = (int32_t *)(g9 + 24); // 0x1e22a50
    int32_t v26 = *v25 - 1; // 0x1e22a50
    *v25 = v26;
    if (v26 == 0) {
        // break -> 0x1e22a62
        goto lab_0x1e22a62_2;
    }
    goto lab_0x1e22a56;
}

// Address range: 0x1e22ac0 - 0x1e22b11
int32_t function_1e22ac0(uint32_t a1, int32_t * a2, int32_t * a3) {
    // 0x1e22ac0
    g5 = &g131;
    g7 = a1;
    int32_t v1 = &g131; // 0x1e22ae0
    while (true) {
        uint32_t v2 = *(int32_t *)(v1 + 2064); // 0x1e22ac9
        g2 = v2;
        if (v2 != 0 == v2 < a1) {
            int32_t v3 = v2 + 0x400000; // 0x1e22ad7
            g2 = v3;
            if (v3 > a1) {
                // break -> 0x1e22aed
                break;
            }
        }
        int32_t v4 = *(int32_t *)v1; // 0x1e22ae0
        g5 = v4;
        if (v4 == (int32_t)&g131) {
            // 0x1e22aea
            g2 = 0;
            return 0;
        }
        v1 = v4;
    }
    // 0x1e22aed
    *a2 = v1;
    int32_t v5 = g7 & -0x1000; // 0x1e22af5
    g5 = v5;
    *a3 = v5;
    int32_t v6 = (g7 - v5 - 256) / 16; // 0x1e22b09
    g7 = v6;
    int32_t result = v6 + 8 + g5; // 0x1e22b0c
    g2 = result;
    return result;
}

// Address range: 0x1e22b20 - 0x1e22b66
int32_t function_1e22b20(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e22b20
    g5 = a2;
    g2 = a1;
    int32_t v1 = (a2 - *(int32_t *)(a1 + 2064)) / 0x1000 + a1; // 0x1e22b31
    g2 = v1;
    g5 = a3;
    unsigned char v2 = *(char *)a3; // 0x1e22b37
    g7 = g7 & -256 | (int32_t)v2;
    char * v3 = (char *)(v1 + 16); // 0x1e22b39
    *v3 = *v3 + v2;
    *(char *)g5 = 0;
    *(char *)(g2 + 1040) = -15;
    int32_t result = g2; // 0x1e22b46
    if (*(char *)(result + 16) != -16) {
        // 0x1e22b65
        return result;
    }
    int32_t v4 = g135; // 0x1e22b4c
    g135 = v4 + 1;
    int32_t result2; // 0x1e22b5d
    if (v4 == 31) {
        // 0x1e22b5b
        result2 = function_1e229e0(16);
        g2 = result2;
    } else {
        result2 = result;
    }
    // 0x1e22b65
    return result2;
}

// Address range: 0x1e22b70 - 0x1e22dea
int32_t function_1e22b70(int32_t a1) {
    int32_t v1 = *(int32_t *)&g134; // 0x1e22b73
    g8 = v1;
    g4 = a1;
    while (true) {
        // 0x1e22b7e
        int32_t v2; // 0x1e22c3f
        if (*(int32_t *)(v1 + 2064) != 0) {
            int32_t v3 = *(int32_t *)(v1 + 8); // 0x1e22b8b
            g6 = v3;
            int32_t v4; // 0x1e22bee
            if (v3 < 1024) {
                int32_t v5 = 0x1000 * v3; // 0x1e22b98
                g3 = v5;
                int32_t v6 = v1; // 0x1e22bae
                while (true) {
                    unsigned char v7 = *(char *)(v6 + 16 + v3); // 0x1e22b9b
                    int32_t v8 = v7; // 0x1e22b9b
                    g5 = g5 & -256 | v8;
                    g2 = v8;
                    uint32_t v9 = g4; // 0x1e22ba3
                    int32_t v10; // 0x1e22bdb
                    int32_t v11; // 0x1e22be1
                    int32_t v12;
                    if (v9 <= v8) {
                        if (v7 != -1) {
                            // 0x1e22bac
                            g5 = 0;
                            int32_t v13 = (int32_t)*(char *)(v6 + 1040 + v3); // 0x1e22bae
                            g5 = v13;
                            if (v13 > v9) {
                                // 0x1e22bb9
                                *(int32_t *)(g9 - 4) = v9;
                                *(int32_t *)(g9 - 8) = g2;
                                int32_t v14 = g3 + *(int32_t *)(g8 + 2064); // 0x1e22bc1
                                g2 = v14;
                                *(int32_t *)(g9 - 12) = v14;
                                int32_t result = function_1e22df0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e22bc4
                                g2 = result;
                                if (result != 0) {
                                    // 0x1e22cb0
                                    g3 = *(int32_t *)(g9 + 12);
                                    *(int32_t *)&g134 = g8;
                                    char * v15 = (char *)(g8 + 16 + g6); // 0x1e22cb7
                                    *v15 = *v15 - (char)g4;
                                    *(int32_t *)(g8 + 8) = g6;
                                    g6 = *(int32_t *)g9;
                                    g8 = *(int32_t *)(g9 + 4);
                                    g4 = *(int32_t *)(g9 + 8);
                                    return result;
                                }
                                // 0x1e22bd4
                                *(char *)(g6 + 1040 + g8) = (char)g4;
                                v12 = g8;
                                v11 = g6;
                                v10 = g3;
                            } else {
                                v12 = v6;
                                v11 = v3;
                                v10 = v5;
                            }
                        } else {
                            v12 = v6;
                            v11 = v3;
                            v10 = v5;
                        }
                    } else {
                        v12 = v6;
                        v11 = v3;
                        v10 = v5;
                    }
                    int32_t v16 = v10 + 0x1000; // 0x1e22bdb
                    g3 = v16;
                    int32_t v17 = v11 + 1; // 0x1e22be1
                    g6 = v17;
                    if (v16 >= 0x400000) {
                        v4 = v12;
                        // break -> 0x1e22bea
                        break;
                    }
                    v5 = v16;
                    v6 = v12;
                    v3 = v17;
                }
            } else {
                v4 = v1;
            }
            // 0x1e22bea
            g3 = 0;
            g6 = 0;
            if (*(int32_t *)(v4 + 8) > 0) {
                int32_t v18 = 0; // 0x1e22c3310
                int32_t v19 = v4; // 0x1e22c06
                int32_t v20 = 0; // 0x1e22c06
                while (true) {
                    unsigned char v21 = *(char *)(v19 + 16 + v20); // 0x1e22bf3
                    int32_t v22 = v21; // 0x1e22bf3
                    g5 = g5 & -256 | v22;
                    g2 = v22;
                    uint32_t v23 = g4; // 0x1e22bfb
                    int32_t v24; // 0x1e22c33
                    int32_t v25; // 0x1e22c39
                    int32_t v26; // 0x1e22c3a
                    if (v23 <= v22) {
                        if (v21 != -1) {
                            // 0x1e22c04
                            g5 = 0;
                            int32_t v27 = (int32_t)*(char *)(v19 + 1040 + v20); // 0x1e22c06
                            g5 = v27;
                            if (v27 > v23) {
                                // 0x1e22c11
                                *(int32_t *)(g9 - 4) = v23;
                                *(int32_t *)(g9 - 8) = g2;
                                int32_t v28 = g3 + *(int32_t *)(g8 + 2064); // 0x1e22c19
                                g2 = v28;
                                *(int32_t *)(g9 - 12) = v28;
                                int32_t result2 = function_1e22df0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e22c1c
                                g2 = result2;
                                if (result2 != 0) {
                                    // 0x1e22cc2
                                    g3 = *(int32_t *)(g9 + 12);
                                    *(int32_t *)&g134 = g8;
                                    char * v29 = (char *)(g8 + 16 + g6); // 0x1e22cc9
                                    *v29 = *v29 - (char)g4;
                                    *(int32_t *)(g8 + 8) = g6;
                                    g6 = *(int32_t *)g9;
                                    g8 = *(int32_t *)(g9 + 4);
                                    g4 = *(int32_t *)(g9 + 8);
                                    return result2;
                                }
                                // 0x1e22c2c
                                *(char *)(g6 + 1040 + g8) = (char)g4;
                                v26 = g8;
                                v25 = g6;
                                v24 = g3;
                            } else {
                                v26 = v19;
                                v25 = v20;
                                v24 = v18;
                            }
                        } else {
                            v26 = v19;
                            v25 = v20;
                            v24 = v18;
                        }
                    } else {
                        v26 = v19;
                        v25 = v20;
                        v24 = v18;
                    }
                    int32_t v30 = v24 + 0x1000; // 0x1e22c33
                    g3 = v30;
                    int32_t v31 = v25 + 1; // 0x1e22c39
                    g6 = v31;
                    if (*(int32_t *)(v26 + 8) <= v31) {
                        v2 = v26;
                        // break -> 0x1e22c3f
                        break;
                    }
                    v18 = v30;
                    v19 = v26;
                    v20 = v31;
                }
            } else {
                v2 = v4;
            }
        } else {
            v2 = v1;
        }
        int32_t v32 = *(int32_t *)v2; // 0x1e22c3f
        g8 = v32;
        if (v32 == *(int32_t *)&g134) {
            // break -> 0x1e22c4d
            break;
        }
        v1 = v32;
    }
    int32_t v33 = &g131; // esi
    g2 = 0;
    g5 = -1;
    int32_t v34 = &g131; // 0x1e22c66
    int32_t v35; // 0x1e22cd9
    int32_t v36; // 0x1e22c61
    while (true) {
        // 0x1e22c59
        if (*(int32_t *)(v34 + 2064) != 0) {
            // 0x1e22c61
            v36 = *(int32_t *)(v34 + 12);
            if (v36 != -1) {
                // 0x1e22cd4
                g7 = v36;
                v35 = v36 + 16;
                if (v35 < 1024) {
                    goto lab_0x1e22ce9;
                } else {
                    v35 = 1024;
                    goto lab_0x1e22ce9;
                }
            }
        }
        int32_t v37 = *(int32_t *)v34; // 0x1e22c66
        v33 = v37;
        if (v37 == (int32_t)&g131) {
            // break -> 0x1e22c70
            break;
        }
        v34 = v37;
    }
    int32_t v38 = function_1e22810(); // 0x1e22c70
    g2 = v38;
    if (v38 == 0) {
        // 0x1e22de3
        g2 = 0;
        g3 = *(int32_t *)g9;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        g4 = *(int32_t *)(g9 + 12);
        return 0;
    }
    int32_t * v39 = (int32_t *)(v38 + 2064); // 0x1e22c7d
    int32_t v40 = *v39; // 0x1e22c7d
    g7 = v40;
    g5 = g4 + v40;
    *(char *)(v40 + 8) = (char)g4;
    *(int32_t *)&g134 = v38;
    *(int32_t *)g7 = g5 + 8;
    int32_t v41 = 240 - g4; // 0x1e22c98
    g5 = v41;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    *(int32_t *)(g7 + 4) = v41;
    g8 = *(int32_t *)g9;
    char * v42 = (char *)(v38 + 16); // 0x1e22ca0
    *v42 = *v42 - (char)g4;
    int32_t v43 = *v39; // 0x1e22ca3
    g2 = v43;
    g4 = *(int32_t *)g9;
    int32_t result3 = v43 + 256; // 0x1e22caa
    g2 = result3;
    return result3;
  lab_0x1e22ce9:
    // 0x1e22ce9
    g5 = v35;
    int32_t v44 = v36 + 1; // 0x1e22ce9
    int32_t v45 = v44; // edi
    if (v35 > v44) {
        // 0x1e22cee
        g2 = 255;
        goto lab_0x1e22cf3;
    } else {
        goto lab_0x1e22cfe;
    }
  lab_0x1e22cfe:
    // 0x1e22cfe
    *(int32_t *)(g9 - 4) = 4;
    int32_t v46 = 0x1000 * v36; // ebp
    *(int32_t *)(g9 - 8) = 0x1000;
    int32_t v47 = 0x1000 * (v45 - g7); // 0x1e22d0e
    g2 = v47;
    *(int32_t *)(g9 - 12) = v47;
    int32_t v48 = v46 + *(int32_t *)(v33 + 2064); // 0x1e22d18
    g2 = v48;
    *(int32_t *)(g9 - 16) = v48;
    int32_t * memory = VirtualAlloc(&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e22d1b
    int32_t v49 = (int32_t)memory; // 0x1e22d1b
    g2 = v49;
    int32_t * v50 = (int32_t *)(v33 + 2064); // 0x1e22d21
    if (v49 != *v50 + v46) {
        // 0x1e22ddc
        g2 = 0;
        g3 = *(int32_t *)g9;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        g4 = *(int32_t *)(g9 + 12);
        return 0;
    }
    int32_t v51 = *(int32_t *)(v33 + 12); // 0x1e22d2f
    int32_t v52 = *v50 + 0x1000 * v51; // 0x1e22d37
    int32_t v53 = v45; // 0x1e22d3d
    int32_t v54; // 0x1e22d77
    int32_t v55; // 0x1e22d9c
    if (v51 < v53) {
        // 0x1e22d41
        g2 = 240;
        goto lab_0x1e22d46;
    } else {
        v54 = v53;
        v55 = v33;
        goto lab_0x1e22d71;
    }
  lab_0x1e22cf3:
    // 0x1e22cf3
    if (*(char *)(v34 + 16 + v44) != -1) {
        goto lab_0x1e22cfe;
    } else {
        int32_t v56 = v44 + 1; // 0x1e22cf9
        v45 = v56;
        if (v35 > v56) {
            v44 = v56;
            goto lab_0x1e22cf3;
        } else {
            goto lab_0x1e22cfe;
        }
    }
  lab_0x1e22d71:
    // 0x1e22d71
    *(int32_t *)&g134 = v55;
    int32_t v57; // 0x1e22d8a
    int32_t v58; // 0x1e22d96
    if (v54 < 1024) {
        // 0x1e22d7f
        g2 = 255;
        v57 = v54;
        goto lab_0x1e22d84;
    } else {
        v58 = v54;
        goto lab_0x1e22d93;
    }
  lab_0x1e22d46:
    // 0x1e22d46
    v46 = v51 + 1;
    *(int32_t *)v52 = v52 + 8;
    int32_t v59 = v52; // 0x1e22d4c
    v52 = v59 + 0x1000;
    g5 = v46 - 1 + v33;
    *(int32_t *)(v59 + 4) = g2;
    *(char *)(v52 - 3848) = -1;
    *(char *)(g5 + 16) = (char)g2;
    *(char *)(g5 + 1040) = -15;
    if (v46 < v45) {
        // 0x1e22d46
        v51 = v46;
        goto lab_0x1e22d46;
    } else {
        // 0x1e22d71
        v54 = v45;
        v55 = v33;
        goto lab_0x1e22d71;
    }
  lab_0x1e22d93:;
    int32_t * v60 = (int32_t *)(v55 + 12); // 0x1e22d93
    g5 = *v60;
    *v60 = -1;
    if (v58 < 1024) {
        // 0x1e22da5
        *(int32_t *)(v33 + 12) = v45;
        goto lab_0x1e22da8;
    } else {
        goto lab_0x1e22da8;
    }
  lab_0x1e22d84:
    // 0x1e22d84
    if (*(char *)(v55 + 16 + v57) == -1) {
        v58 = v57;
        goto lab_0x1e22d93;
    } else {
        int32_t v61 = v57 + 1; // 0x1e22d8a
        v45 = v61;
        if (v61 < 1024) {
            v57 = v61;
            goto lab_0x1e22d84;
        } else {
            v58 = 1024;
            goto lab_0x1e22d93;
        }
    }
  lab_0x1e22da8:;
    int32_t v62 = 0x1000 * g5; // 0x1e22db0
    g7 = v62;
    int32_t v63 = *(int32_t *)(v33 + 2064) + v62; // 0x1e22db3
    g2 = v63;
    *(char *)(v63 + 8) = (char)g4;
    *(int32_t *)(v33 + 8) = g5;
    char * v64 = (char *)(g5 + 16 + v33); // 0x1e22dbb
    *v64 = *v64 - (char)g4;
    int32_t v65 = g2; // 0x1e22dbf
    int32_t v66 = g4 + 8 + v65; // 0x1e22dc2
    g5 = v66;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    *(int32_t *)v65 = v66;
    int32_t * v67 = (int32_t *)(g2 + 4); // 0x1e22dc9
    *v67 = *v67 - g4;
    int32_t v68 = *(int32_t *)(v33 + 2064); // 0x1e22dcc
    g2 = v68;
    g8 = *(int32_t *)g9;
    g4 = *(int32_t *)(g9 + 4);
    int32_t result4 = v68 + 256 + g7; // 0x1e22dd4
    g2 = result4;
    return result4;
}

// Address range: 0x1e22df0 - 0x1e22f6c
int32_t function_1e22df0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e22df0
    g2 = a1;
    g7 = a3;
    int32_t v1 = g6; // bp-12
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x1e22dfb
    g5 = v2;
    int32_t v3 = g3; // bp-16
    int32_t v4 = *(int32_t *)a1; // 0x1e22dff
    int32_t v5 = v4; // ebp
    if (v2 >= a3) {
        // 0x1e22e07
        g5 = a1 + 248;
        *(char *)v4 = (char)a3;
        int32_t v6 = g2; // 0x1e22e1d
        if (v4 + a3 >= g5) {
            // 0x1e22e1d
            *(int32_t *)(v6 + 4) = 0;
            int32_t v7 = g2; // 0x1e22e24
            int32_t v8 = v7 + 8; // 0x1e22e24
            g5 = v8;
            *(int32_t *)v7 = v8;
        } else {
            int32_t * v9 = (int32_t *)v6; // 0x1e22e16
            *v9 = g7 + *v9;
            int32_t * v10 = (int32_t *)(g2 + 4); // 0x1e22e18
            *v10 = *v10 - g7;
        }
        int32_t v11 = g2; // 0x1e22e29
        g3 = v3;
        int32_t result = v11 + 128 + 16 * (v4 - v11); // 0x1e22e2f
        g2 = result;
        g6 = v1;
        return result;
    }
    int32_t v12 = v4 + v2; // 0x1e22e3a
    g5 = v12;
    if (*(char *)v12 != 0) {
        // 0x1e22e41
        v5 = v12;
    } else {
        v12 = v4;
    }
    int32_t v13 = a1 + 248; // 0x1e22e46
    g5 = v13;
    uint32_t v14; // 0x1e22ee4
    int32_t v15; // 0x1e22f4c
    uint32_t v16; // 0x1e22f43
    if (v12 + a3 < v13) {
        int32_t v17 = a1; // 0x1e22ebe
        int32_t v18 = a3; // 0x1e22eb5
        int32_t v19 = v12; // 0x1e22e90
        int32_t v20; // 0x1e22e92
        int32_t v21; // 0x1e22e95
        while (true) {
            unsigned char v22 = *(char *)v19; // 0x1e22e58
            int32_t v23 = v22; // 0x1e22e58
            g5 = v23 | v13 & -256;
            int32_t v24; // 0x1e22e90
            if (v22 != 0) {
                // 0x1e22e8c
                v24 = v23 + v19;
                v5 = v24;
                v21 = v17;
                v20 = v18;
            } else {
                int32_t v25 = v19 + 1; // 0x1e22e5f
                g5 = v25;
                int32_t v26; // 0x1e22e88
                int32_t v27; // 0x1e22eb5
                if (*(char *)v25 == 0) {
                    int32_t v28 = 1; // 0x1e22e6d
                    int32_t v29 = v25; // 0x1e22e6c
                    while (true) {
                        int32_t v30 = v29 + 1; // 0x1e22e6c
                        g5 = v30;
                        int32_t v31 = v28 + 1; // 0x1e22e6d
                        if (*(char *)v30 != 0) {
                            v26 = v30;
                            v27 = v31;
                            // break -> 0x1e22e73
                            break;
                        }
                        v28 = v31;
                        v29 = v30;
                    }
                } else {
                    v26 = v25;
                    v27 = 1;
                }
                int32_t v32 = v27 - v18; // 0x1e22e73
                if (v27 >= v18) {
                    int32_t v33 = v19 + v18; // 0x1e22ea8
                    int32_t v34 = v17 + 248; // 0x1e22eab
                    g5 = v34;
                    if (v33 >= v34) {
                        // 0x1e22ebe
                        *(int32_t *)(v17 + 4) = 0;
                        int32_t v35 = g2; // 0x1e22ec5
                        int32_t v36 = v35 + 8; // 0x1e22ec5
                        g5 = v36;
                        *(int32_t *)v35 = v36;
                        goto lab_0x1e22eca;
                    } else {
                        // 0x1e22eb5
                        *(int32_t *)v17 = v33;
                        *(int32_t *)(g2 + 4) = v32;
                        goto lab_0x1e22eca;
                    }
                }
                // 0x1e22e77
                if (v4 != v19) {
                    int32_t v37 = a2 - v27; // 0x1e22e82
                    a2 = v37;
                    if (v18 > v37) {
                        // 0x1e22ea1
                        g2 = 0;
                        g3 = v3;
                        g6 = v1;
                        return 0;
                    }
                    // 0x1e22e88
                    v5 = v26;
                    v21 = v17;
                    v24 = v26;
                    v20 = v18;
                } else {
                    // 0x1e22e7b
                    v5 = v26;
                    *(int32_t *)(v17 + 4) = v27;
                    v21 = g2;
                    v24 = v5;
                    v20 = g7;
                }
            }
            int32_t v38 = v21 + 248; // 0x1e22e95
            g5 = v38;
            if (v20 + v24 >= v38) {
                // break -> 0x1e22ede
                break;
            }
            v17 = v21;
            v18 = v20;
            v13 = v38;
            v19 = v24;
        }
        // 0x1e22ede
        v16 = v20;
        v14 = v4;
        v15 = v21;
    } else {
        v16 = a3;
        v14 = v4;
        v15 = a1;
    }
    int32_t v39 = v15 + 8; // 0x1e22ede
    v5 = v39;
    if (v14 > v39) {
        int32_t v40 = v15 + 247; // 0x1e22eeb
        while (true) {
            int32_t v41 = v39 + v16; // 0x1e22ee8
            g5 = v40;
            if (v41 > v40) {
                // break -> 0x1e22f28
                break;
            }
            unsigned char v42 = *(char *)v39; // 0x1e22ef5
            int32_t v43 = v42; // 0x1e22ef5
            g5 = v43 | v40 & -256;
            int32_t v44;
            if (v42 != 0) {
                // 0x1e22f1e
                v44 = v43 + v39;
            } else {
                int32_t v45 = v39 + 1; // 0x1e22efc
                g5 = v45;
                int32_t v46; // 0x1e22f1a
                int32_t v47; // 0x1e22f43
                if (*(char *)v45 == 0) {
                    int32_t v48 = 1; // 0x1e22f0a
                    int32_t v49 = v45; // 0x1e22f09
                    while (true) {
                        int32_t v50 = v49 + 1; // 0x1e22f09
                        g5 = v50;
                        int32_t v51 = v48 + 1; // 0x1e22f0a
                        if (*(char *)v50 != 0) {
                            v46 = v50;
                            v47 = v51;
                            // break -> 0x1e22f10
                            break;
                        }
                        v48 = v51;
                        v49 = v50;
                    }
                } else {
                    v46 = v45;
                    v47 = 1;
                }
                int32_t v52 = v47 - v16; // 0x1e22f10
                if (v47 >= v16) {
                    int32_t v53 = v15 + 248; // 0x1e22f39
                    g5 = v53;
                    if (v41 >= v53) {
                        // 0x1e22f4c
                        *(int32_t *)(v15 + 4) = 0;
                        int32_t v54 = g2; // 0x1e22f53
                        int32_t v55 = v54 + 8; // 0x1e22f53
                        g5 = v55;
                        *(int32_t *)v54 = v55;
                        goto lab_0x1e22f58;
                    } else {
                        // 0x1e22f43
                        *(int32_t *)v15 = v41;
                        *(int32_t *)(g2 + 4) = v52;
                        goto lab_0x1e22f58;
                    }
                }
                int32_t v56 = a2 - v47; // 0x1e22f14
                a2 = v56;
                if (v16 > v56) {
                    // 0x1e22f2f
                    g2 = 0;
                    g3 = v3;
                    g6 = v1;
                    return 0;
                }
                v44 = v46;
            }
            // 0x1e22f24
            v5 = v44;
            if (v14 <= v44) {
                // break -> 0x1e22f28
                break;
            }
            v39 = v44;
        }
    }
    // 0x1e22f28
    g2 = 0;
    g3 = v3;
    g6 = v1;
    return 0;
  lab_0x1e22eca:
    // 0x1e22eca
    *(char *)v5 = (char)g7;
    int32_t v57 = g2; // 0x1e22ecd
    int32_t result2 = v57 + 128 + 16 * (v5 - v57); // 0x1e22ed2
    g2 = result2;
    g3 = v3;
    g6 = v1;
    return result2;
  lab_0x1e22f58:
    // 0x1e22f58
    *(char *)v5 = (char)g7;
    int32_t v58 = g2; // 0x1e22f5b
    int32_t result3 = v58 + 128 + 16 * (v5 - v58); // 0x1e22f60
    g2 = result3;
    g3 = v3;
    g6 = v1;
    return result3;
}

// Address range: 0x1e22f70 - 0x1e23038
int32_t function_1e22f70(int32_t a1, int32_t a2, int32_t a3, uint32_t a4) {
    // 0x1e22f70
    g2 = 0;
    int32_t v1 = g8; // bp-8
    int32_t v2 = g6; // bp-12
    g5 = a4;
    int32_t v3 = g3; // bp-16
    char * v4 = (char *)a3; // 0x1e22f80
    unsigned char v5 = *v4; // 0x1e22f80
    uint32_t v6 = (int32_t)v5; // 0x1e22f80
    g7 = v6;
    if (v6 > a4) {
        // 0x1e22f86
        g2 = a1;
        char v7 = a4; // 0x1e22f90
        g7 = v5 - v7;
        *v4 = v7;
        int32_t v8 = g2; // 0x1e22f94
        int32_t v9 = *(int32_t *)(v8 + 2064); // 0x1e22f94
        g3 = v3;
        char * v10 = (char *)(v8 + 16 + (a2 - v9) / 0x1000); // 0x1e22f9e
        *v10 = (char)g7 + *v10;
        g6 = v2;
        int32_t v11 = g2; // 0x1e22fa3
        *(char *)(v11 + 1040 + (a2 - *(int32_t *)(v11 + 2064)) / 0x1000) = -15;
        g2 = 1;
        g8 = v1;
        return 1;
    }
    if (v6 >= a4) {
        // 0x1e23033
        return 0;
    }
    uint32_t v12 = a4 + a3; // 0x1e22fbe
    int32_t v13 = v12; // edi
    if (v12 > a2 + 248) {
        // 0x1e23033
        return 0;
    }
    int32_t v14 = v6 + a3; // 0x1e22fcf
    int32_t v15;
    if (v14 < v12) {
        int32_t v16 = v14; // 0x1e22fdc
        int32_t v17; // 0x1e22fe1
        while (true) {
            // 0x1e22fd6
            if (*(char *)v16 != 0) {
                v17 = v16;
                // break -> 0x1e22fe1
                break;
            }
            int32_t v18 = v16 + 1; // 0x1e22fdc
            if (v18 >= v12) {
                v17 = v18;
                // break -> 0x1e22fe1
                break;
            }
            v16 = v18;
        }
        v15 = v17;
    } else {
        v15 = v14;
    }
    if (v15 != v12) {
        // 0x1e23033
        return 0;
    }
    // 0x1e22fe5
    *v4 = (char)a4;
    int32_t * v19 = (int32_t *)a2; // 0x1e22fe7
    uint32_t v20 = *v19; // 0x1e22fe7
    g2 = v20;
    if (a3 <= v20) {
        if (v20 < v13) {
            if (a2 + 248 > v13) {
                // 0x1e22ffb
                g2 = 0;
                *v19 = v13;
                int32_t v21 = g2; // 0x1e22fff
                int32_t v22; // 0x1e2300a
                if (*(char *)v13 == (char)v21) {
                    int32_t v23 = v21 + 1; // 0x1e23003
                    g2 = v23;
                    v22 = v23;
                    while (*(char *)(v13 + 1) == 0) {
                        // 0x1e23003
                        v13++;
                        v23++;
                        g2 = v23;
                        v22 = v23;
                    }
                } else {
                    v22 = v21;
                }
                // 0x1e2300a
                *(int32_t *)(a2 + 4) = v22;
            } else {
                // 0x1e2300f
                *(int32_t *)(a2 + 4) = 0;
                int32_t v24 = a2 + 8; // 0x1e23016
                g2 = v24;
                *(int32_t *)a2 = v24;
            }
        }
    }
    // 0x1e2301b
    g2 = a1;
    int32_t v25 = g7; // 0x1e2301f
    unsigned char v26 = (char)v25 - (char)g5; // 0x1e2301f
    g7 = (int32_t)v26 | v25 & -256;
    char * v27 = (char *)(a1 + 16 + (a2 - *(int32_t *)(a1 + 2064)) / 0x1000); // 0x1e2302a
    *v27 = *v27 + v26;
    g2 = 1;
    // 0x1e23033
    g3 = v3;
    g6 = v2;
    g8 = v1;
    return 1;
}

// Address range: 0x1e23040 - 0x1e230d2
int32_t function_1e23040(int32_t * a1) {
    int32_t v1 = 0; // esi
    if (g137 == 0) {
        int32_t * moduleHandle = LoadLibraryA("user32.dll"); // 0x1e23052
        g2 = (int32_t)moduleHandle;
        if (moduleHandle == NULL) {
            // 0x1e230cc
            g2 = 0;
            return 0;
        }
        int32_t (*func)() = GetProcAddress(moduleHandle, "MessageBoxA"); // 0x1e2306a
        int32_t v2 = (int32_t)func; // 0x1e2306a
        g2 = v2;
        g137 = v2;
        if (func == NULL) {
            // 0x1e230cc
            g2 = 0;
            return 0;
        }
        int32_t func2 = (int32_t)GetProcAddress(moduleHandle, "GetActiveWindow"); // 0x1e2307b
        g2 = func2;
        g138 = func2;
        int32_t func3 = (int32_t)GetProcAddress(moduleHandle, "GetLastActivePopup"); // 0x1e23088
        g2 = func3;
        g139 = func3;
    }
    // 0x1e2308f
    g2 = g138;
    int32_t v3;
    if (g138 == 0) {
        // 0x1e2309c
        v3 = v1;
        if (v3 == 0) {
            goto lab_0x1e230b2;
        } else {
            goto lab_0x1e230a0;
        }
    } else {
        // 0x1e2309c
        v1 = g138;
        v3 = g138;
        goto lab_0x1e230a0;
    }
  lab_0x1e230b2:;
    int32_t v4 = *(int32_t *)(g9 + 24); // 0x1e230b2
    g2 = v4;
    g5 = *(int32_t *)(g9 + 20);
    g7 = *(int32_t *)(g9 + 16);
    *(int32_t *)(g9 - 4) = v4;
    *(int32_t *)(g9 - 8) = g5;
    *(int32_t *)(g9 - 12) = g7;
    *(int32_t *)(g9 - 16) = v1;
    return g2;
  lab_0x1e230a0:
    // 0x1e230a0
    if (g139 != 0) {
        // 0x1e230a9
        *(int32_t *)(g9 - 4) = v3;
        v1 = g138;
    }
    goto lab_0x1e230b2;
}

