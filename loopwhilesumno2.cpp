// write a program to do sum of 1 to 10 numbers using while loop
#include <iostream>
int main() {
    int a=1, sum=0;
    while(a <= 10)
    {
       sum += a;
       a++;
    }
    std::cout << "The sum is " <<sum;
    return 0;
}