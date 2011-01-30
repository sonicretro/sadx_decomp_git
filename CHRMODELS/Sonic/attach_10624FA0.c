#include "../../Structs.h"

static struct Vector3 vec3_10624EE0[] =
{
    { 1.009947f, -0.346042f, 0.013043f },
    { 1.011769f, -0.07513f, -0.247949f },
    { -0.006732f, -0.303462f, -0.001489f },
    { -0.00485f, -0.074183f, -0.217787f },
    { 1.008033f, -0.075086f, 0.283925f },
    { 1.01016f, 0.200854f, 0.012529f },
    { -0.008383f, -0.074017f, 0.216341f },
    { -0.007576f, 0.156355f, -0.000914f }
};

static struct Vector3 vec3_10624F40[] =
{
    { -0.044343f, -0.999013f, -0.002636f },
    { -0.029256f, -0.003254f, -0.999567f },
    { -0.044266f, -0.998979f, -0.008997f },
    { -0.029254f, -0.001917f, -0.99957f },
    { -0.060249f, -0.003315f, 0.998178f },
    { -0.048873f, 0.998799f, -0.003438f },
    { -0.060256f, -0.00191f, 0.998181f },
    { -0.048773f, 0.998771f, -0.008858f }
};

static short unsigned int strips_10624E84[] =
{
    10 | 0x8000,
    4, 6, 5, 7, 1, 3, 0, 2, 4, 6
};

static struct UV uv_10624E9C[] =
{
    { 41, 112 },
    { 41, 127 },
    { 46, 112 },
    { 46, 127 },
    { 50, 112 },
    { 50, 127 },
    { 55, 112 },
    { 55, 127 },
    { 59, 112 },
    { 60, 127 }
};

static struct MESH mesh_10624EC4[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10624E84, 0, NULL, NULL, uv_10624E9C, 0 }
};

static struct MATERIAL mat_10624E70[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000005,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10624FA0 =
{
    vec3_10624EE0,
    vec3_10624F40,
    ARRAYSIZE(vec3_10624EE0),
    mesh_10624EC4,
    mat_10624E70,
    ARRAYSIZE(mesh_10624EC4),
    ARRAYSIZE(mat_10624E70),
    { 0.501693f, -0.072594f, 0.017988f },
    0.574203f,
    0
};