#include <iostream>

int twice_as_old(int dad, int son)
{
  return son * 2 > dad ? (son * 2) - dad : dad - (son * 2);
}

int main()
{
  std::cout << twice_as_old(36, 7) << std::endl;
  std::cout << twice_as_old(55, 30) << std::endl;

  return 0;
}