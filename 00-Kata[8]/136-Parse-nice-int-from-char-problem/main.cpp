#include <iostream>
#include <string>

int get_age(const std::string &she_said)
{
  return she_said[0] - '0';
}

int main()
{
  std::cout << get_age("9 years old.") << std::endl;

  return 0;
}