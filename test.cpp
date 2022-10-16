#include <bits/stdc++.h>
using namespace std;

string removeDup(string s) {
    if (s.length() == 0) {
        return "";
    }
    string ans = removeDup(s.substr(1));        // gives back string after removing duplicates
    if (s[0] == ans[0]) {
        return ans;
    }
    return (s[0]+ans);
}

int main() {
    string str = "aaaaabbbcccddefff"; 
    cout << removeDup(str) << endl;
    return 0;
}