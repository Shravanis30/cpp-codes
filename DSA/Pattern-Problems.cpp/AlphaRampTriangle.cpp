#include <bits/stdc++.h>
using namespace std;
class alpha {
    public:
    void display(int n) {
        char ch = 'A';
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << ch << " ";
            }
                ch = ch + 1;
                cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    alpha obj;
    obj.display(n);
return 0;
}