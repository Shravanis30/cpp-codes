//C++ program to display area and perimeter of circle radius=5.5.
#include <iostream>
using namespace std;
int main() {
    float radius, area, perimeter;
    cout << "enter the value of radius : " << endl;
    cin >> radius;
     
     area = 3.14*radius*radius;
     perimeter = 2*3.14*radius;

     cout << "the area of circle = " << area << endl;
     cout << "the perimeter of circle  " << perimeter << endl;

     return 0;

}