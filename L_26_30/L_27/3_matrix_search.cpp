/*
    Q. Rows and Columns both sorted
    Ex. 1  4  7  11
        2  5  8  12
        3  6  9  16
        10 13 14 17
*/

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

    int key;
    cin >> key;

    int r = 0, c = n-1;
    bool found = false;
    while (r < n && c >= 0) {
        if (arr[r][c] == key) {
            found = true;
            break;
        }
        arr[r][c] > key ? c-- : r++;

    }
    if (found) {
        cout << r << " " << c << endl; 
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}