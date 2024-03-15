#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 5, 9};
    int k = arr[0]; //(LB)
    int Array_length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < Array_length ; i++)
    {
        cout << arr[i] << endl;
        k = k + 1;
    }
    
    return 0;
}