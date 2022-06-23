#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int *ptr) {
    (*ptr)++;
}

int main() {
    freopen("/home/giba/input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // printing array using arr.
    for (int i = 0; i < n; i++) {
        cout << *(arr+i) << " ";
    }cout << endl;

    // printing array using another pointer
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;
    }cout << endl;


    // swapping elements
    int a = 2;
    int b = 3;
    swap(&a, &b);
    cout << a << " " << b << endl;

    // incrementing a's value
    int c = 10;
    increment(&c);
    cout << c << endl;
    return 0;
}