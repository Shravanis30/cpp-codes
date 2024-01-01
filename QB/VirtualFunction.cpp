// C++ PROGARM OF VIRTUAL FUNCTION
#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    virtual void sound()
    {
        cout << "some sound" << endl;
    }
};
class dog : private animal
{
public:
    void sound() override
    {
        cout << "barks" << endl;
    }
};
class cat : private animal
{
public:
    void sound() override
    {
        cout << "meows" << endl;
    }
};
int main()
{
    animal a;
    dog d;
    cat c;

    cout << "animal = ";
    a.sound();
    cout << "dog = ";
    d.sound();
    cout << "cat = ";
    c.sound();
    return 0;
}