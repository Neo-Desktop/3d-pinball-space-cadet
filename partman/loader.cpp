//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (01008F7A) --------------------------------------------------------
signed int __stdcall loader_error(int a1, int a2)
{
    int v2; // eax
    const CHAR *v3; // esi
    const CHAR *v4; // edi
    int v5; // edx
    int v6; // ecx

    v2 = loader_errors[0];
    v3 = 0;
    v4 = 0;
    v5 = 0;
    if ( loader_errors[0] < 0 )
        goto LABEL_13;
    v6 = 0;
    do
    {
        if ( a1 == v2 )
            v3 = off_10235FC[v6];
        if ( a2 == v2 )
            v4 = off_10235FC[v6];
        v6 = 2 * ++v5;
        v2 = loader_errors[2 * v5];
    }
    while ( v2 >= 0 );
    if ( !v3 )
        LABEL_13:
        v3 = off_10235FC[2 * v5];
    MessageBoxA(0, v3, v4, 0x2000u);
    return -1;
}
// 10235F8: using guessed type int loader_errors[];

//----- (01008FE0) --------------------------------------------------------
_DWORD *__stdcall loader_default_vsi(_DWORD *a1)
{
    _DWORD *result; // eax

    result = a1;
    a1[13] = 0;
    a1[5] = 1369940824;
    a1[12] = 0;
    *a1 = 1064514355;
    a1[1] = 1058642330;
    a1[2] = 0;
    a1[4] = 0;
    a1[16] = 0;
    a1[17] = 0;
    a1[15] = 0;
    a1[14] = 0;
    return result;
}

//----- (0100901F) --------------------------------------------------------
signed int __stdcall loader_get_sound_id(int a1)
{
    signed __int16 v1; // dx
    signed int v2; // eax
    signed int result; // eax
    signed int v4; // edi
    int v5; // esi
    int v6; // eax
    _WORD *v7; // eax
    const CHAR *lpName; // ST18_4
    HFILE hFile; // ST1C_4
    int v10; // [esp+10h] [ebp+8h]

    v1 = 1;
    if ( sound_count <= 1 )
    {
        LABEL_5:
        loader_error(25, 26);
        result = -1;
    }
    else
    {
        v2 = 1;
        while ( dword_1027C24[5 * v2] != a1 )
        {
            v2 = ++v1;
            if ( v1 >= sound_count )
                goto LABEL_5;
        }
        v4 = v1;
        v5 = 5 * v1;
        if ( !dword_1027C28[v5] && !sound_list[v5] )
        {
            v6 = dword_1027C24[v5];
            *(float *)&algn_1027C2C[20 * v1] = 0.0;
            v10 = v6;
            if ( v6 > 0 && !play_midi_music )
            {
                v7 = (_WORD *)partman_field(loader_table, v6, 0);
                if ( v7 )
                {
                    if ( *v7 == 202 )
                    {
                        lpName = (const CHAR *)partman_field(loader_table, v10, 9);
                        hFile = _lopen(lpName, 0);
                        *(float *)(v5 * 4 + 16940076) = (double)_llseek(hFile, 0, 2) * 0.0000909090909090909;
                        _lclose(hFile);
                        sound_list[v5] = (int)Sound_LoadWaveFile(lpName);
                    }
                }
            }
        }
        ++dword_1027C28[v5];
        result = v4;
    }
    return result;
}
// 10236D8: using guessed type int sound_count;
// 102556C: using guessed type int play_midi_music;
// 1027C20: using guessed type int sound_list[];
// 1027C24: using guessed type int dword_1027C24[];
// 1027C28: using guessed type int dword_1027C28[];

//----- (0100911D) --------------------------------------------------------
void __stdcall loader_unload()
{
    signed int v0; // esi
    LPCVOID *v1; // edi

    v0 = 1;
    if ( sound_count > 1 )
    {
        v1 = (LPCVOID *)&unk_1027C34;
        do
        {
            Sound_FreeSound(*v1);
            ++v0;
            v1 += 5;
        }
        while ( v0 < sound_count );
    }
    if ( dword_1027C30[5 * v0] )
        memoryfree(dword_1027C30[5 * v0]);
    sound_count = 1;
}
// 10236D8: using guessed type int sound_count;
// 1027C30: using guessed type int dword_1027C30[];

//----- (0100916A) --------------------------------------------------------
int __stdcall loader_loadfrom(_WORD *a1)
{
    _WORD *v1; // edx
    __int16 v2; // di
    _WORD *v3; // eax
    int result; // eax
    int v5; // ecx

    v1 = a1;
    v2 = 0;
    loader_table = (int)a1;
    if ( *a1 <= 0 )
    {
        result = sound_count;
    }
    else
    {
        do
        {
            v3 = (_WORD *)partman_field((int)v1, v2, 0);
            v1 = (_WORD *)loader_table;
            if ( v3 && *v3 == 202 )
            {
                result = sound_count;
                sound_record_table = loader_table;
                if ( sound_count < 65 )
                {
                    v5 = 5 * sound_count;
                    sound_list[v5] = 0;
                    ++result;
                    dword_1027C24[v5] = v2;
                    sound_count = result;
                }
            }
            else
            {
                result = sound_count;
            }
            ++v2;
        }
        while ( v2 < *v1 );
    }
    loader_sound_count = result;
    return result;
}
// 10236D8: using guessed type int sound_count;
// 1027C10: using guessed type int sound_record_table;
// 1027C20: using guessed type int sound_list[];
// 1027C24: using guessed type int dword_1027C24[];
// 1028134: using guessed type int loader_sound_count;

//----- (010091EB) --------------------------------------------------------
int __stdcall loader_query_handle(LPCSTR lpString)
{
    return partman_record_labeled(loader_table, lpString);
}

//----- (01009207) --------------------------------------------------------
signed int __stdcall loader_query_visual_states(int a1)
{
    signed int result; // eax
    _WORD *v2; // eax

    if ( a1 < 0 )
        return loader_error(0, 17);
    v2 = (_WORD *)partman_field(loader_table, a1, 10);
    if ( v2 && *v2 == 100 )
        result = (signed __int16)v2[1];
    else
    result = 1;
    return result;
}

//----- (01009249) --------------------------------------------------------
signed int __stdcall loader_material(int a1, _DWORD *a2)
{
    int v2; // edi
    _WORD *v4; // eax
    float *v5; // esi
    unsigned int v6; // ebx
    double v7; // st7
    _DWORD *v8; // esi
    double v9; // st7
    signed __int64 v10; // rax
    int v11; // [esp+1Ch] [ebp+8h]
    int v12; // [esp+1Ch] [ebp+8h]

    v2 = a1;
    if ( a1 < 0 )
        return loader_error(0, 21);
    v4 = (_WORD *)partman_field(loader_table, a1, 0);
    if ( !v4 )
        return loader_error(1, 21);
    if ( *v4 == 300 )
    {
        v5 = (float *)partman_field(loader_table, a1, 11);
        if ( !v5 )
            return loader_error(11, 21);
        v11 = 0;
        v6 = (unsigned int)partman_field_size(loader_table, v2, 11) >> 2;
        if ( (signed __int16)v6 <= 0 )
        return 0;
        while ( 1 )
        {
            v7 = *v5;
            v8 = v5 + 1;
            v12 = v11 + 1;
            v9 = _floor(v7);
            switch ( (signed __int16)(signed __int64)v9 )
            {
                case 301:
                    *a2 = *v8;
                break;
                case 302:
                    a2[1] = *v8;
                break;
                case 304:
                    v10 = (signed __int64)_floor(*(float *)v8);
                a2[4] = loader_get_sound_id((signed __int16)v10);
                break;
                default:
                    return loader_error(9, 21);
            }
            v5 = (float *)(v8 + 1);
            v11 = v12 + 1;
            if ( (signed __int16)v11 >= (signed __int16)v6 )
            return 0;
        }
    }
    return loader_error(3, 21);
}

//----- (01009349) --------------------------------------------------------
signed int __stdcall loader_kicker(int a1, _DWORD *a2)
{
    _WORD *v3; // eax
    float *v4; // esi
    double v5; // st7
    _DWORD *v6; // esi
    double v7; // st7
    signed __int64 v8; // rax
    int v9; // eax
    _DWORD *v10; // esi
    int v11; // eax
    int v12; // eax
    unsigned int v13; // [esp+14h] [ebp-4h]
    int v14; // [esp+20h] [ebp+8h]
    int v15; // [esp+20h] [ebp+8h]

    if ( a1 < 0 )
        return loader_error(0, 20);
    v3 = (_WORD *)partman_field(loader_table, a1, 0);
    if ( !v3 )
        return loader_error(1, 20);
    if ( *v3 != 400 )
        return loader_error(4, 20);
    v4 = (float *)partman_field(loader_table, a1, 11);
    if ( !v4 )
        return loader_error(11, 20);
    v13 = (unsigned int)partman_field_size(loader_table, a1, 11) >> 2;
    v14 = 0;
    if ( (signed __int16)v13 <= 0 )
    return 0;
    while ( 1 )
    {
        v5 = *v4;
        v6 = v4 + 1;
        v15 = v14 + 1;
        v7 = _floor(v5);
        switch ( (signed __int16)(signed __int64)v7 )
        {
            case 401:
                *a2 = *v6;
            goto LABEL_24;
            case 402:
                a2[1] = *v6;
            goto LABEL_24;
            case 403:
                a2[2] = *v6;
            goto LABEL_24;
        }
        if ( (signed __int16)(signed __int64)v7 != 404 )
        break;
        v9 = *v6;
        v10 = v6 + 1;
        a2[3] = v9;
        v11 = *v10;
        ++v10;
        a2[4] = v11;
        v12 = *v10;
        v4 = (float *)(v10 + 1);
        v14 = v15 + 3;
        a2[5] = v12;
        LABEL_25:
        if ( (signed __int16)v14 >= (signed __int16)v13 )
        return 0;
    }
    if ( (signed __int16)(signed __int64)v7 == 405 )
    {
        a2[6] = *v6;
        goto LABEL_24;
    }
    if ( (signed __int16)(signed __int64)v7 == 406 )
    {
        v8 = (signed __int64)_floor(*(float *)v6);
        a2[7] = loader_get_sound_id((signed __int16)v8);
        LABEL_24:
        v4 = (float *)(v6 + 1);
        v14 = v15 + 1;
        goto LABEL_25;
    }
    return loader_error(10, 20);
}

//----- (01009486) --------------------------------------------------------
signed int __stdcall loader_state_id(int a1, signed int a2)
{
    int v2; // esi
    __int16 v3; // di
    _WORD *v5; // eax
    _WORD *v6; // eax

    v2 = a1;
    v3 = loader_query_visual_states(a1);
    if ( v3 <= 0 )
        return loader_error(12, 24);
    v5 = (_WORD *)partman_field(loader_table, a1, 0);
    if ( !v5 )
        return loader_error(1, 24);
    if ( *v5 != 200 )
        return loader_error(5, 24);
    if ( a2 > v3 )
        return loader_error(12, 24);
    if ( !a2 )
        return v2;
    v2 = a2 + a1;
    v6 = (_WORD *)partman_field(loader_table, a2 + a1, 0);
    if ( !v6 )
        return loader_error(1, 24);
    if ( *v6 == 201 )
        return v2;
    return loader_error(6, 24);
}

//----- (0100950A) --------------------------------------------------------
signed int __stdcall loader_query_visual(int a1, signed int a2, _DWORD *a3)
{
    _DWORD *v3; // edi
    int v5; // eax
    int v6; // ebx
    int v7; // eax
    signed __int16 *v8; // esi
    unsigned int v9; // eax
    int v10; // ebx
    signed int v11; // ecx
    _BYTE *v12; // esi
    int v13; // ebx
    int v14; // ecx
    int v15; // ecx
    int v16; // ecx
    int v17; // ecx
    int v18; // ecx
    int v19; // ecx
    float *v20; // eax
    float *v21; // esi
    signed __int64 v22; // rax
    int v23; // esi
    int v24; // [esp+1Ch] [ebp+8h]
    unsigned int v25; // [esp+24h] [ebp+10h]

    v3 = a3;
    loader_default_vsi(a3);
    if ( a1 < 0 )
        return loader_error(0, 18);
    v5 = loader_state_id(a1, a2);
    v6 = v5;
    v24 = v5;
    if ( v5 < 0 )
        return loader_error(16, 18);
    a3[16] = partman_field(loader_table, v5, 1);
    v7 = partman_field(loader_table, v6, 12);
    a3[17] = v7;
    if ( v7 )
    {
        *(_DWORD *)(v7 + 6) = v7 + 14;
        *(_DWORD *)(a3[17] + 10) = *(_DWORD *)(a3[17] + 6);
    }
    v8 = (signed __int16 *)partman_field(loader_table, v6, 10);
    if ( v8 )
    {
        v9 = partman_field_size(loader_table, v6, 10);
        v10 = 0;
        v25 = v9 >> 1;
        if ( (signed __int16)(v9 >> 1) > 0 )
        {
            while ( 1 )
            {
                v11 = *v8;
                v12 = v8 + 1;
                v13 = v10 + 1;
                if ( v11 <= 406 )
                {
                    if ( v11 == 406 )
                    {
                        v3[12] = loader_get_sound_id(*(signed __int16 *)v12);
                    }
                    else
                    {
                        v14 = v11 - 100;
                        if ( v14 )
                        {
                            v15 = v14 - 200;
                            if ( v15 )
                            {
                                v16 = v15 - 4;
                                if ( v16 )
                                {
                                    if ( v16 != 96 )
                                        return loader_error(9, 18);
                                    if ( loader_kicker(*(signed __int16 *)v12, v3 + 5) )
                                    return loader_error(14, 18);
                                }
                                else
                                {
                                    v3[4] = loader_get_sound_id(*(signed __int16 *)v12);
                                }
                            }
                            else if ( loader_material(*(signed __int16 *)v12, v3) )
                            {
                                return loader_error(15, 18);
                            }
                        }
                        else if ( a2 )
                        {
                            return loader_error(7, 18);
                        }
                    }
                    goto LABEL_32;
                }
                v17 = v11 - 602;
                if ( !v17 )
                {
                    v3[13] |= 1 << *v12;
                    goto LABEL_32;
                }
                v18 = v17 - 498;
                if ( !v18 )
                    break;
                v19 = v18 - 1;
                if ( !v19 )
                {
                    v3[15] = loader_get_sound_id(*(signed __int16 *)v12);
                    LABEL_32:
                    v8 = (signed __int16 *)(v12 + 2);
                    v10 = v13 + 1;
                    goto LABEL_33;
                }
                if ( v19 != 399 )
                    return loader_error(9, 18);
                v8 = (signed __int16 *)(v12 + 16);
                v10 = v13 + 8;
                LABEL_33:
                if ( (signed __int16)v10 >= (signed __int16)v25 )
                goto LABEL_34;
            }
            v3[14] = loader_get_sound_id(*(signed __int16 *)v12);
            goto LABEL_32;
        }
    }
    LABEL_34:
    if ( !v3[13] )
        v3[13] = 1;
    v20 = (float *)partman_field(loader_table, v24, 11);
    if ( !v20 )
        return 0;
    v21 = v20 + 1;
    if ( *v20 != 600.0 )
        return 0;
    v3[2] = (signed __int16)((unsigned int)partman_field_size(loader_table, v24, 11) >> 2) / 2 - 2;
    v22 = (signed __int64)(_floor(*v21) - 1.0);
    v23 = (int)(v21 + 1);
    if ( !(_WORD)v22 )
    {
        v3[2] = 1;
        LABEL_40:
        v3[3] = v23;
        return 0;
    }
    if ( (_WORD)v22 == 1 )
    {
        v3[2] = 2;
        goto LABEL_40;
    }
    if ( (signed __int16)v22 == v3[2] )
    goto LABEL_40;
    return loader_error(8, 18);
}

//----- (0100975D) --------------------------------------------------------
int __stdcall loader_query_name(int a1)
{
    if ( a1 >= 0 )
        return partman_field(loader_table, a1, 3);
    loader_error(0, 19);
    return 0;
}

//----- (0100978E) --------------------------------------------------------
int __stdcall loader_query_float_attribute(int a1, signed int a2, int a3)
{
    __int16 v3; // bx
    int result; // eax
    int v5; // edi
    float *v6; // eax
    float *v7; // esi

    v3 = 0;
    if ( a1 >= 0 )
    {
        v5 = loader_state_id(a1, a2);
        if ( v5 >= 0 )
        {
            while ( 1 )
            {
                v6 = (float *)partman_field_nth(loader_table, v5, 11, v3);
                v7 = v6;
                if ( !v6 )
                    break;
                if ( (signed __int16)(signed __int64)_floor(*v6) == a3 )
                return (int)(v7 + 1);
                ++v3;
            }
            loader_error(13, 22);
            result = 0;
        }
        else
        {
            loader_error(16, 22);
            result = 0;
        }
    }
    else
    {
        loader_error(0, 22);
        result = 0;
    }
    return result;
}

//----- (0100981A) --------------------------------------------------------
int __stdcall loader_query_iattribute(int a1, int a2, _DWORD *a3)
{
    __int16 v3; // di
    int result; // eax
    signed __int16 *v5; // eax
    signed __int16 *v6; // esi

    v3 = 0;
    if ( a1 >= 0 )
    {
        while ( 1 )
        {
            v5 = (signed __int16 *)partman_field_nth(loader_table, a1, 10, v3);
            v6 = v5;
            if ( !v5 )
                break;
            if ( *v5 == a2 )
            {
                *a3 = partman_field_size(loader_table, a1, 10) / 2 - 1;
                return (int)(v6 + 1);
            }
            ++v3;
        }
        loader_error(2, 23);
        *a3 = 0;
        result = 0;
    }
    else
    {
        loader_error(0, 22);
        result = 0;
    }
    return result;
}

//----- (01009895) --------------------------------------------------------
double __stdcall loader_play_sound(int a1)
{
    if ( a1 <= 0 )
        return 0.0;
    Sound_PlaySound(sound_list[5 * a1], 0, 7, 5u, 0);
    return *(float *)&algn_1027C2C[20 * a1];
}
// 1027C20: using guessed type int sound_list[];
