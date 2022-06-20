#include <bits/stdc++.h>
using namespace std;

int decimalToOctal(int n) {
    int ans = 0, rem;
    int mul=1;
    while (n > 0) {
        rem = n%8;
        ans += rem*mul;
        n /= 8;
        mul *= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << decimalToOctal(n) << endl;
    return 0;
}

