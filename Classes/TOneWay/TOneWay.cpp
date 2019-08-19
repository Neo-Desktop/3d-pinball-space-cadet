#include "TOneWay.h"

//----- (01015B61) --------------------------------------------------------
int __thiscall TOneway::get_scoring(TOneway* this, int a2)
{
	int result; // eax

	if (a2 >= 6)
		result = 0;
	else
		result = *(DWORD*)((char*)this + 4 * a2 + 86);
	return result;
}

//----- (01015B7F) --------------------------------------------------------
void __thiscall TOneway::put_scoring(TOneway* this, int a2, int a3)
{
	if (a2 < 6)
		* (DWORD*)((char*)this + 4 * a2 + 86) = a3;
}

//----- (01018032) --------------------------------------------------------
void __thiscall TOneway::Collision(TOneway* this, struct TBall* a2, struct vector_type* a3, struct vector_type* a4, float a5, struct TEdgeSegment* a6)
{
	TOneway* v6; // edi
	int v7; // edi
	double v8; // st7
	int v9; // eax

	v6 = this;
	if (a6 == *(struct TEdgeSegment**)((char*)this + 82))
	{
		TBall::not_again(a2, a6);
		v8 = *(float*)((char*)a2 + 70) - a5;
		*(DWORD*)((char*)a2 + 42) = *(DWORD*)a3;
		v9 = *((DWORD*)a3 + 1);
		*(float*)((char*)a2 + 70) = v8;
		*(DWORD*)((char*)a2 + 46) = v9;
		if (!*(DWORD*)(*(DWORD*)((char*)v6 + 30) + 370))
		{
			if (*(DWORD*)((char*)v6 + 74))
				loader_play_sound(*(DWORD*)((char*)v6 + 74));
			control_handler(63, v6);
		}
	}
	else if (*(DWORD*)(*(DWORD*)((char*)this + 30) + 370))
	{
		basic_collision(a2, a3, a4, *(float*)((char*)this + 54), *(float*)((char*)this + 58), 1000000000.0, 0.0);
	}
	else if (basic_collision(
		a2,
		a3,
		a4,
		*(float*)((char*)this + 54),
		*(float*)((char*)this + 58),
		*(float*)((char*)this + 66),
		*(float*)((char*)this + 62)) > 0.2)
	{
		v7 = *(DWORD*)((char*)v6 + 70);
		if (v7)
			loader_play_sound(v7);
	}
}

//----- (01019204) --------------------------------------------------------
TOneway* __thiscall TOneway::TOneway(TOneway* this, struct TPinballTable* a2, int a3)
{
	TLine* v3; // edi
	TOneway* v4; // esi
	TLine* v5; // eax
	TLine* v6; // eax
	TLine* v7; // eax
	float v8; // ST10_4
	char v10; // [esp+10h] [ebp-60h]
	int v11; // [esp+18h] [ebp-58h]
	int* v12; // [esp+1Ch] [ebp-54h]
	unsigned int v13; // [esp+44h] [ebp-2Ch]
	int v14; // [esp+58h] [ebp-18h]
	int v15; // [esp+5Ch] [ebp-14h]
	int v16; // [esp+64h] [ebp-Ch]
	int v17; // [esp+68h] [ebp-8h]

	v3 = 0;
	v4 = this;
	TCollisionComponent::TCollisionComponent(this, a2, a3, 0);
	*(DWORD*)v4 = &TOneway::vftable;
	loader_query_visual(a3, 0, &v10);
	if (v11 == 2)
	{
		v16 = *v12;
		v17 = v12[1];
		v14 = v12[2];
		v15 = v12[3];
		v5 = (TLine*)operator new(0x55u);
		if (v5)
			v3 = TLine::TLine(v5, v4, (char*)v4 + 5, v13, (struct vector_type*) & v16, (struct vector_type*) & v14);
		if (v3)
		{
			TLine::Offset(v3, *(float*)((char*)a2 + 282));
			(*(void(__thiscall * *)(TLine*))(*(DWORD*)v3 + 8))(v3);
			objlist_class::Add((TOneway*)((char*)v4 + 42), (void*)v3);
		}
		v6 = (TLine*)operator new(0x55u);
		if (v6)
			v7 = TLine::TLine(v6, v4, (char*)v4 + 5, v13, (struct vector_type*) & v14, (struct vector_type*) & v16);
		else
			v7 = 0;
		*(DWORD*)((char*)v4 + 82) = v7;
		if (v7)
		{
			v8 = -(*(float*)((char*)a2 + 282) * 0.8);
			TLine::Offset(v7, v8);
			(*(void (**)(void))(**(DWORD * *)((char*)v4 + 82) + 8))();
			objlist_class::Add((TOneway*)((char*)v4 + 42), *(void**)((char*)v4 + 82));
		}
	}
	return v4;
}
// 1002530: using guessed type void *TOneway::vftable;

//----- (0101AAA7) --------------------------------------------------------
TOneway* __thiscall TOneway::destroy(TOneway* this, char a2)
{
	TOneway* v2; // esi

	v2 = this;
	TCollisionComponent::~TCollisionComponent(this);
	if (a2 & 1)
		component_delete((void*)v2);
	return v2;
}
