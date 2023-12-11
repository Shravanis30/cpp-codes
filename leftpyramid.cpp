// C++ Program To Print Left Half Pyramid Pattern
#include<iostream>
using namespace std;
int main() {
    int i, j, n;
    cout << "enter the number of rows : " << endl;
    cin >> n;
    for (i = n; i > 0; i--) {
       
        
        for (j = 1; j <= n; j++) {

            if (j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
