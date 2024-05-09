#include <iostream>

int nthEven(int n)
{
  return (n - 1) * 2;
}

int main()
{

  std::cout << nthEven(10) << std::endl;
  return 0;
}
