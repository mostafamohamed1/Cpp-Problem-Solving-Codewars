#include <iostream>
#include <numeric>
#include <vector>

template <typename T>
std::vector<T> map(std::vector<T> array, T (*func)(T))
{
  std::vector<T> result;
  for (const T &element : array)
  {
    result.push_back(func(element));
  }
  return result;
}

int square_sum(std::vector<int> numbers)
{
  std::vector<int> vec = map<int>(numbers, [](int val)
                                  { return val * val; });
  return std::accumulate(vec.begin(), vec.end(), 0);
}

int main()
{

  std::cout << square_sum({0, 3, 4, 5}) << std::endl;

  return 0;
}