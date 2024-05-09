#include <iostream>
#include <string>

/*
std::string reverse_words(const std::string& str) {
  std::string s;
  std::stringstream ss(str);
  std::string w;
  while (ss >> w) s = w + " " + s;
  s.pop_back();
  return s;
}
*/

std::string reverse_words(const std::string &str)
{
  std::string result = "";
  std::string temp = ""; // this

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ' ')
    {
      result = temp + " " + result;
      temp = "";
    }
    else
    {
      temp += str[i];
    }
  }

  result = temp + " " + result;
  result.pop_back();
  return result;
}

int main()
{
  std::cout << reverse_words("Hello world") << std::endl;

  return 0;
}