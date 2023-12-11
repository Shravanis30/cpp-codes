#include <bits/stdc++.h>
using namespace std;
class AreaOfCircle
{
    int radius;

public:
    void get()
    {
        cout << "Enter the radius of Circle : ";
        cin >> radius;
    }
    friend float calculate(AreaOfCircle a);
};
float calculate(AreaOfCircle a)
{
    return 3.14 * a.radius * a.radius;
}
int main()
{
    AreaOfCircle obj;
    obj.get();
    cout << "Area of Circle : " << calculate(obj) << endl;
    return 0;
}