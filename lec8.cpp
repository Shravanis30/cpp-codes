 //C++ progarm to find either the perosn is eligible for interview of not(condition percentage 75 and more)
#include<iostream>
using namespace std;
int main () {
    int percentage;
    cout << "enter the percentage : ";
    cin >> percentage;

    if(percentage>=75)
    {
        cout << "eligible for interview";
    }
    if(percentage<75)
    {
        cout << "not eligible for interview";
    }

    return 0;
}
