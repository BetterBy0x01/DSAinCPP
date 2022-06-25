/*
    Q1. WAP to check if a given number is power of 2

    Sol. (n & n-1) has same bits as n except the rightmost set bit.
         (n-1 will have all the values after the rightmost set bit in n, flipped)
         (n has only one set bit, and n-1 will have all set bits after that position).
         (n & n-1) will always gives 0
*/
            
#include <bits/stdc++.h>
using namespace std;

bool ispowerof2(int n) {
    return (n && !(n & n-1));                 // only if n is power of 2
    // (n &&) is for handling corner case i.e. when n = 0 case n-1 i.e. -1 is not valid 
}

int main() {
    cout << ispowerof2(32) << endl;
    return 0;
}