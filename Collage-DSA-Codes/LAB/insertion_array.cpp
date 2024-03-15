#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, n, k, item;
    cout << "enter the size of array \n";
    cin >> n;

    int arr[n + 1];
    cout << "enter the array \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "displaying the array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";

    cout << "enter the element which you what to enter in the array and enter the position where you want to insert the array : \n";
    cin >> item >> k;

    j = n;
    while (j >= k-1)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[k-1] = item;

    cout << "displaying the modified array : \n";
    for(int i = 0; i < n+1; i++) 
        cout << arr[i] << "\t";
    cout << "\n";

    return 0;
}