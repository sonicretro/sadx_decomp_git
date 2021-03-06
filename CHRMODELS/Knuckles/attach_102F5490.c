#include "../../Structs.h"

static struct Vector3 vec3_102F53D0[] =
{
    { 1.442751f, -0.011252f, 0.375443f },
    { 1.44276f, -0.421193f, -0.019958f },
    { -0.231457f, 0.00298f, 0.393317f },
    { -0.231456f, -0.451253f, -0.058151f },
    { 1.442766f, 0.396472f, -0.019969f },
    { 1.442754f, -0.013471f, -0.406422f },
    { -0.231466f, 0.45478f, -0.058167f },
    { -0.231463f, 0.000542f, -0.511997f }
};

static struct Vector3 vec3_102F5430[] =
{
    { 0.006853f, -0.00248f, 0.999973f },
    { 0.025059f, -0.999637f, 0.009923f },
    { 0.006947f, 0.005097f, 0.999963f },
    { 0.025682f, -0.999612f, -0.010794f },
    { 0.038521f, 0.999233f, 0.007036f },
    { 0.055688f, -0.005085f, -0.998435f },
    { 0.03891f, 0.99915f, -0.013577f },
    { 0.055695f, 0.002425f, -0.998445f }
};

static short unsigned int strips_102F5370[] =
{
    10,
    0, 3, 1, 7, 5, 6, 4, 2, 0, 3
};

static struct UV uv_102F5388[] =
{
    { 63, 211 },
    { 123, 171 },
    { 123, 211 },
    { 183, 171 },
    { 183, 211 },
    { 123, 171 },
    { 123, 211 },
    { 63, 171 },
    { 63, 211 },
    { 123, 171 }
};

static struct MESH mesh_102F53B0[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_102F5370, 0, NULL, NULL, uv_102F5388, 0 }
};

static struct MATERIAL mat_102F535C[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_102F5490 =
{
    vec3_102F53D0,
    vec3_102F5430,
    ARRAYSIZE(vec3_102F53D0),
    mesh_102F53B0,
    mat_102F535C,
    ARRAYSIZE(mesh_102F53B0),
    ARRAYSIZE(mat_102F535C),
    { 0.60565f, 0.001764f, -0.05934f },
    1.094687f,
    0
};
