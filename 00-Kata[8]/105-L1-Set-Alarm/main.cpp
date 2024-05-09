#include <iostream>

bool set_alarm(const bool &employed, const bool &vacation)
{
  if (!employed)
    return false;
  return employed ^ vacation;
}

int main()
{
  std::cout << set_alarm(false, true) << std::endl;

  return 0;
}