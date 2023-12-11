//C++ progarm using friend function
#include<bits/stdc++.h>
using namespace std;

class Sample
{
    private:
    int l, b;
    public:
    int value() 
    {
        l=6;
        b=6;
    }
    friend float new_values(Sample a, Sample b);
};
float new_value(Sample a, Sample b)
{
    return float(l*b);
}
int main() {
    Sample X;
    Sample Y;
    X.value();
    Y.value();
    cout << "area of the rectangle = " << new_value(X, Y) << endl;
    return 0;
}