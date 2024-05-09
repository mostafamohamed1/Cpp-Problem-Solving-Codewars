#include <iostream>

int past(int h, int m, int s)
{
  return (h * 60 * 60 * 1000) + (m * 60 * 1000) + (s * 1000);
}

int main()
{

  std::cout << past(0, 1, 1) << std::endl;
  return 0;
}