//C++ PROGARM OF FUNCTION OVERLOADING
#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y) {
    return x+y;
}
int sum(int x, int y, int z) {
    return x+y+z;
}

int main()
{

    cout << "sum = " << sum(5,6) << endl;
    cout << "sum = " << sum(3,4,5) << endl;
    
return 0;
}