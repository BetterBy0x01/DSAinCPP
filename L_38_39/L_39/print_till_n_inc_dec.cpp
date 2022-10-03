/* 
    Q. Print numbers till n:
        1. In increasing order
        2. In decreasing order
*/
#include <bits/stdc++.h>
using namespace std;

void print_inc_desc(int n) {
    if(n==0) return;
    cout << n << endl;
    print_inc_desc(n-1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    cout << endl;
    print_inc_desc(n);
    return 0;
}