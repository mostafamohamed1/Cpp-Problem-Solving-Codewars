#include <iostream>
#include <string>

#define TRUE "true"
#define FALSE "false"

std::string boolean_to_string(bool b)
{
  return b ? TRUE : FALSE;
}

int main()
{
  std::cout << boolean_to_string(true) << std::endl;

  return 0;
}