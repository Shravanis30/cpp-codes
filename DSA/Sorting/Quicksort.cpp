#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high-1) {
            i++;
        }

        while(arr[j] > pivot && j >= low+1) {
            j--;
        }

        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
        return j;
}
void QuickSort(vector<int> &arr,int low ,int high) {
    if(low < high) {
        int partition_index = partition(arr, low, high);
        QuickSort(arr, low , partition_index-1);
        QuickSort(arr, partition_index+1, high);
    }
}
int main () {
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the values of array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int high = n-1;
    int low = 0;   
    QuickSort(arr, low, high);

     cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}