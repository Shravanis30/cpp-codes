// write a program to print the sum of the number till the number entered using while loop
#include <iostream>
int main () {
    int num, count=1, sum=0;

    std::cout << "Enter the number till the sum to find :";
    std::cin >> num;

    while(count<=num)
    {
        sum += count;
        count++;
    }
    std::cout << "Therefore the sum is :" <<sum;
}