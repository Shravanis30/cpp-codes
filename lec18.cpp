// c++ allows to acll a function without specfying all itds arguments in such cases 
//the function assigns a default value to the parameter 
//which does not have a matching arrguments  in the function call
// deafult values are specifies when the function is declared
#include <iostream>
using namespace std;


    float moneyRecieved(int currentMoney , float factor =1.04)
    {
        return currentMoney * factor;
    } 
    int main() {
        int money =100000;
        cout << "if you have " << money << " Rs in your bank account , you will recieve " << moneyRecieved(money) << "rs after one year" << endl;
        cout<<"for VIP: if you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money,1.1)<<"Rs after one year"<<endl;
    return 0;
}






































