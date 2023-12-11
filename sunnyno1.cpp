#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, sunny_no, square;
    cout << "enter the number : ";
    cin >> num;
    int nextnum = num + 1;
    for (int i = 1; i <= nextnum; i++)
    {
        if (i * i == nextnum)
        {
            cout << num << " "
                 << "this number is sunny number " << endl;
            return 0;
        }
    }

    cout << num << " "
         << "this number is not a sunny number " << endl;

    return 0;
}
