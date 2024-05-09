#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> list)
{
  int temp = list[0];
  for (int i = 1; i < list.size(); i++)
  {
    if (temp > list.at(i))
    {
      temp = list.at(i);
    }
  }
  return temp;
}

int max(vector<int> list)
{
  int temp = list[0];
  for (int i = 1; i < list.size(); i++)
  {
    if (temp < list.at(i))
    {
      temp = list.at(i);
    }
  }
  return temp;
}

int main()
{
  std::cout << max({-52, 56, 30, 29, -54, 0, -110}) << std::endl;
  std::cout << min({-52, 56, 30, 29, -54, 0, -110}) << std::endl;

  return 0;
}
