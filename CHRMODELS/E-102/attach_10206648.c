#include "../../Structs.h"

static struct Vector3 vec3_102064F8[] =
{
    { 0.853582f, -4.531683f, 0.982868f },
    { 0.853582f, -4.531683f, -0.962037f },
    { -0.495104f, -2.636819f, 0.750281f },
    { -0.495104f, -2.636819f, -0.734379f },
    { 0.848558f, -0.002874f, 1.638129f },
    { 0.848558f, -0.002874f, -1.603378f },
    { -0.959732f, -0.002874f, 1.150442f },
    { -0.959732f, -0.002874f, -1.126037f },
    { 0.853582f, -4.531683f, 0.475575f },
    { 0.853582f, -4.531683f, -0.439818f },
    { 0.852943f, -3.456544f, 0.317851f },
    { 0.852943f, -3.456544f, -0.297011f },
    { -0.264077f, -2.96689f, 0.317911f },
    { -0.264077f, -2.96689f, -0.295535f }
};

static struct Vector3 vec3_102065A0[] =
{
    { 0.581499f, -0.495827f, 0.644992f },
    { 0.58421f, -0.492646f, -0.64498f },
    { -0.790293f, -0.404912f, 0.459873f },
    { -0.789303f, -0.404329f, -0.462081f },
    { 0.573112f, 0.278719f, 0.770622f },
    { 0.574952f, 0.279861f, -0.768836f },
    { -0.735627f, 0.377835f, 0.562223f },
    { -0.733196f, 0.380227f, -0.563782f },
    { 0.099243f, -0.588806f, -0.802158f },
    { 0.105568f, -0.580389f, 0.807468f },
    { 0.868525f, -0.362452f, -0.338072f },
    { 0.870333f, -0.357586f, 0.338603f },
    { -0.654408f, -0.690611f, -0.307907f },
    { -0.654862f, -0.689284f, 0.309909f }
};

static short unsigned int tris_10206328[] =
{
    8, 12, 10,
    11, 13, 9
};

static struct UV uv_1020639C[] =
{
    { 241, 127 },
    { 10, 128 },
    { 242, 246 },
    { 241, 127 },
    { 10, 128 },
    { 242, 246 }
};

static short unsigned int tris_10206334[] =
{
    3, 7, 5,
    2, 0, 4,
    4, 0, 10,
    9, 1, 11,
    10, 0, 8,
    11, 1, 5,
    4, 6, 2,
    5, 1, 3
};

static struct UV uv_102063B8[] =
{
    { 65, 148 },
    { 0, 0 },
    { 254, 0 },
    { 65, 148 },
    { 255, 255 },
    { 254, 0 },
    { 254, 0 },
    { 255, 255 },
    { 254, 194 },
    { 255, 255 },
    { 255, 255 },
    { 254, 194 },
    { 254, 194 },
    { 255, 255 },
    { 255, 255 },
    { 254, 194 },
    { 255, 255 },
    { 254, 0 },
    { 254, 0 },
    { 0, 0 },
    { 65, 148 },
    { 254, 0 },
    { 255, 255 },
    { 65, 148 }
};

static short unsigned int quads_10206364[] =
{
    7, 6, 5, 4,
    6, 7, 2, 3,
    3, 1, 13, 9,
    12, 8, 2, 0,
    2, 3, 12, 13,
    10, 11, 4, 5
};

static struct UV uv_10206418[] =
{
    { 0, 0 },
    { 0, 0 },
    { 254, 0 },
    { 254, 0 },
    { 0, 0 },
    { 0, 0 },
    { 65, 148 },
    { 65, 148 },
    { 65, 148 },
    { 255, 255 },
    { 97, 166 },
    { 255, 255 },
    { 97, 166 },
    { 255, 255 },
    { 65, 148 },
    { 255, 255 },
    { 65, 148 },
    { 65, 148 },
    { 97, 166 },
    { 97, 166 },
    { 254, 194 },
    { 254, 194 },
    { 254, 0 },
    { 254, 0 }
};

static short unsigned int quads_10206394[] =
{
    13, 11, 12, 10
};

static struct UV uv_10206478[] =
{
    { 2, 252 },
    { 252, 251 },
    { 2, 2 },
    { 253, 3 }
};

static struct MESH mesh_10206488[] =
{
    { 1 | MeshPolyType_Triangles, 2, tris_10206328, 0, NULL, NULL, uv_1020639C, 0 },
    { 2 | MeshPolyType_Triangles, 8, tris_10206334, 0, NULL, NULL, uv_102063B8, 0 },
    { 2 | MeshPolyType_Quads, 6, quads_10206364, 0, NULL, NULL, uv_10206418, 0 },
    { 3 | MeshPolyType_Quads, 1, quads_10206394, 0, NULL, NULL, uv_10206478, 0 }
};

extern struct MATERIAL mat_102062D8[4];

struct ATTACH attach_10206648 =
{
    vec3_102064F8,
    vec3_102065A0,
    ARRAYSIZE(vec3_102064F8),
    mesh_10206488,
    mat_102062D8,
    ARRAYSIZE(mesh_10206488),
    ARRAYSIZE(mat_102062D8),
    { -0.053075f, -2.267278f, 0.017375f },
    3.122822f,
    0
};