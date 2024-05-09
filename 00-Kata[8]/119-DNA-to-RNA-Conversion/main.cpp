#include <iostream>
#include <string>
#include <algorithm>

std::string DNAtoRNA(std::string dna)
{
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
}

int main()
{
  std::cout << DNAtoRNA("GCAT") << std::endl;
  return 0;
}