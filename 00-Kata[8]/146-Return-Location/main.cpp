class Person
{
public:
  Person(int x, int y, int z)
      : m_x(x), m_y(y), m_z(z)
  {
  }

  void location(int &x, int &y, int &z)
  {
    x = m_x;
    y = m_y;
    z = m_z;
  }

private:
  int m_x = 0;
  int m_y = 0;
  int m_z = 0;
};