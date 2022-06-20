#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0, rem;
    int mul=1;
    while (n > 0) {
        rem = n%2;
        ans += rem*mul;
        n /= 2;
        mul *= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}

