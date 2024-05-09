#include <iostream>
#include <string>
#include <cmath>

using namespace std;

std::string bmi(double w, double h)
{
  double bmi = w / pow(h, 2);
  cout << bmi << endl;
  if (bmi <= 18.5)
    return "Underweight";
  if (bmi > 18.5 && bmi <= 25.0)
    return "Normal";
  if (bmi > 25.0 && bmi <= 30.0)
    return "Overweight";
  return "Obese";
}

int main()
{
  cout << bmi(81.585, 2.1) << endl;
  cout << bmi(90.25, 1.9) << endl;
  cout << bmi(85, 1.7) << endl;
  cout << bmi(200, 1.6) << endl;

  return 0;
}