/*
    Q3. WAP to generate all possible subsets of a set
    Ex. {a,b,c}
        {}          // empty set   000
        {c}                        001
        {b}                        010
        {b,c}                      011
        {a}                        100
        {a,c}                      101
        {a,b}                      110
        {a,b,c}                    111
*/

#include <bits/stdc++.h>
using namespace std;

void subsets(char arr[], int n) {
    for (int i = 0; i < (1<<n); i++) {              // i<(2^n) ~   1 < (1<<n);
        cout << "{";
        for (int j = 0; j < n; j++) {               // no. i ke liye jth bit check kar rahe honge
            if (i & (1<<j)) {                       // if jth bit is set then we get true
                cout << arr[j];
            }
        }
        cout << "}" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    subsets(arr, n);
    return 0;
}