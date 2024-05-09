#include <iostream>

bool lovefunc(int f1, int f2)
{
  return (((f1 % 2 == 0) + (f2 % 2 == 0)) == 1);
}

int main()
{
  std::cout << lovefunc(1, 2) << std::endl;
  std::cout << lovefunc(0, 3) << std::endl;
  return 0;
}