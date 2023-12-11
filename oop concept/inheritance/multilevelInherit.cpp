#include <bits/stdc++.h>
using namespace std;

class grandfather {
    public:
    string haircolor;
    int age;

    grandfather();
};

grandfather::grandfather() {

    haircolor = "grey";
    age = 50;
}

class father : public grandfather {
    public:
    string work;

};


class child : public father {
    public:
    string gender;
};

int main()
{
    grandfather gf;
    child chi;
    father fa;

    fa.haircolor = "black";
    fa.work = "teacher";
    fa.age = 32;
    chi.haircolor = "brown";
    chi.age = 6;
    chi.gender = "girl";
    chi.work = "nothing";


    cout << gf.haircolor << " " << gf.age << endl;
    cout << fa.haircolor << " " << fa.age << " " << fa.work << endl;
    cout << chi.haircolor << " " << chi.age << " " << chi.work << " " << chi.gender << endl;

return 0;
}