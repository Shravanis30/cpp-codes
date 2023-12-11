// write a program for choices tea or coffe enter 1 for tea ani enter 2 for coffee
#include <iostream>
int main() {
    int choice = 0;
    std::cout << "Enter the number 1 or 2 :";
    std::cin >> choice; 
    if(choice == 1)
    {
        std::cout << "Order place for tea \n";
    }
    else if(choice == 2)
    {
        std::cout << "Order place for coffee \n";
    }
    else
    {
        std::cout << "Invalid input \n";
    }
    std::cout << "Thank you";
    return 0;
}