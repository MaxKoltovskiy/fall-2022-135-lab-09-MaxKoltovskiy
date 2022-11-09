#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("3D Length"){
    Coord3D pointP = {10, 20, 30};
    CHECK(length(&pointP) == 37.4166);
}
TEST_CASE("Farther from Origin"){
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
}
TEST_CASE("Change pos with vel"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
}
