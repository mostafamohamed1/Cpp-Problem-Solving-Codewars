#include <iostream>

using namespace std;

int cockroach_speed(double s)
{

  return ((1000 * s) / 60 / 60) * 100;
}

int main()
{

  cout << ((1000 * 1.08) / 60 / 60) * 100 << endl;

  return 0;
}