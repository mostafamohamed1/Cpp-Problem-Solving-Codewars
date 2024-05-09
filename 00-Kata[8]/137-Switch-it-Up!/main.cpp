#include <iostream>
#include <string>
#include <array>

std::string switch_it_up(int number)
{
  std::array<std::string, 10> ret{"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

  return ret[number];
}

int main()
{

  return 0;
}