/*
    QUESTION FROM PDF
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, j;
    int pd;                 // previous common difference
    int curr;               // current arithmetic subarray length including Ai
    int ans;                // max arithmetic subarray length
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ans = 2;
    pd = a[1]-a[0];
    j = 2;
    curr = 2;
    
    while (j < n) {
        if (pd == a[j]-a[j-1]) {
            curr += 1;
        }
        else {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}