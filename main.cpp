#include <iostream>
#include <cmath>
#include "coord3d.h"

#include "funcs.h"

int main()
{
  std::cout << "---------------------Example for task A---------------------" << std::endl;
  std::cout << "Goodbye world" << std::endl;
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << length(&pointP ) << std::endl;
  std::cout << length(&pointQ ) << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << ans << std::endl;
  std::cout << "ans = " << ans << std::endl;

  // std::cout << "---------------------Example for task B---------------------" << std::endl;
  // Coord3D pointP = {10, 20, 30};
  // Coord3D pointQ = {-20, 21, -22};
  // Coord3D * fartherFromOrigin(&pointP, &pointQ);
  return 0;
}
