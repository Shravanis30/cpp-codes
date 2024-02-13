// enter the value of n :5
//     *    
//    ***   
//   *****  
//  ******* 
// *********

#include <bits/stdc++.h>
using namespace std;
class star {
public:
    void display(int n) {
        for(int i = 1; i <= n; i++) {
            //space
            for(int j = 1; j<=n-i; j++){
                cout << " ";
            }
            //star
            for(int j = 1; j<=2*i-1; j++) {
                cout << "*";
            }
            //space
            for(int j = 1; j<=n-i; j++){
                cout << " ";
            }
                cout << endl;
        }
            cout << endl;
    }
};
int main()
{
    int n;
    star obj;
    cout << "enter the value of n :";
    cin >> n;
    obj.display(n);


return 0;
}