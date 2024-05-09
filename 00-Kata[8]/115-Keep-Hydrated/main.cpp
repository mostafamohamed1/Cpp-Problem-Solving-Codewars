#include <iostream>

int litres(double time)
{
  return time / 2;
}

int main()
{
  std::cout << litres(3) << std::endl;

  return 0;
}