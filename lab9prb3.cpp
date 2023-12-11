//C++ progarm to find the sum of natural numbers using recursion
#include<iostream>
using namespace std;

int recursionSum(int num) {
    if(num<=1)
    {
        return num;
    }

    return num + recursionSum(num-1);
}
int main() {
    int num;
    cout << "Enter the number : ";
    cin >> num;

    cout << "Therfore the sum of numbers : " << recursionSum(num) << endl;
    return 0;
}