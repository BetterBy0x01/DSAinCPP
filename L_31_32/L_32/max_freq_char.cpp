// print the character with maximum frequency.

#include <bits/stdc++.h>
using namespace std;

// Method 1 - sorting the element and counting frequency of each character and comparing it with maxFrequency
// int main() {
//     string s = "abcacbade"; 
//     sort(s.begin(), s.end());
//     char ch;
//     int maxFreq = INT_MIN, currFreq = 1;
//     int i, n = s.size();
//     for (i = 1; i < n; ) {
//         while(s[i]==s[i-1]) {
//             currFreq++;
//             i++;
//         }
//         if (currFreq > maxFreq) {
//             maxFreq = currFreq; 
//             ch = s[i-1];
//         }
//         currFreq = 1;
//         i++;
//     }
//     cout << ch << " " << maxFreq << endl;
//     return 0;
// }


// Method 2 - char. array of length 26 taken, string iterated character freq. incremented in char. arry and max freq. element is printed. 

int main() {
    string s = "abcacbade";
    int n = s.size();
    char arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        arr[s[i]-'a']++;
    }
    int maxFreq = INT_MIN;
    char ch;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxFreq) {
            maxFreq = arr[i];
            ch = 'a'+i;
        }
    }
    cout << ch << " " << maxFreq << endl;
    return 0;
}