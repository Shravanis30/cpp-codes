#include <bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[], int n)
{   
    for (int i = n - 1; i > 0 ; i--)
    {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if(didswap == 0) {
        return;
    }
    //cout << "meow" << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number of array : ";
    cin >> n;
    int arr[n];
    cout << "enter the value of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble_sort(arr, n);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}