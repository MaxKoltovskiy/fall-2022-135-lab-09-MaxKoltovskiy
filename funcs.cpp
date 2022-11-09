#include <iostream>
#include "funcs.h"
#include <cmath>

double length(Coord3D* p) {
    double result = pow(p->x,2) + pow(p->y,2)+ pow(p->z,2);
    return sqrt(result);
}

Coord3D* fartherFromOrigin(Coord3D* p1, Coord3D* p2) {
    double length1 = length(p1);
    double length2 = length(p2);
    if(length1 > length2) {
        return p1;
    }
    return p2;
}

void move(Coord3D* ppos, Coord3D* pvel, double dt) {
    ppos->x += pvel->x * dt;
    ppos->y += pvel->y * dt;
    ppos->z += pvel->z * dt;
}

