#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Linear_array[5] = {12, 23, 34, 45, 67};
    int UpperBound = sizeof(Linear_array) / sizeof(Linear_array[0]);
    int LowerBound = 0;
    int Max = UpperBound - LowerBound;
    
    int DATA=0;
    cout << "Enter the element you want to inter in array : ";
    cin >> DATA;
    // if(UpperBound >= 6)
    // {
    //     cout << "Array is full" << endl;
    //     return 0;
    // }
    Linear_array[UpperBound]= DATA;
    UpperBound++;
    for(int i = 0; i < UpperBound; i++)
    {
        cout << Linear_array[i] << "\t";
    }
        cout << endl;
        return 0;
}