// write a program to print the sum of the number till the number entered using for loop
#include <iostream>
int main() {
    int num=0, sum=0, i;
    std::cout << "Enter the number :";
    std::cin >> num;

    for(i=1; i <= num; i++ )
    {
        sum += i;
    }
    
    std::cout << "Therefore the sum is :" << sum;

    return 0;
}
