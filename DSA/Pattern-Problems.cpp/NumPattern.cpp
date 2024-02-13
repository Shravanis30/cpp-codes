// Input Format: N = 3
// Result: 
// 3 3 3 3 3 
// 3 2 2 2 3 
// 3 2 1 2 3 
// 3 2 2 2 3 
// 3 3 3 3 3

#include <bits/stdc++.h>
using namespace std;
class Star {
    public:
    void display(int n) {
        for(int i = 0; i < 2*n-1; i++) {
            for(int j = 0; j < 2*n-1; j++) {
                int top = i;
                int down = (2*n-2)-i;
                int right = (2*n-2)- j;
                int left = j;

                cout << (n - min(min(top,down), min(right,left)));
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
    Star obj;
    obj.display(n);
return 0;
}