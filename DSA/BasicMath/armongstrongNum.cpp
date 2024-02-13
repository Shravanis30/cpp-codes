#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, original_num;
    cout << "enter the value of n : ";
    cin >> n;
    original_num = n;
    while (n>0) {
        int lastNum = n%10;
        sum = sum + (lastNum*lastNum*lastNum);
        n = n/10;
    }

    if(sum == original_num) {
        cout << "its a armstrong Number" << endl;
    }
    else {
        cout << "its not a armstrong Number" << endl;

    }
return 0;
}