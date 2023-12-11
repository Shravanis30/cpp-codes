// C++ program to find the minimun no & maximum amgond 3 inputs
#include <iostream>
using namespace std;
int main() {

    int a , b ,c, min=0, max=0;

    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    cout << "enter the value of c: ";
    cin >> c;

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << "The minimum no is : " << min << endl;
    cout << "The maximum no is : " << max;
    return 0;
}