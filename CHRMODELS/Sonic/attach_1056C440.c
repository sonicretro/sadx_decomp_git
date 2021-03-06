#include "../../Structs.h"

static struct Vector3 vec3_1056C380[] =
{
    { 0.767989f, -0.021842f, 0.28564f },
    { 0.771304f, -0.302157f, 0.004615f },
    { -0.012414f, -0.040162f, 0.26564f },
    { -0.009221f, -0.32048f, 0.001475f },
    { 0.766081f, 0.256423f, 0.002608f },
    { 0.76968f, -0.023885f, -0.278417f },
    { -0.014359f, 0.238102f, -0.000411f },
    { -0.010723f, -0.042205f, -0.264574f }
};

static struct Vector3 vec3_1056C3E0[] =
{
    { -0.015075f, 0.009551f, 0.999841f },
    { 0.012393f, -0.999915f, 0.004121f },
    { -0.014642f, -0.00301f, 0.999888f },
    { 0.012387f, -0.999918f, 0.003196f },
    { -0.034515f, 0.999398f, -0.003399f },
    { -0.006888f, 0.002588f, -0.999973f },
    { -0.034504f, 0.999396f, -0.004185f },
    { -0.00673f, -0.010117f, -0.999926f }
};

static short unsigned int strips_1056C324[] =
{
    10,
    7, 1, 3, 0, 2, 4, 6, 5, 7, 1
};

static struct UV uv_1056C33C[] =
{
    { 63, 251 },
    { 123, 131 },
    { 123, 251 },
    { 63, 131 },
    { 63, 251 },
    { 3, 131 },
    { 3, 251 },
    { 63, 131 },
    { 63, 251 },
    { 123, 131 }
};

static struct MESH mesh_1056C364[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1056C324, 0, NULL, NULL, uv_1056C33C, 0 }
};

static struct MATERIAL mat_1056C310[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000006,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1056C440 =
{
    vec3_1056C380,
    vec3_1056C3E0,
    ARRAYSIZE(vec3_1056C380),
    mesh_1056C364,
    mat_1056C310,
    ARRAYSIZE(mesh_1056C364),
    ARRAYSIZE(mat_1056C310),
    { 0.378472f, -0.032029f, 0.003612f },
    0.616929f,
    0
};
