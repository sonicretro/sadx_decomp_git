#include "../../Structs.h"

static struct Vector3 vec3_10623518[] =
{
    { 0.851494f, 0.007071f, 0.156339f },
    { 0.854809f, -0.251655f, -0.122785f },
    { -0.002783f, -0.047887f, 0.156884f },
    { -0.001352f, -0.292872f, -0.098837f },
    { 0.849586f, 0.290208f, -0.124792f },
    { 0.851381f, 0.00709f, -0.394652f },
    { -0.002494f, 0.199078f, -0.100723f },
    { -0.002854f, -0.04993f, -0.337888f }
};

static struct Vector3 vec3_10623578[] =
{
    { 0.004609f, 0.01438f, 0.999886f },
    { 0.037831f, -0.999014f, -0.023237f },
    { 0.008295f, -0.038931f, 0.999207f },
    { 0.038784f, -0.999246f, 0.001649f },
    { -0.09942f, 0.994678f, -0.027029f },
    { -0.06686f, 0.007723f, -0.997732f },
    { -0.098613f, 0.99512f, -0.003287f },
    { -0.063138f, -0.047165f, -0.99689f }
};

static short unsigned int strips_106234BC[] =
{
    10,
    0, 3, 1, 7, 5, 6, 4, 2, 0, 3
};

static struct UV uv_106234D4[] =
{
    { 123, 235 },
    { 3, 211 },
    { 123, 211 },
    { 3, 193 },
    { 123, 193 },
    { 3, 211 },
    { 123, 211 },
    { 3, 235 },
    { 123, 235 },
    { 3, 211 }
};

static struct MESH mesh_106234FC[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_106234BC, 0, NULL, NULL, uv_106234D4, 0 }
};

static struct MATERIAL mat_106234A8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_106235D8 =
{
    vec3_10623518,
    vec3_10623578,
    ARRAYSIZE(vec3_10623518),
    mesh_106234FC,
    mat_106234A8,
    ARRAYSIZE(mesh_106234FC),
    ARRAYSIZE(mat_106234A8),
    { 0.425977f, -0.001332f, -0.118884f },
    0.509847f,
    0
};
