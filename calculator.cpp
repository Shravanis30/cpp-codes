// write a code in c to read the operator and perform operation on 2 numbers using switch 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter the operator : " << endl;
    cin >> op;

    cout << "Enter the value of a & b : " <<endl;
    cin >> a >> b;

    switch(op)
    {

    case '+':
        cout << a + b;
    break;

    case '-':
        cout << a - b;
    break;

    case '*':
        cout << a * b;
    break;

    case '/':
        if(b == 0)
        {
            cout << "divdent cannot be 0" << endl;
        }  
        else 
        {
            cout << a / b;
        }      
    break;

    default:
        cout << "ERROR";
    }
   

    return 0;
}