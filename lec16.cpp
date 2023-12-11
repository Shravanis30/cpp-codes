// variable which stores address of a another variable known as pointer
//can be of type int, char, array, function or any other pointer
//size depends on the arcitecture
//pointer in c and c++ progarming language can be declaring using '*' symbol
//note: pointer is one of the datatype which stores the address of the variable

#include <iostream>
using namespace std;
int main()
{   
    cout << "lets learn about pointers" << endl;
    int a=73;
    int *ptra = &a;
    cout << "the address of pointer to a is : " << &ptra << endl;
    cout << "the value of a is : " << *ptra << endl;
    return 0;
}
