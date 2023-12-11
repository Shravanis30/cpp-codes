// write a program to read an array of 10 numbers and count all even and odd numbers
#include <iostream>
using namespace std;

int main() {
    int even=0, odd=0, i ,n[10];

    cout << "Enter the numbers: " << endl; 
    
   

    for(i=0; i<10; i++)
    {
       cin >> n[i];
        if (n[i]%2==0)
        {
            cout << even++ << endl;
        }
        else 
        {
            cout << odd++ <<endl;
        }
    }
    
    cout << "even numbers: " << even++ << endl;
    cout << "odd numbers: " << odd++ << endl;

    return 0;

}