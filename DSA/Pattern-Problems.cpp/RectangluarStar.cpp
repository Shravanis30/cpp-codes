/* C++ progaram to print the following pattern
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
#include <bits/stdc++.h>
using namespace std;
class star
{
public:
    void display(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int t;
    cout << "enter the value of t : " << endl;
    cin >> t;

    star obj;
    obj.display(t);

    return 0;
}