// C++ program to print prime numbers form 1 to 100
#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int i=2; i < 100; i++)
    {
        int count=0;
        for (int j=2; j<=i; j++)
        {
            
            if(i%j == 0)
            {
                count++;
            } 
        }
            if(count == 1)
            {
                cout << i << endl;
            }
    }
    return 0;
}