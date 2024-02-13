#include <bits/stdc++.h>
using namespace std;
class star {
public:
    void display(int n) {
        for(int i = 1; i <= n; i++) {
            //space
            for(int j = 1; j<=i-1; j++){
                cout << " ";
            }
            //star
            for(int j = 1; j<=2*n-2*i+1; j++) {
                cout << "*";
            }
            //space
            for(int j = 1; j<=i-1; j++){
                cout << " ";
            }
                cout << endl;
        }
            cout << endl;
    }
};
int main()
{
    int n;
    star obj;
    cout << "enter the value of n :";
    cin >> n;
    obj.display(n);
return 0;
}