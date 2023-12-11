#include <bits/stdc++.h>
using namespace std;
float area (float radius) {
    return 3.14*radius*radius;
}

float area (float height , float base) {
    return 0.5 * height*base;
}
int main()
{
    cout << "area of circle = " << area(5) << endl;
    cout << "area of triangle = " << area(4, 5) << endl;

return 0;
}