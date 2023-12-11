// C++ program to print the sunny numbers
#include <iostream>
using namespace std;
int main()
{
    int square, sunny_no;
    for (int i = 1; i < 10; i++)
    {
        square = i * i;
        sunny_no = square - 1;
        cout << sunny_no;
        cout << endl;
    }

    return 0;
}