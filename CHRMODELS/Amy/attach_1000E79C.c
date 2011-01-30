#include "../../Structs.h"

static struct Vector3 vec3_1000E660[] =
{
    { 0.950469f, -0.44267f, 0.230534f },
    { 1.003619f, -0.307995f, -0.227095f },
    { 0.150027f, -0.189516f, 0.291914f },
    { 0.136041f, -0.283557f, -0.16713f },
    { 0.940027f, 0.511476f, 0.218599f },
    { 0.991299f, 0.378109f, -0.252458f },
    { 0.149941f, 0.236168f, 0.291758f },
    { 0.133445f, 0.311003f, -0.163274f },
    { 0.97759f, 0.585703f, -0.053674f },
    { 0.136907f, 0.439494f, 0.054245f },
    { 0.138125f, -0.384931f, 0.063046f },
    { 0.910668f, 0.027581f, 0.327314f },
    { 0.988817f, -0.526751f, -0.043056f }
};

static struct Vector3 vec3_1000E700[] =
{
    { -0.091138f, -0.733121f, 0.673964f },
    { -0.07441f, -0.354523f, -0.932082f },
    { -0.102105f, -0.377152f, 0.920506f },
    { -0.153887f, -0.507436f, -0.847837f },
    { -0.099465f, 0.749022f, 0.655036f },
    { -0.114086f, 0.356728f, -0.927216f },
    { -0.105229f, 0.373276f, 0.921733f },
    { -0.168279f, 0.459583f, -0.872047f },
    { -0.159576f, 0.937873f, -0.308108f },
    { -0.235871f, 0.968207f, 0.083309f },
    { -0.214205f, -0.966341f, 0.142483f },
    { 0.003112f, 0.006733f, 0.999973f },
    { -0.125606f, -0.941007f, -0.314212f }
};

static short unsigned int strips_1000E5B8[] =
{
    7 | 0x8000,
    12, 1, 3, 5, 7, 8, 9,
    4,
    8, 9, 4, 6,
    7,
    4, 6, 11, 2, 0, 10, 12,
    3,
    12, 10, 3
};

static struct UV uv_1000E5F0[] =
{
    { 247, 247 },
    { 247, 231 },
    { 7, 231 },
    { 247, 23 },
    { 7, 23 },
    { 247, 7 },
    { 7, 7 },
    { 85, 190 },
    { 39, 190 },
    { 85, 180 },
    { 39, 180 },
    { 78, 200 },
    { 47, 206 },
    { 79, 217 },
    { 47, 229 },
    { 79, 234 },
    { 46, 229 },
    { 76, 234 },
    { 247, 247 },
    { 7, 247 },
    { 7, 231 }
};

static struct MESH mesh_1000E644[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1000E5B8, 0, NULL, NULL, uv_1000E5F0, 0 }
};

static struct MATERIAL mat_1000E5A4[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000B,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000E79C =
{
    vec3_1000E660,
    vec3_1000E700,
    ARRAYSIZE(vec3_1000E660),
    mesh_1000E644,
    mat_1000E5A4,
    ARRAYSIZE(mesh_1000E644),
    ARRAYSIZE(mat_1000E5A4),
    { 0.568532f, 0.029476f, 0.037428f },
    0.626605f,
    0
};