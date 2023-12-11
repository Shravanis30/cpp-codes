#include<iostream>
using namespace std;

int main() {
    int average, sum=0, a , b, c;

    cout << "enter the value of a ";
    cin >> a;
    cout << "enter the value of b ";
    cin >> b;
    cout << "enter the value of c ";
    cin >> c;

    sum = a+b+c;
    average= sum/3;

    cout << "therefore the average = " << average << endl;

    return 0;
}