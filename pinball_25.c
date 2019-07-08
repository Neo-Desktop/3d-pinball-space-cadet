
// Address range: 0x1e400f0 - 0x1e4011b
int32_t function_1e400f0(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e400f0
    int32_t v2 = g6; // bp-8
    g8 = a2;
    if (a2 == 0) {
        // 0x1e40118
        g8 = v1;
        return g2;
    }
    // 0x1e400fa
    g5 = -1;
    g2 = 0;
    int32_t v3 = a1; // 0x1e40107
    int32_t v4 = -1; // 0x1e40107
    int32_t v5; // 0x1e40109
    while (true) {
        if (v4 == 0) {
            v5 = 0;
            // break -> bb16
            break;
        }
        int32_t v6 = v4 - 1; // 0x1e40107
        g5 = v6;
        if (*(char *)v3 == 0) {
            v5 = v6;
            // break -> bb16
            break;
        }
        v3 += (g1 ? -1 : 1);
        v4 = v6;
    }
    int32_t v7 = -1 - v5; // 0x1e40109
    g5 = v7;
    int32_t result = function_1e3e040(a2 + a1, a1, v7); // 0x1e40110
    g2 = result;
    // 0x1e40118
    g6 = v2;
    g8 = v1;
    return result;
}

// Address range: 0x1e40120 - 0x1e401b1
int32_t function_1e40120(uint32_t a1, int32_t a2) {
    // 0x1e40120
    g5 = a1;
    int32_t v1 = g4; // bp-12
    int32_t v2 = a1 + 1; // 0x1e40128
    g2 = v2;
    if (v2 < 257) {
        int32_t v3 = (int32_t)g122; // 0x1e40132
        g7 = v3;
        g2 = 0;
        int32_t result = (int32_t)*(int16_t *)(v3 + 2 * a1) & a2; // 0x1e4013e
        g2 = result;
        return result;
    }
    int32_t v4 = a1 / 256 & 255; // 0x1e40147
    int32_t v5 = g7 & -256 | v4; // 0x1e40147
    g7 = v5;
    int32_t v6 = (int32_t)g122; // 0x1e4014d
    g2 = v6;
    char v7 = *(char *)(v6 + (2 * v4 | 1)); // 0x1e40152
    int32_t v8 = v7 > -1 ? a1 : v5; // bp-4
    int32_t v9; // bp-6
    g5 = &v9;
    g2 = &v8;
    int32_t v10 = function_1e42510(1, (char *)&v8, 2 - (int32_t)(v7 > -1), &v9, 0, 0); // 0x1e4018c
    g2 = v10;
    if (v10 == 0) {
        // 0x1e40198
        g2 = 0;
        g4 = v1;
        return 0;
    }
    int32_t result2 = a2 & 0xffff & v9; // 0x1e401a8
    g2 = result2;
    g4 = v1;
    return result2;
}

// Address range: 0x1e40200 - 0x1e40250
int32_t function_1e40200(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e40200
    if (g456 == 0) {
        // 0x1e40209
        g5 = a3;
        g2 = a1;
        int32_t result = function_1e40940(1, a1, a2, a3, 0, 0, a2, a3, a4); // 0x1e40225
        g2 = result;
        return result;
    }
    // 0x1e4022e
    *(int32_t *)function_1e23ad0() = 33;
    g2 = a4;
    int32_t result2 = function_1e40ad0(a4, 0xffff); // 0x1e40243
    g2 = result2;
    g11--;
    g684 = (int64_t)a2;
    return result2;
}

// Address range: 0x1e40250 - 0x1e4030b
int32_t function_1e40250(int32_t a1, int32_t a2, int32_t a3, int32_t a4, float80_t a5, int32_t a6, int32_t a7) {
    float64_t v1 = a5; // bp+20
    int32_t v2 = a7; // bp+28
    g2 = a7;
    g5 = &v1;
    int32_t v3 = g8; // 0x1e4025b
    int32_t v4 = g6; // 0x1e4025c
    g8 = a1;
    int32_t v5 = function_1e40680(a1, (int32_t *)&v1, a7, v4, v3); // 0x1e40264
    g2 = v5;
    if (v5 != 0) {
        // 0x1e4029c
        g6 = a2;
    } else {
        // 0x1e40270
        g6 = a2;
        g2 = &v2;
        int32_t v6; // bp-88
        g5 = &v6;
        g2 = function_1e40310(&v6, &v2, g8, a2, &a3, (int32_t *)&v1);
    }
    int32_t v7 = function_1e40a50(g8); // 0x1e402a1
    g2 = v7;
    if (g456 == 0) {
        if (v7 != 0) {
            float64_t v8 = v1; // 0x1e402be
            g8 = (float32_t)v8;
            g5 = a4;
            int32_t result = function_1e40940(v7, g6, a3, a4, 0, 0, (int32_t)(float32_t)v8, a6, v2); // 0x1e402d5
            g2 = result;
            g6 = v4;
            return result;
        }
    }
    // 0x1e402e3
    function_1e409f0(v7);
    int32_t v9 = v2; // 0x1e402e9
    g2 = v9;
    int32_t result2 = function_1e40ad0(v9, 0xffff); // 0x1e402f9
    g2 = result2;
    g11--;
    g684 = v1;
    g6 = v4;
    return result2;
}

// Address range: 0x1e40310 - 0x1e4066a
int32_t function_1e40310(int32_t * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t * a5, int32_t * a6) {
    int32_t v1 = (int32_t)a5;
    int32_t v2 = (int32_t)a1;
    int32_t lpArguments = v2;
    g5 = 0;
    int32_t v3 = g4; // 0x1e40319
    int32_t v4 = g8; // 0x1e4031a
    *(int32_t *)(v2 + 4) = 0;
    *(int32_t *)(lpArguments + 8) = g5;
    int32_t v5 = lpArguments; // 0x1e40326
    g2 = v5;
    *(int32_t *)(v5 + 12) = g5;
    g5 = a3;
    if ((a3 & 16) == 0) {
        // branch -> 0x1e40349
    } else {
        // 0x1e40336
        g8 = -0x3fffff71;
        int32_t v6 = lpArguments; // 0x1e4033b
        g2 = v6;
        int32_t * v7 = (int32_t *)(v6 + 4); // 0x1e4033f
        *v7 = *v7 | 1;
        a3 = g5;
    }
    int32_t v8; // 0x1e4035b
    if ((a3 & 2) != 0) {
        // 0x1e4034e
        g8 = -0x3fffff6d;
        int32_t v9 = lpArguments; // 0x1e40353
        g2 = v9;
        int32_t * v10 = (int32_t *)(v9 + 4); // 0x1e40357
        *v10 = *v10 | 2;
        v8 = g5;
    } else {
        v8 = a3;
    }
    int32_t v11; // 0x1e4036d
    if ((v8 & 1) != 0) {
        // 0x1e40360
        g8 = -0x3fffff6f;
        int32_t v12 = lpArguments; // 0x1e40365
        g2 = v12;
        int32_t * v13 = (int32_t *)(v12 + 4); // 0x1e40369
        *v13 = *v13 | 4;
        v11 = g5;
    } else {
        v11 = v8;
    }
    int32_t v14; // 0x1e4037f
    if ((v11 & 4) != 0) {
        // 0x1e40372
        g8 = -0x3fffff72;
        int32_t v15 = lpArguments; // 0x1e40377
        g2 = v15;
        int32_t * v16 = (int32_t *)(v15 + 4); // 0x1e4037b
        *v16 = *v16 | 8;
        v14 = g5;
    } else {
        v14 = v11;
    }
    if ((v14 & 8) != 0) {
        // 0x1e40384
        g8 = -0x3fffff70;
        int32_t v17 = lpArguments; // 0x1e40389
        g2 = v17;
        int32_t * v18 = (int32_t *)(v17 + 4); // 0x1e4038d
        *v18 = *v18 | 16;
    }
    // 0x1e40391
    g4 = (int32_t)a2;
    int32_t v19 = lpArguments + 8; // 0x1e40399
    g2 = v19;
    int32_t * v20 = (int32_t *)v19; // 0x1e403a0
    int32_t v21 = *v20; // 0x1e403a0
    g5 = v21;
    *v20 = (v21 ^ 16 * (-1 - *a2)) & 16 ^ v21;
    int32_t v22 = *(int32_t *)g4 & 4; // 0x1e403b7
    int32_t v23 = lpArguments + 8; // 0x1e403ba
    g5 = v23;
    g2 = v22 == 0;
    int32_t * v24 = (int32_t *)v23; // 0x1e403c2
    int32_t v25 = (2 * v22 | *v24 & -9) ^ 8; // 0x1e403ce45
    g2 = v25;
    *v24 = v25;
    uint32_t v26 = *(int32_t *)g4 & 8; // 0x1e403d8
    g2 = v26 == 0;
    int32_t * v27 = (int32_t *)(lpArguments + 8); // 0x1e403e3
    int32_t v28 = *v27; // 0x1e403e3
    g5 = v28;
    int32_t v29 = (v26 / 2 | v28 & -5) ^ 4; // 0x1e403ef46
    g2 = v29;
    *v27 = v29;
    int32_t v30 = *(int32_t *)g4 & 16; // 0x1e403fc
    g2 = v30;
    int32_t * v31 = (int32_t *)(lpArguments + 8); // 0x1e403ff
    int32_t v32 = *v31; // 0x1e403ff
    g5 = v32;
    int32_t v33 = (v30 >> 3 | v32 & -3) ^ 2; // 0x1e4040f47
    g2 = v33;
    *v31 = v33;
    int32_t v34 = *(int32_t *)g4; // 0x1e40413
    int32_t v35 = lpArguments + 8; // 0x1e4041c
    g5 = v35;
    g2 = (v34 & 32) == 0;
    int32_t * v36 = (int32_t *)v35; // 0x1e40424
    int32_t v37 = *v36 & -2 | (int32_t)((v34 & 32) == 0); // 0x1e4042d48
    g2 = v37;
    *v36 = v37;
    int32_t v38 = function_1e40a90(g6, v4, v3); // 0x1e40431
    g2 = v38;
    int32_t v39; // 0x1e40442
    if ((v38 & 1) != 0) {
        int32_t v40 = lpArguments; // 0x1e4043a
        g5 = v40;
        int32_t * v41 = (int32_t *)(v40 + 12); // 0x1e4043e
        *v41 = *v41 | 16;
        v39 = g2;
    } else {
        v39 = v38;
    }
    int32_t v42; // 0x1e4044e
    if ((v39 & 4) != 0) {
        int32_t v43 = lpArguments; // 0x1e40446
        g5 = v43;
        int32_t * v44 = (int32_t *)(v43 + 12); // 0x1e4044a
        *v44 = *v44 | 8;
        v42 = g2;
    } else {
        v42 = v39;
    }
    int32_t v45; // 0x1e4045a
    if ((v42 & 8) != 0) {
        int32_t v46 = lpArguments; // 0x1e40452
        g5 = v46;
        int32_t * v47 = (int32_t *)(v46 + 12); // 0x1e40456
        *v47 = *v47 | 4;
        v45 = g2;
    } else {
        v45 = v42;
    }
    int32_t v48; // 0x1e40466
    if ((v45 & 16) != 0) {
        int32_t v49 = lpArguments; // 0x1e4045e
        g5 = v49;
        int32_t * v50 = (int32_t *)(v49 + 12); // 0x1e40462
        *v50 = *v50 | 2;
        v48 = g2;
    } else {
        v48 = v45;
    }
    if ((v48 & 32) != 0) {
        int32_t v51 = lpArguments; // 0x1e4046a
        g2 = v51;
        int32_t * v52 = (int32_t *)(v51 + 12); // 0x1e4046e
        *v52 = *v52 | 1;
    }
    int32_t v53 = *(int32_t *)g4 & 3072; // 0x1e40474
    g2 = v53;
    if (v53 < 1025) {
        if (v53 == 1024) {
            int32_t v54 = lpArguments; // 0x1e404a1
            g2 = v54;
            g5 = v54;
            int32_t * v55 = (int32_t *)v54; // 0x1e404a9
            int32_t v56 = *v55 & -4 | 1; // 0x1e404ae
            g2 = v56;
            *v55 = v56;
        } else {
            if (v53 == 0) {
                int32_t v57 = lpArguments; // 0x1e40498
                g2 = v57;
                int32_t * v58 = (int32_t *)v57; // 0x1e4049c
                *v58 = *v58 & -4;
            }
        }
    } else {
        if (v53 == 2048) {
            int32_t v59 = lpArguments; // 0x1e404b5
            g2 = v59;
            g5 = v59;
            int32_t * v60 = (int32_t *)v59; // 0x1e404bd
            int32_t v61 = *v60 & -4 | 2; // 0x1e404c2
            g2 = v61;
            *v60 = v61;
        } else {
            if (v53 == 3072) {
                int32_t v62 = lpArguments; // 0x1e404c9
                g2 = v62;
                int32_t * v63 = (int32_t *)v62; // 0x1e404cd
                *v63 = *v63 | 3;
            }
        }
    }
    int32_t v64 = *(int32_t *)g4 & 768; // 0x1e404d2
    g2 = v64;
    if (v64 == 0) {
        int32_t v65 = lpArguments; // 0x1e404e9
        g2 = v65;
        int32_t * v66 = (int32_t *)v65; // 0x1e404ed
        int32_t v67 = *v66 & -29 | 8; // 0x1e404f2
        g5 = v67;
        *v66 = v67;
    } else {
        if (v64 == 512) {
            int32_t v68 = lpArguments; // 0x1e404f9
            g2 = v68;
            g5 = v68;
            int32_t * v69 = (int32_t *)v68; // 0x1e40501
            int32_t v70 = *v69 & -29 | 4; // 0x1e40506
            g2 = v70;
            *v69 = v70;
        } else {
            if (v64 == 768) {
                int32_t v71 = lpArguments; // 0x1e4050d
                g2 = v71;
                int32_t * v72 = (int32_t *)v71; // 0x1e40511
                *v72 = *v72 & -29;
            }
        }
    }
    int32_t v73 = lpArguments; // 0x1e40514
    g2 = v73;
    int32_t v74 = 32 * a4; // 0x1e4051c
    g5 = v74;
    int32_t * v75 = (int32_t *)v73; // 0x1e4051f
    int32_t v76 = *v75; // 0x1e4051f
    int32_t v77 = (v76 ^ v74) & 0x1ffe0 ^ v76; // 0x1e40529
    g5 = v77;
    *v75 = v77;
    int32_t v78 = lpArguments; // 0x1e40531
    g2 = v78;
    int32_t * v79 = (int32_t *)(v78 + 32); // 0x1e40535
    *v79 = *v79 | 1;
    int32_t v80 = lpArguments; // 0x1e40539
    g2 = v80;
    int32_t * v81 = (int32_t *)(v80 + 32); // 0x1e4053d
    int32_t v82 = *v81 & -31 | 2; // 0x1e40546
    g5 = v82;
    *v81 = v82;
    g2 = v1;
    int32_t v83 = lpArguments; // 0x1e4054f
    int32_t v84 = *(int32_t *)(v1 + 4); // 0x1e40553
    g5 = v84;
    *(int32_t *)(v83 + 20) = v84;
    int32_t v85 = *(int32_t *)g2; // 0x1e40559
    g2 = v85;
    *(int32_t *)(v83 + 16) = v85;
    int32_t * v86 = (int32_t *)(lpArguments + 80); // 0x1e40562
    *v86 = *v86 | 1;
    int32_t v87 = lpArguments; // 0x1e40566
    g2 = v87;
    g6 = (int32_t)a6;
    int32_t v88 = v87 + 80; // 0x1e4056e
    int32_t * v89 = (int32_t *)v88; // 0x1e4056e
    g2 = v88;
    *v89 = *v89 & -31 | 2;
    int32_t v90 = lpArguments; // 0x1e4057c
    g5 = v90;
    int32_t v91 = *(int32_t *)(g6 + 4); // 0x1e40580
    g2 = v91;
    *(int32_t *)(v90 + 68) = v91;
    int32_t v92 = *(int32_t *)g6; // 0x1e40586
    g7 = v92;
    *(int32_t *)(g5 + 64) = v92;
    g2 = function_1e40ab0();
    g5 = &lpArguments;
    RaiseException(g8, 0, 1, &lpArguments);
    int32_t v93 = v4 + 8; // 0x1e405a4
    g2 = v93;
    int32_t v94; // 0x1e405af
    if ((*(char *)v93 & 16) != 0) {
        int32_t * v95 = (int32_t *)g4; // 0x1e405ac
        *v95 = *v95 & -2;
        v94 = g2;
    } else {
        v94 = v93;
    }
    // 0x1e405af
    int32_t v96; // 0x1e405b7
    if ((*(char *)v94 & 8) != 0) {
        int32_t * v97 = (int32_t *)g4; // 0x1e405b4
        *v97 = *v97 & -5;
        v96 = g2;
    } else {
        v96 = v94;
    }
    // 0x1e405b7
    int32_t v98; // 0x1e405bf
    if ((*(char *)v96 & 4) != 0) {
        int32_t * v99 = (int32_t *)g4; // 0x1e405bc
        *v99 = *v99 & -9;
        v98 = g2;
    } else {
        v98 = v96;
    }
    // 0x1e405bf
    int32_t v100; // 0x1e405c7
    if ((*(char *)v98 & 2) != 0) {
        int32_t * v101 = (int32_t *)g4; // 0x1e405c4
        *v101 = *v101 & -17;
        v100 = g2;
    } else {
        v100 = v98;
    }
    // 0x1e405c7
    if ((*(char *)v100 & 1) != 0) {
        int32_t * v102 = (int32_t *)g4; // 0x1e405cc
        *v102 = *v102 & -33;
    }
    int32_t v103 = g8 & 3; // 0x1e405d5
    g2 = v103;
    g713 = v103;
    switch ((int2_t)v104) {
        case 0: {
            int32_t * v105 = (int32_t *)g4; // 0x1e405e4
            *v105 = *v105 & -3073;
            // break -> 0x1e40612
            break;
        }
        case 1: {
            int32_t * v106 = (int32_t *)g4; // 0x1e405ec
            int32_t v107 = *v106 & -3073 | 1024; // 0x1e405f3
            g2 = v107;
            *v106 = v107;
            // break -> 0x1e40612
            break;
        }
        case -2: {
            int32_t * v108 = (int32_t *)g4; // 0x1e405fc
            int32_t v109 = *v108 & -3073 | 2048; // 0x1e40603
            g2 = v109;
            *v108 = v109;
            // break -> 0x1e40612
            break;
        }
        case -1: {
            int32_t * v110 = (int32_t *)g4; // 0x1e4060c
            *v110 = *v110 | 3072;
            // break -> 0x1e40612
            break;
        }
        default: {
            // 0x1e4061218
            // UNREACHABLE
        }
    }
    uint32_t v111 = g8 & 28; // 0x1e40618
    g2 = v111 / 4;
    if (v111 < 4) {
        int32_t * v112 = (int32_t *)g4; // 0x1e4062e
        int32_t v113 = *v112 & -3841 | 768; // 0x1e40635
        g2 = v113;
        *v112 = v113;
    } else {
        if (v111 == 4) {
            int32_t * v114 = (int32_t *)g4; // 0x1e4063e
            int32_t v115 = *v114 & -3585 | 512; // 0x1e40645
            g2 = v115;
            *v114 = v115;
        } else {
            if (v111 == 8) {
                int32_t * v116 = (int32_t *)g4; // 0x1e4064e
                *v116 = *v116 & -3073;
            }
        }
    }
    // 0x1e40654
    g5 = v4;
    int32_t v117 = *(int32_t *)(v4 + 68); // 0x1e40658
    g2 = v117;
    *(int32_t *)(g6 + 4) = v117;
    int32_t v118 = *(int32_t *)(g5 + 64); // 0x1e4065e
    g7 = v118;
    *(int32_t *)g6 = v118;
    g6 = g8;
    g8 = 0;
    g4 = 1;
    return g2;
}

// Address range: 0x1e40680 - 0x1e40940
int32_t function_1e40680(int32_t a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g8; // 0x1e40684
    int32_t v3 = g6; // 0x1e40685
    g6 = a1;
    g8 = a1 & 31;
    if ((a1 & 8) == 0) {
        goto lab_0x1e406b1;
    } else {
        if ((a3 & 1) == 0) {
            goto lab_0x1e406b1;
        } else {
            // 0x1e4069f
            g8 = a1 & 23;
            g2 = function_1e40b10(1);
            goto lab_0x1e40915;
        }
    }
  lab_0x1e406b1:
    if ((a1 & 4) == 0) {
        goto lab_0x1e406d2;
    } else {
        if ((a3 & 4) == 0) {
            goto lab_0x1e406d2;
        } else {
            // 0x1e406c0
            g8 = a1 & 27;
            g2 = function_1e40b10(4);
            goto lab_0x1e40915;
        }
    }
  lab_0x1e406d2:;
    int32_t v4; // ebx
    if ((a1 & 1) == 0) {
        goto lab_0x1e40813;
    } else {
        if ((a3 & 8) == 0) {
            goto lab_0x1e40813;
        } else {
            // 0x1e406e9
            function_1e40b10(8);
            int32_t v5 = a3 & 3072; // 0x1e406f7
            g2 = v5;
            if (v5 < 1025) {
                if (v5 == 1024) {
                    // 0x1e40768
                    v4 = v1;
                    int32_t v6 = __asm_fnstsw(g10); // 0x1e40770
                    g2 = g2 & -0x10000 | v6;
                    if ((v6 & 256) == 0) {
                        // 0x1e4078f
                        g8 &= -2;
                        *(float64_t *)v4 = -g448;
                    } else {
                        // 0x1e40777
                        g2 = g451;
                        g8 &= -2;
                        *(int32_t *)(v4 + 4) = g451;
                        g5 = (float32_t)g450;
                        *(int32_t *)v4 = (int32_t)(float32_t)g450;
                    }
                } else {
                    if (v5 == 0) {
                        // 0x1e4072f
                        v4 = v1;
                        int32_t v7 = __asm_fnstsw(g10); // 0x1e40737
                        g2 = g2 & -0x10000 | v7;
                        if ((v7 & 256) == 0) {
                            // 0x1e40756
                            g8 &= -2;
                            *(float64_t *)v4 = -g448;
                        } else {
                            // 0x1e4073e
                            g2 = g449;
                            g8 &= -2;
                            *(int32_t *)(v4 + 4) = g449;
                            g5 = (float32_t)g448;
                            *(int32_t *)v4 = (int32_t)(float32_t)g448;
                        }
                    } else {
                        // 0x1e40709
                        g8 &= -2;
                    }
                }
            } else {
                if (v5 == 2048) {
                    // 0x1e407a1
                    v4 = v1;
                    int32_t v8 = __asm_fnstsw(g10); // 0x1e407a9
                    g2 = g2 & -0x10000 | v8;
                    if ((v8 & 256) == 0) {
                        // 0x1e407c8
                        g8 &= -2;
                        *(float64_t *)v4 = -g450;
                    } else {
                        // 0x1e407b0
                        g2 = g449;
                        g8 &= -2;
                        *(int32_t *)(v4 + 4) = g449;
                        g5 = (float32_t)g448;
                        *(int32_t *)v4 = (int32_t)(float32_t)g448;
                    }
                } else {
                    if (v5 == 3072) {
                        // 0x1e407da
                        v4 = v1;
                        int32_t v9 = __asm_fnstsw(g10); // 0x1e407e2
                        g2 = g2 & -0x10000 | v9;
                        if ((v9 & 256) == 0) {
                            // 0x1e40801
                            g8 &= -2;
                            *(float64_t *)v4 = -g450;
                        } else {
                            // 0x1e407e9
                            g2 = g451;
                            g8 &= -2;
                            *(int32_t *)(v4 + 4) = g451;
                            g5 = (float32_t)g450;
                            *(int32_t *)v4 = (int32_t)(float32_t)g450;
                        }
                    } else {
                        // 0x1e40727
                        g8 &= -2;
                    }
                }
            }
            goto lab_0x1e40915;
        }
    }
  lab_0x1e40813:
    if ((a1 & 2) == 0) {
        goto lab_0x1e40915;
    } else {
        if ((a3 & 16) == 0) {
            goto lab_0x1e40915;
        } else {
            int32_t v10;
            if ((a1 & 16) != 0) {
                v10 = 1;
            } else {
                v10 = 0;
            }
            int32_t v11 = v10; // ebp
            v4 = v1;
            int32_t * v12 = (int32_t *)(v1 + 4); // 0x1e4083d
            int32_t v13 = *v12 & 0x7fffffff; // 0x1e40840
            g2 = v13;
            int32_t v14 = *a2 | v13; // 0x1e40845
            g2 = v14;
            if (v14 == 0) {
                // 0x1e40908
                g2 = function_1e40b10(16);
                // 0x1e40912
                g8 &= -3;
                goto lab_0x1e40915;
            } else {
                // 0x1e4084d
                int32_t v15; // bp-4
                g2 = &v15;
                int32_t v16 = *v12; // 0x1e40851
                g5 = v16;
                int32_t v17 = *a2; // 0x1e40855
                g7 = v17;
                g2 = function_1e40c40(v17, v16, &v15, g3, v3, v2, g4);
                float64_t v18 = g684;
                int3_t v19 = g11 + 1; // 0x1e4085e
                g11 = v19;
                int32_t v20 = v15 - 1536; // 0x1e40869
                g5 = v20;
                int32_t v21;
                float64_t v22; // 0x1e408f4
                if (v20 < -1074) {
                    // 0x1e40877
                    g2 = 0;
                    v11 = 1;
                    v22 = 0.0;
                    v21 = 0;
                } else {
                    // 0x1e40888
                    g11 = v19;
                    g7 = 1;
                    int32_t v23 = __asm_fnstsw(g10); // 0x1e40893
                    g2 = g2 & -0x10000 | v23;
                    if ((v23 & 0x4100) != 0) {
                        // 0x1e4089a
                        g7 = 0;
                    }
                    int32_t v24 = g5; // 0x1e408a7
                    float64_t v25;
                    int32_t v26;
                    int32_t v27;
                    if (v24 < -1021) {
                        int32_t v28 = -1021 - v24; // 0x1e408b4
                        g2 = v28;
                        g5 = 1;
                        float64_t v29 = v18; // 0x1e408bb20
                        int32_t v30 = v27;
                        int32_t v31; // 0x1e408df
                        int64_t v32;
                        int32_t v33; // 0x1e408da
                        while (true) {
                            if (((int32_t)(float32_t)v29 & 1) != 0) {
                                // 0x1e408c1
                                if (v11 == 0) {
                                    // 0x1e408c5
                                    v11 = 1;
                                }
                            }
                            uint32_t v34 = (int32_t)(float32_t)v29 / 2; // 0x1e408c7
                            if ((v30 & 1) != 0) {
                                // 0x1e408d2
                                v32 = v34 | -0x80000000;
                            } else {
                                v32 = v34;
                            }
                            // 0x1e408da
                            v33 = v30 / 2;
                            v31 = v28 - 1;
                            if (v31 == 0) {
                                // break -> 0x1e408e2
                                break;
                            }
                            v28 = v31;
                            v29 = v32;
                            v30 = v33;
                        }
                        // 0x1e408e2
                        g2 = v31;
                        v25 = v32;
                        v26 = v33;
                    } else {
                        v25 = v18;
                        v26 = v27;
                    }
                    // 0x1e408e2
                    if (g7 != 0) {
                        // 0x1e408e6
                        v22 = -v25;
                        v21 = v26;
                    } else {
                        v22 = v25;
                        v21 = v26;
                    }
                }
                // 0x1e40904
                g2 = v21;
                g5 = (float32_t)v22;
                *(int32_t *)(v4 + 4) = v21;
                *(int32_t *)v4 = g5;
                if (v11 == 0) {
                    // 0x1e40912
                    g8 &= -3;
                    goto lab_0x1e40915;
                } else {
                    // 0x1e40908
                    g2 = function_1e40b10(16);
                    // 0x1e40912
                    g8 &= -3;
                    goto lab_0x1e40915;
                }
            }
        }
    }
  lab_0x1e40915:;
    // 0x1e40915
    int32_t v35; // 0x1e40931
    if ((g6 & 16) != 0) {
        // 0x1e4091d
        if ((*(char *)(g9 + 40) & 32) != 0) {
            // 0x1e40924
            *(int32_t *)(g9 - 4) = 32;
            g8 &= -17;
            g2 = function_1e40b10((int32_t)&g708);
            v35 = g9 + 4;
        } else {
            v35 = g9;
        }
    } else {
        v35 = g9;
    }
    // 0x1e40931
    g3 = *(int32_t *)v35;
    g2 = g8 == 0;
    g6 = *(int32_t *)(v35 + 4);
    int32_t result = g8 == 0; // 0x1e40938
    g2 = result;
    g8 = *(int32_t *)(v35 + 8);
    g4 = *(int32_t *)(v35 + 12);
    return result;
}

// Address range: 0x1e40940 - 0x1e409ee
int32_t function_1e40940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x1e40940
    g2 = a2;
    int32_t v1 = function_1e40a20(a2, g8); // 0x1e40949
    g2 = v1;
    if (v1 == 0) {
        // 0x1e409c6
        g2 = a9;
        g2 = function_1e40ad0(a9, 0xffff);
        int32_t result = function_1e409f0(a1); // 0x1e409dd
        g2 = result;
        g11--;
        g684 = (int64_t)a7;
        return result;
    }
    int32_t v2 = a1; // bp-32
    g5 = a7;
    g7 = a8;
    g2 = a9;
    g2 = function_1e40ad0(a9, 0xffff);
    g5 = &v2;
    int32_t v3 = function_1e42640(&v2); // 0x1e409a8
    g2 = v3;
    int32_t result2; // 0x1e409b5
    if (v3 == 0) {
        // 0x1e409b4
        result2 = function_1e409f0(a1);
        g2 = result2;
    } else {
        result2 = v3;
    }
    // 0x1e409bd
    g11--;
    g684 = (int64_t)a7;
    return result2;
}

// Address range: 0x1e409f0 - 0x1e40a1c
int32_t function_1e409f0(int32_t result) {
    // 0x1e409f0
    g2 = result;
    if (result == 1) {
        int32_t v1 = function_1e23ad0(); // 0x1e40a04
        g2 = v1;
        *(int32_t *)v1 = 33;
        return g2;
    }
    if (result < 2) {
        // 0x1e40a03
        return result;
    }
    int32_t result2;
    if (result <= 3) {
        int32_t v2 = function_1e23ad0(); // 0x1e40a10
        g2 = v2;
        *(int32_t *)v2 = 34;
        result2 = g2;
    } else {
        result2 = result;
    }
    // 0x1e40a03
    return result2;
}

// Address range: 0x1e40a20 - 0x1e40a46
int32_t function_1e40a20(int32_t a1, int32_t a2) {
    // 0x1e40a20
    g2 = 0;
    g7 = &g445;
    g5 = a1;
    int32_t v1 = 0; // 0x1e40a3e
    int32_t v2 = &g445; // 0x1e40a2f
    while (true) {
        // 0x1e40a2b
        if (*(int32_t *)v2 == a1) {
            // break -> 0x1e40a3e
            break;
        }
        int32_t v3 = v2 + 8; // 0x1e40a2f
        g7 = v3;
        int32_t v4 = v1 + 1; // 0x1e40a32
        g2 = v4;
        if (v3 >= (int32_t)&g447) {
            // 0x1e40a3b
            g2 = 0;
            return 0;
        }
        v1 = v4;
        v2 = v3;
    }
    int32_t result = *(int32_t *)(8 * v1 + (int32_t)&g446); // 0x1e40a3e
    g2 = result;
    return result;
}

// Address range: 0x1e40a50 - 0x1e40a82
int32_t function_1e40a50(int32_t a1) {
    // 0x1e40a50
    g2 = a1;
    if ((a1 & 32) != 0) {
        // 0x1e40a58
        g2 = 5;
        return 5;
    }
    if ((a1 & 8) != 0) {
        // 0x1e40a62
        g2 = 1;
        return 1;
    }
    if ((a1 & 4) != 0) {
        // 0x1e40a6c
        g2 = 2;
        return 2;
    }
    if ((a1 & 1) != 0) {
        // 0x1e40a76
        g2 = 3;
        return 3;
    }
    int32_t result = 2 * (a1 & 2); // 0x1e40a7f
    g2 = result;
    return result;
}

// Address range: 0x1e40a90 - 0x1e40aa1
int32_t function_1e40a90(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e40a90
    g2 = __asm_wait();
    int32_t result = __asm_fnstsw_1(); // 0x1e40a94
    g2 = result;
    return result;
}

// Address range: 0x1e40ab0 - 0x1e40ac2
int32_t function_1e40ab0(void) {
    int32_t result = __asm_fnstsw_1(); // 0x1e40ab3
    g2 = result;
    __asm_fnclex();
    g2 = result;
    return result;
}

// Address range: 0x1e40ad0 - 0x1e40b02
int32_t function_1e40ad0(int32_t a1, int32_t a2) {
    // 0x1e40ad0
    __asm_wait();
    int16_t v1;
    g7 = g7 & -0x10000 | a1 & 0xffff & a2 | (int32_t)(v1 & (int16_t)(a2 ^ 0xffff));
    int32_t result = v1; // 0x1e40af9
    g2 = result;
    return result;
}

// Address range: 0x1e40b10 - 0x1e40b6b
int32_t function_1e40b10(int32_t a1) {
    // 0x1e40b10
    g5 = a1;
    int32_t v1; // 0x1e40b27
    if ((a1 & 1) != 0) {
        // 0x1e40b1c
        g2 = __asm_wait();
        v1 = g5;
    } else {
        v1 = a1;
    }
    int32_t v2; // 0x1e40b3d
    if ((v1 & 8) != 0) {
        // 0x1e40b2c
        g2 = __asm_wait();
        g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
        g2 = __asm_wait();
        g2 = __asm_wait();
        g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
        v2 = g5;
    } else {
        v2 = v1;
    }
    int32_t v3; // 0x1e40b4d
    if ((v2 & 16) != 0) {
        // 0x1e40b42
        g2 = __asm_wait();
        v3 = g5;
    } else {
        v3 = v2;
    }
    int32_t v4; // 0x1e40b5b
    if ((v3 & 4) != 0) {
        // 0x1e40b52
        g2 = __asm_wait();
        v4 = g5;
    } else {
        v4 = v3;
    }
    int32_t result; // 0x1e40b6a
    if ((v4 & 32) == 0) {
        // 0x1e40b5b
        result = g2;
    } else {
        int32_t v5 = __asm_wait(); // 0x1e40b66
        g2 = v5;
        result = v5;
    }
    // 0x1e40b67
    return result;
}

// Address range: 0x1e40b70 - 0x1e40b85
int32_t function_1e40b70(int32_t a1, int32_t a2) {
    // 0x1e40b70
    g11--;
    g684 = llvm_round_f80((float80_t)(float64_t)(int64_t)a1);
    return g2;
}

// Address range: 0x1e40b90 - 0x1e40bc9
int32_t function_1e40b90(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    uint16_t v1 = (int16_t)a3 & -0x7ff1; // 0x1e40bb4
    g5 = (int32_t)v1 | a1 & -0x10000;
    int32_t result = (int32_t)(16 * (int16_t)a4 + 0x3fe0 | v1) | a4 & -0x10000; // 0x1e40bb9
    g2 = result;
    g11--;
    g684 = (int64_t)a1;
    return result;
}

// Address range: 0x1e40bd0 - 0x1e40c33
int32_t function_1e40bd0(int32_t a1, int32_t a2, int32_t a3) {
    if (a2 == 0x7ff00000) {
        if (a1 == 0) {
            // 0x1e40be1
            g2 = 1;
            return 1;
        }
    }
    if (a2 == -0x100000) {
        if (a1 == 0) {
            // 0x1e40bf8
            g2 = 2;
            return 2;
        }
    }
    uint16_t v1 = (int16_t)a3 & 0x7ff8; // 0x1e40c03
    g2 = g2 & -0x10000 | (int32_t)v1;
    if (v1 == 0x7ff8) {
        // 0x1e40c0d
        g2 = 3;
        return 3;
    }
    if (v1 != 0x7ff0) {
        // 0x1e40c30
        g2 = 0;
        return 0;
    }
    if ((a2 & 0x7ffff) != 0) {
        // 0x1e40c2a
        g2 = 4;
        return 4;
    }
    if (a1 == 0) {
        // 0x1e40c30
        g2 = 0;
        return 0;
    }
    // 0x1e40c2a
    g2 = 4;
    return 4;
}

// Address range: 0x1e40c40 - 0x1e40d2e
int32_t function_1e40c40(int32_t a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = g8; // 0x1e40c4c
    int32_t v2 = a2 & 0x7fffffff | a1; // 0x1e40c4d
    g2 = v2;
    int32_t v3 = g6; // 0x1e40c51
    int32_t v4; // esi
    int32_t v5;
    int3_t v6; // 0x1e40d1e
    uint16_t v7; // 0x1e40c68
    float64_t v8; // 0x1e40d1e
    if (v2 != 0) {
        // 0x1e40c63
        v5 = (int32_t)a3;
        v7 = (int16_t)v5 & 0x7ff0;
        if (v7 != 0) {
            goto lab_0x1e40cf9;
        } else {
            if ((a2 & 0xfffff) != 0) {
                goto lab_0x1e40c84;
            } else {
                if (a1 == 0) {
                    goto lab_0x1e40cf9;
                } else {
                    goto lab_0x1e40c84;
                }
            }
        }
    } else {
        // 0x1e40c54
        v4 = 0;
        v8 = 0.0;
        v6 = g11;
        goto lab_0x1e40d1e;
    }
  lab_0x1e40cf9:
    // 0x1e40cf9
    g2 = a2;
    g5 = a1;
    v4 = (v1 & -0x10000 | (int32_t)(v7 / 16)) - 1022;
    g2 = function_1e40b90(a1, a2, 0, v3);
    v8 = g684;
    v6 = g11 + 1;
    goto lab_0x1e40d1e;
  lab_0x1e40d1e:
    // 0x1e40d1e
    g11 = v6 - 1;
    g684 = v8;
    g2 = a5;
    g6 = v3;
    *(int32_t *)a5 = v4;
    g8 = v1;
    return g2;
  lab_0x1e40c84:
    // 0x1e40c84
    v4 = -1021;
    int32_t v9;
    if ((__asm_fnstsw(g10) & 0x4100) != 0) {
        v9 = 0;
    } else {
        v9 = 1;
    }
    // 0x1e40c9d
    g2 = v9;
    if ((v5 & 16) == 0) {
        // 0x1e40ca4
        g5 = -0x80000000;
        while (true) {
            // continue -> 0x1e40cb3
        }
    }
    // 0x1e40cdf
    g2 = a2;
    g5 = a1;
    g2 = function_1e40b90(a1, a2, 0, (int32_t)&g708);
    v8 = g684;
    v6 = g11 + 1;
    goto lab_0x1e40d1e;
}

// Address range: 0x1e40e20 - 0x1e40fbb
int32_t function_1e40e20(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e40e20
    g5 = a2;
    g4 = 0;
    char v1 = *(char *)a2; // 0x1e40e2b
    g2 = v1;
    int32_t v2; // bp-20
    int32_t v3 = &v2; // 0x1e40e2f
    g692 = v3;
    v2 = g3;
    g6 = 0;
    int32_t v4;
    int32_t v5;
    int32_t v6; // 0x1e40f5510
    if (v1 == 97) {
        v4 = 265;
        goto lab_0x1e40e64;
    } else {
        if (v1 == 114) {
            // 0x1e40e52
            v6 = 0;
            v5 = g457 | 1;
            goto lab_0x1e40e6d;
        } else {
            if (v1 != 119) {
                // 0x1e40e41
                g2 = 0;
                return 0;
            }
            v4 = 769;
            goto lab_0x1e40e64;
        }
    }
  lab_0x1e40e64:
    // 0x1e40e64
    v6 = v4;
    v5 = g457 | 2;
    goto lab_0x1e40e6d;
  lab_0x1e40e6d:
    // 0x1e40e6d
    g8 = v5;
    g3 = 1;
    int32_t v7 = a2 + 1; // 0x1e40e72
    g5 = v7;
    int32_t v8; // 0x1e40f7c
    if (*(char *)v7 != 0) {
        int32_t v9 = v5; // 0x1e40ec3
        int32_t v10 = v6; // 0x1e40ec0
        int32_t v11 = 1; // 0x1e40e7d
        while (true) {
            if (v11 == 0) {
                v8 = v10;
                // break -> 0x1e40f6e
                break;
            }
            int32_t v12 = (int32_t)*(char *)v7; // 0x1e40e85
            int32_t v13 = v12 - 43; // 0x1e40e88
            g2 = v13;
            unsigned char v14 = *(char *)(v12 + (int32_t)&g20 - 43); // 0x1e40e98
            g2 = (int32_t)v14 | v13 & -256;
            int32_t v15; // 0x1e40e7d4
            int32_t v16; // 0x1e40f559
            int32_t v17; // 0x1e40ecc
            switch (v3) {
                case 0: {
                    if ((v10 & 2) == 0) {
                        // 0x1e40ec0
                        v17 = v9 & -132 | 128;
                        g8 = v17;
                        v16 = v10 & -4 | 2;
                        v15 = v11;
                    } else {
                        // 0x1e40eb9
                        g3 = 0;
                        v17 = v9;
                        v16 = v10;
                        v15 = 0;
                    }
                    // break -> 0x1e40f64
                    break;
                }
                case 8: {
                    if ((v10 & 0xc000) == 0) {
                        // 0x1e40f5e
                        v17 = v9;
                        v16 = v10 | 0x4000;
                        v15 = v11;
                    } else {
                        // 0x1e40f5a
                        g3 = 0;
                        v17 = v9;
                        v16 = v10;
                        v15 = 0;
                    }
                    // break -> 0x1e40f64
                    break;
                }
                case 4: {
                    if ((v10 & 0x1000) == 0) {
                        // 0x1e40f12
                        v17 = v9;
                        v16 = v10 | 0x1000;
                        v15 = v11;
                    } else {
                        // 0x1e40f0e
                        g3 = 0;
                        v17 = v9;
                        v16 = v10;
                        v15 = 0;
                    }
                    // break -> 0x1e40f64
                    break;
                }
                default: {
                    // 0x1e40ead
                    g3 = 0;
                    // break -> 0x1e40f64
                    break;
                }
            }
            int32_t v18 = v7 + 1; // 0x1e40f64
            g5 = v18;
            if (*(char *)v18 == 0) {
                v8 = v16;
                // break -> 0x1e40f6e
                break;
            }
            v9 = v17;
            v10 = v16;
            v7 = v18;
            v11 = v15;
        }
    } else {
        v8 = v6;
    }
    // 0x1e40f6e
    g2 = a3;
    g5 = a1;
    int32_t v19 = function_1e42650(a1, v8, a3, 420); // 0x1e40f7e
    g2 = v19;
    g7 = v19;
    if (v19 < 0) {
        // 0x1e40f8c
        g2 = 0;
        g3 = v2;
        return 0;
    }
    // 0x1e40f96
    g2 = a4;
    g5 = 0;
    g146++;
    g3 = v2;
    *(int32_t *)(a4 + 12) = g8;
    *(int32_t *)(g2 + 4) = g5;
    *(int32_t *)g2 = g5;
    *(int32_t *)(g2 + 8) = g5;
    *(int32_t *)(g2 + 28) = g5;
    *(int32_t *)(g2 + 16) = v19;
    return g2;
}

// Address range: 0x1e41030 - 0x1e41111
int32_t function_1e41030(int32_t a1, int32_t a2) {
    // 0x1e41030
    g8 = 0;
    int32_t v1 = g3; // bp-16
    g6 = 0;
    g2 = function_1e22490(2);
    int32_t v2; // 0x1e410eb
    if (g675 > g6) {
        // 0x1e4104e
        g4 = 0;
        g3 = 131;
        int32_t v3 = g675; // 0x1e4108b5
        int32_t v4 = &v1; // 0x1e4109f
        int32_t v5 = 0; // 0x1e4105a
        while (true) {
            // 0x1e41055
            g2 = g673;
            int32_t v6 = *(int32_t *)(g673 + v5); // 0x1e4105a
            g2 = v6;
            if (v6 == 0) {
                // break -> 0x1e4109f
                break;
            }
            // 0x1e41061
            int32_t v7; // 0x1e41087
            int32_t v8; // 0x1e410662
            int32_t v9; // 0x1e4108b
            if ((g3 & *(int32_t *)(v6 + 12)) == 0) {
                // 0x1e41066
                *(int32_t *)(v4 - 4) = v6;
                *(int32_t *)(v4 - 8) = g8;
                function_1e22560((int32_t)&g708, (int32_t)&g708);
                g2 = g673;
                int32_t v10 = *(int32_t *)(g4 + g673); // 0x1e41075
                g2 = v10;
                if ((g3 & *(int32_t *)(v10 + 12)) == 0) {
                    // 0x1e41095
                    g2 = g673;
                    int32_t v11 = *(int32_t *)(4 * g8 + g673); // 0x1e4109a
                    g6 = v11;
                    v2 = v11;
                    goto lab_0x1e410e5_2;
                }
                // 0x1e4107d
                *(int32_t *)(g9 + 4) = v10;
                *(int32_t *)g9 = g8;
                g2 = function_1e225d0((int32_t)&g708, (int32_t)&g708);
                v9 = g675;
                v7 = g4;
                v8 = g9 + 8;
            } else {
                v9 = v3;
                v7 = v5;
                v8 = v4;
            }
            int32_t v12 = v7 + 4; // 0x1e41087
            g4 = v12;
            int32_t v13 = g8 + 1; // 0x1e4108a
            g8 = v13;
            if (v13 >= v9) {
                // 0x1e410e5
                v2 = g6;
                goto lab_0x1e410e5_2;
            }
            v3 = v9;
            v4 = v8;
            v5 = v12;
        }
        // 0x1e4109f
        *(int32_t *)(v4 - 4) = 56;
        int32_t v14 = function_1e22670((int32_t)&g708); // 0x1e410a1
        g2 = v14;
        *(int32_t *)(4 * g8 + g673) = v14;
        g5 = g673;
        int32_t v15 = *(int32_t *)(4 * g8 + g673); // 0x1e410b8
        g2 = v15;
        if (v15 == 0) {
            // 0x1e410e5
            v2 = g6;
            goto lab_0x1e410e5_2;
        } else {
            int32_t v16 = v15 + 32; // 0x1e410bf
            g2 = v16;
            *(int32_t *)(g9 - 4) = v16;
            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
            g2 = &g708;
            g5 = g673;
            int32_t v17 = *(int32_t *)(4 * g8 + g673) + 32; // 0x1e410d2
            g2 = v17;
            *(int32_t *)(g9 - 4) = v17;
            EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g708);
            g2 = &g708;
            g5 = g673;
            int32_t v18 = *(int32_t *)(4 * g8 + g673); // 0x1e410e2
            g6 = v18;
            v2 = v18;
            goto lab_0x1e410e5_2;
        }
    } else {
        // 0x1e410e5
        v2 = g6;
        goto lab_0x1e410e5_2;
    }
  lab_0x1e410e5_2:
    // 0x1e410e5
    g2 = 0;
    if (v2 != 0) {
        // 0x1e410eb
        *(int32_t *)(v2 + 4) = 0;
        *(int32_t *)(g6 + 12) = g2;
        *(int32_t *)(g6 + 8) = g2;
        *(int32_t *)g6 = g2;
        *(int32_t *)(g6 + 28) = g2;
        *(int32_t *)(g6 + 16) = -1;
    }
    // 0x1e41100
    *(int32_t *)(g9 - 4) = 2;
    function_1e22500((int32_t)&g708);
    int32_t result = g6; // 0x1e4110a
    g2 = result;
    g3 = *(int32_t *)(g9 + 4);
    g6 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 16);
    return result;
}

// Address range: 0x1e41120 - 0x1e41123
int32_t function_1e41120(void) {
    // 0x1e41120
    g2 = 0;
    return 0;
}

// Address range: 0x1e41130 - 0x1e4119e
int32_t function_1e41130(int32_t result, int32_t a2, int32_t a3) {
    int32_t v1 = g8; // 0x1e41137
    if (g126 == 0) {
        // 0x1e4113b
        g2 = result;
        if (result < 65) {
            // 0x1e4119b
            g8 = v1;
            return result;
        }
        if (result > 90) {
            // 0x1e4119b
            g8 = v1;
            return result;
        }
        int32_t result2 = result + 32; // 0x1e41149
        g2 = result2;
        return result2;
    }
    // 0x1e4114f
    if (g671 == 0) {
        // 0x1e41169
        g8 = 0;
        g672++;
    } else {
        // 0x1e41158
        g8 = 1;
        g2 = function_1e22490(19);
    }
    // 0x1e41171
    g2 = result;
    int32_t result3 = function_1e411a0(result); // 0x1e41176
    g2 = result3;
    if (g8 == 0) {
        // 0x1e41193
        g2 = result3;
        g672--;
        // 0x1e4119b
        g8 = v1;
        return result3;
    }
    // 0x1e41184
    function_1e22500(19);
    g2 = result3;
    g8 = v1;
    return result3;
}

// Address range: 0x1e411a0 - 0x1e41285
int32_t function_1e411a0(int32_t a1) {
    int32_t v1 = g4; // 0x1e411aa
    g4 = a1;
    if (g126 == 0) {
        int32_t result; // 0x1e411be
        if (a1 < 65) {
            result = a1;
            // 0x1e411be
            g2 = result;
            g4 = v1;
            return result;
        }
        if (a1 <= 90) {
            // 0x1e411bb
            result = a1 + 32;
        } else {
            result = a1;
        }
        // 0x1e411be
        g2 = result;
        g4 = v1;
        return result;
    }
    int32_t v2;
    int32_t v3; // 0x1e41239
    if (a1 < 256) {
        // 0x1e411cd
        int32_t result2;
        int32_t v4; // 0x1e411d9
        if (g442 > 1) {
            // 0x1e411d6
            v4 = function_1e40120(a1, 1);
            g2 = v4;
            result2 = g4;
        } else {
            int32_t v5 = (int32_t)g122; // 0x1e411e3
            g5 = v5;
            g2 = 0;
            int32_t v6 = (int32_t)*(int16_t *)(v5 + 2 * a1) & 1; // 0x1e411ef
            g2 = v6;
            result2 = a1;
            v4 = v6;
        }
        if (v4 == 0) {
            // 0x1e411f6
            g2 = result2;
            g4 = v1;
            return result2;
        }
        // 0x1e411f2
        v3 = g126;
        v2 = result2;
    } else {
        v3 = g126;
        v2 = a1;
    }
    int32_t v7 = v2 / 256 & 255; // 0x1e411fd
    int32_t v8 = g5 & -256 | v7; // 0x1e411fd
    g5 = v8;
    int32_t v9 = (int32_t)g122; // 0x1e41203
    g2 = v9;
    char v10 = *(char *)(v9 + (2 * v7 | 1)); // 0x1e41208
    int32_t v11 = v10 > -1 ? v2 : v8; // bp-4
    int32_t v12; // bp-8
    g5 = &v12;
    g7 = v3;
    g2 = &v11;
    int32_t v13 = function_1e43b10(v3, 256, (char *)&v11, 2 - (int32_t)(v10 > -1), &v12, 3, 0); // 0x1e4124c
    g2 = v13;
    if (v13 == 0) {
        int32_t result3 = g4; // 0x1e41258
        g2 = result3;
        g4 = v1;
        return result3;
    }
    // 0x1e4125f
    g2 = 0;
    if (v13 == 1) {
        int32_t result4 = v12 & 255; // 0x1e41266
        g2 = result4;
        g4 = v1;
        return result4;
    }
    int32_t v14 = v12 & 255; // 0x1e41277
    g5 = v14;
    g4 = v1;
    unsigned char v15;
    int32_t result5 = v14 | 256 * (int32_t)v15; // 0x1e4127f
    g2 = result5;
    return result5;
}

// Address range: 0x1e41290 - 0x1e41299
int32_t function_1e41290(void) {
    // 0x1e41290
    g2 = function_1e412cc((int32_t)&g708);
    uint32_t v1 = g5; // 0x1e41295
    g5 = v1 / 256 & 255 | v1 & -0x10000 | 256 * v1 & 0xff00;
    int32_t result = function_1e412bb(); // 0x1e41297
    g2 = result;
    return result;
}

// Address range: 0x1e41299 - 0x1e412a2
int32_t function_1e41299(void) {
    // 0x1e41299
    g2 = function_1e412cc((int32_t)&g708);
    int32_t result = function_1e412bb(); // 0x1e412a0
    g2 = result;
    return result;
}

// Address range: 0x1e412a2 - 0x1e412ac
int32_t function_1e412a2(void) {
    // 0x1e412a2
    float80_t v1; // st7
    g684 = fabsl(v1);
    int32_t v2 = g5; // 0x1e412a6
    g5 = 256 * v2 & 0xff00 | v2 & -0x10000;
    int32_t result = function_1e412bb(); // 0x1e412aa
    g2 = result;
    return result;
}

// Address range: 0x1e412bb - 0x1e412cc
int32_t function_1e412bb(void) {
    int32_t result = __asm_fpatan(); // 0x1e412bb
    g2 = result;
    if ((char)g5 != 0) {
        // 0x1e412c1
        g684 = 0.0L;
    }
    // 0x1e412cb
    return result;
}

// Address range: 0x1e412cc - 0x1e412fc
int32_t function_1e412cc(int32_t a1) {
    // 0x1e412cc
    g684 = fabsl(g684);
    g11--;
    g2 = __asm_wait();
    int32_t v1 = __asm_fnstsw_1(); // 0x1e412e1
    g2 = v1;
    *(int32_t *)(g3 - 160) = v1;
    int32_t result = __asm_wait(); // 0x1e412e7
    g2 = result;
    if ((*(char *)(g3 - 159) & 1) == 0) {
        // 0x1e412f1
        g5 &= -0xff01;
        return result;
    }
    // 0x1e412f6
    g2 = a1;
    int32_t result2 = function_1e43f16(); // 0x1e412f7
    g2 = result2;
    return result2;
}

// Address range: 0x1e412fc - 0x1e41305
float80_t function_1e412fc(void) {
    // 0x1e412fc
    return g472;
}

// Address range: 0x1e41305 - 0x1e4131b
int32_t function_1e41305(void) {
    // 0x1e41305
    if ((char)g5 != 0) {
        // 0x1e41315
        return g2;
    }
    float80_t v1 = function_1e43e76(); // 0x1e41316
    g2 = (float32_t)v1;
    return (float32_t)v1;
}

// Address range: 0x1e4131b - 0x1e41322
float80_t function_1e4131b(void) {
    // 0x1e4131b
    float80_t result; // st7
    return result;
}

// Address range: 0x1e41322 - 0x1e41332
int32_t function_1e41322(void) {
    uint32_t v1 = g5; // 0x1e41324
    g5 = v1 / 256 & 255 | v1 & -256;
    float80_t v2 = function_1e412fc(); // 0x1e41328
    g684 = v2;
    g2 = (float32_t)v2;
    int32_t result = function_1e43f33(); // 0x1e4132d
    g2 = result;
    return result;
}

// Address range: 0x1e413bb - 0x1e41403
int32_t function_1e413bb(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    g2 = __fload(a1, a2);
    g2 = __fload(a3, a4);
    g2 = __asm_wait();
    char v2;
    g2 = __trandisp2(v2 | 2);
    int32_t result = function_1e41403(); // 0x1e413fb
    g2 = result;
    return result;
}

// Address range: 0x1e41403 - 0x1e4140a
int32_t function_1e41403(void) {
    char * v1 = (char *)(g3 - 712); // 0x1e41403
    *v1 = *v1 & -2;
    return g2;
}

// Address range: 0x1e4140a - 0x1e4153b
int32_t function_1e4140a(void) {
    // 0x1e4140a
    int32_t result; // 0x1e41465
    if (g429 != 0) {
        // 0x1e4145f
        result = __asm_wait();
        g2 = result;
        return result;
    }
    int32_t v1 = g3; // 0x1e41413
    float80_t v2; // st7
    *(float64_t *)(v1 - 720) = (float64_t)v2;
    unsigned char v3 = *(char *)(v1 - 144); // 0x1e41419
    int32_t v4 = g2; // 0x1e41419
    int32_t v5 = v4 & -256 | (int32_t)v3; // 0x1e4141f
    g2 = v5;
    int32_t v6; // 0x1e4143d
    if (v3 == 0) {
        v6 = v5;
        goto lab_0x1e4143d;
    } else {
        if (v3 == -1) {
            goto lab_0x1e41467;
        } else {
            if (v3 == -2) {
                goto lab_0x1e41467;
            } else {
                // 0x1e4142f
                g2 = v5;
                *(int32_t *)(v1 - 142) = v5;
                goto lab_0x1e414d9;
            }
        }
    }
  lab_0x1e4143d:;
    uint16_t v7 = *(int16_t *)(v1 - 164) & 32; // 0x1e41444
    g2 = (int32_t)v7 | v6 & -0x10000;
    if (v7 != 0) {
        // 0x1e4145f
        result = __asm_wait();
        g2 = result;
        return result;
    }
    // 0x1e4144a
    g2 = __asm_wait();
    int16_t v8 = __asm_fnstsw(g10); // 0x1e4144b
    uint16_t v9 = v8 & 32; // 0x1e4144d
    g2 = (g2 | (int32_t)v8) & -0x10000 | (int32_t)v9;
    if (v9 == 0) {
        // 0x1e4145f
        result = __asm_wait();
        g2 = result;
        return result;
    }
    // 0x1e41453
    *(int32_t *)(g3 - 142) = 8;
    goto lab_0x1e414d9;
  lab_0x1e414d9:;
    int32_t v10 = g8; // 0x1e414d9
    int32_t v11 = g6; // 0x1e414da
    int32_t v12 = g3; // 0x1e414db
    int32_t v13 = *(int32_t *)(v12 - 148) + 1; // 0x1e414e1
    *(int32_t *)(v12 - 138) = v13;
    int32_t v14 = g3; // 0x1e414e8
    if ((*(char *)(v14 - 712) & 1) == 0) {
        // 0x1e414f1
        g1 = false;
        int32_t v15 = v14 + 8; // 0x1e414f2
        int32_t v16 = v14 - 134; // 0x1e414f5
        *(int32_t *)v16 = *(int32_t *)v15;
        int32_t v17 = v16 + 4; // 0x1e414fb
        int32_t v18 = v15 + 4; // 0x1e414fb
        *(int32_t *)v17 = *(int32_t *)v18;
        g6 = v17 + 4;
        g8 = v18 + 4;
        if (*(char *)(v13 + 12) != 1) {
            int32_t v19 = g3; // 0x1e41503
            int32_t v20 = v19 + 16; // 0x1e41503
            int32_t v21 = v19 - 126; // 0x1e41506
            *(int32_t *)v21 = *(int32_t *)v20;
            int32_t v22 = v21 + 4; // 0x1e41509
            int32_t v23 = v20 + 4; // 0x1e41509
            *(int32_t *)v22 = *(int32_t *)v23;
            g6 = v22 + 4;
            g8 = v23 + 4;
        }
    }
    int32_t v24 = g3; // 0x1e4150b
    *(float64_t *)(v24 - 118) = (float64_t)v2;
    int3_t v25; // fpu_stat_TOP
    g11 = v25 + 1;
    int32_t v26 = v24 - 142; // 0x1e4150e
    g2 = v26;
    int32_t v27 = *(int32_t *)(v24 - 148); // 0x1e4151c
    g4 = v27;
    int32_t v28 = (int32_t)*(char *)(v27 + 14) | v26 & -256; // 0x1e41522
    g2 = v28;
    g2 = function_1e43f40(v28, v26, v24 - 164, v11, v10);
    // 0x1e4145f
    result = __asm_wait();
    g2 = result;
    return result;
  lab_0x1e41467:;
    uint16_t v29 = *(int16_t *)(v1 - 714) & 0x7ff0; // 0x1e4146e
    int32_t v30 = (int32_t)v29 | v4 & -0x10000; // 0x1e4146e
    g2 = v30;
    if (v29 == 0) {
        // 0x1e4147f
        *(int32_t *)(v1 - 142) = 4;
        g2 = __asm_fscale();
        v2 = fabsl(1536.0L);
        g2 = __asm_wait();
        uint32_t v31 = (int32_t)__asm_fnstsw(g10); // 0x1e414a0
        g2 = g2 & -0x10000 | v31;
        if ((v31 / 256 & 1) != 0) {
            // 0x1e414a5
            v2 = 0.0L;
        }
        goto lab_0x1e414d9;
    } else {
        if (v29 == 0x7ff0) {
            // 0x1e414ad
            *(int32_t *)(v1 - 142) = 3;
            g2 = __asm_fscale();
            v2 = fabsl(-1536.0L);
            g2 = __asm_wait();
            uint32_t v32 = (int32_t)__asm_fnstsw(g10); // 0x1e414ce
            g2 = g2 & -0x10000 | v32;
            if ((v32 / 256 & 65) == 0) {
                // 0x1e414d3
                v2 *= INFINITY;
            }
            goto lab_0x1e414d9;
        } else {
            v6 = v30;
            goto lab_0x1e4143d;
        }
    }
}

// Address range: 0x1e4153b - 0x1e4156e
int32_t function_1e4153b(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    g2 = __fload(a1, a2);
    g2 = __asm_wait();
    char v2;
    g2 = __trandisp1(v2 & -3);
    int32_t result = function_1e41403(); // 0x1e41566
    g2 = result;
    return result;
}

// Address range: 0x1e415b0 - 0x1e4160b
int32_t function_1e415b0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g8; // 0x1e415b7
    int32_t v2 = g6; // bp-8
    if (g671 == 0) {
        // 0x1e415cc
        g8 = 0;
        g672++;
    } else {
        // 0x1e415bb
        g8 = 1;
        g2 = function_1e22490(19);
    }
    // 0x1e415d4
    g2 = a3;
    g5 = a2;
    g7 = a1;
    int32_t result = function_1e41610(a1, a2, a3); // 0x1e415e3
    g2 = result;
    if (g8 == 0) {
        // 0x1e41600
        g2 = result;
        g672--;
        g6 = v2;
        g8 = v1;
        return result;
    }
    // 0x1e415f1
    function_1e22500(19);
    g2 = result;
    g6 = v2;
    g8 = v1;
    return result;
}

// Address range: 0x1e41610 - 0x1e41715
int32_t function_1e41610(int32_t lpWideCharStr, int32_t a2, uint32_t a3) {
    int32_t v1 = g8; // 0x1e41610
    if (a2 == 0) {
        // 0x1e41710
        g2 = 0;
        g8 = v1;
        return 0;
    }
    // 0x1e4161e
    g6 = a3;
    if (a3 == 0) {
        // 0x1e41710
        g2 = 0;
        g8 = v1;
        return 0;
    }
    char * lpMultiByteStr = (char *)a2; // 0x1e4162a
    unsigned char v2 = *lpMultiByteStr; // 0x1e4162a
    int32_t v3 = v2; // 0x1e4162a
    int32_t v4 = g2 & -256 | v3; // 0x1e4162a
    g2 = v4;
    if (v2 == 0) {
        // 0x1e41630
        g5 = lpWideCharStr;
        if (lpWideCharStr != 0) {
            // 0x1e41638
            *(int16_t *)lpWideCharStr = 0;
        }
        // 0x1e4163d
        g2 = 0;
        g8 = v1;
        return 0;
    }
    // 0x1e41642
    if (g126 == 0) {
        // 0x1e4164b
        g5 = lpWideCharStr;
        if (lpWideCharStr != 0) {
            int32_t v5 = v4 & -0xff01; // 0x1e41653
            g2 = v5;
            *(int16_t *)lpWideCharStr = (int16_t)v5;
        }
        // 0x1e4165a
        g2 = 1;
        g8 = v1;
        return 1;
    }
    // 0x1e41662
    g5 = v3;
    int32_t v6 = (int32_t)g122; // 0x1e41666
    g2 = v6;
    if (*(char *)(v6 + (2 * v3 || 1)) > -1) {
        int32_t cchWideChar = (int32_t)(lpWideCharStr == 0) + 1; // 0x1e416dc
        g2 = cchWideChar;
        int32_t CodePage = (int32_t)g130; // 0x1e416e1
        g5 = CodePage;
        int32_t v7 = MultiByteToWideChar(CodePage, 9, lpMultiByteStr, 1, (int16_t *)lpWideCharStr, cchWideChar); // 0x1e416eb
        g2 = v7;
        if (v7 != 0) {
            // 0x1e41708
            g2 = 1;
            g8 = 9;
            return 1;
        }
        // 0x1e416f5
        *(int32_t *)function_1e23ad0() = 42;
        g2 = -1;
        g8 = 9;
        return -1;
    }
    // 0x1e41672
    int32_t result; // 0x1e416b8
    int32_t v8; // 0x1e416b81112
    int32_t v9; // 0x1e416aa
    if (g442 > 1) {
        if (g442 > a3) {
            if (g442 > a3) {
                goto lab_0x1e416c0;
            } else {
                v8 = g442;
                goto lab_0x1e416b2;
            }
        } else {
            int32_t cchWideChar2 = (int32_t)(lpWideCharStr == 0) + 1; // 0x1e4168c
            g2 = cchWideChar2;
            int32_t CodePage2 = (int32_t)g130; // 0x1e4168d
            g7 = CodePage2;
            g5 = g442;
            int32_t v10 = MultiByteToWideChar(CodePage2, 9, lpMultiByteStr, g442, (int16_t *)lpWideCharStr, cchWideChar2); // 0x1e416a0
            g2 = v10;
            if (v10 != 0) {
                result = g442;
                // 0x1e416b8
                g2 = result;
                g8 = *(int32_t *)(g9 + 4);
                return result;
            }
            v9 = g442;
            goto lab_0x1e416aa;
        }
    } else {
        v9 = g442;
        goto lab_0x1e416aa;
    }
  lab_0x1e416aa:
    if (v9 > a3) {
        goto lab_0x1e416c0;
    } else {
        v8 = v9;
        goto lab_0x1e416b2;
    }
  lab_0x1e416c0:;
    int32_t v11 = function_1e23ad0(); // 0x1e416c0
    g2 = v11;
    *(int32_t *)v11 = 42;
    g2 = -1;
    g8 = *(int32_t *)g9;
    return -1;
  lab_0x1e416b2:
    // 0x1e416b2
    if (*(char *)(a2 + 1) != 0) {
        result = v8;
        // 0x1e416b8
        g2 = result;
        g8 = *(int32_t *)(g9 + 4);
        return result;
    }
    goto lab_0x1e416c0;
}

// Address range: 0x1e41720 - 0x1e4174d
int32_t function_1e41720(int32_t a1) {
    // 0x1e41720
    if (g442 > 1) {
        // 0x1e41729
        g5 = a1;
        int32_t result = function_1e40120(a1, 8); // 0x1e41730
        g2 = result;
        return result;
    }
    int32_t v1 = (int32_t)g122; // 0x1e41739
    g7 = v1;
    g2 = 0;
    g5 = a1;
    int32_t result2 = (int32_t)*(int16_t *)(v1 + 2 * a1) & 8; // 0x1e41749
    g2 = result2;
    return result2;
}

// Address range: 0x1e41750 - 0x1e41782
int32_t function_1e41750(int32_t a1) {
    // 0x1e41750
    if (g442 > 1) {
        // 0x1e41759
        g5 = a1;
        int32_t result = function_1e40120(a1, 263); // 0x1e41763
        g2 = result;
        return result;
    }
    int32_t v1 = (int32_t)g122; // 0x1e4176c
    g7 = v1;
    g2 = 0;
    g5 = a1;
    int32_t result2 = (int32_t)*(int16_t *)(v1 + 2 * a1) & 263; // 0x1e4177c
    g2 = result2;
    return result2;
}

// Address range: 0x1e41790 - 0x1e41885
int32_t function_1e41790(int32_t a1) {
    int32_t v1 = g8; // 0x1e41790
    g8 = a1;
    int32_t * v2 = (int32_t *)(a1 + 12); // 0x1e41795
    int32_t v3 = *v2; // 0x1e41795
    g2 = v3;
    if ((v3 & 131) == 0) {
        // 0x1e4187e
        g2 = -1;
        g8 = v1;
        return -1;
    }
    if ((v3 & 64) != 0) {
        // 0x1e4187e
        g2 = -1;
        g8 = v1;
        return -1;
    }
    if ((v3 & 2) != 0) {
        // 0x1e417ac
        *v2 = v3 | 32;
        g2 = -1;
        g8 = v1;
        return -1;
    }
    int32_t v4 = v3 | 1; // 0x1e417b9
    g2 = v4;
    *v2 = v4;
    int32_t v5 = g8; // 0x1e417d1
    if ((g2 & 268) != 0) {
        int32_t v6 = *(int32_t *)(v5 + 8); // 0x1e417d1
        g2 = v6;
        *(int32_t *)v5 = v6;
    } else {
        // 0x1e417c6
        g2 = function_1e41920(v5);
    }
    int32_t v7 = g8; // 0x1e417d6
    int32_t v8 = *(int32_t *)(v7 + 24); // 0x1e417d6
    g2 = v8;
    int32_t v9 = *(int32_t *)(v7 + 8); // 0x1e417d9
    g5 = v9;
    int32_t v10 = *(int32_t *)(v7 + 16); // 0x1e417dd
    g7 = v10;
    int32_t v11 = function_1e44060(v10, v9, v8); // 0x1e417e2
    g2 = v11;
    *(int32_t *)(g8 + 4) = v11;
    if (v11 != 0) {
        if (v11 != -1) {
            int32_t * v12 = (int32_t *)(g8 + 12); // 0x1e417f6
            int32_t v13 = *v12; // 0x1e417f6
            g7 = v13;
            int32_t v14; // 0x1e4184b
            if ((v13 & 130) == 0) {
                int32_t v15 = *(int32_t *)(g8 + 16); // 0x1e417fe
                g5 = v15;
                g2 = &g112;
                int32_t v16; // 0x1e41822
                if (v15 != -1) {
                    int32_t v17 = v15 / 8 & -4; // 0x1e41816
                    g2 = v17;
                    int32_t v18 = 36 * (v15 & 31); // 0x1e41819
                    g5 = v18;
                    v16 = *(int32_t *)(v17 + (int32_t)&g677) + v18;
                    g2 = v16;
                } else {
                    v16 = &g112;
                }
                unsigned char v19 = *(char *)(v16 + 4) & -126; // 0x1e41827
                g2 = (int32_t)v19 | v16 & -256;
                if (v19 == -126) {
                    int32_t v20 = v13 | 0x2000; // 0x1e4182d
                    g7 = v20;
                    *v12 = v20;
                    v14 = g8;
                } else {
                    v14 = g8;
                }
            } else {
                v14 = g8;
            }
            int32_t * v21 = (int32_t *)(v14 + 24); // 0x1e41836
            int32_t v22; // 0x1e41852
            if (*v21 == 512) {
                int32_t v23 = *(int32_t *)(v14 + 12); // 0x1e4183f
                g2 = v23;
                if ((v23 & 8) != 0) {
                    if ((v23 & 1024) == 0) {
                        // 0x1e4184b
                        *v21 = 0x1000;
                        v22 = g8;
                    } else {
                        v22 = v14;
                    }
                } else {
                    v22 = v14;
                }
            } else {
                v22 = v14;
            }
            int32_t * v24 = (int32_t *)(v22 + 4); // 0x1e41852
            *v24 = *v24 - 1;
            int32_t * v25 = (int32_t *)g8; // 0x1e41855
            int32_t v26 = *v25; // 0x1e41855
            g5 = v26;
            *v25 = v26 + 1;
            g2 = 0;
            int32_t result = (int32_t)*(char *)g5; // 0x1e4185e
            g2 = result;
            g8 = v1;
            return result;
        }
    }
    int32_t v27 = v11 == 0 ? 16 : 32; // 0x1e4186a
    g2 = v27;
    int32_t * v28 = (int32_t *)(g8 + 12); // 0x1e4186d
    *v28 = *v28 | v27;
    g2 = -1;
    *(int32_t *)(g8 + 4) = 0;
    g8 = v1;
    return g2;
}

