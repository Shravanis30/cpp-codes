#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Linear_Array[] = {12, 23, 34, 45, 56, 67};
    int upper_Bound = sizeof(Linear_Array)/ sizeof(Linear_Array[0]);
    int Lower_Bound = 0;
    int k = Lower_Bound;
    while(k <  upper_Bound)
    {
        cout << "Element at index " << k << " = " << Linear_Array[k] << endl;
        k++;
    }
return 0;
}