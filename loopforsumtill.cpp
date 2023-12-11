// write a program to cout the sum of numbers till that number

#include <iostream>
using namespace std;

int main() {
    int num, i, sum=0;

    cout << "EMTER THE NUMBER : ";
    cin >> num;

    for(i=1; i<=num; i++){
        sum = sum + i;
    }

    cout << "THE SUM IS  " << sum;

    return 0;
}