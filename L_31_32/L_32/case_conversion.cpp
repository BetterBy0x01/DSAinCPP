// convert entire string to either lower case or upper case

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "aShUtOSh";

    // conversion to upper case
    for (int i = 0; i < str.size(); i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;

    // conversion to lower case
    for (int i = 0; i < str.size(); i++) {
        if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;

    return 0;
}