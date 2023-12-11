// C++ program to find the minimun number among two numbers
#include<iostream>
using namespace std;
int main() {

    int a=2, b=3;


    int min = a>b?b:a;
    
    cout << "The minimum no is : " << min;

    return 0;
}