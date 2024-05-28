#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, item;
    cout << "Enter the element in the array : ";
    cin >> n;

    int Linear_array[n];
    cout << "Enter the elements in the array " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> Linear_array[i];
    }

    cout << "Displaying the elements in the array " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << Linear_array[i] << "\t";
    }
    cout << endl;

    cout << "Enter the element you want to search in the array : ";
    cin >> item;

    Linear_array[n + 1] = item;
    int Loc = 0;

    while (Linear_array[Loc] != item)
    {
        Loc++;
    }

    if (Loc == n + 1)
    {
        cout << "Elememt doesnt exist in the array " << endl;
    }
    else
    {
        cout << "Element found at location = " << Loc << endl;
    }

    return 0;
}