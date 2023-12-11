//write a programme to read two nos and exchange their values using 3rd variable 

#include <iostream>
using namespace std;

int main() {
    int a=0 , b=0, c=0;

    cout << "ENTER THE VALUE OF a: ";
    cin >> a;
    cout << "ENTER THE VALUE OF b: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "VALUE OF a: " << " " << a << endl;
    cout << "VLAUE OF b: " << " " << b;

    return 0;
}
