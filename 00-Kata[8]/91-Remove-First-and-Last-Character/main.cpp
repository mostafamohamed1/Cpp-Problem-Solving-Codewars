#include <iostream>
#include <string>

using namespace std;

string sliceString(string &str)
{
  return str.substr(1, str.size() - 2);
}

int main()
{
  string a = "rats";
  cout << sliceString(a);
  return 0;
}