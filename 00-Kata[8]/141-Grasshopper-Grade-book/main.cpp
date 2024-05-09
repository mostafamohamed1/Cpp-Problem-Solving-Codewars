#include <iostream>

char getGrade(int a, int b, int c)
{
  return ((a + b + c) / 3) >= 90 ? 'A' : ((a + b + c) / 3) >= 80 ? 'B'
                                     : ((a + b + c) / 3) >= 70   ? 'C'
                                     : ((a + b + c) / 3) >= 60   ? 'D'
                                                                 : 'F';
}
// Another Solution
// char getGrade(int a, int b, int c)
// {
//   int avg = (a + b + c) / 3;
//   return 'A' + (avg < 90) + (avg < 80) + (avg < 70) + ((avg < 60) << 1);
// }

int main()
{

  std::cout << getGrade(70, 70, 100) << std::endl;

  return 0;
}