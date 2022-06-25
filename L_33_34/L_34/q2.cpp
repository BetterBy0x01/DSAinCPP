/*
    Q2. WAP to count the number of ones in binary representation of a number.
*/
#include <bits/stdc++.h>
using namespace std;

int countOnes(int n) {
    int count=0;
    while(n>0) {
        count++;
        n = n & n-1;
    }
    return count;
}

int main() {
    cout << countOnes(5) << endl;
    return 0;
}