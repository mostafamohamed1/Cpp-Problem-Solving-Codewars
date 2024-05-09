#include <iostream>

int move(int position, int roll)
{
  return roll * 2 + position;
}

int main()
{

  std::cout << move(3, 6) << std::endl;
  return 0;
}