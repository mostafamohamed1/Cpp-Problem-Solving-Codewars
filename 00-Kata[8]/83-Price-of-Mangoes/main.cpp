#include <iostream>

int mango(int quantity, int price)
{
  return quantity > 2 ? (quantity - (quantity / 3)) * price : quantity * price;
}

int main()
{

  std::cout << mango(5, 3) << std::endl;

  return 0;
}