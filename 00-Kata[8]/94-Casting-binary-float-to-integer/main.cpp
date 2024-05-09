#include <iostream>

int convert_to_int(float f)
{
  int val;
  memcpy(&val, &f, sizeof(float));
  return val;
}

int main()
{

  std::cout << convert_to_int(10.0) << std::endl;

  return 0;
}

// 1092616192
// 1092616192