// Input Format: N = 6
// Result:   
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

#include <bits/stdc++.h>
using namespace std;
class Star {
    public:
    void display(int n) {
        int space = 0;
        for(int i = 1; i <= n; i++) {
            //star
            for(int j = 1; j <= n-i+1 ; j++) {
                cout << "*";
            }
            //space
            for(int j = 1; j <= space; j++) {
                cout << " ";
            }
            //star
            for (int j = 1; j <= n-i+1 ; j++) {
                cout << "*";
            }
            cout << endl;
            space = space+2;
        }
    }
};
class Star1 {
    public:
    void display(int n) {
        int space = 2*n-2;
        for(int i = 1; i <= n; i++) {
            //star
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            //space
            for(int j = 1; j <= space; j++) {
                cout << " ";
            }
            //star
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
            space = space-2;
        }
    }
};
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    Star obj;
    Star1 obj1;
    obj.display(n); 
    obj1.display(n);
return 0;
}