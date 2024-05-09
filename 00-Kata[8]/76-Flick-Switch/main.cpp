#include <iostream>
#include <string>
#include <vector>

std::vector<bool> flick_switch(const std::vector<std::string> &arr)
{
  bool flag = true;
  std::vector<bool> vec;
  for (auto item : arr)
  {
    if (item == "flick")
      flag = !flag;
    vec.push_back(flag);
  }
  return vec;
}
// ["bicycle", "jarmony", "flick", "sheep", "flick"] ➞ [True, True, False, False, True]

int main()
{

  for (auto i : flick_switch({"bicycle", "jarmony", "flick", "sheep", "flick"}))
    std::cout << i << std::endl;

  return 0;
}