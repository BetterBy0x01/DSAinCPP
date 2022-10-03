#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    a[n] = -1;                          // a[n-1] > -1 (always) for making last day of the month independent of next day.
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }cout << endl;

    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = INT_MIN;
    for (int i = 1; i < n; i++) {
        if(a[i] > mx && a[i] > a[i+1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    return 0;
}