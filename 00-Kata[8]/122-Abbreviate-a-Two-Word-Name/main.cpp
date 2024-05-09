#include <iostream>
#include <string.h>
#include <cctype>

std::string abbrevName(std::string name)
{
  std::string ret = "";
  char *token = strtok((char *)name.c_str(), " ");
  int count = 0;
  while (token != NULL)
  {
    ret += toupper(token[0]);
    if (count == 0)
    {
      ret += '.';
      count++;
    }
    token = strtok(NULL, " ");
  }

  return ret;
}

int main()
{
  std::cout << abbrevName("mostafa mohamed");
  return 0;
}
