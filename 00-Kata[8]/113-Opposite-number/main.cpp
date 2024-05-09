#include <iostream>

int opposite(int number)
{
  return ~number + 1;
}

int main()
{

  std::cout << opposite(10) << std::endl;

  return 0;
}