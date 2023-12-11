#include<iostream>
using namespace std;
const int PI=3.14;
float circle(float radius) {
    return PI*radius*radius;
}

int main() {
    float radius;
    cin >> radius;

    cout << " area of circle = " << circle(radius) << endl;

    return 0;

}