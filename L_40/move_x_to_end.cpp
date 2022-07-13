/*
    Q. Move all x to the end of the string.
*/
#include <bits/stdc++.h>
using namespace std;

string moveX(string s) {
    if(s.length() == 0) {
        return "";
    }
    char ch = s[0];
    string ans = moveX(s.substr(1));            // gives back the string after moving x to the end.
    if(ch == 'x') {
        return (ans+ch);
    }
    return (ch+ans);
}

int main() {
    string str = "axxbdxcefxhix"; 
    cout << moveX(str) << endl;
    return 0;
}