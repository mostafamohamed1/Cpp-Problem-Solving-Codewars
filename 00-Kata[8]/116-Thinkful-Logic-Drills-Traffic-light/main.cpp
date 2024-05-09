#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string update_light(std::string current)
{

  std::vector<std::string> lights{"green", "yellow", "red"};
  auto it = std::find(lights.begin(), lights.end(), current);
  std::cout << typeid(it).name() << std::endl;
  return it == lights.end() - 1 ? lights[0] : *(it + 1);
}

int main()
{
  std::cout << update_light("red") << std::endl;

  return 0;
}