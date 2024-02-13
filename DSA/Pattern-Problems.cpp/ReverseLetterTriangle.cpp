#include <bits/stdc++.h>
using namespace std;
class alpha {
    public:
    void display(int n) {
        for(int i = n; i >= 1; i--) {
            for(char ch = 'A'; ch <= 'A'+i-1; ch++) {
                cout << ch << " ";
            }
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