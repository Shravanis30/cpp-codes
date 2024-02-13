// #include <bits/stdc++.h>
// using namespace std;
// class Num {
//     public:
//     void display(int n1, int n2) {
//         int GCD;
//         for(int i = 1; i <= min(n1,n2); i++) {
//             if(n1%i == 0 && n2%i == 0) {
//                 GCD = i;
//             }
//         }
//         cout << GCD << endl;
//     }
// };
// int main()
// {
//     int n1, n2;
//     cout << "enter the value of n1 : ";
//     cin >> n1;
//     cout << "enter the value of n2 : ";
//     cin >> n2;
//     Num obj;
//     obj.display(n1, n2);
// return 0;
// }


















// brute force method takes linear time complexcity
#include <bits/stdc++.h>
using namespace std;
class Num {
    public:
    void display(int n1, int n2) {
        int GCD;
        for(int i = min(n1,n2); i >= 1; i--) {
            if(n1%i == 0 && n2%i == 0) {
                GCD = i;
                break;
            }
        }
        cout << GCD << endl;
    }
};
int main()
{
    int n1, n2;
    cout << "enter the value of n1 : ";
    cin >> n1;
    cout << "enter the value of n2 : ";
    cin >> n2;
    Num obj;
    obj.display(n1, n2);
return 0;
}