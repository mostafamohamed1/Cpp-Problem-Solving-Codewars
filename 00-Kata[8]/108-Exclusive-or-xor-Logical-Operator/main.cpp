#include <iostream>

bool xorf(bool a, bool b)
{
  // your code here:
  return a ^ b;
  return a - b;
  return a != b;
  return a + b & 1;
  return a ? !b : b;
  return (a + b) % 2;
  return a & !b || !a & b;
  return (a | b) & (!a | !b);
  return a ? b ? 0 : 1 : b ? 1
                           : 0;
}

int main()
{
  std::cout << xorf(true, true);
  return 0;
}