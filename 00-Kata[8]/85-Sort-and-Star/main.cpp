#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
  std::sort(s.begin(), s.end());
  std::string ret = "";
  std::string word = s.at(0);
  int len = word.length();
  for (int i = 0; i < len; i++)
  {
    if (i != len - 1)
    {
      ret += word[i];
      ret += "***";
      continue;
    }
    ret = ret + word[i];
  }

  return ret;
}

int main()
{

  std::cout << twoSort({"turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones"});

  return 0;
}