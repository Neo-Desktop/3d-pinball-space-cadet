//
// Created by neo on 2019-08-15.
//

#include "../pinball.h"

//----- (01009910) --------------------------------------------------------
void flasher_callback(int a1, void *a2)
{
    int v2; // eax

    v2 = 1 - *((DWORD *)a2 + 8);
    *((DWORD *)a2 + 8) = v2;
    render_sprite_set_bitmap(*(DWORD **)a2, *((DWORD *)a2 + v2 + 1));
    *((DWORD *)a2 + 7) = timer_set(*((float *)a2 + *((DWORD *)a2 + 8) + 5), (int)a2, (int)flasher_callback);
}

//----- (01009950) --------------------------------------------------------
void flasher_start(struct flasher_type *a1, int a2)
{
    *((DWORD *)a1 + 8) = a2;
    flasher_callback(0, (void *)a1);
}

//----- (0100996F) --------------------------------------------------------
void flasher_stop(struct flasher_type *a1, int a2)
{
    if ( *((DWORD *)a1 + 7) )
        timer_kill(*((DWORD *)a1 + 7));
    *((DWORD *)a1 + 7) = 0;
    if ( a2 >= 0 )
    {
        *((DWORD *)a1 + 8) = a2;
        render_sprite_set_bitmap(*(DWORD **)a1, *((DWORD *)a1 + a2 + 1));
    }
}