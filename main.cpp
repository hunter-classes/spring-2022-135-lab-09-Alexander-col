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
  std::cout << length(&pointP ) << std::endl;
  std::cout << length(&pointQ ) << std::endl;


  std::cout << "---------------------Example for task B---------------------" << std::endl;
  
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = " << ans << std::endl;
  return 0;
}
