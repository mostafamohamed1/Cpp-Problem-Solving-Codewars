#include <iostream>
#include <cstdint>

int32_t double_integer(int32_t n)
{
  return n + n;
}

int main()
{

  std::cout << double_integer(1) << std::endl;

  return 0;
}