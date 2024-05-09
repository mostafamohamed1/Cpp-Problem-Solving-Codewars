#include <iostream>

class triangle
{
public:
  static int otherAngle(int a, int b);
};

int triangle::otherAngle(int a, int b)
{
  return 180 - (a + b);
}

int main()
{

  std::cout << triangle::otherAngle(10, 20) << std::endl;

  return 0;
}