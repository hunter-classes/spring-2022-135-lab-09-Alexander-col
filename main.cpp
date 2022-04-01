#include <iostream>
#include <cmath>
#include "coord3d.h"

#include "funcs.h"


int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl;

  std::cout << "---------------------Example for task A---------------------" << std::endl;
  std::cout << "The length of P is: " << length(&pointP ) << std::endl;
  std::cout << "The length of Q is: " <<length(&pointQ ) << std::endl;


  std::cout << "---------------------Example for task B---------------------" << std::endl;
  
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = " << ans << std::endl;

  std::cout << "---------------------Example for task C---------------------" << std::endl;

  Coord3D pos = {0, 0, 100.0};
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  std::cout << "---------------------Example for task E---------------------" << std::endl;

  Coord3D *ppos = createCoord3D(0, 0, 0);
  Coord3D *pvel = createCoord3D(6 , -1, 25);

  move(ppos, pvel, 10.0);

  std::cout << "X,Y,Z after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // gets rid of used memory 
  deleteCoord3D(pvel);


  return 0;
}