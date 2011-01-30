#include "../../Structs.h"

static struct Vector3 vec3_106810F8[] =
{
    { 0.976555f, -0.01198f, 0.438613f },
    { 0.978074f, -0.383562f, 0.003038f },
    { -0.048355f, -0.022523f, 0.438595f },
    { -0.046836f, -0.449494f, 0.00302f },
    { 0.975044f, 0.489469f, 0.003038f },
    { 0.976562f, -0.01198f, -0.500829f },
    { -0.049866f, 0.326607f, 0.00302f },
    { -0.048347f, -0.022523f, -0.376221f }
};

static struct Vector3 vec3_10681158[] =
{
    { 0.028968f, -0.011917f, 0.999509f },
    { -0.017759f, -0.999829f, 0.005225f },
    { 0.029195f, -0.017949f, 0.999413f },
    { -0.017768f, -0.999829f, 0.005135f },
    { -0.084482f, 0.996418f, 0.003851f },
    { -0.136833f, -0.010509f, -0.990538f },
    { -0.084464f, 0.996418f, 0.004086f },
    { -0.136632f, -0.017942f, -0.990459f }
};

static short unsigned int strips_106810C0[] =
{
    10,
    6, 5, 7, 1, 3, 0, 2, 4, 6, 5
};

static struct MESH mesh_106810D8[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_106810C0, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_106811B8 =
{
    vec3_106810F8,
    vec3_10681158,
    ARRAYSIZE(vec3_106810F8),
    mesh_106810D8,
    mat_106804E8,
    ARRAYSIZE(mesh_106810D8),
    ARRAYSIZE(mat_106804E8),
    { 0.387944f, -0.028478f, -0.003422f },
    0.496986f,
    0
};