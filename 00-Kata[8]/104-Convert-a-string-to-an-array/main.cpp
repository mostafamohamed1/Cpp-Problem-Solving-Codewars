#include <iostream>
#include <vector>
#include <string.h>

std::vector<std::string> string_to_array(const std::string s)
{
  if (s.size() == 0)
    return {""};

  std::vector<std::string> vec;
  char *token = strtok((char *)s.c_str(), " ");
  while (token != NULL)
  {
    vec.push_back(token);
    token = strtok(NULL, " ");
  }

  return vec;
}

int main()
{

  for (std::string i : string_to_array("Hello and wellcome"))
    std::cout << i << std::endl;

  return 0;
}