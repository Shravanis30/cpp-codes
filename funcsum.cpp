// C++ progarm to print sum of 1st n natural number using fucntion
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << "the sum = " << sum(n) << endl;
    return 0;
}