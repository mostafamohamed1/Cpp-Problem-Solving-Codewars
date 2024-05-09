#include <iostream>

int rental_car_cost(int d)
{
  return d > 6 ? d * 40 - 50 : d > 2 ? d * 40 - 20
                                     : d * 40;
}

int main()
{
  std::cout << rental_car_cost(7) << std::endl;
  std::cout << rental_car_cost(2) << std::endl;
  std::cout << rental_car_cost(3) << std::endl;

  return 0;
}