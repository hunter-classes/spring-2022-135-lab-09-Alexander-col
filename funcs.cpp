#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"
// add functions here

//Below is the function for the 3d-space.cpp meant portion of the lab 
double length(Coord3D *p)
{
    // first going to square all of the values to then add them together
    double x = p -> x;
    double y = p -> y;
    double z = p -> z;
    double answer = sqrt((x*x)+(y*y)+(z*z));

    return answer; 
}

//Below is the function that was intended for the file of 3d-space.cpp task b portion of the lab 


Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double length1 = length(p1);
    double length2 = length(p2);
    if (length1 > length2)
    {
        return p1; 
    }
    else if (length1 < length2)
    {
        return p2;
    }
    return 0; 
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    //ppos is not a variable, what are you trying to change from ppos
    //You are still still missing something something, what should you do with dt... 
    double xi = (ppos -> x) + ((pvel -> x) * dt);
    double yi = (ppos -> y) + ((pvel -> y) * dt);
    double zi = (ppos -> z) + ((pvel -> z) * dt);
    ppos -> x = xi;
    ppos -> y = yi;
    ppos -> z = zi; 
}

Coord3D* createCoord3D(double x, double y, double z) 
{ 
    Coord3D *points = new Coord3D;
    *points = {x, y, z};

    return points;
}

void deleteCoord3D(Coord3D *p) 
{ 
    delete p;
}