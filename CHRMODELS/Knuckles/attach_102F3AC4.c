#include "../../Structs.h"

static struct Vector3 vec3_102F39B8[] =
{
    { 1.647213f, 0.377171f, -0.182782f },
    { 1.645275f, 0.466209f, -0.07749f },
    { 1.683657f, 0.367261f, 0.00107f },
    { 1.704524f, 0.087253f, 0.021234f },
    { 1.656112f, -0.193993f, -0.023598f },
    { 1.614859f, -0.280134f, -0.111897f },
    { 1.619668f, -0.184083f, -0.20745f },
    { 1.652984f, 0.101267f, -0.238771f },
    { 1.681258f, 0.100149f, -0.205347f },
    { 1.720206f, 0.096128f, -0.118074f },
    { 1.717702f, 0.090239f, -0.021496f }
};

static struct Vector3 vec3_102F3A40[] =
{
    { 0.97039f, 0.176681f, -0.164701f },
    { 0.96635f, 0.180614f, -0.183156f },
    { 0.962533f, 0.179503f, -0.203248f },
    { 0.95499f, -0.06123f, 0.29025f },
    { 0.953929f, -0.240355f, -0.179582f },
    { 0.949361f, -0.24119f, -0.201349f },
    { 0.945178f, -0.238083f, -0.223505f },
    { 0.763255f, -0.010732f, -0.646008f },
    { 0.910104f, -0.020207f, -0.413887f },
    { 0.980051f, -0.029001f, -0.196618f },
    { 0.998754f, -0.04366f, 0.024169f }
};

static short unsigned int strips_102F3934[] =
{
    7 | 0x8000,
    7, 8, 0, 9, 1, 10, 2,
    9,
    2, 3, 10, 4, 9, 5, 8, 6, 7
};

static struct UV uv_102F3958[] =
{
    { 216, 130 },
    { 186, 131 },
    { 201, 224 },
    { 119, 133 },
    { 142, 254 },
    { 61, 131 },
    { 75, 224 },
    { 75, 224 },
    { 38, 130 },
    { 61, 131 },
    { 63, 32 },
    { 119, 133 },
    { 125, 0 },
    { 186, 131 },
    { 189, 32 },
    { 216, 130 }
};

static struct MESH mesh_102F3998[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_102F3934, 0, NULL, NULL, uv_102F3958, 0 }
};

static struct MATERIAL mat_102F3920[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000001,
        0xA400,
        0x21,
        0x94
    }
};

struct ATTACH attach_102F3AC4 =
{
    vec3_102F39B8,
    vec3_102F3A40,
    ARRAYSIZE(vec3_102F39B8),
    mesh_102F3998,
    mat_102F3920,
    ARRAYSIZE(mesh_102F3998),
    ARRAYSIZE(mat_102F3920),
    { 1.667532f, 0.093037f, -0.108769f },
    0.280787f,
    0
};
