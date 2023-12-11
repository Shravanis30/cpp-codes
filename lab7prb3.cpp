/*c++ progaram to print following pattern 
1
11
111
1111
11111
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "1";
        }
        cout << endl;
    }
}