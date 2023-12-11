#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the vakue of b : ";
    cin >> b;

    a=a^b;
    b=a^b;
    a=a^b;
  
    cout<<" The Number After swapping a : "<< a <<  " and b :"<<" " << b;
    
    return 0;

}