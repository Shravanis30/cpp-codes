#include <bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
        
    }
}
int main () {
    int n;
    cout << "enter the number of array : ";
    cin >> n;
    int arr[n];
    cout << "enter the value of array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Insertion_sort(arr, n);

     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        cout << "" << endl;
}