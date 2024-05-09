#include <stdio.h>
#include <limits>
#include <iomanip>
#include <iostream>
#include <bitset>

using namespace std;

int simpleMultiplication(int a)
{
  return a % 2 == 0 ? a * 8 : a * 9;
}

int main()
{

  float a = 10.0;
  int val = *((int *)(&a));
  printf("%d\n", val);

  long max_val = (long)numeric_limits<float>::max();

  printf("max of float can hold: %d\n", max_val / 2);

  // printf("binary reprecentation of float value of 10.0: %x", std::ios::binary << (10.0));

  bitset<32> b(val);

  cout << b << endl;
  long b2 = b.to_ulong();
  cout << b2 << endl;

  return 0;
}

//  1092616192
//  1073741823
//