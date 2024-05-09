#include <iostream>

int duty_free(int price, int discount, int holiday_cost)
{
  return holiday_cost / (price * ((double)discount / 100));
}

int main()
{

  std::cout << duty_free(24, 35, 3000) << std::endl;

  return 0;
}