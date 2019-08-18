//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (0100742F) --------------------------------------------------------
signed int timer_init(int a1)
{
    int v1; // eax
    int v3; // edx
    DWORD *v4; // ecx

    v1 = memoryallocate(20 * a1);
    dword_1024F80 = v1;
    if ( !v1 )
        return 1;
    dword_1024F78 = 0;
    v3 = a1 - 1;
    dword_1024F74 = a1;
    dword_10235F4 = 1;
    if ( a1 - 1 > 0 )
    {
        v4 = (DWORD *)(v1 + 12);
        do
        {
            *v4 = v4 + 2;
            v4 += 5;
            --v3;
        }
        while ( v3 );
    }
    *(DWORD *)(20 * a1 + v1 - 8) = 0;
    dword_1024F70 = 0;
    dword_1024F7C = v1;
    return 0;
}
// 10235F4: using guessed type int dword_10235F4;
// 1024F70: using guessed type int dword_1024F70;
// 1024F74: using guessed type int dword_1024F74;
// 1024F78: using guessed type int dword_1024F78;
// 1024F7C: using guessed type int dword_1024F7C;
// 1024F80: using guessed type int dword_1024F80;

//----- (0100749B) --------------------------------------------------------
void timer_uninit()
{
    if ( dword_1024F80 )
        memoryfree(dword_1024F80);
    dword_1024F80 = 0;
}
// 1024F80: using guessed type int dword_1024F80;

//----- (010074B7) --------------------------------------------------------
int timer_set(float a1, int a2, int a3)
{
    signed __int64 v3; // rax
    int v4; // esi
    int v5; // ebx
    DWORD *v7; // ecx
    DWORD *v8; // eax
    int v9; // edx
    DWORD *v10; // edi
    int v11; // eax
    int v12; // [esp+0h] [ebp-8h]
    int v13; // [esp+4h] [ebp-4h]
    int v14; // [esp+10h] [ebp+8h]

    v3 = (signed __int64)(a1 * -1000.0);
    v4 = dword_1024F78;
    v5 = time_ticks - v3;
    v12 = time_ticks - v3;
    if ( dword_1024F78 >= dword_1024F74 )
        return 0;
    v14 = 0;
    v7 = (DWORD *)dword_1024F7C;
    v8 = (DWORD *)(dword_1024F7C + 12);
    v9 = *(DWORD *)(dword_1024F7C + 12);
    *(DWORD *)(dword_1024F7C + 12) = 0;
    dword_1024F7C = v9;
    v13 = dword_1024F70;
    v10 = (DWORD *)dword_1024F70;
    if ( v4 > 0 )
    {
        while ( v5 >= *v10 )
        {
            ++v14;
            v13 = (int)v10;
            v10 = (DWORD *)v10[3];
            if ( v14 >= v4 )
                break;
            v5 = v12;
        }
        if ( v10 != (DWORD *)v13 )
        {
            *v8 = *(DWORD *)(v13 + 12);
            *(DWORD *)(v13 + 12) = v7;
            v5 = v12;
            goto LABEL_12;
        }
        v5 = v12;
    }
    *v8 = dword_1024F70;
    dword_1024F70 = (int)v7;
    LABEL_12:
    v7[1] = a2;
    v7[2] = a3;
    v11 = dword_10235F4;
    v7[4] = dword_10235F4;
    dword_1024F78 = v4 + 1;
    *v7 = v5;
    dword_10235F4 = v11 + 1;
    if ( v11 + 1 <= 0 )
        dword_10235F4 = 1;
    return v7[4];
}
// 10235F4: using guessed type int dword_10235F4;
// 1024F70: using guessed type int dword_1024F70;
// 1024F74: using guessed type int dword_1024F74;
// 1024F78: using guessed type int dword_1024F78;
// 1024F7C: using guessed type int dword_1024F7C;
// 1024F84: using guessed type int time_ticks;

//----- (0100758D) --------------------------------------------------------
signed int timer_check()
{
    DWORD *v0; // eax
    signed int v1; // ebx
    DWORD *v2; // ecx
    int v3; // edx
    bool v4; // zf
    DWORD *v5; // ecx
    int v6; // edx
    char v8; // [esp+4h] [ebp-14h]
    int v9; // [esp+8h] [ebp-10h]
    void (*v10)(int, int); // [esp+Ch] [ebp-Ch]
    int v11; // [esp+14h] [ebp-4h]

    v0 = (DWORD *)dword_1024F70;
    v1 = 0;
    if ( dword_1024F70 )
    {
        while ( time_ticks >= *v0 )
        {
            --dword_1024F78;
            qmemcpy(&v8, v0, 0x14u);
            v2 = v0 + 3;
            v3 = (int)v0;
            v0 = (DWORD *)v0[3];
            ++v1;
            v4 = v10 == 0;
            dword_1024F70 = (int)v0;
            *v2 = dword_1024F7C;
            dword_1024F7C = v3;
            if ( !v4 )
            {
                v10(v11, v9);
                v0 = (DWORD *)dword_1024F70;
            }
            if ( v1 > 1 )
                break;
            if ( !v0 )
                return v1;
        }
        while ( v0 && time_ticks >= *v0 + 100 )
        {
            --dword_1024F78;
            qmemcpy(&v8, v0, 0x14u);
            v4 = v10 == 0;
            v5 = v0 + 3;
            v6 = (int)v0;
            v0 = (DWORD *)v0[3];
            dword_1024F70 = (int)v0;
            *v5 = dword_1024F7C;
            dword_1024F7C = v6;
            if ( !v4 )
            {
                v10(v11, v9);
                v0 = (DWORD *)dword_1024F70;
            }
            ++v1;
        }
    }
    return v1;
}
// 1024F70: using guessed type int dword_1024F70;
// 1024F78: using guessed type int dword_1024F78;
// 1024F7C: using guessed type int dword_1024F7C;
// 1024F84: using guessed type int time_ticks;

//----- (01007659) --------------------------------------------------------
int timer_kill(int a1)
{
    int v1; // ecx
    int v2; // esi
    int v3; // edx
    int result; // eax

    v1 = dword_1024F70;
    v2 = 0;
    v3 = 0;
    if ( dword_1024F78 <= 0 )
        return 0;
    result = a1;
    while ( a1 != *(DWORD *)(v1 + 16) )
    {
        ++v2;
        v3 = v1;
        v1 = *(DWORD *)(v1 + 12);
        if ( v2 >= dword_1024F78 )
            return 0;
    }
    if ( v3 )
        *(DWORD *)(v3 + 12) = *(DWORD *)(v1 + 12);
    else
        dword_1024F70 = *(DWORD *)(v1 + 12);
    --dword_1024F78;
    *(DWORD *)(v1 + 12) = dword_1024F7C;
    dword_1024F7C = v1;
    return result;
}
// 1024F70: using guessed type int dword_1024F70;
// 1024F78: using guessed type int dword_1024F78;
// 1024F7C: using guessed type int dword_1024F7C;
