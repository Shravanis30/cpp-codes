#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ptr;
    cout << "Enter the size of array " << endl;
    cin >> n;

    int Linear_array[n];
    cout << "Enter the elements in the array " << endl;
    for(int i = 0; i < n; i++) {
        cin >> Linear_array[i];
    }

    cout << "Array before sorting " << endl;
    for(int i = 0; i < n; i++) {
        cout << Linear_array[i] << "\t";
    }
    cout << endl;
    
    for(int k = 0; k < n-1; k++) 
    {
        ptr = 0;
        while(ptr < n-k)
        {
            if(Linear_array[ptr] > Linear_array[ptr+1])
            {
                int temp = Linear_array[ptr];
                Linear_array[ptr] = Linear_array[ptr+1];
                Linear_array[ptr+1] = temp;
            }
            ptr++;
        }
    }

    cout << "Array after the sorting " << endl;
    for(int i = 0; i < n; i++) {
        cout << Linear_array[i] << "\t";
    }
    cout << endl;
    
return 0;
}