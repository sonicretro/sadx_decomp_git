#include "../../Structs.h"

static struct Vector3 vec3_10202108[] =
{
    { 0.331999f, 0.224891f, -0.056118f },
    { 0.175821f, -0.26998f, 0.275908f },
    { 0.738414f, -0.818462f, -1.390737f },
    { 0.642679f, -1.060467f, -1.235788f },
    { -0.292304f, 0.163608f, -0.246897f },
    { -0.261192f, -0.312878f, 0.142362f },
    { 0.3024f, -0.861262f, -1.523977f },
    { 0.33747f, -1.090427f, -1.329056f }
};

static struct Vector3 vec3_10202168[] =
{
    { 0.811759f, 0.549252f, -0.198418f },
    { 0.573785f, -0.639539f, 0.511626f },
    { 0.795477f, 0.064906f, -0.602497f },
    { 0.595706f, -0.802959f, 0.019758f },
    { -0.652346f, 0.413202f, -0.635381f },
    { -0.64056f, -0.75319f, 0.149622f },
    { -0.329832f, -0.039755f, -0.943202f },
    { -0.356983f, -0.895645f, -0.265299f }
};

static short unsigned int quads_1020206C[] =
{
    0, 1, 2, 3,
    1, 5, 3, 7,
    5, 4, 7, 6,
    4, 0, 6, 2,
    2, 3, 6, 7
};

static struct UV uv_10202098[] =
{
    { 111, 7 },
    { 15, 8 },
    { 112, 227 },
    { 17, 227 },
    { 111, 7 },
    { 15, 8 },
    { 112, 227 },
    { 17, 227 },
    { 111, 7 },
    { 15, 8 },
    { 112, 227 },
    { 17, 227 },
    { 111, 7 },
    { 15, 8 },
    { 112, 227 },
    { 17, 227 },
    { 111, 7 },
    { 15, 8 },
    { 112, 227 },
    { 17, 227 }
};

static struct MESH mesh_102020E8[] =
{
    { 0 | MeshPolyType_Quads, 5, quads_1020206C, 0, NULL, NULL, uv_10202098, 0 }
};

static struct MATERIAL mat_10202058[] =
{
    {
        0xFF7F7F7F,
        0xFFFFFFFF,
        6.0f,
        0x00000015,
        0x8400,
        0x21,
        0x94
    }
};

struct ATTACH attach_102021C8 =
{
    vec3_10202108,
    vec3_10202168,
    ARRAYSIZE(vec3_10202108),
    mesh_102020E8,
    mat_10202058,
    ARRAYSIZE(mesh_102020E8),
    ARRAYSIZE(mat_10202058),
    { 0.223055f, -0.432768f, -0.624035f },
    1.114753f,
    0
};