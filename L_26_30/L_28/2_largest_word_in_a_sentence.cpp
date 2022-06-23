#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    // used to ignore or clear one ore more characters from the input buffer.

    char arr[n+1];  

    cin.getline(arr, n);

    int i=0, st=0, maxst=0;
    int currLen=0, maxLen=0;
    while(1) {

        if (arr[i] == ' ' || arr[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        else 
            currLen++;
        if(arr[i] == '\0')
            break;
        
        i++;
    }
    cout << maxLen << endl;
    for (int j = 0; j < maxLen; j++) {
        cout << arr[j+maxst];
    }cout << endl;
    return 0;
}