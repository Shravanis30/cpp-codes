// Largest element in the array Data
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int DATA[] = {12, 43, 76, 87, 97};
    int Loc = 1;
    int Max = DATA[0];
    int N = sizeof(DATA) / sizeof(DATA[0]);
    int k = 1;

    while (true)
    {
        k++;

        if (k > N)
        {
            cout << "Loc = " << Loc << " & MAX = " << Max;
            break;
        }

        if (Max < DATA[k - 1])
        {
            Max = DATA[k - 1];
            Loc = k;
        }
    }
    return 0;
}
