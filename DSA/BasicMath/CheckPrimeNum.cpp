#include <bits/stdc++.h>
using namespace std;
class Num
{
public:
    void display(int n)
    {
        int count = 0;
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                cout << "its a prime number " << endl;
            }
            else
            {
                cout << "its not a prime number " << endl;
            }
        }
        else
        {
            cout << "wrong input" << endl;
        }
    }
}; 
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    Num obj;
    obj.display(n);
    return 0;
}