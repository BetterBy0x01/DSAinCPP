#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("/home/giba/input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // spiral order traversal

    int rowStart = 0;
    int rowEnd = n-1;
    int columnStart = 0;
    int columnEnd = m-1;

    while (rowStart <= rowEnd && columnStart <= columnEnd) {
        for (int i = columnStart; i <= columnEnd; i++) {
            cout << arr[rowStart][i] << " ";
        }
        rowStart++;
        for (int i = rowStart; i <= rowEnd; i++) {
            cout << arr[i][columnEnd] << " ";
        }
        columnEnd--;
        for (int i = columnEnd; i >= columnStart; i--) {
            cout << arr[rowEnd][i] << " ";
        }
        rowEnd--;
        for (int i = rowEnd; i >= rowStart; i--) {
            cout << arr[i][columnStart] << " ";
        }
        columnStart++;
    }
    cout << endl;
    return 0;
}