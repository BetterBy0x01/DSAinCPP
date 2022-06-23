#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr[100];
    cin >> arr;
    int n = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        n++;
    }
    for (int i = 0; i < n/2; i++) {
        if(arr[i] == arr[n-i-1]) {
            continue;
        }
        cout << "Not a palindrome";
        return 0;
    }
    cout << "A palindrome";
    return 0;
}