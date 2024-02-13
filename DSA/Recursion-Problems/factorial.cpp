#include <bits/stdc++.h>
using namespace std;
double factorial(int n) {
    if (n>0) {
        return n * factorial(n-1);
    }
    else if(n == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    cout << "the factorial = " << factorial(n) << endl;           
return 0;
}