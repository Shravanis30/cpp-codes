// C++ Program To Find Simple Interest
#include<iostream>
using namespace std;

int main() {
    float p, t, r, simple_interset;

    cout << "enter the value of p(principal): " << endl;
    cin >> p;

    cout << "enter the value of t(time): " << endl;
    cin >> t;

    cout << "enter the value of r(rate): " << endl;
    cin >> r;

    simple_interset = (p * t * r)/100;

    cout << "therefore the simple intrest = " << simple_interset << endl;

    return 0;
}