#include "../../Structs.h"

static struct Vector3 vec3_101292A8[] =
{
    { -0.173806f, -0.457605f, 2.6E-05f },
    { -0.073363f, -0.395769f, -0.281897f },
    { 0.055103f, -0.182763f, -0.456146f },
    { 0.162521f, 0.100052f, -0.456162f },
    { 0.207862f, 0.34465f, -0.28194f },
    { 0.173806f, 0.457604f, -2.6E-05f },
    { 0.073363f, 0.395768f, 0.281898f },
    { -0.055103f, 0.182762f, 0.456146f },
    { -0.162522f, -0.100053f, 0.456162f },
    { -0.207862f, -0.344651f, 0.28194f }
};

static struct Vector3 vec3_10129320[] =
{
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344032f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f },
    { 0.905816f, -0.344031f, 0.247266f }
};

static short unsigned int strips_1012921C[] =
{
    5 | 0x8000,
    4, 3, 0, 2, 1,
    3,
    0, 4, 5,
    5 | 0x8000,
    8, 7, 0, 6, 5,
    3,
    0, 8, 9
};

static struct UV uv_10129248[] =
{
    { 65, 87 },
    { 37, 127 },
    { 111, 217 },
    { 37, 173 },
    { 65, 207 },
    { 111, 217 },
    { 65, 87 },
    { 111, 69 },
    { 185, 159 },
    { 185, 113 },
    { 111, 217 },
    { 157, 79 },
    { 111, 69 },
    { 111, 217 },
    { 185, 159 },
    { 157, 199 }
};

static struct MESH mesh_10129288[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1012921C, 0, NULL, NULL, uv_10129248, 0 }
};

static struct MATERIAL mat_10129208[] =
{
    {
        0xFFFFFF7F,
        0xFFFFFFFF,
        11.0f,
        0x00000013,
        0xA400,
        0x21,
        0x95
    }
};

struct ATTACH attach_10129398 =
{
    vec3_101292A8,
    vec3_10129320,
    ARRAYSIZE(vec3_101292A8),
    mesh_10129288,
    mat_10129208,
    ARRAYSIZE(mesh_10129288),
    ARRAYSIZE(mat_10129208),
    { 0.0f, 0.0f, 0.0f },
    0.646131f,
    0
};
