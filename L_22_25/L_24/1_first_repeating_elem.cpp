#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, minidx = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++) {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (idx[arr[i]] == -1) {
            idx[arr[i]] = i;
        }
        else {
            minidx = min(minidx, idx[arr[i]]);
        }
    }

    if (minidx == INT_MAX) {
        cout << "-1" << endl;
    }
    else {
        cout << (minidx+1) << endl;
    }
    return 0;
}