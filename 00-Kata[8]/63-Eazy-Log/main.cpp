#include <iostream>
#include <cmath>

using namespace std;

double EasyLogs(double x, double a, double b)
{
  return log(a * b) / log(x);
}

int main()
{

  cout << EasyLogs(5, 2, 3) << endl;
  cout << log(6) << endl;
  cout << log(5) << endl;
  cout << log(6) / log(5) << endl;

  return 0;
}