#include <iostream>

bool checkForFactor(int base, int factor)
{
  return base % factor == 0 ? 1 : 0;
}

int main()
{

  std::cout << checkForFactor(10, 2) << std::endl;

  return 0;
}