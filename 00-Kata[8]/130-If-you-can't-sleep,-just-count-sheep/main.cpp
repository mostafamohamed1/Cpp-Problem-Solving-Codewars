#include <iostream>

#include <string>

std::string countSheep(int number)
{
  return number ? countSheep(number - 1) + std::to_string(number) + " sheep..." : "";
}

int main()
{
  std::cout << countSheep(3) << std::endl;

  return 0;
}