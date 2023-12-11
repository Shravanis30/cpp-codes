//C++ program to display area if hexagon
#include <iostream>
using namespace std;
int main () {
    float side, area;

    cout << "enter the value side : ";
    cin >> side;

    area = 3*1.414/2*side*side;

    cout << "area of hexagon : " << area << endl;

    return 0;
}