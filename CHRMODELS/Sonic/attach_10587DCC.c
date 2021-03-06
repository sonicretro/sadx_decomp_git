#include "../../Structs.h"

static struct Vector3 vec3_10587CF0[] =
{
    { 1.411415f, -0.065716f, 0.333989f },
    { 1.425736f, -0.098336f, -0.188839f },
    { 1.37803f, 0.622796f, 0.290116f },
    { 1.39235f, 0.590176f, -0.232711f },
    { -0.030993f, 0.334985f, 0.290916f },
    { -0.00214f, -0.215251f, 0.32544f },
    { 0.011052f, -0.246462f, -0.197536f },
    { -0.015959f, 0.303388f, -0.231921f },
    { -0.293429f, -0.008505f, 0.057351f }
};

static struct Vector3 vec3_10587D60[] =
{
    { 0.606117f, -0.492713f, 0.624384f },
    { 0.629791f, -0.564238f, -0.533853f },
    { 0.49212f, 0.684917f, 0.537315f },
    { 0.516473f, 0.61138f, -0.599558f },
    { -0.47788f, 0.634726f, 0.60725f },
    { -0.324967f, -0.643941f, 0.69263f },
    { -0.310381f, -0.721671f, -0.618752f },
    { -0.458702f, 0.548909f, -0.698779f },
    { -0.993652f, -0.112358f, 0.005631f }
};

static short unsigned int strips_10587C34[] =
{
    8,
    5, 6, 1, 3, 0, 2, 4, 7,
    4,
    1, 0, 5, 4,
    4,
    6, 7, 3, 2,
    3,
    8, 5, 4,
    5,
    4, 7, 8, 6, 5
};

static struct UV uv_10587C70[] =
{
    { 39, 188 },
    { 106, 188 },
    { 106, 255 },
    { 106, 247 },
    { 39, 255 },
    { 39, 247 },
    { 39, 180 },
    { 106, 180 },
    { 106, 255 },
    { 39, 255 },
    { 39, 188 },
    { 39, 180 },
    { 106, 188 },
    { 106, 180 },
    { 106, 247 },
    { 39, 247 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 },
    { 71, 191 }
};

static struct MESH mesh_10587CD0[] =
{
    { 2 | MeshPolyType_StripsB, 5, strips_10587C34, 0, NULL, NULL, uv_10587C70, 0 }
};

static struct MATERIAL mat_10587BD0[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x39,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000003,
        0xA400,
        0x69,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x69,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x96
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10587DCC =
{
    vec3_10587CF0,
    vec3_10587D60,
    ARRAYSIZE(vec3_10587CF0),
    mesh_10587CD0,
    mat_10587BD0,
    ARRAYSIZE(mesh_10587CD0),
    ARRAYSIZE(mat_10587BD0),
    { 0.566154f, 0.188167f, 0.050639f },
    0.961509f,
    0
};
