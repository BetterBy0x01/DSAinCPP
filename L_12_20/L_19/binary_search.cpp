/*
    After k iteration, length of array = n/2^k
    Length of the array becomes 1 after k iterations
    Therefore, n/2^k = 1
    O(log(n))
*/
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int mid, low=0, high=(n-1), flag = 0;
    while(low <= high) {
        mid = (low+high)/2;
        if(key == arr[mid]) {
            flag = 1;
            break;
        }
        else if(key < arr[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    if (flag == 0) {
        return -1;
    }
    return mid;
}

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> key;
    cout << binary_search(arr, n, key) << endl;         //returns index where key is found.
    return 0;
}