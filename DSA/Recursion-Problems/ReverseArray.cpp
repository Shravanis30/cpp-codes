#include <bits/stdc++.h>
using namespace std;
void display(int l, int r, int arr[])
{
   if (l >= r)
      return;
   swap(arr[l], arr[r]);
   display(l + 1, r - 1, arr);
}
int main()
{
   int n;
   cout << "enter the value of n : ";
   cin >> n;
   int arr[n];
   cout << "enter the array : ";
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int l = 0;
   display(l, n - 1, arr);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}











// #include <iostream>
// using namespace std;
// //Function to print array
// void printArray(int ans[], int n) {
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << ans[i] << " ";
//    }
// }
// //Function to reverse array using an auxiliary array
// void reverseArray(int arr[], int n) {
//    int ans[n];
//    for (int i = n - 1; i >= 0; i--) {
//       ans[n - i - 1] = arr[i];
//    }
//    printArray(ans, n);
// }
// int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;

//    int arr[n];
//    cout << "Enter the array: ";
//    for (int i = 0; i < n; i++) {
//       cin >> arr[i];
//    }
//    reverseArray(arr, n);
//    return 0;
// }