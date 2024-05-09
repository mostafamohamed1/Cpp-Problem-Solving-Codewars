#include <iostream>

using namespace std;

int quarter_of(int month)
{
  return (month + 2) / 3;
}

int main()
{

  cout << quarter_of(9) << endl;

  return 0;
}