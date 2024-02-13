#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "enter the string : ";
    cin >> str;

    int hash[256] = {0};
    for(int i = 0; i < str.size(); i++) {
        hash[str[i]]++;
    }

    int questions;
    cout << "enter the number of questions : ";
    cin >> questions;
    while(questions > 0) {
        char ch;
        cout << "enter the character to count frequency : ";
        cin >> ch;
        questions--;

        cout << "there the frequency of " << ch << " = "<< hash[ch] << endl;
    } 
}














// #include <bits/stdc++.h>
// using namespace std;
// int display(char ch, string s) {
//     int count = 0;
//     for(char i = 0; i < s.length(); i++) {
//         if(s[i]==ch)
//         count++;
//     }
//     return count;
// }
// int main() {
//     string str;
//     cout << "enter the string : ";
//     cin >> str;
//     int questions;
//     cout << "enter the number of questions : ";
//     cin >> questions;
//     while(questions > 0) {
//         char ch;
//         cout << "enter the character to count frequency : ";
//         cin >> ch;
//         questions--;

//         cout << "there the frequency of " << ch << " = "<< display(ch, str) << endl;
//     } 
// }


