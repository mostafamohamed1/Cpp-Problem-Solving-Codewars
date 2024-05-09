#include <iostream>
#include <vector>

using namespace std;

unsigned int hotpo(unsigned int n, int count = 0)
{
  if (n == 1)
    return count;
  return hotpo(n % 2 == 0 ? n / 2 : n * 3 + 1, ++count);
}

int main()
{
  cout << hotpo(6) << endl;

  return 0;
}