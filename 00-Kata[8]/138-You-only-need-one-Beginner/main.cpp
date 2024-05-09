#include <iostream>
#include <vector>
#include <string>

bool check(const std::vector<std::string> &seq, const std::string &elem)
{
  for (auto item : seq)
    if (item == elem)
      return true;
  return false;
}

int main()
{

  std::cout << check({"a", "b", "c"}, "b") << std::endl;

  return 0;
}