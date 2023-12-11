#include <bits/stdc++.h>
using namespace std;

class animal {
    public:
    string sound;
    int legs;
    animal(string s, int l){
        sound=s;
        legs=l;
    }
};

class panda : public animal {
    public:
    string food;
    panda(string s1, int l1, string f) : animal(s1, l1) {
        sound=s1;
        legs=l1;
        food=f;
    }
};

int main()
{
    animal ttejuuu("hawww", 2);
    panda shraavniii("hmm", 4, "bamboo");

    cout << ttejuuu.legs << " " << ttejuuu.sound << endl;
    cout << shraavniii.sound << " " << shraavniii.legs << " " << shraavniii.food << endl;
return 0;
}