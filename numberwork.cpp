#include<iostream>
#include<math.h>

int main() {
    int num,square,cube,prime;
    std::cout << "Enter the number :";
    std::cin >> num; 

    if (num >= 0)
    {
        std::cout << "The number is positive" << "\n";
    } 
    else
    {
        std::cout << "The number is negative" << "\n";
    }

    if(num % 2 == 0)
    {
        std::cout << "Then number is even" << "\n";
    }
    else 
    {
        std::cout << "The number is odd" << "\n";
    }
    
    square = num*num;
    std::cout << "The square of the number is : " <<square << "\n";

    cube = num*num*num;
    std::cout << "The cube of the given number is :" <<cube << "\n";

    if (prime = num%num && num%1 == 0)
    {
        std::cout << "The number is prime";
    }
    else  
    {
        std::cout << "The number is not prime";
    }
    return 0;
}