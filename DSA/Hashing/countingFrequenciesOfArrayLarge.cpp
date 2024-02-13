#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[n];
    cout << "enter the array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    int questions;
    cout << "enter the number of questions : ";
    cin >> questions;
    while(questions > 0) {
        int num;
        cout << "enter the number to count frequency : ";
        cin >> num;
        questions--;

        cout << "there the frequency of " << num << " = "<< mpp[num] << endl;
    } 
}