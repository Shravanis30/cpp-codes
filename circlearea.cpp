// write a programme to read radius of circle and print its area and circumference

#include <iostream>
using namespace std;

int main() {
    int area, circumference, radius;

    cout << "Enter the radius: ";
    cin >> radius;

    area = 3.14*radius*radius;

    circumference = 2*3.14*radius;

    cout << "THE AREA OF THE CIRECLE IS " << area << endl;
    cout << "THE CIRCUMFERENCE OF CIRCLE IS " << circumference << endl;

    return 0;
}









