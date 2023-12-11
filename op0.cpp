#include<iostream>
using namespace std;
int main() {
    int a=0, b=0;
    
    cout << "enter the value of a : " << endl;
    cin >> a;

    cout << "enter the value of b: " << endl;
    cin >> b;

    cout << "therefore the a & b = " << (a&b) << endl;
    cout << "therefore the a / b = " << (a/b) << endl;
    cout << "therefore the a ^ b = " << (a^b) << endl;
    cout << "therefore the ~a = " << (~a) << endl;
    cout << "therefore the ~b = " << (~b) << endl;
    cout << "therefore the a >> =" << (a>>1) << endl;
    cout << "therefore the b >> =" << (b>>1) << endl;
    cout << "therefore the a << =" << (a<<1) << endl;
    cout << "therefore the b >> =" << (b<<1) << endl;
    return 0;
}