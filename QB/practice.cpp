#include<iostream>
using namespace std;

class square {
    private:
    int side = 10;
    friend void display(square);
};

void display(square sq) {
    cout << "Area of square = " << sq.side*sq.side << endl; 
}

int main() {
    square sq;
    display(sq);
    return 0;
}