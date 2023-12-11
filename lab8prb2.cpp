//c++ program to print multiplication table uptp 10
#include<bits/stdc++.h>
using namespace std;
 int main() {
    int num;
    cout << "enter the number :";
    cin >> num;
    for (int i=1; i<=10; i++){
        cout << num << " * "<< i << " = " << num*i << endl;
    }
    return 0;
 }