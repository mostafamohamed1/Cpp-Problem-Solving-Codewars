#include <iostream>

bool hero(int bullets, int dragons)
{
  return bullets / 2 >= dragons ? true : false;
}

int main()
{

  std::cout << hero(10, 5) << std::endl;

  return 0;
}