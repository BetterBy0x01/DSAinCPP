/*
        1 
       1 2 
      1 2 3 
     1 2 3 4 
    1 2 3 4 5 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-i-1); j++) {
            cout << ' ';
        }
        for (int k = 0; k < (i+1); k++) {
            cout << (k+1) << " ";
        }
        cout << endl;
    }
    return 0;
}