#include <iostream>
using namespace std;

int sum(int a) 
{
    if (a > 0) 
    {
        return a + sum(a - 1);
    }
    else  
    {
        return 0;
    }
}

    int main() 
    {
        int product = sum (10);
        cout << "The answer is " << product;

        return 0;
    }
