#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    const int N = 1e6+2;
    bool check[N];

    for (int i = 0; i < N; i++) {               // fill check[] array with false
        check[i] = false;
    }
    for (int j = 0; j < n; j++) {
        if (a[j] >= 0) {
            check[a[j]] = true;                 // if the number is positive.
        }
    }

    for (int i = 0; i < N; i++) {
        if (check[i] == false) {                // first value which is false is the smallest missing positve number
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}