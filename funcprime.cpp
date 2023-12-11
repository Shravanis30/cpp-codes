// c++ progarm to print all prime numbers from the given two numbers
#include <bits/stdc++.h>
using namespace std;

bool primeno(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
        return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (primeno(i))
        {
            cout << i << endl;
        }
    }
}