#include <bits/stdc++.h>
using namespace std;
void display(int i, int n) {
    if(i>n) 
        return;
    cout << i << endl;
    display(i+1, n);
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    display(1, n);
return 0;
}