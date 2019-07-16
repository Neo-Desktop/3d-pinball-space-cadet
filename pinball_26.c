#include "pinball.h"

// Address range: 0x1e41890 - 0x1e41918
int32_t function_1e41890(int32_t a1, int32_t a2) {
    int32_t v1 = g4; // 0x1e41890
    int32_t v2 = g8; // 0x1e41891
    g4 = a1;
    if (a1 == -1) {
        // 0x1e41910
        g2 = -1;
        g8 = v2;
        g4 = v1;
        return -1;
    }
    // 0x1e4189b
    g8 = a2;
    int32_t v3 = *(int32_t *)(a2 + 12); // 0x1e4189f
    g2 = v3;
    if ((v3 & 1) == 0) {
        if ((char)v3 > -1) {
            // 0x1e41910
            g2 = -1;
            g8 = v2;
            g4 = v1;
            return -1;
        }
        if ((v3 & 2) != 0) {
            // 0x1e41910
            g2 = -1;
            g8 = v2;
            g4 = v1;
            return -1;
        }
    }
    // 0x1e418ae
    int32_t v4; // 0x1e418d3
    if (*(int32_t *)(a2 + 8) == 0) {
        // 0x1e418b4
        g2 = function_1e41920(a2);
        v4 = g8;
    } else {
        v4 = a2;
    }
    int32_t * v5 = (int32_t *)v4; // 0x1e418bd
    int32_t v6 = *v5; // 0x1e418bd
    g2 = v6;
    int32_t v7; // 0x1e418f0
    if (*(int32_t *)(v4 + 8) == v6) {
        // 0x1e418c4
        if (*(int32_t *)(v4 + 4) != 0) {
            // 0x1e418ca
            g2 = -1;
            g8 = v2;
            g4 = v1;
            return -1;
        }
        int32_t v8 = v6 + 1; // 0x1e418d2
        g2 = v8;
        *v5 = v8;
        v7 = g8;
    } else {
        v7 = v4;
    }
    int32_t * v9 = (int32_t *)v7; // 0x1e418d9
    int32_t v10 = *v9 - 1; // 0x1e418ef
    g2 = v10;
    *v9 = v10;
    if ((*(char *)(v7 + 12) & 64) == 0) {
        // 0x1e418ef
        *(char *)g2 = (char)g4;
    } else {
        int32_t v11 = g2; // 0x1e418e0
        if (*(char *)v11 != (char)g4) {
            // 0x1e418e4
            *(int32_t *)g8 = v11 + 1;
            g2 = -1;
            g8 = v2;
            g4 = v1;
            return -1;
        }
    }
    int32_t * v12 = (int32_t *)(g8 + 4); // 0x1e418f4
    *v12 = *v12 + 1;
    int32_t * v13 = (int32_t *)(g8 + 12); // 0x1e418f7
    int32_t v14 = *v13 & -17; // 0x1e418fa
    g2 = v14;
    *v13 = v14;
    *(int32_t *)(g8 + 12) = g2 | 1;
    int32_t result = g4 & 255; // 0x1e41908
    g2 = result;
    g8 = v2;
    g4 = v1;
    return result;
}

// Address range: 0x1e41920 - 0x1e4196b
int32_t function_1e41920(int32_t a1) {
    int32_t v1 = g8; // 0x1e41920
    g146++;
    g8 = a1;
    int32_t v2 = function_1e22670(0x1000); // 0x1e41930
    g2 = v2;
    *(int32_t *)(g8 + 8) = v2;
    int32_t * v3 = (int32_t *)(g8 + 12); // 0x1e4194c
    int32_t v4 = *v3; // 0x1e4194c
    if (v2 == 0) {
        // 0x1e4194c
        *v3 = v4 | 4;
        int32_t v5 = g8 + 20; // 0x1e41950
        g2 = v5;
        *(int32_t *)(g8 + 8) = v5;
        *(int32_t *)(g8 + 24) = 2;
    } else {
        // 0x1e4193f
        *v3 = v4 | 8;
        *(int32_t *)(g8 + 24) = 0x1000;
    }
    int32_t v6 = *(int32_t *)(g8 + 8); // 0x1e4195d
    g2 = v6;
    *(int32_t *)g8 = v6;
    *(int32_t *)(g8 + 4) = 0;
    g8 = v1;
    return g2;
}

// Address range: 0x1e41970 - 0x1e419a0
int32_t function_1e41970(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x1e41970
    g7 = a1;
    if ((int32_t)g679 <= a1) {
        // 0x1e4197c
        g2 = 0;
        return 0;
    }
    int32_t v1 = a1 / 8 & -4; // 0x1e4198a
    g2 = v1;
    int32_t v2 = 36 * (a1 & 31); // 0x1e4198d
    g7 = v2;
    int32_t v3 = *(int32_t *)(v1 + (int32_t)&g677); // 0x1e41990
    g5 = v3;
    g2 = 0;
    int32_t result = (int32_t)*(char *)(v2 + 4 + v3) & 64; // 0x1e4199c
    g2 = result;
    return result;
}

// Address range: 0x1e419a0 - 0x1e419f6
int32_t function_1e419a0(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // bp-8
    if (g671 == 0) {
        // 0x1e419bc
        g6 = 0;
        g672++;
    } else {
        // 0x1e419ab
        g6 = 1;
        g2 = function_1e22490(19);
    }
    // 0x1e419c4
    g2 = a2;
    g5 = a1;
    int32_t result = function_1e41a00(a1, a2); // 0x1e419ce
    g2 = result;
    if (g6 == 0) {
        // 0x1e419eb
        g2 = result;
        g6 = v1;
        g672--;
        return result;
    }
    // 0x1e419dc
    function_1e22500(19);
    g2 = result;
    g6 = v1;
    return result;
}

// Address range: 0x1e41a00 - 0x1e41a94
int32_t function_1e41a00(int32_t lpMultiByteStr, int32_t a2) {
    int32_t lpWideCharStr = a2;
    g5 = lpMultiByteStr;
    if (lpMultiByteStr == 0) {
        // 0x1e41a0b
        g2 = 0;
        return 0;
    }
    // 0x1e41a11
    if (g126 == 0) {
        if ((int16_t)a2 < 256) {
            // 0x1e41a37
            *(char *)lpMultiByteStr = (char)a2;
            g2 = 1;
            return 1;
        }
        // 0x1e41a23
        *(int32_t *)function_1e23ad0() = 42;
        g2 = -1;
        return -1;
    }
    // 0x1e41a46
    g7 = g442;
    int32_t lpUsedDefaultChar = 0; // bp-4
    struct _cpinfo * v1 = g130; // 0x1e41a5c
    int32_t CodePage = (int32_t)v1; // 0x1e41a5c
    g2 = CodePage;
    g5 = lpWideCharStr;
    int32_t result = WideCharToMultiByte(CodePage, 544, (int16_t *)&lpWideCharStr, 1, (char *)lpMultiByteStr, g442, NULL, (bool *)&lpUsedDefaultChar); // 0x1e41a6f
    g2 = result;
    if (result != 0) {
        // 0x1e41a79
        if (v1 == NULL) {
            // 0x1e41a90
            return result;
        }
    }
    // 0x1e41a80
    *(int32_t *)function_1e23ad0() = 42;
    g2 = -1;
    // 0x1e41a90
    return -1;
}

// Address range: 0x1e41aa0 - 0x1e41adf
int32_t function_1e41aa0(int32_t a1, int32_t a2) {
    // 0x1e41aa0
    __asm_wait();
    int32_t v1;
    int32_t v2 = function_1e41b00(v1); // 0x1e41aae
    g2 = v2;
    int32_t v3 = a2 & a1; // 0x1e41abc
    g5 = v3;
    int32_t result = (v2 & -1 - a2) | v3; // 0x1e41ac4
    function_1e41bb0(result);
    g2 = result;
    return result;
}

// Address range: 0x1e41ae0 - 0x1e41af8
int32_t function_1e41ae0(int32_t a1, int32_t a2) {
    // 0x1e41ae0
    g5 = a1;
    int32_t v1 = a2 & -0x80001; // 0x1e41ae8
    g2 = v1;
    int32_t result = function_1e41aa0(a1, v1); // 0x1e41aef
    g2 = result;
    return result;
}

// Address range: 0x1e41b00 - 0x1e41ba1
int32_t function_1e41b00(int32_t a1) {
    int32_t v1; // 0x1e41b16
    if ((a1 & 1) != 0) {
        v1 = 16;
    } else {
        v1 = 0;
    }
    int32_t v2; // 0x1e41b16
    if ((a1 & 4) != 0) {
        // 0x1e41b16
        v2 = v1 | 8;
    } else {
        v2 = v1;
    }
    int32_t v3; // 0x1e41b1e
    if ((a1 & 8) != 0) {
        // 0x1e41b1e
        v3 = v2 | 4;
    } else {
        v3 = v2;
    }
    int32_t v4; // 0x1e41b26
    if ((a1 & 16) != 0) {
        // 0x1e41b26
        v4 = v3 | 2;
    } else {
        v4 = v3;
    }
    int32_t v5; // 0x1e41b2e
    if ((a1 & 32) != 0) {
        // 0x1e41b2e
        v5 = v4 | 1;
    } else {
        v5 = v4;
    }
    int32_t v6; // 0x1e41b36
    if ((a1 & 2) != 0) {
        // 0x1e41b36
        v6 = v5 | 0x80000;
    } else {
        v6 = v5;
    }
    // 0x1e41b3b
    g2 = v6;
    int32_t v7 = a1 & 3072; // 0x1e41b40
    g5 = v7;
    int32_t v8; // 0x1e41b60
    if (v7 == 1024) {
        // 0x1e41b60
        v8 = v6 | 256;
        g2 = v8;
    } else {
        if (v7 == 2048) {
            int32_t v9 = v6 | 512; // 0x1e41b67
            g2 = v9;
            v8 = v9;
        } else {
            if (v7 == 3072) {
                int32_t v10 = v6 | 768; // 0x1e41b6e
                g2 = v10;
                v8 = v10;
            } else {
                v8 = v6;
            }
        }
    }
    int32_t v11 = a1 & 768; // 0x1e41b78
    g5 = v11;
    int32_t v12; // 0x1e41b8a
    if (v11 == 0) {
        // 0x1e41b8a
        v12 = v8 | 0x20000;
        g2 = v12;
    } else {
        if (v11 == 512) {
            int32_t v13 = v8 | 0x10000; // 0x1e41b91
            g2 = v13;
            v12 = v13;
        } else {
            v12 = v8;
        }
    }
    int32_t result; // 0x1e41b9b
    if ((a1 & 0x1000) != 0) {
        // 0x1e41b9b
        result = v12 | 0x40000;
        g2 = result;
    } else {
        result = v12;
    }
    // 0x1e41ba0
    return result;
}

// Address range: 0x1e41bb0 - 0x1e41c3d
int32_t function_1e41bb0(int32_t a1) {
    int32_t v1 = g2 & -0x10000; // 0x1e41bb0
    g2 = v1;
    g7 = a1;
    int32_t v2; // 0x1e41bbc
    if ((a1 & 16) != 0) {
        // 0x1e41bbc
        v2 = v1 | 1;
        g2 = v2;
    } else {
        v2 = v1;
    }
    int32_t v3; // 0x1e41bc5
    if ((a1 & 8) != 0) {
        // 0x1e41bc5
        v3 = v1 | (v2 & 251) | 4;
        g2 = v3;
    } else {
        v3 = v2;
    }
    int32_t v4; // 0x1e41bcc
    if ((a1 & 4) != 0) {
        // 0x1e41bcc
        v4 = v3 | 8;
        g2 = v4;
    } else {
        v4 = v3;
    }
    int32_t v5; // 0x1e41bd3
    if ((a1 & 2) != 0) {
        // 0x1e41bd3
        v5 = v4 | 16;
        g2 = v5;
    } else {
        v5 = v4;
    }
    int32_t v6; // 0x1e41bda
    if ((a1 & 1) != 0) {
        // 0x1e41bda
        v6 = v5 | 32;
        g2 = v6;
    } else {
        v6 = v5;
    }
    int32_t v7; // 0x1e41be4
    if ((a1 & 0x80000) != 0) {
        // 0x1e41be4
        v7 = v6 | 2;
        g2 = v7;
    } else {
        v7 = v6;
    }
    int32_t v8 = a1 & 768; // 0x1e41be8
    g5 = v8;
    int32_t v9; // 0x1e41c08
    if (v8 == 256) {
        // 0x1e41c08
        v9 = v7 | 1024;
        g2 = v9;
    } else {
        if (v8 == 512) {
            int32_t v10 = v7 | 2048; // 0x1e41c0d
            g2 = v10;
            v9 = v10;
        } else {
            if (v8 == 768) {
                int32_t v11 = v7 | 3072; // 0x1e41c12
                g2 = v11;
                v9 = v11;
            } else {
                v9 = v7;
            }
        }
    }
    int32_t v12 = a1 & 0x30000; // 0x1e41c17
    g5 = v12;
    int32_t v13; // 0x1e41c29
    if (v12 == 0) {
        // 0x1e41c29
        v13 = v9 | 768;
        g2 = v13;
    } else {
        if (v12 == 0x10000) {
            int32_t v14 = v9 | 512; // 0x1e41c2e
            g2 = v14;
            v13 = v14;
        } else {
            v13 = v9;
        }
    }
    int32_t result; // 0x1e41c39
    if ((a1 & 0x40000) != 0) {
        // 0x1e41c39
        result = v13 | 0x1000;
        g2 = result;
    } else {
        result = v13;
    }
    // 0x1e41c3c
    return result;
}

// Address range: 0x1e41c40 - 0x1e41c4b
int32_t function_1e41c40(void) {
    int32_t result = function_1e211b0(2); // 0x1e41c42
    g2 = result;
    return result;
}

// Address range: 0x1e41c50 - 0x1e41cb4
int32_t function_1e41c50(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = g6; // 0x1e41c56
    int32_t v2 = a2 >> 31; // 0x1e41c5e
    int32_t v3 = ((v2 & 31) + a2) / 32; // 0x1e41c66
    int32_t v4 = v2 - (((v2 ^ a2) - v2 & 31) ^ v2) + 31; // 0x1e41c79
    g5 = (g5 & -256) | (v4 & 255);
    g2 = a1;
    uint32_t v5 = v4 & 31; // 0x1e41c7f
    int32_t v6; // 0x1e41c81
    if (v5 != 0) {
        // bb
        v6 = (1 << v5) - 1;
    } else {
        v6 = 0;
    }
    // bb16
    if ((*(int32_t *)(4 * v3 + a1) & v6) != 0) {
        // 0x1e41c88
        g2 = 0;
        g6 = v1;
        return 0;
    }
    int32_t v7 = v3 + 1; // 0x1e41c8e
    if (v7 >= 3) {
      lab_0x1e41ca5_2:
        // 0x1e41ca5
        g2 = 1;
        g6 = v1;
        return 1;
    }
    int32_t v8 = 4 * v7 + a1; // 0x1e41c94
    g2 = v8;
    while (true) {
        // 0x1e41c97
        if (*(int32_t *)v8 != 0) {
            // break -> 0x1e41cae
            break;
        }
        int32_t v9 = v8 + 4; // 0x1e41c9c
        g2 = v9;
        int32_t v10 = v7 + 1; // 0x1e41c9f
        if (v10 >= 3) {
            goto lab_0x1e41ca5_2;
        }
        v7 = v10;
        v8 = v9;
    }
    // 0x1e41cae
    g2 = 0;
    g6 = v1;
    return 0;
}

// Address range: 0x1e41cc0 - 0x1e41d23
int32_t function_1e41cc0(int32_t a1, int32_t a2) {
    int32_t v1 = g6; // bp-12
    int32_t v2 = v1; // 0x1e41cc2
    int32_t v3 = a2 >> 31; // 0x1e41cd0
    int32_t v4 = ((v3 & 31) + a2) / 32; // 0x1e41cd6
    g8 = v4;
    int32_t v5 = v3 - (((v3 ^ a2) - v3 & 31) ^ v3) + 31; // 0x1e41ced
    g5 = (g5 & -256) | (v5 & 255);
    int32_t v6 = 4 * v4 + a1; // 0x1e41cef
    g2 = v6;
    uint32_t v7 = v5 & 31; // 0x1e41cf2
    int32_t v8; // 0x1e41cf7
    if (v7 != 0) {
        // bb
        v8 = 1 << v7;
    } else {
        v8 = 1;
    }
    int32_t v9 = *(int32_t *)v6; // 0x1e41cf5
    g5 = v9;
    int32_t v10 = function_1e44310(v9, v8, v6); // 0x1e41cf9
    g2 = v10;
    int32_t v11 = g8 - 1; // 0x1e41d01
    g8 = v11;
    int32_t v12; // 0x1e41d1f
    int32_t result; // 0x1e41d22
    if (v11 >= 0) {
        int32_t v13 = a1 + 4 * v11; // edi
        int32_t v14 = v2; // 0x1e41d0b
        int32_t v15 = v10; // 0x1e41d07
        while (true) {
            if (v15 == 0) {
                result = 0;
                v12 = v14;
                // break -> 0x1e41d1f
                break;
            }
            // 0x1e41d0b
            *(int32_t *)(v14 - 4) = v13;
            g2 = *(int32_t *)v13;
            *(int32_t *)(v14 - 8) = 1;
            v13 -= 4;
            *(int32_t *)(v14 - 12) = g2;
            int32_t v16 = function_1e44310((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e41d14
            g2 = v16;
            int32_t v17 = g9 + 12; // 0x1e41d19
            int32_t v18 = g8 - 1; // 0x1e41d1c
            g8 = v18;
            if (v18 < 0) {
                result = v16;
                v12 = v17;
                // break -> 0x1e41d1f
                break;
            }
            v14 = v17;
            v15 = v16;
        }
    } else {
        result = v10;
        v12 = v2;
    }
    // 0x1e41d1f
    g8 = *(int32_t *)(v12 + 4);
    g4 = *(int32_t *)(v12 + 8);
    return result;
}

// Address range: 0x1e41d30 - 0x1e41ddc
int32_t function_1e41d30(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g4; // 0x1e41d3b
    int32_t v3 = g8; // 0x1e41d3c
    int32_t v4 = g6; // 0x1e41d3d
    int32_t v5 = g3; // 0x1e41d3e
    g3 = a2 - 1;
    int32_t v6 = a2 >> 31; // 0x1e41d49
    int32_t v7 = ((v6 & 31) + a2) / 32; // 0x1e41d54
    g8 = v7;
    int32_t v8 = v6 - (((v6 ^ a2) - v6 & 31) ^ v6) + 31; // 0x1e41d66
    g4 = v8;
    int32_t v9 = 4 * v7 + v1; // 0x1e41d6c
    g2 = 1;
    g5 = (v8 & 255) | (v9 & -256);
    uint32_t v10 = v8 & 31; // 0x1e41d7a
    int32_t v11; // 0x1e41d7a
    if (v10 != 0) {
        // bb
        v11 = 1 << v10;
        g2 = v11;
    } else {
        v11 = 1;
    }
    // bb22
    g5 = v9;
    int32_t result; // 0x1e41d9d
    if ((*(int32_t *)v9 & v11) != 0) {
        int32_t v12 = a2 + 1; // 0x1e41d84
        g6 = v12;
        g2 = v1;
        int32_t v13 = function_1e41c50(v1, v12, v5, v4, v3, v2, v9, 0); // 0x1e41d8b
        g2 = v13;
        if (v13 == 0) {
            // 0x1e41d97
            g2 = v1;
            result = function_1e41cc0(v1, g3);
            g2 = result;
        } else {
            result = 0;
        }
    } else {
        result = 0;
    }
    // 0x1e41da9
    g2 = -1;
    g5 = (g5 & -256) | (g4 & 255);
    uint32_t v14 = g4 & 31; // 0x1e41db0
    int32_t v15; // 0x1e41db0
    if (v14 != 0) {
        // bb25
        v15 = -1 << v14;
        g2 = v15;
    } else {
        v15 = -1;
    }
    // bb26
    g5 = v9;
    int32_t v16 = g8 + 1; // esi
    int32_t * v17 = (int32_t *)v9; // 0x1e41db7
    *v17 = *v17 & v15;
    if (v16 < 3) {
        int32_t v18 = 3 - v16; // 0x1e41dc7
        g5 = v18;
        g2 = 0;
        __asm_rep_stosd_memset((char *)(4 * v16 + v1), 0, v18);
        g5 = 0;
    }
    // 0x1e41dd0
    g2 = result;
    g6 = v4;
    g8 = v3;
    g4 = v2;
    return result;
}

// Address range: 0x1e41de0 - 0x1e41dfd
int32_t function_1e41de0(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a2;
    g2 = v1;
    int32_t v2 = g8; // bp-4
    g5 = (int32_t)a1;
    g2 = v1 + 4;
    *a1 = *a2;
    int32_t v3 = g5 + 4; // 0x1e41df514
    g5 = v3;
    int32_t v4 = 2; // 0x1e41df816
    if (v4 == 0) {
        // 0x1e41dfb
        return g2;
    }
    int32_t v5 = g2;
    g2 = v5 + 4;
    *(int32_t *)v3 = *(int32_t *)v5;
    int32_t v6 = g5 + 4; // 0x1e41df5
    g5 = v6;
    int32_t v7 = v4 - 1; // 0x1e41df8
    while (v7 != 0) {
        // 0x1e41dee
        v5 = g2;
        g2 = v5 + 4;
        *(int32_t *)v6 = *(int32_t *)v5;
        v6 = g5 + 4;
        g5 = v6;
        v7--;
    }
    // 0x1e41dfb
    g8 = v2;
    return g2;
}

// Address range: 0x1e41e00 - 0x1e41e0f
int32_t function_1e41e00(int32_t * a1) {
    // 0x1e41e00
    g5 = (int32_t)a1;
    g2 = 0;
    *a1 = 0;
    *(int32_t *)(g5 + 4) = g2;
    *(int32_t *)(g5 + 8) = g2;
    return g2;
}

// Address range: 0x1e41e10 - 0x1e41e2d
int32_t function_1e41e10(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = (int32_t)a1;
    g2 = 0;
    g5 = v1;
    int32_t v2 = 0; // 0x1e41e1e
    while (true) {
        // 0x1e41e16
        if (*(int32_t *)v1 != 0) {
            // break -> 0x1e41e2a
            break;
        }
        int32_t v3 = v1 + 4; // 0x1e41e1b
        g5 = v3;
        int32_t v4 = v2 + 1; // 0x1e41e1e
        g2 = v4;
        if (v4 >= 3) {
            // 0x1e41e24
            g2 = 1;
            return 1;
        }
        v2 = v4;
        v1 = v3;
    }
    // 0x1e41e2a
    g2 = 0;
    return 0;
}

// Address range: 0x1e41e30 - 0x1e41edd
int32_t function_1e41e30(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = a2 >> 31; // 0x1e41e3a
    int32_t v3 = ((v2 & 31) + a2) / 32; // bp-16
    int32_t v4 = (((v2 ^ a2) - v2 & 31) ^ v2) - v2; // 0x1e41e56
    g2 = v4;
    int32_t v5 = a2 & -256; // 0x1e41e5d
    g5 = v5 | (v4 & 255);
    uint32_t v6 = v4 & 31; // 0x1e41e63
    int32_t v7; // 0x1e41e70
    if (v6 != 0) {
        // bb
        v7 = -1 - (-1 << v6);
    } else {
        v7 = 0;
    }
    int32_t v8 = 32 - v4 & 255; // 0x1e41e69
    g5 = v5 | v8;
    g3 = 3;
    int32_t v9 = 0; // edx
    while (true) {
        int32_t * v10 = (int32_t *)v1; // 0x1e41e7c
        int32_t v11 = *v10; // 0x1e41e7c
        int32_t v12 = v11; // edi
        int32_t v13 = v1 + 4; // ebx
        int32_t v14 = v11 & v7; // 0x1e41e83
        int32_t v15 = v14 & -256; // 0x1e41e8b
        g5 = v15 | (v4 & 255);
        uint32_t v16 = v4 & 31; // 0x1e41e8d
        int32_t v17; // 0x1e41e8d
        if (v16 != 0) {
            // bb25
            v17 = v11 >> v16;
            v12 = v17;
        } else {
            v17 = v11;
        }
        // bb26
        g5 = v15 | v8;
        *v10 = v17;
        int32_t v18 = v9 | v12; // 0x1e41e96
        v9 = v14;
        uint32_t v19 = g5 & 31; // 0x1e41e9c
        if (v19 != 0) {
            // bb27
            v9 = v14 << v19;
        }
        int32_t v20 = g3 - 1; // 0x1e41e9e
        g3 = v20;
        *(int32_t *)(v13 - 4) = v18;
        if (v20 == 0) {
            // break -> 0x1e41ea4
            break;
        }
        // .dec_label_pc_1e41e7c_crit_edge
        v4 = g2;
        v1 = v13;
    }
    // 0x1e41ea4
    g5 = 2;
    int32_t v21 = v1 + 8; // 0x1e41eaf
    int32_t v22 = 4 * v3; // 0x1e41eb2
    g2 = v22;
    int32_t v23 = v1 - v22 + 8; // 0x1e41eb7
    v9 = v23;
    int32_t v24 = 2; // 0x1e41eba
    while (true) {
        if (v3 > v24) {
            // 0x1e41ec6
            *(int32_t *)v21 = 0;
        } else {
            int32_t v25 = *(int32_t *)v23; // 0x1e41ec0
            g2 = v25;
            *(int32_t *)v21 = v25;
        }
        int32_t v26 = v9 - 4; // 0x1e41ecc
        v9 = v26;
        int32_t v27 = g5 - 1; // 0x1e41ed2
        g5 = v27;
        if (v27 < 0) {
            // break -> 0x1e41ed5
            break;
        }
        // 0x1e41ecc
        v21 -= 4;
        v23 = v26;
        v24 = v27;
    }
    // 0x1e41ed5
    return g2;
}

// Address range: 0x1e41ee0 - 0x1e420ab
int32_t function_1e41ee0(int32_t a1, int32_t a2, int32_t * a3) {
    // 0x1e41ee0
    g5 = a1;
    int32_t v1; // bp-24
    int32_t v2 = v1; // 0x1e41ee4
    int32_t v3 = (int32_t)*(int16_t *)(a1 + 10); // 0x1e41ee7
    g2 = (g2 & -0x10000) | v3;
    int32_t v4 = g4; // 0x1e41eeb
    int32_t v5 = g8; // 0x1e41eec
    int32_t v6 = g6; // 0x1e41ef2
    int32_t v7 = g3; // 0x1e41ef3
    int32_t v8 = v7; // bp-40
    int32_t v9 = v8; // 0x1e41ef3
    int32_t v10 = v3 & 0x7fff; // 0x1e41ef4
    g4 = v10 - 0x3fff;
    int32_t v11 = *(int32_t *)(a1 + 2); // 0x1e41f05
    g8 = v3 & 0x8000;
    int32_t v12 = *(int32_t *)(a1 + 6); // 0x1e41f0e
    v1 = v12;
    g2 = 0;
    int32_t v13 = 0x10000 * (int32_t)*(int16_t *)a1; // 0x1e41f1e
    g2 = v13;
    int32_t v14; // 0x1e420aa6
    if (v10 != 0) {
        // 0x1e41f66
        g2 = v2;
        int32_t v15; // bp-12
        int32_t v16 = v15; // 0x1e41f6a
        g5 = v16;
        function_1e41de0(&v15, &v1);
        g6 = a2;
        g2 = v2;
        int32_t v17 = *(int32_t *)(a2 + 8); // 0x1e41f80
        g5 = v17;
        int32_t v18 = function_1e41d30(&v1, v17); // 0x1e41f85
        g2 = v18;
        int32_t v19 = g4;
        int32_t v20; // 0x1e41f91
        if (v18 != 0) {
            // 0x1e41f91
            v20 = v19 + 1;
            g4 = v20;
        } else {
            v20 = v19;
        }
        int32_t v21 = g6; // 0x1e41f92
        int32_t v22 = *(int32_t *)(v21 + 4); // 0x1e41f92
        g3 = v22;
        g2 = v22;
        int32_t v23 = v22 - *(int32_t *)(v21 + 8); // 0x1e41f97
        g2 = v23;
        if (v23 > v20) {
            // 0x1e41f9e
            g2 = v2;
            g4 = 0;
            function_1e41e00(&v1);
            g2 = 2;
            v14 = 2;
        } else {
            if (v22 < v20) {
                // 0x1e42009
                if (*(int32_t *)v21 > v20) {
                    // 0x1e4203f
                    g4 = *(int32_t *)(v21 + 20) + v20;
                    int32_t v24 = *(int32_t *)(v21 + 12); // 0x1e42042
                    g5 = v24;
                    g2 = v2;
                    v1 &= 0x7fffffff;
                    function_1e41e30(&v1, v24);
                    g2 = 0;
                    v14 = 0;
                } else {
                    // 0x1e4200d
                    g2 = v2;
                    g2 = function_1e41e00(&v1);
                    g5 = v2;
                    int32_t v25 = *(int32_t *)(g6 + 12); // 0x1e4201b
                    g2 = v25;
                    v1 |= -0x80000000;
                    g2 = function_1e41e30(&v1, v25);
                    g4 = *(int32_t *)g6 + *(int32_t *)(g6 + 20);
                    g2 = 1;
                    v14 = 1;
                }
            } else {
                // 0x1e41fbb
                g3 = v22 - v20;
                g2 = v16;
                g5 = v2;
                g2 = function_1e41de0(&v1, &v15);
                g5 = v2;
                g2 = function_1e41e30(&v1, g3);
                int32_t v26 = *(int32_t *)(g6 + 8); // 0x1e41fe1
                g5 = v26;
                g2 = function_1e41d30(&v1, v26);
                g5 = v2;
                g4 = 0;
                int32_t v27 = *(int32_t *)(g6 + 12) + 1; // 0x1e41ff7
                g2 = v27;
                function_1e41e30(&v1, v27);
                g2 = 2;
                v14 = 2;
            }
        }
    } else {
        // 0x1e41f2d
        g4 = 0;
        g2 = v2;
        int32_t v28 = function_1e41e10(&v1, v7, v6, v5, v4, v12, v11, v13); // 0x1e41f34
        g2 = v28;
        if (v28 == 0) {
            // 0x1e41f4b
            g2 = v2;
            function_1e41e00(&v1);
            g6 = a2;
            g2 = 2;
            v14 = 2;
        } else {
            // 0x1e41f40
            g2 = 0;
            g6 = a2;
            v14 = 0;
        }
    }
    int32_t v29 = g5 & -256; // 0x1e4205d
    g5 = v29 | 31;
    int32_t v30 = (int32_t)(31 - *(char *)(g6 + 12)); // 0x1e4205f
    g5 = v30 | v29;
    uint32_t v31 = v30 & 31; // 0x1e42062
    int32_t v32; // 0x1e42075
    if (v31 != 0) {
        // bb
        v32 = g4 << v31;
    } else {
        v32 = g4;
    }
    int32_t v33 = g8 == 0 ? 0 : -0x80000000; // 0x1e4206f
    g5 = v33;
    int32_t v34 = *(int32_t *)(g6 + 16); // 0x1e42077
    g5 = v34;
    int32_t v35 = *(int32_t *)(v9 + 16) | v33 | v32; // 0x1e4207a
    if (v34 == 64) {
        int32_t v36 = *(int32_t *)(v9 + 48); // 0x1e42083
        g5 = *(int32_t *)(v9 + 20);
        *(int32_t *)(v36 + 4) = v35;
        *(int32_t *)v36 = g5;
        return g2;
    }
    int32_t result; // 0x1e420aa
    if (v34 == 32) {
        // 0x1e4209d
        *(int32_t *)*(int32_t *)(v9 + 48) = v35;
        result = g2;
    } else {
        result = v14;
    }
    // 0x1e420a3
    return result;
}

// Address range: 0x1e420b0 - 0x1e420c8
int32_t function_1e420b0(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g2 = a2;
    g5 = v1;
    int32_t result = function_1e41ee0(v1, a2, &g452); // 0x1e420bf
    g2 = result;
    return result;
}

// Address range: 0x1e420d0 - 0x1e420e8
int32_t function_1e420d0(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g2 = a2;
    g5 = v1;
    int32_t result = function_1e41ee0(v1, a2, &g453); // 0x1e420df
    g2 = result;
    return result;
}

// Address range: 0x1e420f0 - 0x1e42125
int32_t function_1e420f0(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g2 = a2;
    int32_t v2; // bp-16
    g5 = v2;
    int32_t v3; // bp-12
    g7 = v3;
    g2 = function_1e44520(&v3, &v2, a2, 0, 0, 0, 0);
    g5 = v1;
    int32_t result = function_1e420b0(&v3, v1); // 0x1e4211c
    g2 = result;
    return result;
}

// Address range: 0x1e42130 - 0x1e42165
int32_t function_1e42130(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g2 = a2;
    int32_t v2; // bp-16
    g5 = v2;
    int32_t v3; // bp-12
    g7 = v3;
    g2 = function_1e44520(&v3, &v2, a2, 0, 0, 0, 0);
    g5 = v1;
    int32_t result = function_1e420d0(&v3, v1); // 0x1e4215c
    g2 = result;
    return result;
}

// Address range: 0x1e42170 - 0x1e421f1
int32_t function_1e42170(int32_t a1, int32_t a2, int32_t * a3) {
    int32_t v1 = (int32_t)a3;
    g5 = v1;
    int32_t v2 = g4; // 0x1e42174
    g2 = a2;
    int32_t v3 = g6; // bp-12
    int32_t v4 = a1 + 1; // 0x1e42180
    g3 = *(int32_t *)(v1 + 12);
    *(char *)a1 = 48;
    int32_t v5; // 0x1e421a2
    if (g2 < 1) {
        // 0x1e42170
        v5 = v4;
    } else {
        while (true) {
            int32_t v6 = g3; // 0x1e4218f
            unsigned char v7 = *(char *)v6; // 0x1e4218f
            g4 = (g4 & -256) | (int32_t)v7;
            if (v7 == 0) {
                // 0x1e4219b
                *(char *)v4 = 48;
            } else {
                // 0x1e42196
                g3 = v6 + 1;
                *(char *)v4 = v7;
            }
            int32_t v8 = v4 + 1; // 0x1e4219e
            v4 = v8;
            int32_t v9 = g2 - 1; // 0x1e4219f
            g2 = v9;
            if (v9 == 0) {
                v5 = v8;
                // break -> 0x1e421a2
                break;
            }
        }
    }
    // 0x1e421a2
    *(char *)v5 = 0;
    if (g2 >= 0) {
        // 0x1e421a9
        if (*(char *)g3 >= 53) {
            int32_t v10 = v4 - 1; // 0x1e421af
            v4 = v10;
            int32_t v11; // 0x1e421be
            if (*(char *)v10 == 57) {
                *(char *)v10 = 48;
                int32_t v12 = v4 - 1; // 0x1e421b8
                v4 = v12;
                v11 = v12;
                while (*(char *)v12 == 57) {
                    // 0x1e421b5
                    *(char *)v12 = 48;
                    v12 = v4 - 1;
                    v4 = v12;
                    v11 = v12;
                }
            } else {
                v11 = v10;
            }
            char * v13 = (char *)v11; // 0x1e421be
            *v13 = *v13 + 1;
        }
    }
    char * v14 = (char *)a1; // 0x1e421c0
    if (*v14 == 49) {
        int32_t * v15 = (int32_t *)(g5 + 4); // 0x1e421c6
        *v15 = *v15 + 1;
        g6 = v3;
        g4 = v2;
        return g2;
    }
    // 0x1e421cd
    g5 = -1;
    g2 = 0;
    int32_t v16 = -1; // 0x1e421d4
    int32_t v17; // 0x1e421d6
    int32_t v18; // 0x1e421d8
    while (true) {
        if (v16 == 0) {
            v18 = v4;
            v17 = 0;
            // break -> ._crit_edge
            break;
        }
        int32_t v19 = (g1 ? -1 : 1) + v4; // 0x1e421d4
        int32_t v20 = v16 - 1; // 0x1e421d4
        g5 = v20;
        if (*(char *)v4 == 0) {
            v18 = v19;
            v17 = v20;
            // break -> ._crit_edge
            break;
        }
        v4 = v19;
        v16 = v20;
    }
    int32_t v21 = -1 - v17; // 0x1e421d6
    g2 = v21;
    int32_t v22 = v21 / 4; // 0x1e421dc
    g5 = v22;
    __asm_rep_movsd_memcpy(v14, (char *)(v18 - v21), v22);
    char * v23 = (char *)((g1 ? -4 : 4) * v22 + a1); // 0x1e421e3
    int32_t v24 = g2 & 3; // 0x1e421e8
    g5 = v24;
    __asm_rep_movsb_memcpy(v23, v23, v24);
    g5 = 0;
    g6 = v3;
    g4 = v2;
    return g2;
}

// Address range: 0x1e42200 - 0x1e42281
int32_t function_1e42200(int32_t result, int32_t a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6) {
    // 0x1e42200
    int32_t v1;
    g2 = v1;
    int32_t v2; // bp-40
    g5 = v2;
    int32_t v3 = g4; // 0x1e4220b
    function_1e42290(&v2, &v1, g6, g8, v3);
    g5 = v2;
    char v4; // bp-28
    int32_t v5;
    int32_t v6;
    int32_t v7 = function_1e44c70(v2, v5, v6, 17, 0, (int32_t *)&v4, (int32_t)&g708); // 0x1e42230
    *(int32_t *)(result + 8) = v7;
    g2 = v4;
    char v8;
    *(int32_t *)result = (int32_t)v8;
    *(int32_t *)(result + 4) = g2;
    g5 = -1;
    g2 = 0;
    int32_t v9; // bp-24
    int32_t v10 = v9;
    int32_t v11 = -1; // 0x1e42259
    int32_t v12; // 0x1e4225b
    int32_t v13; // 0x1e4225d
    while (true) {
        if (v11 == 0) {
            v13 = v10;
            v12 = 0;
            // break -> ._crit_edge
            break;
        }
        int32_t v14 = (g1 ? -1 : 1) + v10; // 0x1e42259
        int32_t v15 = v11 - 1; // 0x1e42259
        g5 = v15;
        if (*(char *)v10 == 0) {
            v13 = v14;
            v12 = v15;
            // break -> ._crit_edge
            break;
        }
        v10 = v14;
        v11 = v15;
    }
    int32_t v16 = -1 - v12; // 0x1e4225b
    int32_t v17 = v16 / 4; // 0x1e42261
    g5 = v17;
    g2 = a2;
    __asm_rep_movsd_memcpy((char *)a2, (char *)(v13 - v16), v17);
    char * v18 = (char *)((g1 ? -4 : 4) * v17 + a2); // 0x1e4226c
    int32_t v19 = v16 & 3; // 0x1e42270
    g5 = v19;
    __asm_rep_movsb_memcpy(v18, v18, v19);
    g5 = 0;
    *(int32_t *)(result + 12) = g2;
    g2 = result;
    g4 = v3;
    return result;
}

// Address range: 0x1e42290 - 0x1e4234c
int32_t function_1e42290(int32_t * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = (int32_t)a1;
    g2 = v1;
    int32_t v3 = g4; // bp-4
    uint16_t v4 = *(int16_t *)(v1 + 6); // 0x1e42295
    int32_t v5 = g8; // 0x1e42299
    int32_t v6 = g3; // 0x1e422a3
    uint16_t v7 = v4 / 16 & 2047; // 0x1e422a4
    int32_t v8 = v5 & -0x10000; // 0x1e422a4
    int32_t v9 = (g7 & -0x10000) | (int32_t)(v4 & -0x8000); // edx
    int32_t v10 = *(int32_t *)(v1 + 4) & 0xfffff; // 0x1e422b5
    g5 = v10;
    uint32_t v11 = *a2; // 0x1e422bb
    g2 = v7;
    int32_t v12; // edi
    int32_t v13; // esi
    int32_t v14; // 0x1e4230c
    if (v7 == 0) {
        // 0x1e422d2
        g2 = 0;
        if (v10 == 0) {
            if (v11 == 0) {
                // 0x1e422dc
                v12 = v2;
                g3 = v6;
                *(int16_t *)(v2 + 8) = 0;
                *(int32_t *)(v12 + 4) = g2;
                *(int32_t *)v12 = g2;
                g8 = v5;
                g4 = v3;
                return g2;
            }
        }
        // 0x1e422ee
        v13 = v8 | 0x3c01;
        v14 = 0;
    } else {
        if (v7 == 2047) {
            // 0x1e422f7
            v13 = v8 | 0x7fff;
            v14 = -0x80000000;
        } else {
            // 0x1e422cb
            v13 = (int32_t)(v7 + 0x3c00) | v8;
            v14 = -0x80000000;
        }
    }
    // 0x1e422fb
    v12 = v2;
    int32_t v15 = v11 / 0x200000; // 0x1e42304
    g2 = v15;
    g5 = v15 | 2048 * v10 | v14;
    *a1 = 2048 * v11;
    int32_t v16 = g5; // 0x1e42310
    *(int32_t *)(v12 + 4) = v16;
    if (v16 > -1) {
        int32_t v17 = v13; // 0x1e4231b
        v13 = (v17 + 0xffff & 0xffff) | (v17 & -0x10000);
        int32_t * v18 = (int32_t *)v12; // 0x1e4231d
        int32_t v19 = *v18; // 0x1e4231d
        g2 = v19;
        int32_t v20 = 2 * *(int32_t *)(v12 + 4); // 0x1e4232a
        g5 = v20;
        int32_t v21 = 2 * v19; // 0x1e4232f
        g2 = v21;
        int32_t v22 = v20 | v19 >> 31; // ebx
        *v18 = v21;
        *(int32_t *)(v12 + 4) = v22;
        while (v22 > 0xffffffff) {
            // 0x1e4231b
            v17 = v13;
            v13 = (v17 + 0xffff & 0xffff) | (v17 & -0x10000);
            v18 = (int32_t *)v12;
            v19 = *v18;
            g2 = v19;
            v20 = 2 * *(int32_t *)(v12 + 4);
            g5 = v20;
            v21 = 2 * v19;
            g2 = v21;
            v22 = v20 | v19 >> 31;
            *v18 = v21;
            *(int32_t *)(v12 + 4) = v22;
        }
    }
    // 0x1e42340
    g3 = v6;
    *(int16_t *)(v12 + 8) = (int16_t)(v9 | v13);
    g8 = v5;
    g4 = v3;
    return g2;
}

// Address range: 0x1e42350 - 0x1e42504
int32_t function_1e42350(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g454; // 0x1e42353
    int32_t lpCharType2 = g3; // bp-20
    if (v1 != 0) {
        // branch -> 0x1e423bc
    } else {
        // 0x1e42360
        int32_t lpCharType; // bp-4
        g2 = lpCharType;
        bool v2 = GetStringTypeW(1, (int16_t *)&g68, 1, (int16_t *)&lpCharType); // 0x1e42374
        g2 = v2;
        if (!v2) {
            // 0x1e42386
            g2 = lpCharType2;
            bool v3 = GetStringTypeA(0, 1, (char *)&g67, 1, (int16_t *)&lpCharType2); // 0x1e42396
            g2 = v3;
            if (!v3) {
                // 0x1e423ac
                g2 = 0;
                g3 = 0;
                g6 = 1;
                g8 = (int32_t)&g67;
                return 0;
            }
            // 0x1e423a0
            g454 = 2;
            v1 = 2;
        } else {
            // 0x1e4237a
            g454 = 1;
            v1 = 1;
        }
    }
    if (v1 == 1) {
        int32_t v4 = *(int32_t *)(g9 + 36); // 0x1e423c5
        g2 = v4;
        g5 = *(int32_t *)(g9 + 32);
        g7 = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 4) = v4;
        g2 = *(int32_t *)(g9 + 24);
        *(int32_t *)(g9 - 8) = g5;
        *(int32_t *)(g9 - 12) = g7;
        *(int32_t *)(g9 - 16) = g2;
        bool v5 = GetStringTypeW((int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (int16_t *)&g708); // 0x1e423d9
        int32_t result = v5; // 0x1e423d9
        g2 = result;
        g3 = *(int32_t *)g9;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        return result;
    }
    int32_t v6; // 0x1e424fc
    int32_t result2; // 0x1e42503
    int32_t v7; // 0x1e42435
    if (v1 != 2) {
        // 0x1e423e3
        result2 = g2;
        v6 = g9;
        goto lab_0x1e424fc;
    } else {
        // 0x1e423f0
        g6 = 0;
        g3 = *(int32_t *)(g9 + 40);
        *(int32_t *)(g9 + 16) = 0;
        if (g3 == g6) {
            // 0x1e423fe
            g3 = (int32_t)g130;
        }
        // 0x1e42404
        g2 = *(int32_t *)(g9 + 32);
        *(int32_t *)(g9 - 4) = 0;
        g5 = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = 0;
        *(int32_t *)(g9 - 16) = 0;
        *(int32_t *)(g9 - 20) = g2;
        *(int32_t *)(g9 - 24) = g5;
        *(int32_t *)(g9 - 28) = 544;
        *(int32_t *)(g9 - 32) = g3;
        int32_t v8 = WideCharToMultiByte((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708, (bool *)&g708); // 0x1e4241c
        g2 = v8;
        if (v8 == 0) {
            // 0x1e42428
            g2 = 0;
            g3 = *(int32_t *)g9;
            g6 = *(int32_t *)(g9 + 4);
            g8 = *(int32_t *)(g9 + 8);
            return 0;
        }
        // 0x1e42432
        *(int32_t *)(g9 - 4) = v8;
        *(int32_t *)(g9 - 8) = 1;
        v7 = function_1e22760((int32_t)&g708, (int32_t)&g708);
        g2 = v7;
        g8 = v7;
        if (v7 == 0) {
            // 0x1e42443
            g2 = 0;
            g3 = *(int32_t *)(g9 + 8);
            g6 = *(int32_t *)(g9 + 12);
            g8 = *(int32_t *)(g9 + 16);
            return 0;
        }
        // 0x1e4244d
        g2 = *(int32_t *)(g9 + 40);
        *(int32_t *)(g9 + 4) = 0;
        g5 = *(int32_t *)(g9 + 36);
        *(int32_t *)g9 = 0;
        *(int32_t *)(g9 - 4) = v8;
        *(int32_t *)(g9 - 8) = v7;
        *(int32_t *)(g9 - 12) = g2;
        *(int32_t *)(g9 - 16) = g5;
        *(int32_t *)(g9 - 20) = 544;
        *(int32_t *)(g9 - 24) = g3;
        int32_t v9 = WideCharToMultiByte((int32_t)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (char *)&g708, (bool *)&g708); // 0x1e42463
        g2 = v9;
        if (v9 == 0) {
            goto lab_0x1e424e6;
        } else {
            int32_t v10 = 2 * v8 + 2; // 0x1e4246d
            g2 = v10;
            *(int32_t *)(g9 - 4) = v10;
            int32_t v11 = function_1e22670((int32_t)&g708); // 0x1e42475
            g2 = v11;
            g6 = v11;
            if (v11 == 0) {
                goto lab_0x1e424e6;
            } else {
                int32_t v12 = *(int32_t *)(g9 + 48); // 0x1e42483
                g5 = v12;
                if (v12 == 0) {
                    // 0x1e4248b
                    g5 = g126;
                }
                // 0x1e42491
                g2 = *(int32_t *)(g9 + 36);
                *(int32_t *)g9 = v11;
                g7 = *(int32_t *)(g9 + 28);
                *(int32_t *)(g9 - 4) = v8;
                g3 = 2 * g2 + g6;
                *(int32_t *)(g9 - 8) = v7;
                *(int16_t *)g3 = -1;
                *(int32_t *)(g9 - 4) = g7;
                *(int16_t *)(g3 - 2) = -1;
                *(int32_t *)(g9 - 4) = g5;
                bool v13 = GetStringTypeA((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708); // 0x1e424ad
                int32_t v14 = v13; // 0x1e424ad
                g2 = v14;
                *(int32_t *)(g9 + 16) = v14;
                if (*(int16_t *)(g3 - 2) == -1) {
                    // 0x1e424de
                    *(int32_t *)(g9 + 16) = 0;
                    goto lab_0x1e424e6;
                } else {
                    // 0x1e424bf
                    if (*(int16_t *)g3 != -1) {
                        // 0x1e424de
                        *(int32_t *)(g9 + 16) = 0;
                        goto lab_0x1e424e6;
                    } else {
                        int32_t v15 = *(int32_t *)(g9 + 32); // 0x1e424c7
                        g2 = v15;
                        g5 = *(int32_t *)(g9 + 36);
                        int32_t v16 = 2 * v15; // 0x1e424cf
                        g2 = v16;
                        *(int32_t *)(g9 - 4) = v16;
                        *(int32_t *)(g9 - 8) = g6;
                        *(int32_t *)(g9 - 12) = g5;
                        int32_t v17 = function_1e3e040((int32_t)&g708, (int32_t)&g708, (int32_t)&g708); // 0x1e424d4
                        g2 = v17;
                        goto lab_0x1e424e6;
                    }
                }
            }
        }
    }
  lab_0x1e424fc:
    // 0x1e424fc
    g3 = *(int32_t *)v6;
    g6 = *(int32_t *)(v6 + 4);
    g8 = *(int32_t *)(v6 + 8);
    return result2;
  lab_0x1e424e6:
    // 0x1e424e6
    *(int32_t *)(g9 - 4) = v7;
    g2 = function_1e22600((int32_t)&g708);
    *(int32_t *)g9 = g6;
    g2 = function_1e22600((int32_t)&g708);
    int32_t v18 = *(int32_t *)(g9 + 20); // 0x1e424f5
    g2 = v18;
    result2 = v18;
    v6 = g9 + 4;
    goto lab_0x1e424fc;
}

// Address range: 0x1e42510 - 0x1e42633
int32_t function_1e42510(int32_t a1, char * a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6) {
    int32_t v1 = g455; // 0x1e42513
    g2 = v1;
    if (v1 != 0) {
        // branch -> 0x1e42572
    } else {
        // 0x1e42520
        int32_t lpCharType; // bp-2
        g2 = lpCharType;
        bool v2 = GetStringTypeA(0, 1, (char *)&g67, 1, (int16_t *)&lpCharType); // 0x1e42536
        g2 = v2;
        if (!v2) {
            // 0x1e42543
            int32_t lpCharType2; // bp-22
            g2 = lpCharType2;
            bool v3 = GetStringTypeW(1, (int16_t *)&g68, 1, (int16_t *)&lpCharType2); // 0x1e42551
            g2 = v3;
            if (!v3) {
                // 0x1e42562
                g2 = 0;
                g3 = 1;
                g6 = (int32_t)&g68;
                g8 = 1;
                return 0;
            }
            // 0x1e4255b
            g2 = 1;
            v1 = 1;
        } else {
            // 0x1e4253c
            g2 = 2;
            v1 = 2;
        }
    }
    // 0x1e42572
    g455 = v1;
    if (v1 == 2) {
        int32_t v4 = *(int32_t *)(g9 + 44); // 0x1e4257c
        g7 = v4;
        if (v4 == 0) {
            // 0x1e42584
            g7 = g126;
        }
        int32_t v5 = *(int32_t *)(g9 + 36); // 0x1e4258a
        g5 = v5;
        g2 = *(int32_t *)(g9 + 32);
        *(int32_t *)(g9 - 4) = v5;
        g5 = *(int32_t *)(g9 + 24);
        *(int32_t *)(g9 - 8) = g2;
        *(int32_t *)(g9 - 12) = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 16) = g5;
        *(int32_t *)(g9 - 20) = g7;
        bool v6 = GetStringTypeA((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708); // 0x1e4259f
        int32_t result = v6; // 0x1e4259f
        g2 = result;
        g3 = *(int32_t *)g9;
        g6 = *(int32_t *)(g9 + 4);
        g8 = *(int32_t *)(g9 + 8);
        return result;
    }
    // 0x1e425a9
    g455 = v1;
    int32_t v7; // 0x1e4262b
    int32_t result2; // 0x1e42632
    if (v1 != 1) {
        // 0x1e425a9
        result2 = v1;
        v7 = g9;
    } else {
        // 0x1e425b3
        g4 = 0;
        g8 = 0;
        int32_t v8 = *(int32_t *)(g9 + 40); // 0x1e425b7
        g6 = v8;
        if (v8 == 0) {
            // 0x1e425bf
            g6 = (int32_t)g130;
        }
        // 0x1e425c5
        g2 = *(int32_t *)(g9 + 32);
        *(int32_t *)(g9 - 4) = 0;
        g5 = *(int32_t *)(g9 + 28);
        *(int32_t *)(g9 - 8) = 0;
        *(int32_t *)(g9 - 12) = g2;
        *(int32_t *)(g9 - 16) = g5;
        *(int32_t *)(g9 - 20) = 9;
        *(int32_t *)(g9 - 24) = g6;
        int32_t v9 = MultiByteToWideChar((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e425d6
        g2 = v9;
        g3 = v9;
        if (v9 != 0) {
            // 0x1e425e2
            *(int32_t *)(g9 - 4) = v9;
            *(int32_t *)(g9 - 8) = 2;
            int32_t v10 = function_1e22760((int32_t)&g708, (int32_t)&g708); // 0x1e425e5
            g2 = v10;
            g8 = v10;
            if (v10 != 0) {
                // 0x1e425f3
                g2 = *(int32_t *)(g9 + 40);
                *(int32_t *)(g9 + 4) = v9;
                g5 = *(int32_t *)(g9 + 36);
                *(int32_t *)g9 = g8;
                *(int32_t *)(g9 - 4) = g2;
                *(int32_t *)(g9 - 8) = g5;
                *(int32_t *)(g9 - 12) = 1;
                *(int32_t *)(g9 - 16) = g6;
                int32_t v11 = MultiByteToWideChar((int32_t)&g708, (int32_t)&g708, (char *)&g708, (int32_t)&g708, (int16_t *)&g708, (int32_t)&g708); // 0x1e42602
                g2 = v11;
                if (v11 != 0) {
                    int32_t v12 = *(int32_t *)(g9 + 36); // 0x1e4260c
                    g5 = v12;
                    *(int32_t *)(g9 - 4) = v12;
                    *(int32_t *)(g9 - 8) = v11;
                    g2 = *(int32_t *)(g9 + 24);
                    *(int32_t *)(g9 - 12) = g8;
                    *(int32_t *)(g9 - 16) = g2;
                    bool v13 = GetStringTypeW((int32_t)&g708, (int16_t *)&g708, (int32_t)&g708, (int16_t *)&g708); // 0x1e42618
                    int32_t v14 = v13; // 0x1e42618
                    g2 = v14;
                    g4 = v14;
                }
            }
        }
        // 0x1e42620
        *(int32_t *)(g9 - 4) = g8;
        function_1e22600((int32_t)&g708);
        g2 = g4;
        result2 = g4;
        v7 = g9 + 4;
    }
    // 0x1e4262b
    g3 = *(int32_t *)v7;
    g6 = *(int32_t *)(v7 + 4);
    g8 = *(int32_t *)(v7 + 8);
    return result2;
}

// Address range: 0x1e42640 - 0x1e42643
int32_t function_1e42640(int32_t * a1) {
    // 0x1e42640
    g2 = 0;
    return 0;
}

// Address range: 0x1e42650 - 0x1e42a61
int32_t function_1e42650(int32_t lpFileName, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1e42650
    g2 = 0;
    int32_t lpSecurityAttributes = 12; // bp-12
    int32_t v1 = g8; // 0x1e42662
    int32_t v2 = g3; // 0x1e42668
    int32_t v3;
    if ((char)a2 > -1) {
        // 0x1e42679
        v3 = 1;
    } else {
        v3 = 0;
    }
    // 0x1e42683
    if ((int16_t)a2 <= -1) {
        goto lab_0x1e426a2;
    } else {
        // 0x1e4268b
        if ((a2 & 0x4000) != 0) {
            // 0x1e4269f
            goto lab_0x1e426a2;
        } else {
            // 0x1e42693
            if (g474 == 0x8000) {
                goto lab_0x1e426a2;
            } else {
                // 0x1e4269f
                goto lab_0x1e426a2;
            }
        }
    }
  lab_0x1e426a2:;
    int32_t v4 = a2 & 3; // 0x1e426a4
    g2 = v4;
    int32_t v5;
    if (v4 != 0) {
        // 0x1e426a9
        if (v4 != 1) {
            // 0x1e426ae
            if (v4 != 2) {
                int32_t v6 = function_1e23ad0(); // 0x1e426b3
                g2 = v6;
                *(int32_t *)v6 = 22;
                *(int32_t *)function_1e23ae0() = 0;
                g2 = -1;
                g8 = v1;
                return -1;
            }
            v5 = -0x40000000;
        } else {
            v5 = 0x40000000;
        }
    } else {
        v5 = -0x80000000;
    }
    // 0x1e426f2
    g2 = a3 - 16;
    g5 = 0;
    unsigned char v7 = *(char *)(a3 + (int32_t)&g21 - 16); // 0x1e42700
    int32_t v8 = v7; // 0x1e42700
    g5 = v8;
    g693 = v8;
    int32_t dwShareMode;
    switch (v7) {
        case 0: {
            dwShareMode = 0;
            goto lab_0x1e42756;
        }
        case 1: {
            dwShareMode = 1;
            goto lab_0x1e42756;
        }
        case 2: {
            dwShareMode = 2;
            goto lab_0x1e42756;
        }
        case 3: {
            dwShareMode = 3;
            goto lab_0x1e42756;
        }
        default: {
            int32_t v9 = function_1e23ad0(); // 0x1e4270d
            g2 = v9;
            *(int32_t *)v9 = 22;
            *(int32_t *)function_1e23ae0() = 0;
            g2 = -1;
            g8 = v1;
            return -1;
        }
    }
  lab_0x1e42756:;
    uint32_t v10 = a2 & 1792; // 0x1e42758
    g2 = v10;
    int32_t dwCreationDisposition;
    if (v10 > 256) {
        // 0x1e4276c
        if (v10 > 768) {
            // 0x1e4277e
            if (v10 > 1280) {
                // 0x1e42790
                if (v10 == 1536) {
                    dwCreationDisposition = 5;
                    goto lab_0x1e427f1;
                } else {
                    // 0x1e42797
                    if (v10 == 1792) {
                        dwCreationDisposition = 1;
                        goto lab_0x1e427f1;
                    } else {
                        goto lab_0x1e4279e;
                    }
                }
            } else {
                if (v10 == 1280) {
                    dwCreationDisposition = 1;
                    goto lab_0x1e427f1;
                } else {
                    // 0x1e42787
                    if (v10 == 1024) {
                        dwCreationDisposition = 3;
                        goto lab_0x1e427f1;
                    } else {
                        goto lab_0x1e4279e;
                    }
                }
            }
        } else {
            if (v10 == 768) {
                dwCreationDisposition = 2;
                goto lab_0x1e427f1;
            } else {
                // 0x1e42775
                if (v10 == 512) {
                    dwCreationDisposition = 5;
                    goto lab_0x1e427f1;
                } else {
                    goto lab_0x1e4279e;
                }
            }
        }
    } else {
        if (v10 == 256) {
            dwCreationDisposition = 4;
            goto lab_0x1e427f1;
        } else {
            // 0x1e42766
            if (v10 == 0) {
                dwCreationDisposition = 3;
                goto lab_0x1e427f1;
            } else {
                goto lab_0x1e4279e;
            }
        }
    }
  lab_0x1e427f1:
    // 0x1e427f1
    g3 = 128;
    int32_t v11; // 0x1e42822
    if ((a2 & 256) != 0) {
        int32_t v12 = -1 - g81 & a4; // 0x1e42805
        g2 = v12;
        if ((char)v12 > -1) {
            // 0x1e4280d
            g3 = 1;
            v11 = 1;
        } else {
            v11 = 128;
        }
    } else {
        v11 = 128;
    }
    // 0x1e42812
    int32_t dwDesiredAccess;
    int32_t v13; // 0x1e42822
    if ((a2 & 64) != 0) {
        // 0x1e4281a
        v13 = v11 | 0x4000000;
        g3 = v13;
        dwDesiredAccess = v5 | 0x10000;
    } else {
        v13 = v11;
        dwDesiredAccess = v5;
    }
    // 0x1e42828
    int32_t v14; // 0x1e42830
    if ((a2 & 0x1000) != 0) {
        // 0x1e42830
        v14 = v13 | 256;
        g3 = v14;
    } else {
        v14 = v13;
    }
    // 0x1e42836
    if ((a2 & 32) == 0) {
        // 0x1e42846
        if ((a2 & 16) != 0) {
            // 0x1e4284e
            g3 = v14 | 0x10000000;
        }
    } else {
        // 0x1e4283e
        g3 = v14 | 0x8000000;
    }
    int32_t v15 = function_1e23af0(v2, g6, v1, g4, dwShareMode, dwDesiredAccess, dwCreationDisposition, 12, 0, v3); // 0x1e42854
    g2 = v15;
    g6 = v15;
    if (v15 == -1) {
        int32_t v16 = function_1e23ad0(); // 0x1e42860
        g2 = v16;
        *(int32_t *)v16 = 24;
        *(int32_t *)function_1e23ae0() = 0;
        g2 = -1;
        g8 = v1;
        return -1;
    }
    // 0x1e42883
    g2 = dwDesiredAccess;
    g5 = lpFileName;
    int32_t * fileHandle = CreateFileA((char *)lpFileName, dwDesiredAccess, dwShareMode, (struct _SECURITY_ATTRIBUTES *)&lpSecurityAttributes, dwCreationDisposition, g3, NULL); // 0x1e428a5
    int32_t v17 = (int32_t)fileHandle; // 0x1e428a5
    g2 = v17;
    g3 = v17;
    if (fileHandle == (int32_t *)-1) {
        int32_t errorCode = GetLastError(); // 0x1e428ae
        g2 = errorCode;
        g2 = function_1e23a50(errorCode);
        function_1e23e40(g6);
        g2 = -1;
        g8 = dwShareMode;
        return -1;
    }
    int32_t v18 = GetFileType(fileHandle); // 0x1e428d4
    g2 = v18;
    if (v18 == 0) {
        // 0x1e428de
        g2 = CloseHandle((int32_t *)g3);
        int32_t errorCode2 = GetLastError(); // 0x1e428e5
        g2 = errorCode2;
        g2 = function_1e23a50(errorCode2);
        function_1e23e40(g6);
        g2 = -1;
        g8 = lpFileName;
        return -1;
    }
    // 0x1e4290a
    int32_t v19; // 0x1e4291d
    if (v18 != 2) {
        int32_t v20 = g4;
        if (v18 == 3) {
            // 0x1e42919
            v19 = v20 | 8;
        } else {
            v19 = v20;
        }
    } else {
        // 0x1e4290f
        v19 = g4 | 64;
    }
    // 0x1e4291c
    g4 = v19 | 1;
    function_1e23c30(g6, g3);
    int32_t v21 = g6; // 0x1e42929
    int32_t v22 = (v21 / 8 & -4) + (int32_t)&g677; // 0x1e42931
    g3 = v22;
    int32_t v23 = v21 & 31; // 0x1e42939
    g2 = v23;
    int32_t v24 = 36 * v23; // 0x1e42942
    g5 = v24;
    char v25 = g4; // 0x1e42947
    unsigned char v26 = v25 & 72; // 0x1e42947
    g2 = v26;
    int32_t v27 = v24 + 4; // 0x1e4294d
    *(char *)(v27 + *(int32_t *)v22) = v25;
    char v28 = g2; // bp-56
    if (v26 == 0) {
        // 0x1e4295b
        if ((char)g4 <= 255) {
            // 0x1e42964
            if ((g8 & 2) != 0) {
                int32_t v29 = function_1e23ef0(g6, -1, 2); // 0x1e42975
                g2 = v29;
                g4 = v29;
                if (v29 != -1) {
                    // 0x1e429b4
                    char v30; // bp-57
                    g2 = &v30;
                    v30 = 0;
                    int32_t v31 = function_1e440e0(g6, (int32_t *)&v30, 1); // 0x1e429c1
                    g2 = v31;
                    if (v31 == 0) {
                        // 0x1e429cd
                        if (v30 == 26) {
                            int32_t v32 = function_1e45010(g6, g4); // 0x1e429d6
                            g2 = v32;
                            if (v32 == -1) {
                                // 0x1e429e3
                                g2 = function_1e23910(g6);
                                function_1e23e40(g6);
                                g2 = -1;
                                g8 = dwDesiredAccess;
                                return -1;
                            }
                        }
                    }
                    int32_t v33 = function_1e23ef0(g6, 0, 0); // 0x1e42a07
                    g2 = v33;
                    if (v33 == -1) {
                        // 0x1e42a14
                        g2 = function_1e23910(g6);
                        function_1e23e40(g6);
                        g2 = -1;
                        g8 = dwDesiredAccess;
                        return -1;
                    }
                } else {
                    int32_t v34 = function_1e23ae0(); // 0x1e42984
                    g2 = v34;
                    if (*(int32_t *)v34 != 131) {
                        // 0x1e42995
                        g2 = function_1e23910(g6);
                        function_1e23e40(g6);
                        g2 = -1;
                        g8 = dwDesiredAccess;
                        return -1;
                    }
                }
            }
        }
    }
    // 0x1e42a33
    if (v28 == 0) {
        // 0x1e42a3a
        if ((g8 & 8) != 0) {
            int32_t v35 = *(int32_t *)g3; // 0x1e42a42
            g2 = v35;
            g5 = v24;
            char * v36 = (char *)(v27 + v35); // 0x1e42a49
            *v36 = *v36 | 32;
        }
    }
    // 0x1e42a4e
    function_1e23e40(g6);
    g2 = g6;
    g8 = dwDesiredAccess;
    return g6;
  lab_0x1e4279e:;
    int32_t v37 = function_1e23ad0(); // 0x1e4279e
    g2 = v37;
    *(int32_t *)v37 = 22;
    *(int32_t *)function_1e23ae0() = 0;
    g2 = -1;
    g8 = v1;
    return -1;
}

// Address range: 0x1e42a78 - 0x1e42b5c
int32_t function_1e42a78(void) {
    int32_t v1 = g2; // 0x1e42a78
    char * v2 = (char *)(v1 + g9); // 0x1e42a78
    *v2 = *v2 + (char)v1;
    int32_t v3 = g2; // 0x1e42a7b
    g2 = (v3 + 86 & 255) | (v3 & -256);
    g2 = __asm_int3();
    g2 = __asm_int3();
    g2 = __asm_int3();
    g2 = __asm_int3();
    g2 = __asm_int3();
    g2 = __asm_int3();
    g2 = __asm_int3();
    if (g129 == 0) {
        // 0x1e42b28
        *(int32_t *)&g476 = (int32_t)&g475;
        g2 = g458;
        function_1e42ee0(g458);
        g2 = g458;
        function_1e22600(g458);
        g2 = 0;
        g458 = 0;
        return 0;
    }
    int32_t v4 = function_1e22760(1, 172); // 0x1e42ac1
    g2 = v4;
    g8 = v4;
    if (v4 == 0) {
        // 0x1e42acf
        g2 = 1;
        return 1;
    }
    int32_t v5 = function_1e42b60(v4); // 0x1e42ad7
    g2 = v5;
    if (v5 != 0) {
        // 0x1e42ae3
        g2 = function_1e42ee0(v4);
        function_1e22600(v4);
        g2 = 1;
        return 1;
    }
    // 0x1e42afc
    g2 = g458;
    *(int32_t *)&g476 = v4;
    function_1e42ee0(g458);
    g2 = g458;
    function_1e22600(g458);
    g2 = 0;
    g458 = v4;
    return 0;
}

// Address range: 0x1e42b60 - 0x1e42ed4
int32_t function_1e42b60(int32_t a1) {
    int32_t v1 = g8; // 0x1e42b61
    int32_t v2 = g6; // 0x1e42b62
    g4 = g469;
    g8 = a1;
    int32_t v3 = g468; // 0x1e42b73
    g6 = v3;
    if (a1 == 0) {
        // 0x1e42b7e
        g2 = -1;
        g6 = v2;
        g8 = v1;
        return -1;
    }
    int32_t v4 = a1 + 4; // 0x1e42b88
    g2 = v4;
    g3 = function_1e45150(1, v3, 49, v4);
    int32_t v5 = a1 + 8; // 0x1e42b9b
    g2 = v5;
    g3 |= function_1e45150(1, g6, 50, v5);
    int32_t v6 = a1 + 12; // 0x1e42bae
    g2 = v6;
    g3 |= function_1e45150(1, g6, 51, v6);
    int32_t v7 = a1 + 16; // 0x1e42bc1
    g2 = v7;
    g3 |= function_1e45150(1, g6, 52, v7);
    int32_t v8 = a1 + 20; // 0x1e42bd4
    g2 = v8;
    g3 |= function_1e45150(1, g6, 53, v8);
    int32_t v9 = a1 + 24; // 0x1e42be7
    g2 = v9;
    int32_t v10 = function_1e45150(1, g6, 54, v9); // 0x1e42bf0
    g2 = v10;
    g3 |= v10;
    g3 |= function_1e45150(1, g6, 55, a1);
    int32_t v11 = a1 + 32; // 0x1e42c0a
    g2 = v11;
    g3 |= function_1e45150(1, g6, 42, v11);
    int32_t v12 = a1 + 36; // 0x1e42c1d
    g2 = v12;
    g3 |= function_1e45150(1, g6, 43, v12);
    int32_t v13 = a1 + 40; // 0x1e42c30
    g2 = v13;
    g3 |= function_1e45150(1, g6, 44, v13);
    int32_t v14 = a1 + 44; // 0x1e42c43
    g2 = v14;
    g3 |= function_1e45150(1, g6, 45, v14);
    int32_t v15 = a1 + 48; // 0x1e42c56
    g2 = v15;
    g3 |= function_1e45150(1, g6, 46, v15);
    int32_t v16 = a1 + 52; // 0x1e42c69
    g2 = v16;
    g3 |= function_1e45150(1, g6, 47, v16);
    int32_t v17 = a1 + 28; // 0x1e42c7c
    g2 = v17;
    g3 |= function_1e45150(1, g6, 48, v17);
    int32_t v18 = a1 + 56; // 0x1e42c8f
    g2 = v18;
    g3 |= function_1e45150(1, g6, 68, v18);
    int32_t v19 = a1 + 60; // 0x1e42ca2
    g2 = v19;
    g3 |= function_1e45150(1, g6, 69, v19);
    int32_t v20 = a1 + 64; // 0x1e42cb5
    g2 = v20;
    g3 |= function_1e45150(1, g6, 70, v20);
    int32_t v21 = a1 + 68; // 0x1e42cc8
    g2 = v21;
    g3 |= function_1e45150(1, g6, 71, v21);
    int32_t v22 = a1 + 72; // 0x1e42cdb
    g2 = v22;
    g3 |= function_1e45150(1, g6, 72, v22);
    int32_t v23 = a1 + 76; // 0x1e42cee
    g2 = v23;
    g3 |= function_1e45150(1, g6, 73, v23);
    int32_t v24 = a1 + 80; // 0x1e42d01
    g2 = v24;
    g3 |= function_1e45150(1, g6, 74, v24);
    int32_t v25 = a1 + 84; // 0x1e42d14
    g2 = v25;
    g3 |= function_1e45150(1, g6, 75, v25);
    int32_t v26 = a1 + 88; // 0x1e42d27
    g2 = v26;
    g3 |= function_1e45150(1, g6, 76, v26);
    int32_t v27 = a1 + 92; // 0x1e42d3a
    g2 = v27;
    g3 |= function_1e45150(1, g6, 77, v27);
    int32_t v28 = a1 + 96; // 0x1e42d4d
    g2 = v28;
    g3 |= function_1e45150(1, g6, 78, v28);
    int32_t v29 = a1 + 100; // 0x1e42d60
    g2 = v29;
    g3 |= function_1e45150(1, g6, 79, v29);
    int32_t v30 = a1 + 104; // 0x1e42d73
    g2 = v30;
    g3 |= function_1e45150(1, g6, 56, v30);
    int32_t v31 = a1 + 108; // 0x1e42d86
    g2 = v31;
    g3 |= function_1e45150(1, g6, 57, v31);
    int32_t v32 = a1 + 112; // 0x1e42d99
    g2 = v32;
    g3 |= function_1e45150(1, g6, 58, v32);
    int32_t v33 = a1 + 116; // 0x1e42dac
    g2 = v33;
    g3 |= function_1e45150(1, g6, 59, v33);
    int32_t v34 = a1 + 120; // 0x1e42dbf
    g2 = v34;
    g3 |= function_1e45150(1, g6, 60, v34);
    int32_t v35 = a1 + 124; // 0x1e42dd2
    g2 = v35;
    g3 |= function_1e45150(1, g6, 61, v35);
    int32_t v36 = a1 + 128; // 0x1e42de5
    g2 = v36;
    g3 |= function_1e45150(1, g6, 62, v36);
    int32_t v37 = a1 + 132; // 0x1e42dfb
    g2 = v37;
    g3 |= function_1e45150(1, g6, 63, v37);
    int32_t v38 = a1 + 136; // 0x1e42e11
    g2 = v38;
    g3 |= function_1e45150(1, g6, 64, v38);
    int32_t v39 = a1 + 140; // 0x1e42e27
    g2 = v39;
    g3 |= function_1e45150(1, g6, 65, v39);
    int32_t v40 = a1 + 144; // 0x1e42e3d
    g2 = v40;
    g3 |= function_1e45150(1, g6, 66, v40);
    int32_t v41 = a1 + 148; // 0x1e42e53
    g2 = v41;
    g3 |= function_1e45150(1, g6, 67, v41);
    int32_t v42 = a1 + 152; // 0x1e42e69
    g2 = v42;
    g3 |= function_1e45150(1, g6, 40, v42);
    int32_t v43 = a1 + 156; // 0x1e42e7f
    g2 = v43;
    g3 |= function_1e45150(1, g6, 41, v43);
    int32_t v44 = a1 + 160; // 0x1e42e95
    g2 = v44;
    g3 |= function_1e45150(1, g4, 31, v44);
    int32_t v45 = a1 + 164; // 0x1e42eab
    g2 = v45;
    int32_t v46 = function_1e45150(1, g4, 32, v45); // 0x1e42eb7
    g2 = v46;
    g3 |= v46;
    int32_t result = g3 | function_1e43120(g4, a1); // 0x1e42ecb
    g2 = result;
    g6 = v2;
    g8 = v1;
    return result;
}

