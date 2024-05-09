#include <iostream>
#include <utility>
#include <cmath>

double GetFloatPrecision(double value, double precision)
{
  return (floor((value * pow(10, precision) + 0.5)) / pow(10, precision));
}

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3)
{
  return {GetFloatPrecision((p1.first + p2.first + p3.first) / 3, 4), GetFloatPrecision((p1.second + p2.second + p3.second) / 3, 4)};
}

int main()
{

  std::pair<double, double> p1 = {4, 2}, p2 = {12, 2}, p3 = {6, 10};
  std::pair<double, double> res = barTriang(p1, p2, p3);
  std::cout << res.first << " " << res.second << std::endl;

  return 0;
}