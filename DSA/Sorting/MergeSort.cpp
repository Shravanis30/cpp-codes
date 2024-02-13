#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int low, int mid, int high) {
    vector<int> temp;    // empty element is made to store the original arrays value fo tempertory purpose
    // to pointer are kept to compare two arrays
    int left = low;      // 0th element
    int right = mid+1;   // 1st element of the 2nd array    

    while(left <= mid && right <= high) {   // the two arrays are in sorted oder so the mid will be greater than the low and as the
                                           // right is the 1st element of the 2nd array it will be smaller thean the high 
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
             temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
            left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
            right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void MergeSort(int arr[] ,int low ,int high) {
    if(low>=high) return;
    int mid = (low + high)/2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
}

int main () {
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int arr[n];
    cout << "enter the values of array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int high = n-1;
    int low = 0;
    
    MergeSort(arr, low, high);

     cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}