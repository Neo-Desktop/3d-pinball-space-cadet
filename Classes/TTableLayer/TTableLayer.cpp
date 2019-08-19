#include "TTableLayer.h"

//----- (010173E7) --------------------------------------------------------
int __thiscall TTableLayer::FieldEffect(TTableLayer* this, struct TBall* a2, struct vector_type* a3)
{
	TTableLayer* v3; // esi
	struct TBall* v4; // edi
	double v5; // ST08_8

	v3 = this;
	v4 = a2;
	v5 = *(float*)((char*)this + 98);
	*(float*)a3 = v5
		- (0.5 - (double)_rand() * 0.00003051850947599719 + *(float*)((char*)v4 + 54))
		* *(float*)((char*)v4 + 66)
		* *(float*)((char*)this + 110);
	*((float*)a3 + 1) = *(float*)((char*)v3 + 102)
		- *(float*)((char*)v4 + 58) * *(float*)((char*)v4 + 66) * *(float*)((char*)v3 + 110);
	return 1;
}

//----- (0101A5AB) --------------------------------------------------------
TTableLayer* __thiscall TTableLayer::TTableLayer(TTableLayer* this, struct TPinballTable* a2)
{
	struct TPinballTable* v2; // edi
	TTableLayer* v3; // esi
	float* v4; // eax
	int v5; // eax
	DWORD* v6; // eax
	int v7; // eax
	DWORD* v8; // eax
	DWORD* v9; // eax
	float* v10; // ecx
	float* v11; // edi
	double v12; // st7
	double v13; // st7
	double v14; // st7
	double v15; // st7
	double v16; // st7
	double v17; // st7
	double v18; // st7
	double v19; // st7
	TEdgeManager* v20; // eax
	float v21; // ST18_4
	float v22; // ST14_4
	TLine* v23; // eax
	TLine* v24; // edi
	double v25; // st7
	float v26; // ST10_4
	double v27; // st7
	float v28; // ST0C_4
	char v30; // [esp+24h] [ebp-5Ch]
	int v31; // [esp+2Ch] [ebp-54h]
	float* v32; // [esp+30h] [ebp-50h]
	int v33; // [esp+38h] [ebp-48h]
	int v34; // [esp+54h] [ebp-2Ch]
	unsigned int v35; // [esp+58h] [ebp-28h]
	int v36; // [esp+5Ch] [ebp-24h]
	int v37; // [esp+60h] [ebp-20h]
	DWORD* v38; // [esp+64h] [ebp-1Ch]
	struct zmap_header_type* v39; // [esp+68h] [ebp-18h]
	int v40; // [esp+6Ch] [ebp-14h]
	int v41; // [esp+70h] [ebp-10h]
	int v42; // [esp+74h] [ebp-Ch]
	int v43; // [esp+78h] [ebp-8h]
	int v44; // [esp+7Ch] [ebp-4h]
	struct TPinballTable* v45; // [esp+88h] [ebp+8h]
	struct TPinballTable* v46; // [esp+88h] [ebp+8h]

	v2 = a2;
	v3 = this;
	TCollisionComponent::TCollisionComponent(this, a2, -1, 0);
	*(DWORD*)v3 = &TTableLayer::vftable;
	v45 = (struct TPinballTable*)loader_query_handle("table");
	loader_query_visual((int)v45, 0, &v30);
	v4 = (float*)loader_query_float_attribute((int)v45, 0, 700);
	proj_recenter(COERCE_INT(*v4), COERCE_INT(v4[1]));
	render_set_background_zmap(v39, 0, 0);
	v5 = (int)v38;
	*(DWORD*)((char*)v3 + 78) = v38;
	v40 = 0;
	v41 = 0;
	v42 = *(DWORD*)(v5 + 12);
	v43 = *(DWORD*)(v5 + 16);
	render_create_sprite(0, v5, (int)v39, 0, 0, &v40);
	*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 66) = v36;
	*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 70) = v37;
	*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 74) = v34;
	v6 = (DWORD*)loader_query_float_attribute((int)v45, 0, 305);
	if (v6)
	{
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 270) = *v6;
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 274) = v6[1];
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 278) = v6[2];
	}
	else
	{
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 270) = 1103626240;
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 274) = 1056964608;
		*(DWORD*)(*(DWORD*)((char*)v3 + 30) + 278) = 1070141400;
	}
	v7 = *(DWORD*)((char*)v3 + 30);
	*(float*)((char*)v3 + 98) = cos(*(float*)(v7 + 278)) * sin(*(float*)(v7 + 274)) * *(float*)(v7 + 270);
	*(float*)((char*)v3 + 102) = sin(*(float*)(v7 + 278)) * sin(*(float*)(v7 + 274)) * *(float*)(v7 + 270);
	v8 = (DWORD*)loader_query_float_attribute((int)v45, 0, 701);
	if (v8)
		* (DWORD*)((char*)v3 + 110) = *v8;
	else
		*(DWORD*)((char*)v3 + 110) = 1045220557;
	v9 = v38;
	*(DWORD*)((char*)v2 + 234) = *(DWORD*)((char*)v38 + 29);
	*(DWORD*)((char*)v2 + 238) = *(DWORD*)((char*)v9 + 33);
	*(DWORD*)((char*)v2 + 242) = v9[3];
	v10 = v32;
	*(DWORD*)((char*)v2 + 246) = v9[4];
	v44 = v31;
	*(DWORD*)((char*)v3 + 66) = v33;
	*(DWORD*)((char*)v3 + 62) = 1097859072;
	v11 = v10;
	v46 = (struct TPinballTable*)v10;
	if (v10[2] >= (double)v10[4])
		v12 = v10[4];
	else
		v12 = v10[2];
	if (v12 >= *v10)
	{
		v13 = *v10;
	}
	else if (v10[2] >= (double)v10[4])
	{
		v13 = v10[4];
	}
	else
	{
		v13 = v10[2];
	}
	*(float*)((char*)v3 + 82) = v13;
	if (v10[2] <= (double)v10[4])
		v14 = v10[4];
	else
		v14 = v10[2];
	if (v14 <= *v10)
	{
		v15 = *v10;
	}
	else if (v10[2] <= (double)v10[4])
	{
		v15 = v10[4];
	}
	else
	{
		v15 = v10[2];
	}
	*(float*)((char*)v3 + 90) = v15;
	if (v10[3] >= (double)v10[5])
		v16 = v10[5];
	else
		v16 = v10[3];
	if (v16 >= v10[1])
	{
		v17 = v10[1];
	}
	else if (v10[3] >= (double)v10[5])
	{
		v17 = v10[5];
	}
	else
	{
		v17 = v10[3];
	}
	*(float*)((char*)v3 + 86) = v17;
	if (v10[3] <= (double)v10[5])
		v18 = v10[5];
	else
		v18 = v10[3];
	if (v18 <= v10[1])
	{
		v19 = v10[1];
	}
	else if (v10[3] <= (double)v10[5])
	{
		v19 = v10[5];
	}
	else
	{
		v19 = v10[3];
	}
	*(float*)((char*)v3 + 94) = v19;
	v20 = (TEdgeManager*)operator new(0xFC4u);
	if (v20)
	{
		v21 = *(float*)((char*)v3 + 94) - *(float*)((char*)v3 + 86);
		v22 = *(float*)((char*)v3 + 90) - *(float*)((char*)v3 + 82);
		edge_manager = TEdgeManager::TEdgeManager(v20, *(float*)((char*)v3 + 82), *(float*)((char*)v3 + 86), v22, v21);
	}
	else
	{
		edge_manager = 0;
	}
	if (v44 > 0)
	{
		while (1)
		{
			v23 = (TLine*)operator new(0x55u);
			v24 = v23 ? TLine::TLine(v23, v3, (char*)v3 + 5, v35, v11[2], v11[3], *v11, v11[1]) : 0;
			if (v24)
			{
				(*(void(__thiscall * *)(TLine*))(*(DWORD*)v24 + 8))(v24);
				objlist_class::Add((TTableLayer*)((char*)v3 + 42), (void*)v24);
			}
			v46 = (struct TPinballTable*)((char*)v46 + 8);
			if (!--v44)
				break;
			v11 = (float*)v46;
		}
	}
	v25 = *(float*)((char*)v3 + 90);
	*(DWORD*)((char*)v3 + 118) = -1;
	v26 = v25;
	v27 = *(float*)((char*)v3 + 94);
	*(DWORD*)((char*)v3 + 114) = (char*)v3 + 5;
	v28 = v27;
	*(DWORD*)((char*)v3 + 122) = v3;
	edges_insert_square(
		*(float*)((char*)v3 + 86),
		*(float*)((char*)v3 + 82),
		v28,
		v26,
		0,
		(TTableLayer*)((char*)v3 + 114));
	return v3;
}
// 100276C: using guessed type void *TTableLayer::vftable;

//----- (0101A928) --------------------------------------------------------
TZmapList* __thiscall TTableLayer::~TTableLayer(TTableLayer* this)
{
	TCollisionComponent* v1; // esi

	v1 = this;
	*(DWORD*)this = &TTableLayer::vftable;
	if (edge_manager)
		TEdgeManager::destroy(edge_manager, 1);
	return TCollisionComponent::~TCollisionComponent(v1);
}
// 100276C: using guessed type void *TTableLayer::vftable;

//----- (0101AACD) --------------------------------------------------------
TTableLayer* __thiscall TTableLayer::destroy(TTableLayer* this, char a2)
{
	TTableLayer* v2; // esi

	v2 = this;
	TTableLayer::~TTableLayer(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}
