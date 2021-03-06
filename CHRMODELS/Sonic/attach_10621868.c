#include "../../Structs.h"

static struct Vector3 vec3_10621778[] =
{
    { 2.763653f, 0.386767f, 0.0f },
    { 0.13721f, -0.570949f, 0.268038f },
    { 0.13721f, -0.570949f, -0.268038f },
    { 0.027545f, 0.133659f, 0.0f },
    { 1.819337f, -0.308216f, -0.134442f },
    { 1.819337f, -0.308216f, 0.134442f },
    { 1.712673f, 0.022556f, 0.0f },
    { 0.951524f, -0.033394f, 0.0f },
    { 0.99413f, -0.559929f, 0.216309f },
    { 0.99413f, -0.559929f, -0.216309f }
};

static struct Vector3 vec3_106217F0[] =
{
    { 0.860919f, 0.508742f, 1E-06f },
    { 0.065433f, -0.497765f, 0.86484f },
    { 0.065433f, -0.497765f, -0.86484f },
    { 0.159958f, 0.987124f, 0.0f },
    { 0.346368f, -0.522384f, -0.779194f },
    { 0.346368f, -0.522385f, 0.779194f },
    { -0.187911f, 0.982186f, 0.0f },
    { 0.055976f, 0.998432f, 0.0f },
    { 0.151468f, -0.592077f, 0.791519f },
    { 0.151468f, -0.592077f, -0.791519f }
};

static short unsigned int strips_106216D4[] =
{
    10 | 0x8000,
    3, 2, 7, 9, 6, 4, 0, 5, 6, 7,
    6,
    7, 3, 8, 1, 9, 2,
    5 | 0x8000,
    7, 5, 8, 4, 9
};

static struct UV uv_10621708[] =
{
    { 3, 193 },
    { 3, 227 },
    { 47, 193 },
    { 47, 227 },
    { 87, 193 },
    { 87, 227 },
    { 123, 193 },
    { 87, 227 },
    { 87, 193 },
    { 47, 193 },
    { 47, 193 },
    { 3, 193 },
    { 47, 227 },
    { 3, 227 },
    { 47, 227 },
    { 3, 227 },
    { 47, 193 },
    { 87, 227 },
    { 47, 227 },
    { 87, 227 },
    { 47, 227 }
};

static struct MESH mesh_1062175C[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_106216D4, 0, NULL, NULL, uv_10621708, 0 }
};

static struct MATERIAL mat_106216C0[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10621868 =
{
    vec3_10621778,
    vec3_106217F0,
    ARRAYSIZE(vec3_10621778),
    mesh_1062175C,
    mat_106216C0,
    ARRAYSIZE(mesh_1062175C),
    ARRAYSIZE(mat_106216C0),
    { 1.395599f, -0.092091f, 0.0f },
    1.354807f,
    0
};
