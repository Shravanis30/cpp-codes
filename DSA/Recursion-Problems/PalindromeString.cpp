#include <bits/stdc++.h>
using namespace std;
bool display(string s, int i)
{
    
    if(i < s.length()) return false;

    if(s[i] == s.length()-i-1) return true;
        
    return display(s, i+1);
}
int main()
{

//    string abc;
//    cout << "enter the string : ";
//    cin >> abc;
//    display(abc);

    string str = "kfsdl";
    bool ans = display(str, 0);

    if(ans == true) {
        cout << "its a palindrome" << endl;
    }

    else {
       cout << "its a not palindrome" << endl;
    }
    
   return 0;
}
