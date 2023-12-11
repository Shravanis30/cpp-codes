// write a program to check that the entered charachter is small or capital
#include <iostream>
using namespace std;

int main(){
    char alpha;
    cout << "enter the alpha";
    cin >> alpha;

    if(alpha>=97 && alpha <=102)
    {
        cout << "The character is small :";
    }
    else if(alpha>=65 && alpha <=90)
    {
        cout << "The character is capital :";
    }
    else 
    {
        cout << "invalid character";
    }

return 0;
}