#include <iostream>
#include <exception>

class Guesser
{
public:
  Guesser(int number, int lives)
      : number(number), lives(lives)
  {
  }
  bool guess(int n)
  {
    if (this->lives == 0)
      throw std::range_error("No More Lives. You LOSS");

    if (n == this->number)
      return true;
    this->lives--;
    return false;
  }

private:
  int number, lives;
};

int main()
{
  Guesser g(10, 2);
  std::cout << g.guess(8) << std::endl;
  std::cout << g.guess(8) << std::endl;
  std::cout << g.guess(8) << std::endl;

  return 0;
}