//C++ Program to Find Largest Among Three Numbers
#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "enter tha vlaue of a: ";
    cin >> a;
    cout << "enter tha vlaue of b: ";
    cin >> b;
    cout << "enter tha vlaue of c: ";
    cin >> c;
    if(a > b && a > c)
    {
        cout << "the greater number = " << a << endl;
    }
    else if(b > a && b > c)
    {
        cout << "the greater number = " << b << endl;
    }
    else 
    {
        cout << "the greater number = " << c << endl;
    }

    return 0;
}






