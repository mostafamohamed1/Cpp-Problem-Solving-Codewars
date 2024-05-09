#include <iostream>
#include <algorithm>

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c)
{
  int arr[] = {
      a * (b + c),
      a * b * c,
      a + b * c,
      (a + b) * c,
      a + b + c};
  return *(std::max_element(std::begin(arr), std::end(arr)));
}
int main()
{
  std::cout << expressionsMatter(2, 10, 3) << std::endl;
  return 0;
}