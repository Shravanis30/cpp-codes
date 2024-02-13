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

    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] = hash[arr[i]]+1;
    }

    int questions;
    cout << "enter the number of questions : ";
    cin >> questions;
    while(questions > 0) {
        int num;
        cout << "enter the number to count frequency : ";
        cin >> num;
        questions--;

        cout << "there the frequency of " << num << " = "<< hash[num] << endl;
    } 
}