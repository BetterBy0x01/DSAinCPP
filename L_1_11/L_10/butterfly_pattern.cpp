/*
    *                 * 
    * *             * * 
    * * *         * * * 
    * * * *     * * * * 
    * * * * * * * * * * 
    * * * * * * * * * * 
    * * * *     * * * * 
    * * *         * * * 
    * *             * * 
    *                 *
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (i+1); j++) {
            cout << "* ";
        }
        int space = (2*n)-(2*(i+1));
        for (int k = 0; k < space; k++) {
            cout << "  ";
        }
        for (int l = 0; l < (i+1); l++) {
            cout << "* "; 
        }
        cout << endl;
    }

    /*
        below code same as above [minor change line 26 (i=n) (i > 0) (i--)]
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        int space = (2*i);
        for (int k = 0; k < space; k++) {
            cout << "  ";
        }
        for (int l = (n-i); l > 0; l--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}