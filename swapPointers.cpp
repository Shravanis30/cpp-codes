#include <iostream>
using namespace std;

void swapPtr(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int num1 = 5, num2 = 6;
    cout << "The number before swapping is " << num1 << " " << num2 << "\n";

    swapPtr(&num1, &num2);
    cout << "The number after swapping is " << num1 << " " << num2 << "\n";
    return 0;
}
