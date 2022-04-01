#include <iostream>
#include <cmath>
#include "coord3d.h"

#include "funcs.h"

std::string * createAPoem() {
    std::string poem =    // making a string with a poem 
      "   Said Hamlet to Ophelia,            \n"
      "   I'll draw a sketch of thee,        \n"
      "   What kind of pencil shall I use?   \n"
      "   2B or not 2B?                      \n";

    return &poem;    // and returning its address 
}


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

  std::cout << "---------------------Example for task C---------------------" << std::endl;

  Coord3D pos = {0, 0, 100.0};
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  std::cout << "---------------------Example for task E---------------------" << std::endl;

  std::cout << "Goodbye World" << std::endl;




  return 0;
}
