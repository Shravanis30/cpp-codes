//C++ program to print following pattern 
/*
1
12
123
1234
12345
*/
#include <iostream>
using namespace std;
int main() {
    int i, j, n;

    cout << "enter the number of rows: ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
            cout << endl;
    }
            return 0;
}