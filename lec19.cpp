// the caulifier constant tells the complier that the function should not modify the argument
// the type of declaration is significant only when we pass arguments by refernce or pointer
// recursion :-

#include <iostream>
using namespace std;
int fact(int k)
{

    if (k == 0)
    {
        return 1;
    }
    else if (k == 1)
    {
        return 1;
    }
    return k * fact(k - 1);
}

int main()
{
    int a;
    cout << "enter a \n";
    cin >> a;
    cout << fact(a) << endl;
    return 0;
}