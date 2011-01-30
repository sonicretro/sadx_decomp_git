#include "../../Structs.h"

static struct Vector3 vec3_1011DB00[] =
{
    { -0.540899f, 0.030838f, -0.214919f },
    { 3.489023f, 0.03196f, 1.78379f },
    { 0.257922f, 0.039943f, 0.940529f },
    { 3.469128f, -2.437438f, 0.939805f },
    { 0.251078f, -1.563844f, 0.573886f },
    { 3.466288f, -2.437428f, -0.577973f },
    { 0.249163f, -1.563837f, -0.320892f },
    { 3.485316f, 0.031975f, -1.258276f },
    { 0.254038f, 0.039957f, -0.623839f },
    { 3.490492f, 2.511482f, -0.561485f },
    { 0.260688f, 1.679724f, -0.3209f },
    { 3.500193f, 2.510949f, 0.914426f },
    { 0.262603f, 1.679716f, 0.573875f },
    { 1.582962f, 0.031232f, -1.020739f },
    { 1.552151f, 2.205711f, 0.773969f },
    { 1.549831f, 2.205755f, -0.454316f },
    { 1.575427f, 0.031281f, 1.477301f },
    { 1.589568f, -2.133166f, -0.460752f },
    { 1.59196f, -2.133175f, 0.782384f },
    { -0.528521f, 0.033607f, 0.398389f },
    { -0.351728f, 1.018649f, 0.434401f },
    { -0.358889f, 1.017006f, -0.239559f },
    { -0.364651f, -0.913562f, -0.239556f },
    { -0.357491f, -0.911918f, 0.434405f }
};

static struct Vector3 vec3_1011DC20[] =
{
    { -0.876937f, -0.001021f, -0.480604f },
    { -0.147367f, 0.003205f, 0.989077f },
    { -0.40969f, -0.000418f, 0.912225f },
    { -0.177793f, -0.801531f, 0.57091f },
    { -0.54929f, -0.64899f, 0.526396f },
    { -0.170339f, -0.79302f, -0.584897f },
    { -0.519009f, -0.648772f, -0.556529f },
    { -0.106264f, -0.000663f, -0.994338f },
    { -0.317378f, -0.00039f, -0.948299f },
    { -0.157252f, 0.796499f, -0.583833f },
    { -0.515789f, 0.65164f, -0.556171f },
    { -0.186594f, 0.804497f, 0.563886f },
    { -0.545802f, 0.651887f, 0.526445f },
    { -0.168673f, -0.00145f, -0.985671f },
    { -0.294253f, 0.769461f, 0.566873f },
    { -0.263086f, 0.763108f, -0.590298f },
    { -0.227278f, 0.000366f, 0.97383f },
    { -0.274188f, -0.762543f, -0.58596f },
    { -0.29266f, -0.770324f, 0.566525f },
    { -0.89519f, -0.000232f, 0.445686f },
    { -0.804117f, 0.376873f, 0.459742f },
    { -0.778878f, 0.376045f, -0.501936f },
    { -0.778467f, -0.378233f, -0.500929f },
    { -0.804036f, -0.377678f, 0.459222f }
};

static short unsigned int strips_1011D988[] =
{
    4,
    19, 0, 22, 8,
    5 | 0x8000,
    13, 6, 17, 4, 18,
    20 | 0x8000,
    13, 8, 6, 22, 23, 19, 2, 20, 12, 21, 10, 8, 15, 13, 7, 17, 5, 18, 3, 1,
    6 | 0x8000,
    9, 11, 14, 16, 12, 2,
    6 | 0x8000,
    7, 9, 15, 14, 10, 12,
    5,
    19, 20, 0, 21, 8,
    8 | 0x8000,
    6, 23, 4, 2, 18, 16, 1, 11
};

static struct UV uv_1011DA08[] =
{
    { 127, 27 },
    { 127, 12 },
    { 88, 26 },
    { 127, 42 },
    { 127, 122 },
    { 49, 41 },
    { 21, 122 },
    { 49, 41 },
    { 21, 122 },
    { 127, 122 },
    { 127, 42 },
    { 49, 41 },
    { 88, 26 },
    { 88, 34 },
    { 127, 27 },
    { 127, 42 },
    { 168, 34 },
    { 208, 42 },
    { 168, 27 },
    { 208, 42 },
    { 127, 42 },
    { 234, 120 },
    { 127, 122 },
    { 127, 238 },
    { 21, 122 },
    { 6, 237 },
    { 21, 122 },
    { 6, 237 },
    { 127, 238 },
    { 249, 238 },
    { 249, 239 },
    { 234, 120 },
    { 127, 121 },
    { 208, 42 },
    { 127, 42 },
    { 127, 238 },
    { 249, 238 },
    { 234, 120 },
    { 234, 120 },
    { 208, 42 },
    { 208, 42 },
    { 127, 27 },
    { 168, 34 },
    { 127, 12 },
    { 168, 27 },
    { 127, 42 },
    { 49, 41 },
    { 88, 34 },
    { 49, 41 },
    { 127, 42 },
    { 21, 122 },
    { 127, 121 },
    { 127, 238 },
    { 249, 239 }
};

static struct MESH mesh_1011DAE0[] =
{
    { 0 | MeshPolyType_StripsB, 7, strips_1011D988, 0, NULL, NULL, uv_1011DA08, 0 }
};

static struct MATERIAL mat_1011D974[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000020,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1011DD40 =
{
    vec3_1011DB00,
    vec3_1011DC20,
    ARRAYSIZE(vec3_1011DB00),
    mesh_1011DAE0,
    mat_1011D974,
    ARRAYSIZE(mesh_1011DAE0),
    ARRAYSIZE(mat_1011D974),
    { 1.479647f, 0.037022f, 0.262757f },
    2.904496f,
    0
};