#include <bits/stdc++.h>
using namespace std;
class num
{
public:
    void diplay(int n)
    {
        int start = 1;
        for (int i = 1; i <= n; i++)
        {
            if(i%2 != 0) start = 1;
            else start = 0;
            for (int j = 1; j <= i; j++)
            {
                cout << start;
                start = 1 - start;
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
    obj.diplay(n);
    return 0;
}