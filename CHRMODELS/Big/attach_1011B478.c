#include "../../Structs.h"

static struct Vector3 vec3_1011B388[] =
{
    { -1.28392f, 0.039337f, -2.309292f },
    { -1.154648f, 1.249741f, -1.948979f },
    { -0.147804f, 0.393034f, 0.059119f },
    { -0.067088f, 0.930568f, 0.657891f },
    { -0.137957f, -0.164604f, 0.033911f },
    { -0.155474f, -0.691278f, -0.019703f },
    { -1.500343f, -1.435153f, -1.728098f },
    { 0.442653f, -0.333543f, 0.203757f },
    { 0.501554f, 0.123828f, 0.264487f },
    { 0.479295f, 0.537114f, 0.3632f }
};

static struct Vector3 vec3_1011B400[] =
{
    { 0.820771f, 0.031183f, -0.570406f },
    { 0.821422f, 0.289975f, -0.4911f },
    { 0.707925f, 0.046987f, -0.704723f },
    { 0.5361f, 0.835383f, -0.121375f },
    { 0.635757f, -0.198229f, -0.746001f },
    { 0.524511f, -0.850335f, -0.042646f },
    { 0.70725f, -0.007729f, -0.706921f },
    { 0.645772f, 0.1674f, -0.744953f },
    { 0.819507f, 0.055856f, -0.57034f },
    { 0.778136f, 0.483552f, -0.40085f }
};

static short unsigned int strips_1011B31C[] =
{
    4,
    4, 7, 6, 5,
    4,
    2, 8, 0, 4,
    4,
    3, 9, 1, 2
};

static struct UV uv_1011B33C[] =
{
    { 201, 134 },
    { 215, 150 },
    { 49, 255 },
    { 196, 184 },
    { 203, 81 },
    { 221, 106 },
    { 0, 114 },
    { 201, 134 },
    { 255, 30 },
    { 229, 67 },
    { 30, 0 },
    { 203, 81 }
};

static struct MESH mesh_1011B36C[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_1011B31C, 0, NULL, NULL, uv_1011B33C, 0 }
};

static struct MATERIAL mat_1011B308[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000000,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1011B478 =
{
    vec3_1011B388,
    vec3_1011B400,
    ARRAYSIZE(vec3_1011B388),
    mesh_1011B36C,
    mat_1011B308,
    ARRAYSIZE(mesh_1011B36C),
    ARRAYSIZE(mat_1011B308),
    { -0.499395f, -0.092706f, -0.8257f },
    2.002164f,
    0
};
