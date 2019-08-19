//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_PARTMAN_H
#define PINBALL_PARTMAN_H

struct Partman {

	signed int loader_error(int a1, int a2);
	DWORD* loader_default_vsi(DWORD* a1);
	signed int loader_get_sound_id(int a1);
	void loader_unload();
	int loader_loadfrom(WORD* a1);
	int loader_query_handle(LPCSTR lpString);
	signed int loader_query_visual_states(int a1);
	signed int loader_material(int a1, DWORD* a2);
	signed int loader_kicker(int a1, DWORD* a2);
	signed int loader_state_id(int a1, signed int a2);
	signed int loader_query_visual(int a1, signed int a2, DWORD* a3);
	int loader_query_name(int a1);
	int loader_query_float_attribute(int a1, signed int a2, int a3);
	int loader_query_iattribute(int a1, int a2, DWORD* a3);
	double loader_play_sound(int a1);
};


#endif //PINBALL_PARTMAN_H