#include <bits/stdc++.h>
using namespace std;
class num {
    public: 
    void display(int n) 
    {
        int spaces = 2*(n-1);
        for(int i = 1; i <= n; i++) {
            //num
            
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            //space
             for(int j = 1; j <= spaces; j++) {
                cout << " ";
            }
            //num
            for(int j = i; j >= 1; j--) {
                cout << j;
            }
            spaces= spaces-2;
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    num obj;
    obj.display(n);
return 0;
}