// Just wrote my own code nothing to do with course.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "1354";
    int n = s.length();
    int num;
    for (int i = 0; i < n; i++) {
        num += (s[i]-'0')*pow(10, n-i-1);
    }
    cout << num;
    cout << endl;
    return 0;
}