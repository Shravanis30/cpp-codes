#include <iostream>
#include <math.h>
using namespace std;


int favfunction(int t , int s){
return t*s;
}

int main() {
   int j = favfunction(123 , 1234);
   cout << "the multiplication is " << j;
    return 0;
}