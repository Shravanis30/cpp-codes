#include <bits/stdc++.h>
using namespace std;

int main()
{
    int DATA[5] = {7, 5, 2, 9, 1};
    int MAX = DATA[0];
    int Array_length = sizeof(DATA) / sizeof(DATA[0]);
    int LOC = 1;
    for (int k = 1; k < Array_length; k++)
    {
        if (MAX < DATA[k])
        {
            MAX = DATA[k];
            LOC = k;
        }

        cout << "Maximum number = " << MAX << " its index is = " << LOC << endl;
    }
    return 0;
}