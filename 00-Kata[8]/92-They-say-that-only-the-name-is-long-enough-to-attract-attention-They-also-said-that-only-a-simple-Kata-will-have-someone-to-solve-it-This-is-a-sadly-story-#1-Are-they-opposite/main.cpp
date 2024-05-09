#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isOpposite(const std::string &s1, const std::string &s2)
{
  if ((s1.size() != s2.size()) || (s1 == "" && s2 == ""))
    return false;
  for (int i = 0; i < s1.size(); ++i)
  {
    if ((int)tolower(s1[i]) != (int)tolower(s2[i]))
      return false;
    if ((s1[i] - s2[i]) == 0)
      return false;
  }
  return true;
}
int main()
{

  cout << isOpposite("ab", "AB") << endl;
  cout << isOpposite("aB", "AB") << endl;
  cout << isOpposite("kmOBBQNaDzYii", "KMobbqnAdPyII") << endl;

  return 0;
}