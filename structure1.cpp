#include <iostream>
    struct employee {
        std::string name;
        int empid;
        float salary;
    } emp1, emp2; 

int main() {
    emp1.name = "shree";
    emp1.empid = 123;
    emp1.salary = 1000000;
    emp2.name = "om";
    emp2.empid = 468;
    emp2.salary = 19999900;

    std::cout << emp1.name << "\n";
    std::cout << emp1.empid << "\n";
    std::cout << emp1.salary << "\n";

    std::cout << emp2.name << "\n";
    std::cout << emp2.empid << "\n";
    std::cout << emp2.salary << "\n";

    return 0;
}