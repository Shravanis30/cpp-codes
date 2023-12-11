//C++ program to find if the character is vowel or consonent 
#include <iostream>
using namespace std;
int main () {

    char alpa, a, e, i, o, u, A, E, I, O, U;
    

    cout << "enter the value of char :  ";
    cin >> alpa;

    cout << alpa << " " << "this character is " <<  (alpa == 'a' || alpa == 'e' || alpa == 'i' || alpa == 'o' || alpa == 'u' ||
        alpa == 'A' || alpa == 'E' || alpa == 'I' || alpa == 'O' || alpa == 'U'  ? "vowel" : "consonent");

    return 0;
     

}