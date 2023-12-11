#include <bits/stdc++.h>
using namespace std;
class car {
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    car obj1;
    obj1.brand = "BMW";
    obj1.model = "X5";
    obj1.year = 1999;

    car obj2;
    obj2.brand = "Ford";
    obj2.model = "mustang";
    obj2.year = 1965;

    cout << obj1.brand << " " << obj1.model << " " << obj1.year << " " << endl;
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << " " << endl;

return 0;
}