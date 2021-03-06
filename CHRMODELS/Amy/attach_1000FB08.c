#include "../../Structs.h"

static struct Vector3 vec3_1000FA48[] =
{
    { -3.262411f, -0.25775f, -0.289489f },
    { -3.262411f, -0.25775f, 0.29063f },
    { -3.262411f, 0.257837f, -0.289489f },
    { -3.262411f, 0.257837f, 0.29063f },
    { 0.840986f, -0.128855f, -0.14446f },
    { 0.840985f, -0.128855f, 0.1456f },
    { 0.840986f, 0.128938f, -0.14446f },
    { 0.840985f, 0.128938f, 0.1456f }
};

static struct Vector3 vec3_1000FAA8[] =
{
    { 0.047154f, -0.705463f, -0.707176f },
    { 0.047154f, -0.705463f, 0.707176f },
    { 0.047155f, 0.705463f, -0.707176f },
    { 0.047155f, 0.705464f, 0.707176f },
    { 0.59484f, -0.569136f, -0.56767f },
    { 0.594839f, -0.569137f, 0.567671f },
    { 0.59484f, 0.569137f, -0.56767f },
    { 0.59484f, 0.569137f, 0.56767f }
};

static short unsigned int strips_1000F9BC[] =
{
    4,
    7, 6, 3, 2,
    8 | 0x8000,
    1, 3, 5, 7, 4, 6, 0, 2,
    4,
    4, 5, 0, 1
};

static struct UV uv_1000F9E8[] =
{
    { 222, 253 },
    { 222, 253 },
    { 253, 129 },
    { 253, 129 },
    { 129, 129 },
    { 253, 129 },
    { 160, 253 },
    { 222, 253 },
    { 160, 253 },
    { 222, 253 },
    { 129, 129 },
    { 253, 129 },
    { 160, 253 },
    { 160, 253 },
    { 129, 129 },
    { 129, 129 }
};

static struct MESH mesh_1000FA28[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_1000F9BC, 0, NULL, NULL, uv_1000F9E8, 0 }
};

static struct MATERIAL mat_1000F9A8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000009,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000FB08 =
{
    vec3_1000FA48,
    vec3_1000FAA8,
    ARRAYSIZE(vec3_1000FA48),
    mesh_1000FA28,
    mat_1000F9A8,
    ARRAYSIZE(mesh_1000FA28),
    ARRAYSIZE(mat_1000F9A8),
    { -1.210713f, 4.4E-05f, 0.000571f },
    2.137836f,
    0
};
