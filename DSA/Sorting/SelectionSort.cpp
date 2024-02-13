#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minimun = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[minimun]) minimun = j;
        }
        swap(arr[minimun], arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        cout << "" << endl;
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
    selection_sort(arr, n);
}