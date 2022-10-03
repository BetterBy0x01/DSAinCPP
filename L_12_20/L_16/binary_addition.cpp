/*
    considering a string would be a better option for values like a = 1, b = 1 to work cause it gives 01 (1 acc. to program) initially and it's reverse should be 10 but (program gives 0)
*/
#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int last_digit, ans = 0;
    while (n > 0) {
        last_digit = n%10;
        ans = ans*10 + last_digit;
        n /= 10;
    }
    return ans;
}

int binary_addition(int a, int b) {
    int ans = 0;
    int prevCarry = 0;
    while (a > 0 && b > 0) {
        if (a%2 == 0 && b%2 == 0) {
            ans = ans*10 + prevCarry; 
            prevCarry = 0;
        }
        else if ((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)) {
            if(prevCarry) {
                ans = ans*10 + 0; 
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1; 
                prevCarry = 0;
            }
        }
        else {
            if (prevCarry) {
                ans = ans*10 + 1;
            }
            else {
                ans = ans*10 + 0;
            }
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0) {
        if(prevCarry) {
            if(a%2==0) {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
            else {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
        }
        else {
            ans = ans*10 + a%2;
        }
        a /= 10;
    }
    while (b > 0) {
        if(prevCarry) {
            if(b%2==0) {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
            else {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
        }
        else {
            ans = ans*10 + b%2;
        }
        b /= 10;
    }
    if(prevCarry) {
        ans = ans*10 + 1;
    }
    ans = reverse(ans);
    return ans;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << binary_addition(a,b) << endl;
    return 0;
}