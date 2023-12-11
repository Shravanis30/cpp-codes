/*
function are the block of code or instructions which is design to perform the specific tasks
function provide code modularity
*/
#include <iostream>
using namespace std;
int sum(int a, int b) {
    int c=a+b;
    return c;
}
int main(){
    int num1, num2;
    cout << "enter 1st number : " << endl;
    cin >> num1;
    cout << "enter 2nd number : " << endl;
    cin >> num2;
    cout << "the sum of two numbers = " << sum(num1, num2);
return 0;
}