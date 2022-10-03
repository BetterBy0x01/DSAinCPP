/*
    IMP. - Find the min. element in unsorted array and swap it with element at beginning
*/
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {         // i goes from first to second last
        for (int j = i+1; j < n; j++) {     // j goes from second to last
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}