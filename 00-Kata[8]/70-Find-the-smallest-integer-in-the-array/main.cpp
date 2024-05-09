#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSmallest(vector<int> list)
{
  sort(list.begin(), list.end());
  return list.front();
}
int main()
{
  cout << findSmallest({34, -345, -1, 100}) << endl;
  return 0;
}