#include "TCollisionComponent.h"

//----- (01015A9A) --------------------------------------------------------
void TCollisionComponent::port_draw(TCollisionComponent* this)
{
	TCollisionComponent* v1; // edi
	int v2; // eax
	int v3; // esi
	int v4; // ebx

	v1 = this;
	v2 = *(DWORD*)(*(DWORD*)((char*)this + 46) + 4) - 1;
	if (v2 >= 0)
	{
		v3 = 4 * v2 + 8;
		v4 = *(DWORD*)(*(DWORD*)((char*)this + 46) + 4);
		do
		{
			(*(void (**)(void))(**(DWORD * *)(v3 + *(DWORD*)((char*)v1 + 46)) + 4))();
			v3 -= 4;
			--v4;
		} while (v4);
	}
}

//----- (01017883) --------------------------------------------------------
double basic_collision(TBall* a1, vector_type* a2, vector_type* a3, float a4, float a5, float a6, float a7)
{
	int v7; // ST30_4
	float* v8; // esi
	double v9; // st7
	unsigned __int8 v11; // c0
	unsigned __int8 v12; // c3
	double v13; // st7
	double v14; // st6
	float v15; // ST1C_4
	float v16; // ST20_4
	float v17; // ST10_4
	float v18; // ST20_4
	double v19; // st7
	float v21; // [esp+24h] [ebp-Ch]
	float v22; // [esp+28h] [ebp-8h]
	float v23; // [esp+3Ch] [ebp+Ch]
	float v24; // [esp+3Ch] [ebp+Ch]

	*(float*)((char*)a1 + 42) = *(float*)a2;
	*(DWORD*)((char*)a1 + 46) = *((DWORD*)a2 + 1);
	v21 = *(float*)a3;
	v22 = *((float*)a3 + 1);
	v7 = *((DWORD*)a3 + 2);
	v8 = (float*)((char*)a1 + 54);
	v9 = -(v22 * *(float*)((char*)a1 + 58) + *(float*)a3 * *(float*)((char*)a1 + 54));
	v23 = v9;
	if (v11 | v12)
	{
		v23 = -v9;
	}
	else
	{
		v13 = v9 * v21;
		v14 = v22 * v23;
		v15 = v13 + *v8;
		v16 = v14 + *(float*)((char*)a1 + 58);
		v17 = v13 * a4;
		v18 = v16 * a5;
		*v8 = v15 * a5 + v17;
		*(float*)((char*)a1 + 58) = v18 + v14 * a4;
		normalize_2d((float*)((char*)a1 + 54));
	}
	v24 = v23 * *(float*)((char*)a1 + 66);
	v19 = *(float*)((char*)a1 + 66) - (1.0 - a4) * v24;
	*(float*)((char*)a1 + 66) = v19;
	if (v24 >= (double)a6)
	{
		*v8 = v19 * *v8 + v21 * a7;
		*(float*)((char*)a1 + 58) = v19 * *(float*)((char*)a1 + 58) + v22 * a7;
		*(float*)((char*)a1 + 66) = normalize_2d((float*)((char*)a1 + 54));
	}
	return v24;
}

//----- (010179A9) --------------------------------------------------------
struct TEdgeSegment* install_wall(float* a1, TCollisionComponent* a2, char* a3, int a4, float a5, void* a6)
{
	signed __int64 v6; // rax
	float* v7; // esi
	float* v8; // ecx
	TCircle* v9; // eax
	TCollisionComponent* v10; // edi
	float v11; // ST14_4
	TCircle* v12; // esi
	TLine* v13; // eax
	double v14; // st7
	float v15; // eax
	double v16; // st6
	float v17; // eax
	TCircle* v18; // eax
	float v19; // ST10_4
	TCircle* v20; // edi
	int v21; // ebx
	TLine* v22; // eax
	TLine* v23; // esi
	char v25; // [esp+10h] [ebp-6Ch]
	float v26; // [esp+18h] [ebp-64h]
	float v27; // [esp+20h] [ebp-5Ch]
	float v28; // [esp+28h] [ebp-54h]
	float v29; // [esp+2Ch] [ebp-50h]
	float v30; // [esp+30h] [ebp-4Ch]
	float v31; // [esp+34h] [ebp-48h]
	float v32; // [esp+38h] [ebp-44h]
	float v33; // [esp+3Ch] [ebp-40h]
	float v34; // [esp+40h] [ebp-3Ch]
	float v35; // [esp+44h] [ebp-38h]
	int v36; // [esp+48h] [ebp-34h]
	int v37; // [esp+4Ch] [ebp-30h]
	int v38; // [esp+50h] [ebp-2Ch]
	int v39; // [esp+58h] [ebp-24h]
	int v40; // [esp+5Ch] [ebp-20h]
	int v41; // [esp+64h] [ebp-18h]
	float v42; // [esp+68h] [ebp-14h]
	int v43; // [esp+6Ch] [ebp-10h]
	float* v44; // [esp+70h] [ebp-Ch]
	int v45; // [esp+74h] [ebp-8h]
	TCircle* v46; // [esp+78h] [ebp-4h]
	float* v47; // [esp+84h] [ebp+8h]

	v6 = (signed __int64)(_floor(*a1) - 1.0);
	v7 = a1 + 1;
	v8 = a1 + 1;
	v45 = v6;
	v44 = a1 + 1;
	if (!(DWORD)v6)
	{
		v41 = *(int*)v7;
		v42 = a1[2];
		v9 = (TCircle*)component_create(0x25u);
		v10 = a2;
		if (v9)
		{
			v11 = a5 + a1[3];
			v12 = TCircle::TCircle(v9, a2, a3, a4, (struct vector_type*) & v41, v11);
		}
		else
		{
			v12 = 0;
		}
		v46 = v12;
		if (!v12)
			goto LABEL_14;
		*(DWORD*)((char*)v12 + 13) = a6;
	LABEL_13:
		(*(void(__thiscall * *)(TCircle*))(*(DWORD*)v12 + 8))(v12);
	LABEL_14:
		objlist_class::Add((TCollisionComponent*)((char*)v10 + 42), (void*)v12);
		return v46;
	}
	if ((DWORD)v6 == 1)
	{
		v37 = *(DWORD*)v7;
		v38 = *((DWORD*)a1 + 2);
		v39 = *((DWORD*)a1 + 3);
		v40 = *((DWORD*)a1 + 4);
		v13 = (TLine*)component_create(0x55u);
		v10 = a2;
		if (v13)
			v12 = TLine::TLine(v13, a2, a3, a4, (struct vector_type*) & v37, (struct vector_type*) & v39);
		else
			v12 = 0;
		v46 = v12;
		if (v12)
		{
			*(DWORD*)((char*)v12 + 13) = a6;
			TLine::Offset(v12, a5);
			goto LABEL_13;
		}
	}
	else
	{
		*((float*)& v6 + 1) = v7[2 * (DWORD)v6 - 2];
		v47 = 0;
		v33 = 0.0;
		v34 = *((float*)& v6 + 1);
		v30 = 0.0;
		v35 = v7[2 * (DWORD)v6 - 1];
		if ((signed int)v6 > 0)
		{
			while (1)
			{
				if ((signed int)v47 >= (signed int)v6 - 1)
				{
					v14 = *v8;
					v15 = v8[1];
				}
				else
				{
					v14 = v7[2];
					v15 = v7[3];
				}
				v16 = *v7;
				v27 = v15;
				v17 = v7[1];
				*(float*)& v41 = v16;
				v42 = v17;
				if (0.0 != a5)
				{
					if ((v28 = v16 - v34,
						v29 = v42 - v35,
						v31 = v14 - v16,
						v32 = v27 - v42,
						cross(&v28, &v31, (float*)& v25),
						v26 > 0.0)
						&& a5 > 0.0
						|| v26 < 0.0 && a5 < 0.0)
					{
						v18 = (TCircle*)component_create(0x25u);
						if (v18)
						{
							v19 = a5 * 1.001;
							v20 = TCircle::TCircle(v18, a2, a3, a4, (struct vector_type*) & v41, v19);
						}
						else
						{
							v20 = 0;
						}
						if (v20)
						{
							*(DWORD*)((char*)v20 + 13) = a6;
							(*(void(__thiscall * *)(TCircle*))(*(DWORD*)v20 + 8))(v20);
							objlist_class::Add((struct TCollisionComponent*)((char*)a2 + 42), (void*)v20);
						}
					}
				}
				v37 = *(DWORD*)v7;
				v38 = *((DWORD*)v7 + 1);
				v21 = (int)(v7 + 2);
				v39 = *((DWORD*)v7 + 2);
				v40 = *((DWORD*)v7 + 3);
				v22 = (TLine*)component_create(0x55u);
				if (v22)
					v23 = TLine::TLine(v22, a2, a3, a4, (vector_type*) & v37, (vector_type*) & v39);
				else
					v23 = 0;
				v46 = v23;
				if (v23)
				{
					*(DWORD*)((char*)v23 + 13) = a6;
					TLine::Offset(v23, a5);
					(*(void(__thiscall * *)(TLine*))(*(DWORD*)v23 + 8))(v23);
					objlist_class::Add((TCollisionComponent*)((char*)a2 + 42), (void*)v23);
				}
				v47 = (float*)((char*)v47 + 1);
				v34 = *(float*)& v41;
				v35 = v42;
				v36 = v43;
				v7 = (float*)v21;
				if ((signed int)v47 >= v45)
					break;
				v8 = v44;
				LODWORD(v6) = v45;
			}
		}
	}
	return v46;
}

//----- (01017E85) --------------------------------------------------------
void TCollisionComponent::Collision(TBall* a2, vector_type* a3, vector_type* a4, float a5, TEdgeSegment* a6)
{
	double collision; // st7
	int sound_id; // esi

	if (*(DWORD*)(*(DWORD*)((char*)this + 30) + 370))
	{
		basic_collision(a2, a3, a4, *(float*)((char*)this + 54), *(float*)((char*)this + 58), 1000000000.0, 0.0);
		return;
	}
	collision = basic_collision(
		a2,
		a3,
		a4,
		*(float*)((char*)this + 54),
		*(float*)((char*)this + 58),
		*(float*)((char*)this + 66),
		*(float*)((char*)this + 62));
	if (collision <= *(float*)((char*)this + 66))
	{
		if (collision <= 0.2)
			return;
		sound_id = *(DWORD*)((char*)this + 70);
	}
	else
	{
		sound_id = *(DWORD*)((char*)this + 74);
	}
	if (sound_id)
		loader_play_sound(sound_id);
}

//----- (01017F29) --------------------------------------------------------
int TCollisionComponent::DefaultCollision(TBall* a2, vector_type* a3, vector_type* a4)
{
	double collision; // st7
	int sound_id; // esi
	int v8; // esi

	if (*(DWORD*)(*(DWORD*)((char*)this + 30) + 370))
	{
		basic_collision(a2, a3, a4, *(float*)((char*)this + 54), *(float*)((char*)this + 58), 1000000000.0, 0.0);
		return 0;
	}
	collision = basic_collision(
		a2,
		a3,
		a4,
		*(float*)((char*)this + 54),
		*(float*)((char*)this + 58),
		*(float*)((char*)this + 66),
		*(float*)((char*)this + 62));
	if (collision <= *(float*)((char*)this + 66))
	{
		if (collision > 0.2)
		{
			v8 = *(DWORD*)((char*)this + 70);
			if (v8)
				loader_play_sound(v8);
		}
		return 0;
	}
	sound_id = *(DWORD*)((char*)this + 74);
	if (sound_id)
		loader_play_sound(sound_id);
	return 1;
}

//----- (010190B3) --------------------------------------------------------
TCollisionComponent* TCollisionComponent::TCollisionComponent(TCollisionComponent* this, struct TPinballTable* a2, int a3, int a4)
{
	TCollisionComponent* v4; // esi
	bool v5; // zf
	float v6; // ST18_4
	unsigned int v7; // ST14_4
	float* v8; // eax
	int v10; // [esp+14h] [ebp-48h]
	int v11; // [esp+18h] [ebp-44h]
	int v12; // [esp+24h] [ebp-38h]
	int v13; // [esp+28h] [ebp-34h]
	int v14; // [esp+2Ch] [ebp-30h]
	int v15; // [esp+44h] [ebp-18h]
	unsigned int v16; // [esp+48h] [ebp-14h]

	v4 = this;
	TPinballComponent::TPinballComponent(this, a2, a3, 1);
	*(DWORD*)v4 = &TCollisionComponent::vftable;
	objlist_class::objlist_class((TCollisionComponent*)((char*)v4 + 42), 4, 4);
	v5 = *(DWORD*)((char*)v4 + 10) == 0;
	*((_BYTE*)v4 + 5) = 1;
	if (!v5)
		* ((_BYTE*)v4 + 4) = 1;
	if (a3 <= 0)
	{
		loader_default_vsi(&v10);
	}
	else
	{
		loader_query_visual(a3, 0, &v10);
		if (a4)
		{
			v6 = *(float*)((char*)a2 + 282);
			v7 = v16;
			v8 = (float*)loader_query_float_attribute(a3, 0, 600);
			install_wall(v8, v4, (char*)v4 + 5, v7, v6, 0);
		}
	}
	*(DWORD*)((char*)v4 + 66) = v13;
	*(DWORD*)((char*)v4 + 54) = v11;
	*(DWORD*)((char*)v4 + 58) = v10;
	*(DWORD*)((char*)v4 + 62) = v14;
	*(DWORD*)((char*)v4 + 74) = v15;
	*(DWORD*)((char*)v4 + 70) = v12;
	*(DWORD*)((char*)v4 + 22) = a3;
	return v4;
}
// 10024EC: using guessed type void *TCollisionComponent::vftable;

//----- (01019172) --------------------------------------------------------
TZmapList* TCollisionComponent::~TCollisionComponent()
{
	TCollisionComponent* v1; // esi
	int v2; // eax
	int v3; // eax
	void* v4; // edi

	v2 = *(DWORD*)((char*)this + 46);
	*(DWORD*)this = &TCollisionComponent::vftable;
	if (*(DWORD*)(v2 + 4))
	{
		do
		{
			v3 = *(DWORD*)((char*)this + 46);
			v4 = *(void**)(v3 + 8);
			objlist_delete_object(*(DWORD*)((char*)this + 46), *(DWORD*)(v3 + 8));
			component_delete(v4);
		} while (*(DWORD*)(*(DWORD*)((char*)this + 46) + 4));
	}
	objlist_destroy(*(DWORD*)((char*)this + 46));

	// TODO: FIXME: needs to be called on an object
	return TPinballComponent::~TPinballComponent(this);
}
// 10024EC: using guessed type void *TCollisionComponent::vftable;
