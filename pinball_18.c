
// Address range: 0x1e373e6 - 0x1e374d0
int32_t function_1e373e6(int32_t result3, int32_t result) {
    // 0x1e373e6
    g2 = result3;
    int32_t v1 = g3; // bp-16
    if (result3 == 11) {
        // 0x1e37406
        g2 = result;
        if (g209 != result) {
            // 0x1e374c9
            return result;
        }
        // 0x1e37416
        g2 = g209;
        int32_t result2; // 0x1e37444
        if (*(int32_t *)(g209 + 78) != 0) {
            // 0x1e37426
            g2 = g400;
            g5 = g325;
            *(int32_t *)(g325 + 6) = 20;
            result2 = function_1e38d82(66, 0);
            g2 = result2;
        } else {
            result2 = g209;
        }
        // 0x1e374c9
        return result2;
    }
    int32_t * v2;
    if (result3 == 66) {
        // 0x1e3744b
        g2 = g213;
        g5 = g213;
        g2 = *(int32_t *)g294;
        g5 = g294;
        int32_t v3 = *(int32_t *)g295; // 0x1e37486
        g2 = v3;
        g5 = g295;
        g3 = *(int32_t *)v3;
        g5 = g295;
        g2 = g400;
        int32_t v4 = 7; // bp-80
        g5 = g400;
        v2 = &v4;
    } else {
        if (result3 != 67) {
            // 0x1e374c9
            return result3;
        }
        v2 = &v1;
    }
    int32_t v5 = (int32_t)v2; // 0x1e374ac
    *(int32_t *)(v5 - 4) = -0x40800000;
    *(int32_t *)(v5 - 8) = 0;
    *(int32_t *)(v5 - 12) = 175;
    int32_t v6 = function_1e25763(v1); // 0x1e374b8
    g2 = v6;
    *(int32_t *)(g9 - 4) = v6;
    g5 = g392;
    int32_t result4 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e374c4
    g2 = result4;
    // 0x1e374c9
    return result4;
}

// Address range: 0x1e374d0 - 0x1e3767b
int32_t function_1e374d0(int32_t result, int32_t a2) {
    // 0x1e374d0
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e374d7
    int32_t v3 = g6; // bp-80
    int32_t v4; // 0x1e37589
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e375e7
            g2 = g249;
            *(int32_t *)(g249 + 6) = 8;
            g5 = g294;
            g6 = g295;
            g2 = *(int32_t *)g295;
            g5 = g295;
            g2 = g401;
            g4 = *(int32_t *)g401;
            g5 = g404;
            v4 = 7;
            g2 = *(int32_t *)g404;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e37672
                return result;
            }
            v5 = &v3;
        }
        int32_t v6 = (int32_t)v5; // 0x1e37645
        g2 = g249;
        *(int32_t *)(v6 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 107;
        int32_t v7 = function_1e25763(v3); // 0x1e3764c
        g2 = v7;
        *(int32_t *)(g9 - 4) = v7;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e3766d
        g2 = result2;
        // 0x1e37672
        return result2;
    }
    // 0x1e374f9
    g5 = a2;
    if (g209 != a2) {
        // 0x1e37504
        if (g210 != a2) {
            // 0x1e3750c
            if (g211 != a2) {
                // 0x1e37514
                if (g212 != a2) {
                    // 0x1e37672
                    return 63;
                }
            }
        }
    }
    int32_t v8 = g249 + 6; // 0x1e3752a
    g2 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e3752d
    int32_t v10 = *v9 - 1; // 0x1e3752f
    g7 = v10;
    *v9 = v10;
    if (v10 != 0) {
        int32_t result3 = function_1e38d82(67, g5); // 0x1e375dd
        g2 = result3;
        // 0x1e37672
        return result3;
    }
    // 0x1e37538
    g2 = g401;
    g5 = g404;
    g2 = *(int32_t *)g404;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v11 = function_1e25763(130); // 0x1e37573
    g2 = v11;
    g5 = g392;
    g2 = function_1e2fbc7(v11, (int32_t)&g708);
    v4 = function_1e32b02(0xb71b0);
    g2 = v4;
    int32_t v12 = function_1e25763(78); // 0x1e37592
    g2 = v12;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v12);
    int32_t v13 = function_1e35a8d(); // 0x1e375a6
    g2 = v13;
    int32_t result4; // 0x1e37678
    if (v13 == 0) {
        // 0x1e375b3
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v13;
    }
    // 0x1e37672
    return result4;
}

// Address range: 0x1e3767b - 0x1e377bb
int32_t function_1e3767b(int32_t result, int32_t a2) {
    // 0x1e3767b
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e37682
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-80
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e37765
            g2 = g249;
            *(int32_t *)(g249 + 6) = 3;
            g5 = g401;
            v4 = 7;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e377b4
                return result;
            }
            v5 = &v3;
        }
        int32_t v6 = (int32_t)v5; // 0x1e37784
        g2 = g249;
        *(int32_t *)(v6 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 132;
        int32_t v7 = function_1e25763(v3); // 0x1e3778e
        g2 = v7;
        *(int32_t *)(g9 - 4) = v7;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e377af
        g2 = result2;
        // 0x1e377b4
        return result2;
    }
    // 0x1e376a2
    g5 = a2;
    if (g212 != a2) {
        // 0x1e377b4
        return 63;
    }
    int32_t v8 = g249 + 6; // 0x1e376bb
    g2 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e376be
    int32_t v10 = *v9 - 1; // 0x1e376c0
    g7 = v10;
    *v9 = v10;
    if (v10 != 0) {
        // 0x1e3775b
        v4 = 67;
        int32_t result3 = function_1e38d82(67, g5); // 0x1e3775e
        g2 = result3;
        // 0x1e377b4
        return result3;
    }
    // 0x1e376c9
    g2 = g401;
    g2 = *(int32_t *)g401;
    v4 = 20;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v11 = function_1e25763(133); // 0x1e376fb
    g2 = v11;
    g5 = g392;
    g2 = function_1e2fbc7(v11, (int32_t)&g708);
    g2 = function_1e32b02(0x1312d0);
    int32_t v12 = function_1e25763(78); // 0x1e3771a
    g2 = v12;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v12);
    int32_t v13 = function_1e35a8d(); // 0x1e3772e
    g2 = v13;
    int32_t result4; // 0x1e377b8
    if (v13 == 0) {
        // 0x1e37737
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v13;
    }
    // 0x1e377b4
    return result4;
}

// Address range: 0x1e377bb - 0x1e379de
int32_t function_1e377bb(int32_t result, int32_t result3) {
    // 0x1e377bb
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e377c2
    int32_t v3 = g6; // bp-76
    int32_t v4; // bp-124
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e37941
            g6 = 7;
            *(int32_t *)(g249 + 6) = 15;
            g2 = g394;
            g5 = g394;
            g2 = *(int32_t *)g394;
            g5 = g395;
            g2 = *(int32_t *)g395;
            g5 = g400;
            g2 = *(int32_t *)g400;
            int32_t v6 = g409; // 0x1e3797e
            g5 = v6;
            g2 = *(int32_t *)v6;
            g5 = g413;
            g2 = *(int32_t *)g413;
            g5 = g414;
            v4 = g6;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e379d6
                return result;
            }
            v5 = &v3;
        }
        int32_t v7 = (int32_t)v5; // 0x1e379a6
        g2 = g249;
        *(int32_t *)(v7 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 134;
        int32_t v8 = function_1e25763(v3); // 0x1e379b0
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e379d1
        g2 = result2;
        // 0x1e379d6
        return result2;
    }
    // 0x1e377e3
    g2 = result3;
    if (g218 != result3) {
        // 0x1e377ee
        if (g219 != result3) {
            // 0x1e377f6
            if (g220 != result3) {
                // 0x1e377fe
                if (g227 != result3) {
                    // 0x1e37806
                    if (g228 != result3) {
                        // 0x1e3780e
                        if (g229 != result3) {
                            // 0x1e37816
                            if (g250 != result3) {
                                // 0x1e3781e
                                if (g251 != result3) {
                                    // 0x1e37826
                                    if (g254 != result3) {
                                        // 0x1e3782e
                                        if (g255 != result3) {
                                            // 0x1e37836
                                            if (g258 != result3) {
                                                // 0x1e379d6
                                                return result3;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int32_t v9 = g249 + 6; // 0x1e3784c
    g2 = v9;
    int32_t * v10 = (int32_t *)v9; // 0x1e3784f
    int32_t v11 = *v10 - 1; // 0x1e37851
    g5 = v11;
    *v10 = v11;
    if (v11 != 0) {
        int32_t result4 = function_1e38d82(67, 0); // 0x1e37937
        g2 = result4;
        // 0x1e379d6
        return result4;
    }
    // 0x1e3785a
    g2 = g394;
    g5 = g394;
    g2 = *(int32_t *)g394;
    g5 = g395;
    g2 = *(int32_t *)g395;
    g5 = g400;
    g2 = *(int32_t *)g400;
    int32_t v12 = g409; // 0x1e37889
    g5 = v12;
    g2 = *(int32_t *)v12;
    g5 = g413;
    g2 = *(int32_t *)g413;
    g5 = g414;
    v4 = 20;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v13 = function_1e25763(136); // 0x1e378cc
    g2 = v13;
    g5 = g392;
    g2 = function_1e2fbc7(v13, (int32_t)&g708);
    g2 = function_1e32b02(0x1312d0);
    int32_t v14 = function_1e25763(78); // 0x1e378eb
    g2 = v14;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v14);
    int32_t v15 = function_1e35a8d(); // 0x1e378ff
    g2 = v15;
    int32_t result5; // 0x1e379db
    if (v15 == 0) {
        // 0x1e3790c
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result5 = g359;
    } else {
        result5 = v15;
    }
    // 0x1e379d6
    return result5;
}

// Address range: 0x1e379de - 0x1e37b45
int32_t function_1e379de(int32_t result, int32_t a2) {
    // 0x1e379de
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e379e5
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-88
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e37ae1
            g2 = g249;
            *(int32_t *)(g249 + 6) = 3;
            g5 = g394;
            g5 = g413;
            v4 = 7;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e37b3e
                return result;
            }
            v5 = &v3;
        }
        int32_t v6 = (int32_t)v5; // 0x1e37b0e
        g2 = g249;
        *(int32_t *)(v6 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 137;
        int32_t v7 = function_1e25763(v3); // 0x1e37b18
        g2 = v7;
        *(int32_t *)(g9 - 4) = v7;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37b39
        g2 = result2;
        // 0x1e37b3e
        return result2;
    }
    // 0x1e37a05
    g5 = a2;
    if (g250 != a2) {
        // 0x1e37a10
        if (g251 != a2) {
            // 0x1e37b3e
            return 63;
        }
    }
    int32_t v8 = g249 + 6; // 0x1e37a26
    g2 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e37a29
    int32_t v10 = *v9 - 1; // 0x1e37a2b
    g7 = v10;
    *v9 = v10;
    if (v10 != 0) {
        int32_t result3 = function_1e38d82(67, g5); // 0x1e37ada
        g2 = result3;
        // 0x1e37b3e
        return result3;
    }
    // 0x1e37a34
    g2 = g394;
    g2 = *(int32_t *)g394;
    g5 = g413;
    v4 = 20;
    g2 = *(int32_t *)g413;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v11 = function_1e25763(138); // 0x1e37a73
    g2 = v11;
    g5 = g392;
    g2 = function_1e2fbc7(v11, (int32_t)&g708);
    g2 = function_1e32b02(0x1312d0);
    int32_t v12 = function_1e25763(78); // 0x1e37a92
    g2 = v12;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v12);
    int32_t v13 = function_1e35a8d(); // 0x1e37aa6
    g2 = v13;
    int32_t result4; // 0x1e37b42
    if (v13 == 0) {
        // 0x1e37ab3
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v13;
    }
    // 0x1e37b3e
    return result4;
}

// Address range: 0x1e37b45 - 0x1e37c72
int32_t function_1e37b45(int32_t result2, int32_t a2) {
    // 0x1e37b45
    g2 = result2;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e37b4c
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-104
    if (result2 == 63) {
        // 0x1e37b6c
        g5 = a2;
        if (g261 != a2) {
            // 0x1e37b77
            if (g275 != a2) {
                // 0x1e37c6b
                return 63;
            }
        }
        int32_t v5 = g249 + 6; // 0x1e37b8d
        g2 = v5;
        int32_t * v6 = (int32_t *)v5; // 0x1e37b90
        int32_t v7 = *v6 - 1; // 0x1e37b92
        g7 = v7;
        *v6 = v7;
        int32_t result; // 0x1e37bed
        if (v7 != 0) {
            // 0x1e37bea
            result = function_1e38d82(67, g5);
            g2 = result;
        } else {
            // 0x1e37b97
            g2 = g398;
            g2 = *(int32_t *)g398;
            g5 = g405;
            g2 = *(int32_t *)g405;
            g5 = g325;
            *(int32_t *)(g325 + 6) = 21;
            g2 = function_1e38d82(66, 0);
            g5 = g262;
            v4 = 20;
            int32_t v8 = *(int32_t *)g262; // 0x1e37bd4
            g2 = v8;
            g5 = g276;
            result = v8;
        }
        // 0x1e37c6b
        return result;
    }
    int32_t * v9;
    if (result2 == 66) {
        // 0x1e37bf4
        g2 = g249;
        *(int32_t *)(g249 + 6) = 75;
        g5 = g262;
        g2 = *(int32_t *)g262;
        g5 = g276;
        g2 = *(int32_t *)g276;
        g5 = g398;
        g2 = *(int32_t *)g398;
        g5 = g405;
        v4 = 7;
        v9 = &v4;
    } else {
        if (result2 != 67) {
            // 0x1e37c6b
            return result2;
        }
        v9 = &v3;
    }
    int32_t v10 = (int32_t)v9; // 0x1e37c3b
    g2 = g249;
    *(int32_t *)(v10 - 4) = *(int32_t *)(g249 + 6);
    *(int32_t *)(v10 - 8) = 0;
    *(int32_t *)(v10 - 12) = 139;
    int32_t v11 = function_1e25763(v3); // 0x1e37c45
    g2 = v11;
    *(int32_t *)(g9 - 4) = v11;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = -0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    int32_t result3 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37c66
    g2 = result3;
    // 0x1e37c6b
    return result3;
}

// Address range: 0x1e37c72 - 0x1e37d6f
int32_t function_1e37c72(int32_t result, int32_t result3) {
    // 0x1e37c72
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e37c79
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-80
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e37d3c
            g2 = g403;
            v4 = 7;
            g5 = g403;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e37d68
                return result;
            }
            v5 = &v3;
        }
        int32_t v6 = (int32_t)v5; // 0x1e37d4b
        *(int32_t *)(v6 - 4) = -0x40800000;
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 140;
        int32_t v7 = function_1e25763(v3); // 0x1e37d57
        g2 = v7;
        *(int32_t *)(g9 - 4) = v7;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37d63
        g2 = result2;
        // 0x1e37d68
        return result2;
    }
    // 0x1e37c99
    g2 = result3;
    if (g342 != result3) {
        // 0x1e37d68
        return result3;
    }
    // 0x1e37ca8
    g2 = g403;
    g5 = g403;
    v4 = 20;
    g2 = *(int32_t *)g403;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v8 = function_1e25763(141); // 0x1e37cdc
    g2 = v8;
    g5 = g392;
    g2 = function_1e2fbc7(v8, (int32_t)&g708);
    g2 = function_1e32b02(0x1ab3f0);
    int32_t v9 = function_1e25763(78); // 0x1e37cfb
    g2 = v9;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v9);
    int32_t v10 = function_1e35a8d(); // 0x1e37d0f
    g2 = v10;
    int32_t result4; // 0x1e37d6c
    if (v10 == 0) {
        // 0x1e37d18
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v10;
    }
    // 0x1e37d68
    return result4;
}

// Address range: 0x1e37d6f - 0x1e37e46
int32_t function_1e37d6f(int32_t result2, int32_t a2) {
    // 0x1e37d6f
    g2 = result2;
    int32_t v1 = g8; // bp-4
    if (result2 == 63) {
        // 0x1e37d8c
        g2 = a2;
        int32_t result; // 0x1e37dac
        if (g279 == a2) {
            // 0x1e37d9c
            g2 = g325;
            *(int32_t *)(g325 + 6) = 22;
            result = function_1e38d82(66, 0);
            g2 = result;
        } else {
            result = a2;
        }
        // 0x1e37e42
        return result;
    }
    int32_t * v2;
    if (result2 == 66) {
        // 0x1e37db6
        g2 = g283;
        g5 = g283;
        g2 = *(int32_t *)g283;
        g5 = g287;
        int32_t * v3 = (int32_t *)g287; // 0x1e37dd3
        g2 = *v3;
        g5 = g287;
        g2 = *v3;
        g5 = g341;
        g2 = *(int32_t *)g341;
        g5 = g282;
        g2 = *(int32_t *)g282;
        g5 = g286;
        int32_t * v4 = (int32_t *)g286; // 0x1e37e07
        g2 = *v4;
        g5 = g286;
        g2 = *v4;
        g5 = g286;
        int32_t v5 = 7; // bp-68
        v2 = &v5;
    } else {
        if (result2 != 67) {
            // 0x1e37e42
            return result2;
        }
        v2 = &v1;
    }
    int32_t v6 = (int32_t)v2; // 0x1e37e25
    *(int32_t *)(v6 - 4) = -0x40800000;
    *(int32_t *)(v6 - 8) = 0;
    *(int32_t *)(v6 - 12) = 142;
    int32_t v7 = function_1e25763(v1); // 0x1e37e31
    g2 = v7;
    *(int32_t *)(g9 - 4) = v7;
    g5 = g392;
    int32_t result3 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37e3d
    g2 = result3;
    // 0x1e37e42
    return result3;
}

// Address range: 0x1e37e46 - 0x1e37edc
int32_t function_1e37e46(int32_t result2, int32_t a2) {
    // 0x1e37e46
    g2 = result2;
    int32_t v1 = g8; // bp-4
    if (result2 == 63) {
        // 0x1e37e5c
        g2 = a2;
        int32_t result; // 0x1e37e78
        if (g277 == a2) {
            // 0x1e37e68
            g2 = g325;
            *(int32_t *)(g325 + 6) = 23;
            result = function_1e38d82(66, 0);
            g2 = result;
        } else {
            result = a2;
        }
        // 0x1e37ed8
        return result;
    }
    int32_t * v2;
    if (result2 == 66) {
        // 0x1e37e7f
        g2 = g280;
        g5 = g284;
        g2 = *(int32_t *)g284;
        g5 = g284;
        int32_t v3 = 7; // bp-36
        v2 = &v3;
    } else {
        if (result2 != 67) {
            // 0x1e37ed8
            return result2;
        }
        v2 = &v1;
    }
    int32_t v4 = (int32_t)v2; // 0x1e37ebb
    *(int32_t *)(v4 - 4) = -0x40800000;
    *(int32_t *)(v4 - 8) = 0;
    *(int32_t *)(v4 - 12) = 143;
    int32_t v5 = function_1e25763(v1); // 0x1e37ec7
    g2 = v5;
    *(int32_t *)(g9 - 4) = v5;
    g5 = g392;
    int32_t result3 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37ed3
    g2 = result3;
    // 0x1e37ed8
    return result3;
}

// Address range: 0x1e37edc - 0x1e37ffa
int32_t function_1e37edc(int32_t result, int32_t result3) {
    // 0x1e37edc
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e37ee3
    int32_t v3 = g8; // bp-72
    int32_t v4; // 0x1e37f49
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e37f97
            g2 = g281;
            g5 = g281;
            g2 = *(int32_t *)g281;
            g5 = g285;
            int32_t * v6 = (int32_t *)g285; // 0x1e37fb8
            g2 = *v6;
            g5 = g285;
            g2 = *v6;
            g5 = g285;
            v4 = 7;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e37ff3
                return result;
            }
            v5 = &v3;
        }
        int32_t v7 = (int32_t)v5; // 0x1e37fd6
        *(int32_t *)(v7 - 4) = -0x40800000;
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 144;
        int32_t v8 = function_1e25763(v3); // 0x1e37fe2
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e37fee
        g2 = result2;
        // 0x1e37ff3
        return result2;
    }
    // 0x1e37f03
    g2 = result3;
    if (g278 != result3) {
        // 0x1e37ff3
        return result3;
    }
    // 0x1e37f12
    g2 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    int32_t v9 = function_1e25763(145); // 0x1e37f33
    g2 = v9;
    g5 = g392;
    g2 = function_1e2fbc7(v9, (int32_t)&g708);
    v4 = function_1e32b02(0x16e360);
    g2 = v4;
    int32_t v10 = function_1e25763(78); // 0x1e37f52
    g2 = v10;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v10);
    int32_t v11 = function_1e35a8d(); // 0x1e37f66
    g2 = v11;
    int32_t result4; // 0x1e37ff7
    if (v11 == 0) {
        // 0x1e37f73
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v11;
    }
    // 0x1e37ff3
    return result4;
}

// Address range: 0x1e37ffa - 0x1e380fa
int32_t function_1e37ffa(int32_t result2, int32_t a2) {
    // 0x1e37ffa
    g2 = result2;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e38001
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-88
    if (result2 == 63) {
        // 0x1e38021
        g7 = a2;
        if (g230 != a2) {
            // 0x1e3802c
            if (g231 != a2) {
                // 0x1e38034
                if (g234 != a2) {
                    // 0x1e3803c
                    if (g235 != a2) {
                        // 0x1e380f3
                        return 63;
                    }
                }
            }
        }
        int32_t v5 = g249 + 6; // 0x1e3804d
        g2 = v5;
        int32_t * v6 = (int32_t *)v5; // 0x1e38050
        int32_t v7 = *v6 - 1; // 0x1e38052
        g5 = v7;
        *v6 = v7;
        int32_t result; // 0x1e3808f
        if (v7 != 0) {
            // 0x1e3808c
            result = function_1e38d82(67, g7);
            g2 = result;
        } else {
            // 0x1e38057
            g2 = g393;
            g5 = g415;
            v4 = 20;
            g2 = *(int32_t *)g415;
            g5 = g325;
            *(int32_t *)(g325 + 6) = 24;
            int32_t v8 = function_1e38d82(66, 0); // 0x1e38085
            g2 = v8;
            result = v8;
        }
        // 0x1e380f3
        return result;
    }
    int32_t * v9;
    if (result2 == 66) {
        // 0x1e38096
        g2 = g249;
        *(int32_t *)(g249 + 6) = 25;
        g5 = g393;
        g5 = g415;
        v4 = 7;
        v9 = &v4;
    } else {
        if (result2 != 67) {
            // 0x1e380f3
            return result2;
        }
        v9 = &v3;
    }
    int32_t v10 = (int32_t)v9; // 0x1e380c3
    g2 = g249;
    *(int32_t *)(v10 - 4) = *(int32_t *)(g249 + 6);
    *(int32_t *)(v10 - 8) = 0;
    *(int32_t *)(v10 - 12) = 146;
    int32_t v11 = function_1e25763(v3); // 0x1e380cd
    g2 = v11;
    *(int32_t *)(g9 - 4) = v11;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
    *(int32_t *)(g9 + 8) = -0x40800000;
    *(int32_t *)(g9 + 4) = v2;
    g5 = g392;
    int32_t result3 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e380ee
    g2 = result3;
    // 0x1e380f3
    return result3;
}

// Address range: 0x1e380fa - 0x1e3832f
int32_t function_1e380fa(int32_t result, int32_t result3) {
    // 0x1e380fa
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e38101
    int32_t v3 = g6; // bp-76
    int32_t v4; // bp-100
    int32_t v5; // bp-108
    if (result != 63) {
        int32_t * v6;
        if (result == 66) {
            // 0x1e382ce
            g2 = g248;
            g5 = g248;
            g5 = g273;
            g2 = *(int32_t *)g273;
            g5 = g397;
            v4 = 7;
            g5 = g410;
            v5 = 7;
            v6 = &v5;
        } else {
            if (result != 67) {
                // 0x1e38327
                return result;
            }
            v6 = &v3;
        }
        int32_t v7 = (int32_t)v6; // 0x1e3830a
        *(int32_t *)(v7 - 4) = -0x40800000;
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 147;
        int32_t v8 = function_1e25763(v3); // 0x1e38316
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e38322
        g2 = result2;
        // 0x1e38327
        return result2;
    }
    // 0x1e38122
    g2 = result3;
    int32_t v9; // bp-132
    if (g270 != result3) {
        // 0x1e381c2
        if (g246 != result3) {
            // 0x1e38327
            return result3;
        }
        int32_t v10 = function_1e25763(46); // 0x1e381d8
        g2 = v10;
        g5 = g392;
        function_1e2fbc7(v10, (int32_t)&g708);
        g2 = g355;
        v4 = 37;
        g5 = g355;
        int32_t * v11;
        if (g355 < 9) {
            // 0x1e381fc
            v5 = 37;
            g6 = g355;
            g2 = g355;
            g5 = g355;
            g2 = *(int32_t *)g355;
            int32_t v12 = *(int32_t *)(4 * g355 + (int32_t)&g421); // 0x1e38224
            g2 = function_1e25763(v12);
            v9 = g8;
            int32_t v13 = function_1e25763(173); // 0x1e38237
            g2 = v13;
            g5 = v2;
            g2 = function_1e3d7a0(v2, (char *)v13);
            v11 = &v9;
        } else {
            v11 = &v4;
        }
        // 0x1e38249
        *(int32_t *)((int32_t)v11 - 4) = 12;
        int32_t v14 = function_1e35a8d(); // 0x1e3824b
        g2 = v14;
        if (v14 == 0) {
            // 0x1e38254
            *(int32_t *)(g9 - 4) = 0x41000000;
            g2 = v2;
            *(int32_t *)(g9 - 8) = v2;
            g5 = g392;
            function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
            g2 = g360;
            g5 = g360;
            g11++;
        }
    } else {
        int32_t v15 = function_1e25763(47); // 0x1e3813b
        g2 = v15;
        g5 = g392;
        function_1e2fbc7(v15, (int32_t)&g708);
        g2 = g355;
        int32_t * v16 = (int32_t *)g355; // 0x1e38152
        g6 = *v16;
        v4 = 37;
        g5 = g355;
        if (g355 > 1) {
            // 0x1e38163
            g2 = g355;
            g6 = *v16;
            v5 = 33;
            g5 = g355;
            int32_t v17 = *v16; // 0x1e3817e
            g2 = v17;
            int32_t v18 = *(int32_t *)(4 * v17 + (int32_t)&g420); // 0x1e38184
            g2 = function_1e25763(v18);
            v9 = g8;
            int32_t v19 = function_1e25763(174); // 0x1e38197
            g2 = v19;
            g5 = v2;
            g2 = function_1e3d7a0(v2, (char *)v19);
            g5 = g392;
            g2 = function_1e2fbc7(v2, 0x41000000);
        }
    }
    // 0x1e38276
    *(int32_t *)(g9 - 4) = 0x1e8480;
    g8 = 0;
    function_1e32b02((int32_t)&g708);
    *(int32_t *)(g9 - 4) = g8;
    g2 = g248;
    *(int32_t *)(g9 - 8) = 20;
    *(int32_t *)(g9 - 12) = g8;
    g5 = g273;
    *(int32_t *)(g9 - 16) = 20;
    g2 = *(int32_t *)g5;
    *(int32_t *)(g9 - 20) = g8;
    g5 = g397;
    *(int32_t *)(g9 - 24) = 20;
    *(int32_t *)(g9 - 28) = g8;
    g5 = g410;
    *(int32_t *)(g9 - 32) = 20;
    g5 = g325;
    *(int32_t *)(g9 - 36) = g8;
    *(int32_t *)(g9 - 40) = 66;
    *(int32_t *)(g5 + 6) = 1;
    int32_t result4 = function_1e38d82((int32_t)&g708, (int32_t)&g708); // 0x1e382c7
    g2 = result4;
    // 0x1e38327
    return result4;
}

// Address range: 0x1e3832f - 0x1e38477
int32_t function_1e3832f(int32_t result, int32_t a2) {
    // 0x1e3832f
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e38336
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-96
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e38406
            g2 = g249;
            *(int32_t *)(g249 + 6) = 3;
            int32_t v6 = g396; // 0x1e38414
            g5 = v6;
            g2 = *(int32_t *)v6;
            g5 = g402;
            g2 = *(int32_t *)g402;
            g5 = g408;
            v4 = 7;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e38470
                return result;
            }
            v5 = &v3;
        }
        int32_t v7 = (int32_t)v5; // 0x1e38440
        g2 = g249;
        *(int32_t *)(v7 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 148;
        int32_t v8 = function_1e25763(v3); // 0x1e3844a
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e3846b
        g2 = result2;
        // 0x1e38470
        return result2;
    }
    // 0x1e38356
    g5 = a2;
    if (g296 != a2) {
        // 0x1e38361
        if (g297 != a2) {
            // 0x1e38369
            if (g298 != a2) {
                // 0x1e38371
                if (g303 != a2) {
                    // 0x1e38379
                    if (g304 != a2) {
                        // 0x1e38381
                        if (g305 != a2) {
                            // 0x1e38389
                            if (g307 != a2) {
                                // 0x1e38391
                                if (g308 != a2) {
                                    // 0x1e38399
                                    if (g309 != a2) {
                                        // 0x1e38470
                                        return 63;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int32_t v9 = g249 + 6; // 0x1e383af
    g2 = v9;
    int32_t * v10 = (int32_t *)v9; // 0x1e383b2
    int32_t v11 = *v10 - 1; // 0x1e383b4
    g7 = v11;
    *v10 = v11;
    int32_t result3; // 0x1e383ff
    if (v11 != 0) {
        // 0x1e383fc
        result3 = function_1e38d82(67, g5);
        g2 = result3;
    } else {
        int32_t v12 = g396; // 0x1e383ba
        g2 = v12;
        g2 = *(int32_t *)v12;
        g5 = g402;
        g2 = *(int32_t *)g402;
        g5 = g408;
        v4 = 20;
        g2 = *(int32_t *)g408;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 25;
        int32_t v13 = function_1e38d82(66, 0); // 0x1e383f5
        g2 = v13;
        result3 = v13;
    }
    // 0x1e38470
    return result3;
}

// Address range: 0x1e38477 - 0x1e38619
int32_t function_1e38477(int32_t result, int32_t a2) {
    // 0x1e38477
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e3847e
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-112
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e3858e
            g2 = g249;
            *(int32_t *)(g249 + 6) = 3;
            g5 = g399;
            g2 = *(int32_t *)g399;
            g5 = g401;
            g2 = *(int32_t *)g401;
            g5 = g403;
            g2 = *(int32_t *)g403;
            g5 = g406;
            g2 = *(int32_t *)g406;
            g5 = g412;
            v4 = 7;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e38612
                return result;
            }
            v5 = &v3;
        }
        int32_t v6 = (int32_t)v5; // 0x1e385e2
        g2 = g249;
        *(int32_t *)(v6 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v6 - 8) = 0;
        *(int32_t *)(v6 - 12) = 149;
        int32_t v7 = function_1e25763(v3); // 0x1e385ec
        g2 = v7;
        *(int32_t *)(g9 - 4) = v7;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e3860d
        g2 = result2;
        // 0x1e38612
        return result2;
    }
    // 0x1e3849e
    g5 = a2;
    if (g311 != a2) {
        // 0x1e384a9
        if (g312 != a2) {
            // 0x1e384b1
            if (g313 != a2) {
                // 0x1e384b9
                if (g318 != a2) {
                    // 0x1e384c1
                    if (g319 != a2) {
                        // 0x1e384c9
                        if (g320 != a2) {
                            // 0x1e384d1
                            if (g326 != a2) {
                                // 0x1e384d9
                                if (g327 != a2) {
                                    // 0x1e384e1
                                    if (g328 != a2) {
                                        // 0x1e384e9
                                        if (g329 != a2) {
                                            // 0x1e384f1
                                            if (g330 != a2) {
                                                // 0x1e384f9
                                                if (g331 != a2) {
                                                    // 0x1e38501
                                                    if (g340 != a2) {
                                                        // 0x1e38612
                                                        return 63;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int32_t v8 = g249 + 6; // 0x1e38517
    g2 = v8;
    int32_t * v9 = (int32_t *)v8; // 0x1e3851a
    int32_t v10 = *v9 - 1; // 0x1e3851c
    g7 = v10;
    *v9 = v10;
    int32_t result3; // 0x1e38584
    if (v10 != 0) {
        // 0x1e38581
        result3 = function_1e38d82(67, g5);
        g2 = result3;
    } else {
        // 0x1e38521
        g2 = g399;
        g2 = *(int32_t *)g399;
        g5 = g401;
        g2 = *(int32_t *)g401;
        g5 = g403;
        g2 = *(int32_t *)g403;
        g5 = g406;
        g2 = *(int32_t *)g406;
        g5 = g412;
        v4 = 20;
        g2 = *(int32_t *)g412;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 26;
        int32_t v11 = function_1e38d82(66, 0); // 0x1e38577
        g2 = v11;
        result3 = v11;
    }
    // 0x1e38612
    return result3;
}

// Address range: 0x1e38619 - 0x1e387ca
int32_t function_1e38619(int32_t result, int32_t a2) {
    // 0x1e38619
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e38620
    int32_t v3 = g6; // bp-76
    int32_t v4; // bp-124
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e3872d
            g6 = 7;
            *(int32_t *)(g249 + 6) = 5;
            g2 = g394;
            g5 = g394;
            g2 = *(int32_t *)g394;
            g5 = g395;
            g2 = *(int32_t *)g395;
            g5 = g400;
            g2 = *(int32_t *)g400;
            int32_t v6 = g409; // 0x1e3876a
            g5 = v6;
            g2 = *(int32_t *)v6;
            g5 = g413;
            g2 = *(int32_t *)g413;
            g5 = g414;
            v4 = g6;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e387c2
                return result;
            }
            v5 = &v3;
        }
        int32_t v7 = (int32_t)v5; // 0x1e38792
        g2 = g249;
        *(int32_t *)(v7 - 4) = *(int32_t *)(g249 + 6);
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 150;
        int32_t v8 = function_1e25763(v3); // 0x1e3879c
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = v2;
        *(int32_t *)(g9 - 8) = v2;
        g2 = function_1e3d7a0((int32_t)&g708, (char *)&g708);
        *(int32_t *)(g9 + 8) = -0x40800000;
        *(int32_t *)(g9 + 4) = v2;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e387bd
        g2 = result2;
        // 0x1e387c2
        return result2;
    }
    // 0x1e38641
    g5 = a2;
    if (g218 != a2) {
        // 0x1e3864c
        if (g219 != a2) {
            // 0x1e38654
            if (g220 != a2) {
                // 0x1e3865c
                if (g227 != a2) {
                    // 0x1e38664
                    if (g228 != a2) {
                        // 0x1e3866c
                        if (g229 != a2) {
                            // 0x1e38674
                            if (g250 != a2) {
                                // 0x1e3867c
                                if (g251 != a2) {
                                    // 0x1e38684
                                    if (g254 != a2) {
                                        // 0x1e3868c
                                        if (g255 != a2) {
                                            // 0x1e38694
                                            if (g258 != a2) {
                                                // 0x1e387c2
                                                return 63;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int32_t v9 = g249 + 6; // 0x1e386aa
    g2 = v9;
    int32_t * v10 = (int32_t *)v9; // 0x1e386ad
    int32_t v11 = *v10 - 1; // 0x1e386af
    g7 = v11;
    *v10 = v11;
    int32_t result3; // 0x1e38723
    if (v11 != 0) {
        // 0x1e38720
        result3 = function_1e38d82(67, g5);
        g2 = result3;
    } else {
        // 0x1e386b4
        g2 = g394;
        g5 = g394;
        g2 = *(int32_t *)g394;
        g5 = g395;
        g2 = *(int32_t *)g395;
        g5 = g400;
        g2 = *(int32_t *)g400;
        int32_t v12 = g409; // 0x1e386e3
        g5 = v12;
        g2 = *(int32_t *)v12;
        g5 = g413;
        g2 = *(int32_t *)g413;
        g5 = g414;
        v4 = 20;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 27;
        int32_t v13 = function_1e38d82(66, 0); // 0x1e38716
        g2 = v13;
        result3 = v13;
    }
    // 0x1e387c2
    return result3;
}

// Address range: 0x1e387ca - 0x1e38850
int32_t function_1e387ca(int32_t result2, int32_t a2) {
    // 0x1e387ca
    g2 = result2;
    if (result2 == 63) {
        // 0x1e387df
        g2 = a2;
        int32_t result; // 0x1e3880f
        if (g260 == a2) {
            // 0x1e387eb
            g2 = g411;
            g2 = *(int32_t *)g411;
            g5 = g325;
            *(int32_t *)(g325 + 6) = 28;
            result = function_1e38d82(66, 0);
            g2 = result;
        } else {
            result = a2;
        }
        // 0x1e3884d
        return result;
    }
    if (result2 == 66) {
        // 0x1e38816
        g2 = 0;
        *(int32_t *)(g249 + 6) = 0;
        g7 = g411;
        g5 = g411;
        g2 = *(int32_t *)g411;
    } else {
        if (result2 != 67) {
            // 0x1e3884d
            return result2;
        }
    }
    int32_t v1 = function_1e25763(151); // 0x1e3883c
    g2 = v1;
    g5 = g392;
    int32_t result3 = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e38848
    g2 = result3;
    // 0x1e3884d
    return result3;
}

// Address range: 0x1e38850 - 0x1e388cf
int32_t function_1e38850(int32_t result2, int32_t a2) {
    // 0x1e38850
    g2 = result2;
    if (result2 == 63) {
        // 0x1e38865
        g2 = a2;
        int32_t result; // 0x1e38895
        if (g246 == a2) {
            // 0x1e38871
            g2 = g410;
            g2 = *(int32_t *)g410;
            g5 = g325;
            *(int32_t *)(g325 + 6) = 29;
            result = function_1e38d82(66, 0);
            g2 = result;
        } else {
            result = a2;
        }
        // 0x1e388cc
        return result;
    }
    if (result2 == 66) {
        // 0x1e3889c
        g2 = g410;
        g2 = *(int32_t *)g410;
        g5 = g410;
    } else {
        if (result2 != 67) {
            // 0x1e388cc
            return result2;
        }
    }
    int32_t v1 = function_1e25763(152); // 0x1e388bb
    g2 = v1;
    g5 = g392;
    int32_t result3 = function_1e2fbc7(v1, (int32_t)&g708); // 0x1e388c7
    g2 = result3;
    // 0x1e388cc
    return result3;
}

// Address range: 0x1e388cf - 0x1e389b2
int32_t function_1e388cf(int32_t result3, int32_t result) {
    // 0x1e388cf
    g2 = result3;
    int32_t v1 = g8; // bp-4
    int32_t v2; // bp-36
    if (result3 == 63) {
        // 0x1e388ec
        g2 = result;
        if (g261 != result) {
            // 0x1e388f8
            if (g275 != result) {
                // 0x1e389ae
                return result;
            }
        }
        // 0x1e38904
        g2 = g398;
        g5 = g398;
        g2 = *(int32_t *)g398;
        g5 = g405;
        g2 = *(int32_t *)g405;
        g5 = g325;
        *(int32_t *)(g325 + 6) = 30;
        g2 = function_1e38d82(66, 0);
        g5 = g262;
        v2 = 20;
        int32_t result2 = *(int32_t *)g262; // 0x1e38943
        g2 = result2;
        g5 = g276;
        // 0x1e389ae
        return result2;
    }
    int32_t * v3;
    if (result3 == 66) {
        // 0x1e38956
        g2 = g262;
        g5 = g262;
        g2 = *(int32_t *)g262;
        g5 = g276;
        g2 = *(int32_t *)g276;
        g5 = g398;
        g2 = *(int32_t *)g398;
        g5 = g405;
        v2 = 7;
        v3 = &v2;
    } else {
        if (result3 != 67) {
            // 0x1e389ae
            return result3;
        }
        v3 = &v1;
    }
    int32_t v4 = (int32_t)v3; // 0x1e38991
    *(int32_t *)(v4 - 4) = -0x40800000;
    *(int32_t *)(v4 - 8) = 0;
    *(int32_t *)(v4 - 12) = 153;
    int32_t v5 = function_1e25763(v1); // 0x1e3899d
    g2 = v5;
    *(int32_t *)(g9 - 4) = v5;
    g5 = g392;
    int32_t result4 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e389a9
    g2 = result4;
    // 0x1e389ae
    return result4;
}

// Address range: 0x1e389b2 - 0x1e38a51
int32_t function_1e389b2(int32_t result3, int32_t result) {
    // 0x1e389b2
    g2 = result3;
    int32_t v1 = g8; // bp-4
    if (result3 == 63) {
        // 0x1e389cb
        g2 = result;
        if (g277 != result) {
            // 0x1e389d7
            if (g278 != result) {
                // 0x1e389df
                if (g279 != result) {
                    // 0x1e38a4d
                    return result;
                }
            }
        }
        // 0x1e389e7
        g2 = g325;
        *(int32_t *)(g325 + 6) = 31;
        int32_t result2 = function_1e38d82(66, 0); // 0x1e389f7
        g2 = result2;
        // 0x1e38a4d
        return result2;
    }
    int32_t * v2;
    if (result3 == 66) {
        // 0x1e389fe
        function_1e32b77(1);
        g2 = g277;
        g5 = g278;
        g2 = *(int32_t *)g278;
        g5 = g279;
        int32_t v3 = 7; // bp-32
        v2 = &v3;
    } else {
        if (result3 != 67) {
            // 0x1e38a4d
            return result3;
        }
        v2 = &v1;
    }
    int32_t v4 = (int32_t)v2; // 0x1e38a30
    *(int32_t *)(v4 - 4) = -0x40800000;
    *(int32_t *)(v4 - 8) = 0;
    *(int32_t *)(v4 - 12) = 154;
    int32_t v5 = function_1e25763((int32_t)&g708); // 0x1e38a3c
    g2 = v5;
    *(int32_t *)(g9 - 4) = v5;
    g5 = g392;
    int32_t result4 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e38a48
    g2 = result4;
    // 0x1e38a4d
    return result4;
}

// Address range: 0x1e38a51 - 0x1e38b66
int32_t function_1e38a51(int32_t result, int32_t result3) {
    // 0x1e38a51
    g2 = result;
    int32_t v1; // bp-68
    int32_t v2 = &v1; // 0x1e38a58
    int32_t v3 = g8; // bp-72
    int32_t v4; // bp-88
    if (result != 63) {
        int32_t * v5;
        if (result == 66) {
            // 0x1e38b25
            g2 = g274;
            int32_t v6 = g397; // 0x1e38b36
            g5 = v6;
            v4 = 7;
            g2 = *(int32_t *)v6;
            v5 = &v4;
        } else {
            if (result != 67) {
                // 0x1e38b5f
                return result;
            }
            v5 = &v3;
        }
        int32_t v7 = (int32_t)v5; // 0x1e38b42
        *(int32_t *)(v7 - 4) = -0x40800000;
        *(int32_t *)(v7 - 8) = 0;
        *(int32_t *)(v7 - 12) = 155;
        int32_t v8 = function_1e25763(v3); // 0x1e38b4e
        g2 = v8;
        *(int32_t *)(g9 - 4) = v8;
        g5 = g392;
        int32_t result2 = function_1e2fbc7((int32_t)&g708, (int32_t)&g708); // 0x1e38b5a
        g2 = result2;
        // 0x1e38b5f
        return result2;
    }
    // 0x1e38a78
    g2 = result3;
    if (g270 != result3) {
        // 0x1e38b5f
        return result3;
    }
    int32_t v9 = g397; // 0x1e38a89
    g2 = v9;
    g5 = v9;
    g2 = *(int32_t *)v9;
    g5 = g274;
    v4 = 20;
    g2 = *(int32_t *)g274;
    g5 = g325;
    *(int32_t *)(g325 + 6) = 1;
    g2 = function_1e38d82(66, 0);
    g2 = function_1e32b02(0x4c4b40);
    int32_t v10 = function_1e25763(78); // 0x1e38acb
    g2 = v10;
    g5 = v2;
    g2 = function_1e3d7a0(v2, (char *)v10);
    int32_t v11 = function_1e25763(48); // 0x1e38ae5
    g2 = v11;
    g5 = g391;
    g2 = function_1e2fbc7(v11, (int32_t)&g708);
    int32_t v12 = function_1e35a8d(); // 0x1e38af8
    g2 = v12;
    int32_t result4; // 0x1e38b63
    if (v12 == 0) {
        // 0x1e38b01
        g2 = v2;
        g5 = g392;
        function_1e2fbc7(v2, 0x41000000);
        g2 = g359;
        g5 = g359;
        g11++;
        result4 = g359;
    } else {
        result4 = v12;
    }
    // 0x1e38b5f
    return result4;
}

// Address range: 0x1e38b66 - 0x1e38d6a
int32_t function_1e38b66(int32_t a1) {
    // 0x1e38b66
    g2 = a1;
    int32_t v1; // bp-132
    int32_t v2 = &v1; // 0x1e38b6d
    if (a1 == 66) {
        // 0x1e38b84
        g2 = g416;
        g5 = g416;
        g6 = 1022;
        function_1e26035(2);
        g2 = g291;
        g2 = *(int32_t *)g291;
        g5 = g292;
        g5 = g392;
        *(int32_t *)(g392 + 6) = g8;
        // 0x1e38cf3
        return g2;
    }
    if (a1 != 67) {
        // 0x1e38cf3
        return g2;
    }
    int32_t v3 = g392 + 6; // 0x1e38bd1
    g7 = v3;
    int32_t * v4 = (int32_t *)v3; // 0x1e38bd4
    int32_t v5 = *v4; // 0x1e38bd4
    int32_t v6 = v5; // esi
    int32_t v7; // 0x1e38c44
    if ((v5 & 256) == 0) {
        if ((v5 & 512) == 0) {
            goto lab_0x1e38cca;
        } else {
            goto lab_0x1e38c9e;
        }
    } else {
        int32_t v8 = v5 & 15; // 0x1e38be2
        g5 = g206;
        v6 = v8 + 1;
        int32_t v9 = 28 * v8; // 0x1e38bee
        g2 = v9;
        int32_t v10 = *(int32_t *)(v9 + 102 + g206); // 0x1e38bf1
        g6 = v10;
        int32_t v11 = *(int32_t *)v10; // 0x1e38bf5
        g2 = v11;
        if (v11 >= 0) {
            if (v8 == 0) {
                // 0x1e38c1e
                v7 = 180;
                goto lab_0x1e38c44;
            } else {
                if (v8 == 1) {
                    // 0x1e38c28
                    v7 = 181;
                    goto lab_0x1e38c44;
                } else {
                    if (v8 == 2) {
                        // 0x1e38c32
                        v7 = 182;
                        goto lab_0x1e38c44;
                    } else {
                        if (v8 == 3) {
                            // 0x1e38c3c
                            v7 = 183;
                            goto lab_0x1e38c44;
                        } else {
                            // 0x1e38c13
                            *v4 = 512;
                            goto lab_0x1e38c9e;
                        }
                    }
                }
            }
        } else {
            // 0x1e38c8e
            *v4 = 512;
            goto lab_0x1e38c9e;
        }
    }
  lab_0x1e38cca:
    // 0x1e38cca
    g2 = g392;
    *(int32_t *)(g392 + 6) = 256;
    int32_t v12 = function_1e25763(172); // 0x1e38ce2
    g2 = v12;
    g5 = g392;
    g2 = function_1e2fbc7(v12, (int32_t)&g708);
    // 0x1e38cf3
    return g2;
  lab_0x1e38c9e:;
    int32_t v13 = v6 & 15; // 0x1e38c9e
    int32_t v14 = 36 * v13; // 0x1e38ca4
    g2 = v14;
    int32_t v15 = *(int32_t *)(v14 + (int32_t)&g521); // 0x1e38ca7
    g2 = v15;
    int32_t v16; // 0x1e38d2b
    if (v15 < 1) {
        goto lab_0x1e38cca;
    } else {
        if (v13 == 0) {
            // 0x1e38cfb
            v16 = 184;
            goto lab_0x1e38d2b;
        } else {
            if (v13 == 1) {
                // 0x1e38d05
                v16 = 185;
                goto lab_0x1e38d2b;
            } else {
                if (v13 == 2) {
                    // 0x1e38d0f
                    v16 = 186;
                    goto lab_0x1e38d2b;
                } else {
                    if (v13 == 3) {
                        // 0x1e38d19
                        v16 = 187;
                        goto lab_0x1e38d2b;
                    } else {
                        if (v13 == 4) {
                            // 0x1e38d23
                            v16 = 188;
                            goto lab_0x1e38d2b;
                        } else {
                            goto lab_0x1e38cca;
                        }
                    }
                }
            }
        }
    }
  lab_0x1e38c44:;
    int32_t v17 = function_1e25763(v7); // 0x1e38c44
    g2 = v17;
    *(int32_t *)(g9 - 4) = v17;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    function_1e3d7a0((int32_t)&g708, (char *)&g708);
    g2 = v2;
    g5 = g392;
    *(int32_t *)(g9 + 8) = 0x40400000;
    *(int32_t *)(g9 + 4) = v2;
    function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g2 = g206;
    int32_t v18;
    if (*(int32_t *)(g206 + 214) != g8) {
        // 0x1e38c7e
        v18 = g8 | 256;
    } else {
        v18 = 512;
    }
    // 0x1e38c84
    g2 = g392;
    *(int32_t *)(g392 + 6) = v18;
    // 0x1e38cf3
    return g2;
  lab_0x1e38d2b:;
    int32_t v19 = function_1e25763(v16); // 0x1e38d2b
    g2 = v19;
    *(int32_t *)(g9 - 4) = v19;
    g5 = v2;
    *(int32_t *)(g9 - 8) = v2;
    function_1e3d7a0((int32_t)&g708, (char *)&g708);
    g2 = v2;
    g5 = g392;
    *(int32_t *)(g9 + 8) = 0x40400000;
    *(int32_t *)(g9 + 4) = v2;
    function_1e2fbc7((int32_t)&g708, (int32_t)&g708);
    g2 = g392;
    *(int32_t *)(g392 + 6) = g8 != 5 ? g8 | 512 : 0;
    // 0x1e38cf3
    return g2;
}

// Address range: 0x1e38d6a - 0x1e38d82
int32_t function_1e38d6a(void) {
    // 0x1e38d6a
    g2 = g325;
    *(int32_t *)(g325 + 6) = 1;
    int32_t result = function_1e38d82(66, 0); // 0x1e38d7a
    g2 = result;
    return result;
}

// Address range: 0x1e38d82 - 0x1e38ff6
int32_t function_1e38d82(int32_t a1, int32_t a2) {
    // 0x1e38d82
    int32_t result;
    int32_t v1; // 0x1e38da3
    if (g325 == 0) {
        // 0x1e38d82
        result = g2;
        goto lab_0x1e38fef;
    } else {
        // 0x1e38d93
        g690 = g325;
        g2 = g325;
        g8 = a1;
        g6 = a2;
        v1 = *(int32_t *)(g325 + 6);
        g4 = v1;
        if (a1 != 47) {
            goto lab_0x1e38e1e;
        } else {
            // 0x1e38da8
            if (g269 != a2) {
                goto lab_0x1e38e1e;
            } else {
                if (v1 > 1) {
                    int32_t * v2 = (int32_t *)g294; // 0x1e38dbd
                    g2 = *v2;
                    g5 = g294;
                    g2 = *v2;
                    g5 = g294;
                    g3 = g295;
                    int32_t * v3 = (int32_t *)g295; // 0x1e38dd9
                    g2 = *v3;
                    g5 = g295;
                    g2 = *v3;
                    g5 = g295;
                    int32_t v4 = function_1e25763(109); // 0x1e38df6
                    g2 = v4;
                    g5 = g392;
                    function_1e2fbc7(v4, (int32_t)&g708);
                    g2 = g325;
                    *(int32_t *)(g325 + 6) = 1;
                    g2 = function_1e38d82(66, 0);
                    goto lab_0x1e38e7a;
                } else {
                    goto lab_0x1e38e1e;
                }
            }
        }
    }
  lab_0x1e38fef:
    // 0x1e38fef
    g3 = *(int32_t *)g9;
    g6 = *(int32_t *)(g9 + 4);
    g8 = *(int32_t *)(g9 + 8);
    g4 = *(int32_t *)(g9 + 12);
    return result;
  lab_0x1e38e1e:
    if (a1 != 60) {
        goto lab_0x1e38e60;
    } else {
        // 0x1e38e23
        if (g269 != a2) {
            goto lab_0x1e38e60;
        } else {
            if (v1 == 0) {
                goto lab_0x1e38e60;
            } else {
                // 0x1e38e2f
                g2 = g269;
                g3 = *(int32_t *)g269;
                g5 = g269;
                if (g269 == 1) {
                    int32_t v5 = function_1e25763(116); // 0x1e38e4d
                    g2 = v5;
                    g5 = g392;
                    g2 = function_1e2fbc7(v5, (int32_t)&g708);
                }
                goto lab_0x1e38e7a;
            }
        }
    }
  lab_0x1e38e60:
    if (a1 == 1009) {
        // 0x1e38e75
        g8 = 67;
        goto lab_0x1e38e7a;
    } else {
        if (a1 != 60) {
            goto lab_0x1e38e7a;
        } else {
            // 0x1e38e6d
            if (g392 != a2) {
                goto lab_0x1e38e7a;
            } else {
                // 0x1e38e75
                g8 = 67;
                goto lab_0x1e38e7a;
            }
        }
    }
  lab_0x1e38e7a:
    // 0x1e38e7a
    switch (g690) {
        case 0: {
            // 0x1e38e92
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e35b95((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 1: {
            // 0x1e38e9e
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e35cb7((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 2: {
            // 0x1e38eaa
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36224((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 3: {
            // 0x1e38eb6
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36397((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 4: {
            // 0x1e38ec2
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e364d3((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 5: {
            // 0x1e38ece
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36671((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 6: {
            // 0x1e38eda
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e368ea((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 7: {
            // 0x1e38ee6
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36c34((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 8: {
            // 0x1e38ef2
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36a8e((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 9: {
            // 0x1e38efe
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e36e25((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 10: {
            // 0x1e38f0a
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e373e6((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 11: {
            // 0x1e38f16
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37186((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 12: {
            // 0x1e38f22
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e3767b((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 13: {
            // 0x1e38f2e
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e377bb((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 14: {
            // 0x1e38f3a
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e379de((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 15: {
            // 0x1e38f46
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37b45((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 16: {
            // 0x1e38f52
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37d6f((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 17: {
            // 0x1e38f5e
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37ffa((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 18: {
            // 0x1e38f6a
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e3832f((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 19: {
            // 0x1e38f73
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e35c09((int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 20: {
            // 0x1e38f7c
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e374d0((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 21: {
            // 0x1e38f85
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37c72((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 22: {
            // 0x1e38f8e
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37e46((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 23: {
            // 0x1e38f97
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e37edc((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 24: {
            // 0x1e38fa0
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e380fa((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 25: {
            // 0x1e38fa9
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38477((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 26: {
            // 0x1e38fb2
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38619((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 27: {
            // 0x1e38fbb
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e387ca((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 28: {
            // 0x1e38fc4
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38850((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 29: {
            // 0x1e38fcd
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e388cf((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 30: {
            // 0x1e38fd6
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e389b2((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 31: {
            // 0x1e38fdf
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38a51((int32_t)&g708, (int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        case 32: {
            // 0x1e38fe8
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38b66((int32_t)&g708);
            // break -> 0x1e38fef
            break;
        }
        default: {
            // 0x1e38e86
            *(int32_t *)(g9 - 4) = g6;
            *(int32_t *)(g9 - 8) = g8;
            g2 = function_1e38d6a();
            // break -> 0x1e38fef
            break;
        }
    }
    goto lab_0x1e38fef;
}

// Address range: 0x1e3907a - 0x1e390d0
int32_t function_1e3907a(int32_t a1, int32_t a2) {
    // 0x1e3907a
    g7 = 0;
    int32_t v1 = g425; // 0x1e39082
    int32_t v2; // 0x1e390b030
    int32_t lpCaption2; // 0x1e390bc28
    int32_t lpText; // 0x1e390bd
    if (v1 < 0) {
        v2 = (int32_t)&g426;
        lpCaption2 = 0;
    } else {
        // 0x1e3908a
        g5 = &g425;
        int32_t v3 = 0; // 0x1e390bc11
        int32_t v4 = 0; // 0x1e390ac7
        int32_t v5 = 0; // 0x1e390a6
        int32_t v6 = &g425; // 0x1e390a3
        int32_t v7; // 0x1e390ac6
        int32_t lpCaption; // 0x1e390bc10
        int32_t v8; // 0x1e390a6
        while (true) {
            // 0x1e3908f
            g2 = v1;
            if (v1 == a1) {
                // 0x1e39097
                v7 = *(int32_t *)(v6 + 4);
            } else {
                v7 = v4;
            }
            if (v1 == a2) {
                // 0x1e390a0
                lpCaption = *(int32_t *)(v6 + 4);
            } else {
                lpCaption = v3;
            }
            int32_t v9 = v6 + 8; // 0x1e390a3
            g5 = v9;
            v8 = v5 + 1;
            g7 = v8;
            int32_t v10 = *(int32_t *)v9; // 0x1e390a7
            if (v10 < 0) {
                // break -> 0x1e390ac
                break;
            }
            v3 = lpCaption;
            v4 = v7;
            v5 = v8;
            v1 = v10;
            v6 = v9;
        }
        // 0x1e390ac
        if (v7 != 0) {
            lpText = v7;
            // 0x1e390b7
            MessageBoxA(NULL, (char *)lpText, (char *)lpCaption, 0x2000);
            g2 = -1;
            g6 = 0;
            g8 = lpText;
            return -1;
        }
        v2 = 8 * v8 + (int32_t)&g426;
        lpCaption2 = lpCaption;
    }
    // 0x1e390b0
    lpText = *(int32_t *)v2;
    // 0x1e390b7
    MessageBoxA(NULL, (char *)lpText, (char *)lpCaption2, 0x2000);
    g2 = -1;
    g6 = 0;
    g8 = lpText;
    return -1;
}

