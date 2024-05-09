#include <iostream>
#include <string>

std::string multi_table(int number)
{
  std::string ret = "";
  for (int i = 1; i <= 10; ++i)
    if (i != 10)
      ret += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i * number) + "\n";
    else
      ret += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i * number);
  return ret;
}

int main()
{
  std::cout << multi_table(10);
  return 0;
}