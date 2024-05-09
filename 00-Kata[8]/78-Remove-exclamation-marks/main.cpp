#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

std::string removeExclamationMarks(std::string str)
{
  str.erase(remove(str.begin(), str.end(), '!'), str.end());
  return str;
}

int main()
{
  cout << removeExclamationMarks("Hello, World!!!") << endl;

  return 0;
}