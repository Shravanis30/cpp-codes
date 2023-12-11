#include <bits/stdc++.h>
using namespace std;
class vechicle
{
public:
    int wheels;
    string brand;
};

class car : public vechicle
{
public:
    int speed;
    car();
};
car::car()
{
    wheels = 4;
    speed = 500;
    brand = "mustang";
}

class bus : public vechicle
{
public:
    bus();
};
bus::bus()
{
    wheels = 4;
    brand = "tata";
}

class autorikshaw : public vechicle
{
public:
    autorikshaw();
};
autorikshaw::autorikshaw()
{
    wheels = 3;
    brand = "bajaj";
}

class truck : public vechicle
{
public:
    truck();
};
truck ::truck()
{
    wheels = 6;
    brand = "ashoka leyland";
}

class shivshahi : public bus
{
public:
    string name;
    shivshahi()
    {
        wheels = 6;
        name = "shivshahi";
        brand = "TATA";
    }
};

class posco : public bus
{
public:
    posco()
    {
        wheels = 4;
        brand = "unknown";
    }
};

class swift : public car
{
public:
    swift()
    {
        speed = 100;
        brand = "suzuki";
        wheels = 4;
    }
};

class city : public car
{
public:
    city()
    {
        speed = 150;
        brand = "honda";
        wheels = 4;
    }
};

int main()
{
    vechicle veh;
    car c;
    bus bus;
    autorikshaw ar;
    shivshahi ss;
    posco po;
    swift sw;
    city ci;

    cout << "car info : " << c.brand << " " << c.speed << " " << c.wheels << endl;
    cout << "swift : " << sw.brand << " " << sw.speed << " " << sw.wheels << endl;
    cout << "baleno : " << ci.brand << " " << ci.speed << " " << ci.wheels << endl;
    cout << "bus info : " << bus.brand << " " << bus.wheels << endl;
    cout << "shivshahi : " << ss.name << " " << ss.brand << " " << ss.wheels << endl;
    cout << "posco : " << po.brand << " " << po.wheels << endl;
    cout << "autorikshaw info : " << ar.brand << " " << ar.wheels << endl;

    return 0;
}