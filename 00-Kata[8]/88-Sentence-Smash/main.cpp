#include <iostream>
#include <vector>
#include <string>

template <typename T>
T combineArr(std::vector<T> arr)
{
  std::string ret = "";
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr.size() - 1 == i)
      ret += arr.at(i);
    else
      ret += arr.at(i) + " ";
  }
  return ret;
}

std::string smash(const std::vector<std::string> &words)
{
  return combineArr(words);
}

int main()
{

  std::vector<std::string> vec = {"hello",
                                  "world",
                                  "this",
                                  "is",
                                  "great"};
  std::cout << smash(vec) << std::endl;

  return 0;
}