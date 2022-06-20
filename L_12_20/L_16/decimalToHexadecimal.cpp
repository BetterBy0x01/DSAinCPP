#include <bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n) {
    int x = 1;
    string ans = "";
    while(x <= n) {
        x *= 16;
    }
    x /= 16;
    while (x > 0) {
        int last_digit = n/x;
        n -= last_digit*x;
        x /= 16;

        if (last_digit <= 9) {
            ans = ans + to_string(last_digit);
        }
        else {
            char ch = 'A'+last_digit-10;
            ans.push_back(ch);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << decimalToHexadecimal(n) << endl; 
    return 0;
}