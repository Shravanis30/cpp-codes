#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, reverseNum = 0, original_num;
    cout << "enter the value of n : ";
    cin >> n;
    original_num = n;
    while (n>0) {
        int lastNum = n%10;
        reverseNum = reverseNum * 10 + lastNum;
        n = n/10;
    }
    if(reverseNum == original_num) {
        cout << "its a palindrome" << endl;
    
    }
    else {
        cout << "its not a palindrome" << endl;
    }
    cout << reverseNum;
return 0;
}