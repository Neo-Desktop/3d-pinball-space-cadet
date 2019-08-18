#include "pinball.h"

//----- (0101CB8E) --------------------------------------------------------
void vector_add(struct vector_type *a1, struct vector_type *a2)
{
*(float *)a1 = *(float *)a1 + *(float *)a2;
*((float *)a1 + 1) = *((float *)a2 + 1) + *((float *)a1 + 1);
}

//----- (0101CCF3) --------------------------------------------------------
void RotateVector(struct vector_type *a1, float a2)
{
long double v2; // st7
long double v3; // st6
long double v4; // st5

v2 = sin(a2);
v3 = cos(a2);
v4 = v3 * *(float *)a1 - v2 * *((float *)a1 + 1);
*(float *)a1 = v4;
*((float *)a1 + 1) = v4 * v2 + v3 * *((float *)a1 + 1);
}

//----- (0101B0A4) --------------------------------------------------------
void vswap(struct vector_type *a1, struct vector_type *a2)
{
int v2; // ST08_4
int v3; // ST0C_4
int v4; // ST10_4
DWORD *v5; // edi

v2 = *(DWORD *)a1;
v3 = *((DWORD *)a1 + 1);
v4 = *((DWORD *)a1 + 2);
*(DWORD *)a1 = *(DWORD *)a2;
v5 = (DWORD *)((char *)a1 + 4);
*v5 = *((DWORD *)a2 + 1);
v5[1] = *((DWORD *)a2 + 2);
*(DWORD *)a2 = v2;
*((DWORD *)a2 + 1) = v3;
*((DWORD *)a2 + 2) = v4;
}
