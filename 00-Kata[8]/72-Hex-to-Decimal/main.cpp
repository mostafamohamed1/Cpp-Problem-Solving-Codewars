#include <iostream>
#include <string>
#include <sstream>

int hexToDec(std::string hexString)
{
  return std::stoi(hexString, nullptr, 16);
}

int hexToDec1(std::string hex)
{
  int n;
  std::istringstream(hex) >> std::hex >> n;
  return n;
}

int main()
{
  std::cout << hexToDec("FF") << std::endl;
  std::cout << hexToDec1("FF") << std::endl;
  return 0;
}