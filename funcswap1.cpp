
#include <iostream>
using namespace std;

void swapnos(int &a , int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
   int first = 12345;
   int second = 54321;

   cout << "Before swap :" << first << second << endl;
   
  swapnos(first , second);

   cout << "After swap :" << first << second;

   return 0;
}