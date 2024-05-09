#include <iostream>
#include <string>

std::string correct(std::string str)
{
  for (char &c : str)
  {
    if ('5' == c)
      c = 'S';
    if ('0' == c)
      c = 'O';
    if ('1' == c)
      c = 'I';
  }
  return str;
}

int main()
{

  std::cout << correct("1F-RUDYARD K1PL1NG") << std::endl;
  return 0;
}