#include "../../Structs.h"

static struct Vector3 vec3_102E3918[] =
{
    { 1.551174f, -0.055868f, -0.169691f },
    { 1.551683f, -0.390744f, 0.103111f },
    { 0.178255f, -0.027801f, -0.260994f },
    { 0.178256f, -0.410371f, 0.067514f },
    { 1.55168f, 0.271335f, 0.103118f },
    { 1.5511f, -0.058883f, 0.390681f },
    { 0.178247f, 0.391223f, 0.067529f },
    { 0.178249f, -0.030239f, 0.413242f },
    { 1.032953f, -0.05611f, -0.188774f },
    { 1.036832f, 0.292633f, 0.094273f },
    { 1.036834f, -0.407101f, 0.09426f },
    { 1.036827f, -0.058447f, 0.388819f }
};

static struct Vector3 vec3_102E39A8[] =
{
    { 0.04203f, 0.005923f, -0.999099f },
    { 0.025776f, -0.999643f, -0.006969f },
    { 0.08146f, -0.009129f, -0.996635f },
    { 0.018199f, -0.999419f, -0.028803f },
    { 0.030547f, 0.99953f, -0.002525f },
    { 0.005487f, 0.000858f, 0.999985f },
    { 0.109175f, 0.993717f, -0.024633f },
    { 0.023718f, -0.011825f, 0.999649f },
    { 0.061745f, -0.016177f, -0.997961f },
    { 0.070333f, 0.997503f, -0.006381f },
    { 0.021597f, -0.999704f, -0.011215f },
    { 0.014058f, -0.019151f, 0.999718f }
};

static short unsigned int strips_102E387C[] =
{
    10 | 0x8000,
    5, 9, 4, 8, 0, 10, 1, 11, 5, 9,
    10 | 0x8000,
    6, 11, 7, 10, 3, 8, 2, 9, 6, 11
};

static struct UV uv_102E38A8[] =
{
    { 183, 211 },
    { 123, 191 },
    { 123, 211 },
    { 63, 191 },
    { 63, 211 },
    { 123, 191 },
    { 123, 211 },
    { 183, 191 },
    { 183, 211 },
    { 123, 191 },
    { 123, 171 },
    { 183, 191 },
    { 183, 171 },
    { 123, 191 },
    { 123, 171 },
    { 63, 191 },
    { 63, 171 },
    { 123, 191 },
    { 123, 171 },
    { 183, 191 }
};

static struct MESH mesh_102E38F8[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_102E387C, 0, NULL, NULL, uv_102E38A8, 0 }
};

static struct MATERIAL mat_102E3868[] =
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

struct ATTACH attach_102E3A38 =
{
    vec3_102E3918,
    vec3_102E39A8,
    ARRAYSIZE(vec3_102E3918),
    mesh_102E38F8,
    mat_102E3868,
    ARRAYSIZE(mesh_102E38F8),
    ARRAYSIZE(mat_102E3868),
    { 0.864965f, -0.009574f, 0.076124f },
    0.765003f,
    0
};