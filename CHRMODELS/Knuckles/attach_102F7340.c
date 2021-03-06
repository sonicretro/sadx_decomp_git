#include "../../Structs.h"

static struct Vector3 vec3_102F7280[] =
{
    { 0.804543f, -0.289043f, -0.006682f },
    { 0.806025f, 0.011182f, 0.296751f },
    { -0.141215f, -0.286903f, 0.002404f },
    { -0.140994f, 0.013652f, 0.297324f },
    { 0.803879f, 0.01446f, -0.312958f },
    { 0.803558f, 0.314684f, -0.009526f },
    { 0.012787f, 0.009465f, -0.31393f },
    { -0.139837f, 0.316824f, -0.00044f }
};

static struct Vector3 vec3_102F72E0[] =
{
    { -0.006831f, -0.999953f, 0.006884f },
    { 0.004936f, -0.001967f, 0.999986f },
    { -0.618631f, -0.784442f, -0.044129f },
    { -0.579177f, 0.00138f, 0.815201f },
    { -0.008536f, -0.002908f, -0.999959f },
    { 0.003357f, 0.999993f, 0.001807f },
    { -0.368133f, -0.006953f, -0.929747f },
    { -0.608952f, 0.791811f, -0.047054f }
};

static short unsigned int strips_102F720C[] =
{
    10,
    5, 3, 1, 2, 0, 6, 4, 7, 5, 3,
    4,
    6, 2, 7, 3
};

static struct UV uv_102F722C[] =
{
    { 123, 211 },
    { 63, 171 },
    { 63, 211 },
    { 123, 171 },
    { 123, 211 },
    { 183, 171 },
    { 183, 211 },
    { 123, 171 },
    { 123, 211 },
    { 63, 171 },
    { 183, 171 },
    { 123, 171 },
    { 123, 171 },
    { 63, 171 }
};

static struct MESH mesh_102F7264[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_102F720C, 0, NULL, NULL, uv_102F722C, 0 }
};

static struct MATERIAL mat_102F71F8[] =
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

struct ATTACH attach_102F7340 =
{
    vec3_102F7280,
    vec3_102F72E0,
    ARRAYSIZE(vec3_102F7280),
    mesh_102F7264,
    mat_102F71F8,
    ARRAYSIZE(mesh_102F7264),
    ARRAYSIZE(mat_102F71F8),
    { 0.332405f, 0.013891f, -0.008303f },
    0.739183f,
    0
};
