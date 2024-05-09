#include <iostream>

using namespace std;

int area_or_perimeter(int l, int w)
{
  return l == w ? l * w : (l + w) * 2;
}

int main()
{
  cout << area_or_perimeter(6, 10) << endl;

  return 0;
}