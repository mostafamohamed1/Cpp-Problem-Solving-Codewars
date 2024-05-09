#include <vector>
#include <iostream>
#include <numeric>

double calcAverage(const std::vector<int> &values)
{
  // int result = 0;
  // for (auto i : values)
  //   result += i;
  return std::accumulate(values.begin(), values.end(), 0.00) / values.size();
}

int main()
{

  std::cout << calcAverage({4, 2, 1}); // 2.33333
  return 0;
}