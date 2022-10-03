/*
    Replace pi with 3.14 in the given string
*/
#include <bits/stdc++.h>
using namespace std;

string replacePi(string s, int i, string result="") {
    if(s.empty()) return result;
    if(s[0]=='p'&& s[1]=='i') {
        result +="3.14";
        i = 2;
    }
    else {
        result += s[0];
        i = 1;
    }
    result = replacePi(s.substr(i), i, result);
    return result;
}

int main() {
    string s = "pippxxppiixipi"; 
    int n = s.size();
    // cout << s[n-2] << " " << s[n] << " " << s[n-1] << endl;      // from here we can see that s[n] is not out of range in string 
    cout << replacePi(s, 0) << endl;
    return 0;
}