// #include <bits/stdc++.h>
// using namespace std;
// void rightPyramind(int n) {
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// void invertRightPyramid(int n) {
//     for(int i = 1; i <=n; i++) {
//         for(int j = n-1; j >= i; j--) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     rightPyramind(n);
//     invertRightPyramid(n);
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;
class star {
    public:
void display(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int star = i;
        if(i > n) star = 2*n - i;
        for(int j = 1; j <= star; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
};
int main()
{
    int n;
    star obj;
    cout << "enter the value of n : ";
    cin >> n;
    obj.display(n);

    return 0;
}
