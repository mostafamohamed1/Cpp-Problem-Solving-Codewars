#include <iostream>

double getVolumeOfCuboid(double length, double width, double height)
{
  return length * width * height;
}

int main()
{

  std::cout << getVolumeOfCuboid(6.3, 2, 5) << std::endl;

  return 0;
}