/*
    On subtracking 2 numbers their GCD doesn't change
    Ex. 42 - 24 = 18
        24-18 = 6
        18-6 = 12
        12-6 = 6            // GCD of 42, 24
        6-6 = 0

        OR

        GCD(a,b) = GCD(b,a%b)   a > b
        42%24 = 18
        24%18 = 6
        18%6 = 0            // when we get this 0 we stop and we now have our gcd
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    cout << gcd(5, 7) << endl;
    return 0;
}