//
// Created by neo on 2019-08-15.
//

//----- (01009910) --------------------------------------------------------
void __stdcall flasher_callback(int a1, void *a2)
{
    int v2; // eax

    v2 = 1 - *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v2;
    render_sprite_set_bitmap(*(_DWORD **)a2, *((_DWORD *)a2 + v2 + 1));
    *((_DWORD *)a2 + 7) = timer_set(*((float *)a2 + *((_DWORD *)a2 + 8) + 5), (int)a2, (int)flasher_callback);
}

//----- (01009950) --------------------------------------------------------
void __stdcall flasher_start(struct flasher_type *a1, int a2)
{
    *((_DWORD *)a1 + 8) = a2;
    flasher_callback(0, (void *)a1);
}

//----- (0100996F) --------------------------------------------------------
void __stdcall flasher_stop(struct flasher_type *a1, int a2)
{
    if ( *((_DWORD *)a1 + 7) )
        timer_kill(*((_DWORD *)a1 + 7));
    *((_DWORD *)a1 + 7) = 0;
    if ( a2 >= 0 )
    {
        *((_DWORD *)a1 + 8) = a2;
        render_sprite_set_bitmap(*(_DWORD **)a1, *((_DWORD *)a1 + a2 + 1));
    }
}