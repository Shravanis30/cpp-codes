//C++ program to find if the character entered is vowel or consonant 
#include <iostream>
using namespace std;
int main(){
    char ch,a,e,i,o,u,A,E,I,O,U;
    cout << "enter the alphabate : ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " its a vowel";
    }
    else 
    {
        cout << ch << " its a consonant";
    }
    return 0;
} 