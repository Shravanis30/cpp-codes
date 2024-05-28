#include <bits/stdc++.h>
using namespace std;

int main()
{
    string P = "avni";
    string T = "shraavniii";
    int R = P.length();
    int S = T.length();
    int Max = S - R + 1;
    int k = 1;
    int index = 0;

    while (k<= Max)
    {
        for (int L = 0; L < R; L++)
        {
            if (P[L] != T[k + L - 1])
            {
                break;
            }

            if (L == R - 1)
            {
                index = k;
                goto success;
            }
        }
        k++;
    }

failure:
    index = 0;

success:
    if (index != 0)
    {
        cout << "Pattern found at Index : " << index << endl;
    }
    else
    {
        cout << "Pattern does not found" << endl;
    }

    return 0;
}
