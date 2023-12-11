// C++ progarm to print the number which is palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, originalnum, reversedNum = 0;
    cout << "enter the number : " << endl;
    cin >> num;
    
    originalnum=num;

    while (num > 0)
    {
        int digit = num % 10;
        
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalnum == reversedNum)
    {
        cout << "its a palindrone number" << endl;
    }
    else
    {
        cout << "its not a palindrone number  " << endl;
    }
    return 0;
}