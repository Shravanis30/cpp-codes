// 1st algorithm

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int DATA[5] = {7, 5, 2, 9, 1};
    int MAX = DATA[0];
    int Array_length = sizeof(DATA) / sizeof(DATA[0]);
    
    int LOCATION = 1;
    for (int k = 1; k < Array_length; k++)
    {
        if (MAX < DATA[k])
        {
            MAX = DATA[k];
            LOCATION = k;
        }
    }
    cout << "Maximum number = " << MAX << " and Location = " << LOCATION << endl;
    return 0;
}