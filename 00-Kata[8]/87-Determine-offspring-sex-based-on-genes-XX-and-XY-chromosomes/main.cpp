#include <iostream>
#include <string.h>

std::string chromosomeCheck(std::string sperm)
{
  return (sperm[0] == 'Y' || sperm[1] == 'Y' ? "Congratulations! You're going to have a son." : "Congratulations! You're going to have a daughter.");
}

int main()
{

  std::cout << chromosomeCheck("XX") << std::endl;
  std::cout << chromosomeCheck("XY") << std::endl;
  std::cout << chromosomeCheck("YX") << std::endl;
  return 0;
}