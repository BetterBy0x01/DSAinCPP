//    5 4 3 2 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

void print_inc_desc(int n) {
    if(n == 1) {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    print_inc_desc(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print_inc_desc(n);
    cout << endl;
    return 0;
}