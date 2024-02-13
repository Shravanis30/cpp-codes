// enter the value of n : 5
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 

#include <bits/stdc++.h>
using namespace std;
class alpha {
    public:
    void display(int n) {
        for(int i = 1; i <= n; i++) {
            //space
            for(int j = 1; j <= n-i+1; j++) {
                cout << " ";
            } 
            //aplha
            char ch = 'A';
            int breakpoint = (2*i)/2;
            for(int j = 1; j <= 2*i-1; j++) {
                cout << ch;
                if(j < breakpoint) ch++;
                else ch--;
            }
            //space
            for(int j = 1; j <= n-i+1; j++) {
                cout << " ";
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
    alpha obj;
    obj.display(n);
return 0;
}