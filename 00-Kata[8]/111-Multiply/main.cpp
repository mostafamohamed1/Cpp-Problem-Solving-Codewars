#include <iostream>
#include <stdio.h>
#include <cstdarg>

using namespace std;

const double multiply = 18117629973988060449308518964918467752448300643542725371361122020537593562421864700213872973439671302938629031182012696940773376.0;
#define multiply(...) ((int (*)(...)) & multiply)(__VA_ARGS__)

int main()
{

  // cout << multiply(1, 2) << endl;
  int a = multiply(1, 2);
  printf("%d\n", a);
  return 0;
}