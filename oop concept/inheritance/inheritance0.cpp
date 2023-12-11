#include <bits/stdc++.h>
using namespace std;

class heroeine {                   // 1st class 
    public:
    //properties of heroeine
    string name;
    float health;              // members of class
    char level;

    heroeine() {                  //default constructor
        name="shraavniii";    //defining the default constructor inside the class
        health=100;
        level='T';
    }
};

//2nd class
class troop : public heroeine{      // inherits the properties of class heroeine 
    public:
    string type; 

    troop();                    //declaring the constructor          

};

    troop::troop()               // default constructor
    {
        type="cavalary";        //defining the constructor outside the class
    }

int main()
{
    heroeine h1;
    troop t1;

    cout << h1.name << " " << h1.health << " " << h1.level << endl;
    cout << t1.name << " " << t1.health << " " << t1.level << " " << t1.type << endl;
return 0;
}