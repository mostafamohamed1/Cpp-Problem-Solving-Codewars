#include <iostream>

int getRealFloor(int americanFloor)
{
  if (americanFloor >= 0)
  {
    if (americanFloor == 0)
      return 0; // Ground floor
    else if (americanFloor <= 13)
      return americanFloor - 1;
    else
      return americanFloor - 2;
  }
  else
  {
    return americanFloor;
  }
}

int main()
{
  std::cout << getRealFloor(13) << std::endl;
  return 0;
}