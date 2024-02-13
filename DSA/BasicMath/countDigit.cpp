//extration concept
 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , count = 0;
    cout << "enter the value of n : ";
    cin >> n;

    while (n>0) {
        int lastNum = n%10;
        count++;
        n = n/10;
    }
        cout << count << endl;
return 0;
}