#include <string>
#include <iostream>
#include <algorithm>

std::string makeUpperCase(std::string input_str)
{
  std::transform(input_str.begin(), input_str.end(), input_str.begin(), ::toupper);
  return input_str;
}

int main()
{

  std::cout << makeUpperCase("Mostafa");
  return 0;
}