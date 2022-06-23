#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("/home/giba/input.txt", "r", stdin);
    int n1, m1, n2, m2;
    cin >> n1 >> m1;
    int arr1[n1][m1], arr2[n2][m2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> arr1[i][j]; 
        }
    }
    cin >> n2 >> m2;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> arr2[i][j]; 
        }
    }

    int sol_matrix[n1][m2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            sol_matrix[i][j] = 0;
        }
    }
    int i, j;
    if (m1 == n2) {
        for (i = 0; i < n1; i++) {
            for (j = 0; j < m2; j++) {
                for (int k = 0; k < n2; k++) {
                    sol_matrix[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << sol_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}