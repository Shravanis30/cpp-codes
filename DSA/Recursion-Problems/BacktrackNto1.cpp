#include <bits/stdc++.h>
using namespace std;
void display(int i, int n) {
    if(i>n) 
    return;
    display(i+1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    display(1, n);
return 0;
}