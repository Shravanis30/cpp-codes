// C++ PROGRAM OF FUNCTION OVERRIDING
#include <bits/stdc++.h>
using namespace std;
class car
{
public:
    void engineInfo()
    {
        cout << "power = 1000" << endl;
    }
};
class ModifiedCar
{
public:
    void engineInfo()
    {
        cout << "power = 2000" << endl;
    }
};
int main()
{
    car original_car;
    ModifiedCar car_modified;

    original_car.engineInfo();
    car_modified.engineInfo();
    return 0;
}