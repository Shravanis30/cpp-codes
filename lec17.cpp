// a pointer that not assign any value but null is known as null pointer
// in computer programming null pointer that does not point to any object or function
// we can use it to initialze a pointer variable when that pointer variable isnt assign any valid memory address yet
#include <iostream>
using namespace std;
int main()
{
    cout << "lets learn about pointers" << endl;
    int *ptr1;
    int *ptr2 = NULL;
    cout << "address of some garbage is : " << ptr1 << endl;
    cout << "address of some garbage is : " << ptr2 << endl;

    return 0;
}