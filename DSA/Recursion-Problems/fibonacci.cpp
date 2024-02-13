#include <bits/stdc++.h>
using namespace std;
int display (int n) {
    if(n <= 1) {
    return n;
    }
    int lastNum = (n-1);
    int secondLastNum = (n-2);
    return lastNum + secondLastNum;
}
int main()
{
    int n;
    cout << "Enter the value of nth num of fibonacci series : ";
    cin >> n;
    cout << "therfore the " << n << "th value = " << display(n) << endl;
return 0;
}