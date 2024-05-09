#include <iostream>

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals)
{
  return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

int main()
{

  std::cout << goals(2, 10, 5) << std::endl;
  return 0;
}