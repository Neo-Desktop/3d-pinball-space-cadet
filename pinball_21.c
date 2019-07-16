#include "pinball.h"

// Address range: 0x1e3b3eb - 0x1e3bc9e
int32_t function_1e3b3eb(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g4; // 0x1e3b3ee
    int32_t v2 = g8; // 0x1e3b3ef
    int32_t v3 = g6; // 0x1e3b3f0
    int32_t v4 = g5; // 0x1e3b3f1
    g8 = v4;
    g4 = a2;
    int32_t v5 = g3; // 0x1e3b3f7
    int32_t v6 = v5; // bp-32
    int32_t v7 = &v6; // 0x1e3b3f7
    g2 = a2;
    int32_t v8; // 0x1e3b5f9
    int32_t v9; // 0x1e3b670
    int32_t v10; // 0x1e3b673
    int32_t v11; // 0x1e3b6f1
    int32_t v12; // 0x1e3b6f4
    int32_t v13; // 0x1e3b77c
    int32_t v14; // 0x1e3b77f
    int32_t v15; // 0x1e3b81b
    int32_t v16; // 0x1e3b88d
    int32_t v17; // 0x1e3ba68
    int32_t v18; // 0x1e3ba7f
    int32_t v19; // 0x1e3baab
    int32_t result; // 0x1e3bc9b
    int32_t v20; // 0x1e3b971
    int32_t v21; // 0x1e3ba59
    int32_t v22; // 0x1e3ba9c
    if (a2 > 1009) {
        if (a2 == 1011) {
            // 0x1e3bc92
            g2 = 0;
            result = 0;
            goto lab_0x1e3bc94;
        } else {
            if (a2 == 1020) {
                int32_t v23 = *(int32_t *)(v4 + 30); // 0x1e3bbf6
                g2 = v23;
                int32_t v24 = *(int32_t *)(v4 + 6); // 0x1e3bbf9
                g7 = v24;
                int32_t v25 = 16 * *(int32_t *)(v23 + 218); // 0x1e3bc02
                g2 = v25;
                g3 = v4;
                *(int32_t *)(v4 + 74 + v25) = v24;
                int32_t v26 = g8; // 0x1e3bc0b
                int32_t v27 = v26 + g2; // 0x1e3bc0b
                g5 = v27;
                int32_t v28 = *(int32_t *)(v26 + 58); // 0x1e3bc0e
                g2 = v28;
                *(int32_t *)(v27 + 78) = v28;
                int32_t v29 = *(int32_t *)(g8 + 50); // 0x1e3bc14
                g4 = v29;
                *(int32_t *)(g5 + 82) = v29;
                g5 = g8;
                g2 = function_1e3dbc0(a3, v6, v3);
                int32_t v30 = g8 + 16 * __ftol(); // 0x1e3bc39
                g2 = v30;
                int32_t v31 = *(int32_t *)(v30 + 74); // 0x1e3bc3b
                g7 = v31;
                *(int32_t *)(g8 + 6) = v31;
                int32_t v32 = *(int32_t *)(g2 + 78); // 0x1e3bc43
                g5 = v32;
                *(int32_t *)(g8 + 58) = v32;
                int32_t v33 = *(int32_t *)(g2 + 82); // 0x1e3bc49
                g2 = v33;
                *(int32_t *)(g8 + 50) = v33;
                if (v31 != 0) {
                    // 0x1e3bc51
                    g2 = function_1e3b2dd(0, g8);
                }
                // 0x1e3bc92
                g2 = 0;
                result = 0;
                goto lab_0x1e3bc94;
            } else {
                if (a2 == 1022) {
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                } else {
                    if (a2 == 1024) {
                        // 0x1e3bc5b
                        g2 = v4;
                        g5 = 0;
                        int32_t v34 = *(int32_t *)(v4 + 30); // 0x1e3bc64
                        g2 = v34;
                        if (*(int32_t *)(v34 + 214) > 0) {
                            int32_t v35 = v4 + 74; // 0x1e3bc6f
                            g7 = v35;
                            int32_t v36 = *(int32_t *)(v4 + 6); // 0x1e3bc72
                            g2 = v36;
                            g5 = 1;
                            *(int32_t *)v35 = v36;
                            int32_t v37 = g7; // 0x1e3bc78
                            g7 = v37 + 16;
                            *(int32_t *)(v37 + 4) = *(int32_t *)(g8 + 58);
                            *(int32_t *)(g7 - 8) = *(int32_t *)(g8 + 50);
                            int32_t v38 = *(int32_t *)(g8 + 30); // 0x1e3bc87
                            g2 = v38;
                            int32_t v39 = g5; // 0x1e3bc8a
                            while (*(int32_t *)(v38 + 214) > v39) {
                                // 0x1e3bc72
                                v36 = *(int32_t *)(g8 + 6);
                                g2 = v36;
                                g5 = v39 + 1;
                                *(int32_t *)g7 = v36;
                                v37 = g7;
                                g7 = v37 + 16;
                                *(int32_t *)(v37 + 4) = *(int32_t *)(g8 + 58);
                                *(int32_t *)(g7 - 8) = *(int32_t *)(g8 + 50);
                                v38 = *(int32_t *)(g8 + 30);
                                g2 = v38;
                                v39 = g5;
                            }
                        }
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    } else {
                        goto lab_0x1e3b448;
                    }
                }
            }
        }
    } else {
        if (a2 < 1008) {
            int32_t v40 = a2 - 24; // 0x1e3b40d
            g2 = v40;
            g702 = v40;
            int32_t v41; // ebx
            int32_t v42; // edi
            int32_t v43; // esi
            switch (a2) {
                case 24: {
                    int32_t v44 = *(int32_t *)(v4 + 46); // 0x1e3b476
                    g2 = v44;
                    int32_t v45 = v44 + 4; // 0x1e3b479
                    int32_t v46 = *(int32_t *)v45; // 0x1e3b479
                    g6 = v46;
                    int32_t v47 = *(int32_t *)(4 * v46 + v45); // 0x1e3b47c
                    g3 = v47;
                    g2 = 0;
                    if (*(int32_t *)(v47 + 82) == 0) {
                        // 0x1e3b48b
                        if (*(int32_t *)(v47 + 90) == 0) {
                            // 0x1e3b494
                            if (*(int32_t *)(v47 + 86) == 0) {
                                // 0x1e3b49d
                                int32_t v48; // 0x1e3b4ac
                                int32_t v49; // 0x1e3b4ad
                                int32_t v50; // 0x1e3b4ad
                                if (*(int32_t *)(v4 + 58) != 0) {
                                    // 0x1e3b4a2
                                    g2 = function_1e3b3eb(34, 0, v5);
                                    v50 = g8;
                                    v49 = g4;
                                    v48 = g6;
                                } else {
                                    v50 = v4;
                                    v49 = 24;
                                    v48 = v46;
                                }
                                int32_t v51 = v48 - 1; // 0x1e3b4ac
                                *(int32_t *)(v50 + 58) = v49;
                                *(int32_t *)(g8 + 62) = 1;
                                int32_t v52 = g3; // 0x1e3b4b7
                                int32_t v53 = *(int32_t *)(v52 + 78); // 0x1e3b4b7
                                g2 = v53;
                                g5 = *(int32_t *)(v52 + 6);
                                *(int32_t *)(g9 + 28) = v53;
                                *(int32_t *)(g9 + 20) = g5;
                                if (v51 >= 1) {
                                    // 0x1e3b4c9
                                    v42 = 4 * v51;
                                    g2 = *(int32_t *)(g8 + 46);
                                    *(int32_t *)(g9 - 4) = 0;
                                    int32_t v54 = v42 + g2; // 0x1e3b4d1
                                    g2 = v54;
                                    v41 = *(int32_t *)(v54 + 8);
                                    int32_t v55 = *(int32_t *)(v54 + 4); // 0x1e3b4d6
                                    g3 = v55;
                                    int32_t v56 = (int32_t)(*(int32_t *)(v55 + 78) == 0) + 1; // 0x1e3b4df
                                    g2 = v56;
                                    *(int32_t *)(g9 - 8) = v56;
                                    g2 = *(int32_t *)v41;
                                    g5 = v41;
                                    int32_t v57 = *(int32_t *)(g3 + 6); // 0x1e3b4e7
                                    g5 = v57;
                                    int32_t v58 = v42 - 4; // 0x1e3b4ea
                                    v42 = v58;
                                    *(int32_t *)(v41 + 6) = v57;
                                    while (v58 != 0) {
                                        // 0x1e3b4cc
                                        g2 = *(int32_t *)(g8 + 46);
                                        *(int32_t *)(g9 - 4) = 0;
                                        v54 = v42 + g2;
                                        g2 = v54;
                                        v41 = *(int32_t *)(v54 + 8);
                                        v55 = *(int32_t *)(v54 + 4);
                                        g3 = v55;
                                        v56 = (int32_t)(*(int32_t *)(v55 + 78) == 0) + 1;
                                        g2 = v56;
                                        *(int32_t *)(g9 - 8) = v56;
                                        g2 = *(int32_t *)v41;
                                        g5 = v41;
                                        v57 = *(int32_t *)(g3 + 6);
                                        g5 = v57;
                                        v58 = v42 - 4;
                                        v42 = v58;
                                        *(int32_t *)(v41 + 6) = v57;
                                    }
                                }
                                // 0x1e3b4f2
                                g2 = *(int32_t *)(g8 + 46);
                                *(int32_t *)(g9 - 4) = 0;
                                int32_t v59 = *(int32_t *)(g2 + 8); // 0x1e3b4fc
                                g6 = v59;
                                g5 = v59;
                                int32_t v60 = (int32_t)(*(int32_t *)(g9 + 28) == 0) + 1; // 0x1e3b503
                                g2 = v60;
                                *(int32_t *)(g9 - 8) = v60;
                                *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 32);
                                *(int32_t *)(g6 + 6) = *(int32_t *)(g9 + 12);
                                g5 = g8;
                                g2 = function_1e3b2f5((int32_t)&g708);
                            }
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 25: {
                    int32_t v61 = *(int32_t *)(v4 + 46); // 0x1e3b520
                    g2 = v61;
                    int32_t v62 = v61 + 4; // 0x1e3b523
                    int32_t v63 = *(int32_t *)v62; // 0x1e3b523
                    g6 = v63;
                    int32_t v64 = *(int32_t *)(4 * v63 + v62); // 0x1e3b526
                    g5 = v64;
                    g2 = 0;
                    if (*(int32_t *)(v64 + 82) == 0) {
                        // 0x1e3b535
                        if (*(int32_t *)(v64 + 90) == 0) {
                            // 0x1e3b53e
                            if (*(int32_t *)(v64 + 86) == 0) {
                                // 0x1e3b547
                                int32_t v65; // 0x1e3b55c
                                if (*(int32_t *)(v4 + 58) != 0) {
                                    // 0x1e3b54c
                                    g5 = v4;
                                    g2 = function_1e3b3eb(34, 0, v5);
                                    v65 = g8;
                                } else {
                                    v65 = v4;
                                }
                                int32_t v66 = *(int32_t *)(v65 + 46); // 0x1e3b556
                                g2 = v66;
                                g5 = *(int32_t *)(v66 + 8);
                                *(int32_t *)(v65 + 62) = 1;
                                *(int32_t *)(g8 + 58) = g4;
                                int32_t v67 = g5; // 0x1e3b566
                                int32_t v68 = *(int32_t *)(v67 + 78); // 0x1e3b566
                                g7 = v68;
                                g2 = *(int32_t *)(v67 + 6);
                                *(int32_t *)(g9 + 28) = v68;
                                *(int32_t *)(g9 + 20) = g2;
                                int32_t v69 = g6 - 1; // 0x1e3b574
                                g2 = v69;
                                if (v69 >= 1) {
                                    // 0x1e3b57b
                                    *(int32_t *)(g9 + 16) = 0;
                                    *(int32_t *)(g9 + 24) = v69;
                                    g2 = *(int32_t *)(g9 + 16);
                                    *(int32_t *)(g9 - 4) = 0;
                                    int32_t v70 = *(int32_t *)(g8 + 46) + g2; // 0x1e3b58d
                                    g2 = v70;
                                    v41 = *(int32_t *)(v70 + 8);
                                    int32_t v71 = *(int32_t *)(v70 + 12); // 0x1e3b593
                                    g3 = v71;
                                    int32_t v72 = (int32_t)(*(int32_t *)(v71 + 78) == 0) + 1; // 0x1e3b59c
                                    g2 = v72;
                                    *(int32_t *)(g9 - 8) = v72;
                                    g2 = *(int32_t *)v41;
                                    g5 = v41;
                                    int32_t * v73 = (int32_t *)(g9 + 8); // 0x1e3b5a4
                                    *v73 = *v73 + 4;
                                    g5 = *(int32_t *)(g3 + 6);
                                    int32_t * v74 = (int32_t *)(g9 + 24); // 0x1e3b5ac
                                    int32_t v75 = *v74 - 1; // 0x1e3b5ac
                                    *v74 = v75;
                                    *(int32_t *)(v41 + 6) = g5;
                                    while (v75 != 0) {
                                        // 0x1e3b587
                                        g2 = *(int32_t *)(g9 + 16);
                                        *(int32_t *)(g9 - 4) = 0;
                                        v70 = *(int32_t *)(g8 + 46) + g2;
                                        g2 = v70;
                                        v41 = *(int32_t *)(v70 + 8);
                                        v71 = *(int32_t *)(v70 + 12);
                                        g3 = v71;
                                        v72 = (int32_t)(*(int32_t *)(v71 + 78) == 0) + 1;
                                        g2 = v72;
                                        *(int32_t *)(g9 - 8) = v72;
                                        g2 = *(int32_t *)v41;
                                        g5 = v41;
                                        v73 = (int32_t *)(g9 + 8);
                                        *v73 = *v73 + 4;
                                        g5 = *(int32_t *)(g3 + 6);
                                        v74 = (int32_t *)(g9 + 24);
                                        v75 = *v74 - 1;
                                        *v74 = v75;
                                        *(int32_t *)(v41 + 6) = g5;
                                    }
                                }
                                // 0x1e3b5b5
                                g2 = *(int32_t *)(g8 + 46);
                                *(int32_t *)(g9 - 4) = 0;
                                int32_t v76 = *(int32_t *)(g2 + 4 + 4 * g6); // 0x1e3b5bf
                                g6 = v76;
                                g5 = v76;
                                int32_t v77 = (int32_t)(*(int32_t *)(g9 + 28) == 0) + 1; // 0x1e3b5c7
                                g2 = v77;
                                *(int32_t *)(g9 - 8) = v77;
                                *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 32);
                                *(int32_t *)(g6 + 6) = *(int32_t *)(g9 + 12);
                                g5 = g8;
                                g2 = function_1e3b2f5((int32_t)&g708);
                            }
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 26: {
                    // 0x1e3b5e4
                    if (*(int32_t *)(v4 + 62) != 0) {
                        goto lab_0x1e3b5f0;
                    } else {
                        // 0x1e3b5ea
                        if (*(int32_t *)(v4 + 58) != 0) {
                            v8 = v4;
                            goto lab_0x1e3b5f7;
                        } else {
                            goto lab_0x1e3b5f0;
                        }
                    }
                }
                case 27: {
                    // 0x1e3b65d
                    if (*(int32_t *)(v4 + 62) != 0) {
                        goto lab_0x1e3b669;
                    } else {
                        // 0x1e3b663
                        if (*(int32_t *)(v4 + 58) != 0) {
                            v10 = 27;
                            v9 = v4;
                            goto lab_0x1e3b670;
                        } else {
                            goto lab_0x1e3b669;
                        }
                    }
                }
                case 28: {
                    // 0x1e3b6dc
                    if (*(int32_t *)(v4 + 62) != 0) {
                        goto lab_0x1e3b6e8;
                    } else {
                        // 0x1e3b6e2
                        if (*(int32_t *)(v4 + 58) != 0) {
                            v12 = 28;
                            v11 = v4;
                            goto lab_0x1e3b6ef;
                        } else {
                            goto lab_0x1e3b6e8;
                        }
                    }
                }
                case 29: {
                    // 0x1e3b769
                    if (*(int32_t *)(v4 + 62) != 0) {
                        goto lab_0x1e3b775;
                    } else {
                        // 0x1e3b76f
                        if (*(int32_t *)(v4 + 58) != 0) {
                            v14 = 29;
                            v13 = v4;
                            goto lab_0x1e3b77c;
                        } else {
                            goto lab_0x1e3b775;
                        }
                    }
                }
                case 30: {
                    // 0x1e3b7ed
                    g6 = 0;
                    int32_t v78 = *(int32_t *)(v4 + 46); // 0x1e3b7ef
                    g2 = v78;
                    int32_t v79 = *(int32_t *)(v78 + 4) - 1; // 0x1e3b7f5
                    g7 = v79;
                    if (v79 < 0) {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    } else {
                        int32_t v80 = v78 + 8 + 4 * v79; // 0x1e3b7f8
                        g2 = v80;
                        int32_t v81 = 0; // 0x1e3b804
                        int32_t v82; // 0x1e3b804
                        while (true) {
                            int32_t v83 = *(int32_t *)v80; // 0x1e3b7fc
                            g5 = v83;
                            if (*(int32_t *)(v83 + 78) == 0) {
                                // 0x1e3b804
                                v82 = v81 + 1;
                                g6 = v82;
                            } else {
                                v82 = v81;
                            }
                            int32_t v84 = v80 - 4; // 0x1e3b805
                            g2 = v84;
                            int32_t v85 = v79 - 1; // 0x1e3b808
                            g7 = v85;
                            if (v85 < 0) {
                                // break -> 0x1e3b80b
                                break;
                            }
                            v79 = v85;
                            v81 = v82;
                            v80 = v84;
                        }
                        if (v82 == 0) {
                            // 0x1e3bc92
                            g2 = 0;
                            result = 0;
                            goto lab_0x1e3bc94;
                        } else {
                            int32_t v86 = function_1e3df30(); // 0x1e3b813
                            int64_t v87 = 0x100000000 * (int64_t)(v86 >> 31) | (int64_t)v86; // 0x1e3b819
                            int64_t v88 = g6; // 0x1e3b819
                            g2 = v87 / v88;
                            int32_t v89 = v87 % v88; // 0x1e3b819
                            g7 = v89;
                            v15 = g8;
                            int32_t v90 = *(int32_t *)(v15 + 46); // 0x1e3b81b
                            g6 = v90;
                            int32_t v91 = *(int32_t *)(v90 + 4) - 1; // 0x1e3b821
                            if (v91 >= 0) {
                                int32_t v92 = v90 + 8; // 0x1e3b824
                                int32_t v93 = v92 + 4 * v91; // 0x1e3b824
                                g5 = v93;
                                while (true) {
                                    int32_t v94 = *(int32_t *)v93; // 0x1e3b828
                                    g2 = v94;
                                    int32_t v95; // 0x1e3b832
                                    if (*(int32_t *)(v94 + 78) == 0) {
                                        // 0x1e3b830
                                        g2 = v89;
                                        v95 = v89 - 1;
                                        g7 = v95;
                                        if (v89 == 0) {
                                            int32_t v96 = *(int32_t *)(v92 + 4 * v91); // 0x1e3b83f
                                            g5 = v96;
                                            g2 = *(int32_t *)v96;
                                            goto lab_0x1e3b84b;
                                        }
                                    } else {
                                        v95 = v89;
                                    }
                                    int32_t v97 = v93 - 4; // 0x1e3b837
                                    g5 = v97;
                                    int32_t v98 = v91 - 1; // 0x1e3b83a
                                    if (v98 < 0) {
                                        // break -> 0x1e3b84b
                                        break;
                                    }
                                    v91 = v98;
                                    v89 = v95;
                                    v93 = v97;
                                }
                            }
                            goto lab_0x1e3b84b;
                        }
                    }
                }
                case 31: {
                    // 0x1e3b861
                    g6 = 0;
                    int32_t v99 = *(int32_t *)(v4 + 46); // 0x1e3b863
                    g2 = v99;
                    int32_t v100 = *(int32_t *)(v99 + 4) - 1; // 0x1e3b869
                    g7 = v100;
                    if (v100 < 0) {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    } else {
                        int32_t v101 = v99 + 8 + 4 * v100; // 0x1e3b86c
                        g2 = v101;
                        int32_t v102 = 0; // 0x1e3b878
                        int32_t v103; // 0x1e3b878
                        while (true) {
                            int32_t v104 = *(int32_t *)v101; // 0x1e3b870
                            g5 = v104;
                            if (*(int32_t *)(v104 + 78) != 0) {
                                // 0x1e3b878
                                v103 = v102 + 1;
                                g6 = v103;
                            } else {
                                v103 = v102;
                            }
                            int32_t v105 = v101 - 4; // 0x1e3b879
                            g2 = v105;
                            int32_t v106 = v100 - 1; // 0x1e3b87c
                            g7 = v106;
                            if (v106 < 0) {
                                // break -> 0x1e3b87f
                                break;
                            }
                            v100 = v106;
                            v102 = v103;
                            v101 = v105;
                        }
                        if (v103 == 0) {
                            // 0x1e3bc92
                            g2 = 0;
                            result = 0;
                            goto lab_0x1e3bc94;
                        } else {
                            int32_t v107 = function_1e3df30(); // 0x1e3b887
                            g2 = v107;
                            v16 = g8;
                            int32_t v108 = *(int32_t *)(v16 + 46); // 0x1e3b88d
                            g5 = v108;
                            int64_t v109 = 0x100000000 * (int64_t)(v107 >> 31) | (int64_t)v107; // 0x1e3b890
                            int64_t v110 = g6; // 0x1e3b890
                            g2 = v109 / v110;
                            int32_t v111 = v109 % v110; // 0x1e3b890
                            g7 = v111;
                            int32_t v112 = *(int32_t *)(v108 + 4) - 1; // 0x1e3b895
                            if (v112 >= 0) {
                                int32_t v113 = v108 + 8; // 0x1e3b898
                                int32_t v114 = v113 + 4 * v112; // 0x1e3b898
                                g6 = v114;
                                while (true) {
                                    int32_t v115 = *(int32_t *)v114; // 0x1e3b89c
                                    g2 = v115;
                                    int32_t v116; // 0x1e3b8a6
                                    if (*(int32_t *)(v115 + 78) != 0) {
                                        // 0x1e3b8a4
                                        g2 = v111;
                                        v116 = v111 - 1;
                                        g7 = v116;
                                        if (v111 == 0) {
                                            int32_t v117 = *(int32_t *)(v113 + 4 * v112); // 0x1e3b8b3
                                            g5 = v117;
                                            g2 = *(int32_t *)v117;
                                            goto lab_0x1e3b8bf;
                                        }
                                    } else {
                                        v116 = v111;
                                    }
                                    int32_t v118 = v114 - 4; // 0x1e3b8ab
                                    g6 = v118;
                                    int32_t v119 = v112 - 1; // 0x1e3b8ae
                                    if (v119 < 0) {
                                        // break -> 0x1e3b8bf
                                        break;
                                    }
                                    v112 = v119;
                                    v111 = v116;
                                    v114 = v118;
                                }
                            }
                            goto lab_0x1e3b8bf;
                        }
                    }
                }
                case 32: {
                    int32_t v120 = function_1e3b358(v5, v3, v2, v1); // 0x1e3b8d7
                    g2 = v120;
                    if (v120 >= 0) {
                        int32_t v121 = g8; // 0x1e3b8e4
                        int32_t v122 = *(int32_t *)(v121 + 46); // 0x1e3b8e4
                        g5 = v122;
                        int32_t v123 = *(int32_t *)(4 * v120 + 8 + v122); // 0x1e3b8eb
                        g5 = v123;
                        g2 = *(int32_t *)v123;
                        if (*(int32_t *)(v121 + 58) != 0) {
                            // 0x1e3b8f9
                            g5 = v121;
                            g2 = function_1e3b3a0();
                        }
                        // 0x1e3b900
                        g2 = 1;
                        result = 1;
                        goto lab_0x1e3bc94;
                    } else {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    }
                }
                case 33: {
                    int32_t v124 = function_1e3b37f(v5, v3, v2, v1); // 0x1e3b90c
                    g2 = v124;
                    if (v124 >= 0) {
                        int32_t v125 = g8; // 0x1e3b919
                        int32_t v126 = *(int32_t *)(v125 + 46); // 0x1e3b919
                        g5 = v126;
                        g6 = 0;
                        int32_t v127 = *(int32_t *)(4 * v124 + 8 + v126); // 0x1e3b91e
                        g5 = v127;
                        g2 = *(int32_t *)v127;
                        if (*(int32_t *)(v125 + 58) != 0) {
                            // 0x1e3b92d
                            g5 = v125;
                            g2 = function_1e3b3a0();
                        }
                        // 0x1e3b934
                        g2 = 1;
                        result = 1;
                        goto lab_0x1e3bc94;
                    } else {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    }
                }
                case 34: {
                    int32_t v128 = *(int32_t *)(v4 + 70); // 0x1e3b93e
                    g2 = v128;
                    int32_t v129; // 0x1e3b94b
                    if (v128 != 0) {
                        // 0x1e3b945
                        g2 = function_1e32771(v128);
                        v129 = g8;
                    } else {
                        v129 = v4;
                    }
                    // 0x1e3b94b
                    *(int32_t *)(v129 + 70) = 0;
                    int32_t v130 = g8; // 0x1e3b952
                    int32_t v131 = *(int32_t *)(v130 + 58); // 0x1e3b952
                    g2 = v131;
                    if (v131 == 26) {
                        goto lab_0x1e3b964;
                    } else {
                        if (v131 == 27) {
                            goto lab_0x1e3b964;
                        } else {
                            if (v131 != 28) {
                                v20 = v130;
                                goto lab_0x1e3b96f;
                            } else {
                                goto lab_0x1e3b964;
                            }
                        }
                    }
                }
                case 35: {
                    // 0x1e3b97c
                    g2 = function_1e3dbc0(a3, v5, v3);
                    int32_t v132 = __ftol(); // 0x1e3b98e
                    g2 = v132;
                    int32_t v133 = g8; // 0x1e3b993
                    int32_t v134 = *(int32_t *)(v133 + 46); // 0x1e3b993
                    g5 = v134;
                    if (*(int32_t *)(v134 + 4) > v132) {
                        if (v132 >= 0) {
                            int32_t v135 = *(int32_t *)(4 * v132 + 8 + v134); // 0x1e3b9a7
                            g5 = v135;
                            g2 = *(int32_t *)v135;
                            if (*(int32_t *)(v133 + 58) != 0) {
                                // 0x1e3b9bd
                                g5 = v133;
                                g2 = function_1e3b3a0();
                            }
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 36: {
                    // 0x1e3b9c9
                    g2 = function_1e3dbc0(a3, v5, v3);
                    int32_t v136 = __ftol(); // 0x1e3b9db
                    g2 = v136;
                    int32_t v137 = g8; // 0x1e3b9e0
                    int32_t v138 = *(int32_t *)(v137 + 46); // 0x1e3b9e0
                    g5 = v138;
                    if (*(int32_t *)(v138 + 4) > v136) {
                        // 0x1e3b9ec
                        g6 = 0;
                        if (v136 >= 0) {
                            int32_t v139 = *(int32_t *)(4 * v136 + 8 + v138); // 0x1e3b9f6
                            g5 = v139;
                            g2 = *(int32_t *)v139;
                            if (*(int32_t *)(v137 + 58) != 0) {
                                // 0x1e3ba09
                                g5 = v137;
                                g2 = function_1e3b3a0();
                            }
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 37: {
                    // 0x1e3ba15
                    g2 = 0;
                    int32_t v140 = *(int32_t *)(v4 + 46); // 0x1e3ba17
                    g5 = v140;
                    int32_t v141 = *(int32_t *)(v140 + 4) - 1; // 0x1e3ba1d
                    if (v141 >= 0) {
                        int32_t v142 = v140 + 8 + 4 * v141; // 0x1e3ba24
                        g5 = v142;
                        int32_t v143 = 0; // 0x1e3ba30
                        int32_t v144; // 0x1e3ba30
                        while (true) {
                            int32_t v145 = *(int32_t *)v142; // 0x1e3ba28
                            g7 = v145;
                            if (*(int32_t *)(v145 + 78) != 0) {
                                // 0x1e3ba30
                                v144 = v143 + 1;
                                g2 = v144;
                            } else {
                                v144 = v143;
                            }
                            int32_t v146 = v142 - 4; // 0x1e3ba31
                            g5 = v146;
                            int32_t v147 = v141 - 1; // 0x1e3ba34
                            if (v147 < 0) {
                                // break -> 0x1e3bc94
                                break;
                            }
                            v141 = v147;
                            v143 = v144;
                            v142 = v146;
                        }
                        result = v144;
                    } else {
                        result = 0;
                    }
                    goto lab_0x1e3bc94;
                }
                case 38: {
                    int32_t v148 = *(int32_t *)(v4 + 46); // 0x1e3ba3c
                    g2 = v148;
                    int32_t v149 = *(int32_t *)(v148 + 4); // 0x1e3ba3f
                    g2 = v149;
                    result = v149;
                    goto lab_0x1e3bc94;
                }
                case 39: {
                    int32_t v150 = *(int32_t *)(v4 + 58); // 0x1e3ba47
                    g2 = v150;
                    result = v150;
                    goto lab_0x1e3bc94;
                }
                case 40: {
                    int32_t v151 = *(int32_t *)(v4 + 62); // 0x1e3ba4f
                    g2 = v151;
                    result = v151;
                    goto lab_0x1e3bc94;
                }
                case 41: {
                    // 0x1e3ba57
                    v21 = function_1e3b358(v5, v3, v2, v1);
                    g2 = v21;
                    g6 = v21;
                    if (v21 >= 0) {
                        // 0x1e3ba68
                        v17 = g8;
                        if (*(int32_t *)(v17 + 58) != 0) {
                            goto lab_0x1e3ba74;
                        } else {
                            // 0x1e3ba6e
                            if (*(int32_t *)(v17 + 62) == 0) {
                                v18 = v17;
                                goto lab_0x1e3ba7f;
                            } else {
                                goto lab_0x1e3ba74;
                            }
                        }
                    } else {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    }
                }
                case 42: {
                    // 0x1e3ba9a
                    v22 = function_1e3b37f(v5, v3, v2, v1);
                    g2 = v22;
                    g6 = v22;
                    if (v22 >= 0) {
                        // 0x1e3baab
                        v19 = g8;
                        if (*(int32_t *)(v19 + 58) != 0) {
                            goto lab_0x1e3bab7;
                        } else {
                            // 0x1e3bab1
                            if (*(int32_t *)(v19 + 62) == 0) {
                                v152 = v19;
                            } else {
                                goto lab_0x1e3bab7;
                            }
                        }
                    } else {
                        // 0x1e3bc92
                        g2 = 0;
                        result = 0;
                        goto lab_0x1e3bc94;
                    }
                }
                case 43: {
                    int32_t v153 = v4 + 66; // 0x1e3badd
                    g6 = v153;
                    int32_t v154 = *(int32_t *)v153; // 0x1e3bae0
                    g2 = v154;
                    int32_t v155; // 0x1e3baee
                    if (v154 != 0) {
                        // 0x1e3bae6
                        g2 = function_1e32771(v154);
                        v155 = g6;
                    } else {
                        v155 = v153;
                    }
                    // 0x1e3baec
                    g2 = 0;
                    *(int32_t *)v155 = 0;
                    int32_t * v156 = (int32_t *)(g9 + 40); // 0x1e3baf0
                    if (*v156 > g2) {
                        // 0x1e3bafa
                        *(int32_t *)(g9 - 4) = 0x1e3b3d5;
                        *(int32_t *)(g9 - 8) = g8;
                        *(int32_t *)(g9 - 12) = *v156;
                        int32_t v157 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3bb04
                        g2 = v157;
                        *(int32_t *)g6 = v157;
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 44: {
                    int32_t v158 = v4 + 46; // 0x1e3bb10
                    v43 = v158;
                    int32_t v159 = *(int32_t *)v158; // 0x1e3bb13
                    g2 = v159;
                    int32_t v160 = *(int32_t *)(v159 + 4) - 1; // 0x1e3bb18
                    g2 = v160;
                    if (v160 >= 0) {
                        int32_t v161 = 4 * v160; // 0x1e3bb1f
                        v41 = v161;
                        v42 = 0;
                        int32_t v162 = 0; // 0x1e3bb33
                        while (true) {
                            int32_t v163 = *(int32_t *)v158; // 0x1e3bb28
                            g2 = v163;
                            int32_t v164 = *(int32_t *)(v161 + 8 + v163); // 0x1e3bb2a
                            g5 = v164;
                            int32_t v165; // 0x1e3bb3f
                            int32_t v166; // 0x1e3bb41
                            if (*(int32_t *)(v164 + 78) != v162) {
                                // 0x1e3bb33
                                *(int32_t *)(v7 - 4) = v162;
                                g2 = *(int32_t *)g5;
                                *(int32_t *)(v7 - 8) = v42;
                                g7 = *(int32_t *)v43;
                                *(int32_t *)(v7 - 12) = *(int32_t *)(v7 + 32);
                                v165 = v7 - 16;
                                *(int32_t *)v165 = 16;
                                v166 = v41;
                                g5 = *(int32_t *)(g7 + 8 + v166);
                            } else {
                                v166 = v161;
                                v165 = v7;
                            }
                            int32_t v167 = v166 - 4; // 0x1e3bb4a
                            v41 = v167;
                            if (v167 < 0) {
                                // break -> 0x1e3bc92
                                break;
                            }
                            // 0x1e3bb4a
                            v7 = v165;
                            v162 = v42;
                            v161 = v167;
                            v158 = v43;
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 45: {
                    // 0x1e3bb54
                    g2 = function_1e328b9(45, v4);
                    g2 = function_1e3dbc0(a1, (int32_t)&g708, (int32_t)&g708);
                    int32_t v168 = __ftol(); // 0x1e3bb6d
                    g2 = v168;
                    if (v168 >= 0) {
                        int32_t v169 = g8 + 46; // 0x1e3bb7a
                        v43 = v169;
                        int32_t v170 = *(int32_t *)v169; // 0x1e3bb7d
                        g5 = v170;
                        uint32_t v171 = *(int32_t *)(v170 + 4); // 0x1e3bb7f
                        if (v171 >= v168) {
                            int32_t v172 = v171 - 1; // 0x1e3bb8a
                            if (v172 > v168) {
                                int32_t v173 = g9; // 0x1e3bb9e
                                g2 = *(int32_t *)v169;
                                *(int32_t *)(v173 - 4) = 0;
                                int32_t v174 = 4 * v172; // 0x1e3bba0
                                g5 = *(int32_t *)(g2 + 8 + v174);
                                int32_t v175 = v173 - 8; // 0x1e3bba7
                                *(int32_t *)v175 = 20;
                                g2 = *(int32_t *)g5;
                                int32_t v176 = v172 - v168 - 1; // 0x1e3bbad
                                while (v176 != 0) {
                                    // 0x1e3bb9c
                                    v173 = v175;
                                    g2 = *(int32_t *)v43;
                                    *(int32_t *)(v173 - 4) = 0;
                                    v174 -= 4;
                                    g5 = *(int32_t *)(g2 + 8 + v174);
                                    v175 = v173 - 8;
                                    *(int32_t *)v175 = 20;
                                    g2 = *(int32_t *)g5;
                                    v176--;
                                }
                            } else {
                                v168 = v172;
                            }
                            if (v168 >= 0) {
                                int32_t v177 = g9; // 0x1e3bbbd
                                g2 = *(int32_t *)v43;
                                *(int32_t *)(v177 - 4) = 0;
                                int32_t v178 = v177 - 8; // 0x1e3bbbf
                                *(int32_t *)v178 = 19;
                                int32_t v179 = 4 * v168; // 0x1e3bbc1
                                g5 = *(int32_t *)(g2 + 8 + v179);
                                int32_t v180 = v179 - 4; // 0x1e3bbc9
                                while (v180 >= 0) {
                                    // 0x1e3bbbb
                                    v177 = v178;
                                    g2 = *(int32_t *)v43;
                                    *(int32_t *)(v177 - 4) = 0;
                                    v178 = v177 - 8;
                                    *(int32_t *)v178 = 19;
                                    v179 = v180;
                                    g5 = *(int32_t *)(g2 + 8 + v179);
                                    v180 = v179 - 4;
                                }
                            }
                        }
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                case 46: {
                    int32_t v181 = function_1e3b37f(v5, v3, v2, v1); // 0x1e3bbd5
                    g2 = v181;
                    if (v181 >= 0) {
                        int32_t v182 = *(int32_t *)(g8 + 46); // 0x1e3bbe2
                        g5 = v182;
                        int32_t v183 = *(int32_t *)(4 * v181 + 8 + v182); // 0x1e3bbe9
                        g5 = v183;
                        g2 = *(int32_t *)v183;
                    }
                    // 0x1e3bc92
                    g2 = 0;
                    result = 0;
                    goto lab_0x1e3bc94;
                }
                default: {
                    goto lab_0x1e3b448;
                }
            }
        } else {
            // 0x1e3bc92
            g2 = 0;
            result = 0;
            goto lab_0x1e3bc94;
        }
    }
  lab_0x1e3bc94:
    // 0x1e3bc94
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
  lab_0x1e3b448:;
    int32_t v184 = *(int32_t *)(v4 + 46); // 0x1e3b448
    g2 = v184;
    int32_t v185 = *(int32_t *)(v184 + 4) - 1; // 0x1e3b44e
    g2 = v185;
    if (v185 >= 0) {
        // 0x1e3b455
        g2 = *(int32_t *)(v4 + 46);
        *(int32_t *)(v7 - 4) = *(int32_t *)(v7 + 40);
        int32_t v186 = v7 - 8; // 0x1e3b463
        *(int32_t *)v186 = g4;
        int32_t v187 = 4 * v185; // 0x1e3b464
        int32_t v188 = *(int32_t *)(g2 + 8 + v187); // 0x1e3b464
        g5 = v188;
        g2 = *(int32_t *)v188;
        int32_t v189 = v187 - 4; // 0x1e3b46c
        while (v189 >= 0) {
            // 0x1e3b45c
            v7 = v186;
            g2 = *(int32_t *)(g8 + 46);
            *(int32_t *)(v7 - 4) = *(int32_t *)(v7 + 40);
            v186 = v7 - 8;
            *(int32_t *)v186 = g4;
            v187 = v189;
            v188 = *(int32_t *)(g2 + 8 + v187);
            g5 = v188;
            g2 = *(int32_t *)v188;
            v189 = v187 - 4;
        }
    }
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b5f0:
    // 0x1e3b5f0
    g2 = function_1e3b3a0();
    v8 = g8;
    goto lab_0x1e3b5f7;
  lab_0x1e3b669:
    // 0x1e3b669
    g2 = function_1e3b3a0();
    v10 = g4;
    v9 = g8;
    goto lab_0x1e3b670;
  lab_0x1e3b6e8:
    // 0x1e3b6e8
    g2 = function_1e3b3a0();
    v12 = g4;
    v11 = g8;
    goto lab_0x1e3b6ef;
  lab_0x1e3b775:
    // 0x1e3b775
    g2 = function_1e3b3a0();
    v14 = g4;
    v13 = g8;
    goto lab_0x1e3b77c;
  lab_0x1e3b964:
    // 0x1e3b964
    *(int32_t *)(g9 - 4) = 0;
    g5 = g8;
    *(int32_t *)(g9 - 8) = 14;
    int32_t v240 = function_1e3b3eb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3b96a
    g2 = v240;
    v20 = g8;
    goto lab_0x1e3b96f;
  lab_0x1e3b5f7:
    // 0x1e3b5f7
    g6 = 0;
    g2 = *(int32_t *)(v8 + 46);
    *(int32_t *)(v8 + 62) = 0;
    *(int32_t *)(g8 + 58) = g4;
    int32_t v190 = g2; // 0x1e3b602
    int32_t v191 = *(int32_t *)(v190 + 4) - 1; // 0x1e3b605
    g5 = v191;
    int32_t v192 = 4 * v191; // 0x1e3b608
    int32_t v193 = *(int32_t *)(v190 + 8 + v192); // 0x1e3b608
    g7 = v193;
    int32_t v194; // 0x1e3b63b
    if (v191 < 1) {
        // 0x1e3b5f7
        v194 = g9;
    } else {
        // 0x1e3b611
        g3 = v192;
        int32_t v195 = g9; // 0x1e3b61b
        g2 = *(int32_t *)(g8 + 46);
        *(int32_t *)(v195 - 4) = 0;
        int32_t v196 = g3 + g2; // 0x1e3b61d
        g2 = v196;
        g5 = *(int32_t *)(v196 + 8);
        int32_t v197 = *(int32_t *)(v196 + 4); // 0x1e3b622
        g7 = v197;
        int32_t v198 = (int32_t)(*(int32_t *)(v197 + 90) == 0) + 9; // 0x1e3b62b
        g2 = v198;
        int32_t v199 = v195 - 8; // 0x1e3b62e
        *(int32_t *)v199 = v198;
        g2 = *(int32_t *)g5;
        int32_t v200 = g3 - 4; // 0x1e3b633
        g3 = v200;
        while (v200 != 0) {
            // 0x1e3b618
            v195 = v199;
            g2 = *(int32_t *)(g8 + 46);
            *(int32_t *)(v195 - 4) = 0;
            v196 = g3 + g2;
            g2 = v196;
            g5 = *(int32_t *)(v196 + 8);
            v197 = *(int32_t *)(v196 + 4);
            g7 = v197;
            v198 = (int32_t)(*(int32_t *)(v197 + 90) == 0) + 9;
            g2 = v198;
            v199 = v195 - 8;
            *(int32_t *)v199 = v198;
            g2 = *(int32_t *)g5;
            v200 = g3 - 4;
            g3 = v200;
        }
        v194 = v199;
    }
    // 0x1e3b638
    g2 = *(int32_t *)(g8 + 46);
    *(int32_t *)(v194 - 4) = 0;
    g5 = *(int32_t *)(g2 + 8);
    int32_t v201 = (int32_t)(*(int32_t *)(v193 + 90) == 0) + 9; // 0x1e3b647
    g2 = v201;
    *(int32_t *)(v194 - 8) = v201;
    *(int32_t *)(v194 - 12) = *(int32_t *)(v194 + 32);
    g5 = g8;
    g2 = function_1e3b2f5((int32_t)&g708);
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b670:
    // 0x1e3b670
    g2 = *(int32_t *)(v9 + 46);
    *(int32_t *)(v9 + 58) = v10;
    *(int32_t *)(g8 + 62) = 0;
    int32_t v202 = g2; // 0x1e3b67d
    int32_t v203 = *(int32_t *)(v202 + 4); // 0x1e3b67d
    g6 = v203;
    int32_t v204 = *(int32_t *)(v202 + 8); // 0x1e3b680
    g5 = v204;
    g2 = *(int32_t *)(v204 + 90);
    int32_t v205 = v203 - 1; // 0x1e3b686
    g3 = v205;
    int32_t v206; // 0x1e3b6b7
    if (v205 < 1) {
        // 0x1e3b670
        v206 = g9;
    } else {
        int32_t v207 = g9; // 0x1e3b696
        g2 = *(int32_t *)(g8 + 46);
        *(int32_t *)(v207 - 4) = 0;
        int32_t v208 = 0; // 0x1e3b698
        int32_t v209 = v208 + g2; // 0x1e3b698
        g2 = v209;
        g5 = *(int32_t *)(v209 + 8);
        int32_t v210 = *(int32_t *)(v209 + 12); // 0x1e3b69d
        g7 = v210;
        int32_t v211 = (int32_t)(*(int32_t *)(v210 + 90) == 0) + 9; // 0x1e3b6a9
        g2 = v211;
        int32_t v212 = v207 - 8; // 0x1e3b6ac
        *(int32_t *)v212 = v211;
        g2 = *(int32_t *)g5;
        int32_t v213 = g3 - 1; // 0x1e3b6b1
        g3 = v213;
        while (v213 != 0) {
            // 0x1e3b693
            v207 = v212;
            g2 = *(int32_t *)(g8 + 46);
            *(int32_t *)(v207 - 4) = 0;
            v208 += 4;
            v209 = v208 + g2;
            g2 = v209;
            g5 = *(int32_t *)(v209 + 8);
            v210 = *(int32_t *)(v209 + 12);
            g7 = v210;
            v211 = (int32_t)(*(int32_t *)(v210 + 90) == 0) + 9;
            g2 = v211;
            v212 = v207 - 8;
            *(int32_t *)v212 = v211;
            g2 = *(int32_t *)g5;
            v213 = g3 - 1;
            g3 = v213;
        }
        v206 = v212;
    }
    // 0x1e3b6b4
    g2 = *(int32_t *)(g8 + 46);
    *(int32_t *)(v206 - 4) = 0;
    g5 = *(int32_t *)(g2 + 4 + 4 * g6);
    int32_t v214 = (int32_t)(*(int32_t *)(v206 + 28) == 0) + 9; // 0x1e3b6c6
    g2 = v214;
    *(int32_t *)(v206 - 8) = v214;
    *(int32_t *)(v206 - 12) = *(int32_t *)(v206 + 32);
    g5 = g8;
    g2 = function_1e3b2f5((int32_t)&g708);
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b6ef:
    // 0x1e3b6ef
    g6 = 0;
    g2 = *(int32_t *)(v11 + 46);
    *(int32_t *)(v11 + 58) = v12;
    *(int32_t *)(g8 + 62) = g6;
    int32_t v215 = *(int32_t *)(g2 + 4) - 1; // 0x1e3b6fd
    g4 = v215;
    if (v215 >= 1) {
        while (true) {
            int32_t v216 = function_1e3df30(); // 0x1e3b702
            g5 = 100;
            int64_t v217 = 0x100000000 * (int64_t)(v216 >> 31) | (int64_t)v216; // 0x1e3b70d
            g2 = v217 / 100;
            int32_t v218 = v217 % 100; // 0x1e3b70d
            g7 = v218;
            if (v218 > 70) {
                int32_t v219 = *(int32_t *)(g8 + 46); // 0x1e3b714
                g2 = v219;
                int32_t v220 = *(int32_t *)(v219 + 8 + g6); // 0x1e3b717
                g5 = v220;
                *(int32_t *)(g9 + 16) = v220;
                g3 = *(int32_t *)g5;
                int32_t v221 = function_1e3df30(); // 0x1e3b721
                g2 = v221;
                g5 = *(int32_t *)(g9 + 16);
                *(int32_t *)(g9 + 24) = v221;
                int32_t v222 = *(int32_t *)(g9 + 24); // 0x1e3b72e
                float32_t v223 = *(float32_t *)(g9 + 40); // 0x1e3b73b
                *(float32_t *)(g9 - 4) = (float32_t)(3.0L * 3.05185094759971922707e-5L * (float80_t)v222 * (float80_t)v223 + 0.1L);
                *(int32_t *)(g9 - 4) = 9;
            }
            // 0x1e3b753
            g6 += 4;
            int32_t v224 = g4 - 1; // 0x1e3b756
            g4 = v224;
            if (v224 == 0) {
                // break -> 0x1e3b759
                break;
            }
        }
    }
    // 0x1e3b759
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 40);
    g5 = g8;
    g2 = function_1e3b2f5((int32_t)&g708);
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b77c:
    // 0x1e3b77c
    g2 = *(int32_t *)(v13 + 46);
    *(int32_t *)(v13 + 58) = v14;
    *(int32_t *)(g8 + 62) = 0;
    int32_t v225 = *(int32_t *)(g2 + 4) - 1; // 0x1e3b78c
    g6 = v225;
    int32_t v226; // 0x1e3b7dd
    if (v225 < 1) {
        // 0x1e3b77c
        v226 = g9;
    } else {
        // 0x1e3b791
        g4 = 0;
        int32_t v227 = g9; // 0x1e3b79a
        int32_t v228 = 0; // 0x1e3b796
        while (true) {
            int32_t v229 = *(int32_t *)(g8 + 46); // 0x1e3b793
            g2 = v229;
            int32_t v230 = *(int32_t *)(v228 + 8 + v229); // 0x1e3b796
            g5 = v230;
            *(int32_t *)(v227 + 20) = v230;
            int32_t v231 = *(int32_t *)g5; // 0x1e3b79e
            g2 = v231;
            *(int32_t *)(g9 + 16) = v231;
            int32_t v232 = function_1e3df30(); // 0x1e3b7a4
            g5 = 100;
            int32_t v233 = (0x100000000 * (int64_t)(v232 >> 31) | (int64_t)v232) % 100; // 0x1e3b7af
            g7 = v233;
            int32_t v234;
            int32_t v235; // 0x1e3b7c1
            if (v233 <= 70) {
                v234 = 0;
                v235 = 0;
            } else {
                v234 = 1;
                v235 = 1;
            }
            // 0x1e3b7bd
            g2 = v234;
            g5 = *(int32_t *)(g9 + 20);
            *(int32_t *)(g9 + 24) = v235;
            int32_t v236 = *(int32_t *)(g9 + 24); // 0x1e3b7c5
            g2 = *(int32_t *)(g9 + 16);
            g4 += 4;
            *(float32_t *)(g9 - 4) = (float32_t)(float80_t)v236;
            int32_t v237 = g9 - 4; // 0x1e3b7d6
            *(int32_t *)v237 = 18;
            int32_t v238 = g6 - 1; // 0x1e3b7da
            g6 = v238;
            if (v238 == 0) {
                v226 = v237;
                // break -> 0x1e3b7dd
                break;
            }
            // 0x1e3b7bd
            v227 = v237;
            v228 = g4;
        }
    }
    // 0x1e3b7dd
    *(int32_t *)(v226 - 4) = *(int32_t *)(v226 + 40);
    g5 = g8;
    g2 = function_1e3b2f5((int32_t)&g708);
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b96f:
    // 0x1e3b96f
    g2 = 0;
    *(int32_t *)(v20 + 58) = 0;
    *(int32_t *)(g8 + 62) = g2;
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3ba74:
    // 0x1e3ba74
    g5 = v17;
    g2 = function_1e3b3eb(34, 0, (int32_t)&g708);
    v18 = g8;
    goto lab_0x1e3ba7f;
  lab_0x1e3bab7:
    // 0x1e3bab7
    g5 = v19;
    g2 = function_1e3b3eb(34, 0, (int32_t)&g708);
    int32_t v239 = g8;
    goto lab_0x1e3bac2;
  lab_0x1e3b84b:
    // 0x1e3b84b
    if (*(int32_t *)(v15 + 58) != 0) {
        // 0x1e3b855
        g5 = v15;
        g2 = function_1e3b3a0();
    }
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3b8bf:
    // 0x1e3b8bf
    if (*(int32_t *)(v16 + 58) != 0) {
        // 0x1e3b8c9
        g5 = v16;
        g2 = function_1e3b3a0();
    }
    // 0x1e3bc92
    g2 = 0;
    result = 0;
    goto lab_0x1e3bc94;
  lab_0x1e3ba7f:
    // 0x1e3ba7f
    g2 = *(int32_t *)(v18 + 46);
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 40);
    *(int32_t *)(g9 - 8) = 15;
    g5 = *(int32_t *)(4 * v21 + 8 + g2);
    g2 = 1;
    result = 1;
    goto lab_0x1e3bc94;
  lab_0x1e3bac2:
    // 0x1e3bac2
    g2 = *(int32_t *)(v239 + 46);
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 40);
    *(int32_t *)(g9 - 8) = 16;
    g5 = *(int32_t *)(4 * v22 + 8 + g2);
    g2 = 1;
    result = 1;
    goto lab_0x1e3bc94;
}

// Address range: 0x1e3bcfa - 0x1e3bd81
int32_t function_1e3bcfa(int32_t a1, uint32_t a2) {
    // 0x1e3bcfa
    g6 = a2;
    g2 = function_1e3b1c6(a1, a2);
    g3 = 0;
    int32_t v1 = g4; // 0x1e3bd19
    g5 = v1;
    *(int32_t *)v1 = (int32_t)&g62;
    *(int32_t *)g8 = g3;
    g2 = function_1e3bdc9();
    if (a2 >= 1) {
        int32_t v2 = function_1e3991a(a2, g3); // 0x1e3bd33
        g2 = v2;
        if (v2 != g3) {
            int32_t v3 = *(int32_t *)(g4 + 46); // 0x1e3bd40
            g2 = v3;
            int32_t v4 = *(int32_t *)(v3 + 4); // 0x1e3bd43
            g6 = 2 * v4;
            int32_t v5 = 8 * v4; // 0x1e3bd48
            g2 = v5;
            int32_t v6 = function_1e25371(v5); // 0x1e3bd50
            g2 = v6;
            *(int32_t *)g8 = v6;
            int32_t v7 = g3; // 0x1e3bd57
            if (g2 != v7) {
                // 0x1e3bd5b
                if (g6 >= 1) {
                    int32_t v8 = *(int32_t *)g8; // 0x1e3bd5f
                    g5 = v8;
                    int32_t v9 = a1; // 0x1e3bd61
                    g2 = v9;
                    *(int32_t *)(v8 + v7) = *(int32_t *)v9;
                    int32_t v10 = g3 + 4; // 0x1e3bd6f
                    g3 = v10;
                    int32_t v11 = g6 - 1; // 0x1e3bd72
                    g6 = v11;
                    while (v11 != 0) {
                        // 0x1e3bd5f
                        v8 = *(int32_t *)g8;
                        g5 = v8;
                        v9 += 4;
                        g2 = v9;
                        *(int32_t *)(v8 + v10) = *(int32_t *)v9;
                        v10 = g3 + 4;
                        g3 = v10;
                        v11 = g6 - 1;
                        g6 = v11;
                    }
                }
            }
        }
    }
    int32_t result = g4; // 0x1e3bd75
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e3bd81 - 0x1e3bd9f
int32_t function_1e3bd81(char a1) {
    // 0x1e3bd81
    g8 = g5;
    int32_t v1; // esi
    g2 = function_1e3bd9f(v1);
    if ((a1 & 1) != 0) {
        // 0x1e3bd90
        g2 = function_1e3df60(g8);
    }
    // 0x1e3bd99
    g2 = g8;
    return g8;
}

// Address range: 0x1e3bd9f - 0x1e3bdc9
int32_t function_1e3bd9f(int32_t a1) {
    int32_t v1 = g5; // 0x1e3bda0
    int32_t v2 = *(int32_t *)(v1 + 138); // 0x1e3bda0
    g2 = v2;
    *(int32_t *)v1 = (int32_t)&g62;
    int32_t v3 = g5; // 0x1e3bdac
    g8 = v3;
    int32_t v4; // 0x1e3bdb8
    if (v2 != 0) {
        // 0x1e3bdb2
        g2 = function_1e25401(v2);
        v4 = g8;
    } else {
        v4 = v3;
    }
    // 0x1e3bdb8
    *(int32_t *)(g9 - 4) = *(int32_t *)(v4 + 46);
    g2 = function_1e3a728((int32_t)&g708);
    g5 = g8;
    int32_t result = function_1e2a201(); // 0x1e3bdc2
    g2 = result;
    g8 = *(int32_t *)g9;
    return result;
}

// Address range: 0x1e3bdc9 - 0x1e3bdf9
int32_t function_1e3bdc9(void) {
    int32_t v1 = g5; // 0x1e3bdce
    int32_t v2 = v1 + 142; // 0x1e3bdce
    g8 = v2;
    int32_t v3 = *(int32_t *)v2; // 0x1e3bdd6
    g2 = v3;
    if (v3 != 0) {
        // 0x1e3bddc
        g2 = function_1e32771(v3);
        *(int32_t *)g8 = 0;
    }
    // 0x1e3bde4
    *(int32_t *)(v1 + 146) = 0;
    g5 = v1;
    int32_t result = function_1e3b2a6(); // 0x1e3bdf0
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g4 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e3bdf9 - 0x1e3be4a
int32_t function_1e3bdf9(int32_t a1) {
    // 0x1e3bdf9
    *(int32_t *)(a1 + 142) = 0;
    int32_t v1 = *(int32_t *)(a1 + 146); // 0x1e3be0b
    g2 = v1;
    int32_t v2;
    if (v1 == 0) {
        // 0x1e3be31
        g2 = *(int32_t *)a1;
        g5 = a1;
        v2 = 47;
    } else {
        // 0x1e3be15
        g2 = v1 - 1;
        g5 = a1;
        g2 = *(int32_t *)a1;
        v2 = 60;
    }
    int32_t result = function_1e328b9(v2, a1); // 0x1e3be3e
    g2 = result;
    return result;
}

// Address range: 0x1e3be4a - 0x1e3c004
int32_t function_1e3be4a(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2 = g6; // bp-20
    int32_t v3 = g5; // 0x1e3be53
    g8 = v3;
    g6 = a1;
    int32_t result;
    if (a1 == 37) {
        // 0x1e3be8f
        result = *(int32_t *)(v3 + 146);
    } else {
        if (a1 == 45) {
            int32_t v4 = v3 + 142; // 0x1e3be9a
            g6 = v4;
            g4 = 0;
            int32_t v5 = *(int32_t *)v4; // 0x1e3bea2
            g2 = v5;
            int32_t v6; // 0x1e3beb3
            if (v5 != 0) {
                // 0x1e3bea8
                g2 = function_1e32771(v5);
                *(int32_t *)g6 = g4;
                v6 = g9;
            } else {
                v6 = &v2;
            }
            // 0x1e3beb0
            *(float64_t *)(v6 - 8) = (float64_t)(float32_t)a2;
            int32_t v7 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3beb9
            g2 = v7;
            int32_t v8 = __ftol(); // 0x1e3bec1
            g2 = v8;
            g4 = v8;
            int32_t v9 = g8; // 0x1e3bec8
            int32_t v10 = *(int32_t *)(v9 + 46); // 0x1e3bec8
            g2 = v10;
            int32_t v11 = 2 * *(int32_t *)(v10 + 4); // 0x1e3bece
            g2 = v11;
            int32_t v12; // 0x1e3bed4
            if (v11 <= v8) {
                // 0x1e3bed4
                v12 = v11 - 1;
                g4 = v12;
            } else {
                v12 = v8;
            }
            int32_t v13 = g9 - 4; // 0x1e3bef7
            if (v12 >= 0) {
                int32_t v14 = v12 >> 31; // 0x1e3befa
                g7 = v14;
                g5 = v9;
                int32_t v15 = (v12 - v14) / 2; // 0x1e3beff
                g2 = v15;
                *(float32_t *)v13 = (float32_t)(float80_t)v15;
                *(int32_t *)(g9 - 4) = 45;
                g2 = function_1e3b3eb(v15, (int32_t)&g708, (int32_t)&g708);
                if ((g4 & 1) == 0) {
                    // 0x1e3bf16
                    *(int32_t *)(g9 - 4) = 0;
                    g5 = g8;
                    *(int32_t *)(g9 - 8) = 46;
                    int32_t v16 = function_1e3b3eb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3bf1c
                    g2 = v16;
                }
                int32_t v17 = *(int32_t *)(g8 + 138); // 0x1e3bf21
                g2 = v17;
                if (v17 != 0) {
                    // 0x1e3bf2b
                    *(int32_t *)(g9 - 4) = 0x1e3bdf9;
                    *(int32_t *)(g9 - 8) = g8;
                    *(int32_t *)(g9 - 12) = *(int32_t *)(4 * g4 + v17);
                    int32_t v18 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3bf34
                    g2 = v18;
                    *(int32_t *)g6 = v18;
                }
                // 0x1e3bf3b
                *(int32_t *)(g8 + 146) = g4;
            } else {
                // 0x1e3bedb
                *(int32_t *)v13 = 0;
                g5 = g8;
                *(int32_t *)(g9 - 8) = 20;
                int32_t v19 = function_1e3b3eb((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3bee1
                g2 = v19;
                *(int32_t *)(g8 + 146) = 0;
            }
        } else {
            if (a1 == 1011) {
                // 0x1e3bf46
                g2 = v3;
            } else {
                if (a1 == 1020) {
                    int32_t v20 = v3 + 142; // 0x1e3bf52
                    int32_t v21 = *(int32_t *)v20; // 0x1e3bf5a
                    g2 = v21;
                    int32_t v22; // 0x1e3bf7b
                    int32_t v23; // 0x1e3bf77
                    if (v21 != 0) {
                        // 0x1e3bf60
                        g2 = function_1e32771(v21);
                        *(int32_t *)v20 = 0;
                        v23 = g5;
                        v22 = g8;
                    } else {
                        v23 = v3;
                        v22 = v3;
                    }
                    int32_t v24 = v22 + 146; // 0x1e3bf68
                    g6 = v24;
                    int32_t v25 = *(int32_t *)(v22 + 30); // 0x1e3bf6e
                    g2 = v25;
                    int32_t v26 = *(int32_t *)(v25 + 218); // 0x1e3bf71
                    g7 = v26;
                    g4 = v23;
                    *(int32_t *)(v22 + 150 + 4 * v26) = *(int32_t *)v24;
                    g5 = g8;
                    *(float64_t *)(g9 - 8) = (float64_t)(float32_t)a2;
                    int32_t v27 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3bf90
                    g2 = v27;
                    int32_t v28 = __ftol(); // 0x1e3bf98
                    g2 = v28;
                    int32_t v29 = *(int32_t *)(4 * v28 + 150 + g8); // 0x1e3bf9d
                    g2 = v29;
                    *(int32_t *)g6 = v29;
                    if (v29 != 0) {
                        // 0x1e3bfaa
                        g5 = g8;
                        *(float32_t *)(g9 - 4) = (float32_t)(float80_t)*(int32_t *)g6;
                        *(int32_t *)(g9 - 4) = 45;
                        g2 = function_1e3be4a((int32_t)&g708, (int32_t)&g708);
                    }
                } else {
                    int32_t v30; // 0x1e3bff4
                    if (a1 == 1024) {
                        // 0x1e3bfbd
                        g2 = v3;
                        g5 = 0;
                        int32_t v31 = *(int32_t *)(v3 + 30); // 0x1e3bfc6
                        g2 = v31;
                        int32_t v32; // 0x1e3bff1
                        int32_t v33; // 0x1e3bff2
                        if (*(int32_t *)(v31 + 214) > 0) {
                            int32_t v34 = v3 + 150; // 0x1e3bfd1
                            g7 = v34;
                            int32_t v35 = *(int32_t *)(v3 + 146); // 0x1e3bfd7
                            g2 = v35;
                            g5 = 1;
                            *(int32_t *)v34 = v35;
                            int32_t v36 = g7 + 4; // 0x1e3bfe0
                            g7 = v36;
                            int32_t v37 = g8; // 0x1e3bfe3
                            int32_t v38 = *(int32_t *)(v37 + 30); // 0x1e3bfe3
                            g2 = v38;
                            int32_t v39 = g5; // 0x1e3bfe6
                            while (*(int32_t *)(v38 + 214) > v39) {
                                // 0x1e3bfd7
                                v35 = *(int32_t *)(v37 + 146);
                                g2 = v35;
                                g5 = v39 + 1;
                                *(int32_t *)v36 = v35;
                                v36 = g7 + 4;
                                g7 = v36;
                                v37 = g8;
                                v38 = *(int32_t *)(v37 + 30);
                                g2 = v38;
                                v39 = g5;
                            }
                            // 0x1e3bfee
                            v33 = v37;
                            v32 = g6;
                        } else {
                            v33 = v3;
                            v32 = 1024;
                        }
                        // 0x1e3bfee
                        g5 = v33;
                        v30 = v32;
                    } else {
                        v30 = a1;
                    }
                    // 0x1e3bff4
                    g2 = function_1e3b3eb(v30, a2, (int32_t)&g708);
                }
            }
        }
        // 0x1e3bff9
        result = 0;
    }
    // 0x1e3bffb
    g2 = result;
    return result;
}

// Address range: 0x1e3c004 - 0x1e3c017
int32_t function_1e3c004(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g2 = v1;
    g5 = *a1;
    *(float32_t *)a1 = -*(float32_t *)(v1 + 4);
    *(int32_t *)(g2 + 4) = g5;
    return g2;
}

// Address range: 0x1e3c017 - 0x1e3c042
int32_t function_1e3c017(int32_t a1, int32_t a2) {
    // 0x1e3c017
    int32_t v1; // bp-16
    int32_t v2 = &v1; // 0x1e3c01a
    int32_t * v3 = (int32_t *)a1; // 0x1e3c025
    v1 = *v3;
    int32_t v4 = g1 ? -4 : 4; // 0x1e3c025
    int32_t v5 = v4 + v2; // 0x1e3c025
    int32_t v6 = v4 + a1; // 0x1e3c025
    *(int32_t *)v5 = *(int32_t *)v6;
    *(int32_t *)(v5 + v4) = *(int32_t *)(v6 + v4);
    int32_t * v7 = (int32_t *)a2; // 0x1e3c02e
    *v3 = *v7;
    int32_t v8 = a1 + v4; // 0x1e3c02e
    int32_t v9 = a2 + v4; // 0x1e3c02e
    *(int32_t *)v8 = *(int32_t *)v9;
    *(int32_t *)(v8 + v4) = *(int32_t *)(v9 + v4);
    *v7 = v1;
    int32_t v10 = a2 + v4; // 0x1e3c037
    int32_t v11 = v2 + v4; // 0x1e3c037
    *(int32_t *)v10 = *(int32_t *)v11;
    *(int32_t *)(v10 + v4) = *(int32_t *)(v11 + v4);
    return g2;
}

// Address range: 0x1e3c042 - 0x1e3c328
int32_t function_1e3c042(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-112
    int32_t v3 = &v2; // 0x1e3c045
    g2 = a1;
    *(int32_t *)g5 = (int32_t)&g28;
    *(int32_t *)(g5 + 4) = g2;
    int32_t v4 = g5; // 0x1e3c056
    g2 = a11;
    *(int32_t *)(v4 + 8) = a2;
    *(int32_t *)(v4 + 17) = a3;
    g5 = a12;
    float32_t v5; // bp-40
    int32_t v6 = &v5; // edi
    *(int32_t *)v4 = (int32_t)&g63;
    *(int32_t *)(v4 + 25) = g2;
    *(int32_t *)(v4 + 29) = g5;
    *(char *)(v4 + 12) = 0;
    v5 = (float32_t)*(int32_t *)a5;
    int32_t v7 = g1 ? -4 : 4; // 0x1e3c081
    int32_t v8 = v7 + v6; // 0x1e3c081
    int32_t v9 = v7 + a5; // 0x1e3c081
    *(int32_t *)v8 = *(int32_t *)v9;
    *(int32_t *)(v8 + v7) = *(int32_t *)(v9 + v7);
    float32_t v10; // bp-28
    int32_t v11 = &v10; // 0x1e3c084
    v10 = (float32_t)*(int32_t *)a6;
    int32_t v12 = v7 + v11; // 0x1e3c08a
    int32_t v13 = v7 + a6; // 0x1e3c08a
    *(int32_t *)v12 = *(int32_t *)v13;
    *(int32_t *)(v12 + v7) = *(int32_t *)(v13 + v7);
    float32_t v14; // bp-100
    int32_t v15 = &v14; // 0x1e3c08d
    v14 = (float32_t)*(int32_t *)a7;
    int32_t v16 = v7 + v15; // 0x1e3c093
    int32_t v17 = v7 + a7; // 0x1e3c093
    *(int32_t *)v16 = *(int32_t *)v17;
    *(int32_t *)(v16 + v7) = *(int32_t *)(v17 + v7);
    g2 = a9;
    g5 = a10;
    *(int32_t *)(v4 + 213) = a8;
    *(int32_t *)(v4 + 217) = g2;
    *(int32_t *)(v4 + 149) = g5;
    float32_t v18;
    float80_t v19 = v18; // 0x1e3c0ba
    float80_t v20 = v19 + (float80_t)*(float32_t *)(a4 + 282); // 0x1e3c0ba
    *(float32_t *)(v4 + 49) = (float32_t)v20;
    float32_t v21;
    float80_t v22 = (float80_t)v21 + (float80_t)*(float32_t *)(a4 + 282); // 0x1e3c0c6
    *(float32_t *)(v4 + 45) = (float32_t)v22;
    float80_t v23 = 1.01L * (float80_t)*(float32_t *)(v4 + 49); // 0x1e3c0cf
    *(float32_t *)(v4 + 65) = (float32_t)v23;
    float80_t v24 = 1.01L * (float80_t)*(float32_t *)(v4 + 45); // 0x1e3c0db
    *(float32_t *)(v4 + 61) = (float32_t)v24;
    float32_t * v25 = (float32_t *)(v4 + 65); // 0x1e3c0e4
    *v25 = (float32_t)((float80_t)*v25 * (float80_t)*v25);
    float32_t * v26 = (float32_t *)(v4 + 61); // 0x1e3c0ed
    *v26 = (float32_t)((float80_t)*v26 * (float80_t)*v26);
    float32_t * v27 = (float32_t *)(v4 + 49); // 0x1e3c0f6
    float80_t v28 = (float80_t)*v27 * (float80_t)*v27; // 0x1e3c0f9
    *(float32_t *)(v4 + 57) = (float32_t)v28;
    float32_t * v29 = (float32_t *)(v4 + 45); // 0x1e3c0ff
    float80_t v30 = (float80_t)*v29 * (float80_t)*v29; // 0x1e3c102
    *(float32_t *)(v4 + 53) = (float32_t)v30;
    int32_t v31 = v4 + 153; // 0x1e3c10b
    *(int32_t *)v31 = (int32_t)v10;
    int32_t v32 = g1 ? -4 : 4; // 0x1e3c111
    int32_t v33 = v32 + v31; // 0x1e3c111
    int32_t v34 = v32 + v11; // 0x1e3c111
    *(int32_t *)v33 = *(int32_t *)v34;
    *(int32_t *)(v33 + v32) = *(int32_t *)(v34 + v32);
    int32_t v35 = v4 + 165; // 0x1e3c117
    *(int32_t *)v35 = (int32_t)v14;
    int32_t v36 = v35 + v32; // 0x1e3c11d
    int32_t v37 = v15 + v32; // 0x1e3c11d
    *(int32_t *)v36 = *(int32_t *)v37;
    *(int32_t *)(v36 + v32) = *(int32_t *)(v37 + v32);
    float32_t v38 = v5; // 0x1e3c123
    float32_t v39;
    g5 = v39;
    *(int32_t *)(v4 + 33) = (int32_t)v38;
    *(int32_t *)(v4 + 37) = g5;
    float80_t v40 = (float80_t)v10 - (float80_t)v38; // 0x1e3c132
    float32_t v41;
    float80_t v42 = v41; // 0x1e3c135
    float80_t v43 = v39; // 0x1e3c138
    float80_t v44 = v42 - v43; // 0x1e3c138
    int32_t v45 = (float32_t)v40; // bp-52
    int32_t v46 = &v45; // 0x1e3c141
    g2 = (float32_t)v44;
    g2 = (float32_t)function_1e30d19(v46);
    int32_t v47; // bp-64
    int32_t v48 = &v47; // 0x1e3c15b
    g5 = v48;
    v47 = v14 - v5;
    g11++;
    g2 = (float32_t)function_1e30d19(v48);
    g11++;
    g5 = v48;
    float80_t v49 = function_1e30e1f(&v45, &v47); // 0x1e3c188
    g2 = (float32_t)v49;
    function_1e3e1bc();
    *(float32_t *)(v4 + 69) = (float32_t)v49;
    g11++;
    g5 = v3;
    g2 = v46;
    g2 = function_1e3a768((float80_t)(int80_t)v46, (float80_t)(int80_t)v48, (float80_t)(int80_t)v3);
    int32_t v50;
    if (v50 <= -1 && v50 != -0x80000000) {
        float32_t * v51 = (float32_t *)(v4 + 69); // 0x1e3c1af
        *v51 = (float32_t)-(float80_t)*v51;
    }
    // 0x1e3c1b7
    g2 = 0;
    g5 = (float32_t)v40;
    *(int32_t *)(v4 + 77) = 0;
    *(int32_t *)(v4 + 21) = g2;
    float32_t v52 = g5; // bp-16
    int32_t v53 = &v52; // 0x1e3c1c8
    g5 = v53;
    g2 = (float32_t)function_1e30d19(v53);
    g5 = v53;
    g2 = function_1e3c004((int32_t *)&v52);
    float32_t v54 = *(float32_t *)(v4 + 45); // 0x1e3c1df
    g8 = v4 + 101;
    float80_t v55 = (float80_t)v54 * (float80_t)v52 + (float80_t)v5; // 0x1e3c1e8
    *(float32_t *)(v4 + 113) = (float32_t)v55;
    float80_t v56 = (int32_t)(float32_t)v44; // 0x1e3c1f1
    float80_t v57 = v43 + v56 * (float80_t)*(float32_t *)(v4 + 45); // 0x1e3c1f4
    *(float32_t *)(v4 + 117) = (float32_t)v57;
    float32_t v58 = *(float32_t *)(v4 + 49); // 0x1e3c1fa
    g5 = v53;
    float80_t v59 = (float80_t)v58 * (float80_t)v52 + (float80_t)v10; // 0x1e3c204
    *(float32_t *)g8 = (float32_t)v59;
    float80_t v60 = v42 + v56 * (float80_t)*(float32_t *)(v4 + 49); // 0x1e3c20f
    *(float32_t *)(v4 + 105) = (float32_t)v60;
    function_1e3c004((int32_t *)v53);
    g2 = v53;
    g2 = function_1e3c004((int32_t *)&v52);
    float32_t v61 = *(float32_t *)(v4 + 45); // 0x1e3c223
    int32_t v62 = v4 + 125; // 0x1e3c229
    g2 = v62;
    g6 = v4 + 137;
    float80_t v63 = (float80_t)v61 * (float80_t)v52 + (float80_t)v5; // 0x1e3c232
    *(float32_t *)v62 = (float32_t)v63;
    float80_t v64 = v43 + v56 * (float80_t)*(float32_t *)(v4 + 45); // 0x1e3c23d
    *(float32_t *)(v4 + 129) = (float32_t)v64;
    float80_t v65 = (float80_t)*(float32_t *)(v4 + 49) * (float80_t)v52; // 0x1e3c249
    int32_t v66 = *(int32_t *)(v4 + 69); // 0x1e3c24c
    *(float32_t *)g6 = (float32_t)(v65 + (float80_t)v10);
    float80_t v67 = v42 + v56 * (float80_t)*(float32_t *)(v4 + 49); // 0x1e3c25e
    *(float32_t *)(v4 + 141) = (float32_t)v67;
    if (v66 <= -1 && v66 != -0x80000000) {
        // 0x1e3c269
        function_1e3c017(g8, g2);
        int32_t v68 = v4 + 113; // 0x1e3c271
        g2 = v68;
        g2 = function_1e3c017(v68, g6);
    }
    float80_t v69 = (float80_t)v10 - (float80_t)*(float32_t *)(v4 + 33); // 0x1e3c27d
    float80_t v70 = v42 - (float80_t)*(float32_t *)(v4 + 37); // 0x1e3c283
    int32_t v71 = v4 + 177; // 0x1e3c288
    g2 = v71;
    g5 = a4;
    float80_t v72 = sqrtl(v69 * v69 + v70 * v70); // 0x1e3c297
    int32_t v73; // bp-76
    int32_t v74 = &v73; // 0x1e3c29c
    float80_t v75 = v19 + v72 + (float80_t)*(float32_t *)(a4 + 282); // 0x1e3c2a5
    *(float32_t *)v71 = (float32_t)v75;
    float32_t * v76 = (float32_t *)(v4 + 177); // 0x1e3c2aa
    float80_t v77 = (float80_t)*v76 * (float80_t)*v76; // 0x1e3c2b0
    *(float32_t *)g2 = (float32_t)v77;
    g11++;
    v73 = v10;
    int32_t v78 = g1 ? -4 : 4; // 0x1e3c2b8
    int32_t v79 = v78 + v74; // 0x1e3c2b8
    int32_t v80 = v78 + v11; // 0x1e3c2b8
    *(int32_t *)v79 = *(int32_t *)v80;
    *(int32_t *)(v79 + v78) = *(int32_t *)(v80 + v78);
    int32_t v81; // bp-88
    int32_t v82 = &v81; // 0x1e3c2be
    g2 = v74;
    v81 = v14;
    int32_t v83 = v78 + v82; // 0x1e3c2c7
    int32_t v84 = v78 + v15; // 0x1e3c2c7
    *(int32_t *)v83 = *(int32_t *)v84;
    int32_t v85 = v83 + v78; // 0x1e3c2c8
    *(int32_t *)v85 = *(int32_t *)(v84 + v78);
    g6 = v85 + v78;
    *(int32_t *)(g9 - 4) = v82;
    *(int32_t *)(g9 - 8) = v74;
    g2 = (float32_t)function_1e30de3(v81, (int32_t)&g708);
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    g5 = v4;
    *(float32_t *)(v4 + 181) = (float32_t)1.0;
    g11++;
    function_1e3c328();
    g2 = 0;
    *(int32_t *)(g4 + 201) = 0;
    *(int32_t *)(g4 + 205) = g2;
    *(int32_t *)(g4 + 209) = g2;
    g8 = *(int32_t *)g9;
    *(int32_t *)(g4 + 197) = g2;
    *(int32_t *)(g4 + 81) = g2;
    g2 = g4;
    g3 = v1;
    return g4;
}

// Address range: 0x1e3c328 - 0x1e3c405
int32_t function_1e3c328(void) {
    int32_t v1 = g3; // bp-4
    int32_t v2 = g5; // 0x1e3c329
    int32_t v3 = v2 + 49; // 0x1e3c329
    g7 = v3;
    float80_t v4 = (float80_t)*(float32_t *)(v2 + 33); // 0x1e3c32c
    float80_t v5 = v4 - (float80_t)*(float32_t *)(v2 + 45); // st7
    g3 = &v1;
    float80_t v6 = (float80_t)*(float32_t *)(v2 + 153); // 0x1e3c340
    uint32_t v7 = (int32_t)__asm_fnstsw(g10); // 0x1e3c346
    g2 = g2 & -0x10000 | v7;
    if ((v7 / 256 & 65) != 0) {
        // 0x1e3c34b
        v5 = v6 - (float80_t)*(float32_t *)v3;
    }
    // 0x1e3c34d
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    float80_t v8 = v5; // 0x1e3c360
    g6 = g5 + 169;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    float80_t v9 = (float80_t)*(float32_t *)g6 - (float80_t)*(float32_t *)g7; // 0x1e3c393
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    float80_t v10 = (float80_t)*(float32_t *)(g5 + 165); // 0x1e3c3ad
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    float80_t v11 = v10 + (float80_t)*(float32_t *)g7; // 0x1e3c3be
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    float80_t v12 = (float80_t)*(float32_t *)g7; // 0x1e3c3d8
    v5 = v12 + (float80_t)*(float32_t *)g6;
    g2 = g2 & -0x10000 | (int32_t)__asm_fnstsw(g10);
    int32_t result = function_1e320db((int32_t)(float32_t)v9, (int32_t)(float32_t)v8, (int32_t)(float32_t)v5, (int32_t)(float32_t)v11, g5, 0); // 0x1e3c3f9
    g2 = result;
    g4 = (float32_t)v5;
    return result;
}

// Address range: 0x1e3c405 - 0x1e3c497
int32_t function_1e3c405(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int3_t v1 = g11; // 0x1e3c405
    int32_t v2 = g5; // 0x1e3c405
    float80_t v3 = (float80_t)*(float32_t *)(v2 + 77); // 0x1e3c405
    g11 = v1 - 1;
    g684 = v3;
    int32_t v4 = *(int32_t *)(v2 + 21); // 0x1e3c409
    if (v4 == 0) {
        // 0x1e3c491
        return g2;
    }
    float32_t v5 = *(float32_t *)(v2 + 73); // 0x1e3c415
    float32_t v6 = *(float32_t *)(v2 + 69); // 0x1e3c418
    float32_t v7 = *(float32_t *)(v2 + 209); // 0x1e3c41b
    float32_t v8 = (v3 - (float80_t)v5) / (float80_t)v6 * (float80_t)v7; // bp-8
    uint32_t v9 = (int32_t)__asm_fnstsw(g10); // 0x1e3c42a
    g2 = g2 & -0x10000 | v9;
    if ((v9 / 256 & 1) != 0) {
        // 0x1e3c42f
        v8 = -v8;
    }
    uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e3c440
    g2 = g2 & -0x10000 | v10;
    float32_t v11; // 0x1e3c45a
    if ((v10 / 256 & 1) == 0) {
        float32_t v12 = *(float32_t *)(g5 + 201); // 0x1e3c451
        v11 = ((float80_t)(float32_t)a1 - (float80_t)v12) / (float80_t)v8;
    } else {
        v11 = 1.0f;
    }
    float32_t v13; // 0x1e3c472
    if ((int32_t)v11 <= -1 && (int32_t)v11 != -0x80000000) {
        v13 = 0.0f;
    } else {
        v13 = v11;
    }
    // 0x1e3c46d
    g2 = 0x3f800000;
    float32_t v14; // 0x1e3c485
    if ((int32_t)v13 > 0x3f800000) {
        // 0x1e3c477
        v14 = 1.0f;
    } else {
        v14 = v13;
    }
    // 0x1e3c47a
    float32_t v15; // 0x1e3c48e
    if (v4 == 2) {
        // 0x1e3c47f
        v15 = 1.0f - v14;
    } else {
        v15 = v14;
    }
    // 0x1e3c48b
    g11 = v1 - 1;
    g684 = (float80_t)v15 * (float80_t)*(float32_t *)(g5 + 69);
    // 0x1e3c491
    return 0x3f800000;
}

// Address range: 0x1e3c497 - 0x1e3c519
int32_t function_1e3c497(void) {
    // 0x1e3c497
    g8 = g5;
    int32_t v1 = *(int32_t *)&g571; // 0x1e3c4a011
    int32_t v2 = *(int32_t *)&g570; // 0x1e3c4a612
    float32_t v3 = g569; // 0x1e3c4ac
    g2 = v3;
    function_1e3a8ce((int32_t)&g588, (int32_t)v3, v2, v1, (int32_t)g572);
    int32_t v4 = *(int32_t *)&g576; // 0x1e3c4bc13
    int32_t v5 = *(int32_t *)&g575; // 0x1e3c4c214
    g2 = g574;
    int32_t v6 = *(int32_t *)&g573; // 0x1e3c4ce15
    int32_t v7 = function_1e3a8ce((int32_t)&g591, v6, (int32_t)g574, v5, v4); // 0x1e3c4d9
    g2 = v7;
    int32_t v8 = *(int32_t *)(g8 + 53); // 0x1e3c4de
    g5 = v8;
    g585 = v8;
    g583 = (float32_t)*(int32_t *)(g8 + 33);
    g584 = (float32_t)*(int32_t *)(g8 + 37);
    g2 = g581;
    int32_t v9 = *(int32_t *)(g8 + 57); // 0x1e3c503
    g5 = v9;
    g579 = v9;
    *(int32_t *)&g577 = *(int32_t *)&g580;
    g578 = g581;
    return g581;
}

// Address range: 0x1e3c519 - 0x1e3c5f3
int32_t function_1e3c519(int32_t a1) {
    int32_t v1 = g5; // 0x1e3c51c
    int32_t v2 = v1; // ebx
    g2 = function_1e3c405(a1, g3, g6, g8);
    int32_t v3 = v1 + 101; // esi
    g11++;
    int32_t v4 = function_1e30e36((int32_t)(float32_t)g684, &g586, &g587); // 0x1e3c53b
    g2 = v4;
    g5 = &g569;
    g3 = &g571;
    *(int32_t *)&g569 = *(int32_t *)v3;
    int32_t v5 = g1 ? -4 : 4; // 0x1e3c54c
    int32_t v6 = v5 + (int32_t)&g569; // 0x1e3c54c
    int32_t v7 = v5 + v3; // 0x1e3c54c
    *(int32_t *)v6 = *(int32_t *)v7;
    *(int32_t *)(v6 + v5) = *(int32_t *)(v7 + v5);
    int32_t v8 = v2 + 113; // 0x1e3c54f
    int32_t v9 = g3; // 0x1e3c552
    *(int32_t *)v9 = *(int32_t *)v8;
    int32_t v10 = v9 + v5; // 0x1e3c554
    int32_t v11 = v8 + v5; // 0x1e3c554
    *(int32_t *)v10 = *(int32_t *)v11;
    *(int32_t *)(v10 + v5) = *(int32_t *)(v11 + v5);
    int32_t v12 = v2 + 125; // 0x1e3c557
    *(int32_t *)&g573 = *(int32_t *)v12;
    int32_t v13 = v5 + (int32_t)&g573; // 0x1e3c55f
    int32_t v14 = v12 + v5; // 0x1e3c55f
    *(int32_t *)v13 = *(int32_t *)v14;
    *(int32_t *)(v13 + v5) = *(int32_t *)(v14 + v5);
    int32_t v15 = v2 + 137; // 0x1e3c562
    *(int32_t *)&g575 = *(int32_t *)v15;
    int32_t v16 = v5 + (int32_t)&g575; // 0x1e3c56d
    int32_t v17 = v15 + v5; // 0x1e3c56d
    *(int32_t *)v16 = *(int32_t *)v17;
    *(int32_t *)(v5 + v16) = *(int32_t *)(v5 + v17);
    int32_t v18 = v2 + 153; // 0x1e3c570
    *(int32_t *)&g580 = *(int32_t *)v18;
    int32_t v19 = v5 + (int32_t)&g580; // 0x1e3c57b
    int32_t v20 = v18 + v5; // 0x1e3c57b
    *(int32_t *)v19 = *(int32_t *)v20;
    *(int32_t *)(v19 + v5) = *(int32_t *)(v20 + v5);
    int32_t v21 = v2 + 33; // 0x1e3c57e
    v2 = v21;
    int32_t v22 = g587; // 0x1e3c581
    g2 = v22;
    function_1e30d5c(g5, g586, v22, v21);
    int32_t v23 = g586; // 0x1e3c595
    g2 = v23;
    function_1e30d5c(g3, v23, g587, v21);
    int32_t v24 = g586; // 0x1e3c5a8
    g2 = v24;
    function_1e30d5c((int32_t)&g580, v24, g587, v2);
    int32_t v25 = g586; // 0x1e3c5c5
    g2 = v25;
    function_1e30d5c((int32_t)&g573, v25, g587, v2);
    int32_t v26 = g586; // 0x1e3c5d6
    g2 = v26;
    int32_t v27 = g587; // 0x1e3c5db
    int32_t result = function_1e30d5c((int32_t)&g575, v26, v27, v2); // 0x1e3c5e7
    g2 = result;
    g3 = &g575;
    g6 = v26;
    g8 = v27;
    g4 = v2;
    return result;
}

// Address range: 0x1e3c5f3 - 0x1e3c76c
int32_t function_1e3c5f3(float80_t a1, float80_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2 = -1; // edi
    int32_t v3 = (float32_t)a1; // esi
    int32_t v4 = function_1e3a97f((int32_t)(float32_t)a1, (int32_t)&g588); // 0x1e3c610
    g2 = v4;
    float32_t v5 = g684; // 0x1e3c61b
    g11++;
    uint32_t v6 = (int32_t)__asm_fnstsw(g10); // 0x1e3c61e
    g2 = g2 & -0x10000 | v6;
    if ((v6 / 256 & 1) != 0) {
        // 0x1e3c623
        g2 = v5;
        v2 = 0;
    } else {
        v5 = 1.0e+9f;
    }
    // 0x1e3c62b
    g2 = function_1e3a828(v3, (int32_t)&g583);
    float32_t v7 = g684; // 0x1e3c639
    g11++;
    uint32_t v8 = (int32_t)__asm_fnstsw(g10); // 0x1e3c63c
    g2 = g2 & -0x10000 | v8;
    if ((v8 / 256 & 1) != 0) {
        // 0x1e3c641
        g2 = v7;
        v2 = 2;
    } else {
        v7 = v5;
    }
    // 0x1e3c64c
    g2 = function_1e3a828(v3, (int32_t)&g577);
    float32_t v9 = g684; // 0x1e3c65a
    g11++;
    uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e3c65d
    g2 = g2 & -0x10000 | v10;
    if ((v10 / 256 & 1) != 0) {
        // 0x1e3c662
        g2 = v9;
        v2 = 3;
    } else {
        v9 = v7;
    }
    // 0x1e3c66d
    g2 = function_1e3a97f(v3, (int32_t)&g591);
    float32_t v11 = g684; // 0x1e3c67b
    int3_t v12 = g11 + 1; // fpu_stat_TOP
    uint32_t v13 = (int32_t)__asm_fnstsw(g10); // 0x1e3c67e
    int32_t v14 = g2 & -0x10000 | v13; // 0x1e3c67e
    g2 = v14;
    int32_t v15; // 0x1e3c76923
    if ((v13 / 256 & 1) != 0) {
        // 0x1e3c683
        g2 = v11;
        v2 = 1;
        v15 = v11;
    } else {
        v15 = v14;
        v11 = v9;
    }
    float32_t * v16 = (float32_t *)(int32_t)(float32_t)a2; // 0x1e3c68e
    g5 = (float32_t)a2;
    float80_t v17;
    float80_t v18;
    int32_t result; // 0x1e3c769
    if ((int32_t)(float32_t)a2 == 0) {
        goto lab_0x1e3c761;
    } else {
        if ((int32_t)v11 < 0x4e6e6b28) {
            if (v2 == -1) {
                result = v15;
                v18 = 1.0e+9L;
                goto lab_0x1e3c764;
            } else {
                if (v2 == 0) {
                    int32_t v19 = (int32_t)(float32_t)a2 + 12; // 0x1e3c6ce
                    *(int32_t *)v19 = (int32_t)g588;
                    int32_t v20 = g1 ? -4 : 4; // 0x1e3c6d6
                    int32_t v21 = v20 + v19; // 0x1e3c6d6
                    int32_t v22 = v20 + (int32_t)&g588; // 0x1e3c6d6
                    *(int32_t *)v21 = *(int32_t *)v22;
                    *(int32_t *)(v21 + v20) = *(int32_t *)(v22 + v20);
                    *(int32_t *)(int32_t)(float32_t)a2 = g590;
                    int32_t v23 = (int32_t)(float32_t)a2 + v20; // 0x1e3c6e0
                    int32_t v24 = (int32_t)&g590 + v20; // 0x1e3c6e0
                    *(int32_t *)v23 = *(int32_t *)v24;
                    *(int32_t *)(v23 + v20) = *(int32_t *)(v24 + v20);
                    goto lab_0x1e3c761;
                } else {
                    if (v2 == 1) {
                        int32_t v25 = (int32_t)(float32_t)a2 + 12; // 0x1e3c6e5
                        *(int32_t *)v25 = (int32_t)g591;
                        int32_t v26 = g1 ? -4 : 4; // 0x1e3c6ed
                        int32_t v27 = v26 + v25; // 0x1e3c6ed
                        int32_t v28 = v26 + (int32_t)&g591; // 0x1e3c6ed
                        *(int32_t *)v27 = *(int32_t *)v28;
                        *(int32_t *)(v27 + v26) = *(int32_t *)(v28 + v26);
                        *(int32_t *)(int32_t)(float32_t)a2 = g593;
                        int32_t v29 = (int32_t)(float32_t)a2 + v26; // 0x1e3c6f7
                        int32_t v30 = (int32_t)&g593 + v26; // 0x1e3c6f7
                        *(int32_t *)v29 = *(int32_t *)v30;
                        *(int32_t *)(v29 + v26) = *(int32_t *)(v30 + v26);
                        goto lab_0x1e3c761;
                    } else {
                        if (v2 == 2) {
                            float32_t v31 = *(float32_t *)(v3 + 12); // 0x1e3c6fc
                            float80_t v32 = v11; // 0x1e3c6ff
                            g2 = (int32_t)(float32_t)a2 + 12;
                            float32_t v33 = *(float32_t *)v3; // 0x1e3c705
                            *v16 = (float32_t)(v32 * (float80_t)v31 + (float80_t)v33);
                            float32_t v34 = *(float32_t *)(v3 + 16); // 0x1e3c709
                            float32_t v35 = *(float32_t *)(v3 + 4); // 0x1e3c70f
                            float32_t * v36 = (float32_t *)((int32_t)(float32_t)a2 + 4); // 0x1e3c712
                            *v36 = (float32_t)(v32 * (float80_t)v34 + (float80_t)v35);
                            *(float32_t *)g2 = *v16 - g583;
                            v17 = (float80_t)*v36 - (float80_t)g584;
                            goto lab_0x1e3c756;
                        } else {
                            if (v2 == 3) {
                                float32_t v37 = *(float32_t *)(v3 + 12); // 0x1e3c72a
                                float80_t v38 = v11; // 0x1e3c72d
                                g2 = (int32_t)(float32_t)a2 + 12;
                                float32_t v39 = *(float32_t *)v3; // 0x1e3c733
                                *v16 = (float32_t)(v38 * (float80_t)v37 + (float80_t)v39);
                                float32_t v40 = *(float32_t *)(v3 + 16); // 0x1e3c737
                                float32_t v41 = *(float32_t *)(v3 + 4); // 0x1e3c73d
                                float32_t * v42 = (float32_t *)((int32_t)(float32_t)a2 + 4); // 0x1e3c740
                                *v42 = (float32_t)(v38 * (float80_t)v40 + (float80_t)v41);
                                *(float32_t *)g2 = *v16 - g577;
                                v17 = (float80_t)*v42 - (float80_t)g578;
                                goto lab_0x1e3c756;
                            } else {
                                goto lab_0x1e3c761;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x1e3c761;
        }
    }
  lab_0x1e3c761:
    // 0x1e3c761
    result = g2;
    v18 = v11;
    goto lab_0x1e3c764;
  lab_0x1e3c764:
    // 0x1e3c764
    g684 = v18;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
  lab_0x1e3c756:
    // 0x1e3c756
    *(float32_t *)((int32_t)(float32_t)a2 + 16) = (float32_t)v17;
    g11 = v12;
    g2 = (float32_t)function_1e30d19(g2);
    goto lab_0x1e3c761;
}

