// C++ program to check if the number is multiple by 5 than the program diplay "hifive" if the number is divisible by two it display "hieven"
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number : ";
    cin >> num;

    if (num%5==0)
    {
        cout << "hifive";
        
    }
     if(num%2==0)
    {
        cout << "hieven";
   
    }
}