#include <iostream>
#include <string>

using namespace std;

int parseInt(std::string s)
{
  int result = 0;
  for (char c : s)
  {
    if (c >= '0' && c <= '9')
    {
      result = result * 10 + (c - '0');
    }
    else
    {
      break;
    }
  }
  return result;
}

std::string sum_str(const std::string a, const std::string b)
{
  return std::to_string(parseInt(a) + parseInt(b));
}

int main()
{

  std::cout << sum_str("6", "7");

  return 0;
}