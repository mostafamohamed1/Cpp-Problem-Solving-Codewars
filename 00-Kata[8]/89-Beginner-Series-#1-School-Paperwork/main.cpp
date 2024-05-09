#include <iostream>

int paperwork(int n, int m)
{
  return n < 0 || m < 0 ? 0 : n * m;
}

int main()
{

  std::cout << paperwork(5, 5) << std::endl;
  std::cout << paperwork(-5, 5) << std::endl;

  return 0;
}