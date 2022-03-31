#pragma once
#include "coord3d.h"
// add prototypes here
// This the the function for task 
double length(Coord3D *p);

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);

void move(Coord3D *ppos, Coord3D *pvel, double dt);