//extration of element or digit      
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, reverseNum = 0;
    cout << "enter the value of n : ";
    cin >> n;

    while (n>0) {
        int lastNum = n%10;
        reverseNum = reverseNum * 10 + lastNum;
        n = n/10;
    }

    cout << reverseNum;
return 0;
}