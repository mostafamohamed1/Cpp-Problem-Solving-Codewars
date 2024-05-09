#include <iostream>
#include <vector>

using namespace std;

vector<int> countBy(int x, int n)
{
  vector<int> v{x};
  for (int i = 0; i < n - 1; i++)
  {
    v.push_back(v.at(i) + x);
  }
  return v;
}

int main()
{

  for (int i : countBy(1, 10))
    cout << i << endl;

  return 0;
}