// C++ progarm to print
#include<bits/stdc++.h>
using namespace std;

class member
{
private:
    int a, b, c;

public:
    int d, e;
    void new_func(int a1, int b1, int c1);      //outside function
    int get_func()                              // inside function
    {
        cout << "the value of a" << a << endl;
        cout << "the value of b" << b << endl;
        cout << "the value of c" << c << endl;
        cout << "the value of d" << d << endl;
        cout << "the value of e" << e << endl;
    }
};

void member::new_func(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    member obj;
    obj.d = 23;
    obj.e = 34;
    obj.new_func(10, 20, 30);
    obj.get_func();
    
    return 0;
}