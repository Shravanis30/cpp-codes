// C++ PROGRAM OF DEFAULT CONSTRUCTOR
#include <bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length, breadth;

public:
    rectangle()
    {
        length = 10;
        breadth = 20;
    }
    void display()
    {
        cout << "area of rectangle = " << length * breadth << endl;
    }
};
int main()
{
    rectangle rect;
    rect.display();
    return 0;
}