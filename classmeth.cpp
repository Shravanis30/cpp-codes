#include <iostream>
using namespace std;

class student {
    public:
    void method();
};

void student :: method() {
    cout << "SHRAAVNIII";
}

int main() {
    student obj;
    obj.method();

    return 0;
}