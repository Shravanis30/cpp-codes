#include <bits/stdc++.h>
using namespace std;
int display(int n) {
    if(n==0)
    return 0;
    return n + display(n-1);
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    cout << "the sum = " << display(n) << endl;;
return 0;
}