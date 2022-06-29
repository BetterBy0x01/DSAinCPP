/*
    Find the first and last occurence of a number in an array.
*/
#include <bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int i, int key, int n) {
    if(n == 0) {
        return -1;
    }
    if(arr[0]==key) {
        return i;
    }
    i++;
    return first_occ(arr+1, i, key, n-1);          // nice way of calling an array 
}

int last_occ(int arr[], int i, int j, int key, int n) {
    if(n == 0) {
        return j;
    }
    if(arr[0]==key) {
        j = i;
    }
    i++;
    return last_occ(arr+1, i, j, key, n-1);

}

int main() {
    int arr[] = {4,2,1,2,5,2,7};
    int i = 0, j = -1;
    cout << first_occ(arr, i, 2, 7) << endl;
    i = 0;
    cout << last_occ(arr, i, j, 2, 7) << endl;
    return 0;
}