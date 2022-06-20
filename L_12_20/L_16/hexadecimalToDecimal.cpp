#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string str) {
    int ans, curr_dig;
    int mul = 1;
    for (int i = size(str)-1; i >= 0; i--) {
        if(str[i] >= 'A' && str[i] <= 'F') {
            curr_dig = str[i]-'A'+10;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            curr_dig = str[i]-'0';
        }
        else {
            cout << "Invalid input" << endl;
            exit(1);
        }
        ans += curr_dig*mul;     
        mul *= 16;
    }
    return ans;
}

int32_t main() {
    string n;
    cin >> n;
    cout << hexadecimalToDecimal(n) << endl;
    return 0;
}