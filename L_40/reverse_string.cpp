/*
    Q. Reverse a string using recursion
*/

#include <bits/stdc++.h>
using namespace std;

void reverseString(string s) {
    if(s.empty()) return;
    reverseString(s.substr(1));            // inod, inod, nod, od, d, ""(empty string)
    cout << s[0];                          // first d, then o, then n, then i, then b
}

int main() {
    string s = "binod";  
    int n = s.size();
    reverseString(s);
    cout << endl;
    return 0;
}