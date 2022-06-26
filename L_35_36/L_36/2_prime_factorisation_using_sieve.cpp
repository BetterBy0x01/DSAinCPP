#include <bits/stdc++.h>
using namespace std;

void primeFactor(int n) {
    int spf[100] = {0};             //spf - smallest prime factor
    for (int i = 2; i <= n; i++) {
        spf[i] = i;                 // initializing spf of all numbers with themselfs
    }
    for (int i = 2; i <=n; i++) {
        if(spf[i] == i) {
            for (int j = i*i; j <=n ; j+=i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1) {
        cout << spf[n] << " ";
        n = n/spf[n];
    }cout << endl;
}

int main() {
    int n;
    cin >> n;
    primeFactor(n); 
    return 0;
}