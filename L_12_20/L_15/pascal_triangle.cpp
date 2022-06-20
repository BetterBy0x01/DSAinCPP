#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}

int nCr(int a, int b) {
    int diff;
    diff = (a>b)?(a-b):(b-a);
    return fact(a)/(fact(b)*fact(diff));
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <(i+1); j++) {
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}