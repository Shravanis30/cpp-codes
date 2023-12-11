#include <iostream>
using namespace std;

int myfunc(int a ,int b) {
    return a + b;
}

double myfunc(double a , double b) {
    return a + b;
} 

int main() {
    int num1 = myfunc(12 , 12);
    double num2 = myfunc(12.12 , 12.12);

    cout << num1 << endl;
    cout << num2;

    return 0;
}
