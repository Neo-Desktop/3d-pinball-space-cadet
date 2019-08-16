//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

//----- (010054AC) --------------------------------------------------------
int __stdcall memory_init(int a1)
{
    int result; // eax

    result = a1;
    memory_critical_callback = (int (*)(void))a1;
    return result;
}
// 1024F08: using guessed type int (*memory_critical_callback)(void);

//----- (010054C2) --------------------------------------------------------
int __stdcall memoryallocate(unsigned int a1)
{
    _DWORD *v1; // eax

    v1 = _malloc(a1 + 4);
    if ( a1 >= 0xFFDC )
    {
        if ( v1 )
        {
            *v1 = a1 << 8;
            memory_use_total += a1 + 4;
            *(_BYTE *)v1 = -91;
            return (int)(v1 + 1);
        }
    }
    else if ( v1 )
    {
        *v1 = a1 << 8;
        memory_use_total += a1 + 4;
        *(_BYTE *)v1 = 90;
        return (int)(v1 + 1);
    }
    if ( memory_critical_allocation )
    {
        if ( memory_critical_callback )
            memory_critical_callback();
    }
    return 0;
}
// 1024F08: invalid function type has been ignored
// 1024F00: using guessed type int memory_use_total;
// 1024F04: using guessed type int memory_critical_allocation;
// 1024F08: using guessed type int (*memory_critical_callback)(void);

//----- (01005541) --------------------------------------------------------
void __stdcall memoryfree(int a1)
{
    char v1; // cl

    memory_use_total += -4 - (*(_DWORD *)(a1 - 4) >> 8);
    v1 = *(_BYTE *)(a1 - 4);
    if ( v1 == 90 || v1 == -91 )
        _free((void *)(a1 - 4));
}
// 1024F00: using guessed type int memory_use_total;

//----- (01005579) --------------------------------------------------------
int __stdcall memoryrealloc(int a1, unsigned int a2)
{
    int result; // eax
    char *v3; // eax
    char v4; // cl

    if ( !a1 )
        return memoryallocate(a2);
    v3 = (char *)(a1 - 4);
    memory_use_total -= *(_DWORD *)(a1 - 4) >> 8;
    if ( *(_BYTE *)(a1 - 4) != 90 && *(_BYTE *)(a1 - 4) != -91 || (v3 = (char *)_realloc(v3, a2 + 4)) != 0 )
    {
        v4 = *v3;
        *(_DWORD *)v3 = a2 << 8;
        memory_use_total += a2;
        *v3 = v4;
        result = (int)(v3 + 4);
    }
    else
    {
        if ( memory_critical_allocation )
        {
            if ( memory_critical_callback )
                memory_critical_callback();
        }
        result = 0;
    }
    return result;
}
// 1024F00: using guessed type int memory_use_total;
// 1024F04: using guessed type int memory_critical_allocation;
// 1024F08: using guessed type int (*memory_critical_callback)(void);

