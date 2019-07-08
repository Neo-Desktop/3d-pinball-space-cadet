
// Address range: 0x1e2e9be - 0x1e2effc
int32_t function_1e2e9be(void) {
    // 0x1e2e9be
    g4 = 0;
    g6 = g5;
    g2 = function_1e29f8c(0, -1, 0, g3);
    g2 = function_1e3a705(32);
    int32_t v1 = g6; // 0x1e2e9e1
    g3 = v1 + 258;
    *(int32_t *)(v1 + 250) = 16;
    *(int32_t *)(g6 + 254) = g2;
    int32_t v2 = function_1e3a705(3); // 0x1e2e9f7
    *(int32_t *)g8 = v2;
    *(int32_t *)g6 = (int32_t)&g54;
    g2 = 1;
    *(int32_t *)(g6 + 50) = g4;
    *(int32_t *)g3 = g2;
    *(int32_t *)(g6 + 54) = g4;
    *(int32_t *)(g6 + 58) = g4;
    *(int32_t *)(g6 + 78) = g4;
    *(char *)(g6 + 5) = (char)g2;
    *(int32_t *)(g6 + 370) = g4;
    *(int32_t *)(g6 + 94) = g4;
    *(int32_t *)(g6 + 90) = g4;
    *(int32_t *)(g6 + 358) = g4;
    *(int32_t *)(g6 + 98) = g4;
    *(int32_t *)(g6 + 346) = g4;
    int32_t v3 = function_1e22760(g2, 362); // 0x1e2ea3c
    g2 = v3;
    g4 = 0;
    int32_t v4; // 0x1e2ea50
    if (v3 != 0) {
        // 0x1e2ea4d
        g5 = v3;
        v4 = function_1e2a9a0(g6);
        g2 = v4;
        g4 = v4;
    } else {
        v4 = 0;
    }
    int32_t v5 = *(int32_t *)g8; // 0x1e2ea57
    g5 = v5;
    int32_t v6 = *(int32_t *)v5; // 0x1e2ea59
    g2 = v6;
    int32_t v7; // 0x1e2ea6b
    if (*(int32_t *)(v5 + 4) == v6) {
        // 0x1e2ea60
        *(int32_t *)(g9 - 4) = *(int32_t *)g3;
        *(int32_t *)(g9 - 8) = g5;
        int32_t v8 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2ea64
        g2 = v8;
        *(int32_t *)g8 = v8;
        v7 = g4;
    } else {
        v7 = v4;
    }
    // 0x1e2ea6b
    *(int32_t *)(g9 - 4) = v7;
    *(int32_t *)(g9 - 8) = *(int32_t *)g8;
    g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
    *(char *)(g4 + 5) = 0;
    *(int32_t *)(g9 - 4) = 126;
    *(int32_t *)(g9 - 8) = 1;
    int32_t v9 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ea7b
    g2 = v9;
    int32_t v10; // 0x1e2ea8f
    if (v9 != 0) {
        // 0x1e2ea87
        *(int32_t *)(g9 + 4) = g6;
        g5 = v9;
        g2 = function_1e2da82((int32_t)&g708);
        v10 = g9;
    } else {
        v10 = g9 + 8;
    }
    // 0x1e2ea8f
    *(int32_t *)(v10 - 4) = 138;
    *(int32_t *)(v10 - 8) = 1;
    int32_t v11 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ea96
    g2 = v11;
    if (v11 == 0) {
        // 0x1e2eab4
        *(int32_t *)(g6 + 266) = 0;
    } else {
        // 0x1e2eaa2
        *(int32_t *)(g9 + 4) = 0;
        g5 = v11;
        *(int32_t *)g9 = g6;
        int32_t v12 = function_1e3b1c6((int32_t)&g708, (int32_t)&g708); // 0x1e2eaa7
        g2 = v12;
        *(int32_t *)(g6 + 266) = v12;
    }
    // 0x1e2eabe
    g2 = g196;
    *(int32_t *)(g9 - 4) = g196;
    g8 = g6 + 130;
    *(int32_t *)(g9 - 8) = (int32_t)"score1";
    int32_t v13 = function_1e2f282((int32_t)&g708, (int32_t)&g708); // 0x1e2ead4
    g2 = v13;
    *(int32_t *)(g6 + 50) = v13;
    *(int32_t *)(g6 + 102) = g2;
    *(int32_t *)(g9 - 4) = g4;
    g4++;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g6 + 50);
    int32_t v14 = function_1e2f317((int32_t)&g708); // 0x1e2eae4
    g2 = v14;
    *(int32_t *)g8 = v14;
    g8 += 28;
    while (g4 < 4) {
        // 0x1e2eadf
        *(int32_t *)(g9 - 4) = g4;
        g4++;
        *(int32_t *)(g9 - 8) = *(int32_t *)(g6 + 50);
        v14 = function_1e2f317((int32_t)&g708);
        g2 = v14;
        *(int32_t *)g8 = v14;
        g8 += 28;
    }
    // 0x1e2eaf3
    *(int32_t *)(g6 + 330) = 3;
    g8 = 0;
    *(int32_t *)(g6 + 218) = 0;
    g2 = g196;
    *(int32_t *)(g9 - 4) = g196;
    *(int32_t *)(g9 - 8) = (int32_t)"ballcount1";
    int32_t v15 = function_1e2f282((int32_t)&g708, (int32_t)&g708); // 0x1e2eb10
    *(int32_t *)(g6 + 54) = v15;
    g2 = g196;
    *(int32_t *)(g9 - 4) = g196;
    *(int32_t *)(g9 - 8) = (int32_t)"player_number1";
    int32_t v16 = function_1e2f282((int32_t)&g708, (int32_t)&g708); // 0x1e2eb23
    *(int32_t *)(g6 + 58) = v16;
    int32_t v17 = g9 + 24; // 0x1e2eb2b
    g2 = v17;
    *(int32_t *)(g9 - 4) = v17;
    *(int32_t *)(g9 - 8) = 1025;
    *(int32_t *)(g9 - 12) = (int32_t)"table_objects";
    int32_t v18 = function_1e392c2((int32_t)&g708); // 0x1e2eb3a
    g2 = v18;
    *(int32_t *)(g9 - 4) = v18;
    int32_t v19 = function_1e39996((int32_t)&g708, (int32_t)&g708, &g708); // 0x1e2eb40
    g2 = v19;
    *(int32_t *)(g9 + 16) = v19;
    int32_t v20 = *(int32_t *)(g9 + 24); // 0x1e2eb49
    int32_t v21 = g8; // 0x1e2eb49
    if (v20 > v21) {
        // 0x1e2eb53
        g2 = v20;
        *(int32_t *)(g9 + 28) = v21;
        int32_t v22 = g2; // 0x1e2eb5b
        int32_t v23 = v22 - (v22 >> 31); // 0x1e2eb5c
        g2 = v23 / 2;
        if (v23 >= 2) {
            // 0x1e2eb68
            g4 = 1;
            while (true) {
                int32_t * v24 = (int32_t *)(g9 + 16); // 0x1e2eb6d
                g2 = *v24;
                *v24 = *v24 + 2;
                g5 = g5 & -0x10000 | (int32_t)*(int16_t *)g2;
                int32_t * v25 = (int32_t *)(g9 + 16); // 0x1e2eb79
                g2 = *v25;
                *v25 = *v25 + 2;
                g3 = (int32_t)*(int16_t *)g2;
                int32_t v26 = g5; // 0x1e2eb85
                int32_t v27 = v26 - 1000; // 0x1e2eb88
                g2 = v27;
                g688 = v27;
                switch (v26) {
                    case 1000: {
                    }
                    case 1010: {
                        // 0x1e2eb9d
                        *(int32_t *)(g9 - 4) = 90;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v28 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2eba0
                        g2 = v28;
                        if (v28 != 0) {
                            // 0x1e2ebb0
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v28;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2a64b((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1001: {
                        // 0x1e2ebbe
                        *(int32_t *)(g9 - 4) = 106;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v29 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ebc1
                        g2 = v29;
                        if (v29 == 0) {
                            // 0x1e2ebe1
                            *(int32_t *)(g6 + 222) = g8;
                        } else {
                            // 0x1e2ebcd
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v29;
                            *(int32_t *)g9 = g6;
                            int32_t v30 = function_1e2d6c5((int32_t)&g708, (int32_t)&g708); // 0x1e2ebd1
                            g2 = v30;
                            *(int32_t *)(g6 + 222) = v30;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1002: {
                        // 0x1e2ebec
                        *(int32_t *)(g9 - 4) = 222;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v31 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ebf2
                        g2 = v31;
                        if (v31 == 0) {
                            // 0x1e2ec0d
                            *(int32_t *)(g9 + 28) = g8;
                        } else {
                            // 0x1e2ebfe
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v31;
                            *(int32_t *)g9 = g6;
                            int32_t v32 = function_1e3aabb((int32_t)&g708, (int32_t)&g708); // 0x1e2ec02
                            g2 = v32;
                            *(int32_t *)(g9 + 20) = v32;
                        }
                        int32_t v33 = *(int32_t *)(g6 + 266); // 0x1e2ec11
                        int32_t v34 = *(int32_t *)(v33 + 46); // 0x1e2ec17
                        g5 = v34;
                        int32_t v35 = v33 + 42; // 0x1e2ec1a
                        g3 = v35;
                        int32_t v36 = *(int32_t *)v34; // 0x1e2ec1d
                        g2 = v36;
                        if (*(int32_t *)(v34 + 4) == v36) {
                            // 0x1e2ec24
                            *(int32_t *)(g9 - 4) = *(int32_t *)v35;
                            *(int32_t *)(g9 - 8) = g5;
                            int32_t v37 = function_1e3a739((int32_t)&g708, (int32_t)&g708); // 0x1e2ec28
                            g2 = v37;
                            *(int32_t *)(g3 + 4) = v37;
                        }
                        // 0x1e2ec30
                        *(int32_t *)(g9 - 4) = *(int32_t *)(g9 + 20);
                        *(int32_t *)(g9 - 8) = *(int32_t *)(g3 + 4);
                        g2 = function_1e3a6a7((int32_t)&g708, (int32_t)&g708);
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1003: {
                        // 0x1e2ec41
                        *(int32_t *)(g9 - 4) = 106;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v38 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ec44
                        g2 = v38;
                        if (v38 == 0) {
                            // 0x1e2ec61
                            *(int32_t *)(g6 + 42) = g8;
                        } else {
                            // 0x1e2ec50
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v38;
                            *(int32_t *)g9 = g6;
                            int32_t v39 = function_1e3d329((int32_t)&g708, (int32_t)&g708); // 0x1e2ec54
                            g2 = v39;
                            *(int32_t *)(g6 + 42) = v39;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1004: {
                        // 0x1e2ec69
                        *(int32_t *)(g9 - 4) = 106;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v40 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ec6c
                        g2 = v40;
                        if (v40 == 0) {
                            // 0x1e2ec89
                            *(int32_t *)(g6 + 46) = g8;
                        } else {
                            // 0x1e2ec78
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v40;
                            *(int32_t *)g9 = g6;
                            int32_t v41 = function_1e3d329((int32_t)&g708, (int32_t)&g708); // 0x1e2ec7c
                            g2 = v41;
                            *(int32_t *)(g6 + 46) = v41;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1005: {
                        // 0x1e2ec91
                        *(int32_t *)(g9 - 4) = 150;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v42 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ec97
                        g2 = v42;
                        if (v42 != 0) {
                            // 0x1e2eca7
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v42;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2abfe((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1006: {
                        // 0x1e2ecb5
                        *(int32_t *)(g9 - 4) = 114;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v43 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ecb8
                        g2 = v43;
                        if (v43 != 0) {
                            // 0x1e2ecc8
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v43;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2b298((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1007: {
                        // 0x1e2ecd6
                        *(int32_t *)(g9 - 4) = 90;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v44 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ecd9
                        g2 = v44;
                        if (v44 == 0) {
                            // 0x1e2ecf9
                            *(int32_t *)(g6 + 226) = g8;
                        } else {
                            // 0x1e2ece5
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v44;
                            *(int32_t *)g9 = g6;
                            int32_t v45 = function_1e2d5f8((int32_t)&g708, (int32_t)&g708); // 0x1e2ece9
                            g2 = v45;
                            *(int32_t *)(g6 + 226) = v45;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1011: {
                        // 0x1e2ed04
                        *(int32_t *)(g9 - 4) = 114;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v46 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ed07
                        g2 = v46;
                        if (v46 != 0) {
                            // 0x1e2ed17
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v46;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2b61b((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1012: {
                        // 0x1e2ed25
                        *(int32_t *)(g9 - 4) = 234;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v47 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ed2b
                        g2 = v47;
                        if (v47 != 0) {
                            // 0x1e2ed3b
                            *(int32_t *)(g9 + 4) = g4;
                            g5 = v47;
                            *(int32_t *)g9 = g3;
                            *(int32_t *)(g9 - 4) = g6;
                            int32_t v48 = function_1e2be04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2ed40
                            g2 = v48;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1013: {
                        // 0x1e2ed4a
                        *(int32_t *)(g9 - 4) = 102;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v49 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ed4d
                        g2 = v49;
                        if (v49 != 0) {
                            // 0x1e2ed5d
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v49;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2b778((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1014: {
                        // 0x1e2ed6b
                        *(int32_t *)(g9 - 4) = 94;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v50 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ed6e
                        g2 = v50;
                        if (v50 != 0) {
                            // 0x1e2ed7e
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v50;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2bc3e((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1015: {
                        // 0x1e2ed8c
                        *(int32_t *)(g9 - 4) = 87;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v51 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ed8f
                        g2 = v51;
                        if (v51 != 0) {
                            // 0x1e2ed9f
                            *(int32_t *)(g9 + 4) = g3;
                            g5 = v51;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2b8e8((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1016: {
                        // 0x1e2edad
                        *(int32_t *)(g9 - 4) = 110;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v52 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2edb0
                        g2 = v52;
                        g5 = v52;
                        if (v52 != 0) {
                            // 0x1e2edc2
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2a761((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1017: {
                        // 0x1e2edce
                        *(int32_t *)(g9 - 4) = 158;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v53 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2edd4
                        g2 = v53;
                        g5 = v53;
                        if (v53 != 0) {
                            // 0x1e2ede6
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2d39e((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1018: {
                        // 0x1e2edf2
                        *(int32_t *)(g9 - 4) = 118;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v54 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2edf5
                        g2 = v54;
                        g5 = v54;
                        if (v54 != 0) {
                            // 0x1e2ee07
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2af36((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1019: {
                        // 0x1e2ee13
                        *(int32_t *)(g9 - 4) = 98;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v55 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ee16
                        g2 = v55;
                        g5 = v55;
                        if (v55 != 0) {
                            // 0x1e2ee28
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2b4a0((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1020: {
                        // 0x1e2ee34
                        *(int32_t *)(g9 - 4) = 95;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v56 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ee37
                        g2 = v56;
                        g5 = v56;
                        if (v56 != 0) {
                            // 0x1e2ee49
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2ba2a((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1021: {
                        // 0x1e2ee55
                        *(int32_t *)(g9 - 4) = 154;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v57 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ee5b
                        g2 = v57;
                        g5 = v57;
                        if (v57 != 0) {
                            // 0x1e2ee6d
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2c687((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1022: {
                        // 0x1e2ee79
                        *(int32_t *)(g9 - 4) = 142;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v58 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ee7f
                        g2 = v58;
                        g5 = v58;
                        if (v58 != 0) {
                            // 0x1e2ee91
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2c1e4((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1023: {
                        // 0x1e2ee9d
                        *(int32_t *)(g9 - 4) = 130;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v59 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2eea3
                        g2 = v59;
                        g5 = v59;
                        if (v59 != 0) {
                            // 0x1e2eeb5
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2ce72((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1024: {
                        // 0x1e2eec1
                        *(int32_t *)(g9 - 4) = 87;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v60 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2eec4
                        g2 = v60;
                        g5 = v60;
                        if (v60 != 0) {
                            // 0x1e2eed6
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2bba6((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1026: {
                        // 0x1e2eee2
                        *(int32_t *)(g9 - 4) = 138;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v61 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2eee8
                        g2 = v61;
                        g5 = v61;
                        if (v61 != 0) {
                            // 0x1e2eefa
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e3b1c6((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1028: {
                        // 0x1e2ef06
                        *(int32_t *)(g9 - 4) = 54;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v62 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef09
                        g2 = v62;
                        g5 = v62;
                        if (v62 != 0) {
                            // 0x1e2ef1b
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2a273((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1029: {
                        // 0x1e2ef27
                        *(int32_t *)(g9 - 4) = 234;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v63 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef2d
                        g2 = v63;
                        g5 = v63;
                        if (v63 != 0) {
                            // 0x1e2ef3b
                            *(int32_t *)(g9 + 4) = g8;
                            *(int32_t *)g9 = g3;
                            *(int32_t *)(g9 - 4) = g6;
                            int32_t v64 = function_1e2be04((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2ef3e
                            g2 = v64;
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1030: {
                        // 0x1e2ef45
                        *(int32_t *)(g9 - 4) = 166;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v65 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef4b
                        g2 = v65;
                        g5 = v65;
                        if (v65 != 0) {
                            // 0x1e2ef59
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e3bcfa((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1031: {
                        // 0x1e2ef62
                        *(int32_t *)(g9 - 4) = 46;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v66 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef65
                        g2 = v66;
                        g5 = v66;
                        if (v66 != 0) {
                            // 0x1e2ef73
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2f16b((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1032: {
                        // 0x1e2ef7c
                        *(int32_t *)(g9 - 4) = 46;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v67 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef7f
                        g2 = v67;
                        g5 = v67;
                        if (v67 != 0) {
                            // 0x1e2ef8d
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2f1cb((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                    case 1033: {
                        // 0x1e2ef96
                        *(int32_t *)(g9 - 4) = 78;
                        *(int32_t *)(g9 - 8) = g4;
                        int32_t v68 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e2ef99
                        g2 = v68;
                        g5 = v68;
                        if (v68 != 0) {
                            // 0x1e2efa7
                            *(int32_t *)(g9 + 4) = g3;
                            *(int32_t *)g9 = g6;
                            g2 = function_1e2f73e((int32_t)&g708, (int32_t)&g708);
                        }
                        // break -> 0x1e2efae
                        break;
                    }
                }
                // 0x1e2efae
                g2 = *(int32_t *)(g9 + 24);
                int32_t * v69 = (int32_t *)(g9 + 28); // 0x1e2efb2
                *v69 = *v69 + 1;
                int32_t v70 = g2; // 0x1e2efb6
                int32_t v71 = (v70 - (v70 >> 31)) / 2; // 0x1e2efb9
                g2 = v71;
                if (v71 <= *(int32_t *)(g9 + 28)) {
                    // break -> 0x1e2efc5
                    break;
                }
            }
        }
    }
    // 0x1e2efc5
    g2 = function_1e28fba();
    *(int32_t *)(g9 - 4) = (int32_t)"info_text_box";
    g5 = g6;
    g2 = function_1e2e7ce();
    *(int32_t *)(g9 - 4) = (int32_t)"mission_text_box";
    g5 = g6;
    g200 = g2;
    g2 = function_1e2e7ce();
    *(int32_t *)(g9 - 4) = g6;
    g201 = g2;
    function_1e32850((int32_t)&g708);
    g2 = g6;
    g3 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 8);
    return g6;
}

// Address range: 0x1e2f084 - 0x1e2f16b
float80_t function_1e2f084(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = g3; // bp-4
    g2 = a2;
    g3 = &v1;
    int32_t v2 = *(int32_t *)a2; // 0x1e2f08e
    g5 = v2;
    float32_t v3; // bp-20
    int32_t v4 = &v3; // edi
    *(int32_t *)(a1 + 42) = v2;
    int32_t v5 = *(int32_t *)(g2 + 4); // 0x1e2f09f
    g2 = v5;
    *(int32_t *)(a1 + 46) = v5;
    v3 = (float32_t)*(int32_t *)a3;
    int32_t v6 = g1 ? -4 : 4; // 0x1e2f0a5
    int32_t v7 = v6 + v4; // 0x1e2f0a5
    int32_t v8 = v6 + a3; // 0x1e2f0a5
    *(int32_t *)v7 = *(int32_t *)v8;
    *(int32_t *)(v7 + v6) = *(int32_t *)(v8 + v6);
    int32_t v9 = a1 + 58; // 0x1e2f0a8
    v4 = v9;
    int32_t v10 = a1 + 54; // 0x1e2f0ab
    float32_t v11;
    float80_t v12 = v11; // 0x1e2f0b0
    float80_t v13 = (float80_t)*(float32_t *)v10 * (float80_t)v3; // 0x1e2f0b5
    float80_t v14 = v12 * (float80_t)*(float32_t *)v9 + v13; // 0x1e2f0b8
    float80_t v15 = -v14; // 0x1e2f0ba
    float32_t v16 = v15; // 0x1e2f0c2
    uint32_t v17 = (int32_t)__asm_fnstsw(g10); // 0x1e2f0c5
    g2 = g2 & -0x10000 | v17;
    int3_t v18;
    if ((v17 / 256 & 65) == 0) {
        float80_t v19 = v12 * v15; // 0x1e2f0d6
        float32_t * v20 = (float32_t *)v10; // 0x1e2f0dc
        float80_t v21 = v16 * v3; // 0x1e2f0de
        float80_t v22 = a5; // 0x1e2f0e1
        float80_t v23 = a4; // 0x1e2f0e7
        float80_t v24 = v23 * v21; // 0x1e2f0e7
        *v20 = (float32_t)(v24 + v22 * (v21 + (float80_t)*v20));
        float32_t * v25 = (float32_t *)v4; // 0x1e2f0ee
        float80_t v26 = v23 * v19; // 0x1e2f0fa
        *v25 = (float32_t)(v26 + v22 * (v19 + (float80_t)*v25));
        g2 = (float32_t)function_1e30d19(v10);
        v18 = g11;
    } else {
        // 0x1e2f10a
        v16 = v14;
        v18 = g11 - 1;
    }
    float32_t * v27 = (float32_t *)(a1 + 66); // 0x1e2f112
    float80_t result = (float80_t)(v16 * *v27); // 0x1e2f124
    float80_t v28 = (1.0L - (float80_t)(float32_t)a4) * result; // 0x1e2f124
    *v27 = (float32_t)((float80_t)*v27 - v28);
    g11 = v18 + 1;
    uint32_t v29 = (int32_t)__asm_fnstsw(g10); // 0x1e2f133
    g2 = g2 & -0x10000 | v29;
    int3_t v30 = g11;
    int3_t v31; // 0x1e2f15f
    if ((v29 / 256 & 1) == 0) {
        float80_t v32 = (float80_t)*(float32_t *)(a1 + 66); // 0x1e2f138
        float32_t * v33 = (float32_t *)v10; // 0x1e2f13b
        float80_t v34 = a7; // 0x1e2f140
        float80_t v35 = v34 * (float80_t)v3; // 0x1e2f140
        *v33 = (float32_t)(v32 * (float80_t)*v33 + v35);
        float80_t v36 = (float80_t)*(float32_t *)(a1 + 66); // 0x1e2f147
        float32_t v37 = *(float32_t *)v4; // 0x1e2f14a
        *(int32_t *)(g9 - 4) = v10;
        float80_t v38 = v34 * v12 + v36 * (float80_t)v37; // 0x1e2f153
        *(float32_t *)v4 = (float32_t)v38;
        float32_t v39 = function_1e30d19((int32_t)&g708); // 0x1e2f157
        g2 = v39;
        *(float32_t *)(a1 + 66) = v39;
        v31 = g11 + 1;
    } else {
        v31 = v30;
    }
    // 0x1e2f15f
    g11 = v31 - 1;
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
}

// Address range: 0x1e2f16b - 0x1e2f1a4
int32_t function_1e2f16b(int32_t a1, int32_t a2) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t v2; // bp-76
    int32_t v3 = &v2; // 0x1e2f16e
    g2 = function_1e29f8c(a1, a2, 1, g8);
    g5 = v3;
    *(int32_t *)g8 = (int32_t)&g55;
    function_1e39641(a2, 0, v3);
    g2 = g8;
    g3 = v1;
    return g2;
}

// Address range: 0x1e2f1a4 - 0x1e2f1c2
int32_t function_1e2f1a4(char a1) {
    // 0x1e2f1a4
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e2f1b3
        g2 = function_1e3df60(g8);
    }
    // 0x1e2f1bc
    g2 = g8;
    return g8;
}

// Address range: 0x1e2f1c2 - 0x1e2f1cb
int32_t function_1e2f1c2(void) {
    int32_t result = function_1e39a10(*(int32_t *)(g5 + 42)); // 0x1e2f1c5
    g2 = result;
    return result;
}

// Address range: 0x1e2f1cb - 0x1e2f1f0
int32_t function_1e2f1cb(int32_t a1, int32_t a2) {
    // 0x1e2f1cb
    function_1e29f8c(a1, a2, 1, g8);
    g2 = g8;
    *(int32_t *)g8 = (int32_t)&g56;
    *(int32_t *)(g8 + 42) = 0;
    return g2;
}

// Address range: 0x1e2f1f0 - 0x1e2f20e
int32_t function_1e2f1f0(char a1) {
    // 0x1e2f1f0
    g2 = function_1e2a201();
    if ((a1 & 1) != 0) {
        // 0x1e2f1ff
        g2 = function_1e3df60(g8);
    }
    // 0x1e2f208
    g2 = g8;
    return g8;
}

// Address range: 0x1e2f20e - 0x1e2f26c
int32_t function_1e2f20e(int32_t a1) {
    // 0x1e2f20e
    g2 = a1;
    int32_t v1 = g6; // bp-8
    int32_t v2 = g5; // 0x1e2f214
    g8 = v2;
    if (a1 != 59) {
        if (a1 != 1011) {
            if (a1 != 1022) {
                if (a1 != 1024) {
                    // 0x1e2f265
                    g2 = 0;
                    return 0;
                }
            }
        }
        int32_t v3 = *(int32_t *)(v2 + 42); // 0x1e2f253
        g2 = v3;
        if (v3 != 0) {
            // 0x1e2f25c
            g2 = function_1e32771(v3);
            *(int32_t *)(g8 + 42) = 0;
        }
        // 0x1e2f265
        g2 = 0;
        return 0;
    }
    int32_t v4 = *(int32_t *)(v2 + 42); // 0x1e2f232
    g2 = v4;
    int32_t v5; // 0x1e2f23f
    if (v4 != 0) {
        // 0x1e2f239
        g2 = function_1e32771(v4);
        v5 = g9;
    } else {
        v5 = &v1;
    }
    // 0x1e2f23f
    *(int32_t *)(v5 - 4) = 0x1e2f26c;
    *(int32_t *)(v5 - 8) = g8;
    *(int32_t *)(v5 - 12) = *(int32_t *)(v5 + 16);
    int32_t v6 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f249
    g2 = v6;
    *(int32_t *)(g8 + 42) = v6;
    // 0x1e2f265
    g2 = 0;
    return 0;
}

// Address range: 0x1e2f26c - 0x1e2f282
int32_t function_1e2f26c(int32_t a1) {
    // 0x1e2f26c
    g2 = a1;
    *(int32_t *)(a1 + 42) = 0;
    int32_t result = function_1e328b9(60, a1); // 0x1e2f27a
    g2 = result;
    return result;
}

// Address range: 0x1e2f282 - 0x1e2f317
int32_t function_1e2f282(int32_t a1, int32_t a2) {
    int32_t v1 = function_1e25371(68); // 0x1e2f288
    g2 = v1;
    int32_t result; // 0x1e2f314
    if (v1 != 0) {
        // 0x1e2f297
        g2 = a2;
        *(int32_t *)v1 = -0x270f;
        *(int32_t *)(v1 + 8) = g2;
        int32_t v2 = function_1e39c9f(*(int32_t *)&g620, a1, 10); // 0x1e2f2b0
        g2 = v2;
        if (v2 != 0) {
            int32_t v3 = v2 + 2; // 0x1e2f2c6
            g2 = v3;
            int32_t v4 = (int32_t)*(int16_t *)v3; // 0x1e2f2c9
            g5 = v4;
            g2 = v2 + 4;
            *(int32_t *)(v1 + 12) = v4;
            int32_t v5 = g2; // 0x1e2f2d2
            g2 = v5 + 2;
            *(int32_t *)(v1 + 16) = (int32_t)*(int16_t *)v5;
            int32_t v6 = (int32_t)*(int16_t *)g2; // 0x1e2f2db
            g5 = v6;
            *(int32_t *)(v1 + 20) = v6;
            int32_t v7 = (int32_t)*(int16_t *)(g2 + 2); // 0x1e2f2e4
            *(int32_t *)(v1 + 24) = v7;
            int32_t v8 = v7 & -0x10000; // 0x1e2f2f1
            int32_t v9 = v8; // edi
            int32_t v10 = v8 + 1 & 0xffff | v8 & -0x10000; // ebx
            *(int32_t *)(g9 - 4) = 1;
            int32_t v11 = (g7 & -0x10000 | (int32_t)*(int16_t *)v2) + v9; // 0x1e2f2f5
            g2 = v11;
            *(int32_t *)(g9 - 8) = v11;
            *(int32_t *)(g9 - 12) = (int32_t)g620;
            int32_t v12 = function_1e39b58((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f2ff
            g2 = v12;
            *(int32_t *)(v1 + 28 + 4 * v9) = v12;
            while ((int16_t)v10 < 10) {
                // 0x1e2f2ee
                v8 = v10;
                v9 = v8;
                v10 = v8 + 1 & 0xffff | v8 & -0x10000;
                *(int32_t *)(g9 - 4) = 1;
                v11 = (g7 & -0x10000 | (int32_t)*(int16_t *)v2) + v9;
                g2 = v11;
                *(int32_t *)(g9 - 8) = v11;
                *(int32_t *)(g9 - 12) = (int32_t)g620;
                v12 = function_1e39b58((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                g2 = v12;
                *(int32_t *)(v1 + 28 + 4 * v9) = v12;
            }
            // 0x1e2f30e
            g2 = v1;
            result = v1;
        } else {
            // 0x1e2f2b9
            function_1e25401(v1);
            g2 = 0;
            result = 0;
        }
    } else {
        // 0x1e2f293
        g2 = 0;
        result = 0;
    }
    // 0x1e2f310
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e2f317 - 0x1e2f33a
int32_t function_1e2f317(int32_t a1) {
    int32_t v1 = g6; // 0x1e2f318
    int32_t v2 = function_1e25371(68); // 0x1e2f31b
    g2 = v2;
    int32_t result; // 0x1e2f337
    if (v2 != 0) {
        // 0x1e2f328
        g5 = 17;
        __asm_rep_movsd_memcpy((char *)v2, (char *)a1, 17);
        g5 = 0;
        result = g2;
    } else {
        // 0x1e2f324
        g2 = 0;
        result = 0;
    }
    // 0x1e2f335
    g6 = 68;
    g8 = v1;
    return result;
}

// Address range: 0x1e2f33a - 0x1e2f34b
int32_t function_1e2f33a(int32_t a1) {
    // 0x1e2f33a
    g2 = a1;
    int32_t result; // 0x1e2f343
    if (a1 != 0) {
        // 0x1e2f342
        result = function_1e25401(a1);
        g2 = result;
    } else {
        result = 0;
    }
    // 0x1e2f348
    return result;
}

// Address range: 0x1e2f34b - 0x1e2f363
int32_t function_1e2f34b(int32_t a1, int32_t a2) {
    // 0x1e2f34b
    g5 = a1;
    if (a1 != 0) {
        // 0x1e2f353
        *(int32_t *)(a1 + 4) = 1;
        g2 = a2;
        *(int32_t *)a1 = a2;
    }
    // 0x1e2f360
    return g2;
}

// Address range: 0x1e2f363 - 0x1e2f3ed
int32_t function_1e2f363(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g3; // bp-16
    int32_t v2; // 0x1e2f3e6
    int32_t result; // 0x1e2f3ea
    if (a1 == 0) {
        // 0x1e2f363
        result = g2;
        v2 = &v1;
    } else {
        int32_t v3 = *(int32_t *)(a1 + 8); // 0x1e2f36f
        int32_t v4 = a1 + 16; // 0x1e2f372
        g3 = v4;
        int32_t v5 = a1 + 12; // 0x1e2f39c
        g4 = v5;
        int32_t v6 = a1 + 24; // 0x1e2f39f
        g6 = v6;
        int32_t v7; // 0x1e2f3b5
        if (v3 == 0) {
            int32_t v8 = a1 + 20; // 0x1e2f3a2
            g8 = v8;
            int32_t v9 = *(int32_t *)v4; // 0x1e2f3a7
            int32_t v10 = *(int32_t *)v5; // 0x1e2f3aa
            int32_t v11 = *(int32_t *)v6; // 0x1e2f3ac
            int32_t v12 = *(int32_t *)v8; // 0x1e2f3ae
            v7 = function_1e27576((int32_t)&g549, v12, v11, v10, v9, 0);
        } else {
            int32_t v13 = *(int32_t *)v4; // 0x1e2f37f
            g5 = v13;
            int32_t v14 = a1 + 20; // 0x1e2f382
            g8 = v14;
            int32_t v15 = *(int32_t *)v5; // 0x1e2f385
            g2 = v15;
            int32_t v16 = *(int32_t *)v6; // 0x1e2f38c
            int32_t v17 = *(int32_t *)v14; // 0x1e2f38e
            int32_t v18 = function_1e275f0((int32_t)&g549, v17, v16, v15, v13, v3, v15, v13); // 0x1e2f395
            v7 = v18;
        }
        // 0x1e2f3ba
        g2 = v7;
        if (*(int32_t *)(g9 + 24) != 0) {
            // 0x1e2f3c1
            g5 = *(int32_t *)g3;
            g7 = *(int32_t *)g4;
            *(int32_t *)(g9 - 4) = *(int32_t *)g6;
            *(int32_t *)(g9 - 8) = *(int32_t *)g8;
            *(int32_t *)(g9 - 12) = g5 + (int32_t)g553;
            int32_t v19 = g7 + (int32_t)g552; // 0x1e2f3d7
            g2 = v19;
            *(int32_t *)(g9 - 16) = v19;
            *(int32_t *)(g9 - 20) = g5;
            *(int32_t *)(g9 - 24) = g7;
            *(int32_t *)(g9 - 28) = (int32_t)&g549;
            int32_t v20 = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f3e1
            g2 = v20;
            result = v20;
            v2 = g9;
        } else {
            result = v7;
            v2 = g9;
        }
    }
    // 0x1e2f3e6
    g3 = *(int32_t *)v2;
    g6 = *(int32_t *)(v2 + 4);
    g8 = *(int32_t *)(v2 + 8);
    g4 = *(int32_t *)(v2 + 12);
    return result;
}

// Address range: 0x1e2f3ed - 0x1e2f4cc
int32_t function_1e2f3ed(int32_t a1) {
    int32_t v1 = g3; // 0x1e2f3ed
    int32_t v2 = v1; // bp-4
    g3 = &v2;
    int32_t v3; // bp-24
    int32_t v4 = &v3; // 0x1e2f3f0
    int32_t v5 = g6; // bp-36
    int32_t v6 = &v5; // 0x1e2f3f5
    int32_t v7; // 0x1e2f4c3
    if (a1 != 0) {
        int32_t * v8 = (int32_t *)(a1 + 4); // 0x1e2f403
        if (*v8 != 0) {
            int32_t * v9 = (int32_t *)a1; // 0x1e2f40c
            if (*v9 <= 0x3b9aca00) {
                int32_t * v10 = (int32_t *)(a1 + 20); // 0x1e2f418
                int32_t v11 = *v10; // 0x1e2f418
                g2 = v11;
                int32_t * v12 = (int32_t *)(a1 + 16); // 0x1e2f41b
                g5 = *v12;
                int32_t * v13 = (int32_t *)(a1 + 12); // 0x1e2f41e
                g2 = *v13 + v11;
                int32_t v14 = a1; // bp-44
                *v8 = 0;
                int32_t v15 = g2; // 0x1e2f426
                int32_t v16 = g5; // 0x1e2f429
                g2 = function_1e2f363(v14, 0, v5);
                int32_t v17 = *v9; // 0x1e2f431
                g2 = v17;
                if (v17 >= 0) {
                    // 0x1e2f437
                    g5 = v4;
                    g6 = v4;
                    function_1e3dd80(v17, &v3, 10);
                    g5 = -1;
                    g2 = 0;
                    int32_t v18 = -1; // 0x1e2f450
                    int32_t v19; // 0x1e2f452
                    while (true) {
                        if (v18 == 0) {
                            v19 = 0;
                            // break -> bb26
                            break;
                        }
                        int32_t v20 = g6; // 0x1e2f450
                        g6 = (g1 ? -1 : 1) + v20;
                        int32_t v21 = v18 - 1; // 0x1e2f450
                        g5 = v21;
                        if (*(char *)v20 == 0) {
                            v19 = v21;
                            // break -> bb26
                            break;
                        }
                        v18 = v21;
                    }
                    // bb26
                    g5 = -1 - v19;
                    int32_t v22 = -3 - v19; // 0x1e2f454
                    g6 = v22;
                    if (v22 >= 0) {
                        int32_t v23 = &v14; // 0x1e2f45f
                        while (true) {
                            // 0x1e2f45b
                            g5 = v22 - 20 + g3;
                            *(int32_t *)(v23 - 4) = g4;
                            *(int32_t *)(v23 - 8) = g4;
                            char * v24 = (char *)g5; // 0x1e2f461
                            unsigned char v25 = *v24 - 48; // 0x1e2f463
                            g2 = g2 & -256 | (int32_t)v25;
                            *v24 = v25;
                            int32_t v26 = g2; // 0x1e2f467
                            g5 = v26;
                            int32_t v27 = *(int32_t *)(a1 + 28 + 4 * v26); // 0x1e2f46a
                            g2 = v27;
                            *(int32_t *)(g9 - 4) = v27;
                            g5 = *(int32_t *)(g2 + 12);
                            *(int32_t *)(g9 - 8) = v16;
                            int32_t v28 = v15 - g5; // 0x1e2f475
                            *(int32_t *)(g9 - 12) = v28;
                            *(int32_t *)(g9 - 16) = *(int32_t *)(g2 + 16);
                            *(int32_t *)(g9 - 20) = g5;
                            *(int32_t *)(g9 - 24) = (int32_t)&g549;
                            int32_t v29; // 0x1e2f493
                            if (g196 == g4) {
                                // 0x1e2f493
                                v29 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                            } else {
                                int32_t v30 = function_1e2766e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f48c
                                v29 = v30;
                            }
                            // 0x1e2f498
                            g2 = v29;
                            int32_t v31 = g6 - 1; // 0x1e2f498
                            g6 = v31;
                            if (v31 < 0) {
                                // break -> 0x1e2f49b
                                break;
                            }
                            // 0x1e2f498
                            v23 = g9;
                            v22 = v31;
                            v15 = v28;
                        }
                    }
                }
                // 0x1e2f49b
                g5 = *v12;
                g7 = *v13;
                *(int32_t *)(g9 - 4) = *(int32_t *)(a1 + 24);
                *(int32_t *)(g9 - 8) = *v10;
                *(int32_t *)(g9 - 12) = g5 + (int32_t)g553;
                int32_t v32 = g7 + (int32_t)g552; // 0x1e2f4b4
                g2 = v32;
                *(int32_t *)(g9 - 16) = v32;
                *(int32_t *)(g9 - 20) = g5;
                *(int32_t *)(g9 - 24) = g7;
                *(int32_t *)(g9 - 28) = (int32_t)&g549;
                int32_t v33 = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f4be
                g2 = v33;
                v7 = g9;
            } else {
                v2 = v1;
                v7 = v6;
            }
        } else {
            v2 = v1;
            v7 = v6;
        }
    } else {
        v2 = v1;
        v7 = v6;
    }
    // 0x1e2f4c3
    g6 = *(int32_t *)v7;
    g8 = *(int32_t *)(v7 + 4);
    g4 = *(int32_t *)(v7 + 8);
    g3 = v2;
    return g2;
}

// Address range: 0x1e2f4cc - 0x1e2f4d2
int32_t function_1e2f4cc(void) {
    // 0x1e2f4cc
    g2 = 1;
    return 1;
}

// Address range: 0x1e2f4d2 - 0x1e2f4d3
int32_t function_1e2f4d2(void) {
    // 0x1e2f4d2
    return g2;
}

// Address range: 0x1e2f4d3 - 0x1e2f517
int32_t function_1e2f4d3(void) {
    // 0x1e2f4d3
    if (g560 == NULL) {
        // 0x1e2f515
        return g2;
    }
    // 0x1e2f4dd
    g8 = 0;
    int32_t v1 = 0; // 0x1e2f4e4
    int32_t result; // 0x1e2f4fb
    while (true) {
        int32_t v2 = (int32_t)g560; // 0x1e2f4df
        g2 = v2;
        int32_t v3 = *(int32_t *)(v1 + 8 + v2); // 0x1e2f4e4
        g2 = v3;
        int32_t v4; // 0x1e2f500
        if (v3 != 0) {
            // 0x1e2f4ec
            *(int32_t *)(g9 - 4) = v3;
            function_1e273a9((int32_t)&g708);
            int32_t v5 = (int32_t)g560; // 0x1e2f4f2
            g2 = v5;
            *(int32_t *)(g9 - 4) = *(int32_t *)(v5 + 8 + g8);
            result = function_1e25401((int32_t)&g708);
            g2 = result;
            v4 = g8;
        } else {
            result = 0;
            v4 = v1;
        }
        int32_t v6 = v4 + 4; // 0x1e2f500
        g8 = v6;
        if (v6 >= 512) {
            // break -> 0x1e2f50b
            break;
        }
        // 0x1e2f500
        v1 = v6;
    }
    // 0x1e2f50b
    g560 = NULL;
    // 0x1e2f515
    return result;
}

// Address range: 0x1e2f517 - 0x1e2f73e
int32_t function_1e2f517(char * lpName) {
    int32_t v1 = g3; // bp-4
    g3 = &v1;
    int32_t hModule = *(int32_t *)&g660; // 0x1e2f52512
    int32_t * hResInfo = FindResourceA((int32_t *)hModule, lpName, (char *)10); // 0x1e2f52b
    int32_t result = (int32_t)hResInfo; // 0x1e2f52b
    g2 = result;
    int32_t v2; // 0x1e2f540
    if (hResInfo == NULL) {
        goto lab_0x1e2f735;
    } else {
        int32_t * hResData = LoadResource((int32_t *)*(int32_t *)&g660, hResInfo); // 0x1e2f540
        v2 = (int32_t)hResData;
        g2 = v2;
        if (hResData == NULL) {
            result = v2;
            goto lab_0x1e2f735;
        } else {
            int32_t * v3 = LockResource(hResData); // 0x1e2f552
            int32_t v4 = (int32_t)v3; // 0x1e2f552
            int32_t v5 = v4 + 134; // 0x1e2f560
            g2 = v5;
            int32_t v6 = function_1e25371(520); // 0x1e2f568
            g2 = v6;
            g560 = (char *)v6;
            if (v6 == 0) {
                goto lab_0x1e2f72c;
            } else {
                // 0x1e2f57a
                g2 = 0;
                int32_t v7 = v6 + 8; // 0x1e2f582
                g5 = 128;
                __asm_rep_stosd_memset((char *)v7, 0, 128);
                g6 = (g1 ? -512 : 512) + v7;
                g5 = 0;
                g7 = 0;
                int32_t v8 = v4 + 6; // 0x1e2f593
                int32_t v9 = 0; // 0x1e2f598
                int32_t v10; // 0x1e2f593
                for (int32_t i = 0; i < 128; i++) {
                    // 0x1e2f590
                    g2 = v4;
                    v10 = (int32_t)*(char *)(i + v8);
                    g2 = v10;
                    if (v10 > v9) {
                        // 0x1e2f59c
                        g7 = v10;
                    } else {
                        v10 = v9;
                    }
                    // 0x1e2f59e
                    g5 = i + 1;
                    v9 = v10;
                }
                int32_t v11 = v4 + 4; // 0x1e2f5aa
                g2 = v11;
                int16_t * v12 = (int16_t *)v11; // 0x1e2f5ad
                int32_t v13 = (int32_t)*v12 * v10 + 4; // 0x1e2f5b6
                g2 = v13;
                int32_t v14 = function_1e25371(v13); // 0x1e2f5ba
                g2 = v14;
                if (v14 == 0) {
                    int32_t v15 = (int32_t)g560; // 0x1e2f717
                    g2 = v15;
                    g2 = function_1e25401(v15);
                    g560 = NULL;
                    goto lab_0x1e2f72c;
                } else {
                    // 0x1e2f5ca
                    g2 = v4;
                    char * v16 = g560; // 0x1e2f5cd
                    g5 = (int32_t)v16;
                    int32_t v17 = (int32_t)*(int16_t *)v3; // 0x1e2f5d3
                    g7 = v17;
                    *(int32_t *)v16 = v17;
                    int32_t v18 = (int32_t)*(int16_t *)v11; // 0x1e2f5db
                    g2 = v18;
                    int32_t v19 = (int32_t)g560; // 0x1e2f5de
                    g5 = v19;
                    g4 = 0;
                    *(int32_t *)(v19 + 4) = v18;
                    int32_t v20 = v14 + 3; // 0x1e2f658
                    int32_t v21 = v14 + 4; // 0x1e2f689
                    int32_t v22 = g4; // 0x1e2f5ef
                    int32_t v23 = 0;
                    while (true) {
                        // 0x1e2f5ec
                        g2 = v4;
                        int32_t v24 = v22 + v8; // 0x1e2f5ef
                        g5 = v24;
                        char * v25 = (char *)v24; // 0x1e2f5f3
                        int32_t v26;
                        if (*v25 != 0) {
                            // 0x1e2f5ff
                            *(int32_t *)(g9 - 4) = 37;
                            int32_t v27 = function_1e25371(v24); // 0x1e2f601
                            g5 = v23;
                            int32_t v28 = v23 + 8; // 0x1e2f60f
                            *(int32_t *)(v28 + (int32_t)g560) = v27;
                            int32_t v29 = (int32_t)g560; // 0x1e2f613
                            g2 = v29;
                            int32_t v30 = *(int32_t *)(v29 + 8 + g5); // 0x1e2f618
                            g7 = v30;
                            if (v30 == 0) {
                                // break -> 0x1e2f708
                                break;
                            }
                            // 0x1e2f624
                            *(int32_t *)(g9 - 4) = 0;
                            g5 = v11;
                            int32_t v31 = (int32_t)*v12; // 0x1e2f629
                            g2 = v31;
                            *(int32_t *)(g9 - 8) = v31;
                            g8 = v24;
                            int32_t v32 = (int32_t)*v25; // 0x1e2f630
                            g5 = v32;
                            *(int32_t *)(g9 - 12) = v32;
                            *(int32_t *)(g9 - 16) = v30;
                            int32_t v33 = function_1e27346((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f635
                            g2 = v33;
                            if (v33 != 0) {
                                int32_t v34 = (int32_t)g560; // 0x1e2f6ec
                                g2 = v34;
                                *(int32_t *)(g9 - 4) = *(int32_t *)(v34 + 8 + 4 * g4);
                                g2 = function_1e25401((int32_t)&g708);
                                int32_t v35 = (int32_t)g560; // 0x1e2f6fa
                                g5 = v35;
                                *(int32_t *)(v35 + 8 + 4 * g4) = 0;
                                goto lab_0x1e2f708;
                            }
                            // 0x1e2f642
                            g2 = v24;
                            g5 = v11;
                            int32_t v36 = (int32_t)*v12; // 0x1e2f651
                            g2 = v36;
                            int32_t v37 = v36 * (int32_t)*v25 + 1; // 0x1e2f657
                            int32_t v38 = v37 / 4; // 0x1e2f65d
                            g5 = v38;
                            __asm_rep_movsd_memcpy((char *)v20, (char *)v5, v38);
                            int32_t v39 = (g1 ? -4 : 4) * v38 + v20; // 0x1e2f660
                            char * v40 = (char *)v39; // 0x1e2f660
                            int32_t v41 = v37 & 3; // 0x1e2f664
                            g5 = v41;
                            __asm_rep_movsb_memcpy(v40, v40, v41);
                            g6 = (g1 ? -1 : 1) * v41 + v39;
                            g2 = v24;
                            g5 = v23;
                            int32_t v42 = v37 + v5; // 0x1e2f675
                            int32_t v43 = (int32_t)*v25; // 0x1e2f678
                            g7 = v43;
                            g2 = v14;
                            int32_t v44 = *(int32_t *)(v28 + (int32_t)g560); // 0x1e2f67e
                            g2 = v21;
                            int32_t v45 = *(int32_t *)(v44 + 20); // 0x1e2f68c
                            int32_t v46 = -v45; // 0x1e2f68f
                            g5 = 1;
                            int32_t v47 = (1 - *(int32_t *)(v44 + 16)) * v46; // 0x1e2f69c
                            g5 = v47;
                            int32_t v48 = *(int32_t *)(v44 + 8) + v47; // 0x1e2f6a0
                            g5 = v48;
                            g8 = v11;
                            if (*v12 > 0) {
                                int32_t v49 = v43 / 4; // 0x1e2f6b6
                                g5 = v49;
                                __asm_rep_movsd_memcpy((char *)v48, (char *)v21, v49);
                                int32_t v50 = (g1 ? -4 : 4) * v49 + v48; // 0x1e2f6b9
                                char * v51 = (char *)v50; // 0x1e2f6b9
                                int32_t v52 = g7 & 3; // 0x1e2f6bd
                                g5 = v52;
                                __asm_rep_movsb_memcpy(v51, v51, v52);
                                g6 = (g1 ? -1 : 1) * v52 + v50;
                                g5 = v46;
                                int32_t v53 = g7; // 0x1e2f6c5
                                int32_t v54 = v53 + g2; // 0x1e2f6c5
                                g2 = v54;
                                g8 = v11;
                                int32_t v55 = 1; // 0x1e2f6ca
                                int32_t v56 = (int32_t)*v12; // 0x1e2f6d0
                                g5 = v56;
                                v26 = v42;
                                while (v56 > v55) {
                                    // 0x1e2f6af
                                    v21 = v54;
                                    v48 -= v45;
                                    v49 = v53 / 4;
                                    g5 = v49;
                                    __asm_rep_movsd_memcpy((char *)v48, (char *)v21, v49);
                                    v50 = (g1 ? -4 : 4) * v49 + v48;
                                    v51 = (char *)v50;
                                    v52 = g7 & 3;
                                    g5 = v52;
                                    __asm_rep_movsb_memcpy(v51, v51, v52);
                                    g6 = (g1 ? -1 : 1) * v52 + v50;
                                    g5 = v46;
                                    v53 = g7;
                                    v54 = v53 + g2;
                                    g2 = v54;
                                    g8 = v11;
                                    v55++;
                                    v56 = (int32_t)*v12;
                                    g5 = v56;
                                    v26 = v42;
                                }
                            } else {
                                v26 = v42;
                            }
                        } else {
                            v26 = v5;
                        }
                        int32_t v57 = v23 + 4; // 0x1e2f6d8
                        int32_t v58 = g4 + 1; // 0x1e2f6dc
                        g4 = v58;
                        if (v57 >= 512) {
                            // break -> 0x1e2f708
                            break;
                        }
                        v5 = v26;
                        v22 = v58;
                        v23 = v57;
                    }
                    goto lab_0x1e2f708;
                }
            }
        }
    }
  lab_0x1e2f735:
    // 0x1e2f735
    g6 = *(int32_t *)g9;
    g8 = *(int32_t *)(g9 + 4);
    g3 = v1;
    return result;
  lab_0x1e2f72c:
    // 0x1e2f72c
    *(int32_t *)(g9 - 4) = v2;
    int32_t v59 = FreeResource(&g708); // 0x1e2f72f
    g2 = v59;
    result = v59;
    goto lab_0x1e2f735;
  lab_0x1e2f708:
    // 0x1e2f708
    if (g4 != 128) {
        // 0x1e2f710
        g2 = function_1e2f4d3();
    }
    goto lab_0x1e2f72c;
}

// Address range: 0x1e2f73e - 0x1e2f7c0
int32_t function_1e2f73e(int32_t a1, uint32_t a2) {
    int32_t v1 = g6; // 0x1e2f742
    int32_t v2 = 1; // bp-16
    g6 = a2;
    function_1e29f8c(a1, a2, 1, v1);
    g5 = 0;
    *(int32_t *)g8 = (int32_t)&g57;
    *(int32_t *)(g8 + 42) = g5;
    *(int32_t *)(g8 + 46) = g5;
    *(int32_t *)(g8 + 50) = g5;
    *(int32_t *)(g8 + 54) = g5;
    g2 = g196;
    *(int32_t *)(g8 + 62) = g196;
    *(int32_t *)(g8 + 66) = (int32_t)g560;
    *(int32_t *)(g8 + 70) = g5;
    *(int32_t *)(g8 + 74) = g5;
    *(int32_t *)(g8 + 58) = g5;
    if (a2 >= 1) {
        // 0x1e2f787
        g2 = &v2;
        int32_t v3 = function_1e39996(a2, 1500, &v2); // 0x1e2f792
        g2 = v3;
        int32_t v4 = (int32_t)*(int16_t *)v3; // 0x1e2f797
        g5 = v4;
        g2 = v3 + 2;
        *(int32_t *)(g8 + 42) = v4;
        int32_t v5 = g2; // 0x1e2f7a0
        g2 = v5 + 2;
        *(int32_t *)(g8 + 46) = (int32_t)*(int16_t *)v5;
        int32_t v6 = (int32_t)*(int16_t *)g2; // 0x1e2f7a9
        g5 = v6;
        *(int32_t *)(g8 + 50) = v6;
        *(int32_t *)(g8 + 54) = (int32_t)*(int16_t *)(g2 + 2);
    }
    // 0x1e2f7b6
    g2 = g8;
    g6 = *(int32_t *)g9;
    return g8;
}

// Address range: 0x1e2f7c0 - 0x1e2f7de
int32_t function_1e2f7c0(char a1) {
    // 0x1e2f7c0
    g8 = g5;
    int32_t v1; // esi
    g2 = function_1e2f7de(v1);
    if ((a1 & 1) != 0) {
        // 0x1e2f7cf
        g2 = function_1e3df60(g8);
    }
    // 0x1e2f7d8
    g2 = g8;
    return g8;
}

// Address range: 0x1e2f7de - 0x1e2f83c
int32_t function_1e2f7de(int32_t a1) {
    int32_t v1 = g5; // 0x1e2f7e2
    int32_t v2 = *(int32_t *)(v1 + 58); // 0x1e2f7e2
    g2 = v2;
    *(int32_t *)v1 = (int32_t)&g57;
    int32_t v3 = g5; // 0x1e2f7eb
    g6 = v3;
    int32_t v4; // 0x1e2f803
    if (v2 != 0) {
        int32_t v5; // 0x1e2f7fc
        if (v2 != -1) {
            // 0x1e2f7f6
            g2 = function_1e32771(v2);
            v5 = g6;
        } else {
            v5 = v3;
        }
        // 0x1e2f7fc
        *(int32_t *)(v5 + 58) = 0;
        v4 = g6;
    } else {
        v4 = v3;
    }
    int32_t v6 = v4 + 70; // 0x1e2f803
    g4 = v6;
    int32_t v7 = *(int32_t *)v6; // 0x1e2f806
    int32_t v8; // 0x1e2f830
    if (v7 != 0) {
        while (true) {
            // 0x1e2f80b
            g3 = v7;
            int32_t v9 = *(int32_t *)v7; // 0x1e2f80f
            g8 = v9;
            int32_t v10; // 0x1e2f82a
            if (v7 != 0) {
                int32_t v11 = *(int32_t *)(v7 + 4); // 0x1e2f814
                g2 = v11;
                if (v11 != 0) {
                    // 0x1e2f81b
                    *(int32_t *)(g9 - 4) = v11;
                    g2 = function_1e25401((int32_t)&g708);
                }
                // 0x1e2f821
                *(int32_t *)(g9 - 4) = v7;
                g2 = function_1e3df60((int32_t)&g708);
                v10 = g4;
            } else {
                v10 = v6;
            }
            // 0x1e2f82a
            *(int32_t *)v10 = v9;
            if (v9 == 0) {
                // break -> 0x1e2f830
                break;
            }
            int32_t v12 = g4;
            v7 = *(int32_t *)v12;
            v6 = v12;
        }
        // 0x1e2f830
        v8 = g6;
    } else {
        v8 = v4;
    }
    // 0x1e2f830
    g5 = v8;
    int32_t result = function_1e2a201(); // 0x1e2f832
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return result;
}

// Address range: 0x1e2f83c - 0x1e2f8ff
int32_t function_1e2f83c(void) {
    int32_t v1 = g5; // 0x1e2f842
    g8 = v1;
    int32_t v2 = *(int32_t *)(v1 + 62); // 0x1e2f845
    g5 = v2;
    int32_t v3 = v1 + 46; // 0x1e2f848
    g3 = v3;
    int32_t v4; // 0x1e2f887
    if (v2 == 0) {
        int32_t v5 = v1 + 42; // 0x1e2f870
        g4 = v5;
        int32_t v6 = v1 + 54; // 0x1e2f873
        g6 = v6;
        int32_t v7 = *(int32_t *)v3; // 0x1e2f878
        int32_t v8 = *(int32_t *)v5; // 0x1e2f87b
        int32_t v9 = *(int32_t *)v6; // 0x1e2f87d
        int32_t v10 = *(int32_t *)(v1 + 50); // 0x1e2f87f
        v4 = function_1e27576((int32_t)&g549, v10, v9, v8, v7, 0);
    } else {
        int32_t v11 = *(int32_t *)v3; // 0x1e2f84f
        g2 = v11;
        int32_t v12 = v1 + 42; // 0x1e2f852
        g4 = v12;
        int32_t v13 = v1 + 54; // 0x1e2f855
        g6 = v13;
        int32_t v14 = *(int32_t *)v12; // 0x1e2f859
        int32_t v15 = *(int32_t *)v13; // 0x1e2f85f
        int32_t v16 = *(int32_t *)(v1 + 50); // 0x1e2f861
        int32_t v17 = function_1e275f0((int32_t)&g549, v16, v15, v14, v11, v2, v14, v11); // 0x1e2f869
        v4 = v17;
    }
    // 0x1e2f88c
    g2 = v4;
    g7 = *(int32_t *)g3;
    g5 = *(int32_t *)g4;
    *(int32_t *)(g9 - 4) = *(int32_t *)g6;
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 50);
    *(int32_t *)(g9 - 12) = g7 + (int32_t)g553;
    int32_t v18 = g5 + (int32_t)g552; // 0x1e2f8a3
    g2 = v18;
    *(int32_t *)(g9 - 16) = v18;
    *(int32_t *)(g9 - 20) = g7;
    *(int32_t *)(g9 - 24) = g5;
    *(int32_t *)(g9 - 28) = (int32_t)&g549;
    int32_t v19 = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f8ad
    g2 = v19;
    int32_t v20 = g8; // 0x1e2f8b2
    int32_t v21 = *(int32_t *)(v20 + 58); // 0x1e2f8b2
    g2 = v21;
    int32_t v22; // 0x1e2f8cb
    if (v21 != 0) {
        int32_t v23; // 0x1e2f8c4
        if (v21 != -1) {
            // 0x1e2f8be
            *(int32_t *)(g9 - 4) = v21;
            g2 = function_1e32771((int32_t)&g708);
            v23 = g8;
        } else {
            v23 = v20;
        }
        // 0x1e2f8c4
        *(int32_t *)(v23 + 58) = 0;
        v22 = g8;
    } else {
        v22 = v20;
    }
    int32_t v24 = v22 + 70; // 0x1e2f8cb
    g8 = v24;
    int32_t v25 = *(int32_t *)v24; // 0x1e2f8ce
    if (v25 != 0) {
        while (true) {
            int32_t v26 = *(int32_t *)v25; // 0x1e2f8d7
            g6 = v26;
            int32_t v27; // 0x1e2f8f1
            if (v25 != 0) {
                int32_t v28 = *(int32_t *)(v25 + 4); // 0x1e2f8db
                g2 = v28;
                if (v28 != 0) {
                    // 0x1e2f8e2
                    *(int32_t *)(g9 - 4) = v28;
                    g2 = function_1e25401((int32_t)&g708);
                }
                // 0x1e2f8e8
                *(int32_t *)(g9 - 4) = v25;
                g2 = function_1e3df60((int32_t)&g708);
                v27 = g8;
            } else {
                v27 = v24;
            }
            // 0x1e2f8f1
            *(int32_t *)v27 = v26;
            if (v26 == 0) {
                // break -> 0x1e2f8f7
                break;
            }
            int32_t v29 = g8;
            v25 = *(int32_t *)v29;
            v24 = v29;
        }
    }
    // 0x1e2f8f7
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return g2;
}

// Address range: 0x1e2f8ff - 0x1e2fb84
int32_t function_1e2f8ff(void) {
    int32_t v1 = g5; // 0x1e2f907
    int32_t v2 = *(int32_t *)(v1 + 62); // 0x1e2f907
    g8 = v1;
    int32_t v3; // 0x1e2f941
    if (v2 == 0) {
        int32_t v4 = *(int32_t *)(v1 + 46); // 0x1e2f930
        int32_t v5 = *(int32_t *)(v1 + 42); // 0x1e2f933
        int32_t v6 = *(int32_t *)(v1 + 54); // 0x1e2f936
        int32_t v7 = *(int32_t *)(v1 + 50); // 0x1e2f939
        v3 = function_1e27576((int32_t)&g549, v7, v6, v5, v4, 0);
    } else {
        int32_t v8 = *(int32_t *)(v1 + 46); // 0x1e2f911
        g5 = v8;
        int32_t v9 = *(int32_t *)(v1 + 42); // 0x1e2f914
        g2 = v9;
        int32_t v10 = *(int32_t *)(v1 + 54); // 0x1e2f91c
        int32_t v11 = *(int32_t *)(v1 + 50); // 0x1e2f91f
        int32_t v12 = function_1e275f0((int32_t)&g549, v11, v10, v9, v8, v2, v9, v8); // 0x1e2f927
        v3 = v12;
    }
    // 0x1e2f946
    g2 = v3;
    int32_t v13 = g8; // 0x1e2f946
    int32_t v14 = *(int32_t *)(v13 + 70); // 0x1e2f946
    int32_t v15; // 0x1e2f992
    int32_t v16; // 0x1e2f998
    if (v14 == 0) {
        goto lab_0x1e2fb55_2;
    } else {
        float80_t v17; // 0x1e2f97e
        while (true) {
          lab_0x1e2f950:
            // 0x1e2f950
            g6 = v14;
            if (*(int32_t *)(v14 + 8) != -0x40800000) {
                int32_t v18 = *(int32_t *)(v14 + 12) - (int32_t)g204; // 0x1e2f972
                g2 = v18;
                v17 = 0.001L * (float80_t)v18;
                g684 = v17;
                uint32_t v19 = (int32_t)__asm_fnstsw(g10); // 0x1e2f98d
                g2 = g2 & -0x10000 | v19;
                if ((v19 / 256 & 1) == 0) {
                    // break -> 0x1e2f9c5
                    break;
                }
                // 0x1e2f992
                v15 = *(int32_t *)v14;
                g4 = v15;
                if (v14 == 0) {
                    goto lab_0x1e2f9ae;
                } else {
                    // 0x1e2f998
                    v16 = *(int32_t *)(v14 + 4);
                    g2 = v16;
                    if (v16 == 0) {
                        goto lab_0x1e2f9a5;
                    } else {
                        goto lab_0x1e2f99f;
                    }
                }
            } else {
                int32_t v20 = *(int32_t *)v14; // 0x1e2f95c
                g4 = v20;
                if (v20 == 0) {
                    // 0x1e2f9bc
                    *(int32_t *)(v13 + 58) = -1;
                    goto lab_0x1e2f9e3;
                }
                if (v14 == 0) {
                    v15 = v20;
                    goto lab_0x1e2f9ae;
                } else {
                    int32_t v21 = *(int32_t *)(v14 + 4); // 0x1e2f966
                    g2 = v21;
                    if (v21 == 0) {
                        goto lab_0x1e2f9a5;
                    } else {
                        v16 = v21;
                        goto lab_0x1e2f99f;
                    }
                }
            }
        }
        // 0x1e2f9c5
        g2 = 0x3e800000;
        *(int32_t *)(g9 - 4) = 0x1e2fb84;
        *(int32_t *)(g9 - 8) = g8;
        int32_t v22 = g2; // 0x1e2f9d0
        int32_t v23 = (char *)(int32_t)(float32_t)v17 < (char *)v22 ? v22 : (int32_t)(float32_t)v17;
        *(int32_t *)(g9 - 12) = v23;
        int32_t v24 = function_1e325d2((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2f9db
        g2 = v24;
        *(int32_t *)(g8 + 58) = v24;
        goto lab_0x1e2f9e3;
    }
  lab_0x1e2fb55_2:
    // 0x1e2fb55
    g5 = *(int32_t *)(v13 + 46);
    g7 = *(int32_t *)(v13 + 42);
    *(int32_t *)(g9 - 4) = *(int32_t *)(v13 + 54);
    *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 50);
    *(int32_t *)(g9 - 12) = g5 + (int32_t)g553;
    int32_t v25 = g7 + (int32_t)g552; // 0x1e2fb6e
    g2 = v25;
    *(int32_t *)(g9 - 16) = v25;
    *(int32_t *)(g9 - 20) = g5;
    *(int32_t *)(g9 - 24) = g7;
    *(int32_t *)(g9 - 28) = (int32_t)&g549;
    int32_t result = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fb78
    // 0x1e2fb7d
    g2 = result;
    g8 = *(int32_t *)(g9 + 4);
    return result;
  lab_0x1e2fad0:;
    // 0x1e2fad0
    int32_t v26; // 0x1e2fad0
    int32_t v27 = *(int32_t *)(v26 + 42); // 0x1e2fad0
    g2 = v27;
    char * v28; // 0x1e2fa72
    uint32_t v29 = (int32_t)v28; // 0x1e2fad3
    int32_t v30; // 0x1e2fb29
    int32_t v31; // 0x1e2fb43
    int32_t v32; // 0x1e2fb4c
    int32_t v33; // 0x1e2fa43
    int32_t v34; // 0x1e2fb29
    if (v29 > v32) {
        int32_t v35 = v32; // 0x1e2fae2
        int32_t v36 = v26; // 0x1e2fadd
        int32_t v37 = v27;
        while (true) {
            // 0x1e2fadb
            g5 = 0;
            int32_t v38 = *(int32_t *)(v36 + 66); // 0x1e2fadd
            g2 = v38;
            int32_t v39 = v35 + 1; // 0x1e2fae2
            g6 = v39;
            int32_t v40 = (int32_t)*(char *)v35 & 127; // 0x1e2fae3
            g5 = v40;
            int32_t v41 = *(int32_t *)(v38 + 8 + 4 * v40); // 0x1e2fae6
            int32_t v42;
            int32_t v43; // 0x1e2fb19
            int32_t v44; // 0x1e2fb2936
            int32_t v45; // 0x1e2fb24
            if (v41 != 0) {
                // 0x1e2faee
                *(int32_t *)(g9 - 4) = 0;
                *(int32_t *)(g9 - 8) = 0;
                *(int32_t *)(g9 - 12) = v41;
                *(int32_t *)(g9 - 16) = v33;
                *(int32_t *)(g9 - 20) = v37;
                *(int32_t *)(g9 - 24) = *(int32_t *)(v41 + 16);
                int32_t * v46 = (int32_t *)(v41 + 12); // 0x1e2fb03
                *(int32_t *)(g9 - 28) = *v46;
                *(int32_t *)(g9 - 32) = (int32_t)&g549;
                int32_t v47; // 0x1e2fb14
                if (g196 == 0) {
                    // 0x1e2fb14
                    v47 = function_1e275f0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
                } else {
                    int32_t v48 = function_1e2766e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fb0d
                    v47 = v48;
                }
                // 0x1e2fb19
                g2 = v47;
                v43 = g8;
                int32_t v49 = *(int32_t *)(v43 + 66); // 0x1e2fb19
                g2 = v49;
                int32_t v50 = *(int32_t *)v49; // 0x1e2fb1c
                g2 = v50;
                int32_t v51 = *v46 + v50; // 0x1e2fb1e
                g2 = v51;
                v44 = v51;
                v45 = g6;
                v42 = v51 + v37;
            } else {
                v44 = v38;
                v45 = v39;
                v43 = v36;
                v42 = v37;
            }
            if (v29 <= v45) {
                v31 = v43;
                v34 = v44;
                v30 = v45;
                // break -> 0x1e2fb29
                break;
            }
            v35 = v45;
            v36 = v43;
            v37 = v42;
        }
    } else {
        v31 = v26;
        v34 = v27;
        v30 = v32;
    }
    unsigned char v52 = *(char *)v30 & 127; // 0x1e2fb2b
    int32_t v53 = (int32_t)v52 | v34 & -256; // 0x1e2fb2b
    g2 = v53;
    int32_t v54; // 0x1e2fb42
    int32_t v55; // 0x1e2fb3a
    if (v52 == 32) {
        int32_t v56 = v53; // 0x1e2fb32
        int32_t v57 = v30; // 0x1e2fb31
        while (true) {
            int32_t v58 = v57 + 1; // 0x1e2fb31
            unsigned char v59 = *(char *)v58 & 127; // 0x1e2fb34
            int32_t v60 = (int32_t)v59 | v56 & -256; // 0x1e2fb34
            g2 = v60;
            if (v59 != 32) {
                v55 = v60;
                v54 = v58;
                // break -> 0x1e2fb3a
                break;
            }
            v56 = v60;
            v57 = v58;
        }
    } else {
        v55 = v53;
        v54 = v30;
    }
    unsigned char v61 = *(char *)v54 & 127; // 0x1e2fb3c
    g2 = (int32_t)v61 | v55 & -256;
    if (v61 == 10) {
        // 0x1e2fb42
        v32 = v54 + 1;
    } else {
        v32 = v54;
    }
    int32_t v62 = *(int32_t *)(v31 + 66); // 0x1e2fb43
    g2 = v62;
    int32_t v63 = *(int32_t *)(v62 + 4); // 0x1e2fb46
    g5 = v63;
    if (*(char *)v32 == 0) {
        v13 = v31;
        // break -> 0x1e2fb55
        goto lab_0x1e2fb55_2;
    }
    v26 = v31;
    v33 += v63;
    goto lab_0x1e2fa55;
  lab_0x1e2f9ae:
    // 0x1e2f9ae
    *(int32_t *)(g8 + 70) = v15;
    int32_t v91 = g8; // 0x1e2f9b1
    int32_t v92 = *(int32_t *)(v91 + 70); // 0x1e2f9b1
    if (v92 == 0) {
        v13 = v91;
        goto lab_0x1e2fb55_2;
    }
    v14 = v92;
    v13 = v91;
    goto lab_0x1e2f950;
  lab_0x1e2f9a5:
    // 0x1e2f9a5
    *(int32_t *)(g9 - 4) = v14;
    g2 = function_1e3df60((int32_t)&g708);
    v15 = g4;
    goto lab_0x1e2f9ae;
  lab_0x1e2f99f:
    // 0x1e2f99f
    *(int32_t *)(g9 - 4) = v16;
    g2 = function_1e25401((int32_t)&g708);
    goto lab_0x1e2f9a5;
  lab_0x1e2f9e3:;
    int32_t v93 = g8; // 0x1e2f9e3
    int32_t v82; // edx
    if (*(int32_t *)(v93 + 66) == 0) {
        // 0x1e2f9e9
        v82 = *(int32_t *)(v93 + 46);
        g5 = *(int32_t *)(v93 + 42);
        *(int32_t *)(g9 - 4) = *(int32_t *)(v93 + 54);
        *(int32_t *)(g9 - 8) = *(int32_t *)(g8 + 50);
        *(int32_t *)(g9 - 12) = v82 + (int32_t)g553;
        int32_t v94 = g5 + (int32_t)g552; // 0x1e2fa02
        g2 = v94;
        *(int32_t *)(g9 - 16) = v94;
        *(int32_t *)(g9 - 20) = v82;
        *(int32_t *)(g9 - 24) = g5;
        *(int32_t *)(g9 - 28) = (int32_t)&g549;
        int32_t v95 = function_1e2748e((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fa0c
        g2 = v95;
        *(int32_t *)(g9 - 4) = 255;
        int32_t v96 = g8; // 0x1e2fa16
        g2 = *(int32_t *)(v96 + 46);
        *(int32_t *)(g9 - 8) = *(int32_t *)(v96 + 54);
        g2 += (int32_t)g553;
        int32_t v97 = g8; // 0x1e2fa22
        g5 = *(int32_t *)(v97 + 70);
        *(int32_t *)(g9 - 12) = *(int32_t *)(v97 + 50);
        *(int32_t *)(g9 - 16) = g2;
        int32_t v98 = (int32_t)g552 + *(int32_t *)(g8 + 42); // 0x1e2fa2c
        g2 = v98;
        *(int32_t *)(g9 - 20) = v98;
        *(int32_t *)(g9 - 24) = *(int32_t *)(g5 + 4);
        int32_t v99 = function_1e257ff((int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e2fa36
        result = v99;
        // 0x1e2fb7d
        g2 = result;
        g8 = *(int32_t *)(g9 + 4);
        return result;
    }
    int32_t v100 = *(int32_t *)(v93 + 70); // 0x1e2fa40
    g2 = v100;
    v33 = *(int32_t *)(v93 + 46);
    g5 = v33;
    int32_t v101 = *(int32_t *)(v100 + 4); // 0x1e2fa49
    if (*(char *)v101 != 0) {
        v32 = v101;
        v26 = v93;
        while (true) {
          lab_0x1e2fa55:;
            int32_t v64 = *(int32_t *)(v26 + 54); // 0x1e2fa58
            g5 = v64;
            int32_t v65 = *(int32_t *)(v26 + 46) + v64; // 0x1e2fa5b
            g5 = v65;
            int32_t v66 = *(int32_t *)(*(int32_t *)(v26 + 66) + 4) + v33; // 0x1e2fa61
            g2 = v66;
            if (v66 > v65) {
                v13 = v26;
                // break -> 0x1e2fb55
                break;
            }
            // 0x1e2fa6c
            g2 = 0;
            g5 = 0;
            v28 = (char *)v32;
            int32_t v67 = (int32_t)*v28 & 127; // 0x1e2fa7a
            g5 = v67;
            if (v67 != 0) {
                // 0x1e2fa7f
                while (true) {
                    int32_t v68; // 0x1e2fa87
                    if (v68 == 10) {
                        // break -> 0x1e2fac3
                        break;
                    }
                    // 0x1e2fa84
                    int32_t * v69; // 0x1e2fa55
                    int32_t v70 = *v69; // 0x1e2fa84
                    int32_t v71 = *(int32_t *)(4 * v68 + 8 + v70); // 0x1e2fa87
                    g5 = v71;
                    char * v72;
                    char * v73;
                    int32_t v74; // 0x1e2fa9a
                    int32_t v75; // 0x1e2fa9a22
                    int32_t v76; // 0x1e2fac926
                    int32_t v77; // 0x1e2fac928
                    if (v71 != 0) {
                        int32_t v78 = *(int32_t *)(v71 + 12); // 0x1e2fa8f
                        g5 = v78;
                        int32_t v79 = *(int32_t *)v70; // 0x1e2fa95
                        int32_t v80 = v79 + v78; // 0x1e2fa97
                        g5 = v80;
                        int32_t v81 = v80 + v74; // 0x1e2fa9a
                        v82 = v81;
                        int32_t * v83; // 0x1e2fa9c
                        int32_t v84 = *v83; // 0x1e2fa9c
                        if (v84 < v81) {
                            // 0x1e2fac9
                            goto lab_0x1e2fad0;
                        }
                        int32_t v85 = (int32_t)v72; // 0x1e2faa1
                        char v86 = *v72; // 0x1e2faa4
                        int32_t v87; // 0x1e2fac924
                        if (v86 == 32) {
                            // 0x1e2faa9
                            g2 = v85;
                            v87 = v85;
                        } else {
                            v87 = v77;
                        }
                        char * v88 = (char *)(v85 + 1); // 0x1e2faab
                        v76 = v87;
                        v75 = v81;
                        v73 = v88;
                    } else {
                        v76 = v77;
                        v75 = v74;
                        v73 = v72;
                    }
                    // 0x1e2faae
                    g5 = 0;
                    unsigned char v89 = *v73; // 0x1e2fab3
                    int32_t v90 = (int32_t)v89 & 127; // 0x1e2fab5
                    g5 = v90;
                    if (v90 == 0) {
                        // break -> 0x1e2fac3
                        break;
                    }
                    v77 = v76;
                    v74 = v75;
                    v68 = v90;
                    v72 = v73;
                }
            }
            goto lab_0x1e2fad0;
        }
    } else {
        v13 = v93;
    }
    goto lab_0x1e2fb55_2;
}

// Address range: 0x1e2fb84 - 0x1e2fbc7
int32_t function_1e2fb84(int32_t a1) {
    // 0x1e2fb84
    g5 = 0;
    g8 = a1;
    int32_t v1 = *(int32_t *)(a1 + 70); // 0x1e2fb8d
    *(int32_t *)(a1 + 58) = 0;
    if (v1 == 0) {
        // 0x1e2fbc1
        return g2;
    }
    // 0x1e2fb97
    g6 = *(int32_t *)v1;
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x1e2fb99
    g2 = v2;
    if (v2 != 0) {
        // 0x1e2fba0
        g2 = function_1e25401(v2);
    }
    // 0x1e2fba6
    *(int32_t *)(g9 - 4) = v1;
    g2 = function_1e3df60((int32_t)&g708);
    int32_t v3 = g8; // 0x1e2fbaf
    g5 = v3;
    *(int32_t *)(v3 + 70) = g6;
    g2 = function_1e2f8ff();
    *(int32_t *)(g9 - 4) = g8;
    *(int32_t *)(g9 - 8) = 60;
    int32_t result = function_1e328b9((int32_t)&g708, (int32_t)&g708); // 0x1e2fbbc
    g2 = result;
    // 0x1e2fbc1
    return result;
}

