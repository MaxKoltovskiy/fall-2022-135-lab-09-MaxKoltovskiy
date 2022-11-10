#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
bool compare(Coord3D p, Coord3D q) {
    if(p.x == q.x && p.y == q.y && p.z == q.z) {
        return true;
    }
    return false;
}
TEST_CASE("3D Length"){
    Coord3D pointP = {10, 20, 30};
    CHECK((length(&pointP) - 37.4166) < 0.0000001);
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
    Coord3D ans = {2,-10,100.4};
    CHECK(compare(pos,ans));
}
TEST_CASE("Create and delete Coord3D"){
    Coord3D correct = {10,20,30};
    Coord3D* result = createCoord3D(10,20,30);
    CHECK(compare(*result, correct));
    deleteCoord3D(result);
    CHECK(!compare(*result, correct));
    
}
