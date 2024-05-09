#include <iostream>

#include <string>
#include <algorithm>

bool isPalindrom(std::string str)
{
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  std::string rev = str;
  std::reverse(str.begin(), str.end());

  return rev == str;
}

int main()
{
  std::cout << isPalindrom("madam") << std::endl;
  return 0;
}