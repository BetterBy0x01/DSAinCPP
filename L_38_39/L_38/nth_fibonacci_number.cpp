/*
    0, 1, 1, 2, 3, 5, 8, 13, 21, ...
*/
#include <bits/stdc++.h>
using namespace std;

int finbonacci(int n) {
    if(n==1 || n==2) {
        return (n-1);
    }
    return (finbonacci(n-1) + finbonacci(n-2));
}

int main() {
    int n;
    cin >> n;
    cout << finbonacci(n) << endl; 
    return 0;
}