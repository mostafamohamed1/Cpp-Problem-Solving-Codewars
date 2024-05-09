#include <iostream>
#include <array>
#include <numeric>

int findDifference(std::array<int, 3> a, std::array<int, 3> b)
{
  return std::abs(std::accumulate(a.begin(), a.end(), 1, std::multiplies<int>()) - std::accumulate(b.begin(), b.end(), 1, std::multiplies<int>()));
}

int main()
{

  std::cout << findDifference({3, 2, 5}, {1, 4, 4});
  return 0;
}