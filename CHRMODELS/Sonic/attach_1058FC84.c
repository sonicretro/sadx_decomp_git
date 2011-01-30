#include "../../Structs.h"

static struct Vector3 vec3_1058FB78[] =
{
    { 1.610334f, 0.365422f, 0.090319f },
    { 1.590904f, 0.493582f, -0.057328f },
    { 1.573454f, 0.37425f, -0.175103f },
    { 1.594757f, 0.041034f, -0.227963f },
    { 1.559779f, -0.299426f, -0.134517f },
    { 1.567456f, -0.406656f, 0.001446f },
    { 1.585536f, -0.311554f, 0.137913f },
    { 1.634164f, 0.024768f, 0.155432f },
    { 1.64275f, 0.023237f, 0.094146f },
    { 1.643621f, 0.025211f, -0.046827f },
    { 1.609148f, 0.033038f, -0.173341f }
};

static struct Vector3 vec3_1058FC00[] =
{
    { 0.994271f, 0.103136f, -0.028089f },
    { 0.984184f, 0.10316f, -0.144011f },
    { 0.964118f, 0.101435f, -0.24533f },
    { 0.966184f, -0.018169f, -0.257212f },
    { 0.962687f, -0.180222f, -0.201878f },
    { 0.979943f, -0.176884f, -0.091787f },
    { 0.985302f, -0.170809f, 0.002012f },
    { 0.98974f, -0.031206f, 0.139434f },
    { 0.998002f, -0.033036f, 0.053863f },
    { 0.99121f, -0.039288f, -0.126328f },
    { 0.968919f, -0.041684f, -0.243843f }
};

static short unsigned int strips_1058FAF4[] =
{
    9 | 0x8000,
    7, 0, 8, 1, 9, 2, 10, 3, 4,
    7,
    4, 10, 5, 9, 6, 8, 7
};

static struct UV uv_1058FB18[] =
{
    { 253, 66 },
    { 241, 14 },
    { 242, 66 },
    { 220, 2 },
    { 221, 66 },
    { 197, 16 },
    { 197, 66 },
    { 187, 65 },
    { 197, 112 },
    { 197, 112 },
    { 197, 66 },
    { 220, 130 },
    { 221, 66 },
    { 241, 115 },
    { 242, 66 },
    { 253, 66 }
};

static struct MESH mesh_1058FB58[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1058FAF4, 0, NULL, NULL, uv_1058FB18, 0 }
};

static struct MATERIAL mat_1058FAE0[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x96
    }
};

struct ATTACH attach_1058FC84 =
{
    vec3_1058FB78,
    vec3_1058FC00,
    ARRAYSIZE(vec3_1058FB78),
    mesh_1058FB58,
    mat_1058FAE0,
    ARRAYSIZE(mesh_1058FB58),
    ARRAYSIZE(mat_1058FAE0),
    { 1.6017f, 0.043463f, -0.036265f },
    0.452992f,
    0
};