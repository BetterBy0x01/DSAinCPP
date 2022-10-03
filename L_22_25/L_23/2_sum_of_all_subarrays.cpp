/*
    Given an array a[] of size n. Output sum of each subarray of the given array.
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += a[j];
            cout << sum << " ";
        }
        sum = 0;
    }
    cout << endl;
    return 0;
}