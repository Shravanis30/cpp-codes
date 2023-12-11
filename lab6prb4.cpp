// C++ progarm to create admission form using user-defined function
#include <bits/stdc++.h>
using namespace std;

void Login() {
    string username , password;
    cout << "Username : ";
    cin >> username;
    cout << "Password :";
    cin >> password;

    if (username == "ss@gmail.com" && password == "1234567890")
    {
        cout << "\nLOGIN SUCCESSFUL \n\n";
    }
    else
    {
        cout << "\nLOGIN UNSUCCESSFUL \nPLEASE TRY AGAIN \n\n ";
    }
}
int Create() {
    string name, mob, password, comfirm_password;
    cout << "Enter your name : ";
    cin >> name;   
    cout << "Enter your mobile number : ";
    cin >> mob;
    cout << "Create Password :";
    cin >> password;
    cout << "Comfirm Password :";
    cin >> comfirm_password;
    if(password == comfirm_password)
    {
        cout << "\n ADMISSION DONE!!! \n\n";
    }
    else
    {
        cout << "ADMISSION FAILED \n";
        cout << "Please try again \n\n";
    }
        return 0;
}



int main () {
    int option;
    cout << "WELCOME!!" << endl;

    for (;;) {
    cout << "Select the option : 1. Login" "\t" "2. Make admission" << endl;
    cin >> option;
    switch(option)
    {
        case 1 : Login();
        break;
        case 2 : Create();
        break;
        default : cout << "Please try again " << endl;
    }
    }
    return 0;
}

