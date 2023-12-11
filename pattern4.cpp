/* write a progarm to print the following pattern
54321
54321
54321
54321
54321
*/

#include <iostream>
using namespace std;

int main() {
    int i, j;

    for(i=5; i>=1; i--)
    {
        for (j=5; j>=1; j--)
        {
            cout << j;
        }
            cout << "\n";
    }
}
