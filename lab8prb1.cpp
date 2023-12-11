// c++ progarm to print fibonacci series.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, t1 = 0, t2 = 1, nextno = 0;
    cout << "enter the number : ";
    cin >> num;
    cout << "fibonacci = " << t1 << "," << t2 << ",";
    for (int i = 1; i <= num; i++)
    {
        nextno = t1 + t2;
        t1 = t2;
        t2 = nextno;
        // if (nextno > 100)
        // {
        //     break;
        // }
        cout << nextno << ",";
    }
    cout << endl;
    return 0;
}