#include <bits/stdc++.h>
using namespace std;
class Alpha {
    public:
    void display(int n) {
        for(int i = 1; i <= n; i++) {
            for(char ch = 'E'-i+1; ch <= 'E'; ch++) {
                cout << ch ;
            }
            cout << endl;
            
        }
    }
};
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    Alpha obj;
    obj.display(n);
return 0;
}