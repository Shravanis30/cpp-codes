/* write a programt o prnit the following pattern
12345
1234
123
12
1
*/
#include <iostream>
using namespace std;
int main () {
    int i, j, n;

    cout << "enter the value of n: ";
    cin >> n;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
            cout << endl;
    }
            return 0;
}