#include <bits/stdc++.h>
using namespace std;
class demo {
    private:
    int a, b;
    public:
    demo(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "A = "<< a << " " << endl << "B = " << b << endl;
    }
    void operator-(){
        a = a+b;
        b = a*b;
    }
};
int main()
{
    demo obj(10, 20);
    cout << "Before values :" << endl;
    obj.display();
    cout << "After values :" << endl;
    -obj;
    obj.display();
    
return 0;
}