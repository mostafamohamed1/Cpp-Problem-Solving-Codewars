#include <iostream>
#include <cmath>

bool is_even(double n)
{
  return fmod(n, 2) == 0;
}

int main()
{

  std::cout << is_even(.5) << std::endl;
  std::cout << is_even(1) << std::endl;
  std::cout << is_even(-4) << std::endl;
  std::cout << (0 % 2 == 0) << std::endl;
  std::cout << ((int).5) << std::endl;
  return 0;
}