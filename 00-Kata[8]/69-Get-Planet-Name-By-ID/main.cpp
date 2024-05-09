#include <iostream>
#include <string>

std::string get_planet_name(int id)
{
  std::string name;
  switch (id)
  {
  case 1:
    name = "Mercury";
    break;
  case 2:
    name = "Venus";
    break;
  case 3:
    name = "Earth";
    break;
  case 4:
    name = "Mars";
    break;
  case 5:
    name = "Jupiter";
    break;
  case 6:
    name = "Saturn";
    break;
  case 7:
    name = "Uranus";
    break;
  case 8:
    name = "Neptune";
    break;
  }
  return name;
}

struct A
{
  int *ptr;

  A()
  {
    std::cout << "Constructor..!" << std::endl;
    ptr = new int;
  }

  A(const A &a)
  {
    std::cout << "Copy Constructor..!" << std::endl;
    this->ptr = new int;
  }

  A(A &&a)
  {
    std::cout << "Move Constructor..!" << std::endl;
    this->ptr = a.ptr;
    a.ptr = nullptr;
  }

  ~A()
  {
    std::cout << "Destructor..!" << std::endl;
    delete ptr;
  }
};

int main()
{

  std::cout << get_planet_name(1) << std::endl;

  int val = 20;

  A a1;
  a1.ptr = &val;
  std::cout << *a1.ptr << std::endl;
  std::cout << val << std::endl;

  return 0;
}