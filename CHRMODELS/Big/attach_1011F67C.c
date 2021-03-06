#include "../../Structs.h"

static struct Vector3 vec3_1011F4E0[] =
{
    { 1.005386f, -0.78209f, -0.876426f },
    { 1.032912f, -0.471851f, -0.995239f },
    { 0.645842f, -0.773859f, -1.244583f },
    { 0.766546f, -0.470054f, -1.268309f },
    { -0.239234f, -0.289324f, 0.291523f },
    { 0.142077f, 0.630854f, 0.210726f },
    { -0.368334f, -0.126292f, -0.217171f },
    { -0.379105f, 0.63185f, -0.202838f },
    { 0.05395f, -0.65335f, -0.680932f },
    { 0.538752f, -0.674415f, -0.162288f },
    { 0.218004f, -0.326344f, -0.731165f },
    { 0.590682f, -0.326857f, -0.337524f },
    { 0.746695f, -0.891137f, -0.964828f },
    { 0.190964f, -0.816823f, -0.275335f },
    { -0.340165f, 0.334015f, 0.431351f },
    { 0.201964f, -0.165896f, 0.364655f },
    { 0.954015f, -0.711563f, -1.211207f }
};

static struct Vector3 vec3_1011F5B0[] =
{
    { 0.819606f, -0.530705f, 0.215866f },
    { 0.823792f, 0.562567f, -0.069896f },
    { -0.318361f, -0.504013f, -0.802881f },
    { 0.019586f, 0.58074f, -0.813853f },
    { -0.562263f, -0.553596f, 0.614322f },
    { 0.81088f, 0.557973f, 0.176465f },
    { -0.934944f, -0.251656f, -0.2501f },
    { -0.458784f, 0.497769f, -0.736032f },
    { -0.730803f, -0.463915f, -0.500709f },
    { 0.593658f, -0.498486f, 0.631729f },
    { -0.217193f, 0.590938f, -0.77693f },
    { 0.829654f, 0.53839f, 0.147682f },
    { 0.07243f, -0.991658f, -0.106622f },
    { -0.283876f, -0.918272f, 0.276028f },
    { -0.581921f, -0.024022f, 0.812891f },
    { 0.462097f, -0.209934f, 0.861623f },
    { 0.644291f, -0.349087f, -0.680462f }
};

static short unsigned int strips_1011F3D0[] =
{
    3,
    7, 5, 10,
    6,
    9, 13, 0, 12, 16, 2,
    17,
    14, 7, 6, 8, 4, 13, 15, 9, 11, 0, 1, 16, 3, 2, 10, 8, 7,
    4,
    8, 2, 13, 12,
    9,
    6, 4, 14, 15, 5, 11, 10, 1, 3
};

static struct UV uv_1011F428[] =
{
    { 191, 39 },
    { 191, 39 },
    { 191, 75 },
    { 183, 75 },
    { 175, 75 },
    { 183, 111 },
    { 175, 111 },
    { 183, 123 },
    { 183, 111 },
    { 183, 11 },
    { 191, 39 },
    { 183, 31 },
    { 183, 75 },
    { 175, 31 },
    { 175, 75 },
    { 183, 31 },
    { 183, 75 },
    { 191, 75 },
    { 183, 111 },
    { 191, 111 },
    { 183, 123 },
    { 191, 111 },
    { 183, 111 },
    { 191, 75 },
    { 183, 75 },
    { 191, 39 },
    { 183, 75 },
    { 183, 111 },
    { 175, 75 },
    { 175, 111 },
    { 183, 31 },
    { 175, 31 },
    { 183, 11 },
    { 183, 31 },
    { 191, 39 },
    { 191, 75 },
    { 191, 75 },
    { 191, 111 },
    { 191, 111 }
};

static struct MESH mesh_1011F4C4[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1011F3D0, 0, NULL, NULL, uv_1011F428, 0 }
};

static struct MATERIAL mat_1011F3B8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1011F67C =
{
    vec3_1011F4E0,
    vec3_1011F5B0,
    ARRAYSIZE(vec3_1011F4E0),
    mesh_1011F4C4,
    mat_1011F3B8,
    ARRAYSIZE(mesh_1011F4C4),
    ARRAYSIZE(mat_1011F3B8),
    { 0.326903f, -0.129643f, -0.418479f },
    1.143265f,
    0
};
