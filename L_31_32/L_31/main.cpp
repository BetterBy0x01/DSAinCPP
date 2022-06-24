#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "90";
    int n = stoi(s);
    cout << n+10 << endl;

    int x = 15;
    cout << to_string(x) + "2" << endl;         // 152
    
    string str = "ashutosh";
    cout << str.substr(0,4) << endl;            // ashu
    return 0;
}