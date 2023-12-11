//C++ progaram to print reverse of an interger
#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, reversednum=0;

    cout << "enter the value of num : ";
    cin >> num;

    while(num > 0) 
    {
        int digit = num % 10;
        reversednum= reversednum * 10 + digit;
        num/=10;
    }

    cout << "the reversed number = " << reversednum << endl;

    return 0;

}