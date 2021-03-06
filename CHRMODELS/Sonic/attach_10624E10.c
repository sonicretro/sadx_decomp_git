#include "../../Structs.h"

static struct Vector3 vec3_10624D50[] =
{
    { 1.009515f, -0.303462f, -0.001493f },
    { 1.01155f, -0.074183f, -0.21779f },
    { -0.107075f, -0.268494f, -0.013778f },
    { -0.115379f, -0.074995f, -0.186712f },
    { 1.007711f, -0.074017f, 0.216335f },
    { 1.008671f, 0.156355f, -0.000919f },
    { -0.030709f, -0.0748f, 0.155201f },
    { -0.102726f, 0.110864f, -0.01222f }
};

static struct Vector3 vec3_10624DB0[] =
{
    { -0.036285f, -0.99933f, 0.004717f },
    { -0.027607f, 0.004742f, -0.999608f },
    { -0.586418f, -0.80997f, -0.007915f },
    { -0.642683f, -0.046643f, -0.764711f },
    { -0.049401f, 0.001311f, 0.998778f },
    { -0.047444f, 0.998848f, 0.007247f },
    { -0.491706f, -0.034203f, 0.870089f },
    { -0.636342f, 0.771392f, -0.004825f }
};

static short unsigned int strips_10624CC4[] =
{
    4,
    3, 7, 1, 5,
    8,
    4, 5, 6, 7, 2, 3, 0, 1,
    4,
    6, 2, 4, 0
};

static struct UV uv_10624CF0[] =
{
    { 43, 104 },
    { 43, 93 },
    { 55, 105 },
    { 55, 94 },
    { 55, 105 },
    { 55, 94 },
    { 45, 104 },
    { 43, 93 },
    { 43, 114 },
    { 43, 104 },
    { 55, 116 },
    { 55, 105 },
    { 45, 104 },
    { 43, 114 },
    { 55, 105 },
    { 55, 116 }
};

static struct MESH mesh_10624D30[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_10624CC4, 0, NULL, NULL, uv_10624CF0, 0 }
};

static struct MATERIAL mat_10624CB0[] =
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

struct ATTACH attach_10624E10 =
{
    vec3_10624D50,
    vec3_10624DB0,
    ARRAYSIZE(vec3_10624D50),
    mesh_10624D30,
    mat_10624CB0,
    ARRAYSIZE(mesh_10624D30),
    ARRAYSIZE(mat_10624CB0),
    { 0.448086f, -0.073553f, -0.000727f },
    0.603697f,
    0
};
