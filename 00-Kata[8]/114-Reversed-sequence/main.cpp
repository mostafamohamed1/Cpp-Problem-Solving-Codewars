#include <iostream>
#include <vector>

std::vector<int> reverseSeq(int n)
{
  std::vector<int> vec;
  for (int i = n; i >= 1; --i)
    vec.push_back(i);
  return vec;
}

int main()
{
  for (int a : reverseSeq(10))
    std::cout << a << std::endl;

  return 0;
}