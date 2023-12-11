#include <iostream>
int main() {
    int num;
    std::cout << "Enter the number :";
    std::cin >> num;
    if(num > 10)
    {
        std::cout << "The number is greater than 10";
    }
    else
    {
        std::cout << "The number is smaller than 10";
    }
    return 0;
}