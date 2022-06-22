/*
    IMP. - Insert an element from unsorted array to its correct position 
           [ means elements before that no. should be lesser than the number 
                 and the elements after it should be large than the number] in sorted array.
*/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    int current, i, j;
    for (i = 1; i < n; i++) {
        current = arr[i];
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > current) {
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = current;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// look for the brain teaser at the end of Lecture_22.