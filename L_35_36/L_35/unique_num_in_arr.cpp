/*
    Q1. WAP to find a unique number in an array where all numbers except one number, are present twice
    Ex. {2,4,6,3,6,4,2} here 3 is the unique element
    SOL: using XOR operator
         no's XOR with itself gives 0
     Ex.            {a,b,c,d,c,b,a,}
                    XOR = 0^a^b^c^d^a^b^c
                    => 0^(a^a)^(b^b)^(c^c)^d   (using commutative law)
                    => 0^d^0^0^0
                    => d   (the unique element)
*/

#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n) {
    int xorsum = 0;                             // xorsum refers to successive xor operations on integers
    for (int i = 0; i < n; i++) {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main() {
    int arr[] = {5, 4, 3, 3, 1, 5, 4}; 
    cout << unique(arr, 7) << endl;
    return 0;
}