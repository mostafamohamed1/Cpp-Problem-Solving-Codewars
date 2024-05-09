#include <iostream>
#include <string>

std::string no_space(const std::string x)
{
  std::string ret = "";
  for (auto item : x)
    if (item != ' ')
      ret += item;
  return ret;
}
int main()
{
  std::cout << no_space("Ris3r NuL");
  return 0;
}
