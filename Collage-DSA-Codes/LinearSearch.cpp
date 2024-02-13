#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the number to check weather in array : ";
    cin >> n;
    int DATA[6] = {7,5,2,9,10,1};
    int Array_length = sizeof(DATA)/ sizeof(DATA[0]);
    int LOC = 0;
    
    for(int i = 0; i < Array_length; i++) {
        if(n==DATA[i]) {
           cout <<  "The index of given number = " << LOC << endl;
           return 0;
        }
        LOC++;
    }
   
        cout << "The number does not exits in array" << endl;
    
return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the number to check weather in array : ";
//     cin >> n;
//     int DATA[6] = {7,5,2,9,10,1};
//     int Array_length = sizeof(DATA)/ sizeof(DATA[0]);
//     int LOC = 0;
//     bool flag = false;
//     for(int i = 0; i < Array_length; i++) {
//         if(n==DATA[i]) {
//            cout <<  "The index of given number = " << LOC << endl;
//            flag = true;
//            break;
//         }
//         LOC++;
//     }
//     if(flag= false) {
//         cout << "The number does not exits in array" << endl;
//     }
// return 0;
// }