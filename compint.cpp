// C++ Program To Find Compound Interest
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p, t, r,compound_interest , amount;

    cout << "enter the value of p(principal): " << endl;
    cin >> p;

    cout << "enter the value of t(time): " << endl;
    cin >> t;

    cout << "enter the value of r(rate): " << endl;
    cin >> r;

    amount= p * pow(1 + r/100,t);

    compound_interest= amount - p;

    cout << "therefore the compound interest = " << compound_interest;

    return 0;
}