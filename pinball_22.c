#include "pinball.h"

// Address range: 0x1e3c76c - 0x1e3ca4e
float80_t function_1e3c76c(int32_t a1, int32_t a2) {
    float80_t v1 = a2; // 0x1e3c778
    float80_t v2 = a1; // 0x1e3c784
    float80_t v3 = (float32_t)a2 - g570; // 0x1e3c79c
    float80_t v4 = (float32_t)a1 - g569; // 0x1e3c7ab
    int3_t v5 = g11 - 1; // fpu_stat_TOP
    uint32_t v6 = (int32_t)__asm_fnstsw(g10); // 0x1e3c7b2
    g2 = g2 & -0x10000 | v6;
    if ((v6 / 256 & 1) == 0) {
        uint32_t v7 = (int32_t)__asm_fnstsw(g10); // 0x1e3c7ed
        g2 = g2 & -0x10000 | v7;
        if ((v7 / 256 & 1) == 0) {
            uint32_t v8 = (int32_t)__asm_fnstsw(g10); // 0x1e3c824
            g2 = g2 & -0x10000 | v8;
            if ((v8 / 256 & 1) == 0) {
                uint32_t v9 = (int32_t)__asm_fnstsw(g10); // 0x1e3c85b
                g2 = g2 & -0x10000 | v9;
                if ((v9 / 256 & 1) == 0) {
                    goto lab_0x1e3c8a4;
                } else {
                    goto lab_0x1e3c860;
                }
            } else {
                goto lab_0x1e3c860;
            }
        } else {
            goto lab_0x1e3c860;
        }
    } else {
        goto lab_0x1e3c860;
    }
  lab_0x1e3c860:;
    uint32_t v10 = (int32_t)__asm_fnstsw(g10); // 0x1e3c878
    g2 = g2 & -0x10000 | v10;
    float80_t result; // st7
    if ((v10 / 256 & 65) == 0) {
        float80_t v11 = (float80_t)g580 - v2; // 0x1e3c883
        float80_t v12 = (float80_t)g581 - v1; // 0x1e3c88e
        result = v11 * v11 + v12 * v12;
        uint32_t v13 = (int32_t)__asm_fnstsw(g10); // 0x1e3c89b
        g2 = g2 & -0x10000 | v13;
        if ((v13 / 256 & 1) == 0) {
            // 0x1e3ca44
            g2 = 0;
            goto lab_0x1e3ca46;
        } else {
            goto lab_0x1e3c8a4;
        }
    } else {
        goto lab_0x1e3c8a4;
    }
  lab_0x1e3c8a4:;
    int32_t v14 = __asm_fnstsw(g10); // 0x1e3c8a7
    g2 = g2 & -0x10000 | v14;
    int32_t v15 = g5; // 0x1e3c8aa
    int32_t v16 = *(int32_t *)(v15 + 21); // 0x1e3c8aa
    g2 = v16;
    int3_t v17 = v5; // 0x1e3c906
    float80_t v18 = (float80_t)*(float32_t *)(v15 + 33); // 0x1e3c906
    if ((v14 & 0x4100) == 0) {
        if (v16 == 1) {
            float80_t v19 = g573; // 0x1e3c9cc
            float80_t v20 = g574; // 0x1e3c9d5
            float80_t v21 = (v18 - v19) * (v1 - v20); // 0x1e3c9db
            float32_t v22 = *(float32_t *)(v15 + 37); // 0x1e3c9dd
            result = v21 - (v2 - v19) * ((float80_t)v22 - v20);
            v5 = v17;
            uint32_t v23 = (int32_t)__asm_fnstsw(g10); // 0x1e3c9f5
            g2 = g2 & -0x10000 | v23;
            if ((v23 / 256 & 1) == 0) {
                // 0x1e3c9fa
                g2 = 4;
            } else {
                // 0x1e3ca01
                g2 = 5;
            }
        } else {
            if (v16 == 2) {
                float80_t v24 = g571; // 0x1e3ca08
                float80_t v25 = g572; // 0x1e3ca11
                float80_t v26 = (v18 - v24) * (v1 - v25); // 0x1e3ca17
                float32_t v27 = *(float32_t *)(v15 + 37); // 0x1e3ca19
                result = v26 - (v2 - v24) * ((float80_t)v27 - v25);
                v5 = v17;
                uint32_t v28 = (int32_t)__asm_fnstsw(g10); // 0x1e3ca31
                g2 = g2 & -0x10000 | v28;
                if ((v28 / 256 & 1) == 0) {
                    // 0x1e3ca36
                    g2 = 4;
                } else {
                    // 0x1e3ca3d
                    g2 = 5;
                }
            } else {
                float80_t v29 = g580; // 0x1e3c98a
                float80_t v30 = g581; // 0x1e3c993
                float80_t v31 = (v18 - v29) * (v1 - v30); // 0x1e3c999
                float32_t v32 = *(float32_t *)(v15 + 37); // 0x1e3c99b
                result = v31 - (v2 - v29) * ((float80_t)v32 - v30);
                v5 = v17;
                uint32_t v33 = (int32_t)__asm_fnstsw(g10); // 0x1e3c9b3
                g2 = g2 & -0x10000 | v33;
                if ((v33 / 256 & 1) == 0) {
                    // 0x1e3c9b8
                    g2 = 4;
                } else {
                    // 0x1e3c9c2
                    g2 = 5;
                }
            }
        }
    } else {
        if (v16 == 1) {
            float80_t v34 = g575; // 0x1e3c909
            float80_t v35 = g576; // 0x1e3c912
            float80_t v36 = (v18 - v34) * (v1 - v35); // 0x1e3c918
            float32_t v37 = *(float32_t *)(v15 + 37); // 0x1e3c91a
            result = v36 - (v2 - v34) * ((float80_t)v37 - v35);
            v5 = v17;
            uint32_t v38 = (int32_t)__asm_fnstsw(g10); // 0x1e3c932
            g2 = g2 & -0x10000 | v38;
            if ((v38 / 256 & 1) == 0) {
                // 0x1e3c937
                g2 = 5;
            } else {
                // 0x1e3c941
                g2 = 4;
            }
        } else {
            if (v16 == 2) {
                float80_t v39 = v3 * (v18 - (float80_t)g569); // 0x1e3c951
                float32_t v40 = *(float32_t *)(v15 + 37); // 0x1e3c954
                result = v39 - v4 * ((float80_t)v40 - (float80_t)g570);
                v5 = v17;
                uint32_t v41 = (int32_t)__asm_fnstsw(g10); // 0x1e3c964
                g2 = g2 & -0x10000 | v41;
                if ((v41 / 256 & 1) == 0) {
                    // 0x1e3c969
                    g2 = 5;
                } else {
                    // 0x1e3c973
                    g2 = 4;
                }
            } else {
                float80_t v42 = g580; // 0x1e3c8c4
                float80_t v43 = g581; // 0x1e3c8cd
                float80_t v44 = (v18 - v42) * (v1 - v43); // 0x1e3c8d3
                float32_t v45 = *(float32_t *)(v15 + 37); // 0x1e3c8d5
                result = v44 - (v2 - v42) * ((float80_t)v45 - v43);
                v5 = v17;
                uint32_t v46 = (int32_t)__asm_fnstsw(g10); // 0x1e3c8ed
                g2 = g2 & -0x10000 | v46;
                if ((v46 / 256 & 1) == 0) {
                    // 0x1e3c8f2
                    g2 = 5;
                } else {
                    // 0x1e3c8fc
                    g2 = 4;
                }
            }
        }
    }
    goto lab_0x1e3ca46;
  lab_0x1e3ca46:
    // 0x1e3ca46
    g11 = v5 + 1;
    return result;
}

// Address range: 0x1e3ca4e - 0x1e3d0be
int32_t function_1e3ca4e(int32_t a1) {
    int32_t v1; // ebp
    g3 = &v1;
    int32_t v2 = a1 + 32; // 0x1e3ca55
    g2 = v2;
    int32_t v3; // bp-132
    int32_t v4 = &v3; // 0x1e3ca58
    g4 = g5;
    uint32_t v5 = (int32_t)__asm_fnstsw(g10); // 0x1e3ca6e
    g2 = g2 & -0x10000 | v5;
    if ((v5 / 256 & 1) != 0) {
        // 0x1e3ca73
        *(int32_t *)(g4 + 21) = 0;
    }
    int32_t v6 = g4; // 0x1e3ca7a
    int32_t v7 = v6 + 197; // 0x1e3ca7a
    g5 = v7;
    g2 = 0;
    int32_t * v8 = (int32_t *)v7; // 0x1e3ca82
    int32_t v9; // bp-120
    float32_t v10;
    float32_t v11; // bp-44
    float32_t v12; // bp-56
    int32_t v13;
    float32_t * v14;
    int32_t v15;
    int32_t v16; // 0x1e3d0a1
    int32_t v17; // 0x1e3cd18
    int32_t v18; // 0x1e3cd3f
    float80_t v19; // 0x1e3cd8c
    int32_t v20; // 0x1e3cd99
    int32_t v21; // 0x1e3cda2
    float32_t * v22;
    int32_t v23; // 0x1e3ce1d
    float80_t v24; // 0x1e3cbfd
    if (*v8 == 0) {
        // 0x1e3ca8d
        g8 = 0;
        float32_t v25;
        if (*(int32_t *)(v6 + 21) != 0) {
            // 0x1e3cd15
            v17 = a1 + 24;
            g2 = v17;
            float32_t * v26 = (float32_t *)(v6 + 181); // 0x1e3cd20
            float80_t v27 = (float80_t)*(float32_t *)v17 * (float80_t)*v26; // 0x1e3cd20
            g5 = a1;
            int32_t v28 = a1 + 12; // 0x1e3cd2c
            g2 = v28;
            float80_t v29 = (float80_t)*v26 * (float80_t)*(float32_t *)v28; // 0x1e3cd3b
            int32_t * v30 = (int32_t *)a1; // 0x1e3cd3d
            int32_t v31 = *v30; // 0x1e3cd3d
            g2 = v31;
            v18 = a1 + 4;
            g2 = v2;
            float80_t v32 = (float80_t)*(float32_t *)(a1 + 16) * (float80_t)*v26; // 0x1e3cd54
            int32_t v33 = *(int32_t *)v2; // 0x1e3cd5a
            g5 = v33;
            uint32_t v34 = (int32_t)__asm_fnstsw(g10); // 0x1e3cd6a
            g2 = g2 & -0x10000 | v34;
            if ((v34 / 256 & 65) == 0) {
                // 0x1e3cd73
                v20 = &v11;
                v21 = &v12;
                v13 = *(int32_t *)v18;
                v10 = v31;
                float32_t v35 = v33;
                while (true) {
                    // 0x1e3cd73
                    *(int32_t *)(g9 - 4) = (int32_t)v35;
                    g5 = g4;
                    g2 = function_1e3c519((int32_t)&g708);
                    g5 = g4;
                    g2 = function_1e3c497();
                    *(int32_t *)(g9 - 4) = v13;
                    *(int32_t *)(g9 - 8) = (int32_t)v10;
                    g5 = g4;
                    v19 = function_1e3c76c((int32_t)&g708, (int32_t)&g708);
                    g2 = (float32_t)v19;
                    if ((int32_t)(float32_t)v19 != 0) {
                        // break -> 0x1e3ce1d
                        break;
                    }
                    // 0x1e3cd99
                    v11 = (float32_t)*(int32_t *)v28;
                    int32_t v36 = g1 ? -4 : 4; // 0x1e3cd9f
                    int32_t v37 = v36 + v20; // 0x1e3cd9f
                    int32_t v38 = v36 + v28; // 0x1e3cd9f
                    *(int32_t *)v37 = *(int32_t *)v38;
                    *(int32_t *)(v37 + v36) = *(int32_t *)(v38 + v36);
                    int32_t v39 = *v30; // 0x1e3cda8
                    v12 = v39;
                    int32_t v40 = v36 + v21; // 0x1e3cda8
                    int32_t v41 = v36 + a1; // 0x1e3cda8
                    *(int32_t *)v40 = *(int32_t *)v41;
                    *(int32_t *)(v40 + v36) = *(int32_t *)(v41 + v36);
                    g2 = (float32_t)v27;
                    g5 = a1;
                    g2 = v4;
                    g5 = v21;
                    *(int32_t *)(g9 - 4) = v4;
                    *(int32_t *)(g9 - 8) = v21;
                    int32_t v42 = function_1e3c5f3((float80_t)(float32_t)v39, (float80_t)(int80_t)&g708); // 0x1e3cdc2
                    g2 = v42;
                    g11++;
                    uint32_t v43 = (int32_t)__asm_fnstsw(g10); // 0x1e3cdd0
                    g2 = g2 & -0x10000 | v43;
                    if ((v43 / 256 & 1) != 0) {
                        int32_t v44 = g4 + 221; // 0x1e3d002
                        g2 = v44;
                        *(int32_t *)v44 = v3;
                        int32_t v45 = g1 ? -4 : 4; // 0x1e3d00d
                        int32_t v46 = v45 + v44; // 0x1e3d00d
                        int32_t v47 = v45 + v4; // 0x1e3d00d
                        *(int32_t *)v46 = *(int32_t *)v47;
                        *(int32_t *)(v46 + v45) = *(int32_t *)(v47 + v45);
                        float80_t v48 = -1.0e-5L * (float80_t)v11; // 0x1e3d013
                        float32_t * v49 = (float32_t *)g2; // 0x1e3d019
                        *v49 = (float32_t)(v48 + (float80_t)*v49);
                        int32_t v50 = g4 + 225; // 0x1e3d026
                        g2 = v50;
                        float32_t * v51 = (float32_t *)v50; // 0x1e3d02c
                        float80_t v52 = -1.0e-5L * (float80_t)v25 + (float80_t)*v51; // 0x1e3d02c
                        *v51 = (float32_t)v52;
                        int32_t v53 = __asm_fnstsw(g10); // 0x1e3d066
                        g2 = g2 & -0x10000 | v53;
                        int32_t v54 = *(int32_t *)(g4 + 69); // 0x1e3d078
                        if ((v53 & 256) == 0) {
                            if (v54 >= 0 == (v54 != 0)) {
                                // 0x1e3d083
                                g2 = 0;
                                v16 = 0;
                                goto lab_0x1e3d085;
                            } else {
                                // 0x1e3d071
                                g2 = 1;
                                v16 = 1;
                                goto lab_0x1e3d085;
                            }
                        } else {
                            // 0x1e3d078
                            g2 = 1;
                            if (v54 >= 0 == (v54 != 0)) {
                                v16 = 1;
                                goto lab_0x1e3d085;
                            } else {
                                // 0x1e3d083
                                g2 = 0;
                                v16 = 0;
                                goto lab_0x1e3d085;
                            }
                        }
                    }
                    // 0x1e3cdd9
                    g2 = a1;
                    g5 = v2;
                    float80_t v55 = v32 + (float80_t)(float32_t)v13; // 0x1e3cdf7
                    uint32_t v56 = (int32_t)__asm_fnstsw(g10); // 0x1e3ce05
                    g2 = g2 & -0x10000 | v56;
                    if ((v56 / 256 & 65) != 0) {
                        goto lab_0x1e3ce0e;
                    }
                    v13 = (float32_t)v55;
                    v10 += (float32_t)v29;
                    v35 += *(float32_t *)(g4 + 181);
                }
                // 0x1e3ce1d
                v23 = *(int32_t *)(g4 + 21);
                g5 = v23;
                if (v23 != 1) {
                    goto lab_0x1e3ce44;
                } else {
                    if ((int32_t)(float32_t)v19 == 5) {
                        goto lab_0x1e3ce44;
                    } else {
                        v22 = &g588;
                        v14 = &g589;
                        v15 = &g588;
                        goto lab_0x1e3ce6e;
                    }
                }
            } else {
                goto lab_0x1e3ce0e;
            }
        } else {
            // 0x1e3ca98
            g2 = v2;
            *v8 = 0;
            int32_t v57 = g4; // 0x1e3ca9d
            g5 = v57;
            *(int32_t *)(v57 + 81) = g8;
            *(int32_t *)(g4 + 85) = g8;
            g2 = function_1e3c519(*(int32_t *)g2);
            g5 = g4;
            function_1e3c497();
            int32_t v58 = a1 + 4; // 0x1e3cab9
            g2 = v58;
            g5 = g4;
            int32_t * v59 = (int32_t *)v58; // 0x1e3cac1
            int32_t * v60 = (int32_t *)a1; // 0x1e3cac3
            float80_t v61 = function_1e3c76c(*v60, *v59); // 0x1e3cac5
            g2 = (float32_t)v61;
            g5 = a1;
            g2 = *(int32_t *)(a1 + 28);
            if ((int32_t)(float32_t)v61 == 0) {
                int32_t v62 = &v11; // 0x1e3cc8f
                int32_t v63 = a1 + 12; // 0x1e3cc92
                v11 = (float32_t)*(int32_t *)v63;
                int32_t v64 = g1 ? -4 : 4; // 0x1e3cc95
                int32_t v65 = v64 + v62; // 0x1e3cc95
                int32_t v66 = v64 + v63; // 0x1e3cc95
                *(int32_t *)v65 = *(int32_t *)v66;
                *(int32_t *)(v65 + v64) = *(int32_t *)(v66 + v64);
                int32_t v67 = &v12; // 0x1e3cc98
                v12 = (float32_t)*v60;
                int32_t v68 = v64 + v67; // 0x1e3cc9e
                int32_t v69 = v64 + a1; // 0x1e3cc9e
                *(int32_t *)v68 = *(int32_t *)v69;
                *(int32_t *)(v68 + v64) = *(int32_t *)(v69 + v64);
                g5 = a1;
                g2 = v4;
                g5 = v67;
                g2 = function_1e3c5f3((float80_t)(int80_t)v67, (float80_t)(int80_t)v4);
                uint32_t v70 = (int32_t)__asm_fnstsw(g10); // 0x1e3ccc0
                g2 = g2 & -0x10000 | v70;
                int32_t v71 = g4 + 221; // 0x1e3ccf5
                if ((v70 / 256 & 64) == 0) {
                    // 0x1e3ccf5
                    *(int32_t *)v71 = v3;
                    int32_t v72 = g1 ? -4 : 4; // 0x1e3ccfe
                    int32_t v73 = v72 + v71; // 0x1e3ccfe
                    int32_t v74 = v72 + v4; // 0x1e3ccfe
                    *(int32_t *)v73 = *(int32_t *)v74;
                    *(int32_t *)(v73 + v72) = *(int32_t *)(v74 + v72);
                } else {
                    // 0x1e3ccc5
                    g2 = v71;
                    *(int32_t *)v71 = v3;
                    int32_t v75 = g1 ? -4 : 4; // 0x1e3ccd0
                    int32_t v76 = v75 + v71; // 0x1e3ccd0
                    int32_t v77 = v75 + v4; // 0x1e3ccd0
                    *(int32_t *)v76 = *(int32_t *)v77;
                    *(int32_t *)(v76 + v75) = *(int32_t *)(v77 + v75);
                    float80_t v78 = -1.0e-5L * (float80_t)v11; // 0x1e3ccd6
                    float32_t * v79 = (float32_t *)g2; // 0x1e3ccdc
                    *v79 = (float32_t)(v78 + (float80_t)*v79);
                    int32_t v80 = g4 + 225; // 0x1e3cce9
                    g2 = v80;
                    float32_t * v81 = (float32_t *)v80; // 0x1e3ccef
                    float80_t v82 = -1.0e-5L * (float80_t)v25 + (float80_t)*v81; // 0x1e3ccef
                    *v81 = (float32_t)v82;
                }
                int32_t v83 = g4 + 185; // 0x1e3cd04
                *(int32_t *)v83 = v9;
                int32_t v84 = g1 ? -4 : 4; // 0x1e3cd0a
                int32_t v85 = v83 + v84; // 0x1e3cd0a
                int32_t v86 = (int32_t)&v9 + v84; // 0x1e3cd0a
                *(int32_t *)v85 = *(int32_t *)v86;
                *(int32_t *)(v85 + v84) = *(int32_t *)(v86 + v84);
                return g2;
            } else {
                int32_t v87 = g4 + 33; // 0x1e3cae3
                int32_t v88 = *(int32_t *)v87; // 0x1e3cae6
                int32_t * v89 = (int32_t *)(a1 + 8); // 0x1e3cae8
                float80_t v90 = function_1e30e04((float32_t)*v60, *v59, *v89, v88); // 0x1e3caf0
                g2 = (float32_t)v90;
                g11++;
                uint32_t v91 = (int32_t)__asm_fnstsw(g10); // 0x1e3caf8
                g2 = g2 & -0x10000 | v91;
                float80_t v92;
                int3_t v93; // 0x1e3cba3
                float32_t * v94;
                if ((v91 / 256 & 1) == 0) {
                    // 0x1e3cb22
                    g2 = g582;
                    g5 = a1;
                    int32_t v95 = *(int32_t *)&g580; // 0x1e3cb318
                    float80_t v96 = function_1e30e04((float32_t)*v60, *v59, *v89, v95); // 0x1e3cb3f
                    g2 = (float32_t)v96;
                    g11++;
                    uint32_t v97 = (int32_t)__asm_fnstsw(g10); // 0x1e3cb47
                    g2 = g2 & -0x10000 | v97;
                    if ((v97 / 256 & 1) == 0) {
                        float32_t v98 = (int32_t)(float32_t)v61 != 4 ? g591 : g588;
                        v11 = -v98;
                        float32_t v99 = (int32_t)(float32_t)v61 != 4 ? g592 : g589;
                        v94 = (float32_t *)a1;
                        v93 = g11;
                        v92 = -(float80_t)v99;
                    } else {
                        // 0x1e3cb4c
                        g2 = a1;
                        g5 = v58;
                        int32_t v100 = &v11; // 0x1e3cb58
                        float32_t * v101 = (float32_t *)a1; // 0x1e3cb5b
                        v11 = g580 - *v101;
                        float80_t v102 = (float80_t)g581 - (float80_t)*(float32_t *)v58; // 0x1e3cb67
                        g2 = (float32_t)function_1e30d19(v100);
                        v94 = v101;
                        v93 = g11 + 1;
                        v92 = v102;
                    }
                } else {
                    float80_t v103 = (float80_t)*(float32_t *)v87; // 0x1e3cafd
                    g2 = a1;
                    g5 = v58;
                    int32_t v104 = &v11; // 0x1e3cb05
                    float32_t * v105 = (float32_t *)a1; // 0x1e3cb08
                    v11 = v103 - (float80_t)*v105;
                    float80_t v106 = (float80_t)*(float32_t *)(g4 + 37); // 0x1e3cb0e
                    g2 = (float32_t)function_1e30d19(v104);
                    v94 = v105;
                    v93 = g11 + 1;
                    v92 = v106 - (float80_t)*(float32_t *)v58;
                }
                // 0x1e3cba3
                g2 = a1;
                g5 = v58;
                float80_t v107 = -5.0L * (float80_t)v11 + (float80_t)*v94; // 0x1e3cbb2
                v12 = v107;
                *(int32_t *)(g9 - 4) = v4;
                float32_t v108 = *(float32_t *)g5; // 0x1e3cbc4
                int32_t v109 = &v12; // 0x1e3cbc6
                g5 = v109;
                *(int32_t *)(g9 - 8) = v109;
                g11 = v93;
                g2 = function_1e3c5f3(v107, -5.0L * v92 + (float80_t)v108);
                g11++;
                uint32_t v110 = (int32_t)__asm_fnstsw(g10); // 0x1e3cbe4
                g2 = g2 & -0x10000 | v110;
                if ((v110 / 256 & 1) == 0) {
                    float80_t v111 = (float80_t)*(float32_t *)g8; // 0x1e3cbe9
                    g2 = a1;
                    g5 = v58;
                    *(int32_t *)(g9 - 4) = (int32_t)&v11;
                    float32_t v112 = v111 - (float80_t)*v94; // 0x1e3cbf7
                    v11 = v112;
                    float80_t v113 = (float80_t)*(float32_t *)(g4 + 37); // 0x1e3cbfa
                    v24 = v113 - (float80_t)*(float32_t *)g5;
                    function_1e30d19((int32_t)v112);
                    g5 = a1;
                    g2 = v4;
                    *(int32_t *)(g9 - 4) = v4;
                    g5 = v109;
                    *(int32_t *)(g9 - 8) = v109;
                    float80_t v114 = -5.0L * (float80_t)v11 + (float80_t)*v94; // 0x1e3cc22
                    v12 = v114;
                    g11++;
                    g2 = function_1e3c5f3(v114, -5.0L * v24 + (float80_t)*(float32_t *)v58);
                    g11++;
                    uint32_t v115 = (int32_t)__asm_fnstsw(g10); // 0x1e3cc3e
                    g2 = g2 & -0x10000 | v115;
                    if ((v115 / 256 & 1) == 0) {
                        goto lab_0x1e3ce0e;
                    } else {
                        goto lab_0x1e3cc47;
                    }
                } else {
                    v24 = v92;
                    goto lab_0x1e3cc47;
                }
            }
        }
    } else {
        // 0x1e3ca86
        *v8 = 0;
        goto lab_0x1e3ce0e;
    }
  lab_generated_0:
    return g2;
  lab_0x1e3ce0e:
    // 0x1e3ce14
    return g2;
  lab_0x1e3ce44:
    if (v23 != 2) {
        goto lab_0x1e3cf1b;
    } else {
        if ((int32_t)(float32_t)v19 == 4) {
            goto lab_0x1e3cf1b;
        } else {
            v22 = &g591;
            v14 = &g592;
            v15 = &g591;
            goto lab_0x1e3ce6e;
        }
    }
  lab_0x1e3cc47:;
    int32_t v116 = g4 + 221; // 0x1e3cc47
    g2 = v116;
    *(int32_t *)v116 = v3;
    int32_t v117 = g1 ? -4 : 4; // 0x1e3cc52
    int32_t v118 = v117 + v116; // 0x1e3cc52
    int32_t v119 = v117 + v4; // 0x1e3cc52
    *(int32_t *)v118 = *(int32_t *)v119;
    *(int32_t *)(v118 + v117) = *(int32_t *)(v119 + v117);
    float80_t v120 = -1.0e-5L * (float80_t)v11; // 0x1e3cc58
    float32_t * v121 = (float32_t *)g2; // 0x1e3cc5e
    int32_t v122 = g4 + 185; // edi
    *v121 = (float32_t)(v120 + (float80_t)*v121);
    float80_t v123 = -1.0e-5L * (float80_t)(float32_t)v24; // 0x1e3cc6e
    int32_t v124 = g4 + 225; // 0x1e3cc74
    g2 = v124;
    float32_t * v125 = (float32_t *)v124; // 0x1e3cc7a
    *v125 = (float32_t)(v123 + (float80_t)*v125);
    *(int32_t *)v122 = v9;
    int32_t v126 = v122 + v117; // 0x1e3cc7e
    int32_t v127 = (int32_t)&v9 + v117; // 0x1e3cc7e
    *(int32_t *)v126 = *(int32_t *)v127;
    *(int32_t *)(v126 + v117) = *(int32_t *)(v127 + v117);
    goto lab_0x1e3ce0e;
  lab_0x1e3cf1b:;
    float80_t v128 = v10; // 0x1e3cf1e
    *(int32_t *)(g4 + 81) = 0;
    *(int32_t *)(g4 + 85) = 1;
    g5 = v20;
    v11 = (float80_t)*(float32_t *)(g4 + 33) - v128;
    float80_t v129 = v13; // 0x1e3cf38
    *(int32_t *)(g9 - 4) = v20;
    float80_t v130 = (float80_t)*(float32_t *)(g4 + 37) - v129; // 0x1e3cf3c
    function_1e30d19((int32_t)v11);
    g5 = v17;
    float80_t v131 = v128 - 5.0L * (float80_t)v11; // 0x1e3cf52390
    v12 = v131;
    g2 = v21;
    *(int32_t *)(g9 - 4) = v4;
    *(int32_t *)(g9 - 8) = v21;
    g11++;
    g2 = function_1e3c5f3(v131, v129 + -5.0L * v130);
    uint32_t v132 = (int32_t)__asm_fnstsw(g10); // 0x1e3cf85
    g2 = g2 & -0x10000 | v132;
    if ((v132 / 256 & 1) == 0) {
        // 0x1e3cf8a
        g2 = v10;
        g5 = v13;
        *(float32_t *)(g4 + 185) = -v11;
        *(int32_t *)(g4 + 221) = g2;
        *(int32_t *)(g4 + 225) = g5;
        *(float32_t *)(g4 + 189) = (float32_t)-v130;
    } else {
        int32_t v133 = g4 + 221; // 0x1e3cfbd
        g2 = v133;
        *(int32_t *)v133 = v3;
        int32_t v134 = g1 ? -4 : 4; // 0x1e3cfc8
        int32_t v135 = v134 + v133; // 0x1e3cfc8
        int32_t v136 = v134 + v4; // 0x1e3cfc8
        *(int32_t *)v135 = *(int32_t *)v136;
        *(int32_t *)(v135 + v134) = *(int32_t *)(v136 + v134);
        float80_t v137 = -1.0e-5L * (float80_t)v11; // 0x1e3cfce
        float32_t * v138 = (float32_t *)g2; // 0x1e3cfd4
        v122 = g4 + 185;
        *v138 = (float32_t)(v137 + (float80_t)*v138);
        int32_t v139 = g4 + 225; // 0x1e3cfea
        g2 = v139;
        float32_t * v140 = (float32_t *)v139; // 0x1e3cff0
        *v140 = (float32_t)(-1.0e-5L * v130 + (float80_t)*v140);
        *(int32_t *)v122 = v9;
        int32_t v141 = v122 + v134; // 0x1e3cff4
        int32_t v142 = (int32_t)&v9 + v134; // 0x1e3cff4
        *(int32_t *)v141 = *(int32_t *)v142;
        *(int32_t *)(v141 + v134) = *(int32_t *)(v142 + v134);
    }
    goto lab_0x1e3ce0e;
  lab_0x1e3ce6e:
    // 0x1e3ce6e
    v11 = -*v22;
    float80_t v143 = (float80_t)*v14; // 0x1e3ce3a
    int32_t v144 = g4 + 89; // 0x1e3ce71
    *(int32_t *)v144 = *(int32_t *)v15;
    int32_t v145 = g1 ? -4 : 4; // 0x1e3ce74
    int32_t v146 = v145 + v144; // 0x1e3ce74
    int32_t v147 = v145 + v15; // 0x1e3ce74
    *(int32_t *)v146 = *(int32_t *)v147;
    *(int32_t *)(v146 + v145) = *(int32_t *)(v147 + v145);
    *(int32_t *)(g4 + 81) = 1;
    *(int32_t *)(g4 + 85) = 0;
    g2 = a1;
    g5 = v17;
    float80_t v148 = -5.0L * (float80_t)v11 + (float80_t)*(float32_t *)a1; // 0x1e3ce94
    v12 = v148;
    *(int32_t *)(g9 - 4) = v4;
    g2 = v21;
    *(int32_t *)(g9 - 8) = v21;
    g2 = function_1e3c5f3(v148, 5.0L * v143 + (float80_t)*(float32_t *)v18);
    *(int32_t *)g6 = v9;
    int32_t v149 = g1 ? -4 : 4; // 0x1e3ced0
    int32_t v150 = v149 + g6; // 0x1e3ced0
    int32_t v151 = v149 + g8; // 0x1e3ced0
    *(int32_t *)v150 = *(int32_t *)v151;
    *(int32_t *)(v150 + v149) = *(int32_t *)(v151 + v149);
    g11++;
    uint32_t v152 = (int32_t)__asm_fnstsw(g10); // 0x1e3ced9
    g2 = g2 & -0x10000 | v152;
    if ((v152 / 256 & 1) == 0) {
        goto lab_generated_1;
    } else {
        int32_t v153 = g4 + 221; // 0x1e3cee2
        g2 = v153;
        *(int32_t *)v153 = v3;
        int32_t v154 = g1 ? -4 : 4; // 0x1e3ceed
        int32_t v155 = v154 + v153; // 0x1e3ceed
        int32_t v156 = v154 + v4; // 0x1e3ceed
        *(int32_t *)v155 = *(int32_t *)v156;
        *(int32_t *)(v155 + v154) = *(int32_t *)(v156 + v154);
        float80_t v157 = -1.0e-5L * (float80_t)v11; // 0x1e3cef3
        float32_t * v158 = (float32_t *)g2; // 0x1e3ceff
        *v158 = (float32_t)(v157 + (float80_t)*v158);
        float32_t * v159 = (float32_t *)(g4 + 225); // 0x1e3cf0c
        *v159 = (float32_t)(1.0e-5L * v143 + (float80_t)*v159);
        goto lab_0x1e3ce0e;
    }
  lab_0x1e3d085:;
    // 0x1e3d085
    int32_t v160; // esi
    if (*(int32_t *)(g4 + 21) != 2) {
        // 0x1e3d09c
        v160 = &g588;
        *(int32_t *)(g4 + 81) = v16;
        goto lab_0x1e3d0a4;
    } else {
        // 0x1e3d08b
        v160 = &g591;
        int32_t v161 = v16 == 0; // 0x1e3d093
        g2 = v161;
        *(int32_t *)(g4 + 81) = v161;
        goto lab_0x1e3d0a4;
    }
  lab_0x1e3d0a4:;
    int32_t v162 = g4 + 89; // 0x1e3d0a4
    *(int32_t *)v162 = *(int32_t *)v160;
    int32_t v163 = g1 ? -4 : 4; // 0x1e3d0a7
    int32_t v164 = v163 + v162; // 0x1e3d0a7
    int32_t v165 = v163 + v160; // 0x1e3d0a7
    *(int32_t *)v164 = *(int32_t *)v165;
    *(int32_t *)(v164 + v163) = *(int32_t *)(v165 + v163);
    int32_t v166 = g4 + 185; // 0x1e3d0ad
    *(int32_t *)v166 = v9;
    int32_t v167 = v166 + v163; // 0x1e3d0b3
    int32_t v168 = (int32_t)&v9 + v163; // 0x1e3d0b3
    *(int32_t *)v167 = *(int32_t *)v168;
    *(int32_t *)(v167 + v163) = *(int32_t *)(v168 + v163);
    goto lab_0x1e3ce0e;
}

// Address range: 0x1e3d0be - 0x1e3d27f
int32_t function_1e3d0be(int32_t a1) {
    int32_t v1 = g5; // 0x1e3d0c5
    int32_t v2 = *(int32_t *)(v1 + 21); // 0x1e3d0c5
    g2 = v2;
    *(int32_t *)(v1 + 197) = 1;
    int32_t v3 = g5; // 0x1e3d0d2
    int32_t v4 = v3; // esi
    g5 = 0;
    float32_t v5;
    float32_t v6;
    int32_t v7; // 0x1e3d26d
    if (v2 == 0) {
        v6 = 0.0f;
        goto lab_0x1e3d227;
    } else {
        // 0x1e3d0de
        if (*(int32_t *)(v3 + 81) == 0) {
            // 0x1e3d184
            if (*(int32_t *)(v3 + 85) == 0) {
                v6 = 0.0f;
                goto lab_0x1e3d227;
            } else {
                int32_t v8 = v3 + 221; // 0x1e3d18e
                g5 = v8;
                float80_t v9 = (float80_t)*(float32_t *)v8; // 0x1e3d194
                float80_t v10 = v9 - (float80_t)*(float32_t *)(v3 + 33); // 0x1e3d196
                float32_t v11 = *(float32_t *)(v3 + 37); // 0x1e3d19f
                float80_t v12 = (float80_t)*(float32_t *)(v3 + 225) - (float80_t)v11; // 0x1e3d19f
                float80_t v13 = v10 * v10 + v12 * v12; // 0x1e3d1a8
                uint32_t v14 = (int32_t)__asm_fnstsw(g10); // 0x1e3d1bc
                g2 = v14 | v2 & -0x10000;
                float32_t v15;
                if ((v14 / 256 & 1) == 0) {
                    int32_t v16 = *(int32_t *)(v4 + 25); // 0x1e3d1c1
                    g2 = v16;
                    v15 = v16;
                } else {
                    float80_t v17 = 1.0L - sqrtl(v13 / (float80_t)*(float32_t *)(v4 + 177)); // 0x1e3d1d4
                    float80_t v18 = (float80_t)*(float32_t *)(v4 + 25) * v17; // 0x1e3d1da
                    v15 = v18;
                }
                // 0x1e3d1e0
                g2 = 0;
                int32_t v19 = g5; // bp-52
                v5 = v15;
                v7 = &v19;
                goto lab_0x1e3d26e;
            }
        } else {
            float80_t v20 = (float80_t)*(float32_t *)(v3 + 221); // 0x1e3d0e7
            float80_t v21 = v20 - (float80_t)*(float32_t *)(v3 + 33); // 0x1e3d0ed
            float32_t v22 = *(float32_t *)(v3 + 37); // 0x1e3d0f6
            float80_t v23 = (float80_t)*(float32_t *)(v3 + 225) - (float80_t)v22; // 0x1e3d0f6
            float80_t v24 = v21 * v21 + v23 * v23; // 0x1e3d0ff
            uint32_t v25 = (int32_t)__asm_fnstsw(g10); // 0x1e3d113
            g2 = v25 | v2 & -0x10000;
            if ((v25 / 256 & 1) == 0) {
                // 0x1e3d118
                v6 = g5;
            } else {
                int32_t v26 = v4; // 0x1e3d123
                int32_t v27 = v26 + 185; // 0x1e3d129
                g2 = v27;
                int32_t v28 = v26 + 89; // 0x1e3d130
                g5 = v28;
                float80_t v29 = sqrtl(v24 / (float80_t)*(float32_t *)(v26 + 177)); // 0x1e3d134
                float80_t v30 = fabsl((float80_t)*(float32_t *)(v26 + 69)); // 0x1e3d139
                float80_t v31 = v29 * v30 / (float80_t)*(float32_t *)(v26 + 209); // 0x1e3d141
                float80_t v32 = function_1e30e1f((int32_t *)v28, (int32_t *)v27); // 0x1e3d146
                g2 = (float32_t)v32;
                uint32_t v33 = (int32_t)__asm_fnstsw(g10); // 0x1e3d154
                g2 = g2 & -0x10000 | v33;
                float80_t v34;
                if ((v33 / 256 & 1) == 0) {
                    // 0x1e3d162
                    v34 = v31 * v32;
                } else {
                    // 0x1e3d120
                    v34 = 0.0L;
                }
                float80_t v35 = v34 * (float80_t)*(float32_t *)(v4 + 149); // 0x1e3d171
                g11++;
                v6 = v35;
            }
            goto lab_0x1e3d227;
        }
    }
  lab_0x1e3d227:
    // 0x1e3d227
    *(int32_t *)(g9 - 4) = (int32_t)v6;
    int32_t v36 = v4; // 0x1e3d24e
    g2 = v36 + 185;
    v4 = v36 + 221;
    *(float32_t *)(g9 - 8) = (float32_t)0.0L;
    *(int32_t *)(g9 - 4) = *(int32_t *)(v4 - 192);
    *(int32_t *)(g9 - 8) = *(int32_t *)(v4 - 196);
    *(int32_t *)(g9 - 12) = g2;
    v7 = g9 - 16;
    *(int32_t *)v7 = v4;
    v5 = (int32_t)v6 > 0 ? -1.875f : 25.7252903f;
    goto lab_0x1e3d26e;
  lab_0x1e3d26e:
    // 0x1e3d26e
    *(int32_t *)(v7 - 4) = a1;
    float80_t v37 = function_1e2f084((int32_t)v5, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d271
    g2 = (float32_t)v37;
    return (float32_t)v37;
}

// Address range: 0x1e3d27f - 0x1e3d312
int32_t function_1e3d27f(int32_t a1, int32_t a2) {
    int32_t v1 = g5; // 0x1e3d284
    if (a1 == 1) {
        // 0x1e3d2c5
        g2 = function_1e3c405(a2, g6, g8, g3);
        *(float32_t *)(v1 + 73) = (float32_t)g684;
        int32_t v2 = *(int32_t *)(v1 + 69); // 0x1e3d2d2
        g2 = v2;
        g5 = *(int32_t *)(v1 + 213);
        *(int32_t *)(v1 + 77) = v2;
        *(int32_t *)(v1 + 209) = g5;
        goto lab_0x1e3d29b;
    } else {
        if (a1 == 2) {
            // 0x1e3d2e6
            g2 = function_1e3c405(a2, g6, g8, g3);
            *(float32_t *)(v1 + 73) = (float32_t)g684;
            *(int32_t *)(v1 + 77) = 0;
            int32_t v3 = *(int32_t *)(v1 + 217); // 0x1e3d2fa
            g5 = v3;
            *(int32_t *)(v1 + 209) = v3;
            goto lab_0x1e3d29b;
        } else {
            if (a1 == 1024) {
                // 0x1e3d308
                g2 = 0;
                *(int32_t *)(v1 + 77) = 0;
                *(int32_t *)(v1 + 21) = g2;
                return g2;
            } else {
                goto lab_0x1e3d29b;
            }
        }
    }
  lab_0x1e3d29b:;
    // 0x1e3d29b
    int32_t v4; // 0x1e3d2b6
    if (*(int32_t *)(v1 + 21) == 0) {
        // 0x1e3d2a1
        g2 = a2;
        *(int32_t *)(v1 + 201) = a2;
        v4 = v1;
    } else {
        v4 = v1;
    }
    float80_t v5 = (float80_t)*(float32_t *)(v4 + 209); // 0x1e3d2aa
    float80_t v6 = v5 + (float80_t)*(float32_t *)(v4 + 201); // st7
    *(int32_t *)(v4 + 21) = a1;
    *(float32_t *)(v1 + 205) = (float32_t)v6;
    return g2;
    // 0x1e3d2bf
    return g2;
}

// Address range: 0x1e3d312 - 0x1e3d329
int32_t function_1e3d312(void) {
    int32_t v1 = g5; // 0x1e3d313
    g8 = v1;
    g2 = function_1e3c519(*(int32_t *)(v1 + 201));
    g5 = g8;
    int32_t result = function_1e3c497(); // 0x1e3d322
    g2 = result;
    return result;
}

// Address range: 0x1e3d329 - 0x1e3d43f
int32_t function_1e3d329(int32_t a1, int32_t a2) {
    // 0x1e3d329
    int32_t v1; // bp-80
    int32_t v2 = &v1; // 0x1e3d32c
    int32_t v3 = g6; // 0x1e3d331
    g4 = 0;
    g6 = a2;
    function_1e2a3f7(a1, a2, 0, v3);
    g2 = v2;
    *(int32_t *)g8 = (int32_t)&g64;
    function_1e39641(g6, g4, v2);
    *(int32_t *)(g8 + 86) = g4;
    *(int32_t *)(g8 + 74) = g5;
    g5 = v1;
    *(int32_t *)(g8 + 70) = g2;
    int32_t v4; // edx
    *(int32_t *)(g8 + 54) = v4;
    *(int32_t *)(g8 + 58) = g5;
    int32_t v5 = function_1e3df20(233); // 0x1e3d374
    g2 = v5;
    int32_t v6 = g4; // 0x1e3d37f
    if (v5 == v6) {
        // 0x1e3d3f2
        *(int32_t *)(g8 + 82) = 0;
    } else {
        // 0x1e3d383
        g2 = function_1e3991a(g6, v6);
        g2 = function_1e3991a(g6, g4);
        g2 = function_1e3991a(g6, g4);
        g2 = function_1e3991a(g6, g4);
        g2 = function_1e3991a(g6, g4);
        int32_t v7 = function_1e3991a(g6, g4); // 0x1e3d3d4
        g5 = v5;
        int32_t v8 = g8; // 0x1e3d3e3
        int32_t v9 = v8 + 5; // 0x1e3d3e3
        g2 = v9;
        int32_t v10;
        int32_t v11 = function_1e3c042(v8, v9, v10, a1, v7, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d3e8
        g2 = v11;
        *(int32_t *)(g8 + 82) = v11;
    }
    int32_t v12 = *(int32_t *)(g8 + 82); // 0x1e3d3f9
    int32_t v13 = *(int32_t *)(g8 + 34) + 4; // 0x1e3d3ff
    g5 = v13;
    int32_t v14 = *(int32_t *)v13; // 0x1e3d408
    g2 = v14;
    int32_t v15 = *(int32_t *)(v14 + 4) - 1; // 0x1e3d40d
    g2 = v15;
    float80_t v16 = (float80_t)*(float32_t *)(v12 + 213) / (float80_t)v15; // 0x1e3d411
    *(float32_t *)(g8 + 90) = (float32_t)v16;
    float80_t v17 = (float80_t)*(float32_t *)(v12 + 217); // 0x1e3d417
    int32_t v18 = *(int32_t *)g5; // 0x1e3d41d
    g5 = v18;
    int32_t v19 = *(int32_t *)(v18 + 4); // 0x1e3d41f
    g2 = 0;
    g6 = *(int32_t *)g9;
    *(int32_t *)(g8 + 78) = 0;
    *(int32_t *)(g8 + 102) = g2;
    g2 = g8;
    *(float32_t *)(g8 + 94) = (float32_t)(v17 / (float80_t)(v19 - 1));
    g4 = *(int32_t *)(g9 + 4);
    return g2;
}

// Address range: 0x1e3d43f - 0x1e3d442
int32_t function_1e3d43f(void) {
    // 0x1e3d43f
    return g2;
}

// Address range: 0x1e3d442 - 0x1e3d460
int32_t function_1e3d442(char a1) {
    // 0x1e3d442
    g8 = g5;
    int32_t v1; // esi
    g2 = function_1e3d460(v1);
    if ((a1 & 1) != 0) {
        // 0x1e3d451
        g2 = function_1e3df60(g8);
    }
    // 0x1e3d45a
    g2 = g8;
    return g8;
}

// Address range: 0x1e3d460 - 0x1e3d47d
int32_t function_1e3d460(int32_t a1) {
    int32_t v1 = g8; // 0x1e3d460
    *(int32_t *)g5 = (int32_t)&g64;
    int32_t v2 = g5; // 0x1e3d467
    g8 = v2;
    g2 = function_1e3df60(*(int32_t *)(v2 + 82));
    g5 = g8;
    int32_t result = function_1e2a4cb(); // 0x1e3d476
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e3d47d - 0x1e3d58b
int32_t function_1e3d47d(int32_t a1) {
    int32_t v1 = g8; // 0x1e3d48a
    int32_t v2 = g6; // 0x1e3d48b
    g4 = 0;
    g8 = a1;
    float32_t v3 = *(float32_t *)(a1 + 102); // 0x1e3d494
    g6 = a1 + 34;
    float32_t v4 = *(float32_t *)(a1 + 98); // 0x1e3d49a
    g2 = function_1e3dbc0((int32_t)(float32_t)(((float80_t)g172 - (float80_t)v3) / (float80_t)v4 + 0.5L), v2, v1);
    int32_t v5 = *(int32_t *)g6; // 0x1e3d4b1
    g2 = v5;
    int32_t v6 = *(int32_t *)(v5 + 4); // 0x1e3d4b3
    g5 = v6;
    uint32_t v7 = (int32_t)__asm_fnstsw(g10); // 0x1e3d4bf
    int32_t v8 = g2 & -0x10000 | v7; // 0x1e3d4bf
    int32_t v9;
    if ((v7 / 256 & 1) != 0) {
        v9 = *(int32_t *)(v6 + 4);
    } else {
        v9 = v8;
    }
    // 0x1e3d4ca
    g2 = v9;
    int32_t v10 = __ftol(); // 0x1e3d4dd
    int32_t v11;
    int32_t v12; // 0x1e3d4f4
    if (v10 == 0) {
        v11 = 1;
        v12 = 1;
    } else {
        v11 = v10;
        v12 = v10;
    }
    // 0x1e3d4eb
    g2 = v11;
    if (*(int32_t *)(g8 + 6) == 1) {
        int32_t * v13 = (int32_t *)(g8 + 78); // 0x1e3d4f1
        int32_t v14 = *v13 + v12; // 0x1e3d4f4
        *v13 = v14;
        int32_t v15 = *(int32_t *)g6; // 0x1e3d4f9
        g5 = v15;
        int32_t v16 = *(int32_t *)(v15 + 4); // 0x1e3d4fb
        g5 = v16;
        int32_t v17 = *(int32_t *)(v16 + 4) - 1; // 0x1e3d501
        g5 = v17;
        if (v17 <= v14) {
            // 0x1e3d506
            g4 = 1;
            *(int32_t *)(g8 + 78) = v17;
        }
    }
    // 0x1e3d50e
    if (*(int32_t *)(g8 + 6) == 2) {
        int32_t v18 = g8 + 78; // 0x1e3d514
        int32_t * v19 = (int32_t *)v18; // 0x1e3d517
        int32_t v20 = *v19 - g2; // 0x1e3d519
        g5 = v20;
        g2 = 0;
        *v19 = v20;
        if (v20 >= 0 != v20 != 0) {
            // 0x1e3d523
            g4 = 1;
            *(int32_t *)v18 = g2;
        }
    }
    // 0x1e3d52a
    g2 = 0;
    if (g4 == 0) {
        int32_t v21 = function_1e325d2(*(int32_t *)(g8 + 98), g8, 0x1e3d47d); // 0x1e3d541
        g2 = v21;
        *(int32_t *)(g8 + 86) = v21;
    } else {
        // 0x1e3d530
        *(int32_t *)(g8 + 86) = 0;
        *(int32_t *)(g8 + 6) = g2;
    }
    int32_t v22 = *(int32_t *)(g8 + 78); // 0x1e3d549
    g5 = v22;
    int32_t v23 = *(int32_t *)(*(int32_t *)g6 + 4); // 0x1e3d54e
    g2 = v23;
    int32_t v24 = 4 * v22; // 0x1e3d551
    g5 = v24;
    int32_t v25 = *(int32_t *)(g8 + 30); // 0x1e3d554
    int32_t v26 = *(int32_t *)(v24 + 8 + v23); // 0x1e3d557
    int32_t v27 = *(int32_t *)(v26 + 33); // 0x1e3d55e
    g2 = v27;
    int32_t v28 = v27 - *(int32_t *)(v25 + 238); // 0x1e3d561
    g2 = v28;
    *(int32_t *)(g9 - 4) = v28;
    int32_t v29 = *(int32_t *)(v26 + 29); // 0x1e3d568
    g2 = v29;
    int32_t v30 = v29 - *(int32_t *)(v25 + 234); // 0x1e3d56b
    g2 = v30;
    int32_t v31 = *(int32_t *)(*(int32_t *)(g8 + 38) + 4); // 0x1e3d571
    *(int32_t *)(g9 - 8) = v30;
    *(int32_t *)(g9 - 12) = *(int32_t *)(v31 + 8 + g5);
    *(int32_t *)(g9 - 16) = v26;
    *(int32_t *)(g9 - 20) = *(int32_t *)(g8 + 26);
    int32_t result = function_1e29a04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d57d
    g2 = result;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    return result;
}

// Address range: 0x1e3d58b - 0x1e3d6de
int32_t function_1e3d58b(int32_t a1) {
    // 0x1e3d58b
    g8 = a1;
    int32_t v1 = g5; // 0x1e3d596
    g6 = v1;
    if (a1 == 1) {
        // 0x1e3d5db
        g2 = function_1e328b9(1, v1);
        int32_t v2 = g6; // 0x1e3d5e3
        int32_t v3 = *(int32_t *)(v2 + 90); // 0x1e3d5e3
        g2 = v3;
        *(int32_t *)(v2 + 98) = v3;
        int32_t v4 = *(int32_t *)(g6 + 74); // 0x1e3d5e9
        g2 = v4;
        if (v4 != 0) {
            // 0x1e3d5f0
            g2 = function_1e39a10(v4);
            g11++;
        }
        goto lab_0x1e3d61c;
    } else {
        if (a1 == 2) {
            int32_t v5 = *(int32_t *)(v1 + 94); // 0x1e3d5fa
            g2 = v5;
            *(int32_t *)(v1 + 98) = v5;
            int32_t v6 = *(int32_t *)(g6 + 70); // 0x1e3d600
            g2 = v6;
            if (v6 != 0) {
                // 0x1e3d607
                g2 = function_1e39a10(v6);
                g11++;
            }
            goto lab_0x1e3d61c;
        } else {
            if (a1 < 1009) {
                // 0x1e3d6d2
                g2 = 0;
                return 0;
            }
            if (a1 > 1011) {
                if (a1 == 1020) {
                    goto lab_0x1e3d69b;
                } else {
                    if (a1 == 1022) {
                        goto lab_0x1e3d611;
                    } else {
                        if (a1 != 1024) {
                            // 0x1e3d6d2
                            g2 = 0;
                            return 0;
                        }
                        goto lab_0x1e3d69b;
                    }
                }
            } else {
                goto lab_0x1e3d611;
            }
        }
    }
  lab_0x1e3d61c:;
    int32_t v7 = g6; // 0x1e3d61c
    int32_t v8 = v7 + 86; // 0x1e3d61c
    g4 = v8;
    g3 = 0;
    int32_t v9 = *(int32_t *)v8; // 0x1e3d621
    g2 = v9;
    int32_t v10; // 0x1e3d642
    if (v9 != 0) {
        // 0x1e3d627
        *(int32_t *)(g9 - 4) = v9;
        g2 = function_1e32771((int32_t)&g708);
        *(int32_t *)g4 = g3;
        v10 = g6;
    } else {
        v10 = v7;
    }
    // 0x1e3d62f
    if (*(int32_t *)(v10 + 6) != 0) {
        float80_t v11 = (float80_t)*(float32_t *)(g9 + 28); // 0x1e3d63e
        int32_t v12 = *(int32_t *)(v10 + 82); // 0x1e3d642
        g2 = v12;
        float80_t v13 = v11 - (float80_t)*(float32_t *)(v12 + 201); // 0x1e3d648
        *(float32_t *)(g9 + 16) = (float32_t)v13;
        float80_t v14 = v13 / (float80_t)*(float32_t *)(g6 + 98); // 0x1e3d652
        *(float64_t *)g9 = (float64_t)v14;
        int32_t v15 = function_1e3dbc0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d658
        g2 = v15;
        float80_t v16 = g684 * (float80_t)*(float32_t *)(g6 + 98); // 0x1e3d65d
        float32_t * v17 = (float32_t *)(g9 + 24); // 0x1e3d663
        *v17 = (float32_t)((float80_t)*v17 - v16);
        g11++;
        uint32_t v18 = (int32_t)__asm_fnstsw(g10); // 0x1e3d671
        g2 = g2 & -0x10000 | v18;
        if ((v18 / 256 & 1) != 0) {
            // 0x1e3d676
            *(int32_t *)(g9 + 16) = 0;
        }
    } else {
        int32_t v19 = *(int32_t *)(v10 + 98); // 0x1e3d635
        g2 = v19;
        *(int32_t *)(g9 + 16) = v19;
    }
    // 0x1e3d67e
    g2 = *(int32_t *)(g9 + 28);
    *(int32_t *)(g9 - 4) = 0x1e3d47d;
    *(int32_t *)(g9 - 8) = g6;
    *(int32_t *)(g6 + 6) = g8;
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 24);
    *(int32_t *)(g6 + 102) = g2;
    int32_t v20 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d692
    g2 = v20;
    *(int32_t *)g4 = v20;
    goto lab_0x1e3d6c5;
  lab_0x1e3d6c5:
    // 0x1e3d6c5
    *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 28);
    *(int32_t *)(g9 - 8) = g8;
    g5 = *(int32_t *)(g6 + 82);
    g2 = function_1e3d27f((int32_t)&g708, (int32_t)&g708);
    // 0x1e3d6d2
    g2 = 0;
    return 0;
  lab_0x1e3d611:
    // 0x1e3d611
    g8 = 2;
    int32_t v21 = *(int32_t *)(v1 + 94); // 0x1e3d616
    g2 = v21;
    *(int32_t *)(v1 + 98) = v21;
    goto lab_0x1e3d61c;
  lab_0x1e3d69b:
    // 0x1e3d69b
    if (*(int32_t *)(v1 + 6) == 0) {
        // 0x1e3d6d2
        g2 = 0;
        return 0;
    }
    int32_t v22 = *(int32_t *)(v1 + 86); // 0x1e3d6a1
    g2 = v22;
    int32_t v23; // 0x1e3d6ae
    if (v22 != 0) {
        // 0x1e3d6a8
        g2 = function_1e32771(v22);
        v23 = g6;
    } else {
        v23 = v1;
    }
    // 0x1e3d6ae
    *(int32_t *)(v23 + 78) = -1;
    *(int32_t *)(g6 + 6) = 2;
    *(int32_t *)(g9 - 4) = g6;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g6 + 86);
    g2 = function_1e3d47d((int32_t)&g708);
    goto lab_0x1e3d6c5;
}

// Address range: 0x1e3d6de - 0x1e3d6e6
int32_t function_1e3d6de(void) {
    int32_t v1 = *(int32_t *)(g5 + 82); // 0x1e3d6de
    g5 = v1;
    int32_t result = *(int32_t *)v1; // 0x1e3d6e1
    g2 = result;
    return result;
}

// Address range: 0x1e3d6e6 - 0x1e3d746
int32_t function_1e3d6e6(int32_t * a1, int32_t a2, int32_t * a3) {
    int32_t v1 = (int32_t)a1;
    g2 = a2;
    float80_t v2 = (float80_t)*(float32_t *)a2; // 0x1e3d6ea
    float80_t v3 = (float80_t)*(float32_t *)(a2 + 4); // 0x1e3d6ec
    float80_t v4 = (float80_t)*(float32_t *)(a2 + 8); // 0x1e3d6ef
    g2 = v1;
    float32_t v5 = *(float32_t *)(v1 + 4); // 0x1e3d6f6
    float32_t v6 = *(float32_t *)(v1 + 8); // 0x1e3d6fb
    g5 = (int32_t)a3;
    float32_t v7 = *(float32_t *)a1; // 0x1e3d706
    float32_t v8 = *(float32_t *)(v1 + 12); // 0x1e3d70c
    *(float32_t *)a3 = (float32_t)((float80_t)v8 + v3 * (float80_t)v5 + v4 * (float80_t)v6 + v2 * (float80_t)v7);
    int32_t v9 = g2; // 0x1e3d711
    float32_t v10 = *(float32_t *)(v9 + 20); // 0x1e3d711
    float32_t v11 = *(float32_t *)(v9 + 24); // 0x1e3d716
    float32_t v12 = *(float32_t *)(v9 + 16); // 0x1e3d71d
    float32_t v13 = *(float32_t *)(v9 + 28); // 0x1e3d724
    *(float32_t *)(g5 + 4) = (float32_t)((float80_t)v10 * v3 + (float80_t)v11 * v4 + (float80_t)v12 * v2 + (float80_t)v13);
    int32_t v14 = g2; // 0x1e3d72c
    float80_t v15 = v3 * (float80_t)*(float32_t *)(v14 + 36); // 0x1e3d72c
    float80_t v16 = v15 + v4 * (float80_t)*(float32_t *)(v14 + 40); // 0x1e3d734
    float80_t v17 = v16 + (float80_t)*(float32_t *)(v14 + 32) * v2; // 0x1e3d73b
    float80_t v18 = v17 + (float80_t)*(float32_t *)(v14 + 44); // 0x1e3d73d
    *(float32_t *)(g5 + 8) = (float32_t)v18;
    return g2;
}

// Address range: 0x1e3d750 - 0x1e3d794
int32_t function_1e3d750(int32_t a1, int32_t a2) {
    int32_t v1 = &a1; // 0x1e3d750
    g5 = -1;
    g2 = 0;
    g6 = a1;
    int32_t v2 = -1; // 0x1e3d76f
    while (true) {
        if (v2 == 0) {
            // break -> bb16
            break;
        }
        int32_t v3 = (g1 ? -1 : 1) + a1; // 0x1e3d76f
        g6 = v3;
        int32_t v4 = v2 - 1; // 0x1e3d76f
        g5 = v4;
        if (*(char *)a1 == 0) {
            // break -> bb16
            break;
        }
        a1 = v3;
        v2 = v4;
    }
    // bb16
    int32_t v5; // bp+12
    g2 = &v5;
    g7 = a2;
    g5 = v1;
    int32_t result = function_1e3e1e0(&a1, a2, &v5); // 0x1e3d787
    g2 = result;
    return result;
}

// Address range: 0x1e3d7a0 - 0x1e3d807
int32_t function_1e3d7a0(int32_t a1, char * a2) {
    // 0x1e3d7a0
    int32_t v1; // bp+12
    g5 = &v1;
    int32_t v2 = g8; // 0x1e3d7ab
    int32_t v3 = a1; // bp-32
    g2 = &v3;
    int32_t v4 = (int32_t)a2; // 0x1e3d7c9
    g7 = v4;
    int32_t result = function_1e3f090(&v3, v4, &v1, v2, a1, 0x7fffffff, a1, 66); // 0x1e3d7cf
    *(char *)v3 = 0;
    g2 = result;
    g8 = v2;
    return result;
}

// Address range: 0x1e3d810 - 0x1e3d890
int32_t function_1e3d810(int32_t result, int32_t a2) {
    // 0x1e3d810
    g5 = a2;
    int32_t v1 = g6; // 0x1e3d814
    int32_t v2 = g8; // 0x1e3d816
    unsigned char v3 = *(char *)a2; // 0x1e3d817
    int32_t v4 = v3; // 0x1e3d817
    int32_t v5 = g7 & -256 | v4; // 0x1e3d817
    g7 = v5;
    if (v3 == 0) {
        // 0x1e3d88a
        g2 = result;
        g6 = v1;
        return result;
    }
    unsigned char v6 = *(char *)(a2 + 1); // 0x1e3d821
    int32_t v7 = 256 * (int32_t)v6 | v5 & -0xff01; // 0x1e3d821
    g7 = v7;
    if (v6 == 0) {
        // 0x1e3d877
        g6 = v1;
        g2 = v4;
        int32_t result2 = function_1e3df86(v2, g4, v1); // 0x1e3d87e
        g2 = result2;
        return result2;
    }
    int32_t v8 = g2; // 0x1e3d82e
    int32_t v9; // 0x1e3d83b
    int32_t v10; // 0x1e3d883
    int32_t v11; // 0x1e3d839
    int32_t v12; // 0x1e3d84a
    while (true) {
      lab_0x1e3d828:
        // 0x1e3d828
        g5 = a2;
        unsigned char v13 = *(char *)result; // 0x1e3d82e
        int32_t v14 = (int32_t)v13 | v8 & -256; // 0x1e3d82e
        g2 = v14;
        int32_t v15 = result + 1; // 0x1e3d830
        if (v13 == v3) {
            v12 = v14;
            v10 = v15;
            goto lab_0x1e3d84a;
        } else {
            if (v13 == 0) {
                // break -> 0x1e3d844
                break;
            }
            v11 = v14;
            v9 = v15;
            goto lab_0x1e3d839;
        }
    }
  lab_0x1e3d844:
    // 0x1e3d844
    g8 = v2;
    g6 = v1;
    g2 = 0;
    return 0;
  lab_0x1e3d84a:;
    unsigned char v16 = *(char *)v10; // 0x1e3d84a
    int32_t v17 = (int32_t)v16 | v12 & -256; // 0x1e3d84a
    g2 = v17;
    int32_t v18 = v10 + 1; // 0x1e3d84c
    if (v16 == (char)(v7 / 256)) {
        while (true) {
          lab_0x1e3d854:;
            int32_t v19 = a2 + 2; // 0x1e3d854
            unsigned char v20 = *(char *)v19; // 0x1e3d854
            int32_t v21 = 256 * (int32_t)v20 | v17 & -0xff01; // 0x1e3d854
            g2 = v21;
            int32_t result3; // 0x1e3d883
            if (v20 == 0) {
                // 0x1e3d883
                result3 = v10 - 1;
                g2 = result3;
                g8 = v2;
                g6 = v1;
                return result3;
            }
            unsigned char v22 = *(char *)v18; // 0x1e3d85b
            int32_t v23 = v21 & -256; // 0x1e3d85b
            int32_t v24 = (int32_t)v22 | v23; // 0x1e3d85b
            g2 = v24;
            int32_t v25 = v18 + 2; // 0x1e3d85d
            if (v22 != (char)(v21 / 256)) {
                v8 = v24;
                result = v10;
                // continue (via goto) -> 0x1e3d828
                goto lab_0x1e3d828;
            }
            unsigned char v26 = *(char *)(a2 + 3); // 0x1e3d864
            int32_t v27 = (int32_t)v26 | v23; // 0x1e3d864
            g2 = v27;
            if (v26 == 0) {
                // 0x1e3d883
                result3 = v10 - 1;
                g2 = result3;
                g8 = v2;
                g6 = v1;
                return result3;
            }
            int32_t v28 = 256 * (int32_t)*(char *)(v18 + 1) | v27 & -0xff01; // 0x1e3d86b
            g2 = v28;
            g5 = v19;
            if (v26 == (char)(v28 / 256)) {
                v18 = v25;
                v17 = v28;
                a2 = v19;
                goto lab_0x1e3d854;
            } else {
                v8 = v28;
                result = v10;
                goto lab_0x1e3d828;
            }
        }
    }
    goto lab_0x1e3d83c;
  lab_0x1e3d83c:;
    char v29 = v17; // 0x1e3d83c
    if (v29 == v3) {
        v12 = v17;
        v10 = v18;
        goto lab_0x1e3d84a;
    } else {
        if (v29 == 0) {
            // break -> 0x1e3d844
            goto lab_0x1e3d844;
        }
        v11 = v17;
        v9 = v18;
        goto lab_0x1e3d839;
    }
  lab_0x1e3d839:;
    int32_t v30 = (int32_t)*(char *)v9 | v11 & -256; // 0x1e3d839
    g2 = v30;
    v17 = v30;
    v18 = v9 + 1;
    goto lab_0x1e3d83c;
}

// Address range: 0x1e3d890 - 0x1e3d8a7
int32_t function_1e3d890(void) {
    // 0x1e3d890
    g2 = function_1e3d8c0();
    int32_t v1 = __ms_p5_mp_test_fdiv(); // 0x1e3d895
    g2 = v1;
    g430 = v1;
    g2 = function_1e3fb50();
    int32_t result = __asm_fnclex(); // 0x1e3d8a4
    g2 = result;
    return result;
}

// Address range: 0x1e3d8b0 - 0x1e3d8b1
int32_t function_1e3d8b0(void) {
    // 0x1e3d8b0
    return g2;
}

// Address range: 0x1e3d8c0 - 0x1e3d8f8
int32_t function_1e3d8c0(void) {
    // 0x1e3d8c0
    g437 = 0x1e3fc60;
    g438 = 0x1e3fce0;
    g439 = 0x1e3fbf0;
    g440 = 0x1e3fcc0;
    g2 = 0x1e40080;
    g436 = 0x1e40080;
    g441 = 0x1e40080;
    return 0x1e40080;
}

// Address range: 0x1e3d900 - 0x1e3dac2
int32_t function_1e3d900(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g4; // 0x1e3d908
    int32_t v2 = g8; // 0x1e3d909
    g4 = a2;
    int32_t v3 = g6; // 0x1e3d90e
    int32_t v4 = g3; // bp-28
    int32_t v5 = &v4; // 0x1e3d90f
    if (a1 == 0) {
        int32_t result = function_1e22670(a2); // 0x1e3d913
        g2 = result;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return result;
    }
    if (a2 == 0) {
        // 0x1e3d927
        g2 = a1;
        function_1e22600(a1);
        g2 = 0;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return 0;
    }
    int32_t v6; // 0x1e3d954
    if (a2 < 0xffffffe1) {
        // 0x1e3d947
        g4 = a2 + 15 & -16;
        v6 = v5;
    } else {
        v6 = v5;
    }
    int32_t result2; // 0x1e3da8b
    while (true) {
        // 0x1e3d954
        *(int32_t *)(v6 + 16) = 0;
        if (g4 < 0xffffffe1) {
            // 0x1e3d965
            *(int32_t *)(g9 - 4) = 9;
            function_1e22490((int32_t)&g708);
            int32_t v7 = g9 + 24; // 0x1e3d96c
            g2 = v7;
            g5 = g9 + 28;
            *(int32_t *)g9 = v7;
            *(int32_t *)(g9 - 4) = g5;
            *(int32_t *)(g9 - 8) = *(int32_t *)(g9 + 36);
            int32_t v8 = function_1e22ac0((int32_t)&g708, &g708, &g708); // 0x1e3d97e
            g2 = v8;
            char * v9 = (char *)v8; // 0x1e3d986
            g3 = v8;
            if (v8 == 0) {
                // 0x1e3da68
                *(int32_t *)(g9 + 8) = 9;
                g2 = function_1e22500((int32_t)&g708);
                g2 = *(int32_t *)(g9 + 36);
                g5 = g676;
                *(int32_t *)g9 = g4;
                *(int32_t *)(g9 - 4) = g2;
                *(int32_t *)(g9 - 8) = 0;
                *(int32_t *)(g9 - 12) = g5;
                int32_t * v10 = HeapReAlloc(&g708, (int32_t)&g708, &g708, (int32_t)&g708); // 0x1e3da81
                int32_t v11 = (int32_t)v10; // 0x1e3da81
                g2 = v11;
                *(int32_t *)(g9 + 16) = v11;
            } else {
                uint32_t v12 = g4; // 0x1e3d990
                int32_t v13; // 0x1e3da0e
                if (v12 < g136) {
                    // 0x1e3d998
                    g2 = *(int32_t *)(g9 + 32);
                    int32_t v14 = v12 / 16; // 0x1e3d99e
                    g8 = v14;
                    g5 = *(int32_t *)(g9 + 36);
                    *(int32_t *)(g9 + 8) = v14;
                    *(int32_t *)(g9 + 4) = v8;
                    *(int32_t *)g9 = g2;
                    *(int32_t *)(g9 - 4) = g5;
                    int32_t v15 = function_1e22f70((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d9a9
                    g2 = v15;
                    if (v15 == 0) {
                        // 0x1e3d9bf
                        *(int32_t *)(g9 + 12) = g8;
                        int32_t v16 = function_1e22b70((int32_t)&g708); // 0x1e3d9c0
                        g2 = v16;
                        *(int32_t *)(g9 + 20) = v16;
                        if (v16 != 0) {
                            // 0x1e3d9d0
                            g2 = 0;
                            int32_t v17 = 16 * (int32_t)*v9; // 0x1e3d9d5
                            g2 = v17;
                            int32_t v18 = g4; // 0x1e3d9d8
                            if (v17 >= v18) {
                                // 0x1e3d9dc
                                g2 = v18;
                            } else {
                                v18 = v17;
                            }
                            int32_t v19 = *(int32_t *)(g9 + 20); // 0x1e3d9de
                            int32_t v20 = *(int32_t *)(g9 + 36); // 0x1e3d9e2
                            g5 = v18;
                            *(int32_t *)g9 = v8;
                            int32_t v21 = g5 / 4; // 0x1e3d9e9
                            g5 = v21;
                            __asm_rep_movsd_memcpy((char *)v19, (char *)v20, v21);
                            int32_t v22 = (g1 ? -4 : 4) * v21 + v19; // 0x1e3d9ec
                            char * v23 = (char *)v22; // 0x1e3d9ec
                            int32_t v24 = g2 & 3; // 0x1e3d9f0
                            g5 = v24;
                            __asm_rep_movsb_memcpy(v23, v23, v24);
                            int32_t v25 = (g1 ? -1 : 1) * v24 + v22; // 0x1e3d9f3
                            g6 = v25;
                            g8 = v25;
                            g5 = 0;
                            int32_t v26 = *(int32_t *)(g9 + 24); // 0x1e3d9f5
                            g2 = v26;
                            g5 = *(int32_t *)(g9 + 28);
                            *(int32_t *)(g9 - 4) = v26;
                            *(int32_t *)(g9 - 8) = g5;
                            int32_t v27 = function_1e22b20((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3d9ff
                            g2 = v27;
                            v13 = g9 + 12;
                        } else {
                            v13 = g9 + 4;
                        }
                    } else {
                        int32_t v28 = *(int32_t *)(g9 + 48); // 0x1e3d9b5
                        g2 = v28;
                        *(int32_t *)(g9 + 32) = v28;
                        v13 = g9;
                    }
                } else {
                    v13 = g9 + 12;
                }
                // 0x1e3da07
                int32_t v29; // 0x1e3da5c
                if (*(int32_t *)(v13 + 16) == 0) {
                    // 0x1e3da0e
                    *(int32_t *)(v13 - 4) = g4;
                    g2 = g676;
                    *(int32_t *)(v13 - 8) = 0;
                    *(int32_t *)(v13 - 12) = g2;
                    int32_t * v30 = HeapAlloc(&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3da17
                    int32_t v31 = (int32_t)v30; // 0x1e3da17
                    g2 = v31;
                    *(int32_t *)(g9 + 16) = v31;
                    if (v30 == NULL) {
                        // 0x1e3da0e
                        v29 = g9;
                    } else {
                        // 0x1e3da25
                        g2 = 0;
                        int32_t v32 = 16 * (int32_t)*v9; // 0x1e3da2a
                        g2 = v32;
                        int32_t v33 = g4; // 0x1e3da2d
                        if (v32 >= v33) {
                            // 0x1e3da31
                            g2 = v33;
                        } else {
                            v33 = v32;
                        }
                        int32_t v34 = *(int32_t *)(g9 + 16); // 0x1e3da33
                        int32_t v35 = *(int32_t *)(g9 + 32); // 0x1e3da37
                        g5 = v33;
                        *(int32_t *)(g9 - 4) = v8;
                        int32_t v36 = g5 / 4; // 0x1e3da3e
                        g5 = v36;
                        __asm_rep_movsd_memcpy((char *)v34, (char *)v35, v36);
                        int32_t v37 = (g1 ? -4 : 4) * v36 + v34; // 0x1e3da41
                        char * v38 = (char *)v37; // 0x1e3da41
                        int32_t v39 = g2 & 3; // 0x1e3da45
                        g5 = v39;
                        __asm_rep_movsb_memcpy(v38, v38, v39);
                        int32_t v40 = (g1 ? -1 : 1) * v39 + v37; // 0x1e3da48
                        g6 = v40;
                        g8 = v40;
                        g5 = 0;
                        int32_t v41 = *(int32_t *)(g9 + 24); // 0x1e3da4a
                        g2 = v41;
                        g5 = *(int32_t *)(g9 + 28);
                        *(int32_t *)(g9 - 4) = v41;
                        *(int32_t *)(g9 - 8) = g5;
                        int32_t v42 = function_1e22b20((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e3da54
                        g2 = v42;
                        v29 = g9 + 12;
                    }
                } else {
                    v29 = v13;
                }
                // 0x1e3da5c
                *(int32_t *)(v29 - 4) = 9;
                g2 = function_1e22500((int32_t)&g708);
            }
        }
        // 0x1e3da8b
        result2 = *(int32_t *)(g9 + 16);
        if (result2 != 0) {
            // break -> 0x1e3dab6
            break;
        }
        // 0x1e3da92
        if (g147 == 0) {
            // break -> 0x1e3dab6
            break;
        }
        // 0x1e3da9b
        *(int32_t *)(g9 - 4) = g4;
        int32_t v43 = function_1e232d0((int32_t)&g708); // 0x1e3da9c
        g2 = v43;
        if (v43 == 0) {
            // 0x1e3daac
            g2 = 0;
            g6 = *(int32_t *)(g9 + 8);
            g8 = *(int32_t *)(g9 + 12);
            g4 = *(int32_t *)(g9 + 16);
            return 0;
        }
        v6 = g9 + 4;
    }
    // 0x1e3dab6
    g2 = result2;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result2;
}

// Address range: 0x1e3dad0 - 0x1e3db74
int32_t function_1e3dad0(int32_t a1) {
    // 0x1e3dad0
    g8 = a1;
    int32_t v1 = g3; // bp-16
    g6 = 1;
    int32_t v2 = &v1; // 0x1e3dae5
    int32_t v3 = 1; // 0x1e3dadd
    int32_t v4; // 0x1e3dae53
    while (true) {
        // 0x1e3dadd
        int32_t v5; // 0x1e3daec
        if (g442 > v3) {
            // 0x1e3dae5
            *(int32_t *)(v2 - 4) = 8;
            g2 = 0;
            int32_t v6 = (int32_t)*(char *)g8; // 0x1e3dae9
            g2 = v6;
            *(int32_t *)(v2 - 8) = v6;
            v5 = function_1e40120((int32_t)&g708, (int32_t)&g708);
            g2 = v5;
            v4 = g9 + 8;
        } else {
            int32_t v7 = *(int32_t *)0x1e504c8; // 0x1e3daf8
            g5 = v7;
            int32_t v8 = (int32_t)*(char *)a1; // 0x1e3dafe
            g7 = v8;
            g2 = 0;
            int32_t v9 = (int32_t)*(int16_t *)(2 * v8 + v7) & 8; // 0x1e3db06
            g2 = v9;
            v4 = v2;
            v5 = v9;
        }
        if (v5 == 0) {
            // break -> 0x1e3db10
            break;
        }
        int32_t v10 = g8 + 1; // 0x1e3db0d
        g8 = v10;
        v2 = v4;
        a1 = v10;
        v3 = g6;
    }
    int32_t v11 = g8; // 0x1e3db12
    unsigned char v12 = *(char *)v11; // 0x1e3db12
    int32_t v13 = v12; // 0x1e3db12
    g4 = v13;
    int32_t v14 = v11 + 1; // 0x1e3db14
    g8 = v14;
    g6 = v13;
    if (v12 == 45) {
        goto lab_0x1e3db21;
    } else {
        if (v12 != 43) {
            goto lab_0x1e3db26;
        } else {
            goto lab_0x1e3db21;
        }
    }
  lab_0x1e3db21:;
    int32_t v15 = (int32_t)*(char *)v14; // 0x1e3db23
    g4 = v15;
    g8 = v11 + 2;
    v13 = v15;
    goto lab_0x1e3db26;
  lab_0x1e3db26:
    // 0x1e3db26
    g3 = 0;
    int32_t v16 = 0; // 0x1e3db6110
    int32_t v17 = v4; // 0x1e3db31
    int32_t v18 = v13; // 0x1e3db46
    int32_t v19; // 0x1e3db6f
    int32_t result; // 0x1e3db73
    while (true) {
        // 0x1e3db28
        int32_t v20; // 0x1e3db34
        if (g442 > 1) {
            // 0x1e3db31
            *(int32_t *)(v17 - 4) = 4;
            *(int32_t *)(v17 - 8) = g4;
            v20 = function_1e40120((int32_t)&g708, (int32_t)&g708);
            g2 = v20;
            result = g3;
            v19 = g9 + 8;
        } else {
            int32_t v21 = (int32_t)g122; // 0x1e3db3e
            g5 = v21;
            g2 = 0;
            int32_t v22 = (int32_t)*(int16_t *)(v21 + 2 * v18) & 4; // 0x1e3db4a
            g2 = v22;
            result = v16;
            v19 = v17;
            v20 = v22;
        }
        if (v20 == 0) {
            // break -> 0x1e3db61
            break;
        }
        // 0x1e3db51
        g2 = 5 * result;
        int32_t v23 = g8; // 0x1e3db55
        g8 = v23 + 1;
        int32_t v24 = 10 * result - 48 + g4; // 0x1e3db56
        g3 = v24;
        int32_t v25 = (int32_t)*(char *)v23; // 0x1e3db5c
        g4 = v25;
        v16 = v24;
        v17 = v19;
        v18 = v25;
    }
    // 0x1e3db61
    g2 = result;
    if (g6 != 45) {
        // 0x1e3db6f
        g3 = *(int32_t *)v19;
        g6 = *(int32_t *)(v19 + 4);
        g8 = *(int32_t *)(v19 + 8);
        g4 = *(int32_t *)(v19 + 12);
        return result;
    }
    int32_t result2 = -result; // 0x1e3db68
    g2 = result2;
    g3 = *(int32_t *)v19;
    g6 = *(int32_t *)(v19 + 4);
    g8 = *(int32_t *)(v19 + 8);
    g4 = *(int32_t *)(v19 + 12);
    return result2;
}

// Address range: 0x1e3db80 - 0x1e3db8e
int32_t function_1e3db80(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    g2 = v1;
    int32_t result = function_1e3dad0(v1); // 0x1e3db85
    g2 = result;
    return result;
}

// Address range: 0x1e3dbc0 - 0x1e3dcd5
int32_t function_1e3dbc0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e3dbc0
    g2 = g432;
    int32_t v1 = g8; // bp-12
    g8 = function_1e40ad0(g432, 0xffff);
    g5 = a1;
    g2 = a2;
    if ((a3 & 0x7ff0) == 0x7ff0) {
        uint32_t v2 = function_1e40bd0(a1, a2, (int32_t)&g708); // 0x1e3dbf2
        g2 = v2;
        if (v2 >= 1) {
            if (v2 <= 2) {
                int32_t result = function_1e40ad0(g8, 0xffff); // 0x1e3dc37
                g2 = result;
                g11--;
                g684 = (int64_t)a1;
                g8 = v1;
                return result;
            }
            if (v2 == 3) {
                // 0x1e3dc48
                g2 = a2;
                g5 = a1;
                int32_t result2 = function_1e40200(11, a1, a2, g8); // 0x1e3dc55
                g2 = result2;
                g8 = v1;
                return result2;
            }
        }
        // 0x1e3dc09
        g2 = a2;
        g5 = a1;
        int32_t result3 = function_1e40250(8, 11, a1, a2, (float80_t)(float64_t)(int64_t)a1 + 1.0L, g8, (int32_t)&g708); // 0x1e3dc24
        g2 = result3;
        g8 = v1;
        return result3;
    }
    // 0x1e3dc62
    g2 = function_1e40b70(a1, a2);
    float64_t v3 = g684; // bp-8
    g11++;
    int32_t v4 = __asm_fnstsw(g10); // 0x1e3dc72
    g2 = g2 & -0x10000 | v4;
    if ((v4 & 0x4000) != 0) {
        int32_t result4 = function_1e40ad0(g8, 0xffff); // 0x1e3dc7f
        g2 = result4;
        g11--;
        g684 = v3;
        g8 = v1;
        return result4;
    }
    int32_t v5 = g8; // 0x1e3dc90
    if ((v5 & 32) != 0) {
        int32_t result5 = function_1e40ad0(v5, 0xffff); // 0x1e3dc9e
        g2 = result5;
        g11--;
        g684 = v3;
        g8 = v1;
        return result5;
    }
    // 0x1e3dcaf
    g5 = (float32_t)v3;
    g7 = a2;
    g2 = a1;
    int32_t v6;
    int32_t result6 = function_1e40250(16, 11, a1, a2, (float80_t)v3, v6, v5); // 0x1e3dcc8
    g2 = result6;
    g8 = v1;
    return result6;
}

// Address range: 0x1e3dce0 - 0x1e3dd1c
int32_t function_1e3dce0(int32_t a1, int32_t * a2, int32_t a3) {
    int32_t v1 = (int32_t)a2;
    g5 = a3;
    int32_t v2 = g8; // 0x1e3dce4
    g2 = a1;
    if (a3 == 10) {
        if (a1 < 0) {
            // 0x1e3dcf2
            g8 = v1;
            function_1e3dd20(a1, v1, a3, 1, v2);
            int32_t result = g8; // 0x1e3dd03
            g2 = result;
            g8 = v2;
            return result;
        }
    }
    // 0x1e3dd07
    g8 = v1;
    function_1e3dd20(a1, v1, a3, 0, v2);
    int32_t result2 = g8; // 0x1e3dd18
    g2 = result2;
    g8 = v2;
    return result2;
}

// Address range: 0x1e3dd20 - 0x1e3dd80
int32_t function_1e3dd20(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = a2; // esi
    int32_t v2;
    int32_t v3; // 0x1e3dd32
    if (a4 != 0) {
        // 0x1e3dd2f
        *(char *)a2 = 45;
        v3 = v1 + 1;
        v1 = v3;
        g5 = a1;
        v2 = -a1;
    } else {
        v3 = a2;
        v2 = a1;
    }
    // 0x1e3dd3f
    g5 = v2;
    int32_t v4 = v3; // edi
    g3 = a3;
    int32_t v5 = v3; // 0x1e3dd62
    uint32_t v6 = v2; // 0x1e3dd4d
    int32_t v7; // 0x1e3dd64
    while (true) {
        int32_t v8 = v6 / a3;
        uint32_t v9 = v6 % a3;
        g2 = v8;
        g7 = v9;
        g5 = v8;
        int32_t v10;
        if (v9 < 10) {
            // 0x1e3dd5f
            v10 = v9 + 48 & 255 | v9 & -256;
        } else {
            // 0x1e3dd5a
            v10 = v9 + 87 & 255 | v9 & -256;
        }
        // 0x1e3dd62
        *(char *)v5 = (char)v10;
        v7 = v1 + 1;
        v1 = v7;
        int32_t v11 = g5; // 0x1e3dd65
        if (v11 == 0) {
            // break -> 0x1e3dd69
            break;
        }
        // 0x1e3dd62
        v5 = v7;
        a3 = g3;
        v6 = v11;
    }
    // 0x1e3dd69
    *(char *)v7 = 0;
    int32_t v12 = v1 - 1; // 0x1e3dd6c
    v1 = v12;
    char * v13 = (char *)v12; // 0x1e3dd6d
    g2 = g2 & -256 | (int32_t)*v13;
    unsigned char v14 = *(char *)v4; // 0x1e3dd6f
    g5 = g5 & -256 | (int32_t)v14;
    *v13 = v14;
    v1--;
    *(char *)v4 = (char)g2;
    int32_t v15 = v4 + 1; // 0x1e3dd76
    v4 = v15;
    while (v15 < v1) {
        // 0x1e3dd6d
        v13 = (char *)v1;
        g2 = g2 & -256 | (int32_t)*v13;
        v14 = *(char *)v15;
        g5 = g5 & -256 | (int32_t)v14;
        *v13 = v14;
        v1--;
        *(char *)v4 = (char)g2;
        v15 = v4 + 1;
        v4 = v15;
    }
    // 0x1e3dd7b
    return g2;
}

// Address range: 0x1e3dd80 - 0x1e3ddaf
int32_t function_1e3dd80(int32_t a1, int32_t * a2, int32_t a3) {
    int32_t v1 = (int32_t)a2;
    g2 = a3;
    int32_t v2 = g8; // 0x1e3dd84
    int32_t v3;
    if (a3 != 10) {
        v3 = 0;
        goto lab_0x1e3dd9b;
    } else {
        if (a1 >= 0) {
            v3 = 0;
            goto lab_0x1e3dd9b;
        } else {
            v3 = 1;
            goto lab_0x1e3dd9b;
        }
    }
  lab_0x1e3dd9b:
    // 0x1e3dd9b
    g5 = v3;
    g8 = v1;
    function_1e3dd20(a1, v1, a3, v3, v2);
    int32_t result = g8; // 0x1e3ddab
    g2 = result;
    g8 = v2;
    return result;
}

// Address range: 0x1e3ddb0 - 0x1e3ddea
int32_t function_1e3ddb0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g6; // 0x1e3ddb1
    int32_t v2 = function_1e41030(v1, g8); // 0x1e3ddb2
    g2 = v2;
    g8 = v2;
    if (v2 == 0) {
        // 0x1e3ddbd
        g2 = 0;
        g6 = v1;
        return 0;
    }
    // 0x1e3ddc2
    g2 = a3;
    g5 = a2;
    g7 = a1;
    int32_t result = function_1e40e20(a1, a2, a3, v2); // 0x1e3ddd2
    g2 = result;
    function_1e22590(v2);
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e3ddf0 - 0x1e3de05
int32_t function_1e3ddf0(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = (int32_t)a1;
    g2 = v1;
    g5 = v2;
    int32_t result = function_1e3ddb0(v2, v1, 64); // 0x1e3ddfc
    g2 = result;
    return result;
}

// Address range: 0x1e3de10 - 0x1e3df04
int32_t function_1e3de10(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g4; // bp-16
    int32_t v2 = &v1; // 0x1e3de15
    g5 = a3;
    int32_t result; // ebx
    int32_t v3; // 0x1e3deff
    if (a3 != 0) {
        // 0x1e3de21
        g8 = a1;
        g6 = a2;
        g2 = &g125;
        if (g126 != 0) {
            // 0x1e3de7e
            int32_t v4; // 0x1e3dea1
            if (g671 >= 0 == (g671 != 0)) {
                // 0x1e3de91
                g4 = a3;
                g2 = function_1e22490(19);
                v4 = g4;
                g5 = v4;
            } else {
                // 0x1e3de87
                g672++;
                v4 = a3;
            }
            // 0x1e3dea3
            g2 = 0;
            int32_t v5 = v4; // 0x1e3deb6
            int32_t v6 = 0; // 0x1e3deac
            int32_t v7 = 0; // 0x1e3dea8
            int32_t v8; // 0x1e3ded5
            bool v9; // 0x1e3dede
            int32_t v10; // 0x1e3ded5
            while (true) {
                int32_t v11 = g8; // 0x1e3dea8
                int32_t v12 = (int32_t)*(char *)v11 | v7 & -256; // 0x1e3dea8
                g2 = v12;
                int32_t v13 = g6; // 0x1e3deac
                int32_t v14 = (int32_t)*(char *)v13 | v6 & -256; // 0x1e3deac
                if (v12 == 0) {
                    v10 = v14;
                    v8 = 0;
                    // break -> 0x1e3ded3
                    break;
                }
                // 0x1e3deb0
                g4 = v14;
                if (v14 == 0) {
                    v10 = 0;
                    v8 = v12;
                    // break -> 0x1e3ded3
                    break;
                }
                // 0x1e3deb4
                g8 = v11 + 1;
                g6 = v13 + 1;
                *(int32_t *)(g9 - 4) = v5;
                *(int32_t *)(g9 - 8) = g2;
                *(int32_t *)(g9 - 12) = g4;
                int32_t v15 = function_1e411a0((int32_t)&g708); // 0x1e3deb9
                g2 = v15;
                g4 = v15;
                int32_t v16 = function_1e411a0((int32_t)&g708); // 0x1e3dec3
                g2 = v16;
                int32_t v17 = *(int32_t *)(g9 + 4); // 0x1e3decb
                g5 = v17;
                int32_t v18 = g4; // 0x1e3decc
                if (v16 != v18) {
                    v9 = v16 < v18;
                    goto lab_0x1e3ded9;
                }
                int32_t v19 = v17 - 1; // 0x1e3ded0
                g5 = v19;
                if (v19 == 0) {
                    v10 = v18;
                    v8 = v16;
                    // break -> 0x1e3ded3
                    break;
                }
                v5 = v19;
                v6 = v18;
                v7 = v16;
            }
            // 0x1e3ded3
            g5 = 0;
            int32_t v20; // 0x1e3deef
            if (v8 != v10) {
                v9 = v8 < v10;
              lab_0x1e3ded9:
                // 0x1e3ded9
                g5 = -1;
                if (!v9) {
                    // 0x1e3dee0
                    g5 = 1;
                    v20 = 1;
                } else {
                    v20 = -1;
                }
            } else {
                v20 = 0;
            }
            int32_t * v21 = (int32_t *)g9; // 0x1e3dee2
            int32_t v22 = *v21; // 0x1e3dee2
            g2 = v22;
            if (v22 != 0) {
                // 0x1e3deef
                result = v20;
                *v21 = 19;
                g2 = function_1e22500((int32_t)&g708);
                g5 = result;
                v3 = g9 + 4;
            } else {
                // 0x1e3dee7
                g672--;
                v3 = g9 + 4;
                result = v20;
            }
        } else {
            // 0x1e3de33
            g7 = g7 & -0xff01 | 0x2000;
            int32_t v23 = &g125; // 0x1e3de3c
            int32_t v24; // 0x1e3de67
            bool v25; // 0x1e3de74
            while (true) {
                unsigned char v26 = *(char *)a1; // 0x1e3de3c
                int32_t v27 = 256 * (int32_t)v26 | v23 & -0xff01; // 0x1e3de3e
                g2 = v27;
                unsigned char v28 = *(char *)a2; // 0x1e3de40
                int32_t v29 = (int32_t)v28 | v27 & -256; // 0x1e3de40
                g2 = v29;
                if (v26 == 0) {
                    v24 = v29;
                    // break -> 0x1e3de65
                    break;
                }
                // 0x1e3de44
                g2 = v29;
                if (v28 == 0) {
                    v24 = v29;
                    // break -> 0x1e3de65
                    break;
                }
                // 0x1e3de48
                int32_t v30; // 0x1e3de5c
                if (v26 >= 65) {
                    if (v26 < 91) {
                        int32_t v31 = v29 & -0xff01 | 256 * (int32_t)(v26 + 32); // 0x1e3de52
                        g2 = v31;
                        v30 = v31;
                    } else {
                        v30 = v29;
                    }
                } else {
                    v30 = v29;
                }
                unsigned char v32 = (char)v30; // 0x1e3de54
                int32_t v33; // 0x1e3de5e
                if (v32 >= 65) {
                    if (v32 < 91) {
                        int32_t v34 = v30 + 32 & 255 | v30 & -256; // 0x1e3de5c
                        g2 = v34;
                        v33 = v34;
                    } else {
                        v33 = v30;
                    }
                } else {
                    v33 = v30;
                }
                unsigned char v35 = (char)(v33 / 256); // 0x1e3de5e
                unsigned char v36 = (char)v33; // 0x1e3de5e
                if (v35 != v36) {
                    v25 = v35 < v36;
                    goto lab_0x1e3de6f;
                }
                int32_t v37 = a3 - 1; // 0x1e3de62
                g5 = v37;
                if (v37 == 0) {
                    v24 = v33;
                    // break -> 0x1e3de65
                    break;
                }
                a3 = v37;
                a2++;
                v23 = v33;
                a1++;
            }
            // 0x1e3de65
            g5 = 0;
            unsigned char v38 = (char)(v24 / 256); // 0x1e3de67
            unsigned char v39 = (char)v24; // 0x1e3de67
            if (v38 != v39) {
                v25 = v38 < v39;
              lab_0x1e3de6f:
                // 0x1e3de6f
                g5 = -1;
                if (!v25) {
                    // 0x1e3de7a
                    g5 = 1;
                    v3 = v2;
                    result = 1;
                } else {
                    v3 = v2;
                    result = -1;
                }
            } else {
                v3 = v2;
                result = 0;
            }
        }
    } else {
        v3 = v2;
        result = 0;
    }
    // 0x1e3defd
    g2 = result;
    g4 = *(int32_t *)v3;
    g6 = *(int32_t *)(v3 + 8);
    return result;
}

