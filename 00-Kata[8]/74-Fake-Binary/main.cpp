#include <iostream>
#include <string>

std::string fakeBin(std::string str)
{
  for (auto &c : str)
    c = (int)c - '0' < 5 ? '0' : '1';
  return str;
}

int main()
{

  std::cout << fakeBin("45385593107843568") << std::endl;
  return 0;
}