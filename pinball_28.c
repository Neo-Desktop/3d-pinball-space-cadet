
// Address range: 0x1e44310 - 0x1e44333
int32_t function_1e44310(uint32_t a1, uint32_t a2, int32_t a3) {
    // 0x1e44310
    g2 = 0;
    g5 = a1;
    uint32_t v1 = a2 + a1; // 0x1e4431b
    if (a2 == 0 || v1 > a1) {
        if (a1 == 0 || v1 > a2) {
            goto lab_0x1e4432b;
        } else {
            // 0x1e44326
            g2 = 1;
            goto lab_0x1e4432b;
        }
    } else {
        // 0x1e44326
        g2 = 1;
        goto lab_0x1e4432b;
    }
  lab_0x1e4432b:
    // 0x1e4432b
    g5 = a3;
    *(int32_t *)a3 = v1;
    return g2;
}

// Address range: 0x1e44340 - 0x1e443a6
int32_t function_1e44340(int32_t a1, int32_t a2) {
    int32_t v1 = g8; // 0x1e44340
    g8 = a1;
    int32_t v2 = *(int32_t *)a2; // 0x1e4434b
    g2 = v2;
    int32_t v3 = *(int32_t *)a1; // 0x1e4434e
    g5 = v3;
    int32_t v4 = function_1e44310(v3, v2, a1); // 0x1e44351
    g2 = v4;
    if (v4 != 0) {
        int32_t v5 = g8 + 4; // 0x1e4435d
        g2 = v5;
        int32_t v6 = *(int32_t *)v5; // 0x1e44363
        g5 = v6;
        int32_t v7 = function_1e44310(v6, 1, v5); // 0x1e44366
        g2 = v7;
        if (v7 != 0) {
            int32_t * v8 = (int32_t *)(g8 + 8); // 0x1e44372
            *v8 = *v8 + 1;
        }
    }
    int32_t v9 = g8 + 4; // 0x1e44375
    g2 = v9;
    int32_t v10 = *(int32_t *)(a2 + 4); // 0x1e44378
    g5 = v10;
    int32_t v11 = function_1e44310(*(int32_t *)v9, v10, v9); // 0x1e44380
    g2 = v11;
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(g8 + 8); // 0x1e4438c
        *v12 = *v12 + 1;
    }
    int32_t v13 = g8 + 8; // 0x1e4438f
    int32_t v14 = *(int32_t *)v13; // 0x1e4438f
    g5 = v14;
    g8 = v13;
    int32_t v15 = *(int32_t *)(a2 + 8); // 0x1e44396
    g2 = v15;
    int32_t result = function_1e44310(v14, v15, v13); // 0x1e4439b
    g2 = result;
    g8 = v1;
    return result;
}

// Address range: 0x1e443b0 - 0x1e443ee
int32_t function_1e443b0(int32_t a1) {
    int32_t * v1 = (int32_t *)a1; // 0x1e443b6
    int32_t v2 = *v1; // 0x1e443b6
    g2 = v2;
    uint32_t v3 = *(int32_t *)(a1 + 4); // 0x1e443ba
    g5 = v3;
    *v1 = 2 * v2;
    int32_t v4 = v2 >> 31 | 2 * g5; // 0x1e443dc
    g2 = v4;
    *(int32_t *)(a1 + 4) = v4;
    int32_t * v5 = (int32_t *)(a1 + 8); // 0x1e443e2
    int32_t v6 = v3 / 0x80000000 | 2 * *v5; // 0x1e443e7
    g2 = v6;
    *v5 = v6;
    return g2;
}

// Address range: 0x1e443f0 - 0x1e44426
int32_t function_1e443f0(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x1e443f6
    uint32_t v2 = *v1; // 0x1e443f6
    g5 = v2;
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x1e443f9
    g2 = v3;
    int32_t v4 = v2 / 2; // 0x1e44400
    g5 = v4;
    *v1 = v4;
    int32_t v5 = 0x80000000 * v2 | g2 / 2; // 0x1e44415
    g2 = v5;
    *(int32_t *)(a1 + 4) = v5;
    int32_t * v6 = (int32_t *)a1; // 0x1e4441a
    int32_t v7 = 0x80000000 * v3 | *v6 / 2; // 0x1e4441f
    g2 = v7;
    *v6 = v7;
    return g2;
}

// Address range: 0x1e44430 - 0x1e44518
int32_t function_1e44430(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1e44430
    g8 = a3;
    g6 = g6 & -0x10000 | 0x404e;
    *(int32_t *)a3 = 0;
    *(int32_t *)(g8 + 4) = 0;
    *(int32_t *)(g8 + 8) = 0;
    if (a2 != 0) {
        int32_t v1 = g9; // 0x1e44468
        g5 = v1 + 16;
        int32_t v2 = g8; // 0x1e44463
        g2 = *(int32_t *)v2;
        *(int32_t *)(v1 - 4) = v2;
        *(int32_t *)g5 = g2;
        g2 = *(int32_t *)(g8 + 8);
        *(int32_t *)(g5 + 4) = *(int32_t *)(v2 + 4);
        *(int32_t *)(g5 + 8) = g2;
        g2 = function_1e443b0((int32_t)&g708);
        a2--;
        a1++;
        *(int32_t *)g9 = g8;
        g2 = function_1e443b0((int32_t)&g708);
        int32_t v3 = g9 + 20; // 0x1e44484
        g5 = v3;
        *(int32_t *)g9 = v3;
        *(int32_t *)(g9 - 4) = g8;
        g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
        *(int32_t *)(g9 + 4) = g8;
        g2 = function_1e443b0((int32_t)&g708);
        g5 = (int32_t)*(char *)(a1 - 1);
        *(int32_t *)(g9 + 24) = 0;
        *(int32_t *)(g9 + 28) = 0;
        *(int32_t *)(g9 + 20) = g5;
        int32_t v4 = g9 + 20; // 0x1e444b3
        g5 = v4;
        *(int32_t *)g9 = v4;
        *(int32_t *)(g9 - 4) = g8;
        g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
        while (a2 != 0) {
            // 0x1e4445f
            v1 = g9 + 8;
            g5 = v1 + 16;
            v2 = g8;
            g2 = *(int32_t *)v2;
            *(int32_t *)(v1 - 4) = v2;
            *(int32_t *)g5 = g2;
            g2 = *(int32_t *)(g8 + 8);
            *(int32_t *)(g5 + 4) = *(int32_t *)(v2 + 4);
            *(int32_t *)(g5 + 8) = g2;
            g2 = function_1e443b0((int32_t)&g708);
            a2--;
            a1++;
            *(int32_t *)g9 = g8;
            g2 = function_1e443b0((int32_t)&g708);
            v3 = g9 + 20;
            g5 = v3;
            *(int32_t *)g9 = v3;
            *(int32_t *)(g9 - 4) = g8;
            g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
            *(int32_t *)(g9 + 4) = g8;
            g2 = function_1e443b0((int32_t)&g708);
            g5 = (int32_t)*(char *)(a1 - 1);
            *(int32_t *)(g9 + 24) = 0;
            *(int32_t *)(g9 + 28) = 0;
            *(int32_t *)(g9 + 20) = g5;
            v4 = g9 + 20;
            g5 = v4;
            *(int32_t *)g9 = v4;
            *(int32_t *)(g9 - 4) = g8;
            g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
        }
    }
    int32_t v5 = g8; // 0x1e444c8
    int32_t v6; // 0x1e444f5
    if (*(int32_t *)(v5 + 8) == 0) {
        int32_t v7 = v5; // 0x1e444e1
        int32_t v8 = g6; // 0x1e444ce
        g6 = v8 + 0xfff0 & 0xffff | v8 & -0x10000;
        uint32_t v9 = *(int32_t *)(v7 + 4); // 0x1e444d2
        g5 = v9;
        int32_t v10 = *(int32_t *)v7; // 0x1e444d7
        g2 = v10;
        int32_t v11 = v9 / 0x10000; // 0x1e444d9
        g5 = v11;
        *(int32_t *)(v7 + 8) = v11;
        g2 *= 0x10000;
        *(int32_t *)(g8 + 4) = 0x10000 * v9 | v10 / 0x10000;
        *(int32_t *)g8 = g2;
        while (v9 < 0x10000) {
            // 0x1e444ce
            v7 = g8;
            v8 = g6;
            g6 = v8 + 0xfff0 & 0xffff | v8 & -0x10000;
            v9 = *(int32_t *)(v7 + 4);
            g5 = v9;
            v10 = *(int32_t *)v7;
            g2 = v10;
            v11 = v9 / 0x10000;
            g5 = v11;
            *(int32_t *)(v7 + 8) = v11;
            g2 *= 0x10000;
            *(int32_t *)(g8 + 4) = 0x10000 * v9 | v10 / 0x10000;
            *(int32_t *)g8 = g2;
        }
        // 0x1e444f5
        v6 = g8;
    } else {
        v6 = v5;
    }
    // 0x1e444f5
    int32_t v12; // 0x1e4450c
    if (*(char *)(v6 + 9) > -1) {
        int32_t v13 = g6; // 0x1e444fb
        g6 = v13 + 0xffff & 0xffff | v13 & -0x10000;
        *(int32_t *)(g9 - 4) = v6;
        g2 = function_1e443b0((int32_t)&g708);
        v12 = g8;
        while (*(char *)(g8 + 9) > 255) {
            // 0x1e444fb
            v13 = g6;
            g6 = v13 + 0xffff & 0xffff | v13 & -0x10000;
            *(int32_t *)g9 = g8;
            g2 = function_1e443b0((int32_t)&g708);
            v12 = g8;
        }
    } else {
        v12 = v6;
    }
    // 0x1e4450c
    *(int16_t *)(v12 + 10) = (int16_t)g6;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    return g2;
}

// Address range: 0x1e44520 - 0x1e44b4a
int32_t function_1e44520(int32_t * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x1e44520
    int32_t v1; // bp-40
    g3 = &v1;
    g6 = 0;
    g5 = 0;
    int32_t v2 = g2; // 0x1e44564
    int32_t v3 = (int32_t)a1; // 0x1e44576
    int32_t v4; // 0x1e44585
    while (true) {
        unsigned char v5 = *(char *)v3; // 0x1e44564
        int32_t v6 = (int32_t)v5 | v2 & -256; // 0x1e44564
        g2 = v6;
        if (v5 != 32) {
            if (v5 != 9) {
                if (v5 != 10) {
                    if (v5 != 13) {
                        v4 = 0;
                        // break -> 0x1e44579
                        break;
                    }
                }
            }
        }
        // 0x1e44576
        v2 = v6;
        v3++;
    }
  lab_0x1e44579:;
    int32_t v7; // ebx
    int32_t v8; // 0x1e445fd
    int32_t v9;
    int32_t v10; // 0x1e449d5
    int32_t v11; // 0x1e449d519
    char v12; // 0x1e445fd
    char v13; // 0x1e44579
    int32_t v14; // 0x1e44579
    while (true) {
        // 0x1e44579
        v13 = *(char *)v3;
        v14 = (int32_t)v13 | g4 & -256;
        g4 = v14;
        g8 = v3 + 1;
        g703 = v4;
        switch (v4) {
            case 0: {
                if (v13 < 49) {
                    goto lab_0x1e445a0;
                } else {
                    if (v13 > 57) {
                        goto lab_0x1e445a0;
                    } else {
                        // 0x1e44596
                        g5 = 3;
                        v11 = 3;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 1: {
                // 0x1e445f5
                *(int32_t *)(g9 + 32) = 1;
                v8 = g4;
                v12 = v8;
                if (v12 < 49) {
                    goto lab_0x1e44611;
                } else {
                    if (v12 > 57) {
                        goto lab_0x1e44611;
                    } else {
                        // 0x1e44607
                        g5 = 3;
                        v11 = 3;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 2: {
                if (v13 < 49) {
                    goto lab_0x1e44674;
                } else {
                    if (v13 > 57) {
                        goto lab_0x1e44674;
                    } else {
                        // 0x1e4466a
                        g5 = 3;
                        v11 = 3;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 3: {
                // 0x1e446a6
                *(int32_t *)(g9 + 32) = 1;
                while (true) {
                    // 0x1e446ae
                    int32_t v15; // 0x1e446be
                    if (g442 > 1) {
                        // 0x1e446b7
                        *(int32_t *)(g9 - 4) = 4;
                        int32_t v16 = g4 & 255; // 0x1e446bb
                        g2 = v16;
                        *(int32_t *)(g9 - 8) = v16;
                        v15 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                    } else {
                        int32_t v17 = (int32_t)g122; // 0x1e446ca
                        g7 = v17;
                        int32_t v18 = g4 & 255; // 0x1e446d0
                        g5 = v18;
                        g2 = 0;
                        v15 = (int32_t)*(int16_t *)(2 * v18 + v17) & 4;
                    }
                    // 0x1e446db
                    g2 = v15;
                    if (v15 == 0) {
                        // break -> 0x1e44700
                        break;
                    }
                    int32_t * v19 = (int32_t *)(g9 + 20); // 0x1e446df
                    if (*v19 >= 25) {
                        int32_t v20 = g8; // 0x1e446f7
                        g4 = g4 & -256 | (int32_t)*(char *)v20;
                        g8 = v20 + 1;
                        int32_t * v21 = (int32_t *)(g9 + 28); // 0x1e446fa
                        *v21 = *v21 + 1;
                    } else {
                        int32_t v22 = g4; // 0x1e446e6
                        v7 = v22 + 208 & 255 | v22 & -256;
                        g3++;
                        g8++;
                        *v19 = *v19 + 1;
                        *(char *)(g3 - 1) = (char)v7;
                        g4 = v7 & -256 | (int32_t)*(char *)(g8 - 1);
                    }
                }
                int32_t v23 = g4; // 0x1e44700
                if (g443 != (char)v23) {
                    // 0x1e44712
                    g5 = v23 - 43;
                    g2 = 0;
                    unsigned char v24 = *(char *)(v23 + (int32_t)&g23 - 43); // 0x1e44723
                    int32_t v25 = v24; // 0x1e44723
                    g2 = v25;
                    g705 = v25;
                    switch (v24) {
                        case 0: {
                            goto lab_0x1e44730;
                        }
                        case 1: {
                            goto lab_0x1e44730;
                        }
                        case 2: {
                            // 0x1e4473b
                            g5 = 6;
                            v10 = 6;
                            goto lab_0x1e449d5;
                        }
                        case 3: {
                            // 0x1e4473b
                            g5 = 6;
                            v10 = 6;
                            goto lab_0x1e449d5;
                        }
                        default: {
                            // 0x1e449cf
                            g5 = 10;
                            v11 = 10;
                            goto lab_0x1e449d4;
                        }
                    }
                } else {
                    // 0x1e44708
                    g5 = 4;
                    v10 = 4;
                    goto lab_0x1e449d5;
                }
            }
            case 4: {
                // 0x1e44745
                *(int32_t *)(g9 + 32) = 1;
                *(int32_t *)(g9 + 48) = 1;
                if (*(int32_t *)(g9 + 20) == 0) {
                    int32_t v26 = g4; // 0x1e4475c
                    if ((char)v26 == 48) {
                        int32_t v27 = g8; // 0x1e44761
                        g4 = (int32_t)*(char *)v27 | v26 & -256;
                        g8 = v27 + 1;
                        int32_t * v28 = (int32_t *)(g9 + 28); // 0x1e44764
                        *v28 = *v28 - 1;
                        while ((char)g4 == 48) {
                            // 0x1e44761
                            v27 = g8;
                            g4 = (int32_t)*(char *)v27 | g4 & -256;
                            g8 = v27 + 1;
                            v28 = (int32_t *)(g9 + 28);
                            *v28 = *v28 - 1;
                        }
                    }
                }
                while (true) {
                    // 0x1e4476d
                    int32_t v29; // 0x1e4477d
                    if (g442 > 1) {
                        // 0x1e44776
                        *(int32_t *)(g9 - 4) = 4;
                        int32_t v30 = g4 & 255; // 0x1e4477a
                        g2 = v30;
                        *(int32_t *)(g9 - 8) = v30;
                        v29 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                    } else {
                        int32_t v31 = (int32_t)g122; // 0x1e44789
                        g7 = v31;
                        int32_t v32 = g4 & 255; // 0x1e4478f
                        g5 = v32;
                        g2 = 0;
                        v29 = (int32_t)*(int16_t *)(2 * v32 + v31) & 4;
                    }
                    // 0x1e4479a
                    g2 = v29;
                    if (v29 == 0) {
                        // break -> 0x1e447b9
                        break;
                    }
                    int32_t * v33 = (int32_t *)(g9 + 20); // 0x1e4479e
                    if (*v33 < 25) {
                        int32_t v34 = g4; // 0x1e447a5
                        g4 = v34 + 208 & 255 | v34 & -256;
                        g3++;
                        *v33 = *v33 + 1;
                        int32_t * v35 = (int32_t *)(g9 + 28); // 0x1e447ad
                        *v35 = *v35 - 1;
                        *(char *)(g3 - 1) = (char)g4;
                    }
                    int32_t v36 = g8; // 0x1e447b4
                    g4 = g4 & -256 | (int32_t)*(char *)v36;
                    g8 = v36 + 1;
                    // continue -> 0x1e4476d
                    continue;
                }
                int32_t v37 = g4; // 0x1e447b9
                g5 = v37 - 43;
                g2 = 0;
                unsigned char v38 = *(char *)(v37 + (int32_t)&g24 - 43); // 0x1e447ca
                int32_t v39 = v38; // 0x1e447ca
                g2 = v39;
                g706 = v39;
                switch (v38) {
                    case 0: {
                        goto lab_0x1e447d7;
                    }
                    case 1: {
                        goto lab_0x1e447d7;
                    }
                    case 2: {
                        // 0x1e447e2
                        g5 = 6;
                        v10 = 6;
                        goto lab_0x1e449d5;
                    }
                    case 3: {
                        // 0x1e447e2
                        g5 = 6;
                        v10 = 6;
                        goto lab_0x1e449d5;
                    }
                    default: {
                        // 0x1e449cf
                        g5 = 10;
                        v11 = 10;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 5: {
                // 0x1e447ec
                *(int32_t *)(g9 + 48) = 1;
                int32_t v40; // 0x1e44804
                if (g442 > 1) {
                    // 0x1e447fd
                    *(int32_t *)(g9 - 4) = 4;
                    int32_t v41 = g4 & 255; // 0x1e44801
                    g2 = v41;
                    *(int32_t *)(g9 - 8) = v41;
                    v40 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                } else {
                    int32_t v42 = (int32_t)g122; // 0x1e44810
                    g7 = v42;
                    int32_t v43 = g4 & 255; // 0x1e44816
                    g5 = v43;
                    g2 = 0;
                    v40 = (int32_t)*(int16_t *)(2 * v43 + v42) & 4;
                }
                // 0x1e44821
                g2 = v40;
                if (v40 == 0) {
                    // 0x1e4482f
                    g5 = 10;
                    g8 = *(int32_t *)(g9 + 24);
                    v10 = 10;
                    goto lab_0x1e449d5;
                } else {
                    // 0x1e44825
                    g5 = 4;
                    v11 = 4;
                    goto lab_0x1e449d4;
                }
            }
            case 6: {
                int32_t v44 = v3 - 1; // 0x1e4483d
                g2 = v44;
                *(int32_t *)(g9 + 24) = v44;
                v9 = g4;
                if (v13 < 49) {
                    goto lab_0x1e44858;
                } else {
                    if ((char)v9 > 57) {
                        goto lab_0x1e44858;
                    } else {
                        // 0x1e4484e
                        g5 = 9;
                        v11 = 9;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 7: {
                if (v13 < 49) {
                    goto lab_0x1e448b2;
                } else {
                    if (v13 > 57) {
                        goto lab_0x1e448b2;
                    } else {
                        // 0x1e448a8
                        g5 = 9;
                        v11 = 9;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 8: {
                // 0x1e448d2
                *(int32_t *)(g9 + 44) = 1;
                int32_t v45 = g4; // 0x1e448da
                int32_t v46; // 0x1e448f0
                if ((char)v45 == 48) {
                    int32_t v47 = g8; // 0x1e448e1
                    unsigned char v48 = *(char *)v47; // 0x1e448df
                    int32_t v49 = (int32_t)v48 | v45 & -256; // 0x1e448df
                    g4 = v49;
                    int32_t v50 = v47 + 1; // 0x1e448e1
                    g8 = v50;
                    v46 = v49;
                    while (v48 == 48) {
                        // 0x1e448df
                        v47 = v50;
                        v48 = *(char *)v47;
                        v49 = (int32_t)v48 | v49 & -256;
                        g4 = v49;
                        v50 = v47 + 1;
                        g8 = v50;
                        v46 = v49;
                    }
                } else {
                    v46 = v45;
                }
                char v51 = v46; // 0x1e448e7
                if (v51 < 49) {
                    // 0x1e449cf
                    g5 = 10;
                    v11 = 10;
                    goto lab_0x1e449d4;
                } else {
                    if (v51 > 57) {
                        // 0x1e449cf
                        g5 = 10;
                        v11 = 10;
                        goto lab_0x1e449d4;
                    } else {
                        // 0x1e448f9
                        g5 = 9;
                        v11 = 9;
                        goto lab_0x1e449d4;
                    }
                }
            }
            case 9: {
                // 0x1e44903
                *(int32_t *)(g9 + 44) = 1;
                g6 = 0;
                while (true) {
                    // 0x1e4490d
                    int32_t v52; // 0x1e4491d
                    if (g442 > 1) {
                        // 0x1e44916
                        *(int32_t *)(g9 - 4) = 4;
                        int32_t v53 = g4 & 255; // 0x1e4491a
                        g2 = v53;
                        *(int32_t *)(g9 - 8) = v53;
                        v52 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                    } else {
                        int32_t v54 = (int32_t)g122; // 0x1e44929
                        g7 = v54;
                        int32_t v55 = g4 & 255; // 0x1e4492f
                        g5 = v55;
                        g2 = 0;
                        v52 = (int32_t)*(int16_t *)(2 * v55 + v54) & 4;
                    }
                    // 0x1e4493a
                    g2 = v52;
                    if (v52 == 0) {
                        goto lab_0x1e4495a;
                    }
                    int32_t v56 = g6; // 0x1e4493e
                    g2 = 5 * v56;
                    int32_t v57 = g4; // 0x1e44941
                    g5 = v57;
                    int32_t v58 = 10 * v56 - 48 + v57; // 0x1e44944
                    g6 = v58;
                    if (v58 > 0x1450) {
                        // break -> 0x1e44955
                        break;
                    }
                    int32_t v59 = g8; // 0x1e44950
                    g4 = (int32_t)*(char *)v59 | v57 & -256;
                    g8 = v59 + 1;
                }
                // 0x1e44955
                g6 = 0x1451;
                while (true) {
                  lab_0x1e4495a:;
                    // 0x1e4495a
                    int32_t v60; // 0x1e4496a
                    if (g442 > 1) {
                        // 0x1e44963
                        *(int32_t *)(g9 - 4) = 4;
                        int32_t v61 = g4 & 255; // 0x1e44967
                        g2 = v61;
                        *(int32_t *)(g9 - 8) = v61;
                        v60 = function_1e40120((int32_t)&g708, (int32_t)&g708);
                    } else {
                        int32_t v62 = (int32_t)g122; // 0x1e44976
                        g7 = v62;
                        int32_t v63 = g4 & 255; // 0x1e4497c
                        g5 = v63;
                        g2 = 0;
                        v60 = (int32_t)*(int16_t *)(2 * v63 + v62) & 4;
                    }
                    // 0x1e44987
                    g2 = v60;
                    if (v60 == 0) {
                        // break -> 0x1e449cf
                        break;
                    }
                    int32_t v64 = g8; // 0x1e4498b
                    g4 = g4 & -256 | (int32_t)*(char *)v64;
                    g8 = v64 + 1;
                }
                // 0x1e449cf
                g5 = 10;
                v11 = 10;
                goto lab_0x1e449d4;
            }
            case 11: {
                // 0x1e44990
                if (*(int32_t *)(g9 + 128) == 0) {
                    // 0x1e449cf
                    g5 = 10;
                    v11 = 10;
                    goto lab_0x1e449d4;
                } else {
                    // 0x1e4499a
                    *(int32_t *)(g9 + 24) = v3;
                    int32_t v65 = g4; // 0x1e449a1
                    g2 = v65;
                    if (v65 == 43) {
                        // 0x1e449b9
                        g5 = 7;
                        v10 = 7;
                    } else {
                        if (v65 == 45) {
                            // 0x1e449c0
                            *(int32_t *)(g9 + 40) = -1;
                            g5 = 7;
                            v10 = 7;
                        } else {
                            // 0x1e449ae
                            g5 = 10;
                            g8 = *(int32_t *)(g9 + 24);
                            v10 = 10;
                        }
                    }
                    goto lab_0x1e449d5;
                }
            }
            default: {
                v10 = v4;
                goto lab_0x1e449d5;
            }
        }
    }
  lab_0x1e449de:;
    int32_t v66 = *(int32_t *)(g9 + 108); // 0x1e449de
    g2 = v66;
    *(int32_t *)v66 = g8;
    int32_t v67; // edi
    int32_t v68; // edx
    int32_t v69; // 0x1e44b1d
    int32_t v70; // 0x1e44ab4
    int32_t v71; // 0x1e44ab9
    if (*(int32_t *)(g9 + 32) == 0) {
        goto lab_0x1e44ac0;
    } else {
        // 0x1e449ef
        int32_t v72; // 0x1e44a0e
        if (*(int32_t *)(g9 + 20) >= 25) {
            char * v73 = (char *)(g9 + 83); // 0x1e449f6
            if (*v73 >= 5) {
                // 0x1e449fd
                *v73 = *v73 + 1;
            }
            // 0x1e44a01
            g3--;
            int32_t * v74 = (int32_t *)(g9 + 28); // 0x1e44a02
            *v74 = *v74 + 1;
            *(int32_t *)(g9 + 20) = 24;
            v72 = g9;
        } else {
            v72 = g9;
        }
        // 0x1e44a0e
        if (*(int32_t *)(v72 + 20) == 0) {
            // 0x1e44ab4
            v70 = g5 & -0x10000;
            g5 = v70;
            v67 = 0;
            v71 = g8 & -0x10000;
            v68 = 0;
            v69 = v72;
            goto lab_0x1e44ad2;
        } else {
            int32_t v75 = g3 - 1; // 0x1e44a19
            g3 = v75;
            int32_t v76; // 0x1e44a37
            if (*(char *)v75 == 0) {
                g3 = v75 - 1;
                int32_t * v77 = (int32_t *)(v72 + 20); // 0x1e44a21
                *v77 = *v77 - 1;
                int32_t * v78 = (int32_t *)(g9 + 28); // 0x1e44a25
                *v78 = *v78 + 1;
                int32_t v79 = g3; // 0x1e44a29
                v76 = g9;
                while (*(char *)v79 == 0) {
                    // 0x1e44a20
                    g3 = v79 - 1;
                    v77 = (int32_t *)(g9 + 20);
                    *v77 = *v77 - 1;
                    v78 = (int32_t *)(g9 + 28);
                    *v78 = *v78 + 1;
                    v79 = g3;
                    v76 = g9;
                }
            } else {
                v76 = v72;
            }
            int32_t v80 = v76 + 88; // 0x1e44a2f
            g2 = v80;
            g5 = *(int32_t *)(v76 + 20);
            *(int32_t *)(v76 - 4) = v80;
            *(int32_t *)(v76 - 8) = g5;
            *(int32_t *)(v76 - 12) = v76 + 60;
            int32_t v81 = function_1e44430((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e44a3e
            g2 = v81;
            int32_t v82 = g6;
            int32_t v83; // 0x1e44a4f
            if (*(int32_t *)(g9 + 52) < 0) {
                // 0x1e44a4d
                v83 = -v82;
            } else {
                v83 = v82;
            }
            int32_t v84 = *(int32_t *)(g9 + 40) + v83; // 0x1e44a4f
            g6 = v84;
            int32_t v85; // 0x1e44a5a
            if (*(int32_t *)(g9 + 56) == 0) {
                // 0x1e44a5a
                v85 = *(int32_t *)(g9 + 132) + v84;
                g6 = v85;
            } else {
                v85 = v84;
            }
            // 0x1e44a5e
            int32_t v86; // 0x1e44a65
            if (*(int32_t *)(g9 + 60) == 0) {
                // 0x1e44a65
                v86 = v85 - *(int32_t *)(g9 + 136);
                g6 = v86;
            } else {
                v86 = v85;
            }
            if (v86 > 0x1450) {
                // 0x1e44a71
                *(int32_t *)(g9 + 64) = 1;
                goto lab_0x1e44ac0;
            } else {
                if (v86 < -0x1450) {
                    // 0x1e44a83
                    *(int32_t *)(g9 + 68) = 1;
                    goto lab_0x1e44ac0;
                } else {
                    int32_t v87 = *(int32_t *)(g9 + 128); // 0x1e44a8d
                    g2 = v87;
                    g5 = g9 + 100;
                    *(int32_t *)(g9 + 8) = v87;
                    *(int32_t *)(g9 + 4) = g6;
                    *(int32_t *)g9 = g5;
                    int32_t v88 = function_1e45900((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e44a98
                    g2 = v88;
                    int32_t v89 = g5 & -0x10000 | (int32_t)*(int16_t *)(g9 + 100); // 0x1e44a9d
                    g5 = v89;
                    v68 = *(int32_t *)(g9 + 102);
                    v67 = *(int32_t *)(g9 + 106);
                    v71 = g8 & -0x10000 | (int32_t)*(int16_t *)(g9 + 110);
                    v70 = v89;
                    v69 = g9 + 12;
                    goto lab_0x1e44ad2;
                }
            }
        }
    }
  lab_0x1e449d5:
    if (v10 == 10) {
        // break -> 0x1e449de
        goto lab_0x1e449de;
    }
    // 0x1e449d5
    v4 = v10;
    v3 = g8;
    // continue -> 0x1e44579
    goto lab_0x1e44579;
  lab_0x1e445a0:
    // 0x1e445a0
    if (g443 != v13) {
        // 0x1e445b2
        g2 = v14;
        if (v14 == 43) {
            // 0x1e445c9
            *(int16_t *)(g9 + 18) = 0;
            g5 = 2;
            v10 = 2;
            goto lab_0x1e449d5;
        } else {
            if (v14 == 45) {
                // 0x1e445da
                *(int16_t *)(g9 + 18) = -0x8000;
                g5 = 2;
                v10 = 2;
                goto lab_0x1e449d5;
            } else {
                if (v14 == 48) {
                    // 0x1e445eb
                    g5 = 1;
                    v10 = 1;
                    goto lab_0x1e449d5;
                } else {
                    // 0x1e449cf
                    g5 = 10;
                    v11 = 10;
                    goto lab_0x1e449d4;
                }
            }
        }
    } else {
        // 0x1e445a8
        g5 = 5;
        v10 = 5;
        goto lab_0x1e449d5;
    }
  lab_0x1e44611:
    // 0x1e44611
    if (g443 != v12) {
        // 0x1e44623
        g5 = v8 - 43;
        g2 = 0;
        unsigned char v90 = *(char *)(v8 + (int32_t)&g22 - 43); // 0x1e44634
        int32_t v91 = v90; // 0x1e44634
        g2 = v91;
        g704 = v91;
        switch (v90) {
            case 0: {
                goto lab_0x1e44641;
            }
            case 1: {
                goto lab_0x1e44641;
            }
            case 2: {
                // 0x1e4464c
                g5 = 1;
                v10 = 1;
                goto lab_0x1e449d5;
            }
            case 3: {
                // 0x1e44656
                g5 = 6;
                v10 = 6;
                goto lab_0x1e449d5;
            }
            case 4: {
                // 0x1e44656
                g5 = 6;
                v10 = 6;
                goto lab_0x1e449d5;
            }
            default: {
                // 0x1e449cf
                g5 = 10;
                v11 = 10;
                goto lab_0x1e449d4;
            }
        }
    } else {
        // 0x1e44619
        g5 = 4;
        v10 = 4;
        goto lab_0x1e449d5;
    }
  lab_0x1e44674:
    // 0x1e44674
    if (g443 != v13) {
        // 0x1e44686
        g2 = v14;
        if (v14 == 48) {
            // 0x1e4469c
            g5 = 1;
            v10 = 1;
        } else {
            // 0x1e4468e
            g5 = 10;
            g8 = *(int32_t *)(g9 + 24);
            v10 = 10;
        }
    } else {
        // 0x1e4467c
        g5 = 5;
        v10 = 5;
    }
    goto lab_0x1e449d5;
  lab_0x1e447d7:
    // 0x1e447d7
    g8--;
    g5 = 11;
    v10 = 11;
    goto lab_0x1e449d5;
  lab_0x1e44858:
    // 0x1e44858
    g2 = v9;
    if (v9 == 43) {
        // 0x1e44878
        g5 = 7;
        v10 = 7;
    } else {
        if (v9 == 45) {
            // 0x1e44882
            *(int32_t *)(g9 + 40) = -1;
            g5 = 7;
            v10 = 7;
        } else {
            if (v9 == 48) {
                // 0x1e44894
                g5 = 8;
                v10 = 8;
            } else {
                // 0x1e4486a
                g5 = 10;
                g8 = *(int32_t *)(g9 + 24);
                v10 = 10;
            }
        }
    }
    goto lab_0x1e449d5;
  lab_0x1e448b2:
    // 0x1e448b2
    g2 = v14;
    if (v14 == 48) {
        // 0x1e448c8
        g5 = 8;
        v10 = 8;
    } else {
        // 0x1e448ba
        g5 = 10;
        g8 = *(int32_t *)(g9 + 24);
        v10 = 10;
    }
    goto lab_0x1e449d5;
  lab_0x1e44730:
    // 0x1e44730
    g8--;
    g5 = 11;
    v10 = 11;
    goto lab_0x1e449d5;
  lab_0x1e449d4:
    // 0x1e449d4
    g8--;
    v10 = v11;
    goto lab_0x1e449d5;
  lab_0x1e44641:
    // 0x1e44641
    g8--;
    g5 = 11;
    v10 = 11;
    goto lab_0x1e449d5;
  lab_0x1e44ac0:;
    int32_t v92 = g9 + 60; // 0x1e44ac0
    int16_t * v93 = (int16_t *)v92; // 0x1e44ac0
    int32_t v94 = g5 & -0x10000 | (int32_t)*v93; // 0x1e44ac0
    g5 = v94;
    int32_t * v95 = (int32_t *)v92; // 0x1e44ac5
    v68 = *v95;
    v67 = *v95;
    v71 = g8 & -0x10000 | (int32_t)*v93;
    v70 = v94;
    v69 = g9;
    goto lab_0x1e44ad2;
  lab_0x1e44ad2:
    // 0x1e44ad2
    if (*(int32_t *)(v69 + 32) != 0) {
        // 0x1e44aed
        if (*(int32_t *)(v69 + 52) == 0) {
            // 0x1e44b0c
            if (*(int32_t *)(v69 + 56) != 0) {
                // 0x1e44b13
                g5 = v70 & -0x10000;
                v67 = 0;
                v71 &= -0x10000;
                v68 = 0;
                *(int32_t *)(v69 + 36) = 1;
            }
        } else {
            // 0x1e44af4
            v71 = v71 & -0x10000 | 0x7fff;
            v67 = -0x80000000;
            g5 = v70 & -0x10000;
            v68 = 0;
            *(int32_t *)(v69 + 36) = 2;
        }
    } else {
        // 0x1e44ad9
        g5 = v70 & -0x10000;
        v67 = 0;
        v71 &= -0x10000;
        v68 = 0;
        *(int32_t *)(v69 + 36) = 4;
    }
    uint16_t v96 = *(int16_t *)(g9 + 18); // 0x1e44b25
    int32_t v97 = g2 & -0x10000; // 0x1e44b25
    g2 = v97 | (int32_t)v96;
    int32_t v98 = *(int32_t *)(g9 + 104); // 0x1e44b2a
    v7 = v98;
    g2 = (int32_t)((int16_t)v71 | v96) | v97;
    *(int32_t *)(v98 + 2) = v68;
    *(int16_t *)v7 = (int16_t)g5;
    *(int32_t *)(v7 + 6) = v67;
    *(int16_t *)(v7 + 10) = (int16_t)g2;
    int32_t result = *(int32_t *)(g9 + 36); // 0x1e44b3e
    g2 = result;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
}

// Address range: 0x1e44c70 - 0x1e4500b
int32_t function_1e44c70(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t * a6, int32_t a7) {
    // 0x1e44c70
    int32_t v1; // bp-40
    int32_t v2 = &v1; // 0x1e44c70
    char v3 = -52; // bp-24
    g6 = a7;
    uint16_t v4 = (int16_t)a4 & -0x8000; // 0x1e44cbf
    g2 = v4;
    g5 = g5 & -0x10000 | a4 & 0x7fff;
    *(char *)(a7 + 2) = v4 == 0 ? 32 : 45;
    uint32_t v5 = g5; // 0x1e44cdc
    uint16_t v6 = (int16_t)v5; // 0x1e44cdc
    if (v6 == 0) {
        // 0x1e44ce1
        if (a2 == 0) {
            // 0x1e44ce8
            if (a1 == 0) {
                // 0x1e44cef
                *(char *)(g6 + 2) = 32;
                *(int16_t *)g6 = 0;
                g2 = 1;
                *(char *)(g6 + 3) = 1;
                *(char *)(g6 + 4) = 48;
                *(char *)(g6 + 5) = 0;
                return g2;
            }
        }
    }
    // 0x1e44d11
    int32_t v7; // ebp
    int32_t v8; // 0x1e44fe5
    int32_t v9; // 0x1e44f9b
    if (v6 != 0x7fff) {
        uint32_t v10 = v5 & 0xffff; // 0x1e44e18
        int32_t v11 = 0x4d10 * v10; // 0x1e44e49
        v1 = 0;
        int32_t v12 = (v11 - 0x134312f4 + 77 * ((v5 / 256 & 255) + 2 * a2 / 0x1000000)) / -0x10000; // 0x1e44e6f
        g2 = v12;
        g5 = v2;
        g2 = function_1e45900(v2, v12, 1);
        if (v6 >= 0x3fff) {
            int32_t v13 = g8; // 0x1e44e88
            g8 = (int32_t)((int16_t)v13 + 1) | v13 & -0x10000;
            g2 = &v3;
            g5 = v2;
            g2 = function_1e45650(&v1, &v3);
        }
        // 0x1e44e9c
        *(int16_t *)g6 = (int16_t)g8;
        int32_t v14; // 0x1e44ed9
        if (((int32_t)a6 & 1) == 0) {
            // 0x1e44ed5
            g8 = a5;
            v14 = a5;
        } else {
            int32_t v15 = g8; // 0x1e44ea6
            g2 = v15;
            int32_t v16 = v15 + a5; // 0x1e44ead
            g8 = v16;
            if (v16 >= 0 != v16 != 0) {
                // 0x1e44eb3
                *(char *)(g6 + 2) = 32;
                *(int16_t *)g6 = 0;
                g2 = 1;
                *(char *)(g6 + 3) = 1;
                *(char *)(g6 + 4) = 48;
                *(char *)(g6 + 5) = 0;
                return g2;
            }
            v14 = v16;
        }
        // 0x1e44ed9
        if (v14 > 21) {
            // 0x1e44ede
            g8 = 21;
        }
        int32_t v17 = g9; // 0x1e44efc
        int32_t v18 = v17 + 16; // 0x1e44efc
        g2 = v18;
        *(int32_t *)(v17 - 4) = v18;
        int32_t v19 = function_1e443b0((int32_t)&g708); // 0x1e44f01
        g2 = v19;
        int32_t v20 = g9 + 4; // 0x1e44f06
        int32_t v21 = 7; // 0x1e44f09
        while (v21 != 0) {
            // 0x1e44efc
            v17 = v20;
            v18 = v17 + 16;
            g2 = v18;
            *(int32_t *)(v17 - 4) = v18;
            v19 = function_1e443b0((int32_t)&g708);
            g2 = v19;
            v20 = g9 + 4;
            v21--;
        }
        // 0x1e44f0c
        int32_t v22; // 0x1e44f3411
        int32_t v23; // 0x1e44f1f
        if (v10 < 0x3ffe) {
            int32_t v24 = 0x3ffe - v5 & 255; // 0x1e44f12
            if (v24 != 0) {
                int32_t v25 = v20; // 0x1e44f1a
                int32_t v26 = v25 + 16; // 0x1e44f1a
                g2 = v26;
                *(int32_t *)(v25 - 4) = v26;
                v23 = function_1e443f0((int32_t)&g708);
                g2 = v23;
                int32_t v27 = g9 + 4; // 0x1e44f24
                int32_t v28 = v24 - 1; // 0x1e44f27
                v22 = v27;
                while (v28 != 0) {
                    // 0x1e44f1a
                    v25 = v27;
                    v26 = v25 + 16;
                    g2 = v26;
                    *(int32_t *)(v25 - 4) = v26;
                    v23 = function_1e443f0((int32_t)&g708);
                    g2 = v23;
                    v27 = g9 + 4;
                    v28--;
                    v22 = v27;
                }
            } else {
                v23 = v19;
                v22 = v20;
            }
        } else {
            v23 = v19;
            v22 = v20;
        }
        int32_t v29 = g6 + 4; // 0x1e44f2a
        v7 = v29;
        int32_t v30 = g8 + 1; // 0x1e44f2d
        g8 = v30;
        int32_t v31; // 0x1e44f9a
        uint32_t v32; // 0x1e44fe5
        int32_t v33; // 0x1e44f97
        if (v30 >= 1) {
            int32_t v34 = v22; // 0x1e44f34
            int32_t v35 = v34 + 16; // 0x1e44f34
            int32_t v36 = v34 + 44; // 0x1e44f38
            g5 = v36;
            int32_t v37 = v29 + 1; // ebx
            int32_t v38 = *(int32_t *)v35; // 0x1e44f3d
            g2 = v38;
            *(int32_t *)v36 = v38;
            int32_t v39 = *(int32_t *)(v35 + 4); // 0x1e44f41
            g2 = v39;
            *(int32_t *)(g5 + 4) = v39;
            *(int32_t *)(g5 + 8) = *(int32_t *)(v35 + 8);
            int32_t v40 = g9 + 16; // 0x1e44f4d
            g5 = v40;
            *(int32_t *)(g9 - 4) = v40;
            g2 = function_1e443b0((int32_t)&g708);
            int32_t v41 = g9 + 20; // 0x1e44f57
            g5 = v41;
            *(int32_t *)g9 = v41;
            g2 = function_1e443b0((int32_t)&g708);
            int32_t v42 = g9 + 48; // 0x1e44f64
            g5 = v42;
            *(int32_t *)g9 = v42;
            *(int32_t *)(g9 - 4) = g9 + 20;
            g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
            int32_t v43 = g9 + 24; // 0x1e44f76
            g5 = v43;
            *(int32_t *)(g9 + 4) = v43;
            int32_t v44 = function_1e443b0((int32_t)&g708); // 0x1e44f7e
            g2 = v44;
            unsigned char v45 = *(char *)(g9 + 31) + 48; // 0x1e44f8a
            g2 = (int32_t)v45 | v44 & -256;
            int32_t v46 = g8 - 1; // 0x1e44f8c
            g8 = v46;
            *(char *)(v37 - 1) = v45;
            *(char *)(g9 + 27) = 0;
            while (v46 != 0) {
                // 0x1e44f34
                v34 = g9;
                v35 = v34 + 16;
                v36 = v34 + 44;
                g5 = v36;
                v37++;
                v38 = *(int32_t *)v35;
                g2 = v38;
                *(int32_t *)v36 = v38;
                v39 = *(int32_t *)(v35 + 4);
                g2 = v39;
                *(int32_t *)(g5 + 4) = v39;
                *(int32_t *)(g5 + 8) = *(int32_t *)(v35 + 8);
                v40 = g9 + 16;
                g5 = v40;
                *(int32_t *)(g9 - 4) = v40;
                g2 = function_1e443b0((int32_t)&g708);
                v41 = g9 + 20;
                g5 = v41;
                *(int32_t *)g9 = v41;
                g2 = function_1e443b0((int32_t)&g708);
                v42 = g9 + 48;
                g5 = v42;
                *(int32_t *)g9 = v42;
                *(int32_t *)(g9 - 4) = g9 + 20;
                g2 = function_1e44340((int32_t)&g708, (int32_t)&g708);
                v43 = g9 + 24;
                g5 = v43;
                *(int32_t *)(g9 + 4) = v43;
                v44 = function_1e443b0((int32_t)&g708);
                g2 = v44;
                v45 = *(char *)(g9 + 31) + 48;
                g2 = (int32_t)v45 | v44 & -256;
                v46 = g8 - 1;
                g8 = v46;
                *(char *)(v37 - 1) = v45;
                *(char *)(g9 + 27) = 0;
            }
            // 0x1e44f97
            v32 = v7;
            v31 = v37;
            v33 = g2;
        } else {
            v32 = v29;
            v31 = v29;
            v33 = v23;
        }
        unsigned char v47 = *(char *)(v31 - 1); // 0x1e44f97
        g2 = (int32_t)v47 | v33 & -256;
        v9 = v31 - 2;
        if (v47 < 53) {
            if (v9 < v32) {
                goto lab_0x1e44fe9;
            } else {
                while (true) {
                    // 0x1e44fdb
                    if (*(char *)v9 != 48) {
                        v8 = v9;
                        // break -> 0x1e44fe5
                        break;
                    }
                    int32_t v48 = v9 - 1; // 0x1e44fe0
                    if (v48 < v32) {
                        v8 = v48;
                        // break -> 0x1e44fe5
                        break;
                    }
                    v9 = v48;
                }
                // 0x1e44fe5
                if (v8 >= v32) {
                    goto lab_0x1e44fbb;
                } else {
                    goto lab_0x1e44fe9;
                }
            }
        } else {
            if (v9 < v32) {
                goto lab_0x1e44fb5;
            } else {
                while (true) {
                    // continue -> 0x1e44fa4
                }
            }
        }
    } else {
        // 0x1e44d1c
        *(int16_t *)g6 = 1;
        if (a2 != -0x80000000) {
            goto lab_0x1e44d32;
        } else {
            // 0x1e44d2b
            if (a1 == 0) {
                goto lab_0x1e44d67;
            } else {
                goto lab_0x1e44d32;
            }
        }
    }
  lab_0x1e44d32:
    // 0x1e44d32
    if ((a3 & 64) != 0) {
        goto lab_0x1e44d67;
    } else {
        // 0x1e44d39
        g2 = 0x4e532331;
        g5 = (int32_t)"1#SNAN";
        int32_t v49 = g6 + 4; // 0x1e44d43
        *(int32_t *)v49 = 0x4e532331;
        *(int16_t *)(v49 + 4) = 0x4e41;
        g5 &= -256;
        *(char *)(v49 + 6) = 0;
        *(char *)(g6 + 3) = 6;
        goto lab_0x1e44fcb;
    }
  lab_0x1e44fe9:
    // 0x1e44fe9
    *(int16_t *)g6 = 0;
    *(char *)v7 = 48;
    g2 = 1;
    g3 = *(int32_t *)g9;
    *(char *)(g6 + 2) = 32;
    *(char *)(g6 + 3) = 1;
    *(char *)(g6 + 5) = 0;
    return g2;
  lab_0x1e44fb5:;
    int16_t * v50 = (int16_t *)g6; // 0x1e44fb5
    *v50 = *v50 + 1;
    int32_t v51 = v9 + 1; // 0x1e44fb8
    goto lab_0x1e44fb9;
  lab_0x1e44d67:
    // 0x1e44d67
    if ((int16_t)g2 == 0) {
        goto lab_0x1e44da6;
    } else {
        // 0x1e44d6c
        if (a2 != -0x40000000) {
            goto lab_0x1e44da6;
        } else {
            // 0x1e44d76
            if (a1 != 0) {
                goto lab_0x1e44da6;
            } else {
                // 0x1e44d7d
                g5 = 0x4e492331;
                g2 = (int32_t)"1#IND";
                int32_t v57 = g6 + 4; // 0x1e44d88
                *(int32_t *)v57 = 0x4e492331;
                g2 = g2 & -0x10000 | 68;
                *(int16_t *)(v57 + 4) = 68;
                *(char *)(g6 + 3) = 5;
                goto lab_0x1e44fcb;
            }
        }
    }
  lab_0x1e44fbb:;
    int32_t v53 = v8 - g6; // 0x1e44fbb
    unsigned char v54 = (char)v53 - 3; // 0x1e44fbd
    g2 = (int32_t)v54 | v53 & -256;
    *(char *)(g6 + 3) = v54;
    *(char *)(g2 + 4 + g6) = 0;
    goto lab_0x1e44fcb;
  lab_0x1e44fb9:;
    char * v52 = (char *)v51; // 0x1e44fb9
    *v52 = *v52 + 1;
    v8 = v51;
    goto lab_0x1e44fbb;
  lab_0x1e44da6:
    // 0x1e44da6
    if (a2 != -0x80000000) {
        goto lab_0x1e44de0;
    } else {
        // 0x1e44db0
        if (a1 != 0) {
            goto lab_0x1e44de0;
        } else {
            // 0x1e44db7
            g5 = 0x4e492331;
            g2 = (int32_t)"1#INF";
            int32_t v56 = g6 + 4; // 0x1e44dc2
            *(int32_t *)v56 = 0x4e492331;
            g2 = g2 & -0x10000 | 70;
            *(int16_t *)(v56 + 4) = 70;
            *(char *)(g6 + 3) = 5;
            goto lab_0x1e44fcb;
        }
    }
  lab_0x1e44fcb:;
    int32_t result = *(int32_t *)(g9 + 28); // 0x1e44fcb
    g2 = result;
    g3 = *(int32_t *)g9;
    return result;
  lab_0x1e44de0:
    // 0x1e44de0
    g2 = 0x4e512331;
    int32_t v55 = g6 + 4; // 0x1e44dea
    g5 = v55;
    *(int32_t *)v55 = 0x4e512331;
    *(int16_t *)(g5 + 4) = 0x4e41;
    *(char *)(g5 + 6) = 0;
    *(char *)(g6 + 3) = 6;
    goto lab_0x1e44fcb;
}

// Address range: 0x1e45010 - 0x1e45142
int32_t function_1e45010(int32_t a1, int32_t a2) {
    // 0x1e45010
    g2 = 0x1008;
    g2 = function_1e459f0((int32_t)&g708);
    int32_t v1 = g8; // 0x1e4501b
    int32_t v2 = g6; // 0x1e4501c
    g4 = 0;
    g8 = a1;
    int32_t v3 = g3; // bp-16
    int32_t v4 = function_1e23ef0(a1, 0, 1); // 0x1e4502b
    g2 = v4;
    if (v4 != -1) {
        int32_t v5 = function_1e23ef0(g8, g4, 2); // 0x1e45044
        g2 = v5;
        if (v5 != -1) {
            // 0x1e45055
            g5 = a2;
            int32_t v6 = a2 - v5; // 0x1e4505e
            g3 = v6;
            if (v6 < 1) {
                if (v6 != 0) {
                    // 0x1e450d5
                    g2 = function_1e23ef0(g8, a2, 0);
                    int32_t hFile = function_1e23d80(g8); // 0x1e450e2
                    g2 = hFile;
                    bool v7 = SetEndOfFile((int32_t *)hFile); // 0x1e450eb
                    g2 = v7;
                    g4 = !v7;
                    if (!v7) {
                        int32_t v8 = function_1e23ad0(); // 0x1e450fb
                        g2 = v8;
                        *(int32_t *)v8 = 13;
                        int32_t v9 = function_1e23ae0(); // 0x1e45106
                        g2 = v9;
                        g6 = v9;
                        int32_t errorCode = GetLastError(); // 0x1e4510d
                        g2 = errorCode;
                        *(int32_t *)g6 = errorCode;
                    }
                }
            } else {
                // 0x1e45064
                g2 = 0;
                g5 = 1024;
                int32_t v10;
                __asm_rep_stosd_memset((char *)&v10, 0, 1024);
                g6 = (g1 ? -0x1000 : 0x1000) + (int32_t)&v10;
                g5 = 0;
                g2 = function_1e45980(g8, (int32_t)&g708);
                int32_t v11 = &v3; // 0x1e4508e
                int32_t v12 = g3; // 0x1e4508c
                int32_t v13; // 0x1e450c3
                while (true) {
                    int32_t v14;
                    int32_t v15; // 0x1e4508e
                    if (v12 < 0x1000) {
                        v14 = v12;
                        v15 = v12;
                    } else {
                        v14 = 0x1000;
                        v15 = 0x1000;
                    }
                    // 0x1e4508e
                    g2 = v14;
                    *(int32_t *)(v11 - 4) = v15;
                    int32_t v16 = v11 + 24; // 0x1e4508f
                    g2 = v16;
                    *(int32_t *)(v11 - 8) = v16;
                    *(int32_t *)(v11 - 12) = g8;
                    int32_t v17 = function_1e23710((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e45095
                    g2 = v17;
                    int32_t v18 = g9 + 12; // 0x1e4509a
                    g6 = v17;
                    if (v17 == -1) {
                        // break -> 0x1e450ac
                        break;
                    }
                    int32_t v19 = g3 - v17; // 0x1e450a4
                    g3 = v19;
                    if (v19 >= 0 != v19 != 0) {
                        v13 = v18;
                        goto lab_0x1e450c3;
                    }
                    v11 = v18;
                    v12 = v19;
                }
                int32_t v20 = function_1e23ae0(); // 0x1e450ac
                g2 = v20;
                if (*(int32_t *)v20 == 5) {
                    int32_t v21 = function_1e23ad0(); // 0x1e450b6
                    g2 = v21;
                    *(int32_t *)v21 = 13;
                }
                // 0x1e450c1
                g4 = g6;
                v13 = g9;
              lab_0x1e450c3:;
                int32_t v22 = *(int32_t *)(v13 + 20); // 0x1e450c3
                g2 = v22;
                *(int32_t *)(v13 - 4) = v22;
                *(int32_t *)(v13 - 8) = g8;
                g2 = function_1e45980((int32_t)&g708, (int32_t)&g708);
            }
            // 0x1e45115
            g2 = *(int32_t *)(g9 + 16);
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = g2;
            *(int32_t *)(g9 - 12) = g8;
            function_1e23ef0((int32_t)&g708, (int32_t)&g708, (int32_t)&g708);
            g2 = g4;
            g3 = *(int32_t *)(g9 + 12);
            g6 = *(int32_t *)(g9 + 16);
            g8 = *(int32_t *)(g9 + 20);
            return g4;
        }
    }
    // 0x1e45132
    g2 = -1;
    g3 = v3;
    g6 = v2;
    g8 = v1;
    return -1;
}

// Address range: 0x1e45150 - 0x1e45306
int32_t function_1e45150(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e45150
    g2 = a1;
    int32_t v1 = g4; // 0x1e4515d
    int32_t v2 = g8; // 0x1e4515e
    int32_t v3 = g6; // 0x1e4515f
    int32_t v4 = g3; // 0x1e45160
    if (a1 == 1) {
        // 0x1e45167
        int32_t v5; // bp-128
        g2 = &v5;
        g5 = a3;
        int32_t v6 = function_1e45440(a2, a3, &v5, 128, 0); // 0x1e45188
        g2 = v6;
        if (v6 != 0) {
            goto lab_0x1e451ea;
        } else {
            int32_t errorCode = GetLastError(); // 0x1e45194
            g2 = errorCode;
            if (errorCode != 122) {
                goto lab_0x1e45227;
            } else {
                // 0x1e451a3
                g2 = a3;
                int32_t v7 = g4; // 0x1e451aa
                int32_t v8 = function_1e45440(g6, a3, (int32_t *)v7, v7, v7); // 0x1e451af
                g2 = v8;
                g3 = v8;
                if (v8 == g4) {
                    goto lab_0x1e45227;
                } else {
                    int32_t v9 = function_1e22670(v8); // 0x1e451be
                    g2 = v9;
                    g8 = v9;
                    if (v9 == g4) {
                        goto lab_0x1e45227;
                    } else {
                        // 0x1e451cc
                        g2 = a3;
                        int32_t v10 = function_1e45440(g6, a3, (int32_t *)v9, g3, 0); // 0x1e451de
                        g2 = v10;
                        if (v10 == 0) {
                            goto lab_0x1e45227;
                        } else {
                            v6 = v10;
                            goto lab_0x1e451ea;
                        }
                    }
                }
            }
        }
      lab_0x1e451ea:
        // 0x1e451ea
        g3 = v6;
        int32_t v11 = function_1e22670(v6); // 0x1e451ed
        g2 = v11;
        g6 = a4;
        *(int32_t *)a4 = v11;
        if (v11 != 0) {
            // 0x1e45202
            g2 = function_1e230e0(v11, (char *)g8, g3);
            if (g4 != 0) {
                // 0x1e45211
                g2 = function_1e22600(g8);
            }
            // 0x1e4521a
            g2 = 0;
            g6 = v3;
            g8 = v2;
            g4 = v1;
            return 0;
        }
        goto lab_0x1e45227;
      lab_0x1e45227:;
        // 0x1e45227
        int32_t v12; // 0x1e45239
        if (g4 == 0) {
            // 0x1e45227
            v12 = g9;
        } else {
            // 0x1e4522b
            *(int32_t *)(g9 - 4) = g8;
            g2 = function_1e22600((int32_t)&g708);
            v12 = g9 + 4;
        }
        // 0x1e45234
        g2 = -1;
        g3 = *(int32_t *)v12;
        g6 = *(int32_t *)(v12 + 4);
        g8 = *(int32_t *)(v12 + 8);
        g4 = *(int32_t *)(v12 + 12);
        return -1;
    }
    // 0x1e45244
    if (a1 != 0) {
        // 0x1e452f6
        g2 = -1;
        return -1;
    }
    // 0x1e4524c
    g2 = a3;
    int32_t v13 = function_1e45310(a2, a3, (int32_t *)&g594, 4, 0, v4, v3, v2, v1); // 0x1e45265
    g2 = v13;
    if (v13 == 0) {
        // 0x1e45271
        g2 = -1;
        g6 = v3;
        g8 = v2;
        g4 = v1;
        return -1;
    }
    // 0x1e45281
    g6 = a4;
    g8 = (int32_t)&g594;
    g4 = 1;
    *(char *)a4 = 0;
    while (true) {
        unsigned char v14 = *(char *)g8; // 0x1e45295
        g2 = g2 & -256 | (int32_t)v14;
        *(char *)(g9 + 16) = v14;
        int32_t v15; // 0x1e452ac
        if (g442 > g4) {
            // 0x1e452a3
            *(int32_t *)(g9 - 4) = 4;
            g2 = 0;
            int32_t v16 = (int32_t)*(char *)(g9 + 16); // 0x1e452a7
            g2 = v16;
            *(int32_t *)(g9 - 8) = v16;
            v15 = function_1e40120((int32_t)&g708, (int32_t)&g708);
            g2 = v15;
        } else {
            int32_t v17 = (int32_t)g122; // 0x1e452b8
            g7 = v17;
            int32_t v18 = g2 & 255; // 0x1e452be
            g5 = v18;
            g2 = 0;
            int32_t v19 = (int32_t)*(int16_t *)(2 * v18 + v17) & 4; // 0x1e452c6
            g2 = v19;
            v15 = v19;
        }
        // 0x1e452c9
        if (v15 == 0) {
            // break -> 0x1e452e9
            break;
        }
        int32_t v20 = g5 & -256; // 0x1e452cd
        int32_t v21 = v20 | 10; // 0x1e452cd
        g5 = v21;
        char * v22 = (char *)g6; // 0x1e452cf
        unsigned char v23 = *v22; // 0x1e452cf
        uint16_t v24 = (int16_t)((int32_t)v23 | v15 & 0xff00) * (int16_t)v21; // 0x1e452d1
        g2 = (int32_t)v24 | v15 & -0x10000;
        int32_t v25 = g8 + 2; // 0x1e452d7
        g8 = v25;
        unsigned char v26 = *(char *)(g9 + 16) - 48 + (char)v24; // 0x1e452dc
        g5 = (int32_t)v26 | v20;
        *v22 = v26;
        if (v25 >= (int32_t)&g595) {
            // break -> 0x1e452e9
            break;
        }
    }
    // 0x1e452e9
    g2 = 0;
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return 0;
}

// Address range: 0x1e45310 - 0x1e4543e
int32_t function_1e45310(int32_t a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t result2 = g480; // 0x1e45311
    g2 = result2;
    if (result2 != 0) {
        // 0x1e45358
        g8 = *(int32_t *)0x1e4b12c;
    } else {
        // 0x1e4531d
        g8 = *(int32_t *)0x1e4b12c;
        int32_t v1 = GetLocaleInfoW(0, 1, NULL, 0); // 0x1e4532b
        g2 = v1;
        if (v1 == 0) {
            int32_t v2 = GetLocaleInfoA(0, 1, NULL, 0); // 0x1e45340
            g2 = v2;
            if (v2 == 0) {
                // 0x1e45351
                g2 = 0;
                g3 = 0;
                return 0;
            }
            // 0x1e4534a
            g2 = 2;
            result2 = 2;
        } else {
            // 0x1e45331
            g2 = 1;
            result2 = 1;
        }
    }
    // 0x1e4535e
    g480 = result2;
    if (result2 == 1) {
        int32_t v3 = *(int32_t *)(g9 + 32); // 0x1e45368
        g2 = v3;
        g5 = *(int32_t *)(g9 + 28);
        g7 = *(int32_t *)(g9 + 24);
        *(int32_t *)(g9 - 4) = v3;
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = g7;
        *(int32_t *)(g9 - 16) = *(int32_t *)(g9 + 20);
        int32_t result = GetLocaleInfoW((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e4537c
        g2 = result;
        g3 = *(int32_t *)g9;
        return result;
    }
    // 0x1e45383
    g480 = result2;
    if (result2 != 2) {
        // 0x1e45411
        g3 = *(int32_t *)g9;
        return result2;
    }
    int32_t v4 = *(int32_t *)(g9 + 36); // 0x1e45391
    g6 = v4;
    if (v4 == 0) {
        // 0x1e45399
        g6 = (int32_t)g130;
    }
    // 0x1e4539f
    g2 = *(int32_t *)(g9 + 24);
    *(int32_t *)(g9 - 4) = 0;
    g4 = *(int32_t *)(g9 + 20);
    *(int32_t *)(g9 - 8) = 0;
    *(int32_t *)(g9 - 12) = g2;
    *(int32_t *)(g9 - 16) = g4;
    int32_t v5 = GetLocaleInfoA((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e453ad
    g2 = v5;
    g3 = v5;
    if (v5 == 0) {
        // 0x1e453b9
        g2 = 0;
        g3 = *(int32_t *)g9;
        return 0;
    }
    // 0x1e453c0
    *(int32_t *)(g9 - 4) = v5;
    int32_t v6 = function_1e22670((int32_t)&g708); // 0x1e453c1
    g2 = v6;
    g8 = v6;
    if (v6 == 0) {
        // 0x1e453cf
        g2 = 0;
        g3 = *(int32_t *)(g9 + 4);
        return 0;
    }
    // 0x1e453d6
    g2 = *(int32_t *)(g9 + 28);
    *(int32_t *)g9 = v5;
    *(int32_t *)(g9 - 4) = v6;
    *(int32_t *)(g9 - 8) = g2;
    *(int32_t *)(g9 - 12) = g4;
    int32_t v7 = GetLocaleInfoA((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e453de
    g2 = v7;
    if (v7 == 0) {
        goto lab_0x1e45406;
    } else {
        int32_t v8 = *(int32_t *)(g9 + 32); // 0x1e453e8
        g2 = v8;
        int32_t * v9 = (int32_t *)(g9 - 4); // 0x1e45416
        if (v8 != 0) {
            // 0x1e45416
            *v9 = v8;
            int32_t v10 = *(int32_t *)(g9 + 28); // 0x1e45417
            g2 = v10;
            *(int32_t *)(g9 - 8) = v10;
            *(int32_t *)(g9 - 12) = -1;
            *(int32_t *)(g9 - 16) = v6;
            *(int32_t *)(g9 - 20) = 1;
            *(int32_t *)(g9 - 24) = g6;
            int32_t v11 = MultiByteToWideChar((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e45422
            g2 = v11;
            g6 = v11;
            if (v11 == 0) {
                goto lab_0x1e45406;
            } else {
                goto lab_0x1e4542e;
            }
        } else {
            // 0x1e453f0
            *v9 = 0;
            *(int32_t *)(g9 - 8) = 0;
            *(int32_t *)(g9 - 12) = -1;
            *(int32_t *)(g9 - 16) = v6;
            *(int32_t *)(g9 - 20) = 1;
            *(int32_t *)(g9 - 24) = g6;
            int32_t v12 = MultiByteToWideChar((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e453fa
            g2 = v12;
            g6 = v12;
            if (v12 != 0) {
                goto lab_0x1e4542e;
            } else {
                goto lab_0x1e45406;
            }
        }
    }
  lab_0x1e45406:
    // 0x1e45406
    *(int32_t *)(g9 - 4) = v6;
    function_1e22600((int32_t)&g708);
    g2 = 0;
    // 0x1e45411
    g3 = *(int32_t *)(g9 + 4);
    return 0;
  lab_0x1e4542e:
    // 0x1e4542e
    *(int32_t *)(g9 - 4) = v6;
    function_1e22600((int32_t)&g708);
    g2 = g6;
    g3 = *(int32_t *)(g9 + 4);
    return g6;
}

// Address range: 0x1e45440 - 0x1e4557f
int32_t function_1e45440(int32_t a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5) {
    int32_t v1 = g481; // 0x1e45441
    g2 = v1;
    if (v1 != 0) {
        // 0x1e45488
        g8 = *(int32_t *)0x1e4b124;
    } else {
        // 0x1e4544d
        g8 = *(int32_t *)0x1e4b124;
        int32_t v2 = GetLocaleInfoA(0, 1, NULL, 0); // 0x1e4545b
        g2 = v2;
        if (v2 == 0) {
            int32_t v3 = GetLocaleInfoW(0, 1, NULL, 0); // 0x1e45470
            g2 = v3;
            if (v3 == 0) {
                // 0x1e45481
                g2 = 0;
                g3 = 0;
                g6 = 1;
                g8 = 0;
                g4 = 0;
                return 0;
            }
            // 0x1e4547a
            g2 = 1;
            v1 = 1;
        } else {
            // 0x1e45461
            g2 = 2;
            v1 = 2;
        }
    }
    // 0x1e4548e
    g481 = v1;
    if (v1 == 2) {
        int32_t v4 = *(int32_t *)(g9 + 32); // 0x1e45498
        g2 = v4;
        g5 = *(int32_t *)(g9 + 28);
        g7 = *(int32_t *)(g9 + 24);
        *(int32_t *)(g9 - 4) = v4;
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = g7;
        *(int32_t *)(g9 - 16) = *(int32_t *)(g9 + 20);
        int32_t result = GetLocaleInfoA((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708); // 0x1e454ac
        g2 = result;
        g3 = *(int32_t *)g9;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        g4 = *(int32_t *)(g9 + 12);
        return result;
    }
    // 0x1e454b3
    g481 = v1;
    int32_t v5; // 0x1e4554f
    int32_t result2; // 0x1e45553
    int32_t v6; // 0x1e454f8
    if (v1 != 1) {
        result2 = v1;
        v5 = g9;
        goto lab_0x1e4554f;
    } else {
        int32_t v7 = *(int32_t *)(g9 + 36); // 0x1e454c1
        g6 = v7;
        if (v7 == 0) {
            // 0x1e454c9
            g6 = (int32_t)g130;
        }
        // 0x1e454cf
        g2 = *(int32_t *)(g9 + 24);
        *(int32_t *)(g9 - 4) = 0;
        g4 = *(int32_t *)(g9 + 20);
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = g2;
        *(int32_t *)(g9 - 16) = g4;
        int32_t v8 = GetLocaleInfoW((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e454dd
        g2 = v8;
        g3 = v8;
        if (v8 == 0) {
            // 0x1e454e9
            g2 = 0;
            g3 = *(int32_t *)g9;
            g6 = *(int32_t *)(g9 + 4);
            g8 = *(int32_t *)(g9 + 8);
            g4 = *(int32_t *)(g9 + 12);
            return 0;
        }
        int32_t v9 = 2 * v8; // 0x1e454f0
        g2 = v9;
        *(int32_t *)(g9 - 4) = v9;
        v6 = function_1e22670((int32_t)&g708);
        g2 = v6;
        g8 = v6;
        if (v6 == 0) {
            // 0x1e45506
            g2 = 0;
            g3 = *(int32_t *)(g9 + 4);
            g6 = *(int32_t *)(g9 + 8);
            g8 = *(int32_t *)(g9 + 12);
            g4 = *(int32_t *)(g9 + 16);
            return 0;
        }
        // 0x1e4550d
        g2 = *(int32_t *)(g9 + 28);
        *(int32_t *)g9 = v8;
        *(int32_t *)(g9 - 4) = v6;
        *(int32_t *)(g9 - 8) = g2;
        *(int32_t *)(g9 - 12) = g4;
        int32_t v10 = GetLocaleInfoW((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e45515
        g2 = v10;
        if (v10 == 0) {
            goto lab_0x1e45544;
        } else {
            int32_t v11 = *(int32_t *)(g9 + 32); // 0x1e4551f
            g2 = v11;
            *(int32_t *)(g9 - 4) = 0;
            *(int32_t *)(g9 - 8) = 0;
            int32_t * v12 = (int32_t *)(g9 - 12); // 0x1e45554
            if (v11 != 0) {
                // 0x1e45554
                *v12 = v11;
                int32_t v13 = *(int32_t *)(g9 + 28); // 0x1e45555
                g2 = v13;
                *(int32_t *)(g9 - 16) = v13;
                *(int32_t *)(g9 - 20) = -1;
                *(int32_t *)(g9 - 24) = v6;
                *(int32_t *)(g9 - 28) = 544;
                *(int32_t *)(g9 - 32) = g6;
                int32_t v14 = WideCharToMultiByte((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708, (bool *)&g708); // 0x1e45563
                g2 = v14;
                g6 = v14;
                if (v14 == 0) {
                    goto lab_0x1e45544;
                } else {
                    goto lab_0x1e4556f;
                }
            } else {
                // 0x1e4552b
                *v12 = 0;
                *(int32_t *)(g9 - 16) = 0;
                *(int32_t *)(g9 - 20) = -1;
                *(int32_t *)(g9 - 24) = v6;
                *(int32_t *)(g9 - 28) = 544;
                *(int32_t *)(g9 - 32) = g6;
                int32_t v15 = WideCharToMultiByte((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708, (bool *)&g708); // 0x1e45538
                g2 = v15;
                g6 = v15;
                if (v15 != 0) {
                    goto lab_0x1e4556f;
                } else {
                    goto lab_0x1e45544;
                }
            }
        }
    }
  lab_0x1e4554f:
    // 0x1e4554f
    g3 = *(int32_t *)v5;
    g6 = *(int32_t *)(v5 + 4);
    g8 = *(int32_t *)(v5 + 8);
    g4 = *(int32_t *)(v5 + 12);
    return result2;
  lab_0x1e45544:
    // 0x1e45544
    *(int32_t *)(g9 - 4) = v6;
    function_1e22600((int32_t)&g708);
    g2 = 0;
    result2 = 0;
    v5 = g9 + 4;
    goto lab_0x1e4554f;
  lab_0x1e4556f:
    // 0x1e4556f
    *(int32_t *)(g9 - 4) = v6;
    function_1e22600((int32_t)&g708);
    int32_t result3 = g6; // 0x1e45578
    g2 = result3;
    g3 = *(int32_t *)(g9 + 4);
    g6 = *(int32_t *)(g9 + 8);
    g8 = *(int32_t *)(g9 + 12);
    g4 = *(int32_t *)(g9 + 16);
    return result3;
}

// Address range: 0x1e45580 - 0x1e45647
int32_t function_1e45580(int32_t a1, int32_t a2) {
    int32_t v1; // ebp
    g3 = &v1;
    g8 = a2;
    g6 = a1;
    g2 = &g125;
    if (g126 == 0) {
        // 0x1e455a0
        g2 = (int32_t)&g125 | 255;
        int32_t v2 = (int32_t)&g125 & -256; // 0x1e4559c29
        int32_t result; // 0x1e455cc
        while (true) {
            unsigned char v3 = *(char *)a2; // 0x1e455a0
            int32_t v4 = (int32_t)v3 | v2; // 0x1e455a0
            g2 = v4;
            unsigned char v5 = *(char *)a1; // 0x1e455a3
            int32_t v6 = 256 * (int32_t)v5 | v4 & -0xff01; // 0x1e455a3
            g2 = v6;
            int32_t v7; // 0x1e455c4
            if ((char)(v6 / 256) != v3) {
                unsigned char v8 = (v3 < 91 ? 32 : 0) + v3; // 0x1e455b5
                int32_t v9 = 256 * (int32_t)v8 | v2 & -0x10000; // 0x1e455b7
                unsigned char v10 = v5 < 91 ? 32 : 0; // 0x1e455bf
                g5 = g5 & -256 | (int32_t)v10;
                unsigned char v11 = v10 + v5; // 0x1e455c4
                v7 = (int32_t)v11 | v9;
                g2 = v7;
                if (v11 != v8) {
                    char v12 = v11 < v8; // 0x1e455ca
                    unsigned char v13 = v12 + v11; // 0x1e455ca
                    char v14 = v11 < v8; // 0x1e455ca
                    bool v15 = v11 < v8 ? v11 < v14 - v12 | v13 != -1 : v11 < v13; // 0x1e455ca
                    result = (int32_t)(v14 - (char)!v15) | v9;
                    g2 = result;
                    return result;
                }
            } else {
                v7 = v6;
            }
            // 0x1e4559c
            g2 = v7;
            if ((char)v7 == 0) {
                result = v7;
                // break -> 0x1e45642
                break;
            }
            // 0x1e4559c
            a1++;
            a2++;
            v2 = v7 & -256;
        }
        // 0x1e45642
        return result;
    }
    // 0x1e455d3
    if (g671 >= 0 == (g671 != 0)) {
        // 0x1e455e6
        g2 = function_1e22490(19);
    } else {
        // 0x1e455dc
        g672++;
    }
    // 0x1e45600
    g2 = 255;
    int32_t v16 = 0; // 0x1e45603
    int32_t v17 = 0; // 0x1e455fc19
    int32_t v18; // 0x1e45629
    int32_t v19; // 0x1e45616
    int32_t v20; // 0x1e45624
    while (true) {
        int32_t v21 = g8; // 0x1e45600
        unsigned char v22 = *(char *)v21; // 0x1e45600
        int32_t v23 = (int32_t)v22 | v17; // 0x1e45600
        g2 = v23;
        g8 = v21 + 1;
        int32_t v24 = g6; // 0x1e45603
        unsigned char v25 = *(char *)v24; // 0x1e45603
        int32_t v26 = (int32_t)v25 | v16 & -256; // 0x1e45603
        g4 = v26;
        g6 = v24 + 1;
        int32_t v27; // 0x1e4561e
        if (v22 != v25) {
            // 0x1e4560a
            *(int32_t *)(g9 - 4) = v23;
            *(int32_t *)(g9 - 8) = g4;
            int32_t v28 = function_1e411a0((int32_t)&g708); // 0x1e4560c
            g2 = v28;
            g4 = v28;
            v19 = function_1e411a0((int32_t)&g708);
            g2 = v19;
            v27 = g4;
            unsigned char v29 = (char)v27; // 0x1e4561e
            unsigned char v30 = (char)v19; // 0x1e4561e
            if (v29 != v30) {
                int32_t v31 = v29 < v30; // 0x1e45622
                uint32_t v32 = v31 + v19; // 0x1e45622
                int32_t v33 = v29 < v30; // 0x1e45622
                bool v34 = v29 < v30 ? v19 < v33 - v31 | v32 != -1 : v19 < v32; // 0x1e45622
                v20 = v33 - (int32_t)!v34;
                g2 = v20;
                v18 = g9 + 4;
                goto lab_0x1e45627;
            }
        } else {
            v19 = v23;
            v27 = v26;
        }
        // 0x1e455fc
        g2 = v19;
        if ((char)v19 == 0) {
            // break -> 0x1e45627
            break;
        }
        v16 = v27;
        v17 = v19 & -256;
    }
    // 0x1e45627
    v18 = g9;
    v20 = v19;
    goto lab_0x1e45627;
  lab_0x1e45627:;
    int32_t * v35 = (int32_t *)v18; // 0x1e45629
    int32_t v36 = *v35; // 0x1e45629
    g2 = v36;
    int32_t result2; // 0x1e45640
    if (v36 != 0) {
        // 0x1e45636
        *v35 = 19;
        g2 = function_1e22500((int32_t)&g708);
        result2 = v20;
    } else {
        // 0x1e4562e
        g672--;
        result2 = v20;
    }
    // 0x1e45640
    g2 = result2;
    // 0x1e45642
    return result2;
}

