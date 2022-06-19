/*
            1 
          2 1 2 
        3 2 1 2 3 
      4 3 2 1 2 3 4 
    5 4 3 2 1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-i-1); j++) {
            cout << "  ";
        }
        for (int k = (i+1); k >= 1;k--) {
            cout << k << " ";
        }
        for (int l = 2; l <= (i+1); l++) {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}