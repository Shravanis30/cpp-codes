#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int[3];
    cout << "enter the value ";
    
    for(int i = 0; i < *ptr; i++) {
        cin >> *ptr;
        ptr++;
    }
    for(int i = 0; i < 3; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    cout << "values in array are as follows" << endl;
    ptr = ptr-3;
    for(int i = 0; i < 3; i++) {
        cout << ptr << endl;
        cout << *ptr << endl;
        ptr++;
    }

return 0;
}