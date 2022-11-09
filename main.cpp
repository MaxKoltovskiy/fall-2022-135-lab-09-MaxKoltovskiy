#include <iostream>
#include "funcs.h"


int main()
{
  Coord3D pointP = {20, 25, 30};
  std::cout << "3D distance from origin to {20, 25, 30} = " << length(&pointP) << "\n";

  std::cout<< "\n------------------------------------------\n\n";

  Coord3D pointQ = {-40, 10, -9};

  std::cout << "Address of {20, 25, 30}: " << &pointP << "\n";
  std::cout << "Address of {-40, 10, -9}: " << &pointQ << "\n";
  std::cout<< "Farther from origin between {20, 25, 30} and {-40, 10, -9} = " << fartherFromOrigin(&pointP, &pointQ) << "\n";

  std::cout<< "\n------------------------------------------\n\n";

  Coord3D pos = {12.5, 82, 63};
  Coord3D vel = {0.25, 4, -9};

  move(&pos, &vel, 4.0);
  std::cout << "Point with coordinate {12.5, 82, 63} moved by velocities {0.25, 4, -9} after time 4: {" << pos.x << ", " << pos.y << ", " << pos.z << "}\n";
}