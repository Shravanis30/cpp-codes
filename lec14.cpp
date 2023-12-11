#include <iostream>
using namespace std;

void swap(int a, int b);
void swapPtr(int* a, int* b);
int &swapRefVar(int &a, int &b);
int main()
{
    int num1 = 4, num2 = 5;
   
    cout << "the number before swaping =" << num1 << " " << num2 << endl;
    swap(num1, num2);
    swapPtr(&num1, &num2);
    swapRefVar(num1, num2)=6;
    cout << "the number after swaping =" << num1 << " " << num2 << endl;
    return 0;
}
// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using pointers
void swapPtr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference using reference variable
int &swapRefVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;  
    return a;
}
