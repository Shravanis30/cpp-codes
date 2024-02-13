#include <bits/stdc++.h>
using namespace std;
class num {
    public:
    void display(int n) {
        int num = 1;
        for(int i = 1; i <= n; i++) {
            for(int j =1; j <= i; j++) {
                cout << num << " ";
                num = num +1;
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
    num obj;
    obj.display(n);
return 0;
}