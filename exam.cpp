//C++ program to print sum of natural numbers using recursion
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);  
        
        return 0;
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Therefore the sum = " << sum(num) << endl; 
    return 0;
}
