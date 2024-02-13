// #include <bits/stdc++.h>
// using namespace std;
// class Num {
//     public:
//     void display(int n) {
//         for(int i = 1; i <= n; i++) {
//             if(n%i==0) {
//                 cout << i << " , ";
//             }
//         }
//     }
// };
// int main()
// {
//     int n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     Num obj;
//     obj.display(n);
// return 0;
// }
























#include <bits/stdc++.h>
using namespace std;
class Num
{
public:
    void display(int n)
    {
        vector<int> ls;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ls.push_back(i);
                if ((n / i != i))
                {
                    ls.push_back(n / i);
                }
            }
        }
        sort(ls.begin(), ls.end());
            for(auto it :ls ) cout << it << " ";
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