// // write a program to do sum of 1 to 10 numbers using for loop
#include <iostream>
int main() {
    int i, sum = 0;
    for(i = 1; i<=10; i++)
    {
        sum += i;
    }
    std::cout << "Therefore the sum is :" <<sum;
    return 0;
}
