#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) {
    int ans, rem;
    int mul = 1;
    while(n > 0) {
        rem = n%10;
        ans += rem*mul; 
        mul *= 2;
        n = n/10;
    }
    return ans;
}

int32_t main() {
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}