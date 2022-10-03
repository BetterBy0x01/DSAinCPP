#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos) {
    int mask = ~(1<<pos);
    return (n & mask);
}

int setBit(int n, int pos) {
    return (n | 1<<pos);
}

int updateBit(int n, int pos, int bit) {
    //clearbit
    int mask = ~(1<<pos);
    n = n & mask;
    //setBit
    return (n | bit<<pos);

    // OR
    // return (bit==0)?clearBit(n,pos):setBit(n,pos);
}

int main() {
    cout << updateBit(13,3,0) << endl;    
    return 0;
}