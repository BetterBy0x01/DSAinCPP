/*
    Q. Check if there exists two elements in an array such that their sum is equal to given k.
*/

// BRUTE FORCE
// #include <bits/stdc++.h>
// using namespace std;

// bool pairsum(int arr[], int n, int k) {
//     for (int i = 0; i < n; i++) {
//         for (int j = (i+1); j < n; j++) {
//             if (arr[i]+arr[j] == k) {
//                 cout << i << " " << j << "\n";
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[]={2,4,7,11,14,16,20,21};    
//     int k = 31;
//     cout << pairsum(arr, 8, k) << endl;
//     return 0;
// }


// OPTIMIZED IF SORTED ARRAY 

#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k) {
    int st=0, en=(n-1);
    while (st < en) {
        if (arr[st] + arr[en] < k) {
            st++;
        }
        else if (arr[st] + arr[en] > k) {
            en--;
        }
        else {
            cout << st << " " << en << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int arr[]={2,4,7,11,14,16,20,21};    
    int k = 31;
    cout << pairsum(arr, 8, k) << endl;
    return 0;
}