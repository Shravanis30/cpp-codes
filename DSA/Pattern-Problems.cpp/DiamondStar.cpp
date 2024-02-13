#include <bits/stdc++.h>
using namespace std;

    void Pyramid(int n) {
        for(int i = 0; i < n; i++) {
            // space
            for(int j = 0; j < n-i-1; j++) {
                cout << " ";
            }
            // star
            for(int j = 0; j < 2*i+1; j++) {
                cout <<"*";
            }
            // space
            for(int j = 0; j < n-i-1; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }
    void InvertPyramid(int n) {
        for(int i = 0; i < n; i++) {
            //space
            for(int j = 0; j < i; j++) {
                cout << " ";
            }
            //star
            for(int j = 0; j < 2*n-(2*i+1); j++) {
                cout << "*";
            }
            //space
            for(int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    Pyramid(n);
    InvertPyramid(n);
    

return 0;
}