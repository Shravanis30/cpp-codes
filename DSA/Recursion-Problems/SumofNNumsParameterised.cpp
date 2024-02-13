#include <bits/stdc++.h>
using namespace std;
int display(int i, int sum)
{
    if (i < 1){
        cout << sum << endl;
        return sum;
    }
    return display(i - 1, sum + i);
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    display(n, 0);
    return 0;
}