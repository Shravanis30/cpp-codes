// buzz no
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number : ";
    cin >> num;

    
    if(num%7==0 || num%10 == 7)

    {
        cout << num << " " << "its a buzz number ";
    }
    else 
    {
        cout << num << " " << "its not a buzz number ";
    }
return 0;
}