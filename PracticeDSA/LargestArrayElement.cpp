#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Data[] = {12, 65, 87, 56, 76};
    int k = 1, Loc = 1, Max = Data[0];
    int N = sizeof(Data) / sizeof(Data[0]);
    while (true)
    {
        k++;
        if(k > N)
        {
            cout << "Maximum number = " << Max << " And Location = " << Loc << endl;
            break;
        }
        if (Max < Data[k - 1])
        {
            Loc = k;
            Max = Data[k - 1];
        }
    }
    return 0;
}