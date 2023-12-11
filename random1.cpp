// #include<iostream>
// using namespace std;
// int main()
// {
// int factorial(int);
// int fact,value;
// cout<<"Enter any number: ";
// cin>>value;
// fact=factorial(value);
// cout<<"Factorial of a number is: "<<fact<<endl;
// return 0;
// }
// int factorial(int n)
// {
// if(n<0)
// return(-1); /*Wrong value*/
// if(n==0)
// return(1);  /*Terminating condition*/
// else
// {
// return(n*factorial(n-1));
// }
// }

#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << "It's a palindrome number" << endl;
    }
    else
    {
        cout << "It's not a palindrome number" << endl;
    }
    return 0;
}
