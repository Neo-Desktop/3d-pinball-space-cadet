//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (01006270) --------------------------------------------------------
int __stdcall partman_field(int a1, int a2, int a3)
{
    signed __int16 *v3; // eax
    int v4; // edx
    int v5; // esi
    signed __int16 *v6; // eax
    int v7; // ecx

    v3 = *(signed __int16 **)(*(_DWORD *)(a1 + 6) + 4 * a2);
    v4 = *v3;
    v5 = 0;
    if ( v4 <= 0 )
        return 0;
    v6 = v3 + 1;
    while ( 1 )
    {
        v7 = *v6;
        if ( v7 == a3 )
            break;
        if ( v7 <= a3 )
        {
            ++v5;
            v6 += 5;
            if ( v5 < v4 )
                continue;
        }
        return 0;
    }
    return *(_DWORD *)(v6 + 3);
}

//----- (010062B1) --------------------------------------------------------
int __stdcall partman_field_size_nth(int a1, int a2, int a3, int a4)
{
    signed __int16 *v4; // eax
    int v5; // edx
    int v6; // esi
    int v7; // edi
    signed __int16 *v8; // eax
    int v9; // ecx

    v4 = *(signed __int16 **)(*(_DWORD *)(a1 + 6) + 4 * a2);
    v5 = *v4;
    v6 = 0;
    v7 = 0;
    if ( v5 <= 0 )
        return 0;
    v8 = v4 + 1;
    while ( 1 )
    {
        v9 = *v8;
        if ( v9 != a3 )
        {
            if ( v9 > a3 )
                return 0;
            goto LABEL_7;
        }
        if ( v7 == a4 )
            return *(_DWORD *)(v8 + 1);
        ++v7;
        LABEL_7:
        ++v6;
        v8 += 5;
        if ( v6 >= v5 )
            return 0;
    }
}

//----- (010062FE) --------------------------------------------------------
int __stdcall partman_field_size(int a1, int a2, int a3)
{
    return partman_field_size_nth(a1, a2, a3, 0);
}

//----- (0100631C) --------------------------------------------------------
int __stdcall partman_field_nth(int a1, int a2, int a3, int a4)
{
    signed __int16 *v4; // eax
    int v5; // edx
    int v6; // esi
    int v7; // edi
    signed __int16 *v8; // eax
    int v9; // ecx

    v4 = *(signed __int16 **)(*(_DWORD *)(a1 + 6) + 4 * a2);
    v5 = *v4;
    v6 = 0;
    v7 = 0;
    if ( v5 <= 0 )
        return 0;
    v8 = v4 + 1;
    while ( 1 )
    {
        v9 = *v8;
        if ( v9 != a3 )
        {
            if ( v9 > a3 )
                return 0;
            goto LABEL_7;
        }
        if ( a4 == v7 )
            return *(_DWORD *)(v8 + 3);
        ++v7;
        LABEL_7:
        ++v6;
        v8 += 5;
        if ( v6 >= v5 )
            return 0;
    }
}

//----- (01006369) --------------------------------------------------------
int __stdcall partman_record_labeled(int a1, LPCSTR lpString)
{
    int v2; // esi
    int v3; // eax
    int v4; // ecx
    bool v5; // zf
    LPCSTR v6; // edx
    int v8; // [esp+Ch] [ebp-4h]

    v8 = lstrlenA(lpString);
    v2 = *(signed __int16 *)a1;
    while ( 1 )
    {
        if ( --v2 < 0 )
            return -1;
        v3 = partman_field(a1, v2, 3);
        v4 = 0;
        if ( v3 )
        {
            v5 = v8 == 0;
            if ( v8 > 0 )
            {
                v6 = lpString;
                do
                {
                    if ( *v6 != v6[v3 - (_DWORD)lpString] )
                        break;
                    ++v4;
                    ++v6;
                }
                while ( v4 < v8 );
                v5 = v4 == v8;
            }
            if ( v5 && !lpString[v4] && !*(_BYTE *)(v4 + v3) )
                break;
        }
    }
    return v2;
}

//----- (010063DB) --------------------------------------------------------
int __stdcall partman_field_labeled(int a1, LPCSTR lpString, int a3)
{
    int v3; // eax
    int result; // eax

    v3 = partman_record_labeled(a1, lpString);
    if ( v3 < 0 )
        result = 0;
    else
        result = partman_field(a1, v3, a3);
    return result;
}

//----- (01006408) --------------------------------------------------------
void __stdcall partman_unload_records(_WORD *a1)
{
    signed __int16 *i; // edi
    _WORD *v2; // esi
    int *v3; // ebx
    signed int v4; // [esp+4h] [ebp-4h]
    signed int v5; // [esp+10h] [ebp+8h]

    v4 = 0;
    for ( i = a1; v4 < *i; ++v4 )
    {
        v2 = *(_WORD **)(*(_DWORD *)(i + 3) + 4 * v4);
        if ( v2 )
        {
            v5 = 0;
            if ( *v2 > 0 )
            {
                v3 = (int *)(v2 + 4);
                do
                {
                    if ( *v3 )
                    {
                        if ( *((_WORD *)v3 - 3) == 1 )
                            gdrv_destroy_bitmap(*v3);
                        memoryfree(*v3);
                    }
                    ++v5;
                    v3 = (int *)((char *)v3 + 10);
                }
                while ( v5 < (signed __int16)*v2 );
            }
            memoryfree((int)v2);
        }
    }
    if ( *(_DWORD *)(i + 1) )
        memoryfree(*(_DWORD *)(i + 1));
    memoryfree(*(_DWORD *)(i + 3));
    memoryfree((int)i);
}

//----- (010064E2) --------------------------------------------------------
signed __int16 *__stdcall partman_load_records(LPCSTR lpFileName)
{
    HFILE v1; // ebx
    signed __int16 *v3; // edi
    int v4; // eax
    CHAR *v5; // eax
    UINT v6; // esi
    void *v7; // eax
    int v8; // ebx
    int v9; // eax
    char v10; // al
    char v11; // bl
    int v12; // eax
    int v13; // esi
    _WORD *v14; // eax
    int v15; // esi
    int v16; // eax
    int v17; // ebx
    int v18; // eax
    int v19; // eax
    void *v20; // eax
    signed __int16 v21; // ax
    int v22; // [esp+4h] [ebp-168h]
    int v23; // [esp+8h] [ebp-164h]
    char v24; // [esp+Ch] [ebp-160h]
    __int16 v25; // [esp+Dh] [ebp-15Fh]
    __int16 v26; // [esp+Fh] [ebp-15Dh]
    __int16 v27; // [esp+11h] [ebp-15Bh]
    __int16 v28; // [esp+13h] [ebp-159h]
    int lBytes; // [esp+15h] [ebp-157h]
    char v30; // [esp+19h] [ebp-153h]
    int v31; // [esp+1Ch] [ebp-150h]
    int v32; // [esp+20h] [ebp-14Ch]
    HFILE hFile; // [esp+24h] [ebp-148h]
    struct _OFSTRUCT ReOpenBuff; // [esp+28h] [ebp-144h]
    char Buffer; // [esp+B0h] [ebp-BCh]
    CHAR String; // [esp+F7h] [ebp-75h]
    unsigned __int16 v37; // [esp+15Fh] [ebp-Dh]
    unsigned __int16 v38; // [esp+165h] [ebp-7h]

    v1 = OpenFile(lpFileName, &ReOpenBuff, 0);
    hFile = v1;
    if ( v1 == -1 )
        return 0;
    _lread(v1, &Buffer, 0xB7u);
    if ( lstrcmpA("PARTOUT(4.0)RESOURCE", &Buffer) )
    {
        _lclose(v1);
        return 0;
    }
    v3 = (signed __int16 *)memoryallocate(0xAu);
    if ( !v3 )
    {
        _lclose(v1);
        return 0;
    }
    if ( lstrlenA(&String) <= 0 )
    {
        *(_DWORD *)(v3 + 1) = 0;
    }
    else
    {
        v4 = lstrlenA(&String);
        v5 = (CHAR *)memoryallocate(v4 + 1);
        *(_DWORD *)(v3 + 1) = v5;
        if ( !v5 )
        {
            _lclose(v1);
            LABEL_10:
            memoryfree((int)v3);
            return 0;
        }
        lstrcpyA(v5, &String);
    }
    v6 = v38;
    if ( v38 )
    {
        v7 = (void *)memoryallocate(v38);
        v8 = (int)v7;
        if ( !v7 )
        {
            _lclose(hFile);
            goto LABEL_19;
        }
        _lread(hFile, v7, v6);
        memoryfree(v8);
    }
    v9 = memoryallocate(4 * v37);
    *(_DWORD *)(v3 + 3) = v9;
    if ( !v9 )
    {
        LABEL_19:
        if ( *(_DWORD *)(v3 + 1) )
            memoryfree(*(_DWORD *)(v3 + 1));
        goto LABEL_10;
    }
    v32 = 0;
    if ( v37 )
    {
        do
        {
            v10 = _lread_char(hFile);
            v11 = v10;
            if ( v10 <= 0 )
                v12 = 0;
            else
                v12 = v10 - 1;
            v13 = 4 * v32;
            *(_DWORD *)(v13 + *(_DWORD *)(v3 + 3)) = memoryallocate(10 * v12 + 12);
            v14 = *(_WORD **)(v13 + *(_DWORD *)(v3 + 3));
            if ( !v14 )
                break;
            v31 = 0;
            *v14 = v11;
            v22 = v11;
            if ( v11 > 0 )
            {
                v15 = (int)(v14 + 4);
                do
                {
                    LOBYTE(v16) = _lread_char(hFile);
                    *(_WORD *)(v15 - 6) = (unsigned __int8)v16;
                    v16 = (unsigned __int8)v16;
                    v17 = field_size[(unsigned __int8)v16];
                    v23 = (unsigned __int8)v16;
                    if ( v17 < 0 )
                    {
                        v17 = _lread_long(hFile);
                        v16 = v23;
                    }
                    if ( v16 == 1 )
                    {
                        _hread(hFile, &v24, 14);
                        v18 = memoryallocate(0x25u);
                        *(_DWORD *)v15 = v18;
                        if ( !v18 )
                            goto LABEL_41;
                        v19 = v30 & 2 ? gdrv_create_bitmap(v18, v25, v26) : gdrv_create_raw_bitmap(v18, v25, v26, v30 & 1);
                        if ( v19 )
                            goto LABEL_41;
                        _hread(hFile, *(LPVOID *)(*(_DWORD *)v15 + 8), lBytes);
                        *(_DWORD *)(*(_DWORD *)v15 + 29) = v27;
                        *(_DWORD *)(*(_DWORD *)v15 + 33) = v28;
                    }
                    else
                    {
                        v20 = (void *)memoryallocate(v17);
                        *(_DWORD *)v15 = v20;
                        if ( !v20 )
                            goto LABEL_41;
                        _hread(hFile, v20, v17);
                    }
                    v21 = v32 + 1;
                    ++v31;
                    *(_DWORD *)(v15 - 4) = v17;
                    *v3 = v21;
                    v15 += 10;
                }
                while ( v31 < v22 );
            }
            ++v32;
        }
        while ( v32 < v37 );
    }
    LABEL_41:
    _lclose(hFile);
    if ( *v3 != v37 )
    {
        partman_unload_records(v3);
        return 0;
    }
    return v3;
}
