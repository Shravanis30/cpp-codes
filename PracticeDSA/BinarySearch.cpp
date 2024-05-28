#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, item = 0, Loc = 0;
    cout << "Enter the size of array " << endl;
    cin >> n;

    int Linear_array[n];
    cout << "Enter the elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Linear_array[i];
    }

    cout << "Displaying the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Linear_array[i] << "\t";
    }
    cout << endl;

    cout << "Enter the element you want to search in the array " << endl;
    cin >> item;

    // Main progarm begins here
    int LowerBound = 0;
    int UpperBound = n - 1;
    int begin = LowerBound;
    int end = UpperBound;
    int mid = (begin + end) / 2;

    while (begin <= end && Linear_array[mid] != item)
    {
        if (item < Linear_array[mid])
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
        }
        mid = (begin + end) / 2;
    }

    if (Linear_array[mid] == item)
    {
        Loc = mid;
        cout << "Element found at location " << Loc + 1 << endl;
    }
    else
    {
        cout << "Element doesnt exist in the array" << endl;
    }

    return 0;
}