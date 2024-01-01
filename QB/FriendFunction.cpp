// C++ PROGARM OF FRIEND FUNCTION
#include <bits/stdc++.h>
using namespace std;
class square
{
private:
  int side;

public:
  square()
  {
    side = 10;
  }
  friend int printValue(square);
};

int printValue(square sq)
{
  return sq.side * sq.side;
}

int main()
{
  square sq;
  cout << "area of square = " << printValue(sq) << endl;
  return 0;
}